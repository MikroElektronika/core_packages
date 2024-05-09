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

#ifndef _PIC18F86J72_H_
#define _PIC18F86J72_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F86J72
 */
#ifndef _XC_H_
#warning Header file pic18f86j72.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: PADCFG1
#define PADCFG1 PADCFG1
extern volatile unsigned char           PADCFG1             __at(0xF54);
#ifndef _LIB_BUILD
asm("PADCFG1 equ 0F54h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned RTSECSEL0              :1;
        unsigned RTSECSEL1              :1;
    };
} PADCFG1bits_t;
extern volatile PADCFG1bits_t PADCFG1bits __at(0xF54);
// bitfield macros
#define _PADCFG1_RTSECSEL0_POSN                             0x1
#define _PADCFG1_RTSECSEL0_POSITION                         0x1
#define _PADCFG1_RTSECSEL0_SIZE                             0x1
#define _PADCFG1_RTSECSEL0_LENGTH                           0x1
#define _PADCFG1_RTSECSEL0_MASK                             0x2
#define _PADCFG1_RTSECSEL1_POSN                             0x2
#define _PADCFG1_RTSECSEL1_POSITION                         0x2
#define _PADCFG1_RTSECSEL1_SIZE                             0x1
#define _PADCFG1_RTSECSEL1_LENGTH                           0x1
#define _PADCFG1_RTSECSEL1_MASK                             0x4

// Register: CTMUICON
#define CTMUICON CTMUICON
extern volatile unsigned char           CTMUICON            __at(0xF55);
#ifndef _LIB_BUILD
asm("CTMUICON equ 0F55h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IRNG                   :2;
        unsigned ITRIM                  :6;
    };
    struct {
        unsigned IRNG0                  :1;
        unsigned IRNG1                  :1;
        unsigned ITRIM0                 :1;
        unsigned ITRIM1                 :1;
        unsigned ITRIM2                 :1;
        unsigned ITRIM3                 :1;
        unsigned ITRIM4                 :1;
        unsigned ITRIM5                 :1;
    };
} CTMUICONbits_t;
extern volatile CTMUICONbits_t CTMUICONbits __at(0xF55);
// bitfield macros
#define _CTMUICON_IRNG_POSN                                 0x0
#define _CTMUICON_IRNG_POSITION                             0x0
#define _CTMUICON_IRNG_SIZE                                 0x2
#define _CTMUICON_IRNG_LENGTH                               0x2
#define _CTMUICON_IRNG_MASK                                 0x3
#define _CTMUICON_ITRIM_POSN                                0x2
#define _CTMUICON_ITRIM_POSITION                            0x2
#define _CTMUICON_ITRIM_SIZE                                0x6
#define _CTMUICON_ITRIM_LENGTH                              0x6
#define _CTMUICON_ITRIM_MASK                                0xFC
#define _CTMUICON_IRNG0_POSN                                0x0
#define _CTMUICON_IRNG0_POSITION                            0x0
#define _CTMUICON_IRNG0_SIZE                                0x1
#define _CTMUICON_IRNG0_LENGTH                              0x1
#define _CTMUICON_IRNG0_MASK                                0x1
#define _CTMUICON_IRNG1_POSN                                0x1
#define _CTMUICON_IRNG1_POSITION                            0x1
#define _CTMUICON_IRNG1_SIZE                                0x1
#define _CTMUICON_IRNG1_LENGTH                              0x1
#define _CTMUICON_IRNG1_MASK                                0x2
#define _CTMUICON_ITRIM0_POSN                               0x2
#define _CTMUICON_ITRIM0_POSITION                           0x2
#define _CTMUICON_ITRIM0_SIZE                               0x1
#define _CTMUICON_ITRIM0_LENGTH                             0x1
#define _CTMUICON_ITRIM0_MASK                               0x4
#define _CTMUICON_ITRIM1_POSN                               0x3
#define _CTMUICON_ITRIM1_POSITION                           0x3
#define _CTMUICON_ITRIM1_SIZE                               0x1
#define _CTMUICON_ITRIM1_LENGTH                             0x1
#define _CTMUICON_ITRIM1_MASK                               0x8
#define _CTMUICON_ITRIM2_POSN                               0x4
#define _CTMUICON_ITRIM2_POSITION                           0x4
#define _CTMUICON_ITRIM2_SIZE                               0x1
#define _CTMUICON_ITRIM2_LENGTH                             0x1
#define _CTMUICON_ITRIM2_MASK                               0x10
#define _CTMUICON_ITRIM3_POSN                               0x5
#define _CTMUICON_ITRIM3_POSITION                           0x5
#define _CTMUICON_ITRIM3_SIZE                               0x1
#define _CTMUICON_ITRIM3_LENGTH                             0x1
#define _CTMUICON_ITRIM3_MASK                               0x20
#define _CTMUICON_ITRIM4_POSN                               0x6
#define _CTMUICON_ITRIM4_POSITION                           0x6
#define _CTMUICON_ITRIM4_SIZE                               0x1
#define _CTMUICON_ITRIM4_LENGTH                             0x1
#define _CTMUICON_ITRIM4_MASK                               0x40
#define _CTMUICON_ITRIM5_POSN                               0x7
#define _CTMUICON_ITRIM5_POSITION                           0x7
#define _CTMUICON_ITRIM5_SIZE                               0x1
#define _CTMUICON_ITRIM5_LENGTH                             0x1
#define _CTMUICON_ITRIM5_MASK                               0x80

// Register: CTMUCONL
#define CTMUCONL CTMUCONL
extern volatile unsigned char           CTMUCONL            __at(0xF56);
#ifndef _LIB_BUILD
asm("CTMUCONL equ 0F56h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EDG1STAT               :1;
        unsigned EDG2STAT               :1;
        unsigned EDG1SEL0               :1;
        unsigned EDG1SEL1               :1;
        unsigned EDG1POL                :1;
        unsigned EDG2SEL0               :1;
        unsigned EDG2SEL1               :1;
        unsigned EDG2POL                :1;
    };
} CTMUCONLbits_t;
extern volatile CTMUCONLbits_t CTMUCONLbits __at(0xF56);
// bitfield macros
#define _CTMUCONL_EDG1STAT_POSN                             0x0
#define _CTMUCONL_EDG1STAT_POSITION                         0x0
#define _CTMUCONL_EDG1STAT_SIZE                             0x1
#define _CTMUCONL_EDG1STAT_LENGTH                           0x1
#define _CTMUCONL_EDG1STAT_MASK                             0x1
#define _CTMUCONL_EDG2STAT_POSN                             0x1
#define _CTMUCONL_EDG2STAT_POSITION                         0x1
#define _CTMUCONL_EDG2STAT_SIZE                             0x1
#define _CTMUCONL_EDG2STAT_LENGTH                           0x1
#define _CTMUCONL_EDG2STAT_MASK                             0x2
#define _CTMUCONL_EDG1SEL0_POSN                             0x2
#define _CTMUCONL_EDG1SEL0_POSITION                         0x2
#define _CTMUCONL_EDG1SEL0_SIZE                             0x1
#define _CTMUCONL_EDG1SEL0_LENGTH                           0x1
#define _CTMUCONL_EDG1SEL0_MASK                             0x4
#define _CTMUCONL_EDG1SEL1_POSN                             0x3
#define _CTMUCONL_EDG1SEL1_POSITION                         0x3
#define _CTMUCONL_EDG1SEL1_SIZE                             0x1
#define _CTMUCONL_EDG1SEL1_LENGTH                           0x1
#define _CTMUCONL_EDG1SEL1_MASK                             0x8
#define _CTMUCONL_EDG1POL_POSN                              0x4
#define _CTMUCONL_EDG1POL_POSITION                          0x4
#define _CTMUCONL_EDG1POL_SIZE                              0x1
#define _CTMUCONL_EDG1POL_LENGTH                            0x1
#define _CTMUCONL_EDG1POL_MASK                              0x10
#define _CTMUCONL_EDG2SEL0_POSN                             0x5
#define _CTMUCONL_EDG2SEL0_POSITION                         0x5
#define _CTMUCONL_EDG2SEL0_SIZE                             0x1
#define _CTMUCONL_EDG2SEL0_LENGTH                           0x1
#define _CTMUCONL_EDG2SEL0_MASK                             0x20
#define _CTMUCONL_EDG2SEL1_POSN                             0x6
#define _CTMUCONL_EDG2SEL1_POSITION                         0x6
#define _CTMUCONL_EDG2SEL1_SIZE                             0x1
#define _CTMUCONL_EDG2SEL1_LENGTH                           0x1
#define _CTMUCONL_EDG2SEL1_MASK                             0x40
#define _CTMUCONL_EDG2POL_POSN                              0x7
#define _CTMUCONL_EDG2POL_POSITION                          0x7
#define _CTMUCONL_EDG2POL_SIZE                              0x1
#define _CTMUCONL_EDG2POL_LENGTH                            0x1
#define _CTMUCONL_EDG2POL_MASK                              0x80

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
extern volatile unsigned char           CTMUCONH            __at(0xF57);
#ifndef _LIB_BUILD
asm("CTMUCONH equ 0F57h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CTTRIG                 :1;
        unsigned IDISSEN                :1;
        unsigned EDGSEQEN               :1;
        unsigned EDGEN                  :1;
        unsigned TGEN                   :1;
        unsigned CTMUSIDL               :1;
        unsigned                        :1;
        unsigned CTMUEN                 :1;
    };
} CTMUCONHbits_t;
extern volatile CTMUCONHbits_t CTMUCONHbits __at(0xF57);
// bitfield macros
#define _CTMUCONH_CTTRIG_POSN                               0x0
#define _CTMUCONH_CTTRIG_POSITION                           0x0
#define _CTMUCONH_CTTRIG_SIZE                               0x1
#define _CTMUCONH_CTTRIG_LENGTH                             0x1
#define _CTMUCONH_CTTRIG_MASK                               0x1
#define _CTMUCONH_IDISSEN_POSN                              0x1
#define _CTMUCONH_IDISSEN_POSITION                          0x1
#define _CTMUCONH_IDISSEN_SIZE                              0x1
#define _CTMUCONH_IDISSEN_LENGTH                            0x1
#define _CTMUCONH_IDISSEN_MASK                              0x2
#define _CTMUCONH_EDGSEQEN_POSN                             0x2
#define _CTMUCONH_EDGSEQEN_POSITION                         0x2
#define _CTMUCONH_EDGSEQEN_SIZE                             0x1
#define _CTMUCONH_EDGSEQEN_LENGTH                           0x1
#define _CTMUCONH_EDGSEQEN_MASK                             0x4
#define _CTMUCONH_EDGEN_POSN                                0x3
#define _CTMUCONH_EDGEN_POSITION                            0x3
#define _CTMUCONH_EDGEN_SIZE                                0x1
#define _CTMUCONH_EDGEN_LENGTH                              0x1
#define _CTMUCONH_EDGEN_MASK                                0x8
#define _CTMUCONH_TGEN_POSN                                 0x4
#define _CTMUCONH_TGEN_POSITION                             0x4
#define _CTMUCONH_TGEN_SIZE                                 0x1
#define _CTMUCONH_TGEN_LENGTH                               0x1
#define _CTMUCONH_TGEN_MASK                                 0x10
#define _CTMUCONH_CTMUSIDL_POSN                             0x5
#define _CTMUCONH_CTMUSIDL_POSITION                         0x5
#define _CTMUCONH_CTMUSIDL_SIZE                             0x1
#define _CTMUCONH_CTMUSIDL_LENGTH                           0x1
#define _CTMUCONH_CTMUSIDL_MASK                             0x20
#define _CTMUCONH_CTMUEN_POSN                               0x7
#define _CTMUCONH_CTMUEN_POSITION                           0x7
#define _CTMUCONH_CTMUEN_SIZE                               0x1
#define _CTMUCONH_CTMUEN_LENGTH                             0x1
#define _CTMUCONH_CTMUEN_MASK                               0x80

// Register: ALRMVALL
#define ALRMVALL ALRMVALL
extern volatile unsigned char           ALRMVALL            __at(0xF58);
#ifndef _LIB_BUILD
asm("ALRMVALL equ 0F58h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ALRMVALL               :8;
    };
} ALRMVALLbits_t;
extern volatile ALRMVALLbits_t ALRMVALLbits __at(0xF58);
// bitfield macros
#define _ALRMVALL_ALRMVALL_POSN                             0x0
#define _ALRMVALL_ALRMVALL_POSITION                         0x0
#define _ALRMVALL_ALRMVALL_SIZE                             0x8
#define _ALRMVALL_ALRMVALL_LENGTH                           0x8
#define _ALRMVALL_ALRMVALL_MASK                             0xFF

// Register: ALRMVALH
#define ALRMVALH ALRMVALH
extern volatile unsigned char           ALRMVALH            __at(0xF59);
#ifndef _LIB_BUILD
asm("ALRMVALH equ 0F59h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ALRMVALH               :8;
    };
} ALRMVALHbits_t;
extern volatile ALRMVALHbits_t ALRMVALHbits __at(0xF59);
// bitfield macros
#define _ALRMVALH_ALRMVALH_POSN                             0x0
#define _ALRMVALH_ALRMVALH_POSITION                         0x0
#define _ALRMVALH_ALRMVALH_SIZE                             0x8
#define _ALRMVALH_ALRMVALH_LENGTH                           0x8
#define _ALRMVALH_ALRMVALH_MASK                             0xFF

// Register: ALRMRPT
#define ALRMRPT ALRMRPT
extern volatile unsigned char           ALRMRPT             __at(0xF5A);
#ifndef _LIB_BUILD
asm("ALRMRPT equ 0F5Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ARPT                   :8;
    };
    struct {
        unsigned ARPT0                  :1;
        unsigned ARPT1                  :1;
        unsigned ARPT2                  :1;
        unsigned ARPT3                  :1;
        unsigned ARPT4                  :1;
        unsigned ARPT5                  :1;
        unsigned ARPT6                  :1;
        unsigned ARPT7                  :1;
    };
} ALRMRPTbits_t;
extern volatile ALRMRPTbits_t ALRMRPTbits __at(0xF5A);
// bitfield macros
#define _ALRMRPT_ARPT_POSN                                  0x0
#define _ALRMRPT_ARPT_POSITION                              0x0
#define _ALRMRPT_ARPT_SIZE                                  0x8
#define _ALRMRPT_ARPT_LENGTH                                0x8
#define _ALRMRPT_ARPT_MASK                                  0xFF
#define _ALRMRPT_ARPT0_POSN                                 0x0
#define _ALRMRPT_ARPT0_POSITION                             0x0
#define _ALRMRPT_ARPT0_SIZE                                 0x1
#define _ALRMRPT_ARPT0_LENGTH                               0x1
#define _ALRMRPT_ARPT0_MASK                                 0x1
#define _ALRMRPT_ARPT1_POSN                                 0x1
#define _ALRMRPT_ARPT1_POSITION                             0x1
#define _ALRMRPT_ARPT1_SIZE                                 0x1
#define _ALRMRPT_ARPT1_LENGTH                               0x1
#define _ALRMRPT_ARPT1_MASK                                 0x2
#define _ALRMRPT_ARPT2_POSN                                 0x2
#define _ALRMRPT_ARPT2_POSITION                             0x2
#define _ALRMRPT_ARPT2_SIZE                                 0x1
#define _ALRMRPT_ARPT2_LENGTH                               0x1
#define _ALRMRPT_ARPT2_MASK                                 0x4
#define _ALRMRPT_ARPT3_POSN                                 0x3
#define _ALRMRPT_ARPT3_POSITION                             0x3
#define _ALRMRPT_ARPT3_SIZE                                 0x1
#define _ALRMRPT_ARPT3_LENGTH                               0x1
#define _ALRMRPT_ARPT3_MASK                                 0x8
#define _ALRMRPT_ARPT4_POSN                                 0x4
#define _ALRMRPT_ARPT4_POSITION                             0x4
#define _ALRMRPT_ARPT4_SIZE                                 0x1
#define _ALRMRPT_ARPT4_LENGTH                               0x1
#define _ALRMRPT_ARPT4_MASK                                 0x10
#define _ALRMRPT_ARPT5_POSN                                 0x5
#define _ALRMRPT_ARPT5_POSITION                             0x5
#define _ALRMRPT_ARPT5_SIZE                                 0x1
#define _ALRMRPT_ARPT5_LENGTH                               0x1
#define _ALRMRPT_ARPT5_MASK                                 0x20
#define _ALRMRPT_ARPT6_POSN                                 0x6
#define _ALRMRPT_ARPT6_POSITION                             0x6
#define _ALRMRPT_ARPT6_SIZE                                 0x1
#define _ALRMRPT_ARPT6_LENGTH                               0x1
#define _ALRMRPT_ARPT6_MASK                                 0x40
#define _ALRMRPT_ARPT7_POSN                                 0x7
#define _ALRMRPT_ARPT7_POSITION                             0x7
#define _ALRMRPT_ARPT7_SIZE                                 0x1
#define _ALRMRPT_ARPT7_LENGTH                               0x1
#define _ALRMRPT_ARPT7_MASK                                 0x80

// Register: ALRMCFG
#define ALRMCFG ALRMCFG
extern volatile unsigned char           ALRMCFG             __at(0xF5B);
#ifndef _LIB_BUILD
asm("ALRMCFG equ 0F5Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ALRMPTR                :2;
        unsigned AMASK                  :4;
        unsigned CHIME                  :1;
        unsigned ALRMEN                 :1;
    };
    struct {
        unsigned ALRMPTR0               :1;
        unsigned ALRMPTR1               :1;
        unsigned AMASK0                 :1;
        unsigned AMASK1                 :1;
        unsigned AMASK2                 :1;
        unsigned AMASK3                 :1;
    };
} ALRMCFGbits_t;
extern volatile ALRMCFGbits_t ALRMCFGbits __at(0xF5B);
// bitfield macros
#define _ALRMCFG_ALRMPTR_POSN                               0x0
#define _ALRMCFG_ALRMPTR_POSITION                           0x0
#define _ALRMCFG_ALRMPTR_SIZE                               0x2
#define _ALRMCFG_ALRMPTR_LENGTH                             0x2
#define _ALRMCFG_ALRMPTR_MASK                               0x3
#define _ALRMCFG_AMASK_POSN                                 0x2
#define _ALRMCFG_AMASK_POSITION                             0x2
#define _ALRMCFG_AMASK_SIZE                                 0x4
#define _ALRMCFG_AMASK_LENGTH                               0x4
#define _ALRMCFG_AMASK_MASK                                 0x3C
#define _ALRMCFG_CHIME_POSN                                 0x6
#define _ALRMCFG_CHIME_POSITION                             0x6
#define _ALRMCFG_CHIME_SIZE                                 0x1
#define _ALRMCFG_CHIME_LENGTH                               0x1
#define _ALRMCFG_CHIME_MASK                                 0x40
#define _ALRMCFG_ALRMEN_POSN                                0x7
#define _ALRMCFG_ALRMEN_POSITION                            0x7
#define _ALRMCFG_ALRMEN_SIZE                                0x1
#define _ALRMCFG_ALRMEN_LENGTH                              0x1
#define _ALRMCFG_ALRMEN_MASK                                0x80
#define _ALRMCFG_ALRMPTR0_POSN                              0x0
#define _ALRMCFG_ALRMPTR0_POSITION                          0x0
#define _ALRMCFG_ALRMPTR0_SIZE                              0x1
#define _ALRMCFG_ALRMPTR0_LENGTH                            0x1
#define _ALRMCFG_ALRMPTR0_MASK                              0x1
#define _ALRMCFG_ALRMPTR1_POSN                              0x1
#define _ALRMCFG_ALRMPTR1_POSITION                          0x1
#define _ALRMCFG_ALRMPTR1_SIZE                              0x1
#define _ALRMCFG_ALRMPTR1_LENGTH                            0x1
#define _ALRMCFG_ALRMPTR1_MASK                              0x2
#define _ALRMCFG_AMASK0_POSN                                0x2
#define _ALRMCFG_AMASK0_POSITION                            0x2
#define _ALRMCFG_AMASK0_SIZE                                0x1
#define _ALRMCFG_AMASK0_LENGTH                              0x1
#define _ALRMCFG_AMASK0_MASK                                0x4
#define _ALRMCFG_AMASK1_POSN                                0x3
#define _ALRMCFG_AMASK1_POSITION                            0x3
#define _ALRMCFG_AMASK1_SIZE                                0x1
#define _ALRMCFG_AMASK1_LENGTH                              0x1
#define _ALRMCFG_AMASK1_MASK                                0x8
#define _ALRMCFG_AMASK2_POSN                                0x4
#define _ALRMCFG_AMASK2_POSITION                            0x4
#define _ALRMCFG_AMASK2_SIZE                                0x1
#define _ALRMCFG_AMASK2_LENGTH                              0x1
#define _ALRMCFG_AMASK2_MASK                                0x10
#define _ALRMCFG_AMASK3_POSN                                0x5
#define _ALRMCFG_AMASK3_POSITION                            0x5
#define _ALRMCFG_AMASK3_SIZE                                0x1
#define _ALRMCFG_AMASK3_LENGTH                              0x1
#define _ALRMCFG_AMASK3_MASK                                0x20

// Register: RTCVALL
#define RTCVALL RTCVALL
extern volatile unsigned char           RTCVALL             __at(0xF5C);
#ifndef _LIB_BUILD
asm("RTCVALL equ 0F5Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCVALL                :8;
    };
} RTCVALLbits_t;
extern volatile RTCVALLbits_t RTCVALLbits __at(0xF5C);
// bitfield macros
#define _RTCVALL_RTCVALL_POSN                               0x0
#define _RTCVALL_RTCVALL_POSITION                           0x0
#define _RTCVALL_RTCVALL_SIZE                               0x8
#define _RTCVALL_RTCVALL_LENGTH                             0x8
#define _RTCVALL_RTCVALL_MASK                               0xFF

// Register: RTCVALH
#define RTCVALH RTCVALH
extern volatile unsigned char           RTCVALH             __at(0xF5D);
#ifndef _LIB_BUILD
asm("RTCVALH equ 0F5Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCVALH                :8;
    };
    struct {
        unsigned WAITE0                 :1;
        unsigned WAITE1                 :1;
        unsigned WAITM0                 :1;
        unsigned WAITM1                 :1;
        unsigned WAITM2                 :1;
        unsigned WAITM3                 :1;
        unsigned WAITB0                 :1;
        unsigned WAITB1                 :1;
    };
} RTCVALHbits_t;
extern volatile RTCVALHbits_t RTCVALHbits __at(0xF5D);
// bitfield macros
#define _RTCVALH_RTCVALH_POSN                               0x0
#define _RTCVALH_RTCVALH_POSITION                           0x0
#define _RTCVALH_RTCVALH_SIZE                               0x8
#define _RTCVALH_RTCVALH_LENGTH                             0x8
#define _RTCVALH_RTCVALH_MASK                               0xFF
#define _RTCVALH_WAITE0_POSN                                0x0
#define _RTCVALH_WAITE0_POSITION                            0x0
#define _RTCVALH_WAITE0_SIZE                                0x1
#define _RTCVALH_WAITE0_LENGTH                              0x1
#define _RTCVALH_WAITE0_MASK                                0x1
#define _RTCVALH_WAITE1_POSN                                0x1
#define _RTCVALH_WAITE1_POSITION                            0x1
#define _RTCVALH_WAITE1_SIZE                                0x1
#define _RTCVALH_WAITE1_LENGTH                              0x1
#define _RTCVALH_WAITE1_MASK                                0x2
#define _RTCVALH_WAITM0_POSN                                0x2
#define _RTCVALH_WAITM0_POSITION                            0x2
#define _RTCVALH_WAITM0_SIZE                                0x1
#define _RTCVALH_WAITM0_LENGTH                              0x1
#define _RTCVALH_WAITM0_MASK                                0x4
#define _RTCVALH_WAITM1_POSN                                0x3
#define _RTCVALH_WAITM1_POSITION                            0x3
#define _RTCVALH_WAITM1_SIZE                                0x1
#define _RTCVALH_WAITM1_LENGTH                              0x1
#define _RTCVALH_WAITM1_MASK                                0x8
#define _RTCVALH_WAITM2_POSN                                0x4
#define _RTCVALH_WAITM2_POSITION                            0x4
#define _RTCVALH_WAITM2_SIZE                                0x1
#define _RTCVALH_WAITM2_LENGTH                              0x1
#define _RTCVALH_WAITM2_MASK                                0x10
#define _RTCVALH_WAITM3_POSN                                0x5
#define _RTCVALH_WAITM3_POSITION                            0x5
#define _RTCVALH_WAITM3_SIZE                                0x1
#define _RTCVALH_WAITM3_LENGTH                              0x1
#define _RTCVALH_WAITM3_MASK                                0x20
#define _RTCVALH_WAITB0_POSN                                0x6
#define _RTCVALH_WAITB0_POSITION                            0x6
#define _RTCVALH_WAITB0_SIZE                                0x1
#define _RTCVALH_WAITB0_LENGTH                              0x1
#define _RTCVALH_WAITB0_MASK                                0x40
#define _RTCVALH_WAITB1_POSN                                0x7
#define _RTCVALH_WAITB1_POSITION                            0x7
#define _RTCVALH_WAITB1_SIZE                                0x1
#define _RTCVALH_WAITB1_LENGTH                              0x1
#define _RTCVALH_WAITB1_MASK                                0x80

// Register: RTCCAL
#define RTCCAL RTCCAL
extern volatile unsigned char           RTCCAL              __at(0xF5E);
#ifndef _LIB_BUILD
asm("RTCCAL equ 0F5Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CAL                    :8;
    };
    struct {
        unsigned CAL0                   :1;
        unsigned CAL1                   :1;
        unsigned CAL2                   :1;
        unsigned CAL3                   :1;
        unsigned CAL4                   :1;
        unsigned CAL5                   :1;
        unsigned CAL6                   :1;
        unsigned CAL7                   :1;
    };
} RTCCALbits_t;
extern volatile RTCCALbits_t RTCCALbits __at(0xF5E);
// bitfield macros
#define _RTCCAL_CAL_POSN                                    0x0
#define _RTCCAL_CAL_POSITION                                0x0
#define _RTCCAL_CAL_SIZE                                    0x8
#define _RTCCAL_CAL_LENGTH                                  0x8
#define _RTCCAL_CAL_MASK                                    0xFF
#define _RTCCAL_CAL0_POSN                                   0x0
#define _RTCCAL_CAL0_POSITION                               0x0
#define _RTCCAL_CAL0_SIZE                                   0x1
#define _RTCCAL_CAL0_LENGTH                                 0x1
#define _RTCCAL_CAL0_MASK                                   0x1
#define _RTCCAL_CAL1_POSN                                   0x1
#define _RTCCAL_CAL1_POSITION                               0x1
#define _RTCCAL_CAL1_SIZE                                   0x1
#define _RTCCAL_CAL1_LENGTH                                 0x1
#define _RTCCAL_CAL1_MASK                                   0x2
#define _RTCCAL_CAL2_POSN                                   0x2
#define _RTCCAL_CAL2_POSITION                               0x2
#define _RTCCAL_CAL2_SIZE                                   0x1
#define _RTCCAL_CAL2_LENGTH                                 0x1
#define _RTCCAL_CAL2_MASK                                   0x4
#define _RTCCAL_CAL3_POSN                                   0x3
#define _RTCCAL_CAL3_POSITION                               0x3
#define _RTCCAL_CAL3_SIZE                                   0x1
#define _RTCCAL_CAL3_LENGTH                                 0x1
#define _RTCCAL_CAL3_MASK                                   0x8
#define _RTCCAL_CAL4_POSN                                   0x4
#define _RTCCAL_CAL4_POSITION                               0x4
#define _RTCCAL_CAL4_SIZE                                   0x1
#define _RTCCAL_CAL4_LENGTH                                 0x1
#define _RTCCAL_CAL4_MASK                                   0x10
#define _RTCCAL_CAL5_POSN                                   0x5
#define _RTCCAL_CAL5_POSITION                               0x5
#define _RTCCAL_CAL5_SIZE                                   0x1
#define _RTCCAL_CAL5_LENGTH                                 0x1
#define _RTCCAL_CAL5_MASK                                   0x20
#define _RTCCAL_CAL6_POSN                                   0x6
#define _RTCCAL_CAL6_POSITION                               0x6
#define _RTCCAL_CAL6_SIZE                                   0x1
#define _RTCCAL_CAL6_LENGTH                                 0x1
#define _RTCCAL_CAL6_MASK                                   0x40
#define _RTCCAL_CAL7_POSN                                   0x7
#define _RTCCAL_CAL7_POSITION                               0x7
#define _RTCCAL_CAL7_SIZE                                   0x1
#define _RTCCAL_CAL7_LENGTH                                 0x1
#define _RTCCAL_CAL7_MASK                                   0x80

// Register: RTCCFG
#define RTCCFG RTCCFG
extern volatile unsigned char           RTCCFG              __at(0xF5F);
#ifndef _LIB_BUILD
asm("RTCCFG equ 0F5Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCPTR0                :1;
        unsigned RTCPTR1                :1;
        unsigned RTCOE                  :1;
        unsigned HALFSEC                :1;
        unsigned RTCSYNC                :1;
        unsigned RTCWREN                :1;
        unsigned                        :1;
        unsigned RTCEN                  :1;
    };
} RTCCFGbits_t;
extern volatile RTCCFGbits_t RTCCFGbits __at(0xF5F);
// bitfield macros
#define _RTCCFG_RTCPTR0_POSN                                0x0
#define _RTCCFG_RTCPTR0_POSITION                            0x0
#define _RTCCFG_RTCPTR0_SIZE                                0x1
#define _RTCCFG_RTCPTR0_LENGTH                              0x1
#define _RTCCFG_RTCPTR0_MASK                                0x1
#define _RTCCFG_RTCPTR1_POSN                                0x1
#define _RTCCFG_RTCPTR1_POSITION                            0x1
#define _RTCCFG_RTCPTR1_SIZE                                0x1
#define _RTCCFG_RTCPTR1_LENGTH                              0x1
#define _RTCCFG_RTCPTR1_MASK                                0x2
#define _RTCCFG_RTCOE_POSN                                  0x2
#define _RTCCFG_RTCOE_POSITION                              0x2
#define _RTCCFG_RTCOE_SIZE                                  0x1
#define _RTCCFG_RTCOE_LENGTH                                0x1
#define _RTCCFG_RTCOE_MASK                                  0x4
#define _RTCCFG_HALFSEC_POSN                                0x3
#define _RTCCFG_HALFSEC_POSITION                            0x3
#define _RTCCFG_HALFSEC_SIZE                                0x1
#define _RTCCFG_HALFSEC_LENGTH                              0x1
#define _RTCCFG_HALFSEC_MASK                                0x8
#define _RTCCFG_RTCSYNC_POSN                                0x4
#define _RTCCFG_RTCSYNC_POSITION                            0x4
#define _RTCCFG_RTCSYNC_SIZE                                0x1
#define _RTCCFG_RTCSYNC_LENGTH                              0x1
#define _RTCCFG_RTCSYNC_MASK                                0x10
#define _RTCCFG_RTCWREN_POSN                                0x5
#define _RTCCFG_RTCWREN_POSITION                            0x5
#define _RTCCFG_RTCWREN_SIZE                                0x1
#define _RTCCFG_RTCWREN_LENGTH                              0x1
#define _RTCCFG_RTCWREN_MASK                                0x20
#define _RTCCFG_RTCEN_POSN                                  0x7
#define _RTCCFG_RTCEN_POSITION                              0x7
#define _RTCCFG_RTCEN_SIZE                                  0x1
#define _RTCCFG_RTCEN_LENGTH                                0x1
#define _RTCCFG_RTCEN_MASK                                  0x80

// Register: RCSTA2
#define RCSTA2 RCSTA2
extern volatile unsigned char           RCSTA2              __at(0xF60);
#ifndef _LIB_BUILD
asm("RCSTA2 equ 0F60h");
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
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D2                  :1;
        unsigned OERR2                  :1;
        unsigned FERR2                  :1;
        unsigned ADDEN2                 :1;
        unsigned CREN2                  :1;
        unsigned SREN2                  :1;
        unsigned RX92                   :1;
        unsigned SPEN2                  :1;
    };
    struct {
        unsigned RCD82                  :1;
        unsigned                        :5;
        unsigned RC8_92                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC92                   :1;
    };
} RCSTA2bits_t;
extern volatile RCSTA2bits_t RCSTA2bits __at(0xF60);
// bitfield macros
#define _RCSTA2_RX9D_POSN                                   0x0
#define _RCSTA2_RX9D_POSITION                               0x0
#define _RCSTA2_RX9D_SIZE                                   0x1
#define _RCSTA2_RX9D_LENGTH                                 0x1
#define _RCSTA2_RX9D_MASK                                   0x1
#define _RCSTA2_OERR_POSN                                   0x1
#define _RCSTA2_OERR_POSITION                               0x1
#define _RCSTA2_OERR_SIZE                                   0x1
#define _RCSTA2_OERR_LENGTH                                 0x1
#define _RCSTA2_OERR_MASK                                   0x2
#define _RCSTA2_FERR_POSN                                   0x2
#define _RCSTA2_FERR_POSITION                               0x2
#define _RCSTA2_FERR_SIZE                                   0x1
#define _RCSTA2_FERR_LENGTH                                 0x1
#define _RCSTA2_FERR_MASK                                   0x4
#define _RCSTA2_ADDEN_POSN                                  0x3
#define _RCSTA2_ADDEN_POSITION                              0x3
#define _RCSTA2_ADDEN_SIZE                                  0x1
#define _RCSTA2_ADDEN_LENGTH                                0x1
#define _RCSTA2_ADDEN_MASK                                  0x8
#define _RCSTA2_CREN_POSN                                   0x4
#define _RCSTA2_CREN_POSITION                               0x4
#define _RCSTA2_CREN_SIZE                                   0x1
#define _RCSTA2_CREN_LENGTH                                 0x1
#define _RCSTA2_CREN_MASK                                   0x10
#define _RCSTA2_SREN_POSN                                   0x5
#define _RCSTA2_SREN_POSITION                               0x5
#define _RCSTA2_SREN_SIZE                                   0x1
#define _RCSTA2_SREN_LENGTH                                 0x1
#define _RCSTA2_SREN_MASK                                   0x20
#define _RCSTA2_RX9_POSN                                    0x6
#define _RCSTA2_RX9_POSITION                                0x6
#define _RCSTA2_RX9_SIZE                                    0x1
#define _RCSTA2_RX9_LENGTH                                  0x1
#define _RCSTA2_RX9_MASK                                    0x40
#define _RCSTA2_SPEN_POSN                                   0x7
#define _RCSTA2_SPEN_POSITION                               0x7
#define _RCSTA2_SPEN_SIZE                                   0x1
#define _RCSTA2_SPEN_LENGTH                                 0x1
#define _RCSTA2_SPEN_MASK                                   0x80
#define _RCSTA2_RCD8_POSN                                   0x0
#define _RCSTA2_RCD8_POSITION                               0x0
#define _RCSTA2_RCD8_SIZE                                   0x1
#define _RCSTA2_RCD8_LENGTH                                 0x1
#define _RCSTA2_RCD8_MASK                                   0x1
#define _RCSTA2_RC9_POSN                                    0x6
#define _RCSTA2_RC9_POSITION                                0x6
#define _RCSTA2_RC9_SIZE                                    0x1
#define _RCSTA2_RC9_LENGTH                                  0x1
#define _RCSTA2_RC9_MASK                                    0x40
#define _RCSTA2_NOT_RC8_POSN                                0x6
#define _RCSTA2_NOT_RC8_POSITION                            0x6
#define _RCSTA2_NOT_RC8_SIZE                                0x1
#define _RCSTA2_NOT_RC8_LENGTH                              0x1
#define _RCSTA2_NOT_RC8_MASK                                0x40
#define _RCSTA2_RC8_9_POSN                                  0x6
#define _RCSTA2_RC8_9_POSITION                              0x6
#define _RCSTA2_RC8_9_SIZE                                  0x1
#define _RCSTA2_RC8_9_LENGTH                                0x1
#define _RCSTA2_RC8_9_MASK                                  0x40
#define _RCSTA2_RX9D2_POSN                                  0x0
#define _RCSTA2_RX9D2_POSITION                              0x0
#define _RCSTA2_RX9D2_SIZE                                  0x1
#define _RCSTA2_RX9D2_LENGTH                                0x1
#define _RCSTA2_RX9D2_MASK                                  0x1
#define _RCSTA2_OERR2_POSN                                  0x1
#define _RCSTA2_OERR2_POSITION                              0x1
#define _RCSTA2_OERR2_SIZE                                  0x1
#define _RCSTA2_OERR2_LENGTH                                0x1
#define _RCSTA2_OERR2_MASK                                  0x2
#define _RCSTA2_FERR2_POSN                                  0x2
#define _RCSTA2_FERR2_POSITION                              0x2
#define _RCSTA2_FERR2_SIZE                                  0x1
#define _RCSTA2_FERR2_LENGTH                                0x1
#define _RCSTA2_FERR2_MASK                                  0x4
#define _RCSTA2_ADDEN2_POSN                                 0x3
#define _RCSTA2_ADDEN2_POSITION                             0x3
#define _RCSTA2_ADDEN2_SIZE                                 0x1
#define _RCSTA2_ADDEN2_LENGTH                               0x1
#define _RCSTA2_ADDEN2_MASK                                 0x8
#define _RCSTA2_CREN2_POSN                                  0x4
#define _RCSTA2_CREN2_POSITION                              0x4
#define _RCSTA2_CREN2_SIZE                                  0x1
#define _RCSTA2_CREN2_LENGTH                                0x1
#define _RCSTA2_CREN2_MASK                                  0x10
#define _RCSTA2_SREN2_POSN                                  0x5
#define _RCSTA2_SREN2_POSITION                              0x5
#define _RCSTA2_SREN2_SIZE                                  0x1
#define _RCSTA2_SREN2_LENGTH                                0x1
#define _RCSTA2_SREN2_MASK                                  0x20
#define _RCSTA2_RX92_POSN                                   0x6
#define _RCSTA2_RX92_POSITION                               0x6
#define _RCSTA2_RX92_SIZE                                   0x1
#define _RCSTA2_RX92_LENGTH                                 0x1
#define _RCSTA2_RX92_MASK                                   0x40
#define _RCSTA2_SPEN2_POSN                                  0x7
#define _RCSTA2_SPEN2_POSITION                              0x7
#define _RCSTA2_SPEN2_SIZE                                  0x1
#define _RCSTA2_SPEN2_LENGTH                                0x1
#define _RCSTA2_SPEN2_MASK                                  0x80
#define _RCSTA2_RCD82_POSN                                  0x0
#define _RCSTA2_RCD82_POSITION                              0x0
#define _RCSTA2_RCD82_SIZE                                  0x1
#define _RCSTA2_RCD82_LENGTH                                0x1
#define _RCSTA2_RCD82_MASK                                  0x1
#define _RCSTA2_RC8_92_POSN                                 0x6
#define _RCSTA2_RC8_92_POSITION                             0x6
#define _RCSTA2_RC8_92_SIZE                                 0x1
#define _RCSTA2_RC8_92_LENGTH                               0x1
#define _RCSTA2_RC8_92_MASK                                 0x40
#define _RCSTA2_RC92_POSN                                   0x6
#define _RCSTA2_RC92_POSITION                               0x6
#define _RCSTA2_RC92_SIZE                                   0x1
#define _RCSTA2_RC92_LENGTH                                 0x1
#define _RCSTA2_RC92_MASK                                   0x40

// Register: TXSTA2
#define TXSTA2 TXSTA2
extern volatile unsigned char           TXSTA2              __at(0xF61);
#ifndef _LIB_BUILD
asm("TXSTA2 equ 0F61h");
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
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned TX9D2                  :1;
        unsigned TRMT2                  :1;
        unsigned BRGH2                  :1;
        unsigned SENDB2                 :1;
        unsigned SYNC2                  :1;
        unsigned TXEN2                  :1;
        unsigned TX92                   :1;
        unsigned CSRC2                  :1;
    };
    struct {
        unsigned TXD82                  :1;
        unsigned                        :5;
        unsigned TX8_92                 :1;
    };
} TXSTA2bits_t;
extern volatile TXSTA2bits_t TXSTA2bits __at(0xF61);
// bitfield macros
#define _TXSTA2_TX9D_POSN                                   0x0
#define _TXSTA2_TX9D_POSITION                               0x0
#define _TXSTA2_TX9D_SIZE                                   0x1
#define _TXSTA2_TX9D_LENGTH                                 0x1
#define _TXSTA2_TX9D_MASK                                   0x1
#define _TXSTA2_TRMT_POSN                                   0x1
#define _TXSTA2_TRMT_POSITION                               0x1
#define _TXSTA2_TRMT_SIZE                                   0x1
#define _TXSTA2_TRMT_LENGTH                                 0x1
#define _TXSTA2_TRMT_MASK                                   0x2
#define _TXSTA2_BRGH_POSN                                   0x2
#define _TXSTA2_BRGH_POSITION                               0x2
#define _TXSTA2_BRGH_SIZE                                   0x1
#define _TXSTA2_BRGH_LENGTH                                 0x1
#define _TXSTA2_BRGH_MASK                                   0x4
#define _TXSTA2_SYNC_POSN                                   0x4
#define _TXSTA2_SYNC_POSITION                               0x4
#define _TXSTA2_SYNC_SIZE                                   0x1
#define _TXSTA2_SYNC_LENGTH                                 0x1
#define _TXSTA2_SYNC_MASK                                   0x10
#define _TXSTA2_TXEN_POSN                                   0x5
#define _TXSTA2_TXEN_POSITION                               0x5
#define _TXSTA2_TXEN_SIZE                                   0x1
#define _TXSTA2_TXEN_LENGTH                                 0x1
#define _TXSTA2_TXEN_MASK                                   0x20
#define _TXSTA2_TX9_POSN                                    0x6
#define _TXSTA2_TX9_POSITION                                0x6
#define _TXSTA2_TX9_SIZE                                    0x1
#define _TXSTA2_TX9_LENGTH                                  0x1
#define _TXSTA2_TX9_MASK                                    0x40
#define _TXSTA2_CSRC_POSN                                   0x7
#define _TXSTA2_CSRC_POSITION                               0x7
#define _TXSTA2_CSRC_SIZE                                   0x1
#define _TXSTA2_CSRC_LENGTH                                 0x1
#define _TXSTA2_CSRC_MASK                                   0x80
#define _TXSTA2_TXD8_POSN                                   0x0
#define _TXSTA2_TXD8_POSITION                               0x0
#define _TXSTA2_TXD8_SIZE                                   0x1
#define _TXSTA2_TXD8_LENGTH                                 0x1
#define _TXSTA2_TXD8_MASK                                   0x1
#define _TXSTA2_TX8_9_POSN                                  0x6
#define _TXSTA2_TX8_9_POSITION                              0x6
#define _TXSTA2_TX8_9_SIZE                                  0x1
#define _TXSTA2_TX8_9_LENGTH                                0x1
#define _TXSTA2_TX8_9_MASK                                  0x40
#define _TXSTA2_NOT_TX8_POSN                                0x6
#define _TXSTA2_NOT_TX8_POSITION                            0x6
#define _TXSTA2_NOT_TX8_SIZE                                0x1
#define _TXSTA2_NOT_TX8_LENGTH                              0x1
#define _TXSTA2_NOT_TX8_MASK                                0x40
#define _TXSTA2_TX9D2_POSN                                  0x0
#define _TXSTA2_TX9D2_POSITION                              0x0
#define _TXSTA2_TX9D2_SIZE                                  0x1
#define _TXSTA2_TX9D2_LENGTH                                0x1
#define _TXSTA2_TX9D2_MASK                                  0x1
#define _TXSTA2_TRMT2_POSN                                  0x1
#define _TXSTA2_TRMT2_POSITION                              0x1
#define _TXSTA2_TRMT2_SIZE                                  0x1
#define _TXSTA2_TRMT2_LENGTH                                0x1
#define _TXSTA2_TRMT2_MASK                                  0x2
#define _TXSTA2_BRGH2_POSN                                  0x2
#define _TXSTA2_BRGH2_POSITION                              0x2
#define _TXSTA2_BRGH2_SIZE                                  0x1
#define _TXSTA2_BRGH2_LENGTH                                0x1
#define _TXSTA2_BRGH2_MASK                                  0x4
#define _TXSTA2_SENDB2_POSN                                 0x3
#define _TXSTA2_SENDB2_POSITION                             0x3
#define _TXSTA2_SENDB2_SIZE                                 0x1
#define _TXSTA2_SENDB2_LENGTH                               0x1
#define _TXSTA2_SENDB2_MASK                                 0x8
#define _TXSTA2_SYNC2_POSN                                  0x4
#define _TXSTA2_SYNC2_POSITION                              0x4
#define _TXSTA2_SYNC2_SIZE                                  0x1
#define _TXSTA2_SYNC2_LENGTH                                0x1
#define _TXSTA2_SYNC2_MASK                                  0x10
#define _TXSTA2_TXEN2_POSN                                  0x5
#define _TXSTA2_TXEN2_POSITION                              0x5
#define _TXSTA2_TXEN2_SIZE                                  0x1
#define _TXSTA2_TXEN2_LENGTH                                0x1
#define _TXSTA2_TXEN2_MASK                                  0x20
#define _TXSTA2_TX92_POSN                                   0x6
#define _TXSTA2_TX92_POSITION                               0x6
#define _TXSTA2_TX92_SIZE                                   0x1
#define _TXSTA2_TX92_LENGTH                                 0x1
#define _TXSTA2_TX92_MASK                                   0x40
#define _TXSTA2_CSRC2_POSN                                  0x7
#define _TXSTA2_CSRC2_POSITION                              0x7
#define _TXSTA2_CSRC2_SIZE                                  0x1
#define _TXSTA2_CSRC2_LENGTH                                0x1
#define _TXSTA2_CSRC2_MASK                                  0x80
#define _TXSTA2_TXD82_POSN                                  0x0
#define _TXSTA2_TXD82_POSITION                              0x0
#define _TXSTA2_TXD82_SIZE                                  0x1
#define _TXSTA2_TXD82_LENGTH                                0x1
#define _TXSTA2_TXD82_MASK                                  0x1
#define _TXSTA2_TX8_92_POSN                                 0x6
#define _TXSTA2_TX8_92_POSITION                             0x6
#define _TXSTA2_TX8_92_SIZE                                 0x1
#define _TXSTA2_TX8_92_LENGTH                               0x1
#define _TXSTA2_TX8_92_MASK                                 0x40

// Register: TXREG2
#define TXREG2 TXREG2
extern volatile unsigned char           TXREG2              __at(0xF62);
#ifndef _LIB_BUILD
asm("TXREG2 equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG2                 :8;
    };
} TXREG2bits_t;
extern volatile TXREG2bits_t TXREG2bits __at(0xF62);
// bitfield macros
#define _TXREG2_TXREG2_POSN                                 0x0
#define _TXREG2_TXREG2_POSITION                             0x0
#define _TXREG2_TXREG2_SIZE                                 0x8
#define _TXREG2_TXREG2_LENGTH                               0x8
#define _TXREG2_TXREG2_MASK                                 0xFF

// Register: RCREG2
#define RCREG2 RCREG2
extern volatile unsigned char           RCREG2              __at(0xF63);
#ifndef _LIB_BUILD
asm("RCREG2 equ 0F63h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG2                 :8;
    };
} RCREG2bits_t;
extern volatile RCREG2bits_t RCREG2bits __at(0xF63);
// bitfield macros
#define _RCREG2_RCREG2_POSN                                 0x0
#define _RCREG2_RCREG2_POSITION                             0x0
#define _RCREG2_RCREG2_SIZE                                 0x8
#define _RCREG2_RCREG2_LENGTH                               0x8
#define _RCREG2_RCREG2_MASK                                 0xFF

// Register: SPBRG2
#define SPBRG2 SPBRG2
extern volatile unsigned char           SPBRG2              __at(0xF64);
#ifndef _LIB_BUILD
asm("SPBRG2 equ 0F64h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRG2                 :8;
    };
} SPBRG2bits_t;
extern volatile SPBRG2bits_t SPBRG2bits __at(0xF64);
// bitfield macros
#define _SPBRG2_SPBRG2_POSN                                 0x0
#define _SPBRG2_SPBRG2_POSITION                             0x0
#define _SPBRG2_SPBRG2_SIZE                                 0x8
#define _SPBRG2_SPBRG2_LENGTH                               0x8
#define _SPBRG2_SPBRG2_MASK                                 0xFF

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xF65);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0F65h");
#endif
// aliases
extern volatile unsigned char           ECCP2CON            __at(0xF65);
#ifndef _LIB_BUILD
asm("ECCP2CON equ 0F65h");
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
    struct {
        unsigned                        :4;
        unsigned DCCP2Y                 :1;
        unsigned DCCP2X                 :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xF65);
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
#define _CCP2CON_DCCP2Y_POSN                                0x4
#define _CCP2CON_DCCP2Y_POSITION                            0x4
#define _CCP2CON_DCCP2Y_SIZE                                0x1
#define _CCP2CON_DCCP2Y_LENGTH                              0x1
#define _CCP2CON_DCCP2Y_MASK                                0x10
#define _CCP2CON_DCCP2X_POSN                                0x5
#define _CCP2CON_DCCP2X_POSITION                            0x5
#define _CCP2CON_DCCP2X_SIZE                                0x1
#define _CCP2CON_DCCP2X_LENGTH                              0x1
#define _CCP2CON_DCCP2X_MASK                                0x20
// alias bitfield definitions
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
    struct {
        unsigned                        :4;
        unsigned DCCP2Y                 :1;
        unsigned DCCP2X                 :1;
    };
} ECCP2CONbits_t;
extern volatile ECCP2CONbits_t ECCP2CONbits __at(0xF65);
// bitfield macros
#define _ECCP2CON_CCP2M_POSN                                0x0
#define _ECCP2CON_CCP2M_POSITION                            0x0
#define _ECCP2CON_CCP2M_SIZE                                0x4
#define _ECCP2CON_CCP2M_LENGTH                              0x4
#define _ECCP2CON_CCP2M_MASK                                0xF
#define _ECCP2CON_DC2B_POSN                                 0x4
#define _ECCP2CON_DC2B_POSITION                             0x4
#define _ECCP2CON_DC2B_SIZE                                 0x2
#define _ECCP2CON_DC2B_LENGTH                               0x2
#define _ECCP2CON_DC2B_MASK                                 0x30
#define _ECCP2CON_CCP2M0_POSN                               0x0
#define _ECCP2CON_CCP2M0_POSITION                           0x0
#define _ECCP2CON_CCP2M0_SIZE                               0x1
#define _ECCP2CON_CCP2M0_LENGTH                             0x1
#define _ECCP2CON_CCP2M0_MASK                               0x1
#define _ECCP2CON_CCP2M1_POSN                               0x1
#define _ECCP2CON_CCP2M1_POSITION                           0x1
#define _ECCP2CON_CCP2M1_SIZE                               0x1
#define _ECCP2CON_CCP2M1_LENGTH                             0x1
#define _ECCP2CON_CCP2M1_MASK                               0x2
#define _ECCP2CON_CCP2M2_POSN                               0x2
#define _ECCP2CON_CCP2M2_POSITION                           0x2
#define _ECCP2CON_CCP2M2_SIZE                               0x1
#define _ECCP2CON_CCP2M2_LENGTH                             0x1
#define _ECCP2CON_CCP2M2_MASK                               0x4
#define _ECCP2CON_CCP2M3_POSN                               0x3
#define _ECCP2CON_CCP2M3_POSITION                           0x3
#define _ECCP2CON_CCP2M3_SIZE                               0x1
#define _ECCP2CON_CCP2M3_LENGTH                             0x1
#define _ECCP2CON_CCP2M3_MASK                               0x8
#define _ECCP2CON_DC2B0_POSN                                0x4
#define _ECCP2CON_DC2B0_POSITION                            0x4
#define _ECCP2CON_DC2B0_SIZE                                0x1
#define _ECCP2CON_DC2B0_LENGTH                              0x1
#define _ECCP2CON_DC2B0_MASK                                0x10
#define _ECCP2CON_DC2B1_POSN                                0x5
#define _ECCP2CON_DC2B1_POSITION                            0x5
#define _ECCP2CON_DC2B1_SIZE                                0x1
#define _ECCP2CON_DC2B1_LENGTH                              0x1
#define _ECCP2CON_DC2B1_MASK                                0x20
#define _ECCP2CON_DCCP2Y_POSN                               0x4
#define _ECCP2CON_DCCP2Y_POSITION                           0x4
#define _ECCP2CON_DCCP2Y_SIZE                               0x1
#define _ECCP2CON_DCCP2Y_LENGTH                             0x1
#define _ECCP2CON_DCCP2Y_MASK                               0x10
#define _ECCP2CON_DCCP2X_POSN                               0x5
#define _ECCP2CON_DCCP2X_POSITION                           0x5
#define _ECCP2CON_DCCP2X_SIZE                               0x1
#define _ECCP2CON_DCCP2X_LENGTH                             0x1
#define _ECCP2CON_DCCP2X_MASK                               0x20

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xF66);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0F66h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xF66);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0F66h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0xF66);
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xF67);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0F67h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0xF67);
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xF68);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0F68h");
#endif
// aliases
extern volatile unsigned char           ECCP1CON            __at(0xF68);
#ifndef _LIB_BUILD
asm("ECCP1CON equ 0F68h");
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
    struct {
        unsigned                        :4;
        unsigned DCCP1Y                 :1;
        unsigned DCCP1X                 :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0xF68);
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
#define _CCP1CON_DCCP1Y_POSN                                0x4
#define _CCP1CON_DCCP1Y_POSITION                            0x4
#define _CCP1CON_DCCP1Y_SIZE                                0x1
#define _CCP1CON_DCCP1Y_LENGTH                              0x1
#define _CCP1CON_DCCP1Y_MASK                                0x10
#define _CCP1CON_DCCP1X_POSN                                0x5
#define _CCP1CON_DCCP1X_POSITION                            0x5
#define _CCP1CON_DCCP1X_SIZE                                0x1
#define _CCP1CON_DCCP1X_LENGTH                              0x1
#define _CCP1CON_DCCP1X_MASK                                0x20
// alias bitfield definitions
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
    struct {
        unsigned                        :4;
        unsigned DCCP1Y                 :1;
        unsigned DCCP1X                 :1;
    };
} ECCP1CONbits_t;
extern volatile ECCP1CONbits_t ECCP1CONbits __at(0xF68);
// bitfield macros
#define _ECCP1CON_CCP1M_POSN                                0x0
#define _ECCP1CON_CCP1M_POSITION                            0x0
#define _ECCP1CON_CCP1M_SIZE                                0x4
#define _ECCP1CON_CCP1M_LENGTH                              0x4
#define _ECCP1CON_CCP1M_MASK                                0xF
#define _ECCP1CON_DC1B_POSN                                 0x4
#define _ECCP1CON_DC1B_POSITION                             0x4
#define _ECCP1CON_DC1B_SIZE                                 0x2
#define _ECCP1CON_DC1B_LENGTH                               0x2
#define _ECCP1CON_DC1B_MASK                                 0x30
#define _ECCP1CON_CCP1M0_POSN                               0x0
#define _ECCP1CON_CCP1M0_POSITION                           0x0
#define _ECCP1CON_CCP1M0_SIZE                               0x1
#define _ECCP1CON_CCP1M0_LENGTH                             0x1
#define _ECCP1CON_CCP1M0_MASK                               0x1
#define _ECCP1CON_CCP1M1_POSN                               0x1
#define _ECCP1CON_CCP1M1_POSITION                           0x1
#define _ECCP1CON_CCP1M1_SIZE                               0x1
#define _ECCP1CON_CCP1M1_LENGTH                             0x1
#define _ECCP1CON_CCP1M1_MASK                               0x2
#define _ECCP1CON_CCP1M2_POSN                               0x2
#define _ECCP1CON_CCP1M2_POSITION                           0x2
#define _ECCP1CON_CCP1M2_SIZE                               0x1
#define _ECCP1CON_CCP1M2_LENGTH                             0x1
#define _ECCP1CON_CCP1M2_MASK                               0x4
#define _ECCP1CON_CCP1M3_POSN                               0x3
#define _ECCP1CON_CCP1M3_POSITION                           0x3
#define _ECCP1CON_CCP1M3_SIZE                               0x1
#define _ECCP1CON_CCP1M3_LENGTH                             0x1
#define _ECCP1CON_CCP1M3_MASK                               0x8
#define _ECCP1CON_DC1B0_POSN                                0x4
#define _ECCP1CON_DC1B0_POSITION                            0x4
#define _ECCP1CON_DC1B0_SIZE                                0x1
#define _ECCP1CON_DC1B0_LENGTH                              0x1
#define _ECCP1CON_DC1B0_MASK                                0x10
#define _ECCP1CON_DC1B1_POSN                                0x5
#define _ECCP1CON_DC1B1_POSITION                            0x5
#define _ECCP1CON_DC1B1_SIZE                                0x1
#define _ECCP1CON_DC1B1_LENGTH                              0x1
#define _ECCP1CON_DC1B1_MASK                                0x20
#define _ECCP1CON_DCCP1Y_POSN                               0x4
#define _ECCP1CON_DCCP1Y_POSITION                           0x4
#define _ECCP1CON_DCCP1Y_SIZE                               0x1
#define _ECCP1CON_DCCP1Y_LENGTH                             0x1
#define _ECCP1CON_DCCP1Y_MASK                               0x10
#define _ECCP1CON_DCCP1X_POSN                               0x5
#define _ECCP1CON_DCCP1X_POSITION                           0x5
#define _ECCP1CON_DCCP1X_SIZE                               0x1
#define _ECCP1CON_DCCP1X_LENGTH                             0x1
#define _ECCP1CON_DCCP1X_MASK                               0x20

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0xF69);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0F69h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0xF69);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0xF69);
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xF6A);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0F6Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0xF6A);
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
extern volatile unsigned char           LCDDATA6            __at(0xF6C);
#ifndef _LIB_BUILD
asm("LCDDATA6 equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA6               :8;
    };
    struct {
        unsigned S00C1                  :1;
        unsigned S01C1                  :1;
        unsigned S02C1                  :1;
        unsigned S03C1                  :1;
        unsigned S04C1                  :1;
        unsigned S05C1                  :1;
        unsigned S06C1                  :1;
        unsigned S07C1                  :1;
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
} LCDDATA6bits_t;
extern volatile LCDDATA6bits_t LCDDATA6bits __at(0xF6C);
// bitfield macros
#define _LCDDATA6_LCDDATA6_POSN                             0x0
#define _LCDDATA6_LCDDATA6_POSITION                         0x0
#define _LCDDATA6_LCDDATA6_SIZE                             0x8
#define _LCDDATA6_LCDDATA6_LENGTH                           0x8
#define _LCDDATA6_LCDDATA6_MASK                             0xFF
#define _LCDDATA6_S00C1_POSN                                0x0
#define _LCDDATA6_S00C1_POSITION                            0x0
#define _LCDDATA6_S00C1_SIZE                                0x1
#define _LCDDATA6_S00C1_LENGTH                              0x1
#define _LCDDATA6_S00C1_MASK                                0x1
#define _LCDDATA6_S01C1_POSN                                0x1
#define _LCDDATA6_S01C1_POSITION                            0x1
#define _LCDDATA6_S01C1_SIZE                                0x1
#define _LCDDATA6_S01C1_LENGTH                              0x1
#define _LCDDATA6_S01C1_MASK                                0x2
#define _LCDDATA6_S02C1_POSN                                0x2
#define _LCDDATA6_S02C1_POSITION                            0x2
#define _LCDDATA6_S02C1_SIZE                                0x1
#define _LCDDATA6_S02C1_LENGTH                              0x1
#define _LCDDATA6_S02C1_MASK                                0x4
#define _LCDDATA6_S03C1_POSN                                0x3
#define _LCDDATA6_S03C1_POSITION                            0x3
#define _LCDDATA6_S03C1_SIZE                                0x1
#define _LCDDATA6_S03C1_LENGTH                              0x1
#define _LCDDATA6_S03C1_MASK                                0x8
#define _LCDDATA6_S04C1_POSN                                0x4
#define _LCDDATA6_S04C1_POSITION                            0x4
#define _LCDDATA6_S04C1_SIZE                                0x1
#define _LCDDATA6_S04C1_LENGTH                              0x1
#define _LCDDATA6_S04C1_MASK                                0x10
#define _LCDDATA6_S05C1_POSN                                0x5
#define _LCDDATA6_S05C1_POSITION                            0x5
#define _LCDDATA6_S05C1_SIZE                                0x1
#define _LCDDATA6_S05C1_LENGTH                              0x1
#define _LCDDATA6_S05C1_MASK                                0x20
#define _LCDDATA6_S06C1_POSN                                0x6
#define _LCDDATA6_S06C1_POSITION                            0x6
#define _LCDDATA6_S06C1_SIZE                                0x1
#define _LCDDATA6_S06C1_LENGTH                              0x1
#define _LCDDATA6_S06C1_MASK                                0x40
#define _LCDDATA6_S07C1_POSN                                0x7
#define _LCDDATA6_S07C1_POSITION                            0x7
#define _LCDDATA6_S07C1_SIZE                                0x1
#define _LCDDATA6_S07C1_LENGTH                              0x1
#define _LCDDATA6_S07C1_MASK                                0x80
#define _LCDDATA6_SEG0COM1_POSN                             0x0
#define _LCDDATA6_SEG0COM1_POSITION                         0x0
#define _LCDDATA6_SEG0COM1_SIZE                             0x1
#define _LCDDATA6_SEG0COM1_LENGTH                           0x1
#define _LCDDATA6_SEG0COM1_MASK                             0x1
#define _LCDDATA6_SEG1COM1_POSN                             0x1
#define _LCDDATA6_SEG1COM1_POSITION                         0x1
#define _LCDDATA6_SEG1COM1_SIZE                             0x1
#define _LCDDATA6_SEG1COM1_LENGTH                           0x1
#define _LCDDATA6_SEG1COM1_MASK                             0x2
#define _LCDDATA6_SEG2COM1_POSN                             0x2
#define _LCDDATA6_SEG2COM1_POSITION                         0x2
#define _LCDDATA6_SEG2COM1_SIZE                             0x1
#define _LCDDATA6_SEG2COM1_LENGTH                           0x1
#define _LCDDATA6_SEG2COM1_MASK                             0x4
#define _LCDDATA6_SEG3COM1_POSN                             0x3
#define _LCDDATA6_SEG3COM1_POSITION                         0x3
#define _LCDDATA6_SEG3COM1_SIZE                             0x1
#define _LCDDATA6_SEG3COM1_LENGTH                           0x1
#define _LCDDATA6_SEG3COM1_MASK                             0x8
#define _LCDDATA6_SEG4COM1_POSN                             0x4
#define _LCDDATA6_SEG4COM1_POSITION                         0x4
#define _LCDDATA6_SEG4COM1_SIZE                             0x1
#define _LCDDATA6_SEG4COM1_LENGTH                           0x1
#define _LCDDATA6_SEG4COM1_MASK                             0x10
#define _LCDDATA6_SEG5COM1_POSN                             0x5
#define _LCDDATA6_SEG5COM1_POSITION                         0x5
#define _LCDDATA6_SEG5COM1_SIZE                             0x1
#define _LCDDATA6_SEG5COM1_LENGTH                           0x1
#define _LCDDATA6_SEG5COM1_MASK                             0x20
#define _LCDDATA6_SEG6COM1_POSN                             0x6
#define _LCDDATA6_SEG6COM1_POSITION                         0x6
#define _LCDDATA6_SEG6COM1_SIZE                             0x1
#define _LCDDATA6_SEG6COM1_LENGTH                           0x1
#define _LCDDATA6_SEG6COM1_MASK                             0x40
#define _LCDDATA6_SEG7COM1_POSN                             0x7
#define _LCDDATA6_SEG7COM1_POSITION                         0x7
#define _LCDDATA6_SEG7COM1_SIZE                             0x1
#define _LCDDATA6_SEG7COM1_LENGTH                           0x1
#define _LCDDATA6_SEG7COM1_MASK                             0x80
#define _LCDDATA6_S0C1_POSN                                 0x0
#define _LCDDATA6_S0C1_POSITION                             0x0
#define _LCDDATA6_S0C1_SIZE                                 0x1
#define _LCDDATA6_S0C1_LENGTH                               0x1
#define _LCDDATA6_S0C1_MASK                                 0x1
#define _LCDDATA6_S1C1_POSN                                 0x1
#define _LCDDATA6_S1C1_POSITION                             0x1
#define _LCDDATA6_S1C1_SIZE                                 0x1
#define _LCDDATA6_S1C1_LENGTH                               0x1
#define _LCDDATA6_S1C1_MASK                                 0x2
#define _LCDDATA6_S2C1_POSN                                 0x2
#define _LCDDATA6_S2C1_POSITION                             0x2
#define _LCDDATA6_S2C1_SIZE                                 0x1
#define _LCDDATA6_S2C1_LENGTH                               0x1
#define _LCDDATA6_S2C1_MASK                                 0x4
#define _LCDDATA6_S3C1_POSN                                 0x3
#define _LCDDATA6_S3C1_POSITION                             0x3
#define _LCDDATA6_S3C1_SIZE                                 0x1
#define _LCDDATA6_S3C1_LENGTH                               0x1
#define _LCDDATA6_S3C1_MASK                                 0x8
#define _LCDDATA6_S4C1_POSN                                 0x4
#define _LCDDATA6_S4C1_POSITION                             0x4
#define _LCDDATA6_S4C1_SIZE                                 0x1
#define _LCDDATA6_S4C1_LENGTH                               0x1
#define _LCDDATA6_S4C1_MASK                                 0x10
#define _LCDDATA6_S5C1_POSN                                 0x5
#define _LCDDATA6_S5C1_POSITION                             0x5
#define _LCDDATA6_S5C1_SIZE                                 0x1
#define _LCDDATA6_S5C1_LENGTH                               0x1
#define _LCDDATA6_S5C1_MASK                                 0x20
#define _LCDDATA6_S6C1_POSN                                 0x6
#define _LCDDATA6_S6C1_POSITION                             0x6
#define _LCDDATA6_S6C1_SIZE                                 0x1
#define _LCDDATA6_S6C1_LENGTH                               0x1
#define _LCDDATA6_S6C1_MASK                                 0x40
#define _LCDDATA6_S7C1_POSN                                 0x7
#define _LCDDATA6_S7C1_POSITION                             0x7
#define _LCDDATA6_S7C1_SIZE                                 0x1
#define _LCDDATA6_S7C1_LENGTH                               0x1
#define _LCDDATA6_S7C1_MASK                                 0x80

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
extern volatile unsigned char           LCDDATA7            __at(0xF6D);
#ifndef _LIB_BUILD
asm("LCDDATA7 equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA7               :8;
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
        unsigned S08C1                  :1;
        unsigned S09C1                  :1;
    };
} LCDDATA7bits_t;
extern volatile LCDDATA7bits_t LCDDATA7bits __at(0xF6D);
// bitfield macros
#define _LCDDATA7_LCDDATA7_POSN                             0x0
#define _LCDDATA7_LCDDATA7_POSITION                         0x0
#define _LCDDATA7_LCDDATA7_SIZE                             0x8
#define _LCDDATA7_LCDDATA7_LENGTH                           0x8
#define _LCDDATA7_LCDDATA7_MASK                             0xFF
#define _LCDDATA7_S8C1_POSN                                 0x0
#define _LCDDATA7_S8C1_POSITION                             0x0
#define _LCDDATA7_S8C1_SIZE                                 0x1
#define _LCDDATA7_S8C1_LENGTH                               0x1
#define _LCDDATA7_S8C1_MASK                                 0x1
#define _LCDDATA7_S9C1_POSN                                 0x1
#define _LCDDATA7_S9C1_POSITION                             0x1
#define _LCDDATA7_S9C1_SIZE                                 0x1
#define _LCDDATA7_S9C1_LENGTH                               0x1
#define _LCDDATA7_S9C1_MASK                                 0x2
#define _LCDDATA7_S10C1_POSN                                0x2
#define _LCDDATA7_S10C1_POSITION                            0x2
#define _LCDDATA7_S10C1_SIZE                                0x1
#define _LCDDATA7_S10C1_LENGTH                              0x1
#define _LCDDATA7_S10C1_MASK                                0x4
#define _LCDDATA7_S11C1_POSN                                0x3
#define _LCDDATA7_S11C1_POSITION                            0x3
#define _LCDDATA7_S11C1_SIZE                                0x1
#define _LCDDATA7_S11C1_LENGTH                              0x1
#define _LCDDATA7_S11C1_MASK                                0x8
#define _LCDDATA7_S12C1_POSN                                0x4
#define _LCDDATA7_S12C1_POSITION                            0x4
#define _LCDDATA7_S12C1_SIZE                                0x1
#define _LCDDATA7_S12C1_LENGTH                              0x1
#define _LCDDATA7_S12C1_MASK                                0x10
#define _LCDDATA7_S13C1_POSN                                0x5
#define _LCDDATA7_S13C1_POSITION                            0x5
#define _LCDDATA7_S13C1_SIZE                                0x1
#define _LCDDATA7_S13C1_LENGTH                              0x1
#define _LCDDATA7_S13C1_MASK                                0x20
#define _LCDDATA7_S14C1_POSN                                0x6
#define _LCDDATA7_S14C1_POSITION                            0x6
#define _LCDDATA7_S14C1_SIZE                                0x1
#define _LCDDATA7_S14C1_LENGTH                              0x1
#define _LCDDATA7_S14C1_MASK                                0x40
#define _LCDDATA7_S15C1_POSN                                0x7
#define _LCDDATA7_S15C1_POSITION                            0x7
#define _LCDDATA7_S15C1_SIZE                                0x1
#define _LCDDATA7_S15C1_LENGTH                              0x1
#define _LCDDATA7_S15C1_MASK                                0x80
#define _LCDDATA7_SEG8COM1_POSN                             0x0
#define _LCDDATA7_SEG8COM1_POSITION                         0x0
#define _LCDDATA7_SEG8COM1_SIZE                             0x1
#define _LCDDATA7_SEG8COM1_LENGTH                           0x1
#define _LCDDATA7_SEG8COM1_MASK                             0x1
#define _LCDDATA7_SEG9COM1_POSN                             0x1
#define _LCDDATA7_SEG9COM1_POSITION                         0x1
#define _LCDDATA7_SEG9COM1_SIZE                             0x1
#define _LCDDATA7_SEG9COM1_LENGTH                           0x1
#define _LCDDATA7_SEG9COM1_MASK                             0x2
#define _LCDDATA7_SEG10COM1_POSN                            0x2
#define _LCDDATA7_SEG10COM1_POSITION                        0x2
#define _LCDDATA7_SEG10COM1_SIZE                            0x1
#define _LCDDATA7_SEG10COM1_LENGTH                          0x1
#define _LCDDATA7_SEG10COM1_MASK                            0x4
#define _LCDDATA7_SEG11COM1_POSN                            0x3
#define _LCDDATA7_SEG11COM1_POSITION                        0x3
#define _LCDDATA7_SEG11COM1_SIZE                            0x1
#define _LCDDATA7_SEG11COM1_LENGTH                          0x1
#define _LCDDATA7_SEG11COM1_MASK                            0x8
#define _LCDDATA7_SEG12COM1_POSN                            0x4
#define _LCDDATA7_SEG12COM1_POSITION                        0x4
#define _LCDDATA7_SEG12COM1_SIZE                            0x1
#define _LCDDATA7_SEG12COM1_LENGTH                          0x1
#define _LCDDATA7_SEG12COM1_MASK                            0x10
#define _LCDDATA7_SEG13COM1_POSN                            0x5
#define _LCDDATA7_SEG13COM1_POSITION                        0x5
#define _LCDDATA7_SEG13COM1_SIZE                            0x1
#define _LCDDATA7_SEG13COM1_LENGTH                          0x1
#define _LCDDATA7_SEG13COM1_MASK                            0x20
#define _LCDDATA7_SEG14COM1_POSN                            0x6
#define _LCDDATA7_SEG14COM1_POSITION                        0x6
#define _LCDDATA7_SEG14COM1_SIZE                            0x1
#define _LCDDATA7_SEG14COM1_LENGTH                          0x1
#define _LCDDATA7_SEG14COM1_MASK                            0x40
#define _LCDDATA7_SEG15COM1_POSN                            0x7
#define _LCDDATA7_SEG15COM1_POSITION                        0x7
#define _LCDDATA7_SEG15COM1_SIZE                            0x1
#define _LCDDATA7_SEG15COM1_LENGTH                          0x1
#define _LCDDATA7_SEG15COM1_MASK                            0x80
#define _LCDDATA7_S08C1_POSN                                0x0
#define _LCDDATA7_S08C1_POSITION                            0x0
#define _LCDDATA7_S08C1_SIZE                                0x1
#define _LCDDATA7_S08C1_LENGTH                              0x1
#define _LCDDATA7_S08C1_MASK                                0x1
#define _LCDDATA7_S09C1_POSN                                0x1
#define _LCDDATA7_S09C1_POSITION                            0x1
#define _LCDDATA7_S09C1_SIZE                                0x1
#define _LCDDATA7_S09C1_LENGTH                              0x1
#define _LCDDATA7_S09C1_MASK                                0x2

// Register: LCDDATA8
#define LCDDATA8 LCDDATA8
extern volatile unsigned char           LCDDATA8            __at(0xF6E);
#ifndef _LIB_BUILD
asm("LCDDATA8 equ 0F6Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA8               :8;
    };
    struct {
        unsigned S16C1                  :1;
        unsigned S17C1                  :1;
        unsigned S18C1                  :1;
        unsigned S19C1                  :1;
        unsigned S20C1                  :1;
        unsigned S21C1                  :1;
        unsigned S22C1                  :1;
        unsigned S23C1                  :1;
    };
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
} LCDDATA8bits_t;
extern volatile LCDDATA8bits_t LCDDATA8bits __at(0xF6E);
// bitfield macros
#define _LCDDATA8_LCDDATA8_POSN                             0x0
#define _LCDDATA8_LCDDATA8_POSITION                         0x0
#define _LCDDATA8_LCDDATA8_SIZE                             0x8
#define _LCDDATA8_LCDDATA8_LENGTH                           0x8
#define _LCDDATA8_LCDDATA8_MASK                             0xFF
#define _LCDDATA8_S16C1_POSN                                0x0
#define _LCDDATA8_S16C1_POSITION                            0x0
#define _LCDDATA8_S16C1_SIZE                                0x1
#define _LCDDATA8_S16C1_LENGTH                              0x1
#define _LCDDATA8_S16C1_MASK                                0x1
#define _LCDDATA8_S17C1_POSN                                0x1
#define _LCDDATA8_S17C1_POSITION                            0x1
#define _LCDDATA8_S17C1_SIZE                                0x1
#define _LCDDATA8_S17C1_LENGTH                              0x1
#define _LCDDATA8_S17C1_MASK                                0x2
#define _LCDDATA8_S18C1_POSN                                0x2
#define _LCDDATA8_S18C1_POSITION                            0x2
#define _LCDDATA8_S18C1_SIZE                                0x1
#define _LCDDATA8_S18C1_LENGTH                              0x1
#define _LCDDATA8_S18C1_MASK                                0x4
#define _LCDDATA8_S19C1_POSN                                0x3
#define _LCDDATA8_S19C1_POSITION                            0x3
#define _LCDDATA8_S19C1_SIZE                                0x1
#define _LCDDATA8_S19C1_LENGTH                              0x1
#define _LCDDATA8_S19C1_MASK                                0x8
#define _LCDDATA8_S20C1_POSN                                0x4
#define _LCDDATA8_S20C1_POSITION                            0x4
#define _LCDDATA8_S20C1_SIZE                                0x1
#define _LCDDATA8_S20C1_LENGTH                              0x1
#define _LCDDATA8_S20C1_MASK                                0x10
#define _LCDDATA8_S21C1_POSN                                0x5
#define _LCDDATA8_S21C1_POSITION                            0x5
#define _LCDDATA8_S21C1_SIZE                                0x1
#define _LCDDATA8_S21C1_LENGTH                              0x1
#define _LCDDATA8_S21C1_MASK                                0x20
#define _LCDDATA8_S22C1_POSN                                0x6
#define _LCDDATA8_S22C1_POSITION                            0x6
#define _LCDDATA8_S22C1_SIZE                                0x1
#define _LCDDATA8_S22C1_LENGTH                              0x1
#define _LCDDATA8_S22C1_MASK                                0x40
#define _LCDDATA8_S23C1_POSN                                0x7
#define _LCDDATA8_S23C1_POSITION                            0x7
#define _LCDDATA8_S23C1_SIZE                                0x1
#define _LCDDATA8_S23C1_LENGTH                              0x1
#define _LCDDATA8_S23C1_MASK                                0x80
#define _LCDDATA8_SEG16COM1_POSN                            0x0
#define _LCDDATA8_SEG16COM1_POSITION                        0x0
#define _LCDDATA8_SEG16COM1_SIZE                            0x1
#define _LCDDATA8_SEG16COM1_LENGTH                          0x1
#define _LCDDATA8_SEG16COM1_MASK                            0x1
#define _LCDDATA8_SEG17COM1_POSN                            0x1
#define _LCDDATA8_SEG17COM1_POSITION                        0x1
#define _LCDDATA8_SEG17COM1_SIZE                            0x1
#define _LCDDATA8_SEG17COM1_LENGTH                          0x1
#define _LCDDATA8_SEG17COM1_MASK                            0x2
#define _LCDDATA8_SEG18COM1_POSN                            0x2
#define _LCDDATA8_SEG18COM1_POSITION                        0x2
#define _LCDDATA8_SEG18COM1_SIZE                            0x1
#define _LCDDATA8_SEG18COM1_LENGTH                          0x1
#define _LCDDATA8_SEG18COM1_MASK                            0x4
#define _LCDDATA8_SEG19COM1_POSN                            0x3
#define _LCDDATA8_SEG19COM1_POSITION                        0x3
#define _LCDDATA8_SEG19COM1_SIZE                            0x1
#define _LCDDATA8_SEG19COM1_LENGTH                          0x1
#define _LCDDATA8_SEG19COM1_MASK                            0x8
#define _LCDDATA8_SEG20COM1_POSN                            0x4
#define _LCDDATA8_SEG20COM1_POSITION                        0x4
#define _LCDDATA8_SEG20COM1_SIZE                            0x1
#define _LCDDATA8_SEG20COM1_LENGTH                          0x1
#define _LCDDATA8_SEG20COM1_MASK                            0x10
#define _LCDDATA8_SEG21COM1_POSN                            0x5
#define _LCDDATA8_SEG21COM1_POSITION                        0x5
#define _LCDDATA8_SEG21COM1_SIZE                            0x1
#define _LCDDATA8_SEG21COM1_LENGTH                          0x1
#define _LCDDATA8_SEG21COM1_MASK                            0x20
#define _LCDDATA8_SEG22COM1_POSN                            0x6
#define _LCDDATA8_SEG22COM1_POSITION                        0x6
#define _LCDDATA8_SEG22COM1_SIZE                            0x1
#define _LCDDATA8_SEG22COM1_LENGTH                          0x1
#define _LCDDATA8_SEG22COM1_MASK                            0x40
#define _LCDDATA8_SEG23COM1_POSN                            0x7
#define _LCDDATA8_SEG23COM1_POSITION                        0x7
#define _LCDDATA8_SEG23COM1_SIZE                            0x1
#define _LCDDATA8_SEG23COM1_LENGTH                          0x1
#define _LCDDATA8_SEG23COM1_MASK                            0x80

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
extern volatile unsigned char           LCDDATA9            __at(0xF6F);
#ifndef _LIB_BUILD
asm("LCDDATA9 equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA9               :8;
    };
    struct {
        unsigned S24C1                  :1;
        unsigned S25C1                  :1;
        unsigned S26C1                  :1;
        unsigned S27C1                  :1;
        unsigned S28C1                  :1;
        unsigned S29C1                  :1;
        unsigned S30C1                  :1;
        unsigned S31C1                  :1;
    };
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
} LCDDATA9bits_t;
extern volatile LCDDATA9bits_t LCDDATA9bits __at(0xF6F);
// bitfield macros
#define _LCDDATA9_LCDDATA9_POSN                             0x0
#define _LCDDATA9_LCDDATA9_POSITION                         0x0
#define _LCDDATA9_LCDDATA9_SIZE                             0x8
#define _LCDDATA9_LCDDATA9_LENGTH                           0x8
#define _LCDDATA9_LCDDATA9_MASK                             0xFF
#define _LCDDATA9_S24C1_POSN                                0x0
#define _LCDDATA9_S24C1_POSITION                            0x0
#define _LCDDATA9_S24C1_SIZE                                0x1
#define _LCDDATA9_S24C1_LENGTH                              0x1
#define _LCDDATA9_S24C1_MASK                                0x1
#define _LCDDATA9_S25C1_POSN                                0x1
#define _LCDDATA9_S25C1_POSITION                            0x1
#define _LCDDATA9_S25C1_SIZE                                0x1
#define _LCDDATA9_S25C1_LENGTH                              0x1
#define _LCDDATA9_S25C1_MASK                                0x2
#define _LCDDATA9_S26C1_POSN                                0x2
#define _LCDDATA9_S26C1_POSITION                            0x2
#define _LCDDATA9_S26C1_SIZE                                0x1
#define _LCDDATA9_S26C1_LENGTH                              0x1
#define _LCDDATA9_S26C1_MASK                                0x4
#define _LCDDATA9_S27C1_POSN                                0x3
#define _LCDDATA9_S27C1_POSITION                            0x3
#define _LCDDATA9_S27C1_SIZE                                0x1
#define _LCDDATA9_S27C1_LENGTH                              0x1
#define _LCDDATA9_S27C1_MASK                                0x8
#define _LCDDATA9_S28C1_POSN                                0x4
#define _LCDDATA9_S28C1_POSITION                            0x4
#define _LCDDATA9_S28C1_SIZE                                0x1
#define _LCDDATA9_S28C1_LENGTH                              0x1
#define _LCDDATA9_S28C1_MASK                                0x10
#define _LCDDATA9_S29C1_POSN                                0x5
#define _LCDDATA9_S29C1_POSITION                            0x5
#define _LCDDATA9_S29C1_SIZE                                0x1
#define _LCDDATA9_S29C1_LENGTH                              0x1
#define _LCDDATA9_S29C1_MASK                                0x20
#define _LCDDATA9_S30C1_POSN                                0x6
#define _LCDDATA9_S30C1_POSITION                            0x6
#define _LCDDATA9_S30C1_SIZE                                0x1
#define _LCDDATA9_S30C1_LENGTH                              0x1
#define _LCDDATA9_S30C1_MASK                                0x40
#define _LCDDATA9_S31C1_POSN                                0x7
#define _LCDDATA9_S31C1_POSITION                            0x7
#define _LCDDATA9_S31C1_SIZE                                0x1
#define _LCDDATA9_S31C1_LENGTH                              0x1
#define _LCDDATA9_S31C1_MASK                                0x80
#define _LCDDATA9_SEG24COM1_POSN                            0x0
#define _LCDDATA9_SEG24COM1_POSITION                        0x0
#define _LCDDATA9_SEG24COM1_SIZE                            0x1
#define _LCDDATA9_SEG24COM1_LENGTH                          0x1
#define _LCDDATA9_SEG24COM1_MASK                            0x1
#define _LCDDATA9_SEG25COM1_POSN                            0x1
#define _LCDDATA9_SEG25COM1_POSITION                        0x1
#define _LCDDATA9_SEG25COM1_SIZE                            0x1
#define _LCDDATA9_SEG25COM1_LENGTH                          0x1
#define _LCDDATA9_SEG25COM1_MASK                            0x2
#define _LCDDATA9_SEG26COM1_POSN                            0x2
#define _LCDDATA9_SEG26COM1_POSITION                        0x2
#define _LCDDATA9_SEG26COM1_SIZE                            0x1
#define _LCDDATA9_SEG26COM1_LENGTH                          0x1
#define _LCDDATA9_SEG26COM1_MASK                            0x4
#define _LCDDATA9_SEG27COM1_POSN                            0x3
#define _LCDDATA9_SEG27COM1_POSITION                        0x3
#define _LCDDATA9_SEG27COM1_SIZE                            0x1
#define _LCDDATA9_SEG27COM1_LENGTH                          0x1
#define _LCDDATA9_SEG27COM1_MASK                            0x8
#define _LCDDATA9_SEG28COM1_POSN                            0x4
#define _LCDDATA9_SEG28COM1_POSITION                        0x4
#define _LCDDATA9_SEG28COM1_SIZE                            0x1
#define _LCDDATA9_SEG28COM1_LENGTH                          0x1
#define _LCDDATA9_SEG28COM1_MASK                            0x10
#define _LCDDATA9_SEG29COM1_POSN                            0x5
#define _LCDDATA9_SEG29COM1_POSITION                        0x5
#define _LCDDATA9_SEG29COM1_SIZE                            0x1
#define _LCDDATA9_SEG29COM1_LENGTH                          0x1
#define _LCDDATA9_SEG29COM1_MASK                            0x20
#define _LCDDATA9_SEG30COM1_POSN                            0x6
#define _LCDDATA9_SEG30COM1_POSITION                        0x6
#define _LCDDATA9_SEG30COM1_SIZE                            0x1
#define _LCDDATA9_SEG30COM1_LENGTH                          0x1
#define _LCDDATA9_SEG30COM1_MASK                            0x40
#define _LCDDATA9_SEG31COM1_POSN                            0x7
#define _LCDDATA9_SEG31COM1_POSITION                        0x7
#define _LCDDATA9_SEG31COM1_SIZE                            0x1
#define _LCDDATA9_SEG31COM1_LENGTH                          0x1
#define _LCDDATA9_SEG31COM1_MASK                            0x80

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
extern volatile unsigned char           LCDDATA10           __at(0xF70);
#ifndef _LIB_BUILD
asm("LCDDATA10 equ 0F70h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA10              :8;
    };
    struct {
        unsigned S32C1                  :1;
    };
    struct {
        unsigned SEG32COM1              :1;
    };
} LCDDATA10bits_t;
extern volatile LCDDATA10bits_t LCDDATA10bits __at(0xF70);
// bitfield macros
#define _LCDDATA10_LCDDATA10_POSN                           0x0
#define _LCDDATA10_LCDDATA10_POSITION                       0x0
#define _LCDDATA10_LCDDATA10_SIZE                           0x8
#define _LCDDATA10_LCDDATA10_LENGTH                         0x8
#define _LCDDATA10_LCDDATA10_MASK                           0xFF
#define _LCDDATA10_S32C1_POSN                               0x0
#define _LCDDATA10_S32C1_POSITION                           0x0
#define _LCDDATA10_S32C1_SIZE                               0x1
#define _LCDDATA10_S32C1_LENGTH                             0x1
#define _LCDDATA10_S32C1_MASK                               0x1
#define _LCDDATA10_SEG32COM1_POSN                           0x0
#define _LCDDATA10_SEG32COM1_POSITION                       0x0
#define _LCDDATA10_SEG32COM1_SIZE                           0x1
#define _LCDDATA10_SEG32COM1_LENGTH                         0x1
#define _LCDDATA10_SEG32COM1_MASK                           0x1

// Register: LCDDATA12
#define LCDDATA12 LCDDATA12
extern volatile unsigned char           LCDDATA12           __at(0xF72);
#ifndef _LIB_BUILD
asm("LCDDATA12 equ 0F72h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA12              :8;
    };
    struct {
        unsigned S00C2                  :1;
        unsigned S01C2                  :1;
        unsigned S02C2                  :1;
        unsigned S03C2                  :1;
        unsigned S04C2                  :1;
        unsigned S05C2                  :1;
        unsigned S06C2                  :1;
        unsigned S07C2                  :1;
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
    struct {
        unsigned SSPM012                :1;
        unsigned SSPM112                :1;
        unsigned SSPM212                :1;
        unsigned SSPM312                :1;
    };
} LCDDATA12bits_t;
extern volatile LCDDATA12bits_t LCDDATA12bits __at(0xF72);
// bitfield macros
#define _LCDDATA12_LCDDATA12_POSN                           0x0
#define _LCDDATA12_LCDDATA12_POSITION                       0x0
#define _LCDDATA12_LCDDATA12_SIZE                           0x8
#define _LCDDATA12_LCDDATA12_LENGTH                         0x8
#define _LCDDATA12_LCDDATA12_MASK                           0xFF
#define _LCDDATA12_S00C2_POSN                               0x0
#define _LCDDATA12_S00C2_POSITION                           0x0
#define _LCDDATA12_S00C2_SIZE                               0x1
#define _LCDDATA12_S00C2_LENGTH                             0x1
#define _LCDDATA12_S00C2_MASK                               0x1
#define _LCDDATA12_S01C2_POSN                               0x1
#define _LCDDATA12_S01C2_POSITION                           0x1
#define _LCDDATA12_S01C2_SIZE                               0x1
#define _LCDDATA12_S01C2_LENGTH                             0x1
#define _LCDDATA12_S01C2_MASK                               0x2
#define _LCDDATA12_S02C2_POSN                               0x2
#define _LCDDATA12_S02C2_POSITION                           0x2
#define _LCDDATA12_S02C2_SIZE                               0x1
#define _LCDDATA12_S02C2_LENGTH                             0x1
#define _LCDDATA12_S02C2_MASK                               0x4
#define _LCDDATA12_S03C2_POSN                               0x3
#define _LCDDATA12_S03C2_POSITION                           0x3
#define _LCDDATA12_S03C2_SIZE                               0x1
#define _LCDDATA12_S03C2_LENGTH                             0x1
#define _LCDDATA12_S03C2_MASK                               0x8
#define _LCDDATA12_S04C2_POSN                               0x4
#define _LCDDATA12_S04C2_POSITION                           0x4
#define _LCDDATA12_S04C2_SIZE                               0x1
#define _LCDDATA12_S04C2_LENGTH                             0x1
#define _LCDDATA12_S04C2_MASK                               0x10
#define _LCDDATA12_S05C2_POSN                               0x5
#define _LCDDATA12_S05C2_POSITION                           0x5
#define _LCDDATA12_S05C2_SIZE                               0x1
#define _LCDDATA12_S05C2_LENGTH                             0x1
#define _LCDDATA12_S05C2_MASK                               0x20
#define _LCDDATA12_S06C2_POSN                               0x6
#define _LCDDATA12_S06C2_POSITION                           0x6
#define _LCDDATA12_S06C2_SIZE                               0x1
#define _LCDDATA12_S06C2_LENGTH                             0x1
#define _LCDDATA12_S06C2_MASK                               0x40
#define _LCDDATA12_S07C2_POSN                               0x7
#define _LCDDATA12_S07C2_POSITION                           0x7
#define _LCDDATA12_S07C2_SIZE                               0x1
#define _LCDDATA12_S07C2_LENGTH                             0x1
#define _LCDDATA12_S07C2_MASK                               0x80
#define _LCDDATA12_SEG0COM2_POSN                            0x0
#define _LCDDATA12_SEG0COM2_POSITION                        0x0
#define _LCDDATA12_SEG0COM2_SIZE                            0x1
#define _LCDDATA12_SEG0COM2_LENGTH                          0x1
#define _LCDDATA12_SEG0COM2_MASK                            0x1
#define _LCDDATA12_SEG1COM2_POSN                            0x1
#define _LCDDATA12_SEG1COM2_POSITION                        0x1
#define _LCDDATA12_SEG1COM2_SIZE                            0x1
#define _LCDDATA12_SEG1COM2_LENGTH                          0x1
#define _LCDDATA12_SEG1COM2_MASK                            0x2
#define _LCDDATA12_SEG2COM2_POSN                            0x2
#define _LCDDATA12_SEG2COM2_POSITION                        0x2
#define _LCDDATA12_SEG2COM2_SIZE                            0x1
#define _LCDDATA12_SEG2COM2_LENGTH                          0x1
#define _LCDDATA12_SEG2COM2_MASK                            0x4
#define _LCDDATA12_SEG3COM2_POSN                            0x3
#define _LCDDATA12_SEG3COM2_POSITION                        0x3
#define _LCDDATA12_SEG3COM2_SIZE                            0x1
#define _LCDDATA12_SEG3COM2_LENGTH                          0x1
#define _LCDDATA12_SEG3COM2_MASK                            0x8
#define _LCDDATA12_SEG4COM2_POSN                            0x4
#define _LCDDATA12_SEG4COM2_POSITION                        0x4
#define _LCDDATA12_SEG4COM2_SIZE                            0x1
#define _LCDDATA12_SEG4COM2_LENGTH                          0x1
#define _LCDDATA12_SEG4COM2_MASK                            0x10
#define _LCDDATA12_SEG5COM2_POSN                            0x5
#define _LCDDATA12_SEG5COM2_POSITION                        0x5
#define _LCDDATA12_SEG5COM2_SIZE                            0x1
#define _LCDDATA12_SEG5COM2_LENGTH                          0x1
#define _LCDDATA12_SEG5COM2_MASK                            0x20
#define _LCDDATA12_SEG6COM2_POSN                            0x6
#define _LCDDATA12_SEG6COM2_POSITION                        0x6
#define _LCDDATA12_SEG6COM2_SIZE                            0x1
#define _LCDDATA12_SEG6COM2_LENGTH                          0x1
#define _LCDDATA12_SEG6COM2_MASK                            0x40
#define _LCDDATA12_SEG7COM2_POSN                            0x7
#define _LCDDATA12_SEG7COM2_POSITION                        0x7
#define _LCDDATA12_SEG7COM2_SIZE                            0x1
#define _LCDDATA12_SEG7COM2_LENGTH                          0x1
#define _LCDDATA12_SEG7COM2_MASK                            0x80
#define _LCDDATA12_S0C2_POSN                                0x0
#define _LCDDATA12_S0C2_POSITION                            0x0
#define _LCDDATA12_S0C2_SIZE                                0x1
#define _LCDDATA12_S0C2_LENGTH                              0x1
#define _LCDDATA12_S0C2_MASK                                0x1
#define _LCDDATA12_S1C2_POSN                                0x1
#define _LCDDATA12_S1C2_POSITION                            0x1
#define _LCDDATA12_S1C2_SIZE                                0x1
#define _LCDDATA12_S1C2_LENGTH                              0x1
#define _LCDDATA12_S1C2_MASK                                0x2
#define _LCDDATA12_S2C2_POSN                                0x2
#define _LCDDATA12_S2C2_POSITION                            0x2
#define _LCDDATA12_S2C2_SIZE                                0x1
#define _LCDDATA12_S2C2_LENGTH                              0x1
#define _LCDDATA12_S2C2_MASK                                0x4
#define _LCDDATA12_S3C2_POSN                                0x3
#define _LCDDATA12_S3C2_POSITION                            0x3
#define _LCDDATA12_S3C2_SIZE                                0x1
#define _LCDDATA12_S3C2_LENGTH                              0x1
#define _LCDDATA12_S3C2_MASK                                0x8
#define _LCDDATA12_S4C2_POSN                                0x4
#define _LCDDATA12_S4C2_POSITION                            0x4
#define _LCDDATA12_S4C2_SIZE                                0x1
#define _LCDDATA12_S4C2_LENGTH                              0x1
#define _LCDDATA12_S4C2_MASK                                0x10
#define _LCDDATA12_S5C2_POSN                                0x5
#define _LCDDATA12_S5C2_POSITION                            0x5
#define _LCDDATA12_S5C2_SIZE                                0x1
#define _LCDDATA12_S5C2_LENGTH                              0x1
#define _LCDDATA12_S5C2_MASK                                0x20
#define _LCDDATA12_S6C2_POSN                                0x6
#define _LCDDATA12_S6C2_POSITION                            0x6
#define _LCDDATA12_S6C2_SIZE                                0x1
#define _LCDDATA12_S6C2_LENGTH                              0x1
#define _LCDDATA12_S6C2_MASK                                0x40
#define _LCDDATA12_S7C2_POSN                                0x7
#define _LCDDATA12_S7C2_POSITION                            0x7
#define _LCDDATA12_S7C2_SIZE                                0x1
#define _LCDDATA12_S7C2_LENGTH                              0x1
#define _LCDDATA12_S7C2_MASK                                0x80
#define _LCDDATA12_SSPM012_POSN                             0x0
#define _LCDDATA12_SSPM012_POSITION                         0x0
#define _LCDDATA12_SSPM012_SIZE                             0x1
#define _LCDDATA12_SSPM012_LENGTH                           0x1
#define _LCDDATA12_SSPM012_MASK                             0x1
#define _LCDDATA12_SSPM112_POSN                             0x1
#define _LCDDATA12_SSPM112_POSITION                         0x1
#define _LCDDATA12_SSPM112_SIZE                             0x1
#define _LCDDATA12_SSPM112_LENGTH                           0x1
#define _LCDDATA12_SSPM112_MASK                             0x2
#define _LCDDATA12_SSPM212_POSN                             0x2
#define _LCDDATA12_SSPM212_POSITION                         0x2
#define _LCDDATA12_SSPM212_SIZE                             0x1
#define _LCDDATA12_SSPM212_LENGTH                           0x1
#define _LCDDATA12_SSPM212_MASK                             0x4
#define _LCDDATA12_SSPM312_POSN                             0x3
#define _LCDDATA12_SSPM312_POSITION                         0x3
#define _LCDDATA12_SSPM312_SIZE                             0x1
#define _LCDDATA12_SSPM312_LENGTH                           0x1
#define _LCDDATA12_SSPM312_MASK                             0x8

// Register: LCDDATA13
#define LCDDATA13 LCDDATA13
extern volatile unsigned char           LCDDATA13           __at(0xF73);
#ifndef _LIB_BUILD
asm("LCDDATA13 equ 0F73h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA13              :8;
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
        unsigned S08C2                  :1;
        unsigned S09C2                  :1;
    };
} LCDDATA13bits_t;
extern volatile LCDDATA13bits_t LCDDATA13bits __at(0xF73);
// bitfield macros
#define _LCDDATA13_LCDDATA13_POSN                           0x0
#define _LCDDATA13_LCDDATA13_POSITION                       0x0
#define _LCDDATA13_LCDDATA13_SIZE                           0x8
#define _LCDDATA13_LCDDATA13_LENGTH                         0x8
#define _LCDDATA13_LCDDATA13_MASK                           0xFF
#define _LCDDATA13_S8C2_POSN                                0x0
#define _LCDDATA13_S8C2_POSITION                            0x0
#define _LCDDATA13_S8C2_SIZE                                0x1
#define _LCDDATA13_S8C2_LENGTH                              0x1
#define _LCDDATA13_S8C2_MASK                                0x1
#define _LCDDATA13_S9C2_POSN                                0x1
#define _LCDDATA13_S9C2_POSITION                            0x1
#define _LCDDATA13_S9C2_SIZE                                0x1
#define _LCDDATA13_S9C2_LENGTH                              0x1
#define _LCDDATA13_S9C2_MASK                                0x2
#define _LCDDATA13_S10C2_POSN                               0x2
#define _LCDDATA13_S10C2_POSITION                           0x2
#define _LCDDATA13_S10C2_SIZE                               0x1
#define _LCDDATA13_S10C2_LENGTH                             0x1
#define _LCDDATA13_S10C2_MASK                               0x4
#define _LCDDATA13_S11C2_POSN                               0x3
#define _LCDDATA13_S11C2_POSITION                           0x3
#define _LCDDATA13_S11C2_SIZE                               0x1
#define _LCDDATA13_S11C2_LENGTH                             0x1
#define _LCDDATA13_S11C2_MASK                               0x8
#define _LCDDATA13_S12C2_POSN                               0x4
#define _LCDDATA13_S12C2_POSITION                           0x4
#define _LCDDATA13_S12C2_SIZE                               0x1
#define _LCDDATA13_S12C2_LENGTH                             0x1
#define _LCDDATA13_S12C2_MASK                               0x10
#define _LCDDATA13_S13C2_POSN                               0x5
#define _LCDDATA13_S13C2_POSITION                           0x5
#define _LCDDATA13_S13C2_SIZE                               0x1
#define _LCDDATA13_S13C2_LENGTH                             0x1
#define _LCDDATA13_S13C2_MASK                               0x20
#define _LCDDATA13_S14C2_POSN                               0x6
#define _LCDDATA13_S14C2_POSITION                           0x6
#define _LCDDATA13_S14C2_SIZE                               0x1
#define _LCDDATA13_S14C2_LENGTH                             0x1
#define _LCDDATA13_S14C2_MASK                               0x40
#define _LCDDATA13_S15C2_POSN                               0x7
#define _LCDDATA13_S15C2_POSITION                           0x7
#define _LCDDATA13_S15C2_SIZE                               0x1
#define _LCDDATA13_S15C2_LENGTH                             0x1
#define _LCDDATA13_S15C2_MASK                               0x80
#define _LCDDATA13_SEG8COM2_POSN                            0x0
#define _LCDDATA13_SEG8COM2_POSITION                        0x0
#define _LCDDATA13_SEG8COM2_SIZE                            0x1
#define _LCDDATA13_SEG8COM2_LENGTH                          0x1
#define _LCDDATA13_SEG8COM2_MASK                            0x1
#define _LCDDATA13_SEG9COM2_POSN                            0x1
#define _LCDDATA13_SEG9COM2_POSITION                        0x1
#define _LCDDATA13_SEG9COM2_SIZE                            0x1
#define _LCDDATA13_SEG9COM2_LENGTH                          0x1
#define _LCDDATA13_SEG9COM2_MASK                            0x2
#define _LCDDATA13_SEG10COM2_POSN                           0x2
#define _LCDDATA13_SEG10COM2_POSITION                       0x2
#define _LCDDATA13_SEG10COM2_SIZE                           0x1
#define _LCDDATA13_SEG10COM2_LENGTH                         0x1
#define _LCDDATA13_SEG10COM2_MASK                           0x4
#define _LCDDATA13_SEG11COM2_POSN                           0x3
#define _LCDDATA13_SEG11COM2_POSITION                       0x3
#define _LCDDATA13_SEG11COM2_SIZE                           0x1
#define _LCDDATA13_SEG11COM2_LENGTH                         0x1
#define _LCDDATA13_SEG11COM2_MASK                           0x8
#define _LCDDATA13_SEG12COM2_POSN                           0x4
#define _LCDDATA13_SEG12COM2_POSITION                       0x4
#define _LCDDATA13_SEG12COM2_SIZE                           0x1
#define _LCDDATA13_SEG12COM2_LENGTH                         0x1
#define _LCDDATA13_SEG12COM2_MASK                           0x10
#define _LCDDATA13_SEG13COM2_POSN                           0x5
#define _LCDDATA13_SEG13COM2_POSITION                       0x5
#define _LCDDATA13_SEG13COM2_SIZE                           0x1
#define _LCDDATA13_SEG13COM2_LENGTH                         0x1
#define _LCDDATA13_SEG13COM2_MASK                           0x20
#define _LCDDATA13_SEG14COM2_POSN                           0x6
#define _LCDDATA13_SEG14COM2_POSITION                       0x6
#define _LCDDATA13_SEG14COM2_SIZE                           0x1
#define _LCDDATA13_SEG14COM2_LENGTH                         0x1
#define _LCDDATA13_SEG14COM2_MASK                           0x40
#define _LCDDATA13_SEG15COM2_POSN                           0x7
#define _LCDDATA13_SEG15COM2_POSITION                       0x7
#define _LCDDATA13_SEG15COM2_SIZE                           0x1
#define _LCDDATA13_SEG15COM2_LENGTH                         0x1
#define _LCDDATA13_SEG15COM2_MASK                           0x80
#define _LCDDATA13_S08C2_POSN                               0x0
#define _LCDDATA13_S08C2_POSITION                           0x0
#define _LCDDATA13_S08C2_SIZE                               0x1
#define _LCDDATA13_S08C2_LENGTH                             0x1
#define _LCDDATA13_S08C2_MASK                               0x1
#define _LCDDATA13_S09C2_POSN                               0x1
#define _LCDDATA13_S09C2_POSITION                           0x1
#define _LCDDATA13_S09C2_SIZE                               0x1
#define _LCDDATA13_S09C2_LENGTH                             0x1
#define _LCDDATA13_S09C2_MASK                               0x2

// Register: LCDDATA14
#define LCDDATA14 LCDDATA14
extern volatile unsigned char           LCDDATA14           __at(0xF74);
#ifndef _LIB_BUILD
asm("LCDDATA14 equ 0F74h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA14              :8;
    };
    struct {
        unsigned S16C2                  :1;
        unsigned S17C2                  :1;
        unsigned S18C2                  :1;
        unsigned S19C2                  :1;
        unsigned S20C2                  :1;
        unsigned S21C2                  :1;
        unsigned S22C2                  :1;
        unsigned S23C2                  :1;
    };
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
} LCDDATA14bits_t;
extern volatile LCDDATA14bits_t LCDDATA14bits __at(0xF74);
// bitfield macros
#define _LCDDATA14_LCDDATA14_POSN                           0x0
#define _LCDDATA14_LCDDATA14_POSITION                       0x0
#define _LCDDATA14_LCDDATA14_SIZE                           0x8
#define _LCDDATA14_LCDDATA14_LENGTH                         0x8
#define _LCDDATA14_LCDDATA14_MASK                           0xFF
#define _LCDDATA14_S16C2_POSN                               0x0
#define _LCDDATA14_S16C2_POSITION                           0x0
#define _LCDDATA14_S16C2_SIZE                               0x1
#define _LCDDATA14_S16C2_LENGTH                             0x1
#define _LCDDATA14_S16C2_MASK                               0x1
#define _LCDDATA14_S17C2_POSN                               0x1
#define _LCDDATA14_S17C2_POSITION                           0x1
#define _LCDDATA14_S17C2_SIZE                               0x1
#define _LCDDATA14_S17C2_LENGTH                             0x1
#define _LCDDATA14_S17C2_MASK                               0x2
#define _LCDDATA14_S18C2_POSN                               0x2
#define _LCDDATA14_S18C2_POSITION                           0x2
#define _LCDDATA14_S18C2_SIZE                               0x1
#define _LCDDATA14_S18C2_LENGTH                             0x1
#define _LCDDATA14_S18C2_MASK                               0x4
#define _LCDDATA14_S19C2_POSN                               0x3
#define _LCDDATA14_S19C2_POSITION                           0x3
#define _LCDDATA14_S19C2_SIZE                               0x1
#define _LCDDATA14_S19C2_LENGTH                             0x1
#define _LCDDATA14_S19C2_MASK                               0x8
#define _LCDDATA14_S20C2_POSN                               0x4
#define _LCDDATA14_S20C2_POSITION                           0x4
#define _LCDDATA14_S20C2_SIZE                               0x1
#define _LCDDATA14_S20C2_LENGTH                             0x1
#define _LCDDATA14_S20C2_MASK                               0x10
#define _LCDDATA14_S21C2_POSN                               0x5
#define _LCDDATA14_S21C2_POSITION                           0x5
#define _LCDDATA14_S21C2_SIZE                               0x1
#define _LCDDATA14_S21C2_LENGTH                             0x1
#define _LCDDATA14_S21C2_MASK                               0x20
#define _LCDDATA14_S22C2_POSN                               0x6
#define _LCDDATA14_S22C2_POSITION                           0x6
#define _LCDDATA14_S22C2_SIZE                               0x1
#define _LCDDATA14_S22C2_LENGTH                             0x1
#define _LCDDATA14_S22C2_MASK                               0x40
#define _LCDDATA14_S23C2_POSN                               0x7
#define _LCDDATA14_S23C2_POSITION                           0x7
#define _LCDDATA14_S23C2_SIZE                               0x1
#define _LCDDATA14_S23C2_LENGTH                             0x1
#define _LCDDATA14_S23C2_MASK                               0x80
#define _LCDDATA14_SEG16COM2_POSN                           0x0
#define _LCDDATA14_SEG16COM2_POSITION                       0x0
#define _LCDDATA14_SEG16COM2_SIZE                           0x1
#define _LCDDATA14_SEG16COM2_LENGTH                         0x1
#define _LCDDATA14_SEG16COM2_MASK                           0x1
#define _LCDDATA14_SEG17COM2_POSN                           0x1
#define _LCDDATA14_SEG17COM2_POSITION                       0x1
#define _LCDDATA14_SEG17COM2_SIZE                           0x1
#define _LCDDATA14_SEG17COM2_LENGTH                         0x1
#define _LCDDATA14_SEG17COM2_MASK                           0x2
#define _LCDDATA14_SEG18COM2_POSN                           0x2
#define _LCDDATA14_SEG18COM2_POSITION                       0x2
#define _LCDDATA14_SEG18COM2_SIZE                           0x1
#define _LCDDATA14_SEG18COM2_LENGTH                         0x1
#define _LCDDATA14_SEG18COM2_MASK                           0x4
#define _LCDDATA14_SEG19COM2_POSN                           0x3
#define _LCDDATA14_SEG19COM2_POSITION                       0x3
#define _LCDDATA14_SEG19COM2_SIZE                           0x1
#define _LCDDATA14_SEG19COM2_LENGTH                         0x1
#define _LCDDATA14_SEG19COM2_MASK                           0x8
#define _LCDDATA14_SEG20COM2_POSN                           0x4
#define _LCDDATA14_SEG20COM2_POSITION                       0x4
#define _LCDDATA14_SEG20COM2_SIZE                           0x1
#define _LCDDATA14_SEG20COM2_LENGTH                         0x1
#define _LCDDATA14_SEG20COM2_MASK                           0x10
#define _LCDDATA14_SEG21COM2_POSN                           0x5
#define _LCDDATA14_SEG21COM2_POSITION                       0x5
#define _LCDDATA14_SEG21COM2_SIZE                           0x1
#define _LCDDATA14_SEG21COM2_LENGTH                         0x1
#define _LCDDATA14_SEG21COM2_MASK                           0x20
#define _LCDDATA14_SEG22COM2_POSN                           0x6
#define _LCDDATA14_SEG22COM2_POSITION                       0x6
#define _LCDDATA14_SEG22COM2_SIZE                           0x1
#define _LCDDATA14_SEG22COM2_LENGTH                         0x1
#define _LCDDATA14_SEG22COM2_MASK                           0x40
#define _LCDDATA14_SEG23COM2_POSN                           0x7
#define _LCDDATA14_SEG23COM2_POSITION                       0x7
#define _LCDDATA14_SEG23COM2_SIZE                           0x1
#define _LCDDATA14_SEG23COM2_LENGTH                         0x1
#define _LCDDATA14_SEG23COM2_MASK                           0x80
#define _LCDDATA14_MSK0_POSN                                0x0
#define _LCDDATA14_MSK0_POSITION                            0x0
#define _LCDDATA14_MSK0_SIZE                                0x1
#define _LCDDATA14_MSK0_LENGTH                              0x1
#define _LCDDATA14_MSK0_MASK                                0x1
#define _LCDDATA14_MSK1_POSN                                0x1
#define _LCDDATA14_MSK1_POSITION                            0x1
#define _LCDDATA14_MSK1_SIZE                                0x1
#define _LCDDATA14_MSK1_LENGTH                              0x1
#define _LCDDATA14_MSK1_MASK                                0x2
#define _LCDDATA14_MSK2_POSN                                0x2
#define _LCDDATA14_MSK2_POSITION                            0x2
#define _LCDDATA14_MSK2_SIZE                                0x1
#define _LCDDATA14_MSK2_LENGTH                              0x1
#define _LCDDATA14_MSK2_MASK                                0x4
#define _LCDDATA14_MSK3_POSN                                0x3
#define _LCDDATA14_MSK3_POSITION                            0x3
#define _LCDDATA14_MSK3_SIZE                                0x1
#define _LCDDATA14_MSK3_LENGTH                              0x1
#define _LCDDATA14_MSK3_MASK                                0x8
#define _LCDDATA14_MSK4_POSN                                0x4
#define _LCDDATA14_MSK4_POSITION                            0x4
#define _LCDDATA14_MSK4_SIZE                                0x1
#define _LCDDATA14_MSK4_LENGTH                              0x1
#define _LCDDATA14_MSK4_MASK                                0x10
#define _LCDDATA14_MSK5_POSN                                0x5
#define _LCDDATA14_MSK5_POSITION                            0x5
#define _LCDDATA14_MSK5_SIZE                                0x1
#define _LCDDATA14_MSK5_LENGTH                              0x1
#define _LCDDATA14_MSK5_MASK                                0x20
#define _LCDDATA14_MSK6_POSN                                0x6
#define _LCDDATA14_MSK6_POSITION                            0x6
#define _LCDDATA14_MSK6_SIZE                                0x1
#define _LCDDATA14_MSK6_LENGTH                              0x1
#define _LCDDATA14_MSK6_MASK                                0x40
#define _LCDDATA14_MSK7_POSN                                0x7
#define _LCDDATA14_MSK7_POSITION                            0x7
#define _LCDDATA14_MSK7_SIZE                                0x1
#define _LCDDATA14_MSK7_LENGTH                              0x1
#define _LCDDATA14_MSK7_MASK                                0x80

// Register: LCDDATA15
#define LCDDATA15 LCDDATA15
extern volatile unsigned char           LCDDATA15           __at(0xF75);
#ifndef _LIB_BUILD
asm("LCDDATA15 equ 0F75h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA15              :8;
    };
    struct {
        unsigned S24C2                  :1;
        unsigned S25C2                  :1;
        unsigned S26C2                  :1;
        unsigned S27C2                  :1;
        unsigned S28C2                  :1;
        unsigned S29C2                  :1;
        unsigned S30C2                  :1;
        unsigned S31C2                  :1;
    };
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
} LCDDATA15bits_t;
extern volatile LCDDATA15bits_t LCDDATA15bits __at(0xF75);
// bitfield macros
#define _LCDDATA15_LCDDATA15_POSN                           0x0
#define _LCDDATA15_LCDDATA15_POSITION                       0x0
#define _LCDDATA15_LCDDATA15_SIZE                           0x8
#define _LCDDATA15_LCDDATA15_LENGTH                         0x8
#define _LCDDATA15_LCDDATA15_MASK                           0xFF
#define _LCDDATA15_S24C2_POSN                               0x0
#define _LCDDATA15_S24C2_POSITION                           0x0
#define _LCDDATA15_S24C2_SIZE                               0x1
#define _LCDDATA15_S24C2_LENGTH                             0x1
#define _LCDDATA15_S24C2_MASK                               0x1
#define _LCDDATA15_S25C2_POSN                               0x1
#define _LCDDATA15_S25C2_POSITION                           0x1
#define _LCDDATA15_S25C2_SIZE                               0x1
#define _LCDDATA15_S25C2_LENGTH                             0x1
#define _LCDDATA15_S25C2_MASK                               0x2
#define _LCDDATA15_S26C2_POSN                               0x2
#define _LCDDATA15_S26C2_POSITION                           0x2
#define _LCDDATA15_S26C2_SIZE                               0x1
#define _LCDDATA15_S26C2_LENGTH                             0x1
#define _LCDDATA15_S26C2_MASK                               0x4
#define _LCDDATA15_S27C2_POSN                               0x3
#define _LCDDATA15_S27C2_POSITION                           0x3
#define _LCDDATA15_S27C2_SIZE                               0x1
#define _LCDDATA15_S27C2_LENGTH                             0x1
#define _LCDDATA15_S27C2_MASK                               0x8
#define _LCDDATA15_S28C2_POSN                               0x4
#define _LCDDATA15_S28C2_POSITION                           0x4
#define _LCDDATA15_S28C2_SIZE                               0x1
#define _LCDDATA15_S28C2_LENGTH                             0x1
#define _LCDDATA15_S28C2_MASK                               0x10
#define _LCDDATA15_S29C2_POSN                               0x5
#define _LCDDATA15_S29C2_POSITION                           0x5
#define _LCDDATA15_S29C2_SIZE                               0x1
#define _LCDDATA15_S29C2_LENGTH                             0x1
#define _LCDDATA15_S29C2_MASK                               0x20
#define _LCDDATA15_S30C2_POSN                               0x6
#define _LCDDATA15_S30C2_POSITION                           0x6
#define _LCDDATA15_S30C2_SIZE                               0x1
#define _LCDDATA15_S30C2_LENGTH                             0x1
#define _LCDDATA15_S30C2_MASK                               0x40
#define _LCDDATA15_S31C2_POSN                               0x7
#define _LCDDATA15_S31C2_POSITION                           0x7
#define _LCDDATA15_S31C2_SIZE                               0x1
#define _LCDDATA15_S31C2_LENGTH                             0x1
#define _LCDDATA15_S31C2_MASK                               0x80
#define _LCDDATA15_SEG24COM2_POSN                           0x0
#define _LCDDATA15_SEG24COM2_POSITION                       0x0
#define _LCDDATA15_SEG24COM2_SIZE                           0x1
#define _LCDDATA15_SEG24COM2_LENGTH                         0x1
#define _LCDDATA15_SEG24COM2_MASK                           0x1
#define _LCDDATA15_SEG25COM2_POSN                           0x1
#define _LCDDATA15_SEG25COM2_POSITION                       0x1
#define _LCDDATA15_SEG25COM2_SIZE                           0x1
#define _LCDDATA15_SEG25COM2_LENGTH                         0x1
#define _LCDDATA15_SEG25COM2_MASK                           0x2
#define _LCDDATA15_SEG26COM2_POSN                           0x2
#define _LCDDATA15_SEG26COM2_POSITION                       0x2
#define _LCDDATA15_SEG26COM2_SIZE                           0x1
#define _LCDDATA15_SEG26COM2_LENGTH                         0x1
#define _LCDDATA15_SEG26COM2_MASK                           0x4
#define _LCDDATA15_SEG27COM2_POSN                           0x3
#define _LCDDATA15_SEG27COM2_POSITION                       0x3
#define _LCDDATA15_SEG27COM2_SIZE                           0x1
#define _LCDDATA15_SEG27COM2_LENGTH                         0x1
#define _LCDDATA15_SEG27COM2_MASK                           0x8
#define _LCDDATA15_SEG28COM2_POSN                           0x4
#define _LCDDATA15_SEG28COM2_POSITION                       0x4
#define _LCDDATA15_SEG28COM2_SIZE                           0x1
#define _LCDDATA15_SEG28COM2_LENGTH                         0x1
#define _LCDDATA15_SEG28COM2_MASK                           0x10
#define _LCDDATA15_SEG29COM2_POSN                           0x5
#define _LCDDATA15_SEG29COM2_POSITION                       0x5
#define _LCDDATA15_SEG29COM2_SIZE                           0x1
#define _LCDDATA15_SEG29COM2_LENGTH                         0x1
#define _LCDDATA15_SEG29COM2_MASK                           0x20
#define _LCDDATA15_SEG30COM2_POSN                           0x6
#define _LCDDATA15_SEG30COM2_POSITION                       0x6
#define _LCDDATA15_SEG30COM2_SIZE                           0x1
#define _LCDDATA15_SEG30COM2_LENGTH                         0x1
#define _LCDDATA15_SEG30COM2_MASK                           0x40
#define _LCDDATA15_SEG31COM2_POSN                           0x7
#define _LCDDATA15_SEG31COM2_POSITION                       0x7
#define _LCDDATA15_SEG31COM2_SIZE                           0x1
#define _LCDDATA15_SEG31COM2_LENGTH                         0x1
#define _LCDDATA15_SEG31COM2_MASK                           0x80

// Register: LCDDATA16
#define LCDDATA16 LCDDATA16
extern volatile unsigned char           LCDDATA16           __at(0xF76);
#ifndef _LIB_BUILD
asm("LCDDATA16 equ 0F76h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA16              :8;
    };
    struct {
        unsigned S32C2                  :1;
    };
    struct {
        unsigned SEG32COM2              :1;
    };
    struct {
        unsigned T4CKPS016              :1;
        unsigned T4CKPS116              :1;
        unsigned                        :1;
        unsigned T4OUTPS016             :1;
        unsigned T4OUTPS116             :1;
        unsigned T4OUTPS216             :1;
        unsigned T4OUTPS316             :1;
    };
} LCDDATA16bits_t;
extern volatile LCDDATA16bits_t LCDDATA16bits __at(0xF76);
// bitfield macros
#define _LCDDATA16_LCDDATA16_POSN                           0x0
#define _LCDDATA16_LCDDATA16_POSITION                       0x0
#define _LCDDATA16_LCDDATA16_SIZE                           0x8
#define _LCDDATA16_LCDDATA16_LENGTH                         0x8
#define _LCDDATA16_LCDDATA16_MASK                           0xFF
#define _LCDDATA16_S32C2_POSN                               0x0
#define _LCDDATA16_S32C2_POSITION                           0x0
#define _LCDDATA16_S32C2_SIZE                               0x1
#define _LCDDATA16_S32C2_LENGTH                             0x1
#define _LCDDATA16_S32C2_MASK                               0x1
#define _LCDDATA16_SEG32COM2_POSN                           0x0
#define _LCDDATA16_SEG32COM2_POSITION                       0x0
#define _LCDDATA16_SEG32COM2_SIZE                           0x1
#define _LCDDATA16_SEG32COM2_LENGTH                         0x1
#define _LCDDATA16_SEG32COM2_MASK                           0x1
#define _LCDDATA16_T4CKPS016_POSN                           0x0
#define _LCDDATA16_T4CKPS016_POSITION                       0x0
#define _LCDDATA16_T4CKPS016_SIZE                           0x1
#define _LCDDATA16_T4CKPS016_LENGTH                         0x1
#define _LCDDATA16_T4CKPS016_MASK                           0x1
#define _LCDDATA16_T4CKPS116_POSN                           0x1
#define _LCDDATA16_T4CKPS116_POSITION                       0x1
#define _LCDDATA16_T4CKPS116_SIZE                           0x1
#define _LCDDATA16_T4CKPS116_LENGTH                         0x1
#define _LCDDATA16_T4CKPS116_MASK                           0x2
#define _LCDDATA16_T4OUTPS016_POSN                          0x3
#define _LCDDATA16_T4OUTPS016_POSITION                      0x3
#define _LCDDATA16_T4OUTPS016_SIZE                          0x1
#define _LCDDATA16_T4OUTPS016_LENGTH                        0x1
#define _LCDDATA16_T4OUTPS016_MASK                          0x8
#define _LCDDATA16_T4OUTPS116_POSN                          0x4
#define _LCDDATA16_T4OUTPS116_POSITION                      0x4
#define _LCDDATA16_T4OUTPS116_SIZE                          0x1
#define _LCDDATA16_T4OUTPS116_LENGTH                        0x1
#define _LCDDATA16_T4OUTPS116_MASK                          0x10
#define _LCDDATA16_T4OUTPS216_POSN                          0x5
#define _LCDDATA16_T4OUTPS216_POSITION                      0x5
#define _LCDDATA16_T4OUTPS216_SIZE                          0x1
#define _LCDDATA16_T4OUTPS216_LENGTH                        0x1
#define _LCDDATA16_T4OUTPS216_MASK                          0x20
#define _LCDDATA16_T4OUTPS316_POSN                          0x6
#define _LCDDATA16_T4OUTPS316_POSITION                      0x6
#define _LCDDATA16_T4OUTPS316_SIZE                          0x1
#define _LCDDATA16_T4OUTPS316_LENGTH                        0x1
#define _LCDDATA16_T4OUTPS316_MASK                          0x40

// Register: LCDDATA18
#define LCDDATA18 LCDDATA18
extern volatile unsigned char           LCDDATA18           __at(0xF78);
#ifndef _LIB_BUILD
asm("LCDDATA18 equ 0F78h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA18              :8;
    };
    struct {
        unsigned S00C3                  :1;
        unsigned S01C3                  :1;
        unsigned S02C3                  :1;
        unsigned S03C3                  :1;
        unsigned S04C3                  :1;
        unsigned S05C3                  :1;
        unsigned S06C3                  :1;
        unsigned S07C3                  :1;
    };
    struct {
        unsigned SEG00COM3              :1;
        unsigned SEG01COM3              :1;
        unsigned SEG02COM3              :1;
        unsigned SEG03COM3              :1;
        unsigned SEG04COM3              :1;
        unsigned SEG05COM3              :1;
        unsigned SEG06COM3              :1;
        unsigned SEG07COM3              :1;
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
} LCDDATA18bits_t;
extern volatile LCDDATA18bits_t LCDDATA18bits __at(0xF78);
// bitfield macros
#define _LCDDATA18_LCDDATA18_POSN                           0x0
#define _LCDDATA18_LCDDATA18_POSITION                       0x0
#define _LCDDATA18_LCDDATA18_SIZE                           0x8
#define _LCDDATA18_LCDDATA18_LENGTH                         0x8
#define _LCDDATA18_LCDDATA18_MASK                           0xFF
#define _LCDDATA18_S00C3_POSN                               0x0
#define _LCDDATA18_S00C3_POSITION                           0x0
#define _LCDDATA18_S00C3_SIZE                               0x1
#define _LCDDATA18_S00C3_LENGTH                             0x1
#define _LCDDATA18_S00C3_MASK                               0x1
#define _LCDDATA18_S01C3_POSN                               0x1
#define _LCDDATA18_S01C3_POSITION                           0x1
#define _LCDDATA18_S01C3_SIZE                               0x1
#define _LCDDATA18_S01C3_LENGTH                             0x1
#define _LCDDATA18_S01C3_MASK                               0x2
#define _LCDDATA18_S02C3_POSN                               0x2
#define _LCDDATA18_S02C3_POSITION                           0x2
#define _LCDDATA18_S02C3_SIZE                               0x1
#define _LCDDATA18_S02C3_LENGTH                             0x1
#define _LCDDATA18_S02C3_MASK                               0x4
#define _LCDDATA18_S03C3_POSN                               0x3
#define _LCDDATA18_S03C3_POSITION                           0x3
#define _LCDDATA18_S03C3_SIZE                               0x1
#define _LCDDATA18_S03C3_LENGTH                             0x1
#define _LCDDATA18_S03C3_MASK                               0x8
#define _LCDDATA18_S04C3_POSN                               0x4
#define _LCDDATA18_S04C3_POSITION                           0x4
#define _LCDDATA18_S04C3_SIZE                               0x1
#define _LCDDATA18_S04C3_LENGTH                             0x1
#define _LCDDATA18_S04C3_MASK                               0x10
#define _LCDDATA18_S05C3_POSN                               0x5
#define _LCDDATA18_S05C3_POSITION                           0x5
#define _LCDDATA18_S05C3_SIZE                               0x1
#define _LCDDATA18_S05C3_LENGTH                             0x1
#define _LCDDATA18_S05C3_MASK                               0x20
#define _LCDDATA18_S06C3_POSN                               0x6
#define _LCDDATA18_S06C3_POSITION                           0x6
#define _LCDDATA18_S06C3_SIZE                               0x1
#define _LCDDATA18_S06C3_LENGTH                             0x1
#define _LCDDATA18_S06C3_MASK                               0x40
#define _LCDDATA18_S07C3_POSN                               0x7
#define _LCDDATA18_S07C3_POSITION                           0x7
#define _LCDDATA18_S07C3_SIZE                               0x1
#define _LCDDATA18_S07C3_LENGTH                             0x1
#define _LCDDATA18_S07C3_MASK                               0x80
#define _LCDDATA18_SEG00COM3_POSN                           0x0
#define _LCDDATA18_SEG00COM3_POSITION                       0x0
#define _LCDDATA18_SEG00COM3_SIZE                           0x1
#define _LCDDATA18_SEG00COM3_LENGTH                         0x1
#define _LCDDATA18_SEG00COM3_MASK                           0x1
#define _LCDDATA18_SEG01COM3_POSN                           0x1
#define _LCDDATA18_SEG01COM3_POSITION                       0x1
#define _LCDDATA18_SEG01COM3_SIZE                           0x1
#define _LCDDATA18_SEG01COM3_LENGTH                         0x1
#define _LCDDATA18_SEG01COM3_MASK                           0x2
#define _LCDDATA18_SEG02COM3_POSN                           0x2
#define _LCDDATA18_SEG02COM3_POSITION                       0x2
#define _LCDDATA18_SEG02COM3_SIZE                           0x1
#define _LCDDATA18_SEG02COM3_LENGTH                         0x1
#define _LCDDATA18_SEG02COM3_MASK                           0x4
#define _LCDDATA18_SEG03COM3_POSN                           0x3
#define _LCDDATA18_SEG03COM3_POSITION                       0x3
#define _LCDDATA18_SEG03COM3_SIZE                           0x1
#define _LCDDATA18_SEG03COM3_LENGTH                         0x1
#define _LCDDATA18_SEG03COM3_MASK                           0x8
#define _LCDDATA18_SEG04COM3_POSN                           0x4
#define _LCDDATA18_SEG04COM3_POSITION                       0x4
#define _LCDDATA18_SEG04COM3_SIZE                           0x1
#define _LCDDATA18_SEG04COM3_LENGTH                         0x1
#define _LCDDATA18_SEG04COM3_MASK                           0x10
#define _LCDDATA18_SEG05COM3_POSN                           0x5
#define _LCDDATA18_SEG05COM3_POSITION                       0x5
#define _LCDDATA18_SEG05COM3_SIZE                           0x1
#define _LCDDATA18_SEG05COM3_LENGTH                         0x1
#define _LCDDATA18_SEG05COM3_MASK                           0x20
#define _LCDDATA18_SEG06COM3_POSN                           0x6
#define _LCDDATA18_SEG06COM3_POSITION                       0x6
#define _LCDDATA18_SEG06COM3_SIZE                           0x1
#define _LCDDATA18_SEG06COM3_LENGTH                         0x1
#define _LCDDATA18_SEG06COM3_MASK                           0x40
#define _LCDDATA18_SEG07COM3_POSN                           0x7
#define _LCDDATA18_SEG07COM3_POSITION                       0x7
#define _LCDDATA18_SEG07COM3_SIZE                           0x1
#define _LCDDATA18_SEG07COM3_LENGTH                         0x1
#define _LCDDATA18_SEG07COM3_MASK                           0x80
#define _LCDDATA18_S0C3_POSN                                0x0
#define _LCDDATA18_S0C3_POSITION                            0x0
#define _LCDDATA18_S0C3_SIZE                                0x1
#define _LCDDATA18_S0C3_LENGTH                              0x1
#define _LCDDATA18_S0C3_MASK                                0x1
#define _LCDDATA18_S1C3_POSN                                0x1
#define _LCDDATA18_S1C3_POSITION                            0x1
#define _LCDDATA18_S1C3_SIZE                                0x1
#define _LCDDATA18_S1C3_LENGTH                              0x1
#define _LCDDATA18_S1C3_MASK                                0x2
#define _LCDDATA18_S2C3_POSN                                0x2
#define _LCDDATA18_S2C3_POSITION                            0x2
#define _LCDDATA18_S2C3_SIZE                                0x1
#define _LCDDATA18_S2C3_LENGTH                              0x1
#define _LCDDATA18_S2C3_MASK                                0x4
#define _LCDDATA18_S3C3_POSN                                0x3
#define _LCDDATA18_S3C3_POSITION                            0x3
#define _LCDDATA18_S3C3_SIZE                                0x1
#define _LCDDATA18_S3C3_LENGTH                              0x1
#define _LCDDATA18_S3C3_MASK                                0x8
#define _LCDDATA18_S4C3_POSN                                0x4
#define _LCDDATA18_S4C3_POSITION                            0x4
#define _LCDDATA18_S4C3_SIZE                                0x1
#define _LCDDATA18_S4C3_LENGTH                              0x1
#define _LCDDATA18_S4C3_MASK                                0x10
#define _LCDDATA18_S5C3_POSN                                0x5
#define _LCDDATA18_S5C3_POSITION                            0x5
#define _LCDDATA18_S5C3_SIZE                                0x1
#define _LCDDATA18_S5C3_LENGTH                              0x1
#define _LCDDATA18_S5C3_MASK                                0x20
#define _LCDDATA18_S6C3_POSN                                0x6
#define _LCDDATA18_S6C3_POSITION                            0x6
#define _LCDDATA18_S6C3_SIZE                                0x1
#define _LCDDATA18_S6C3_LENGTH                              0x1
#define _LCDDATA18_S6C3_MASK                                0x40
#define _LCDDATA18_S7C3_POSN                                0x7
#define _LCDDATA18_S7C3_POSITION                            0x7
#define _LCDDATA18_S7C3_SIZE                                0x1
#define _LCDDATA18_S7C3_LENGTH                              0x1
#define _LCDDATA18_S7C3_MASK                                0x80

// Register: LCDDATA19
#define LCDDATA19 LCDDATA19
extern volatile unsigned char           LCDDATA19           __at(0xF79);
#ifndef _LIB_BUILD
asm("LCDDATA19 equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA19              :8;
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
        unsigned S08C3                  :1;
        unsigned S09C3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned T3CKPS019              :1;
        unsigned T3CKPS119              :1;
        unsigned TMR3CS019              :1;
        unsigned TMR3CS119              :1;
    };
} LCDDATA19bits_t;
extern volatile LCDDATA19bits_t LCDDATA19bits __at(0xF79);
// bitfield macros
#define _LCDDATA19_LCDDATA19_POSN                           0x0
#define _LCDDATA19_LCDDATA19_POSITION                       0x0
#define _LCDDATA19_LCDDATA19_SIZE                           0x8
#define _LCDDATA19_LCDDATA19_LENGTH                         0x8
#define _LCDDATA19_LCDDATA19_MASK                           0xFF
#define _LCDDATA19_S8C3_POSN                                0x0
#define _LCDDATA19_S8C3_POSITION                            0x0
#define _LCDDATA19_S8C3_SIZE                                0x1
#define _LCDDATA19_S8C3_LENGTH                              0x1
#define _LCDDATA19_S8C3_MASK                                0x1
#define _LCDDATA19_S9C3_POSN                                0x1
#define _LCDDATA19_S9C3_POSITION                            0x1
#define _LCDDATA19_S9C3_SIZE                                0x1
#define _LCDDATA19_S9C3_LENGTH                              0x1
#define _LCDDATA19_S9C3_MASK                                0x2
#define _LCDDATA19_S10C3_POSN                               0x2
#define _LCDDATA19_S10C3_POSITION                           0x2
#define _LCDDATA19_S10C3_SIZE                               0x1
#define _LCDDATA19_S10C3_LENGTH                             0x1
#define _LCDDATA19_S10C3_MASK                               0x4
#define _LCDDATA19_S11C3_POSN                               0x3
#define _LCDDATA19_S11C3_POSITION                           0x3
#define _LCDDATA19_S11C3_SIZE                               0x1
#define _LCDDATA19_S11C3_LENGTH                             0x1
#define _LCDDATA19_S11C3_MASK                               0x8
#define _LCDDATA19_S12C3_POSN                               0x4
#define _LCDDATA19_S12C3_POSITION                           0x4
#define _LCDDATA19_S12C3_SIZE                               0x1
#define _LCDDATA19_S12C3_LENGTH                             0x1
#define _LCDDATA19_S12C3_MASK                               0x10
#define _LCDDATA19_S13C3_POSN                               0x5
#define _LCDDATA19_S13C3_POSITION                           0x5
#define _LCDDATA19_S13C3_SIZE                               0x1
#define _LCDDATA19_S13C3_LENGTH                             0x1
#define _LCDDATA19_S13C3_MASK                               0x20
#define _LCDDATA19_S14C3_POSN                               0x6
#define _LCDDATA19_S14C3_POSITION                           0x6
#define _LCDDATA19_S14C3_SIZE                               0x1
#define _LCDDATA19_S14C3_LENGTH                             0x1
#define _LCDDATA19_S14C3_MASK                               0x40
#define _LCDDATA19_S15C3_POSN                               0x7
#define _LCDDATA19_S15C3_POSITION                           0x7
#define _LCDDATA19_S15C3_SIZE                               0x1
#define _LCDDATA19_S15C3_LENGTH                             0x1
#define _LCDDATA19_S15C3_MASK                               0x80
#define _LCDDATA19_SEG8COM3_POSN                            0x0
#define _LCDDATA19_SEG8COM3_POSITION                        0x0
#define _LCDDATA19_SEG8COM3_SIZE                            0x1
#define _LCDDATA19_SEG8COM3_LENGTH                          0x1
#define _LCDDATA19_SEG8COM3_MASK                            0x1
#define _LCDDATA19_SEG9COM3_POSN                            0x1
#define _LCDDATA19_SEG9COM3_POSITION                        0x1
#define _LCDDATA19_SEG9COM3_SIZE                            0x1
#define _LCDDATA19_SEG9COM3_LENGTH                          0x1
#define _LCDDATA19_SEG9COM3_MASK                            0x2
#define _LCDDATA19_SEG10COM3_POSN                           0x2
#define _LCDDATA19_SEG10COM3_POSITION                       0x2
#define _LCDDATA19_SEG10COM3_SIZE                           0x1
#define _LCDDATA19_SEG10COM3_LENGTH                         0x1
#define _LCDDATA19_SEG10COM3_MASK                           0x4
#define _LCDDATA19_SEG11COM3_POSN                           0x3
#define _LCDDATA19_SEG11COM3_POSITION                       0x3
#define _LCDDATA19_SEG11COM3_SIZE                           0x1
#define _LCDDATA19_SEG11COM3_LENGTH                         0x1
#define _LCDDATA19_SEG11COM3_MASK                           0x8
#define _LCDDATA19_SEG12COM3_POSN                           0x4
#define _LCDDATA19_SEG12COM3_POSITION                       0x4
#define _LCDDATA19_SEG12COM3_SIZE                           0x1
#define _LCDDATA19_SEG12COM3_LENGTH                         0x1
#define _LCDDATA19_SEG12COM3_MASK                           0x10
#define _LCDDATA19_SEG13COM3_POSN                           0x5
#define _LCDDATA19_SEG13COM3_POSITION                       0x5
#define _LCDDATA19_SEG13COM3_SIZE                           0x1
#define _LCDDATA19_SEG13COM3_LENGTH                         0x1
#define _LCDDATA19_SEG13COM3_MASK                           0x20
#define _LCDDATA19_SEG14COM3_POSN                           0x6
#define _LCDDATA19_SEG14COM3_POSITION                       0x6
#define _LCDDATA19_SEG14COM3_SIZE                           0x1
#define _LCDDATA19_SEG14COM3_LENGTH                         0x1
#define _LCDDATA19_SEG14COM3_MASK                           0x40
#define _LCDDATA19_SEG15COM3_POSN                           0x7
#define _LCDDATA19_SEG15COM3_POSITION                       0x7
#define _LCDDATA19_SEG15COM3_SIZE                           0x1
#define _LCDDATA19_SEG15COM3_LENGTH                         0x1
#define _LCDDATA19_SEG15COM3_MASK                           0x80
#define _LCDDATA19_S08C3_POSN                               0x0
#define _LCDDATA19_S08C3_POSITION                           0x0
#define _LCDDATA19_S08C3_SIZE                               0x1
#define _LCDDATA19_S08C3_LENGTH                             0x1
#define _LCDDATA19_S08C3_MASK                               0x1
#define _LCDDATA19_S09C3_POSN                               0x1
#define _LCDDATA19_S09C3_POSITION                           0x1
#define _LCDDATA19_S09C3_SIZE                               0x1
#define _LCDDATA19_S09C3_LENGTH                             0x1
#define _LCDDATA19_S09C3_MASK                               0x2
#define _LCDDATA19_T3CKPS019_POSN                           0x4
#define _LCDDATA19_T3CKPS019_POSITION                       0x4
#define _LCDDATA19_T3CKPS019_SIZE                           0x1
#define _LCDDATA19_T3CKPS019_LENGTH                         0x1
#define _LCDDATA19_T3CKPS019_MASK                           0x10
#define _LCDDATA19_T3CKPS119_POSN                           0x5
#define _LCDDATA19_T3CKPS119_POSITION                       0x5
#define _LCDDATA19_T3CKPS119_SIZE                           0x1
#define _LCDDATA19_T3CKPS119_LENGTH                         0x1
#define _LCDDATA19_T3CKPS119_MASK                           0x20
#define _LCDDATA19_TMR3CS019_POSN                           0x6
#define _LCDDATA19_TMR3CS019_POSITION                       0x6
#define _LCDDATA19_TMR3CS019_SIZE                           0x1
#define _LCDDATA19_TMR3CS019_LENGTH                         0x1
#define _LCDDATA19_TMR3CS019_MASK                           0x40
#define _LCDDATA19_TMR3CS119_POSN                           0x7
#define _LCDDATA19_TMR3CS119_POSITION                       0x7
#define _LCDDATA19_TMR3CS119_SIZE                           0x1
#define _LCDDATA19_TMR3CS119_LENGTH                         0x1
#define _LCDDATA19_TMR3CS119_MASK                           0x80

// Register: LCDDATA20
#define LCDDATA20 LCDDATA20
extern volatile unsigned char           LCDDATA20           __at(0xF7A);
#ifndef _LIB_BUILD
asm("LCDDATA20 equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA20              :8;
    };
    struct {
        unsigned S16C3                  :1;
        unsigned S17C3                  :1;
        unsigned S18C3                  :1;
        unsigned S19C3                  :1;
        unsigned S20C3                  :1;
        unsigned S21C3                  :1;
        unsigned S22C3                  :1;
        unsigned S23C3                  :1;
    };
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
} LCDDATA20bits_t;
extern volatile LCDDATA20bits_t LCDDATA20bits __at(0xF7A);
// bitfield macros
#define _LCDDATA20_LCDDATA20_POSN                           0x0
#define _LCDDATA20_LCDDATA20_POSITION                       0x0
#define _LCDDATA20_LCDDATA20_SIZE                           0x8
#define _LCDDATA20_LCDDATA20_LENGTH                         0x8
#define _LCDDATA20_LCDDATA20_MASK                           0xFF
#define _LCDDATA20_S16C3_POSN                               0x0
#define _LCDDATA20_S16C3_POSITION                           0x0
#define _LCDDATA20_S16C3_SIZE                               0x1
#define _LCDDATA20_S16C3_LENGTH                             0x1
#define _LCDDATA20_S16C3_MASK                               0x1
#define _LCDDATA20_S17C3_POSN                               0x1
#define _LCDDATA20_S17C3_POSITION                           0x1
#define _LCDDATA20_S17C3_SIZE                               0x1
#define _LCDDATA20_S17C3_LENGTH                             0x1
#define _LCDDATA20_S17C3_MASK                               0x2
#define _LCDDATA20_S18C3_POSN                               0x2
#define _LCDDATA20_S18C3_POSITION                           0x2
#define _LCDDATA20_S18C3_SIZE                               0x1
#define _LCDDATA20_S18C3_LENGTH                             0x1
#define _LCDDATA20_S18C3_MASK                               0x4
#define _LCDDATA20_S19C3_POSN                               0x3
#define _LCDDATA20_S19C3_POSITION                           0x3
#define _LCDDATA20_S19C3_SIZE                               0x1
#define _LCDDATA20_S19C3_LENGTH                             0x1
#define _LCDDATA20_S19C3_MASK                               0x8
#define _LCDDATA20_S20C3_POSN                               0x4
#define _LCDDATA20_S20C3_POSITION                           0x4
#define _LCDDATA20_S20C3_SIZE                               0x1
#define _LCDDATA20_S20C3_LENGTH                             0x1
#define _LCDDATA20_S20C3_MASK                               0x10
#define _LCDDATA20_S21C3_POSN                               0x5
#define _LCDDATA20_S21C3_POSITION                           0x5
#define _LCDDATA20_S21C3_SIZE                               0x1
#define _LCDDATA20_S21C3_LENGTH                             0x1
#define _LCDDATA20_S21C3_MASK                               0x20
#define _LCDDATA20_S22C3_POSN                               0x6
#define _LCDDATA20_S22C3_POSITION                           0x6
#define _LCDDATA20_S22C3_SIZE                               0x1
#define _LCDDATA20_S22C3_LENGTH                             0x1
#define _LCDDATA20_S22C3_MASK                               0x40
#define _LCDDATA20_S23C3_POSN                               0x7
#define _LCDDATA20_S23C3_POSITION                           0x7
#define _LCDDATA20_S23C3_SIZE                               0x1
#define _LCDDATA20_S23C3_LENGTH                             0x1
#define _LCDDATA20_S23C3_MASK                               0x80
#define _LCDDATA20_SEG16COM3_POSN                           0x0
#define _LCDDATA20_SEG16COM3_POSITION                       0x0
#define _LCDDATA20_SEG16COM3_SIZE                           0x1
#define _LCDDATA20_SEG16COM3_LENGTH                         0x1
#define _LCDDATA20_SEG16COM3_MASK                           0x1
#define _LCDDATA20_SEG17COM3_POSN                           0x1
#define _LCDDATA20_SEG17COM3_POSITION                       0x1
#define _LCDDATA20_SEG17COM3_SIZE                           0x1
#define _LCDDATA20_SEG17COM3_LENGTH                         0x1
#define _LCDDATA20_SEG17COM3_MASK                           0x2
#define _LCDDATA20_SEG18COM3_POSN                           0x2
#define _LCDDATA20_SEG18COM3_POSITION                       0x2
#define _LCDDATA20_SEG18COM3_SIZE                           0x1
#define _LCDDATA20_SEG18COM3_LENGTH                         0x1
#define _LCDDATA20_SEG18COM3_MASK                           0x4
#define _LCDDATA20_SEG19COM3_POSN                           0x3
#define _LCDDATA20_SEG19COM3_POSITION                       0x3
#define _LCDDATA20_SEG19COM3_SIZE                           0x1
#define _LCDDATA20_SEG19COM3_LENGTH                         0x1
#define _LCDDATA20_SEG19COM3_MASK                           0x8
#define _LCDDATA20_SEG20COM3_POSN                           0x4
#define _LCDDATA20_SEG20COM3_POSITION                       0x4
#define _LCDDATA20_SEG20COM3_SIZE                           0x1
#define _LCDDATA20_SEG20COM3_LENGTH                         0x1
#define _LCDDATA20_SEG20COM3_MASK                           0x10
#define _LCDDATA20_SEG21COM3_POSN                           0x5
#define _LCDDATA20_SEG21COM3_POSITION                       0x5
#define _LCDDATA20_SEG21COM3_SIZE                           0x1
#define _LCDDATA20_SEG21COM3_LENGTH                         0x1
#define _LCDDATA20_SEG21COM3_MASK                           0x20
#define _LCDDATA20_SEG22COM3_POSN                           0x6
#define _LCDDATA20_SEG22COM3_POSITION                       0x6
#define _LCDDATA20_SEG22COM3_SIZE                           0x1
#define _LCDDATA20_SEG22COM3_LENGTH                         0x1
#define _LCDDATA20_SEG22COM3_MASK                           0x40
#define _LCDDATA20_SEG23COM3_POSN                           0x7
#define _LCDDATA20_SEG23COM3_POSITION                       0x7
#define _LCDDATA20_SEG23COM3_SIZE                           0x1
#define _LCDDATA20_SEG23COM3_LENGTH                         0x1
#define _LCDDATA20_SEG23COM3_MASK                           0x80

// Register: LCDDATA21
#define LCDDATA21 LCDDATA21
extern volatile unsigned char           LCDDATA21           __at(0xF7B);
#ifndef _LIB_BUILD
asm("LCDDATA21 equ 0F7Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA21              :8;
    };
    struct {
        unsigned S24C3                  :1;
        unsigned S25C3                  :1;
        unsigned S26C3                  :1;
        unsigned S27C3                  :1;
        unsigned S28C3                  :1;
        unsigned S29C3                  :1;
        unsigned S30C3                  :1;
        unsigned S31C3                  :1;
    };
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
extern volatile LCDDATA21bits_t LCDDATA21bits __at(0xF7B);
// bitfield macros
#define _LCDDATA21_LCDDATA21_POSN                           0x0
#define _LCDDATA21_LCDDATA21_POSITION                       0x0
#define _LCDDATA21_LCDDATA21_SIZE                           0x8
#define _LCDDATA21_LCDDATA21_LENGTH                         0x8
#define _LCDDATA21_LCDDATA21_MASK                           0xFF
#define _LCDDATA21_S24C3_POSN                               0x0
#define _LCDDATA21_S24C3_POSITION                           0x0
#define _LCDDATA21_S24C3_SIZE                               0x1
#define _LCDDATA21_S24C3_LENGTH                             0x1
#define _LCDDATA21_S24C3_MASK                               0x1
#define _LCDDATA21_S25C3_POSN                               0x1
#define _LCDDATA21_S25C3_POSITION                           0x1
#define _LCDDATA21_S25C3_SIZE                               0x1
#define _LCDDATA21_S25C3_LENGTH                             0x1
#define _LCDDATA21_S25C3_MASK                               0x2
#define _LCDDATA21_S26C3_POSN                               0x2
#define _LCDDATA21_S26C3_POSITION                           0x2
#define _LCDDATA21_S26C3_SIZE                               0x1
#define _LCDDATA21_S26C3_LENGTH                             0x1
#define _LCDDATA21_S26C3_MASK                               0x4
#define _LCDDATA21_S27C3_POSN                               0x3
#define _LCDDATA21_S27C3_POSITION                           0x3
#define _LCDDATA21_S27C3_SIZE                               0x1
#define _LCDDATA21_S27C3_LENGTH                             0x1
#define _LCDDATA21_S27C3_MASK                               0x8
#define _LCDDATA21_S28C3_POSN                               0x4
#define _LCDDATA21_S28C3_POSITION                           0x4
#define _LCDDATA21_S28C3_SIZE                               0x1
#define _LCDDATA21_S28C3_LENGTH                             0x1
#define _LCDDATA21_S28C3_MASK                               0x10
#define _LCDDATA21_S29C3_POSN                               0x5
#define _LCDDATA21_S29C3_POSITION                           0x5
#define _LCDDATA21_S29C3_SIZE                               0x1
#define _LCDDATA21_S29C3_LENGTH                             0x1
#define _LCDDATA21_S29C3_MASK                               0x20
#define _LCDDATA21_S30C3_POSN                               0x6
#define _LCDDATA21_S30C3_POSITION                           0x6
#define _LCDDATA21_S30C3_SIZE                               0x1
#define _LCDDATA21_S30C3_LENGTH                             0x1
#define _LCDDATA21_S30C3_MASK                               0x40
#define _LCDDATA21_S31C3_POSN                               0x7
#define _LCDDATA21_S31C3_POSITION                           0x7
#define _LCDDATA21_S31C3_SIZE                               0x1
#define _LCDDATA21_S31C3_LENGTH                             0x1
#define _LCDDATA21_S31C3_MASK                               0x80
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
extern volatile unsigned char           LCDDATA22           __at(0xF7C);
#ifndef _LIB_BUILD
asm("LCDDATA22 equ 0F7Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA22              :8;
    };
    struct {
        unsigned S32C3                  :1;
    };
    struct {
        unsigned SEG32COM3              :1;
    };
} LCDDATA22bits_t;
extern volatile LCDDATA22bits_t LCDDATA22bits __at(0xF7C);
// bitfield macros
#define _LCDDATA22_LCDDATA22_POSN                           0x0
#define _LCDDATA22_LCDDATA22_POSITION                       0x0
#define _LCDDATA22_LCDDATA22_SIZE                           0x8
#define _LCDDATA22_LCDDATA22_LENGTH                         0x8
#define _LCDDATA22_LCDDATA22_MASK                           0xFF
#define _LCDDATA22_S32C3_POSN                               0x0
#define _LCDDATA22_S32C3_POSITION                           0x0
#define _LCDDATA22_S32C3_SIZE                               0x1
#define _LCDDATA22_S32C3_LENGTH                             0x1
#define _LCDDATA22_S32C3_MASK                               0x1
#define _LCDDATA22_SEG32COM3_POSN                           0x0
#define _LCDDATA22_SEG32COM3_POSITION                       0x0
#define _LCDDATA22_SEG32COM3_SIZE                           0x1
#define _LCDDATA22_SEG32COM3_LENGTH                         0x1
#define _LCDDATA22_SEG32COM3_MASK                           0x1

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
extern volatile unsigned char           BAUDCON1            __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 0F7Eh");
#endif
// aliases
extern volatile unsigned char           BAUDCON             __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0F7Eh");
#endif
extern volatile unsigned char           BAUDCTL             __at(0xF7E);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0F7Eh");
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
        unsigned RCMT                   :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RCIDL                  :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCON1bits_t;
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0xF7E);
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
#define _BAUDCON1_TXCKP_POSN                                0x4
#define _BAUDCON1_TXCKP_POSITION                            0x4
#define _BAUDCON1_TXCKP_SIZE                                0x1
#define _BAUDCON1_TXCKP_LENGTH                              0x1
#define _BAUDCON1_TXCKP_MASK                                0x10
#define _BAUDCON1_RXDTP_POSN                                0x5
#define _BAUDCON1_RXDTP_POSITION                            0x5
#define _BAUDCON1_RXDTP_SIZE                                0x1
#define _BAUDCON1_RXDTP_LENGTH                              0x1
#define _BAUDCON1_RXDTP_MASK                                0x20
#define _BAUDCON1_RCMT_POSN                                 0x6
#define _BAUDCON1_RCMT_POSITION                             0x6
#define _BAUDCON1_RCMT_SIZE                                 0x1
#define _BAUDCON1_RCMT_LENGTH                               0x1
#define _BAUDCON1_RCMT_MASK                                 0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDEN1_POSN                               0x0
#define _BAUDCON1_ABDEN1_POSITION                           0x0
#define _BAUDCON1_ABDEN1_SIZE                               0x1
#define _BAUDCON1_ABDEN1_LENGTH                             0x1
#define _BAUDCON1_ABDEN1_MASK                               0x1
#define _BAUDCON1_WUE1_POSN                                 0x1
#define _BAUDCON1_WUE1_POSITION                             0x1
#define _BAUDCON1_WUE1_SIZE                                 0x1
#define _BAUDCON1_WUE1_LENGTH                               0x1
#define _BAUDCON1_WUE1_MASK                                 0x2
#define _BAUDCON1_BRG161_POSN                               0x3
#define _BAUDCON1_BRG161_POSITION                           0x3
#define _BAUDCON1_BRG161_SIZE                               0x1
#define _BAUDCON1_BRG161_LENGTH                             0x1
#define _BAUDCON1_BRG161_MASK                               0x8
#define _BAUDCON1_CKTXP_POSN                                0x4
#define _BAUDCON1_CKTXP_POSITION                            0x4
#define _BAUDCON1_CKTXP_SIZE                                0x1
#define _BAUDCON1_CKTXP_LENGTH                              0x1
#define _BAUDCON1_CKTXP_MASK                                0x10
#define _BAUDCON1_DTRXP_POSN                                0x5
#define _BAUDCON1_DTRXP_POSITION                            0x5
#define _BAUDCON1_DTRXP_SIZE                                0x1
#define _BAUDCON1_DTRXP_LENGTH                              0x1
#define _BAUDCON1_DTRXP_MASK                                0x20
#define _BAUDCON1_RCIDL1_POSN                               0x6
#define _BAUDCON1_RCIDL1_POSITION                           0x6
#define _BAUDCON1_RCIDL1_SIZE                               0x1
#define _BAUDCON1_RCIDL1_LENGTH                             0x1
#define _BAUDCON1_RCIDL1_MASK                               0x40
#define _BAUDCON1_ABDOVF1_POSN                              0x7
#define _BAUDCON1_ABDOVF1_POSITION                          0x7
#define _BAUDCON1_ABDOVF1_SIZE                              0x1
#define _BAUDCON1_ABDOVF1_LENGTH                            0x1
#define _BAUDCON1_ABDOVF1_MASK                              0x80
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_DTRXP1_POSN                               0x5
#define _BAUDCON1_DTRXP1_POSITION                           0x5
#define _BAUDCON1_DTRXP1_SIZE                               0x1
#define _BAUDCON1_DTRXP1_LENGTH                             0x1
#define _BAUDCON1_DTRXP1_MASK                               0x20
#define _BAUDCON1_RCMT1_POSN                                0x6
#define _BAUDCON1_RCMT1_POSITION                            0x6
#define _BAUDCON1_RCMT1_SIZE                                0x1
#define _BAUDCON1_RCMT1_LENGTH                              0x1
#define _BAUDCON1_RCMT1_MASK                                0x40
#define _BAUDCON1_SCKP1_POSN                                0x4
#define _BAUDCON1_SCKP1_POSITION                            0x4
#define _BAUDCON1_SCKP1_SIZE                                0x1
#define _BAUDCON1_SCKP1_LENGTH                              0x1
#define _BAUDCON1_SCKP1_MASK                                0x10
#define _BAUDCON1_RXDTP1_POSN                               0x5
#define _BAUDCON1_RXDTP1_POSITION                           0x5
#define _BAUDCON1_RXDTP1_SIZE                               0x1
#define _BAUDCON1_RXDTP1_LENGTH                             0x1
#define _BAUDCON1_RXDTP1_MASK                               0x20
#define _BAUDCON1_TXCKP1_POSN                               0x4
#define _BAUDCON1_TXCKP1_POSITION                           0x4
#define _BAUDCON1_TXCKP1_SIZE                               0x1
#define _BAUDCON1_TXCKP1_LENGTH                             0x1
#define _BAUDCON1_TXCKP1_MASK                               0x10
#define _BAUDCON1_RXCKP_POSN                                0x5
#define _BAUDCON1_RXCKP_POSITION                            0x5
#define _BAUDCON1_RXCKP_SIZE                                0x1
#define _BAUDCON1_RXCKP_LENGTH                              0x1
#define _BAUDCON1_RXCKP_MASK                                0x20
#define _BAUDCON1_W4E_POSN                                  0x1
#define _BAUDCON1_W4E_POSITION                              0x1
#define _BAUDCON1_W4E_SIZE                                  0x1
#define _BAUDCON1_W4E_LENGTH                                0x1
#define _BAUDCON1_W4E_MASK                                  0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCMT                   :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RCIDL                  :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
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
extern volatile BAUDCONbits_t BAUDCONbits __at(0xF7E);
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
#define _BAUDCON_RCMT_POSN                                  0x6
#define _BAUDCON_RCMT_POSITION                              0x6
#define _BAUDCON_RCMT_SIZE                                  0x1
#define _BAUDCON_RCMT_LENGTH                                0x1
#define _BAUDCON_RCMT_MASK                                  0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDEN1_POSN                                0x0
#define _BAUDCON_ABDEN1_POSITION                            0x0
#define _BAUDCON_ABDEN1_SIZE                                0x1
#define _BAUDCON_ABDEN1_LENGTH                              0x1
#define _BAUDCON_ABDEN1_MASK                                0x1
#define _BAUDCON_WUE1_POSN                                  0x1
#define _BAUDCON_WUE1_POSITION                              0x1
#define _BAUDCON_WUE1_SIZE                                  0x1
#define _BAUDCON_WUE1_LENGTH                                0x1
#define _BAUDCON_WUE1_MASK                                  0x2
#define _BAUDCON_BRG161_POSN                                0x3
#define _BAUDCON_BRG161_POSITION                            0x3
#define _BAUDCON_BRG161_SIZE                                0x1
#define _BAUDCON_BRG161_LENGTH                              0x1
#define _BAUDCON_BRG161_MASK                                0x8
#define _BAUDCON_CKTXP_POSN                                 0x4
#define _BAUDCON_CKTXP_POSITION                             0x4
#define _BAUDCON_CKTXP_SIZE                                 0x1
#define _BAUDCON_CKTXP_LENGTH                               0x1
#define _BAUDCON_CKTXP_MASK                                 0x10
#define _BAUDCON_DTRXP_POSN                                 0x5
#define _BAUDCON_DTRXP_POSITION                             0x5
#define _BAUDCON_DTRXP_SIZE                                 0x1
#define _BAUDCON_DTRXP_LENGTH                               0x1
#define _BAUDCON_DTRXP_MASK                                 0x20
#define _BAUDCON_RCIDL1_POSN                                0x6
#define _BAUDCON_RCIDL1_POSITION                            0x6
#define _BAUDCON_RCIDL1_SIZE                                0x1
#define _BAUDCON_RCIDL1_LENGTH                              0x1
#define _BAUDCON_RCIDL1_MASK                                0x40
#define _BAUDCON_ABDOVF1_POSN                               0x7
#define _BAUDCON_ABDOVF1_POSITION                           0x7
#define _BAUDCON_ABDOVF1_SIZE                               0x1
#define _BAUDCON_ABDOVF1_LENGTH                             0x1
#define _BAUDCON_ABDOVF1_MASK                               0x80
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_DTRXP1_POSN                                0x5
#define _BAUDCON_DTRXP1_POSITION                            0x5
#define _BAUDCON_DTRXP1_SIZE                                0x1
#define _BAUDCON_DTRXP1_LENGTH                              0x1
#define _BAUDCON_DTRXP1_MASK                                0x20
#define _BAUDCON_RCMT1_POSN                                 0x6
#define _BAUDCON_RCMT1_POSITION                             0x6
#define _BAUDCON_RCMT1_SIZE                                 0x1
#define _BAUDCON_RCMT1_LENGTH                               0x1
#define _BAUDCON_RCMT1_MASK                                 0x40
#define _BAUDCON_SCKP1_POSN                                 0x4
#define _BAUDCON_SCKP1_POSITION                             0x4
#define _BAUDCON_SCKP1_SIZE                                 0x1
#define _BAUDCON_SCKP1_LENGTH                               0x1
#define _BAUDCON_SCKP1_MASK                                 0x10
#define _BAUDCON_RXDTP1_POSN                                0x5
#define _BAUDCON_RXDTP1_POSITION                            0x5
#define _BAUDCON_RXDTP1_SIZE                                0x1
#define _BAUDCON_RXDTP1_LENGTH                              0x1
#define _BAUDCON_RXDTP1_MASK                                0x20
#define _BAUDCON_TXCKP1_POSN                                0x4
#define _BAUDCON_TXCKP1_POSITION                            0x4
#define _BAUDCON_TXCKP1_SIZE                                0x1
#define _BAUDCON_TXCKP1_LENGTH                              0x1
#define _BAUDCON_TXCKP1_MASK                                0x10
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
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCMT                   :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned RCIDL                  :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned DTRXP1                 :1;
        unsigned RCMT1                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
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
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0xF7E);
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
#define _BAUDCTL_RCMT_POSN                                  0x6
#define _BAUDCTL_RCMT_POSITION                              0x6
#define _BAUDCTL_RCMT_SIZE                                  0x1
#define _BAUDCTL_RCMT_LENGTH                                0x1
#define _BAUDCTL_RCMT_MASK                                  0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDEN1_POSN                                0x0
#define _BAUDCTL_ABDEN1_POSITION                            0x0
#define _BAUDCTL_ABDEN1_SIZE                                0x1
#define _BAUDCTL_ABDEN1_LENGTH                              0x1
#define _BAUDCTL_ABDEN1_MASK                                0x1
#define _BAUDCTL_WUE1_POSN                                  0x1
#define _BAUDCTL_WUE1_POSITION                              0x1
#define _BAUDCTL_WUE1_SIZE                                  0x1
#define _BAUDCTL_WUE1_LENGTH                                0x1
#define _BAUDCTL_WUE1_MASK                                  0x2
#define _BAUDCTL_BRG161_POSN                                0x3
#define _BAUDCTL_BRG161_POSITION                            0x3
#define _BAUDCTL_BRG161_SIZE                                0x1
#define _BAUDCTL_BRG161_LENGTH                              0x1
#define _BAUDCTL_BRG161_MASK                                0x8
#define _BAUDCTL_CKTXP_POSN                                 0x4
#define _BAUDCTL_CKTXP_POSITION                             0x4
#define _BAUDCTL_CKTXP_SIZE                                 0x1
#define _BAUDCTL_CKTXP_LENGTH                               0x1
#define _BAUDCTL_CKTXP_MASK                                 0x10
#define _BAUDCTL_DTRXP_POSN                                 0x5
#define _BAUDCTL_DTRXP_POSITION                             0x5
#define _BAUDCTL_DTRXP_SIZE                                 0x1
#define _BAUDCTL_DTRXP_LENGTH                               0x1
#define _BAUDCTL_DTRXP_MASK                                 0x20
#define _BAUDCTL_RCIDL1_POSN                                0x6
#define _BAUDCTL_RCIDL1_POSITION                            0x6
#define _BAUDCTL_RCIDL1_SIZE                                0x1
#define _BAUDCTL_RCIDL1_LENGTH                              0x1
#define _BAUDCTL_RCIDL1_MASK                                0x40
#define _BAUDCTL_ABDOVF1_POSN                               0x7
#define _BAUDCTL_ABDOVF1_POSITION                           0x7
#define _BAUDCTL_ABDOVF1_SIZE                               0x1
#define _BAUDCTL_ABDOVF1_LENGTH                             0x1
#define _BAUDCTL_ABDOVF1_MASK                               0x80
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_DTRXP1_POSN                                0x5
#define _BAUDCTL_DTRXP1_POSITION                            0x5
#define _BAUDCTL_DTRXP1_SIZE                                0x1
#define _BAUDCTL_DTRXP1_LENGTH                              0x1
#define _BAUDCTL_DTRXP1_MASK                                0x20
#define _BAUDCTL_RCMT1_POSN                                 0x6
#define _BAUDCTL_RCMT1_POSITION                             0x6
#define _BAUDCTL_RCMT1_SIZE                                 0x1
#define _BAUDCTL_RCMT1_LENGTH                               0x1
#define _BAUDCTL_RCMT1_MASK                                 0x40
#define _BAUDCTL_SCKP1_POSN                                 0x4
#define _BAUDCTL_SCKP1_POSITION                             0x4
#define _BAUDCTL_SCKP1_SIZE                                 0x1
#define _BAUDCTL_SCKP1_LENGTH                               0x1
#define _BAUDCTL_SCKP1_MASK                                 0x10
#define _BAUDCTL_RXDTP1_POSN                                0x5
#define _BAUDCTL_RXDTP1_POSITION                            0x5
#define _BAUDCTL_RXDTP1_SIZE                                0x1
#define _BAUDCTL_RXDTP1_LENGTH                              0x1
#define _BAUDCTL_RXDTP1_MASK                                0x20
#define _BAUDCTL_TXCKP1_POSN                                0x4
#define _BAUDCTL_TXCKP1_POSITION                            0x4
#define _BAUDCTL_TXCKP1_SIZE                                0x1
#define _BAUDCTL_TXCKP1_LENGTH                              0x1
#define _BAUDCTL_TXCKP1_MASK                                0x10
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

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
extern volatile unsigned char           SPBRGH1             __at(0xF7F);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 0F7Fh");
#endif
// aliases
extern volatile unsigned char           SPBRGH              __at(0xF7F);
#ifndef _LIB_BUILD
asm("SPBRGH equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH1                :8;
    };
} SPBRGH1bits_t;
extern volatile SPBRGH1bits_t SPBRGH1bits __at(0xF7F);
// bitfield macros
#define _SPBRGH1_SPBRGH1_POSN                               0x0
#define _SPBRGH1_SPBRGH1_POSITION                           0x0
#define _SPBRGH1_SPBRGH1_SIZE                               0x8
#define _SPBRGH1_SPBRGH1_LENGTH                             0x8
#define _SPBRGH1_SPBRGH1_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH1                :8;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0xF7F);
// bitfield macros
#define _SPBRGH_SPBRGH1_POSN                                0x0
#define _SPBRGH_SPBRGH1_POSITION                            0x0
#define _SPBRGH_SPBRGH1_SIZE                                0x8
#define _SPBRGH_SPBRGH1_LENGTH                              0x8
#define _SPBRGH_SPBRGH1_MASK                                0xFF

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
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned TOCKI                  :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned SEG18                  :1;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned SEG14                  :1;
        unsigned SEG15                  :1;
        unsigned CLKO                   :1;
        unsigned CLKI                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
        unsigned                        :4;
        unsigned LVDIN                  :1;
        unsigned                        :1;
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
#define _PORTA_TOCKI_POSN                                   0x4
#define _PORTA_TOCKI_POSITION                               0x4
#define _PORTA_TOCKI_SIZE                                   0x1
#define _PORTA_TOCKI_LENGTH                                 0x1
#define _PORTA_TOCKI_MASK                                   0x10
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
#define _PORTA_SEG18_POSN                                   0x1
#define _PORTA_SEG18_POSITION                               0x1
#define _PORTA_SEG18_SIZE                                   0x1
#define _PORTA_SEG18_LENGTH                                 0x1
#define _PORTA_SEG18_MASK                                   0x2
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
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
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
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned INT3                   :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned SEG30                  :1;
        unsigned SEG8                   :1;
        unsigned SEG9                   :1;
        unsigned SEG10                  :1;
        unsigned SEG11                  :1;
        unsigned SEG29                  :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned CTED1                  :1;
        unsigned CTED2                  :1;
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
#define _PORTB_INT0_POSN                                    0x0
#define _PORTB_INT0_POSITION                                0x0
#define _PORTB_INT0_SIZE                                    0x1
#define _PORTB_INT0_LENGTH                                  0x1
#define _PORTB_INT0_MASK                                    0x1
#define _PORTB_INT1_POSN                                    0x1
#define _PORTB_INT1_POSITION                                0x1
#define _PORTB_INT1_SIZE                                    0x1
#define _PORTB_INT1_LENGTH                                  0x1
#define _PORTB_INT1_MASK                                    0x2
#define _PORTB_INT2_POSN                                    0x2
#define _PORTB_INT2_POSITION                                0x2
#define _PORTB_INT2_SIZE                                    0x1
#define _PORTB_INT2_LENGTH                                  0x1
#define _PORTB_INT2_MASK                                    0x4
#define _PORTB_INT3_POSN                                    0x3
#define _PORTB_INT3_POSITION                                0x3
#define _PORTB_INT3_SIZE                                    0x1
#define _PORTB_INT3_LENGTH                                  0x1
#define _PORTB_INT3_MASK                                    0x8
#define _PORTB_KBI0_POSN                                    0x4
#define _PORTB_KBI0_POSITION                                0x4
#define _PORTB_KBI0_SIZE                                    0x1
#define _PORTB_KBI0_LENGTH                                  0x1
#define _PORTB_KBI0_MASK                                    0x10
#define _PORTB_KBI1_POSN                                    0x5
#define _PORTB_KBI1_POSITION                                0x5
#define _PORTB_KBI1_SIZE                                    0x1
#define _PORTB_KBI1_LENGTH                                  0x1
#define _PORTB_KBI1_MASK                                    0x20
#define _PORTB_KBI2_POSN                                    0x6
#define _PORTB_KBI2_POSITION                                0x6
#define _PORTB_KBI2_SIZE                                    0x1
#define _PORTB_KBI2_LENGTH                                  0x1
#define _PORTB_KBI2_MASK                                    0x40
#define _PORTB_KBI3_POSN                                    0x7
#define _PORTB_KBI3_POSITION                                0x7
#define _PORTB_KBI3_SIZE                                    0x1
#define _PORTB_KBI3_LENGTH                                  0x1
#define _PORTB_KBI3_MASK                                    0x80
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
#define _PORTB_PGC_POSN                                     0x6
#define _PORTB_PGC_POSITION                                 0x6
#define _PORTB_PGC_SIZE                                     0x1
#define _PORTB_PGC_LENGTH                                   0x1
#define _PORTB_PGC_MASK                                     0x40
#define _PORTB_PGD_POSN                                     0x7
#define _PORTB_PGD_POSITION                                 0x7
#define _PORTB_PGD_SIZE                                     0x1
#define _PORTB_PGD_LENGTH                                   0x1
#define _PORTB_PGD_MASK                                     0x80
#define _PORTB_CTED1_POSN                                   0x2
#define _PORTB_CTED1_POSITION                               0x2
#define _PORTB_CTED1_SIZE                                   0x1
#define _PORTB_CTED1_LENGTH                                 0x1
#define _PORTB_CTED1_MASK                                   0x4
#define _PORTB_CTED2_POSN                                   0x3
#define _PORTB_CTED2_POSITION                               0x3
#define _PORTB_CTED2_SIZE                                   0x1
#define _PORTB_CTED2_LENGTH                                 0x1
#define _PORTB_CTED2_MASK                                   0x8
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
        unsigned                        :1;
        unsigned SCL                    :1;
        unsigned SDA                    :1;
        unsigned                        :1;
        unsigned CK1                    :1;
        unsigned DT1                    :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned CCP2                   :1;
        unsigned CCP1                   :1;
        unsigned SCK                    :1;
        unsigned SDI                    :1;
        unsigned SDO                    :1;
        unsigned TX1                    :1;
        unsigned RX1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned SEG32                  :1;
        unsigned SEG13                  :1;
        unsigned SEG17                  :1;
        unsigned SEG16                  :1;
        unsigned SEG12                  :1;
        unsigned SEG27                  :1;
        unsigned SEG28                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
        unsigned PA1                    :1;
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
#define _PORTC_CCP1_POSN                                    0x2
#define _PORTC_CCP1_POSITION                                0x2
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x4
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

// Register: PORTD
#define PORTD PORTD
extern volatile unsigned char           PORTD               __at(0xF83);
#ifndef _LIB_BUILD
asm("PORTD equ 0F83h");
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
        unsigned CTPLS                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned SS2                    :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __at(0xF83);
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
#define _PORTD_CTPLS_POSN                                   0x0
#define _PORTD_CTPLS_POSITION                               0x0
#define _PORTD_CTPLS_SIZE                                   0x1
#define _PORTD_CTPLS_LENGTH                                 0x1
#define _PORTD_CTPLS_MASK                                   0x1
#define _PORTD_SS2_POSN                                     0x7
#define _PORTD_SS2_POSITION                                 0x7
#define _PORTD_SS2_SIZE                                     0x1
#define _PORTD_SS2_LENGTH                                   0x1
#define _PORTD_SS2_MASK                                     0x80

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0xF84);
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned                        :1;
        unsigned RE3                    :1;
        unsigned RE4                    :1;
        unsigned RE5                    :1;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
    };
    struct {
        unsigned LCDBIAS1               :1;
        unsigned LCDBIAS2               :1;
        unsigned                        :1;
        unsigned COM0                   :1;
        unsigned COM1                   :1;
        unsigned COM2                   :1;
        unsigned COM3                   :1;
        unsigned CCP2                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned SEG31                  :1;
    };
    struct {
        unsigned PD2                    :1;
        unsigned PC2                    :1;
        unsigned                        :1;
        unsigned CCP9E                  :1;
        unsigned CCP8E                  :1;
        unsigned CCP7E                  :1;
        unsigned CCP6E                  :1;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned RDE                    :1;
        unsigned WRE                    :1;
        unsigned                        :1;
        unsigned PC3E                   :1;
        unsigned PB3E                   :1;
        unsigned PC1E                   :1;
        unsigned PB1E                   :1;
        unsigned PA2E                   :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0xF84);
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
#define _PORTE_LCDBIAS1_POSN                                0x0
#define _PORTE_LCDBIAS1_POSITION                            0x0
#define _PORTE_LCDBIAS1_SIZE                                0x1
#define _PORTE_LCDBIAS1_LENGTH                              0x1
#define _PORTE_LCDBIAS1_MASK                                0x1
#define _PORTE_LCDBIAS2_POSN                                0x1
#define _PORTE_LCDBIAS2_POSITION                            0x1
#define _PORTE_LCDBIAS2_SIZE                                0x1
#define _PORTE_LCDBIAS2_LENGTH                              0x1
#define _PORTE_LCDBIAS2_MASK                                0x2
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
#define _PORTE_CCP2_POSN                                    0x7
#define _PORTE_CCP2_POSITION                                0x7
#define _PORTE_CCP2_SIZE                                    0x1
#define _PORTE_CCP2_LENGTH                                  0x1
#define _PORTE_CCP2_MASK                                    0x80
#define _PORTE_SEG31_POSN                                   0x7
#define _PORTE_SEG31_POSITION                               0x7
#define _PORTE_SEG31_SIZE                                   0x1
#define _PORTE_SEG31_LENGTH                                 0x1
#define _PORTE_SEG31_MASK                                   0x80
#define _PORTE_PD2_POSN                                     0x0
#define _PORTE_PD2_POSITION                                 0x0
#define _PORTE_PD2_SIZE                                     0x1
#define _PORTE_PD2_LENGTH                                   0x1
#define _PORTE_PD2_MASK                                     0x1
#define _PORTE_PC2_POSN                                     0x1
#define _PORTE_PC2_POSITION                                 0x1
#define _PORTE_PC2_SIZE                                     0x1
#define _PORTE_PC2_LENGTH                                   0x1
#define _PORTE_PC2_MASK                                     0x2
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
#define _PORTE_CCP8E_POSN                                   0x4
#define _PORTE_CCP8E_POSITION                               0x4
#define _PORTE_CCP8E_SIZE                                   0x1
#define _PORTE_CCP8E_LENGTH                                 0x1
#define _PORTE_CCP8E_MASK                                   0x10
#define _PORTE_CCP7E_POSN                                   0x5
#define _PORTE_CCP7E_POSITION                               0x5
#define _PORTE_CCP7E_SIZE                                   0x1
#define _PORTE_CCP7E_LENGTH                                 0x1
#define _PORTE_CCP7E_MASK                                   0x20
#define _PORTE_CCP6E_POSN                                   0x6
#define _PORTE_CCP6E_POSITION                               0x6
#define _PORTE_CCP6E_SIZE                                   0x1
#define _PORTE_CCP6E_LENGTH                                 0x1
#define _PORTE_CCP6E_MASK                                   0x40
#define _PORTE_CCP2E_POSN                                   0x7
#define _PORTE_CCP2E_POSITION                               0x7
#define _PORTE_CCP2E_SIZE                                   0x1
#define _PORTE_CCP2E_LENGTH                                 0x1
#define _PORTE_CCP2E_MASK                                   0x80
#define _PORTE_RDE_POSN                                     0x0
#define _PORTE_RDE_POSITION                                 0x0
#define _PORTE_RDE_SIZE                                     0x1
#define _PORTE_RDE_LENGTH                                   0x1
#define _PORTE_RDE_MASK                                     0x1
#define _PORTE_WRE_POSN                                     0x1
#define _PORTE_WRE_POSITION                                 0x1
#define _PORTE_WRE_SIZE                                     0x1
#define _PORTE_WRE_LENGTH                                   0x1
#define _PORTE_WRE_MASK                                     0x2
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8
#define _PORTE_PB3E_POSN                                    0x4
#define _PORTE_PB3E_POSITION                                0x4
#define _PORTE_PB3E_SIZE                                    0x1
#define _PORTE_PB3E_LENGTH                                  0x1
#define _PORTE_PB3E_MASK                                    0x10
#define _PORTE_PC1E_POSN                                    0x5
#define _PORTE_PC1E_POSITION                                0x5
#define _PORTE_PC1E_SIZE                                    0x1
#define _PORTE_PC1E_LENGTH                                  0x1
#define _PORTE_PC1E_MASK                                    0x20
#define _PORTE_PB1E_POSN                                    0x6
#define _PORTE_PB1E_POSITION                                0x6
#define _PORTE_PB1E_SIZE                                    0x1
#define _PORTE_PB1E_LENGTH                                  0x1
#define _PORTE_PB1E_MASK                                    0x40
#define _PORTE_PA2E_POSN                                    0x7
#define _PORTE_PA2E_POSITION                                0x7
#define _PORTE_PA2E_SIZE                                    0x1
#define _PORTE_PA2E_LENGTH                                  0x1
#define _PORTE_PA2E_MASK                                    0x80

// Register: PORTF
#define PORTF PORTF
extern volatile unsigned char           PORTF               __at(0xF85);
#ifndef _LIB_BUILD
asm("PORTF equ 0F85h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned RF1                    :1;
        unsigned RF2                    :1;
        unsigned RF3                    :1;
        unsigned RF4                    :1;
        unsigned RF5                    :1;
        unsigned RF6                    :1;
        unsigned RF7                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
        unsigned AN5                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned C2OUT                  :1;
        unsigned C1OUT                  :1;
        unsigned C2INB                  :1;
        unsigned C2INA                  :1;
        unsigned C1INB                  :1;
        unsigned C1INA                  :1;
        unsigned SS1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned SEG19                  :1;
        unsigned SEG20                  :1;
        unsigned SEG21                  :1;
        unsigned SEG22                  :1;
        unsigned SEG23                  :1;
        unsigned SEG24                  :1;
        unsigned SEG25                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned CVREF                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned C2OUTF                 :1;
        unsigned C1OUTF                 :1;
    };
} PORTFbits_t;
extern volatile PORTFbits_t PORTFbits __at(0xF85);
// bitfield macros
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
#define _PORTF_C2INB_POSN                                   0x3
#define _PORTF_C2INB_POSITION                               0x3
#define _PORTF_C2INB_SIZE                                   0x1
#define _PORTF_C2INB_LENGTH                                 0x1
#define _PORTF_C2INB_MASK                                   0x8
#define _PORTF_C2INA_POSN                                   0x4
#define _PORTF_C2INA_POSITION                               0x4
#define _PORTF_C2INA_SIZE                                   0x1
#define _PORTF_C2INA_LENGTH                                 0x1
#define _PORTF_C2INA_MASK                                   0x10
#define _PORTF_C1INB_POSN                                   0x5
#define _PORTF_C1INB_POSITION                               0x5
#define _PORTF_C1INB_SIZE                                   0x1
#define _PORTF_C1INB_LENGTH                                 0x1
#define _PORTF_C1INB_MASK                                   0x20
#define _PORTF_C1INA_POSN                                   0x6
#define _PORTF_C1INA_POSITION                               0x6
#define _PORTF_C1INA_SIZE                                   0x1
#define _PORTF_C1INA_LENGTH                                 0x1
#define _PORTF_C1INA_MASK                                   0x40
#define _PORTF_SS1_POSN                                     0x7
#define _PORTF_SS1_POSITION                                 0x7
#define _PORTF_SS1_SIZE                                     0x1
#define _PORTF_SS1_LENGTH                                   0x1
#define _PORTF_SS1_MASK                                     0x80
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
#define _PORTF_CVREF_POSN                                   0x5
#define _PORTF_CVREF_POSITION                               0x5
#define _PORTF_CVREF_SIZE                                   0x1
#define _PORTF_CVREF_LENGTH                                 0x1
#define _PORTF_CVREF_MASK                                   0x20
#define _PORTF_C2OUTF_POSN                                  0x1
#define _PORTF_C2OUTF_POSITION                              0x1
#define _PORTF_C2OUTF_SIZE                                  0x1
#define _PORTF_C2OUTF_LENGTH                                0x1
#define _PORTF_C2OUTF_MASK                                  0x2
#define _PORTF_C1OUTF_POSN                                  0x2
#define _PORTF_C1OUTF_POSITION                              0x2
#define _PORTF_C1OUTF_SIZE                                  0x1
#define _PORTF_C1OUTF_LENGTH                                0x1
#define _PORTF_C1OUTF_MASK                                  0x4

// Register: PORTG
#define PORTG PORTG
extern volatile unsigned char           PORTG               __at(0xF86);
#ifndef _LIB_BUILD
asm("PORTG equ 0F86h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RG0                    :1;
        unsigned RG1                    :1;
        unsigned RG2                    :1;
        unsigned RG3                    :1;
        unsigned RG4                    :1;
        unsigned RJPU                   :1;
        unsigned REPU                   :1;
        unsigned RDPU                   :1;
    };
    struct {
        unsigned LCDBIAS0               :1;
        unsigned CK2                    :1;
        unsigned DT2                    :1;
        unsigned VLCAP2                 :1;
        unsigned SEG26                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TX2                    :1;
        unsigned RX2                    :1;
        unsigned                        :1;
        unsigned RTCC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VLCAP1                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned C3OUTG                 :1;
        unsigned                        :3;
        unsigned RG5                    :1;
        unsigned RG6                    :1;
        unsigned RG7                    :1;
    };
} PORTGbits_t;
extern volatile PORTGbits_t PORTGbits __at(0xF86);
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
#define _PORTG_RJPU_POSN                                    0x5
#define _PORTG_RJPU_POSITION                                0x5
#define _PORTG_RJPU_SIZE                                    0x1
#define _PORTG_RJPU_LENGTH                                  0x1
#define _PORTG_RJPU_MASK                                    0x20
#define _PORTG_REPU_POSN                                    0x6
#define _PORTG_REPU_POSITION                                0x6
#define _PORTG_REPU_SIZE                                    0x1
#define _PORTG_REPU_LENGTH                                  0x1
#define _PORTG_REPU_MASK                                    0x40
#define _PORTG_RDPU_POSN                                    0x7
#define _PORTG_RDPU_POSITION                                0x7
#define _PORTG_RDPU_SIZE                                    0x1
#define _PORTG_RDPU_LENGTH                                  0x1
#define _PORTG_RDPU_MASK                                    0x80
#define _PORTG_LCDBIAS0_POSN                                0x0
#define _PORTG_LCDBIAS0_POSITION                            0x0
#define _PORTG_LCDBIAS0_SIZE                                0x1
#define _PORTG_LCDBIAS0_LENGTH                              0x1
#define _PORTG_LCDBIAS0_MASK                                0x1
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
#define _PORTG_VLCAP2_POSN                                  0x3
#define _PORTG_VLCAP2_POSITION                              0x3
#define _PORTG_VLCAP2_SIZE                                  0x1
#define _PORTG_VLCAP2_LENGTH                                0x1
#define _PORTG_VLCAP2_MASK                                  0x8
#define _PORTG_SEG26_POSN                                   0x4
#define _PORTG_SEG26_POSITION                               0x4
#define _PORTG_SEG26_SIZE                                   0x1
#define _PORTG_SEG26_LENGTH                                 0x1
#define _PORTG_SEG26_MASK                                   0x10
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
#define _PORTG_RTCC_POSN                                    0x4
#define _PORTG_RTCC_POSITION                                0x4
#define _PORTG_RTCC_SIZE                                    0x1
#define _PORTG_RTCC_LENGTH                                  0x1
#define _PORTG_RTCC_MASK                                    0x10
#define _PORTG_VLCAP1_POSN                                  0x2
#define _PORTG_VLCAP1_POSITION                              0x2
#define _PORTG_VLCAP1_SIZE                                  0x1
#define _PORTG_VLCAP1_LENGTH                                0x1
#define _PORTG_VLCAP1_MASK                                  0x4
#define _PORTG_C3OUTG_POSN                                  0x1
#define _PORTG_C3OUTG_POSITION                              0x1
#define _PORTG_C3OUTG_SIZE                                  0x1
#define _PORTG_C3OUTG_LENGTH                                0x1
#define _PORTG_C3OUTG_MASK                                  0x2
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
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned LA4                    :1;
        unsigned LA5                    :1;
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
#define _LATA_LA5_POSN                                      0x5
#define _LATA_LA5_POSITION                                  0x5
#define _LATA_LA5_SIZE                                      0x1
#define _LATA_LA5_LENGTH                                    0x1
#define _LATA_LA5_MASK                                      0x20
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

// Register: LATD
#define LATD LATD
extern volatile unsigned char           LATD                __at(0xF8C);
#ifndef _LIB_BUILD
asm("LATD equ 0F8Ch");
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
        unsigned LD0                    :1;
        unsigned LD1                    :1;
        unsigned LD2                    :1;
        unsigned LD3                    :1;
        unsigned LD4                    :1;
        unsigned LD5                    :1;
        unsigned LD6                    :1;
        unsigned LD7                    :1;
    };
} LATDbits_t;
extern volatile LATDbits_t LATDbits __at(0xF8C);
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
#define _LATD_LD0_POSN                                      0x0
#define _LATD_LD0_POSITION                                  0x0
#define _LATD_LD0_SIZE                                      0x1
#define _LATD_LD0_LENGTH                                    0x1
#define _LATD_LD0_MASK                                      0x1
#define _LATD_LD1_POSN                                      0x1
#define _LATD_LD1_POSITION                                  0x1
#define _LATD_LD1_SIZE                                      0x1
#define _LATD_LD1_LENGTH                                    0x1
#define _LATD_LD1_MASK                                      0x2
#define _LATD_LD2_POSN                                      0x2
#define _LATD_LD2_POSITION                                  0x2
#define _LATD_LD2_SIZE                                      0x1
#define _LATD_LD2_LENGTH                                    0x1
#define _LATD_LD2_MASK                                      0x4
#define _LATD_LD3_POSN                                      0x3
#define _LATD_LD3_POSITION                                  0x3
#define _LATD_LD3_SIZE                                      0x1
#define _LATD_LD3_LENGTH                                    0x1
#define _LATD_LD3_MASK                                      0x8
#define _LATD_LD4_POSN                                      0x4
#define _LATD_LD4_POSITION                                  0x4
#define _LATD_LD4_SIZE                                      0x1
#define _LATD_LD4_LENGTH                                    0x1
#define _LATD_LD4_MASK                                      0x10
#define _LATD_LD5_POSN                                      0x5
#define _LATD_LD5_POSITION                                  0x5
#define _LATD_LD5_SIZE                                      0x1
#define _LATD_LD5_LENGTH                                    0x1
#define _LATD_LD5_MASK                                      0x20
#define _LATD_LD6_POSN                                      0x6
#define _LATD_LD6_POSITION                                  0x6
#define _LATD_LD6_SIZE                                      0x1
#define _LATD_LD6_LENGTH                                    0x1
#define _LATD_LD6_MASK                                      0x40
#define _LATD_LD7_POSN                                      0x7
#define _LATD_LD7_POSITION                                  0x7
#define _LATD_LD7_SIZE                                      0x1
#define _LATD_LD7_LENGTH                                    0x1
#define _LATD_LD7_MASK                                      0x80

// Register: LATE
#define LATE LATE
extern volatile unsigned char           LATE                __at(0xF8D);
#ifndef _LIB_BUILD
asm("LATE equ 0F8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATE0                  :1;
        unsigned LATE1                  :1;
        unsigned                        :1;
        unsigned LATE3                  :1;
        unsigned LATE4                  :1;
        unsigned LATE5                  :1;
        unsigned LATE6                  :1;
        unsigned LATE7                  :1;
    };
    struct {
        unsigned LE0                    :1;
        unsigned LE1                    :1;
        unsigned                        :1;
        unsigned LE3                    :1;
        unsigned LE4                    :1;
        unsigned LE5                    :1;
        unsigned LE6                    :1;
        unsigned LE7                    :1;
    };
} LATEbits_t;
extern volatile LATEbits_t LATEbits __at(0xF8D);
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
#define _LATE_LE0_POSN                                      0x0
#define _LATE_LE0_POSITION                                  0x0
#define _LATE_LE0_SIZE                                      0x1
#define _LATE_LE0_LENGTH                                    0x1
#define _LATE_LE0_MASK                                      0x1
#define _LATE_LE1_POSN                                      0x1
#define _LATE_LE1_POSITION                                  0x1
#define _LATE_LE1_SIZE                                      0x1
#define _LATE_LE1_LENGTH                                    0x1
#define _LATE_LE1_MASK                                      0x2
#define _LATE_LE3_POSN                                      0x3
#define _LATE_LE3_POSITION                                  0x3
#define _LATE_LE3_SIZE                                      0x1
#define _LATE_LE3_LENGTH                                    0x1
#define _LATE_LE3_MASK                                      0x8
#define _LATE_LE4_POSN                                      0x4
#define _LATE_LE4_POSITION                                  0x4
#define _LATE_LE4_SIZE                                      0x1
#define _LATE_LE4_LENGTH                                    0x1
#define _LATE_LE4_MASK                                      0x10
#define _LATE_LE5_POSN                                      0x5
#define _LATE_LE5_POSITION                                  0x5
#define _LATE_LE5_SIZE                                      0x1
#define _LATE_LE5_LENGTH                                    0x1
#define _LATE_LE5_MASK                                      0x20
#define _LATE_LE6_POSN                                      0x6
#define _LATE_LE6_POSITION                                  0x6
#define _LATE_LE6_SIZE                                      0x1
#define _LATE_LE6_LENGTH                                    0x1
#define _LATE_LE6_MASK                                      0x40
#define _LATE_LE7_POSN                                      0x7
#define _LATE_LE7_POSITION                                  0x7
#define _LATE_LE7_SIZE                                      0x1
#define _LATE_LE7_LENGTH                                    0x1
#define _LATE_LE7_MASK                                      0x80

// Register: LATF
#define LATF LATF
extern volatile unsigned char           LATF                __at(0xF8E);
#ifndef _LIB_BUILD
asm("LATF equ 0F8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned LATF1                  :1;
        unsigned LATF2                  :1;
        unsigned LATF3                  :1;
        unsigned LATF4                  :1;
        unsigned LATF5                  :1;
        unsigned LATF6                  :1;
        unsigned LATF7                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned LF1                    :1;
        unsigned LF2                    :1;
        unsigned LF3                    :1;
        unsigned LF4                    :1;
        unsigned LF5                    :1;
        unsigned LF6                    :1;
        unsigned LF7                    :1;
    };
} LATFbits_t;
extern volatile LATFbits_t LATFbits __at(0xF8E);
// bitfield macros
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
#define _LATF_LF1_POSN                                      0x1
#define _LATF_LF1_POSITION                                  0x1
#define _LATF_LF1_SIZE                                      0x1
#define _LATF_LF1_LENGTH                                    0x1
#define _LATF_LF1_MASK                                      0x2
#define _LATF_LF2_POSN                                      0x2
#define _LATF_LF2_POSITION                                  0x2
#define _LATF_LF2_SIZE                                      0x1
#define _LATF_LF2_LENGTH                                    0x1
#define _LATF_LF2_MASK                                      0x4
#define _LATF_LF3_POSN                                      0x3
#define _LATF_LF3_POSITION                                  0x3
#define _LATF_LF3_SIZE                                      0x1
#define _LATF_LF3_LENGTH                                    0x1
#define _LATF_LF3_MASK                                      0x8
#define _LATF_LF4_POSN                                      0x4
#define _LATF_LF4_POSITION                                  0x4
#define _LATF_LF4_SIZE                                      0x1
#define _LATF_LF4_LENGTH                                    0x1
#define _LATF_LF4_MASK                                      0x10
#define _LATF_LF5_POSN                                      0x5
#define _LATF_LF5_POSITION                                  0x5
#define _LATF_LF5_SIZE                                      0x1
#define _LATF_LF5_LENGTH                                    0x1
#define _LATF_LF5_MASK                                      0x20
#define _LATF_LF6_POSN                                      0x6
#define _LATF_LF6_POSITION                                  0x6
#define _LATF_LF6_SIZE                                      0x1
#define _LATF_LF6_LENGTH                                    0x1
#define _LATF_LF6_MASK                                      0x40
#define _LATF_LF7_POSN                                      0x7
#define _LATF_LF7_POSITION                                  0x7
#define _LATF_LF7_SIZE                                      0x1
#define _LATF_LF7_LENGTH                                    0x1
#define _LATF_LF7_MASK                                      0x80

// Register: LATG
#define LATG LATG
extern volatile unsigned char           LATG                __at(0xF8F);
#ifndef _LIB_BUILD
asm("LATG equ 0F8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATG0                  :1;
        unsigned LATG1                  :1;
        unsigned LATG2                  :1;
        unsigned LATG3                  :1;
        unsigned LATG4                  :1;
        unsigned                        :1;
        unsigned U1OD                   :1;
        unsigned U2OD                   :1;
    };
    struct {
        unsigned LG0                    :1;
        unsigned LG1                    :1;
        unsigned LG2                    :1;
        unsigned LG3                    :1;
        unsigned LG4                    :1;
    };
} LATGbits_t;
extern volatile LATGbits_t LATGbits __at(0xF8F);
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
#define _LATG_U1OD_POSN                                     0x6
#define _LATG_U1OD_POSITION                                 0x6
#define _LATG_U1OD_SIZE                                     0x1
#define _LATG_U1OD_LENGTH                                   0x1
#define _LATG_U1OD_MASK                                     0x40
#define _LATG_U2OD_POSN                                     0x7
#define _LATG_U2OD_POSITION                                 0x7
#define _LATG_U2OD_SIZE                                     0x1
#define _LATG_U2OD_LENGTH                                   0x1
#define _LATG_U2OD_MASK                                     0x80
#define _LATG_LG0_POSN                                      0x0
#define _LATG_LG0_POSITION                                  0x0
#define _LATG_LG0_SIZE                                      0x1
#define _LATG_LG0_LENGTH                                    0x1
#define _LATG_LG0_MASK                                      0x1
#define _LATG_LG1_POSN                                      0x1
#define _LATG_LG1_POSITION                                  0x1
#define _LATG_LG1_SIZE                                      0x1
#define _LATG_LG1_LENGTH                                    0x1
#define _LATG_LG1_MASK                                      0x2
#define _LATG_LG2_POSN                                      0x2
#define _LATG_LG2_POSITION                                  0x2
#define _LATG_LG2_SIZE                                      0x1
#define _LATG_LG2_LENGTH                                    0x1
#define _LATG_LG2_MASK                                      0x4
#define _LATG_LG3_POSN                                      0x3
#define _LATG_LG3_POSITION                                  0x3
#define _LATG_LG3_SIZE                                      0x1
#define _LATG_LG3_LENGTH                                    0x1
#define _LATG_LG3_MASK                                      0x8
#define _LATG_LG4_POSN                                      0x4
#define _LATG_LG4_POSITION                                  0x4
#define _LATG_LG4_SIZE                                      0x1
#define _LATG_LG4_LENGTH                                    0x1
#define _LATG_LG4_MASK                                      0x10

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0xF92);
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
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
extern volatile unsigned char           TRISB               __at(0xF93);
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
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

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0xF94);
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
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

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0xF95);
#ifndef _LIB_BUILD
asm("TRISD equ 0F95h");
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
extern volatile TRISDbits_t TRISDbits __at(0xF95);
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
extern volatile unsigned char           TRISE               __at(0xF96);
#ifndef _LIB_BUILD
asm("TRISE equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned                        :1;
        unsigned TRISE3                 :1;
        unsigned TRISE4                 :1;
        unsigned TRISE5                 :1;
        unsigned TRISE6                 :1;
        unsigned TRISE7                 :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0xF96);
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

// Register: TRISF
#define TRISF TRISF
extern volatile unsigned char           TRISF               __at(0xF97);
#ifndef _LIB_BUILD
asm("TRISF equ 0F97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TRISF1                 :1;
        unsigned TRISF2                 :1;
        unsigned TRISF3                 :1;
        unsigned TRISF4                 :1;
        unsigned TRISF5                 :1;
        unsigned TRISF6                 :1;
        unsigned TRISF7                 :1;
    };
} TRISFbits_t;
extern volatile TRISFbits_t TRISFbits __at(0xF97);
// bitfield macros
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
extern volatile unsigned char           TRISG               __at(0xF98);
#ifndef _LIB_BUILD
asm("TRISG equ 0F98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISG0                 :1;
        unsigned TRISG1                 :1;
        unsigned TRISG2                 :1;
        unsigned TRISG3                 :1;
        unsigned TRISG4                 :1;
        unsigned CCP1OD                 :1;
        unsigned CCP2OD                 :1;
        unsigned SPIOD                  :1;
    };
} TRISGbits_t;
extern volatile TRISGbits_t TRISGbits __at(0xF98);
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
#define _TRISG_CCP1OD_POSN                                  0x5
#define _TRISG_CCP1OD_POSITION                              0x5
#define _TRISG_CCP1OD_SIZE                                  0x1
#define _TRISG_CCP1OD_LENGTH                                0x1
#define _TRISG_CCP1OD_MASK                                  0x20
#define _TRISG_CCP2OD_POSN                                  0x6
#define _TRISG_CCP2OD_POSITION                              0x6
#define _TRISG_CCP2OD_SIZE                                  0x1
#define _TRISG_CCP2OD_LENGTH                                0x1
#define _TRISG_CCP2OD_MASK                                  0x40
#define _TRISG_SPIOD_POSN                                   0x7
#define _TRISG_SPIOD_POSITION                               0x7
#define _TRISG_SPIOD_SIZE                                   0x1
#define _TRISG_SPIOD_LENGTH                                 0x1
#define _TRISG_SPIOD_MASK                                   0x80

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
        unsigned PLLEN                  :1;
        unsigned INTSRC                 :1;
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
#define _OSCTUNE_PLLEN_POSN                                 0x6
#define _OSCTUNE_PLLEN_POSITION                             0x6
#define _OSCTUNE_PLLEN_SIZE                                 0x1
#define _OSCTUNE_PLLEN_LENGTH                               0x1
#define _OSCTUNE_PLLEN_MASK                                 0x40
#define _OSCTUNE_INTSRC_POSN                                0x7
#define _OSCTUNE_INTSRC_POSITION                            0x7
#define _OSCTUNE_INTSRC_SIZE                                0x1
#define _OSCTUNE_INTSRC_LENGTH                              0x1
#define _OSCTUNE_INTSRC_MASK                                0x80
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
        unsigned                        :1;
        unsigned SSPIE                  :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
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
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
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
        unsigned                        :1;
        unsigned SSPIF                  :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
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
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8
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
        unsigned                        :1;
        unsigned SSPIP                  :1;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
        unsigned ADIP                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IP                 :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
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
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
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
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_SSP1IP_POSN                                   0x3
#define _IPR1_SSP1IP_POSITION                               0x3
#define _IPR1_SSP1IP_SIZE                                   0x1
#define _IPR1_SSP1IP_LENGTH                                 0x1
#define _IPR1_SSP1IP_MASK                                   0x8
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

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0xFA0);
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IE                 :1;
        unsigned LVDIE                  :1;
        unsigned BCLIE                  :1;
        unsigned                        :2;
        unsigned CMIE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IE                 :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_LVDIE_POSN                                    0x2
#define _PIE2_LVDIE_POSITION                                0x2
#define _PIE2_LVDIE_SIZE                                    0x1
#define _PIE2_LVDIE_LENGTH                                  0x1
#define _PIE2_LVDIE_MASK                                    0x4
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8
#define _PIE2_CMIE_POSN                                     0x6
#define _PIE2_CMIE_POSITION                                 0x6
#define _PIE2_CMIE_SIZE                                     0x1
#define _PIE2_CMIE_LENGTH                                   0x1
#define _PIE2_CMIE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0xFA1);
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IF                 :1;
        unsigned LVDIF                  :1;
        unsigned BCLIF                  :1;
        unsigned                        :2;
        unsigned CMIF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IF                 :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_LVDIF_POSN                                    0x2
#define _PIR2_LVDIF_POSITION                                0x2
#define _PIR2_LVDIF_SIZE                                    0x1
#define _PIR2_LVDIF_LENGTH                                  0x1
#define _PIR2_LVDIF_MASK                                    0x4
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8
#define _PIR2_CMIF_POSN                                     0x6
#define _PIR2_CMIF_POSITION                                 0x6
#define _PIR2_CMIF_SIZE                                     0x1
#define _PIR2_CMIF_LENGTH                                   0x1
#define _PIR2_CMIF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8

// Register: IPR2
#define IPR2 IPR2
extern volatile unsigned char           IPR2                __at(0xFA2);
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IP                 :1;
        unsigned LVDIP                  :1;
        unsigned BCLIP                  :1;
        unsigned                        :2;
        unsigned CMIP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCL1IP                 :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_LVDIP_POSN                                    0x2
#define _IPR2_LVDIP_POSITION                                0x2
#define _IPR2_LVDIP_SIZE                                    0x1
#define _IPR2_LVDIP_LENGTH                                  0x1
#define _IPR2_LVDIP_MASK                                    0x4
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_BCL1IP_POSN                                   0x3
#define _IPR2_BCL1IP_POSITION                               0x3
#define _IPR2_BCL1IP_SIZE                                   0x1
#define _IPR2_BCL1IP_LENGTH                                 0x1
#define _IPR2_BCL1IP_MASK                                   0x8

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0xFA3);
#ifndef _LIB_BUILD
asm("PIE3 equ 0FA3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCCIE                 :1;
        unsigned CCP1IE                 :1;
        unsigned CCP2IE                 :1;
        unsigned CTMUIE                 :1;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
        unsigned LCDIE                  :1;
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
#define _PIE3_RTCCIE_POSN                                   0x0
#define _PIE3_RTCCIE_POSITION                               0x0
#define _PIE3_RTCCIE_SIZE                                   0x1
#define _PIE3_RTCCIE_LENGTH                                 0x1
#define _PIE3_RTCCIE_MASK                                   0x1
#define _PIE3_CCP1IE_POSN                                   0x1
#define _PIE3_CCP1IE_POSITION                               0x1
#define _PIE3_CCP1IE_SIZE                                   0x1
#define _PIE3_CCP1IE_LENGTH                                 0x1
#define _PIE3_CCP1IE_MASK                                   0x2
#define _PIE3_CCP2IE_POSN                                   0x2
#define _PIE3_CCP2IE_POSITION                               0x2
#define _PIE3_CCP2IE_SIZE                                   0x1
#define _PIE3_CCP2IE_LENGTH                                 0x1
#define _PIE3_CCP2IE_MASK                                   0x4
#define _PIE3_CTMUIE_POSN                                   0x3
#define _PIE3_CTMUIE_POSITION                               0x3
#define _PIE3_CTMUIE_SIZE                                   0x1
#define _PIE3_CTMUIE_LENGTH                                 0x1
#define _PIE3_CTMUIE_MASK                                   0x8
#define _PIE3_TX2IE_POSN                                    0x4
#define _PIE3_TX2IE_POSITION                                0x4
#define _PIE3_TX2IE_SIZE                                    0x1
#define _PIE3_TX2IE_LENGTH                                  0x1
#define _PIE3_TX2IE_MASK                                    0x10
#define _PIE3_RC2IE_POSN                                    0x5
#define _PIE3_RC2IE_POSITION                                0x5
#define _PIE3_RC2IE_SIZE                                    0x1
#define _PIE3_RC2IE_LENGTH                                  0x1
#define _PIE3_RC2IE_MASK                                    0x20
#define _PIE3_LCDIE_POSN                                    0x6
#define _PIE3_LCDIE_POSITION                                0x6
#define _PIE3_LCDIE_SIZE                                    0x1
#define _PIE3_LCDIE_LENGTH                                  0x1
#define _PIE3_LCDIE_MASK                                    0x40
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
        unsigned RTCCIF                 :1;
        unsigned CCP1IF                 :1;
        unsigned CCP2IF                 :1;
        unsigned CTMUIF                 :1;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
        unsigned LCDIF                  :1;
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
#define _PIR3_RTCCIF_POSN                                   0x0
#define _PIR3_RTCCIF_POSITION                               0x0
#define _PIR3_RTCCIF_SIZE                                   0x1
#define _PIR3_RTCCIF_LENGTH                                 0x1
#define _PIR3_RTCCIF_MASK                                   0x1
#define _PIR3_CCP1IF_POSN                                   0x1
#define _PIR3_CCP1IF_POSITION                               0x1
#define _PIR3_CCP1IF_SIZE                                   0x1
#define _PIR3_CCP1IF_LENGTH                                 0x1
#define _PIR3_CCP1IF_MASK                                   0x2
#define _PIR3_CCP2IF_POSN                                   0x2
#define _PIR3_CCP2IF_POSITION                               0x2
#define _PIR3_CCP2IF_SIZE                                   0x1
#define _PIR3_CCP2IF_LENGTH                                 0x1
#define _PIR3_CCP2IF_MASK                                   0x4
#define _PIR3_CTMUIF_POSN                                   0x3
#define _PIR3_CTMUIF_POSITION                               0x3
#define _PIR3_CTMUIF_SIZE                                   0x1
#define _PIR3_CTMUIF_LENGTH                                 0x1
#define _PIR3_CTMUIF_MASK                                   0x8
#define _PIR3_TX2IF_POSN                                    0x4
#define _PIR3_TX2IF_POSITION                                0x4
#define _PIR3_TX2IF_SIZE                                    0x1
#define _PIR3_TX2IF_LENGTH                                  0x1
#define _PIR3_TX2IF_MASK                                    0x10
#define _PIR3_RC2IF_POSN                                    0x5
#define _PIR3_RC2IF_POSITION                                0x5
#define _PIR3_RC2IF_SIZE                                    0x1
#define _PIR3_RC2IF_LENGTH                                  0x1
#define _PIR3_RC2IF_MASK                                    0x20
#define _PIR3_LCDIF_POSN                                    0x6
#define _PIR3_LCDIF_POSITION                                0x6
#define _PIR3_LCDIF_SIZE                                    0x1
#define _PIR3_LCDIF_LENGTH                                  0x1
#define _PIR3_LCDIF_MASK                                    0x40
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
        unsigned RTCCIP                 :1;
        unsigned CCP1IP                 :1;
        unsigned CCP2IP                 :1;
        unsigned CTMUIP                 :1;
        unsigned TX2IP                  :1;
        unsigned RC2IP                  :1;
        unsigned LCDIP                  :1;
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
#define _IPR3_RTCCIP_POSN                                   0x0
#define _IPR3_RTCCIP_POSITION                               0x0
#define _IPR3_RTCCIP_SIZE                                   0x1
#define _IPR3_RTCCIP_LENGTH                                 0x1
#define _IPR3_RTCCIP_MASK                                   0x1
#define _IPR3_CCP1IP_POSN                                   0x1
#define _IPR3_CCP1IP_POSITION                               0x1
#define _IPR3_CCP1IP_SIZE                                   0x1
#define _IPR3_CCP1IP_LENGTH                                 0x1
#define _IPR3_CCP1IP_MASK                                   0x2
#define _IPR3_CCP2IP_POSN                                   0x2
#define _IPR3_CCP2IP_POSITION                               0x2
#define _IPR3_CCP2IP_SIZE                                   0x1
#define _IPR3_CCP2IP_LENGTH                                 0x1
#define _IPR3_CCP2IP_MASK                                   0x4
#define _IPR3_CTMUIP_POSN                                   0x3
#define _IPR3_CTMUIP_POSITION                               0x3
#define _IPR3_CTMUIP_SIZE                                   0x1
#define _IPR3_CTMUIP_LENGTH                                 0x1
#define _IPR3_CTMUIP_MASK                                   0x8
#define _IPR3_TX2IP_POSN                                    0x4
#define _IPR3_TX2IP_POSITION                                0x4
#define _IPR3_TX2IP_SIZE                                    0x1
#define _IPR3_TX2IP_LENGTH                                  0x1
#define _IPR3_TX2IP_MASK                                    0x10
#define _IPR3_RC2IP_POSN                                    0x5
#define _IPR3_RC2IP_POSITION                                0x5
#define _IPR3_RC2IP_SIZE                                    0x1
#define _IPR3_RC2IP_LENGTH                                  0x1
#define _IPR3_RC2IP_MASK                                    0x20
#define _IPR3_LCDIP_POSN                                    0x6
#define _IPR3_LCDIP_POSITION                                0x6
#define _IPR3_LCDIP_SIZE                                    0x1
#define _IPR3_LCDIP_LENGTH                                  0x1
#define _IPR3_LCDIP_MASK                                    0x40
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
        unsigned                        :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned WPROG                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0xFA6);
// bitfield macros
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
#define _EECON1_WPROG_POSN                                  0x5
#define _EECON1_WPROG_POSITION                              0x5
#define _EECON1_WPROG_SIZE                                  0x1
#define _EECON1_WPROG_LENGTH                                0x1
#define _EECON1_WPROG_MASK                                  0x20

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0xFA7);
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EECON2                 :8;
    };
} EECON2bits_t;
extern volatile EECON2bits_t EECON2bits __at(0xFA7);
// bitfield macros
#define _EECON2_EECON2_POSN                                 0x0
#define _EECON2_EECON2_POSITION                             0x0
#define _EECON2_EECON2_SIZE                                 0x8
#define _EECON2_EECON2_LENGTH                               0x8
#define _EECON2_EECON2_MASK                                 0xFF

// Register: LCDCON
#define LCDCON LCDCON
extern volatile unsigned char           LCDCON              __at(0xFA8);
#ifndef _LIB_BUILD
asm("LCDCON equ 0FA8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LMUX0                  :1;
        unsigned LMUX1                  :1;
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned                        :1;
        unsigned WERR                   :1;
        unsigned SLPEN                  :1;
        unsigned LCDEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned LCDCS0                 :1;
        unsigned LCDCS1                 :1;
        unsigned                        :1;
        unsigned LCDWERR                :1;
        unsigned LCDSLPEN               :1;
    };
} LCDCONbits_t;
extern volatile LCDCONbits_t LCDCONbits __at(0xFA8);
// bitfield macros
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
#define _LCDCON_LCDCS0_POSN                                 0x2
#define _LCDCON_LCDCS0_POSITION                             0x2
#define _LCDCON_LCDCS0_SIZE                                 0x1
#define _LCDCON_LCDCS0_LENGTH                               0x1
#define _LCDCON_LCDCS0_MASK                                 0x4
#define _LCDCON_LCDCS1_POSN                                 0x3
#define _LCDCON_LCDCS1_POSITION                             0x3
#define _LCDCON_LCDCS1_SIZE                                 0x1
#define _LCDCON_LCDCS1_LENGTH                               0x1
#define _LCDCON_LCDCS1_MASK                                 0x8
#define _LCDCON_LCDWERR_POSN                                0x5
#define _LCDCON_LCDWERR_POSITION                            0x5
#define _LCDCON_LCDWERR_SIZE                                0x1
#define _LCDCON_LCDWERR_LENGTH                              0x1
#define _LCDCON_LCDWERR_MASK                                0x20
#define _LCDCON_LCDSLPEN_POSN                               0x6
#define _LCDCON_LCDSLPEN_POSITION                           0x6
#define _LCDCON_LCDSLPEN_SIZE                               0x1
#define _LCDCON_LCDSLPEN_LENGTH                             0x1
#define _LCDCON_LCDSLPEN_MASK                               0x40

// Register: LCDSE0
#define LCDSE0 LCDSE0
extern volatile unsigned char           LCDSE0              __at(0xFA9);
#ifndef _LIB_BUILD
asm("LCDSE0 equ 0FA9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDSE0                 :8;
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
    struct {
        unsigned SE00                   :1;
        unsigned SE01                   :1;
        unsigned SE02                   :1;
        unsigned SE03                   :1;
        unsigned SE04                   :1;
        unsigned SE05                   :1;
        unsigned SE06                   :1;
        unsigned SE07                   :1;
    };
} LCDSE0bits_t;
extern volatile LCDSE0bits_t LCDSE0bits __at(0xFA9);
// bitfield macros
#define _LCDSE0_LCDSE0_POSN                                 0x0
#define _LCDSE0_LCDSE0_POSITION                             0x0
#define _LCDSE0_LCDSE0_SIZE                                 0x8
#define _LCDSE0_LCDSE0_LENGTH                               0x8
#define _LCDSE0_LCDSE0_MASK                                 0xFF
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
#define _LCDSE0_SE00_POSN                                   0x0
#define _LCDSE0_SE00_POSITION                               0x0
#define _LCDSE0_SE00_SIZE                                   0x1
#define _LCDSE0_SE00_LENGTH                                 0x1
#define _LCDSE0_SE00_MASK                                   0x1
#define _LCDSE0_SE01_POSN                                   0x1
#define _LCDSE0_SE01_POSITION                               0x1
#define _LCDSE0_SE01_SIZE                                   0x1
#define _LCDSE0_SE01_LENGTH                                 0x1
#define _LCDSE0_SE01_MASK                                   0x2
#define _LCDSE0_SE02_POSN                                   0x2
#define _LCDSE0_SE02_POSITION                               0x2
#define _LCDSE0_SE02_SIZE                                   0x1
#define _LCDSE0_SE02_LENGTH                                 0x1
#define _LCDSE0_SE02_MASK                                   0x4
#define _LCDSE0_SE03_POSN                                   0x3
#define _LCDSE0_SE03_POSITION                               0x3
#define _LCDSE0_SE03_SIZE                                   0x1
#define _LCDSE0_SE03_LENGTH                                 0x1
#define _LCDSE0_SE03_MASK                                   0x8
#define _LCDSE0_SE04_POSN                                   0x4
#define _LCDSE0_SE04_POSITION                               0x4
#define _LCDSE0_SE04_SIZE                                   0x1
#define _LCDSE0_SE04_LENGTH                                 0x1
#define _LCDSE0_SE04_MASK                                   0x10
#define _LCDSE0_SE05_POSN                                   0x5
#define _LCDSE0_SE05_POSITION                               0x5
#define _LCDSE0_SE05_SIZE                                   0x1
#define _LCDSE0_SE05_LENGTH                                 0x1
#define _LCDSE0_SE05_MASK                                   0x20
#define _LCDSE0_SE06_POSN                                   0x6
#define _LCDSE0_SE06_POSITION                               0x6
#define _LCDSE0_SE06_SIZE                                   0x1
#define _LCDSE0_SE06_LENGTH                                 0x1
#define _LCDSE0_SE06_MASK                                   0x40
#define _LCDSE0_SE07_POSN                                   0x7
#define _LCDSE0_SE07_POSITION                               0x7
#define _LCDSE0_SE07_SIZE                                   0x1
#define _LCDSE0_SE07_LENGTH                                 0x1
#define _LCDSE0_SE07_MASK                                   0x80

// Register: LCDPS
#define LCDPS LCDPS
extern volatile unsigned char           LCDPS               __at(0xFAA);
#ifndef _LIB_BUILD
asm("LCDPS equ 0FAAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LP0                    :1;
        unsigned LP1                    :1;
        unsigned LP2                    :1;
        unsigned LP3                    :1;
        unsigned WA                     :1;
        unsigned LCDA                   :1;
        unsigned BIASMD                 :1;
        unsigned WFT                    :1;
    };
    struct {
        unsigned LCDPS0                 :1;
        unsigned LCDPS1                 :1;
        unsigned LCDPS2                 :1;
        unsigned LCDPS3                 :1;
    };
} LCDPSbits_t;
extern volatile LCDPSbits_t LCDPSbits __at(0xFAA);
// bitfield macros
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
#define _LCDPS_LCDPS0_POSN                                  0x0
#define _LCDPS_LCDPS0_POSITION                              0x0
#define _LCDPS_LCDPS0_SIZE                                  0x1
#define _LCDPS_LCDPS0_LENGTH                                0x1
#define _LCDPS_LCDPS0_MASK                                  0x1
#define _LCDPS_LCDPS1_POSN                                  0x1
#define _LCDPS_LCDPS1_POSITION                              0x1
#define _LCDPS_LCDPS1_SIZE                                  0x1
#define _LCDPS_LCDPS1_LENGTH                                0x1
#define _LCDPS_LCDPS1_MASK                                  0x2
#define _LCDPS_LCDPS2_POSN                                  0x2
#define _LCDPS_LCDPS2_POSITION                              0x2
#define _LCDPS_LCDPS2_SIZE                                  0x1
#define _LCDPS_LCDPS2_LENGTH                                0x1
#define _LCDPS_LCDPS2_MASK                                  0x4
#define _LCDPS_LCDPS3_POSN                                  0x3
#define _LCDPS_LCDPS3_POSITION                              0x3
#define _LCDPS_LCDPS3_SIZE                                  0x1
#define _LCDPS_LCDPS3_LENGTH                                0x1
#define _LCDPS_LCDPS3_MASK                                  0x8

// Register: RCSTA1
#define RCSTA1 RCSTA1
extern volatile unsigned char           RCSTA1              __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA               __at(0xFAB);
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
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
        unsigned                        :2;
        unsigned ADEN                   :1;
        unsigned                        :2;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
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
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1
#define _RCSTA1_ADEN_POSN                                   0x3
#define _RCSTA1_ADEN_POSITION                               0x3
#define _RCSTA1_ADEN_SIZE                                   0x1
#define _RCSTA1_ADEN_LENGTH                                 0x1
#define _RCSTA1_ADEN_MASK                                   0x8
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_NOT_RC8_POSN                                0x6
#define _RCSTA1_NOT_RC8_POSITION                            0x6
#define _RCSTA1_NOT_RC8_SIZE                                0x1
#define _RCSTA1_NOT_RC8_LENGTH                              0x1
#define _RCSTA1_NOT_RC8_MASK                                0x40
#define _RCSTA1_nRC8_POSN                                   0x6
#define _RCSTA1_nRC8_POSITION                               0x6
#define _RCSTA1_nRC8_SIZE                                   0x1
#define _RCSTA1_nRC8_LENGTH                                 0x1
#define _RCSTA1_nRC8_MASK                                   0x40
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RX9D1_POSN                                  0x0
#define _RCSTA1_RX9D1_POSITION                              0x0
#define _RCSTA1_RX9D1_SIZE                                  0x1
#define _RCSTA1_RX9D1_LENGTH                                0x1
#define _RCSTA1_RX9D1_MASK                                  0x1
#define _RCSTA1_OERR1_POSN                                  0x1
#define _RCSTA1_OERR1_POSITION                              0x1
#define _RCSTA1_OERR1_SIZE                                  0x1
#define _RCSTA1_OERR1_LENGTH                                0x1
#define _RCSTA1_OERR1_MASK                                  0x2
#define _RCSTA1_FERR1_POSN                                  0x2
#define _RCSTA1_FERR1_POSITION                              0x2
#define _RCSTA1_FERR1_SIZE                                  0x1
#define _RCSTA1_FERR1_LENGTH                                0x1
#define _RCSTA1_FERR1_MASK                                  0x4
#define _RCSTA1_ADDEN1_POSN                                 0x3
#define _RCSTA1_ADDEN1_POSITION                             0x3
#define _RCSTA1_ADDEN1_SIZE                                 0x1
#define _RCSTA1_ADDEN1_LENGTH                               0x1
#define _RCSTA1_ADDEN1_MASK                                 0x8
#define _RCSTA1_CREN1_POSN                                  0x4
#define _RCSTA1_CREN1_POSITION                              0x4
#define _RCSTA1_CREN1_SIZE                                  0x1
#define _RCSTA1_CREN1_LENGTH                                0x1
#define _RCSTA1_CREN1_MASK                                  0x10
#define _RCSTA1_SREN1_POSN                                  0x5
#define _RCSTA1_SREN1_POSITION                              0x5
#define _RCSTA1_SREN1_SIZE                                  0x1
#define _RCSTA1_SREN1_LENGTH                                0x1
#define _RCSTA1_SREN1_MASK                                  0x20
#define _RCSTA1_RX91_POSN                                   0x6
#define _RCSTA1_RX91_POSITION                               0x6
#define _RCSTA1_RX91_SIZE                                   0x1
#define _RCSTA1_RX91_LENGTH                                 0x1
#define _RCSTA1_RX91_MASK                                   0x40
#define _RCSTA1_SPEN1_POSN                                  0x7
#define _RCSTA1_SPEN1_POSITION                              0x7
#define _RCSTA1_SPEN1_SIZE                                  0x1
#define _RCSTA1_SPEN1_LENGTH                                0x1
#define _RCSTA1_SPEN1_MASK                                  0x80
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
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
        unsigned RCD8                   :1;
        unsigned                        :2;
        unsigned ADEN                   :1;
        unsigned                        :2;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_RC8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned RX9D1                  :1;
        unsigned OERR1                  :1;
        unsigned FERR1                  :1;
        unsigned ADDEN1                 :1;
        unsigned CREN1                  :1;
        unsigned SREN1                  :1;
        unsigned RX91                   :1;
        unsigned SPEN1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
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
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
#define _RCSTA_ADEN_POSN                                    0x3
#define _RCSTA_ADEN_POSITION                                0x3
#define _RCSTA_ADEN_SIZE                                    0x1
#define _RCSTA_ADEN_LENGTH                                  0x1
#define _RCSTA_ADEN_MASK                                    0x8
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_NOT_RC8_POSN                                 0x6
#define _RCSTA_NOT_RC8_POSITION                             0x6
#define _RCSTA_NOT_RC8_SIZE                                 0x1
#define _RCSTA_NOT_RC8_LENGTH                               0x1
#define _RCSTA_NOT_RC8_MASK                                 0x40
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
#define _RCSTA_RX9D1_POSN                                   0x0
#define _RCSTA_RX9D1_POSITION                               0x0
#define _RCSTA_RX9D1_SIZE                                   0x1
#define _RCSTA_RX9D1_LENGTH                                 0x1
#define _RCSTA_RX9D1_MASK                                   0x1
#define _RCSTA_OERR1_POSN                                   0x1
#define _RCSTA_OERR1_POSITION                               0x1
#define _RCSTA_OERR1_SIZE                                   0x1
#define _RCSTA_OERR1_LENGTH                                 0x1
#define _RCSTA_OERR1_MASK                                   0x2
#define _RCSTA_FERR1_POSN                                   0x2
#define _RCSTA_FERR1_POSITION                               0x2
#define _RCSTA_FERR1_SIZE                                   0x1
#define _RCSTA_FERR1_LENGTH                                 0x1
#define _RCSTA_FERR1_MASK                                   0x4
#define _RCSTA_ADDEN1_POSN                                  0x3
#define _RCSTA_ADDEN1_POSITION                              0x3
#define _RCSTA_ADDEN1_SIZE                                  0x1
#define _RCSTA_ADDEN1_LENGTH                                0x1
#define _RCSTA_ADDEN1_MASK                                  0x8
#define _RCSTA_CREN1_POSN                                   0x4
#define _RCSTA_CREN1_POSITION                               0x4
#define _RCSTA_CREN1_SIZE                                   0x1
#define _RCSTA_CREN1_LENGTH                                 0x1
#define _RCSTA_CREN1_MASK                                   0x10
#define _RCSTA_SREN1_POSN                                   0x5
#define _RCSTA_SREN1_POSITION                               0x5
#define _RCSTA_SREN1_SIZE                                   0x1
#define _RCSTA_SREN1_LENGTH                                 0x1
#define _RCSTA_SREN1_MASK                                   0x20
#define _RCSTA_RX91_POSN                                    0x6
#define _RCSTA_RX91_POSITION                                0x6
#define _RCSTA_RX91_SIZE                                    0x1
#define _RCSTA_RX91_LENGTH                                  0x1
#define _RCSTA_RX91_MASK                                    0x40
#define _RCSTA_SPEN1_POSN                                   0x7
#define _RCSTA_SPEN1_POSITION                               0x7
#define _RCSTA_SPEN1_SIZE                                   0x1
#define _RCSTA_SPEN1_LENGTH                                 0x1
#define _RCSTA_SPEN1_MASK                                   0x80
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20

// Register: TXSTA1
#define TXSTA1 TXSTA1
extern volatile unsigned char           TXSTA1              __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA               __at(0xFAC);
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
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
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
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
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_NOT_TX8_POSN                                0x6
#define _TXSTA1_NOT_TX8_POSITION                            0x6
#define _TXSTA1_NOT_TX8_SIZE                                0x1
#define _TXSTA1_NOT_TX8_LENGTH                              0x1
#define _TXSTA1_NOT_TX8_MASK                                0x40
#define _TXSTA1_nTX8_POSN                                   0x6
#define _TXSTA1_nTX8_POSITION                               0x6
#define _TXSTA1_nTX8_SIZE                                   0x1
#define _TXSTA1_nTX8_LENGTH                                 0x1
#define _TXSTA1_nTX8_MASK                                   0x40
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
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_TX8                :1;
    };
    struct {
        unsigned                        :6;
        unsigned nTX8                   :1;
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
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_NOT_TX8_POSN                                 0x6
#define _TXSTA_NOT_TX8_POSITION                             0x6
#define _TXSTA_NOT_TX8_SIZE                                 0x1
#define _TXSTA_NOT_TX8_LENGTH                               0x1
#define _TXSTA_NOT_TX8_MASK                                 0x40
#define _TXSTA_nTX8_POSN                                    0x6
#define _TXSTA_nTX8_POSITION                                0x6
#define _TXSTA_nTX8_SIZE                                    0x1
#define _TXSTA_nTX8_LENGTH                                  0x1
#define _TXSTA_nTX8_MASK                                    0x40
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

// Register: TXREG1
#define TXREG1 TXREG1
extern volatile unsigned char           TXREG1              __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG1                 :8;
    };
} TXREG1bits_t;
extern volatile TXREG1bits_t TXREG1bits __at(0xFAD);
// bitfield macros
#define _TXREG1_TXREG1_POSN                                 0x0
#define _TXREG1_TXREG1_POSITION                             0x0
#define _TXREG1_TXREG1_SIZE                                 0x8
#define _TXREG1_TXREG1_LENGTH                               0x8
#define _TXREG1_TXREG1_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TXREG1                 :8;
    };
} TXREGbits_t;
extern volatile TXREGbits_t TXREGbits __at(0xFAD);
// bitfield macros
#define _TXREG_TXREG1_POSN                                  0x0
#define _TXREG_TXREG1_POSITION                              0x0
#define _TXREG_TXREG1_SIZE                                  0x8
#define _TXREG_TXREG1_LENGTH                                0x8
#define _TXREG_TXREG1_MASK                                  0xFF

// Register: RCREG1
#define RCREG1 RCREG1
extern volatile unsigned char           RCREG1              __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0xFAE);
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG1                 :8;
    };
} RCREG1bits_t;
extern volatile RCREG1bits_t RCREG1bits __at(0xFAE);
// bitfield macros
#define _RCREG1_RCREG1_POSN                                 0x0
#define _RCREG1_RCREG1_POSITION                             0x0
#define _RCREG1_RCREG1_SIZE                                 0x8
#define _RCREG1_RCREG1_LENGTH                               0x8
#define _RCREG1_RCREG1_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned RCREG1                 :8;
    };
} RCREGbits_t;
extern volatile RCREGbits_t RCREGbits __at(0xFAE);
// bitfield macros
#define _RCREG_RCREG1_POSN                                  0x0
#define _RCREG_RCREG1_POSITION                              0x0
#define _RCREG_RCREG1_SIZE                                  0x8
#define _RCREG_RCREG1_LENGTH                                0x8
#define _RCREG_RCREG1_MASK                                  0xFF

// Register: SPBRG1
#define SPBRG1 SPBRG1
extern volatile unsigned char           SPBRG1              __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0xFAF);
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRG1                 :8;
    };
} SPBRG1bits_t;
extern volatile SPBRG1bits_t SPBRG1bits __at(0xFAF);
// bitfield macros
#define _SPBRG1_SPBRG1_POSN                                 0x0
#define _SPBRG1_SPBRG1_POSITION                             0x0
#define _SPBRG1_SPBRG1_SIZE                                 0x8
#define _SPBRG1_SPBRG1_LENGTH                               0x8
#define _SPBRG1_SPBRG1_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRG1                 :8;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0xFAF);
// bitfield macros
#define _SPBRG_SPBRG1_POSN                                  0x0
#define _SPBRG_SPBRG1_POSITION                              0x0
#define _SPBRG_SPBRG1_SIZE                                  0x8
#define _SPBRG_SPBRG1_LENGTH                                0x8
#define _SPBRG_SPBRG1_MASK                                  0xFF

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0xFB1);
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned T3CCP2                 :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3INSYNC               :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
        unsigned                        :3;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0xFB1);
// bitfield macros
#define _T3CON_NOT_T3SYNC_POSN                              0x2
#define _T3CON_NOT_T3SYNC_POSITION                          0x2
#define _T3CON_NOT_T3SYNC_SIZE                              0x1
#define _T3CON_NOT_T3SYNC_LENGTH                            0x1
#define _T3CON_NOT_T3SYNC_MASK                              0x4
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_TMR3CS_POSN                                  0x1
#define _T3CON_TMR3CS_POSITION                              0x1
#define _T3CON_TMR3CS_SIZE                                  0x1
#define _T3CON_TMR3CS_LENGTH                                0x1
#define _T3CON_TMR3CS_MASK                                  0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_T3CCP1_POSN                                  0x3
#define _T3CON_T3CCP1_POSITION                              0x3
#define _T3CON_T3CCP1_SIZE                                  0x1
#define _T3CON_T3CCP1_LENGTH                                0x1
#define _T3CON_T3CCP1_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_T3CCP2_POSN                                  0x6
#define _T3CON_T3CCP2_POSITION                              0x6
#define _T3CON_T3CCP2_SIZE                                  0x1
#define _T3CON_T3CCP2_LENGTH                                0x1
#define _T3CON_T3CCP2_MASK                                  0x40
#define _T3CON_RD16_POSN                                    0x7
#define _T3CON_RD16_POSITION                                0x7
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x80
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
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
#define _T3CON_T3INSYNC_POSN                                0x2
#define _T3CON_T3INSYNC_POSITION                            0x2
#define _T3CON_T3INSYNC_SIZE                                0x1
#define _T3CON_T3INSYNC_LENGTH                              0x1
#define _T3CON_T3INSYNC_MASK                                0x4
#define _T3CON_SOSCEN3_POSN                                 0x3
#define _T3CON_SOSCEN3_POSITION                             0x3
#define _T3CON_SOSCEN3_SIZE                                 0x1
#define _T3CON_SOSCEN3_LENGTH                               0x1
#define _T3CON_SOSCEN3_MASK                                 0x8
#define _T3CON_RD163_POSN                                   0x7
#define _T3CON_RD163_POSITION                               0x7
#define _T3CON_RD163_SIZE                                   0x1
#define _T3CON_RD163_LENGTH                                 0x1
#define _T3CON_RD163_MASK                                   0x80
#define _T3CON_T3RD16_POSN                                  0x7
#define _T3CON_T3RD16_POSITION                              0x7
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x80

// Register: TMR3
#define TMR3 TMR3
extern volatile unsigned short          TMR3                __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0xFB2);
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3L                  :8;
    };
} TMR3Lbits_t;
extern volatile TMR3Lbits_t TMR3Lbits __at(0xFB2);
// bitfield macros
#define _TMR3L_TMR3L_POSN                                   0x0
#define _TMR3L_TMR3L_POSITION                               0x0
#define _TMR3L_TMR3L_SIZE                                   0x8
#define _TMR3L_TMR3L_LENGTH                                 0x8
#define _TMR3L_TMR3L_MASK                                   0xFF

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0xFB3);
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3H                  :8;
    };
} TMR3Hbits_t;
extern volatile TMR3Hbits_t TMR3Hbits __at(0xFB3);
// bitfield macros
#define _TMR3H_TMR3H_POSN                                   0x0
#define _TMR3H_TMR3H_POSITION                               0x0
#define _TMR3H_TMR3H_SIZE                                   0x8
#define _TMR3H_TMR3H_LENGTH                                 0x8
#define _TMR3H_TMR3H_MASK                                   0xFF

// Register: CMCON
#define CMCON CMCON
extern volatile unsigned char           CMCON               __at(0xFB4);
#ifndef _LIB_BUILD
asm("CMCON equ 0FB4h");
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
    struct {
        unsigned CMEN0                  :1;
        unsigned CMEN1                  :1;
        unsigned CMEN2                  :1;
    };
} CMCONbits_t;
extern volatile CMCONbits_t CMCONbits __at(0xFB4);
// bitfield macros
#define _CMCON_CM_POSN                                      0x0
#define _CMCON_CM_POSITION                                  0x0
#define _CMCON_CM_SIZE                                      0x3
#define _CMCON_CM_LENGTH                                    0x3
#define _CMCON_CM_MASK                                      0x7
#define _CMCON_CIS_POSN                                     0x3
#define _CMCON_CIS_POSITION                                 0x3
#define _CMCON_CIS_SIZE                                     0x1
#define _CMCON_CIS_LENGTH                                   0x1
#define _CMCON_CIS_MASK                                     0x8
#define _CMCON_C1INV_POSN                                   0x4
#define _CMCON_C1INV_POSITION                               0x4
#define _CMCON_C1INV_SIZE                                   0x1
#define _CMCON_C1INV_LENGTH                                 0x1
#define _CMCON_C1INV_MASK                                   0x10
#define _CMCON_C2INV_POSN                                   0x5
#define _CMCON_C2INV_POSITION                               0x5
#define _CMCON_C2INV_SIZE                                   0x1
#define _CMCON_C2INV_LENGTH                                 0x1
#define _CMCON_C2INV_MASK                                   0x20
#define _CMCON_C1OUT_POSN                                   0x6
#define _CMCON_C1OUT_POSITION                               0x6
#define _CMCON_C1OUT_SIZE                                   0x1
#define _CMCON_C1OUT_LENGTH                                 0x1
#define _CMCON_C1OUT_MASK                                   0x40
#define _CMCON_C2OUT_POSN                                   0x7
#define _CMCON_C2OUT_POSITION                               0x7
#define _CMCON_C2OUT_SIZE                                   0x1
#define _CMCON_C2OUT_LENGTH                                 0x1
#define _CMCON_C2OUT_MASK                                   0x80
#define _CMCON_CM0_POSN                                     0x0
#define _CMCON_CM0_POSITION                                 0x0
#define _CMCON_CM0_SIZE                                     0x1
#define _CMCON_CM0_LENGTH                                   0x1
#define _CMCON_CM0_MASK                                     0x1
#define _CMCON_CM1_POSN                                     0x1
#define _CMCON_CM1_POSITION                                 0x1
#define _CMCON_CM1_SIZE                                     0x1
#define _CMCON_CM1_LENGTH                                   0x1
#define _CMCON_CM1_MASK                                     0x2
#define _CMCON_CM2_POSN                                     0x2
#define _CMCON_CM2_POSITION                                 0x2
#define _CMCON_CM2_SIZE                                     0x1
#define _CMCON_CM2_LENGTH                                   0x1
#define _CMCON_CM2_MASK                                     0x4
#define _CMCON_CMEN0_POSN                                   0x0
#define _CMCON_CMEN0_POSITION                               0x0
#define _CMCON_CMEN0_SIZE                                   0x1
#define _CMCON_CMEN0_LENGTH                                 0x1
#define _CMCON_CMEN0_MASK                                   0x1
#define _CMCON_CMEN1_POSN                                   0x1
#define _CMCON_CMEN1_POSITION                               0x1
#define _CMCON_CMEN1_SIZE                                   0x1
#define _CMCON_CMEN1_LENGTH                                 0x1
#define _CMCON_CMEN1_MASK                                   0x2
#define _CMCON_CMEN2_POSN                                   0x2
#define _CMCON_CMEN2_POSITION                               0x2
#define _CMCON_CMEN2_SIZE                                   0x1
#define _CMCON_CMEN2_LENGTH                                 0x1
#define _CMCON_CMEN2_MASK                                   0x4

// Register: CVRCON
#define CVRCON CVRCON
extern volatile unsigned char           CVRCON              __at(0xFB5);
#ifndef _LIB_BUILD
asm("CVRCON equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CVR                    :4;
        unsigned CVRSS                  :1;
        unsigned CVRR                   :1;
        unsigned CVROE                  :1;
        unsigned CVREN                  :1;
    };
    struct {
        unsigned CVR0                   :1;
        unsigned CVR1                   :1;
        unsigned CVR2                   :1;
        unsigned CVR3                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned CVROEN                 :1;
    };
} CVRCONbits_t;
extern volatile CVRCONbits_t CVRCONbits __at(0xFB5);
// bitfield macros
#define _CVRCON_CVR_POSN                                    0x0
#define _CVRCON_CVR_POSITION                                0x0
#define _CVRCON_CVR_SIZE                                    0x4
#define _CVRCON_CVR_LENGTH                                  0x4
#define _CVRCON_CVR_MASK                                    0xF
#define _CVRCON_CVRSS_POSN                                  0x4
#define _CVRCON_CVRSS_POSITION                              0x4
#define _CVRCON_CVRSS_SIZE                                  0x1
#define _CVRCON_CVRSS_LENGTH                                0x1
#define _CVRCON_CVRSS_MASK                                  0x10
#define _CVRCON_CVRR_POSN                                   0x5
#define _CVRCON_CVRR_POSITION                               0x5
#define _CVRCON_CVRR_SIZE                                   0x1
#define _CVRCON_CVRR_LENGTH                                 0x1
#define _CVRCON_CVRR_MASK                                   0x20
#define _CVRCON_CVROE_POSN                                  0x6
#define _CVRCON_CVROE_POSITION                              0x6
#define _CVRCON_CVROE_SIZE                                  0x1
#define _CVRCON_CVROE_LENGTH                                0x1
#define _CVRCON_CVROE_MASK                                  0x40
#define _CVRCON_CVREN_POSN                                  0x7
#define _CVRCON_CVREN_POSITION                              0x7
#define _CVRCON_CVREN_SIZE                                  0x1
#define _CVRCON_CVREN_LENGTH                                0x1
#define _CVRCON_CVREN_MASK                                  0x80
#define _CVRCON_CVR0_POSN                                   0x0
#define _CVRCON_CVR0_POSITION                               0x0
#define _CVRCON_CVR0_SIZE                                   0x1
#define _CVRCON_CVR0_LENGTH                                 0x1
#define _CVRCON_CVR0_MASK                                   0x1
#define _CVRCON_CVR1_POSN                                   0x1
#define _CVRCON_CVR1_POSITION                               0x1
#define _CVRCON_CVR1_SIZE                                   0x1
#define _CVRCON_CVR1_LENGTH                                 0x1
#define _CVRCON_CVR1_MASK                                   0x2
#define _CVRCON_CVR2_POSN                                   0x2
#define _CVRCON_CVR2_POSITION                               0x2
#define _CVRCON_CVR2_SIZE                                   0x1
#define _CVRCON_CVR2_LENGTH                                 0x1
#define _CVRCON_CVR2_MASK                                   0x4
#define _CVRCON_CVR3_POSN                                   0x3
#define _CVRCON_CVR3_POSITION                               0x3
#define _CVRCON_CVR3_SIZE                                   0x1
#define _CVRCON_CVR3_LENGTH                                 0x1
#define _CVRCON_CVR3_MASK                                   0x8
#define _CVRCON_CVROEN_POSN                                 0x6
#define _CVRCON_CVROEN_POSITION                             0x6
#define _CVRCON_CVROEN_SIZE                                 0x1
#define _CVRCON_CVROEN_LENGTH                               0x1
#define _CVRCON_CVROEN_MASK                                 0x40

// Register: LCDSE1
#define LCDSE1 LCDSE1
extern volatile unsigned char           LCDSE1              __at(0xFB6);
#ifndef _LIB_BUILD
asm("LCDSE1 equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDSE1                 :8;
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
    struct {
        unsigned SE08                   :1;
        unsigned SE09                   :1;
    };
} LCDSE1bits_t;
extern volatile LCDSE1bits_t LCDSE1bits __at(0xFB6);
// bitfield macros
#define _LCDSE1_LCDSE1_POSN                                 0x0
#define _LCDSE1_LCDSE1_POSITION                             0x0
#define _LCDSE1_LCDSE1_SIZE                                 0x8
#define _LCDSE1_LCDSE1_LENGTH                               0x8
#define _LCDSE1_LCDSE1_MASK                                 0xFF
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
#define _LCDSE1_SE08_POSN                                   0x0
#define _LCDSE1_SE08_POSITION                               0x0
#define _LCDSE1_SE08_SIZE                                   0x1
#define _LCDSE1_SE08_LENGTH                                 0x1
#define _LCDSE1_SE08_MASK                                   0x1
#define _LCDSE1_SE09_POSN                                   0x1
#define _LCDSE1_SE09_POSITION                               0x1
#define _LCDSE1_SE09_SIZE                                   0x1
#define _LCDSE1_SE09_LENGTH                                 0x1
#define _LCDSE1_SE09_MASK                                   0x2

// Register: LCDSE2
#define LCDSE2 LCDSE2
extern volatile unsigned char           LCDSE2              __at(0xFB7);
#ifndef _LIB_BUILD
asm("LCDSE2 equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDSE2                 :8;
    };
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
    struct {
        unsigned SEGEN16                :1;
        unsigned SEGEN17                :1;
        unsigned SEGEN18                :1;
        unsigned SEGEN19                :1;
        unsigned SEGEN20                :1;
        unsigned SEGEN21                :1;
        unsigned SEGEN22                :1;
        unsigned SEGEN23                :1;
    };
} LCDSE2bits_t;
extern volatile LCDSE2bits_t LCDSE2bits __at(0xFB7);
// bitfield macros
#define _LCDSE2_LCDSE2_POSN                                 0x0
#define _LCDSE2_LCDSE2_POSITION                             0x0
#define _LCDSE2_LCDSE2_SIZE                                 0x8
#define _LCDSE2_LCDSE2_LENGTH                               0x8
#define _LCDSE2_LCDSE2_MASK                                 0xFF
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
#define _LCDSE2_SEGEN16_POSN                                0x0
#define _LCDSE2_SEGEN16_POSITION                            0x0
#define _LCDSE2_SEGEN16_SIZE                                0x1
#define _LCDSE2_SEGEN16_LENGTH                              0x1
#define _LCDSE2_SEGEN16_MASK                                0x1
#define _LCDSE2_SEGEN17_POSN                                0x1
#define _LCDSE2_SEGEN17_POSITION                            0x1
#define _LCDSE2_SEGEN17_SIZE                                0x1
#define _LCDSE2_SEGEN17_LENGTH                              0x1
#define _LCDSE2_SEGEN17_MASK                                0x2
#define _LCDSE2_SEGEN18_POSN                                0x2
#define _LCDSE2_SEGEN18_POSITION                            0x2
#define _LCDSE2_SEGEN18_SIZE                                0x1
#define _LCDSE2_SEGEN18_LENGTH                              0x1
#define _LCDSE2_SEGEN18_MASK                                0x4
#define _LCDSE2_SEGEN19_POSN                                0x3
#define _LCDSE2_SEGEN19_POSITION                            0x3
#define _LCDSE2_SEGEN19_SIZE                                0x1
#define _LCDSE2_SEGEN19_LENGTH                              0x1
#define _LCDSE2_SEGEN19_MASK                                0x8
#define _LCDSE2_SEGEN20_POSN                                0x4
#define _LCDSE2_SEGEN20_POSITION                            0x4
#define _LCDSE2_SEGEN20_SIZE                                0x1
#define _LCDSE2_SEGEN20_LENGTH                              0x1
#define _LCDSE2_SEGEN20_MASK                                0x10
#define _LCDSE2_SEGEN21_POSN                                0x5
#define _LCDSE2_SEGEN21_POSITION                            0x5
#define _LCDSE2_SEGEN21_SIZE                                0x1
#define _LCDSE2_SEGEN21_LENGTH                              0x1
#define _LCDSE2_SEGEN21_MASK                                0x20
#define _LCDSE2_SEGEN22_POSN                                0x6
#define _LCDSE2_SEGEN22_POSITION                            0x6
#define _LCDSE2_SEGEN22_SIZE                                0x1
#define _LCDSE2_SEGEN22_LENGTH                              0x1
#define _LCDSE2_SEGEN22_MASK                                0x40
#define _LCDSE2_SEGEN23_POSN                                0x7
#define _LCDSE2_SEGEN23_POSITION                            0x7
#define _LCDSE2_SEGEN23_SIZE                                0x1
#define _LCDSE2_SEGEN23_LENGTH                              0x1
#define _LCDSE2_SEGEN23_MASK                                0x80

// Register: LCDSE3
#define LCDSE3 LCDSE3
extern volatile unsigned char           LCDSE3              __at(0xFB8);
#ifndef _LIB_BUILD
asm("LCDSE3 equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDSE3                 :8;
    };
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
    struct {
        unsigned SEGEN24                :1;
        unsigned SEGEN25                :1;
        unsigned SEGEN26                :1;
        unsigned SEGEN27                :1;
        unsigned SEGEN28                :1;
        unsigned SEGEN29                :1;
        unsigned SEGEN30                :1;
        unsigned SEGEN31                :1;
    };
} LCDSE3bits_t;
extern volatile LCDSE3bits_t LCDSE3bits __at(0xFB8);
// bitfield macros
#define _LCDSE3_LCDSE3_POSN                                 0x0
#define _LCDSE3_LCDSE3_POSITION                             0x0
#define _LCDSE3_LCDSE3_SIZE                                 0x8
#define _LCDSE3_LCDSE3_LENGTH                               0x8
#define _LCDSE3_LCDSE3_MASK                                 0xFF
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
#define _LCDSE3_SEGEN24_POSN                                0x0
#define _LCDSE3_SEGEN24_POSITION                            0x0
#define _LCDSE3_SEGEN24_SIZE                                0x1
#define _LCDSE3_SEGEN24_LENGTH                              0x1
#define _LCDSE3_SEGEN24_MASK                                0x1
#define _LCDSE3_SEGEN25_POSN                                0x1
#define _LCDSE3_SEGEN25_POSITION                            0x1
#define _LCDSE3_SEGEN25_SIZE                                0x1
#define _LCDSE3_SEGEN25_LENGTH                              0x1
#define _LCDSE3_SEGEN25_MASK                                0x2
#define _LCDSE3_SEGEN26_POSN                                0x2
#define _LCDSE3_SEGEN26_POSITION                            0x2
#define _LCDSE3_SEGEN26_SIZE                                0x1
#define _LCDSE3_SEGEN26_LENGTH                              0x1
#define _LCDSE3_SEGEN26_MASK                                0x4
#define _LCDSE3_SEGEN27_POSN                                0x3
#define _LCDSE3_SEGEN27_POSITION                            0x3
#define _LCDSE3_SEGEN27_SIZE                                0x1
#define _LCDSE3_SEGEN27_LENGTH                              0x1
#define _LCDSE3_SEGEN27_MASK                                0x8
#define _LCDSE3_SEGEN28_POSN                                0x4
#define _LCDSE3_SEGEN28_POSITION                            0x4
#define _LCDSE3_SEGEN28_SIZE                                0x1
#define _LCDSE3_SEGEN28_LENGTH                              0x1
#define _LCDSE3_SEGEN28_MASK                                0x10
#define _LCDSE3_SEGEN29_POSN                                0x5
#define _LCDSE3_SEGEN29_POSITION                            0x5
#define _LCDSE3_SEGEN29_SIZE                                0x1
#define _LCDSE3_SEGEN29_LENGTH                              0x1
#define _LCDSE3_SEGEN29_MASK                                0x20
#define _LCDSE3_SEGEN30_POSN                                0x6
#define _LCDSE3_SEGEN30_POSITION                            0x6
#define _LCDSE3_SEGEN30_SIZE                                0x1
#define _LCDSE3_SEGEN30_LENGTH                              0x1
#define _LCDSE3_SEGEN30_MASK                                0x40
#define _LCDSE3_SEGEN31_POSN                                0x7
#define _LCDSE3_SEGEN31_POSITION                            0x7
#define _LCDSE3_SEGEN31_SIZE                                0x1
#define _LCDSE3_SEGEN31_LENGTH                              0x1
#define _LCDSE3_SEGEN31_MASK                                0x80

// Register: LCDSE4
#define LCDSE4 LCDSE4
extern volatile unsigned char           LCDSE4              __at(0xFB9);
#ifndef _LIB_BUILD
asm("LCDSE4 equ 0FB9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDSE4                 :8;
    };
    struct {
        unsigned SE32                   :1;
    };
    struct {
        unsigned SEGEN32                :1;
    };
} LCDSE4bits_t;
extern volatile LCDSE4bits_t LCDSE4bits __at(0xFB9);
// bitfield macros
#define _LCDSE4_LCDSE4_POSN                                 0x0
#define _LCDSE4_LCDSE4_POSITION                             0x0
#define _LCDSE4_LCDSE4_SIZE                                 0x8
#define _LCDSE4_LCDSE4_LENGTH                               0x8
#define _LCDSE4_LCDSE4_MASK                                 0xFF
#define _LCDSE4_SE32_POSN                                   0x0
#define _LCDSE4_SE32_POSITION                               0x0
#define _LCDSE4_SE32_SIZE                                   0x1
#define _LCDSE4_SE32_LENGTH                                 0x1
#define _LCDSE4_SE32_MASK                                   0x1
#define _LCDSE4_SEGEN32_POSN                                0x0
#define _LCDSE4_SEGEN32_POSITION                            0x0
#define _LCDSE4_SEGEN32_SIZE                                0x1
#define _LCDSE4_SEGEN32_LENGTH                              0x1
#define _LCDSE4_SEGEN32_MASK                                0x1

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
extern volatile unsigned char           LCDDATA0            __at(0xFBB);
#ifndef _LIB_BUILD
asm("LCDDATA0 equ 0FBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA0               :8;
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
        unsigned S00C0                  :1;
        unsigned S01C0                  :1;
        unsigned S02C0                  :1;
        unsigned S03C0                  :1;
        unsigned S04C0                  :1;
        unsigned S05C0                  :1;
        unsigned S06C0                  :1;
        unsigned S07C0                  :1;
    };
} LCDDATA0bits_t;
extern volatile LCDDATA0bits_t LCDDATA0bits __at(0xFBB);
// bitfield macros
#define _LCDDATA0_LCDDATA0_POSN                             0x0
#define _LCDDATA0_LCDDATA0_POSITION                         0x0
#define _LCDDATA0_LCDDATA0_SIZE                             0x8
#define _LCDDATA0_LCDDATA0_LENGTH                           0x8
#define _LCDDATA0_LCDDATA0_MASK                             0xFF
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
#define _LCDDATA0_S00C0_POSN                                0x0
#define _LCDDATA0_S00C0_POSITION                            0x0
#define _LCDDATA0_S00C0_SIZE                                0x1
#define _LCDDATA0_S00C0_LENGTH                              0x1
#define _LCDDATA0_S00C0_MASK                                0x1
#define _LCDDATA0_S01C0_POSN                                0x1
#define _LCDDATA0_S01C0_POSITION                            0x1
#define _LCDDATA0_S01C0_SIZE                                0x1
#define _LCDDATA0_S01C0_LENGTH                              0x1
#define _LCDDATA0_S01C0_MASK                                0x2
#define _LCDDATA0_S02C0_POSN                                0x2
#define _LCDDATA0_S02C0_POSITION                            0x2
#define _LCDDATA0_S02C0_SIZE                                0x1
#define _LCDDATA0_S02C0_LENGTH                              0x1
#define _LCDDATA0_S02C0_MASK                                0x4
#define _LCDDATA0_S03C0_POSN                                0x3
#define _LCDDATA0_S03C0_POSITION                            0x3
#define _LCDDATA0_S03C0_SIZE                                0x1
#define _LCDDATA0_S03C0_LENGTH                              0x1
#define _LCDDATA0_S03C0_MASK                                0x8
#define _LCDDATA0_S04C0_POSN                                0x4
#define _LCDDATA0_S04C0_POSITION                            0x4
#define _LCDDATA0_S04C0_SIZE                                0x1
#define _LCDDATA0_S04C0_LENGTH                              0x1
#define _LCDDATA0_S04C0_MASK                                0x10
#define _LCDDATA0_S05C0_POSN                                0x5
#define _LCDDATA0_S05C0_POSITION                            0x5
#define _LCDDATA0_S05C0_SIZE                                0x1
#define _LCDDATA0_S05C0_LENGTH                              0x1
#define _LCDDATA0_S05C0_MASK                                0x20
#define _LCDDATA0_S06C0_POSN                                0x6
#define _LCDDATA0_S06C0_POSITION                            0x6
#define _LCDDATA0_S06C0_SIZE                                0x1
#define _LCDDATA0_S06C0_LENGTH                              0x1
#define _LCDDATA0_S06C0_MASK                                0x40
#define _LCDDATA0_S07C0_POSN                                0x7
#define _LCDDATA0_S07C0_POSITION                            0x7
#define _LCDDATA0_S07C0_SIZE                                0x1
#define _LCDDATA0_S07C0_LENGTH                              0x1
#define _LCDDATA0_S07C0_MASK                                0x80

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
extern volatile unsigned char           LCDDATA1            __at(0xFBC);
#ifndef _LIB_BUILD
asm("LCDDATA1 equ 0FBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA1               :8;
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
        unsigned S08C0                  :1;
        unsigned S09C0                  :1;
    };
} LCDDATA1bits_t;
extern volatile LCDDATA1bits_t LCDDATA1bits __at(0xFBC);
// bitfield macros
#define _LCDDATA1_LCDDATA1_POSN                             0x0
#define _LCDDATA1_LCDDATA1_POSITION                         0x0
#define _LCDDATA1_LCDDATA1_SIZE                             0x8
#define _LCDDATA1_LCDDATA1_LENGTH                           0x8
#define _LCDDATA1_LCDDATA1_MASK                             0xFF
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
#define _LCDDATA1_S08C0_POSN                                0x0
#define _LCDDATA1_S08C0_POSITION                            0x0
#define _LCDDATA1_S08C0_SIZE                                0x1
#define _LCDDATA1_S08C0_LENGTH                              0x1
#define _LCDDATA1_S08C0_MASK                                0x1
#define _LCDDATA1_S09C0_POSN                                0x1
#define _LCDDATA1_S09C0_POSITION                            0x1
#define _LCDDATA1_S09C0_SIZE                                0x1
#define _LCDDATA1_S09C0_LENGTH                              0x1
#define _LCDDATA1_S09C0_MASK                                0x2

// Register: LCDDATA2
#define LCDDATA2 LCDDATA2
extern volatile unsigned char           LCDDATA2            __at(0xFBD);
#ifndef _LIB_BUILD
asm("LCDDATA2 equ 0FBDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA2               :8;
    };
    struct {
        unsigned S16C0                  :1;
        unsigned S17C0                  :1;
        unsigned S18C0                  :1;
        unsigned S19C0                  :1;
        unsigned S20C0                  :1;
        unsigned S21C0                  :1;
        unsigned S22C0                  :1;
        unsigned S23C0                  :1;
    };
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
extern volatile LCDDATA2bits_t LCDDATA2bits __at(0xFBD);
// bitfield macros
#define _LCDDATA2_LCDDATA2_POSN                             0x0
#define _LCDDATA2_LCDDATA2_POSITION                         0x0
#define _LCDDATA2_LCDDATA2_SIZE                             0x8
#define _LCDDATA2_LCDDATA2_LENGTH                           0x8
#define _LCDDATA2_LCDDATA2_MASK                             0xFF
#define _LCDDATA2_S16C0_POSN                                0x0
#define _LCDDATA2_S16C0_POSITION                            0x0
#define _LCDDATA2_S16C0_SIZE                                0x1
#define _LCDDATA2_S16C0_LENGTH                              0x1
#define _LCDDATA2_S16C0_MASK                                0x1
#define _LCDDATA2_S17C0_POSN                                0x1
#define _LCDDATA2_S17C0_POSITION                            0x1
#define _LCDDATA2_S17C0_SIZE                                0x1
#define _LCDDATA2_S17C0_LENGTH                              0x1
#define _LCDDATA2_S17C0_MASK                                0x2
#define _LCDDATA2_S18C0_POSN                                0x2
#define _LCDDATA2_S18C0_POSITION                            0x2
#define _LCDDATA2_S18C0_SIZE                                0x1
#define _LCDDATA2_S18C0_LENGTH                              0x1
#define _LCDDATA2_S18C0_MASK                                0x4
#define _LCDDATA2_S19C0_POSN                                0x3
#define _LCDDATA2_S19C0_POSITION                            0x3
#define _LCDDATA2_S19C0_SIZE                                0x1
#define _LCDDATA2_S19C0_LENGTH                              0x1
#define _LCDDATA2_S19C0_MASK                                0x8
#define _LCDDATA2_S20C0_POSN                                0x4
#define _LCDDATA2_S20C0_POSITION                            0x4
#define _LCDDATA2_S20C0_SIZE                                0x1
#define _LCDDATA2_S20C0_LENGTH                              0x1
#define _LCDDATA2_S20C0_MASK                                0x10
#define _LCDDATA2_S21C0_POSN                                0x5
#define _LCDDATA2_S21C0_POSITION                            0x5
#define _LCDDATA2_S21C0_SIZE                                0x1
#define _LCDDATA2_S21C0_LENGTH                              0x1
#define _LCDDATA2_S21C0_MASK                                0x20
#define _LCDDATA2_S22C0_POSN                                0x6
#define _LCDDATA2_S22C0_POSITION                            0x6
#define _LCDDATA2_S22C0_SIZE                                0x1
#define _LCDDATA2_S22C0_LENGTH                              0x1
#define _LCDDATA2_S22C0_MASK                                0x40
#define _LCDDATA2_S23C0_POSN                                0x7
#define _LCDDATA2_S23C0_POSITION                            0x7
#define _LCDDATA2_S23C0_SIZE                                0x1
#define _LCDDATA2_S23C0_LENGTH                              0x1
#define _LCDDATA2_S23C0_MASK                                0x80
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
extern volatile unsigned char           LCDDATA3            __at(0xFBE);
#ifndef _LIB_BUILD
asm("LCDDATA3 equ 0FBEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA3               :8;
    };
    struct {
        unsigned S24C0                  :1;
        unsigned S25C0                  :1;
        unsigned S26C0                  :1;
        unsigned S27C0                  :1;
        unsigned S28C0                  :1;
        unsigned S29C0                  :1;
        unsigned S30C0                  :1;
        unsigned S31C0                  :1;
    };
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
} LCDDATA3bits_t;
extern volatile LCDDATA3bits_t LCDDATA3bits __at(0xFBE);
// bitfield macros
#define _LCDDATA3_LCDDATA3_POSN                             0x0
#define _LCDDATA3_LCDDATA3_POSITION                         0x0
#define _LCDDATA3_LCDDATA3_SIZE                             0x8
#define _LCDDATA3_LCDDATA3_LENGTH                           0x8
#define _LCDDATA3_LCDDATA3_MASK                             0xFF
#define _LCDDATA3_S24C0_POSN                                0x0
#define _LCDDATA3_S24C0_POSITION                            0x0
#define _LCDDATA3_S24C0_SIZE                                0x1
#define _LCDDATA3_S24C0_LENGTH                              0x1
#define _LCDDATA3_S24C0_MASK                                0x1
#define _LCDDATA3_S25C0_POSN                                0x1
#define _LCDDATA3_S25C0_POSITION                            0x1
#define _LCDDATA3_S25C0_SIZE                                0x1
#define _LCDDATA3_S25C0_LENGTH                              0x1
#define _LCDDATA3_S25C0_MASK                                0x2
#define _LCDDATA3_S26C0_POSN                                0x2
#define _LCDDATA3_S26C0_POSITION                            0x2
#define _LCDDATA3_S26C0_SIZE                                0x1
#define _LCDDATA3_S26C0_LENGTH                              0x1
#define _LCDDATA3_S26C0_MASK                                0x4
#define _LCDDATA3_S27C0_POSN                                0x3
#define _LCDDATA3_S27C0_POSITION                            0x3
#define _LCDDATA3_S27C0_SIZE                                0x1
#define _LCDDATA3_S27C0_LENGTH                              0x1
#define _LCDDATA3_S27C0_MASK                                0x8
#define _LCDDATA3_S28C0_POSN                                0x4
#define _LCDDATA3_S28C0_POSITION                            0x4
#define _LCDDATA3_S28C0_SIZE                                0x1
#define _LCDDATA3_S28C0_LENGTH                              0x1
#define _LCDDATA3_S28C0_MASK                                0x10
#define _LCDDATA3_S29C0_POSN                                0x5
#define _LCDDATA3_S29C0_POSITION                            0x5
#define _LCDDATA3_S29C0_SIZE                                0x1
#define _LCDDATA3_S29C0_LENGTH                              0x1
#define _LCDDATA3_S29C0_MASK                                0x20
#define _LCDDATA3_S30C0_POSN                                0x6
#define _LCDDATA3_S30C0_POSITION                            0x6
#define _LCDDATA3_S30C0_SIZE                                0x1
#define _LCDDATA3_S30C0_LENGTH                              0x1
#define _LCDDATA3_S30C0_MASK                                0x40
#define _LCDDATA3_S31C0_POSN                                0x7
#define _LCDDATA3_S31C0_POSITION                            0x7
#define _LCDDATA3_S31C0_SIZE                                0x1
#define _LCDDATA3_S31C0_LENGTH                              0x1
#define _LCDDATA3_S31C0_MASK                                0x80
#define _LCDDATA3_SEG24COM0_POSN                            0x0
#define _LCDDATA3_SEG24COM0_POSITION                        0x0
#define _LCDDATA3_SEG24COM0_SIZE                            0x1
#define _LCDDATA3_SEG24COM0_LENGTH                          0x1
#define _LCDDATA3_SEG24COM0_MASK                            0x1
#define _LCDDATA3_SEG25COM0_POSN                            0x1
#define _LCDDATA3_SEG25COM0_POSITION                        0x1
#define _LCDDATA3_SEG25COM0_SIZE                            0x1
#define _LCDDATA3_SEG25COM0_LENGTH                          0x1
#define _LCDDATA3_SEG25COM0_MASK                            0x2
#define _LCDDATA3_SEG26COM0_POSN                            0x2
#define _LCDDATA3_SEG26COM0_POSITION                        0x2
#define _LCDDATA3_SEG26COM0_SIZE                            0x1
#define _LCDDATA3_SEG26COM0_LENGTH                          0x1
#define _LCDDATA3_SEG26COM0_MASK                            0x4
#define _LCDDATA3_SEG27COM0_POSN                            0x3
#define _LCDDATA3_SEG27COM0_POSITION                        0x3
#define _LCDDATA3_SEG27COM0_SIZE                            0x1
#define _LCDDATA3_SEG27COM0_LENGTH                          0x1
#define _LCDDATA3_SEG27COM0_MASK                            0x8
#define _LCDDATA3_SEG28COM0_POSN                            0x4
#define _LCDDATA3_SEG28COM0_POSITION                        0x4
#define _LCDDATA3_SEG28COM0_SIZE                            0x1
#define _LCDDATA3_SEG28COM0_LENGTH                          0x1
#define _LCDDATA3_SEG28COM0_MASK                            0x10
#define _LCDDATA3_SEG29COM0_POSN                            0x5
#define _LCDDATA3_SEG29COM0_POSITION                        0x5
#define _LCDDATA3_SEG29COM0_SIZE                            0x1
#define _LCDDATA3_SEG29COM0_LENGTH                          0x1
#define _LCDDATA3_SEG29COM0_MASK                            0x20
#define _LCDDATA3_SEG30COM0_POSN                            0x6
#define _LCDDATA3_SEG30COM0_POSITION                        0x6
#define _LCDDATA3_SEG30COM0_SIZE                            0x1
#define _LCDDATA3_SEG30COM0_LENGTH                          0x1
#define _LCDDATA3_SEG30COM0_MASK                            0x40
#define _LCDDATA3_SEG31COM0_POSN                            0x7
#define _LCDDATA3_SEG31COM0_POSITION                        0x7
#define _LCDDATA3_SEG31COM0_SIZE                            0x1
#define _LCDDATA3_SEG31COM0_LENGTH                          0x1
#define _LCDDATA3_SEG31COM0_MASK                            0x80

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
extern volatile unsigned char           LCDDATA4            __at(0xFBF);
#ifndef _LIB_BUILD
asm("LCDDATA4 equ 0FBFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LCDDATA4               :8;
    };
    struct {
        unsigned S32C0                  :1;
        unsigned S33C0                  :1;
        unsigned S34C0                  :1;
        unsigned S35C0                  :1;
        unsigned S36C0                  :1;
        unsigned S37C0                  :1;
        unsigned S38C0                  :1;
        unsigned S39C0                  :1;
    };
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
} LCDDATA4bits_t;
extern volatile LCDDATA4bits_t LCDDATA4bits __at(0xFBF);
// bitfield macros
#define _LCDDATA4_LCDDATA4_POSN                             0x0
#define _LCDDATA4_LCDDATA4_POSITION                         0x0
#define _LCDDATA4_LCDDATA4_SIZE                             0x8
#define _LCDDATA4_LCDDATA4_LENGTH                           0x8
#define _LCDDATA4_LCDDATA4_MASK                             0xFF
#define _LCDDATA4_S32C0_POSN                                0x0
#define _LCDDATA4_S32C0_POSITION                            0x0
#define _LCDDATA4_S32C0_SIZE                                0x1
#define _LCDDATA4_S32C0_LENGTH                              0x1
#define _LCDDATA4_S32C0_MASK                                0x1
#define _LCDDATA4_S33C0_POSN                                0x1
#define _LCDDATA4_S33C0_POSITION                            0x1
#define _LCDDATA4_S33C0_SIZE                                0x1
#define _LCDDATA4_S33C0_LENGTH                              0x1
#define _LCDDATA4_S33C0_MASK                                0x2
#define _LCDDATA4_S34C0_POSN                                0x2
#define _LCDDATA4_S34C0_POSITION                            0x2
#define _LCDDATA4_S34C0_SIZE                                0x1
#define _LCDDATA4_S34C0_LENGTH                              0x1
#define _LCDDATA4_S34C0_MASK                                0x4
#define _LCDDATA4_S35C0_POSN                                0x3
#define _LCDDATA4_S35C0_POSITION                            0x3
#define _LCDDATA4_S35C0_SIZE                                0x1
#define _LCDDATA4_S35C0_LENGTH                              0x1
#define _LCDDATA4_S35C0_MASK                                0x8
#define _LCDDATA4_S36C0_POSN                                0x4
#define _LCDDATA4_S36C0_POSITION                            0x4
#define _LCDDATA4_S36C0_SIZE                                0x1
#define _LCDDATA4_S36C0_LENGTH                              0x1
#define _LCDDATA4_S36C0_MASK                                0x10
#define _LCDDATA4_S37C0_POSN                                0x5
#define _LCDDATA4_S37C0_POSITION                            0x5
#define _LCDDATA4_S37C0_SIZE                                0x1
#define _LCDDATA4_S37C0_LENGTH                              0x1
#define _LCDDATA4_S37C0_MASK                                0x20
#define _LCDDATA4_S38C0_POSN                                0x6
#define _LCDDATA4_S38C0_POSITION                            0x6
#define _LCDDATA4_S38C0_SIZE                                0x1
#define _LCDDATA4_S38C0_LENGTH                              0x1
#define _LCDDATA4_S38C0_MASK                                0x40
#define _LCDDATA4_S39C0_POSN                                0x7
#define _LCDDATA4_S39C0_POSITION                            0x7
#define _LCDDATA4_S39C0_SIZE                                0x1
#define _LCDDATA4_S39C0_LENGTH                              0x1
#define _LCDDATA4_S39C0_MASK                                0x80
#define _LCDDATA4_SEG32COM0_POSN                            0x0
#define _LCDDATA4_SEG32COM0_POSITION                        0x0
#define _LCDDATA4_SEG32COM0_SIZE                            0x1
#define _LCDDATA4_SEG32COM0_LENGTH                          0x1
#define _LCDDATA4_SEG32COM0_MASK                            0x1
#define _LCDDATA4_SEG33COM0_POSN                            0x1
#define _LCDDATA4_SEG33COM0_POSITION                        0x1
#define _LCDDATA4_SEG33COM0_SIZE                            0x1
#define _LCDDATA4_SEG33COM0_LENGTH                          0x1
#define _LCDDATA4_SEG33COM0_MASK                            0x2
#define _LCDDATA4_SEG34COM0_POSN                            0x2
#define _LCDDATA4_SEG34COM0_POSITION                        0x2
#define _LCDDATA4_SEG34COM0_SIZE                            0x1
#define _LCDDATA4_SEG34COM0_LENGTH                          0x1
#define _LCDDATA4_SEG34COM0_MASK                            0x4
#define _LCDDATA4_SEG35COM0_POSN                            0x3
#define _LCDDATA4_SEG35COM0_POSITION                        0x3
#define _LCDDATA4_SEG35COM0_SIZE                            0x1
#define _LCDDATA4_SEG35COM0_LENGTH                          0x1
#define _LCDDATA4_SEG35COM0_MASK                            0x8
#define _LCDDATA4_SEG36COM0_POSN                            0x4
#define _LCDDATA4_SEG36COM0_POSITION                        0x4
#define _LCDDATA4_SEG36COM0_SIZE                            0x1
#define _LCDDATA4_SEG36COM0_LENGTH                          0x1
#define _LCDDATA4_SEG36COM0_MASK                            0x10
#define _LCDDATA4_SEG37COM0_POSN                            0x5
#define _LCDDATA4_SEG37COM0_POSITION                        0x5
#define _LCDDATA4_SEG37COM0_SIZE                            0x1
#define _LCDDATA4_SEG37COM0_LENGTH                          0x1
#define _LCDDATA4_SEG37COM0_MASK                            0x20
#define _LCDDATA4_SEG38COM0_POSN                            0x6
#define _LCDDATA4_SEG38COM0_POSITION                        0x6
#define _LCDDATA4_SEG38COM0_SIZE                            0x1
#define _LCDDATA4_SEG38COM0_LENGTH                          0x1
#define _LCDDATA4_SEG38COM0_MASK                            0x40
#define _LCDDATA4_SEG39COM0_POSN                            0x7
#define _LCDDATA4_SEG39COM0_POSITION                        0x7
#define _LCDDATA4_SEG39COM0_SIZE                            0x1
#define _LCDDATA4_SEG39COM0_LENGTH                          0x1
#define _LCDDATA4_SEG39COM0_MASK                            0x80

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
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
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
#define _ADCON2_ACQT_SIZE                                   0x3
#define _ADCON2_ACQT_LENGTH                                 0x3
#define _ADCON2_ACQT_MASK                                   0x38
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0xFC1);
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
        unsigned                        :1;
        unsigned TRIGSEL                :1;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
        unsigned VCFG01                 :1;
        unsigned VCFG11                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
#define _ADCON1_TRIGSEL_POSN                                0x7
#define _ADCON1_TRIGSEL_POSITION                            0x7
#define _ADCON1_TRIGSEL_SIZE                                0x1
#define _ADCON1_TRIGSEL_LENGTH                              0x1
#define _ADCON1_TRIGSEL_MASK                                0x80
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
#define _ADCON1_VCFG11_POSN                                 0x5
#define _ADCON1_VCFG11_POSITION                             0x5
#define _ADCON1_VCFG11_SIZE                                 0x1
#define _ADCON1_VCFG11_LENGTH                               0x1
#define _ADCON1_VCFG11_MASK                                 0x20

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
        unsigned CHS                    :4;
        unsigned                        :1;
        unsigned ADCAL                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
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
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_ADCAL_POSN                                  0x7
#define _ADCON0_ADCAL_POSITION                              0x7
#define _ADCON0_ADCAL_SIZE                                  0x1
#define _ADCON0_ADCAL_LENGTH                                0x1
#define _ADCON0_ADCAL_MASK                                  0x80
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
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
#define _ADCON0_VCFG0_POSN                                  0x6
#define _ADCON0_VCFG0_POSITION                              0x6
#define _ADCON0_VCFG0_SIZE                                  0x1
#define _ADCON0_VCFG0_LENGTH                                0x1
#define _ADCON0_VCFG0_MASK                                  0x40
#define _ADCON0_VCFG1_POSN                                  0x7
#define _ADCON0_VCFG1_POSITION                              0x7
#define _ADCON0_VCFG1_SIZE                                  0x1
#define _ADCON0_VCFG1_LENGTH                                0x1
#define _ADCON0_VCFG1_MASK                                  0x80
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
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
extern volatile ADRESLbits_t ADRESLbits __at(0xFC3);
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0xFC4);
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
extern volatile ADRESHbits_t ADRESHbits __at(0xFC4);
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
extern volatile unsigned char           SSP1CON2            __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0FC5h");
#endif
// aliases
extern volatile unsigned char           SSPCON2             __at(0xFC5);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
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
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned SEN1                   :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
        unsigned PEN1                   :1;
        unsigned RCEN1                  :1;
        unsigned ADMSK41                :1;
        unsigned ADMSK51                :1;
    };
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0xFC5);
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
#define _SSP1CON2_ADMSK1_POSN                               0x1
#define _SSP1CON2_ADMSK1_POSITION                           0x1
#define _SSP1CON2_ADMSK1_SIZE                               0x1
#define _SSP1CON2_ADMSK1_LENGTH                             0x1
#define _SSP1CON2_ADMSK1_MASK                               0x2
#define _SSP1CON2_ADMSK2_POSN                               0x2
#define _SSP1CON2_ADMSK2_POSITION                           0x2
#define _SSP1CON2_ADMSK2_SIZE                               0x1
#define _SSP1CON2_ADMSK2_LENGTH                             0x1
#define _SSP1CON2_ADMSK2_MASK                               0x4
#define _SSP1CON2_ADMSK3_POSN                               0x3
#define _SSP1CON2_ADMSK3_POSITION                           0x3
#define _SSP1CON2_ADMSK3_SIZE                               0x1
#define _SSP1CON2_ADMSK3_LENGTH                             0x1
#define _SSP1CON2_ADMSK3_MASK                               0x8
#define _SSP1CON2_ADMSK4_POSN                               0x4
#define _SSP1CON2_ADMSK4_POSITION                           0x4
#define _SSP1CON2_ADMSK4_SIZE                               0x1
#define _SSP1CON2_ADMSK4_LENGTH                             0x1
#define _SSP1CON2_ADMSK4_MASK                               0x10
#define _SSP1CON2_ADMSK5_POSN                               0x5
#define _SSP1CON2_ADMSK5_POSITION                           0x5
#define _SSP1CON2_ADMSK5_SIZE                               0x1
#define _SSP1CON2_ADMSK5_LENGTH                             0x1
#define _SSP1CON2_ADMSK5_MASK                               0x20
#define _SSP1CON2_SEN1_POSN                                 0x0
#define _SSP1CON2_SEN1_POSITION                             0x0
#define _SSP1CON2_SEN1_SIZE                                 0x1
#define _SSP1CON2_SEN1_LENGTH                               0x1
#define _SSP1CON2_SEN1_MASK                                 0x1
#define _SSP1CON2_ADMSK11_POSN                              0x1
#define _SSP1CON2_ADMSK11_POSITION                          0x1
#define _SSP1CON2_ADMSK11_SIZE                              0x1
#define _SSP1CON2_ADMSK11_LENGTH                            0x1
#define _SSP1CON2_ADMSK11_MASK                              0x2
#define _SSP1CON2_ADMSK21_POSN                              0x2
#define _SSP1CON2_ADMSK21_POSITION                          0x2
#define _SSP1CON2_ADMSK21_SIZE                              0x1
#define _SSP1CON2_ADMSK21_LENGTH                            0x1
#define _SSP1CON2_ADMSK21_MASK                              0x4
#define _SSP1CON2_ADMSK31_POSN                              0x3
#define _SSP1CON2_ADMSK31_POSITION                          0x3
#define _SSP1CON2_ADMSK31_SIZE                              0x1
#define _SSP1CON2_ADMSK31_LENGTH                            0x1
#define _SSP1CON2_ADMSK31_MASK                              0x8
#define _SSP1CON2_ACKEN1_POSN                               0x4
#define _SSP1CON2_ACKEN1_POSITION                           0x4
#define _SSP1CON2_ACKEN1_SIZE                               0x1
#define _SSP1CON2_ACKEN1_LENGTH                             0x1
#define _SSP1CON2_ACKEN1_MASK                               0x10
#define _SSP1CON2_ACKDT1_POSN                               0x5
#define _SSP1CON2_ACKDT1_POSITION                           0x5
#define _SSP1CON2_ACKDT1_SIZE                               0x1
#define _SSP1CON2_ACKDT1_LENGTH                             0x1
#define _SSP1CON2_ACKDT1_MASK                               0x20
#define _SSP1CON2_ACKSTAT1_POSN                             0x6
#define _SSP1CON2_ACKSTAT1_POSITION                         0x6
#define _SSP1CON2_ACKSTAT1_SIZE                             0x1
#define _SSP1CON2_ACKSTAT1_LENGTH                           0x1
#define _SSP1CON2_ACKSTAT1_MASK                             0x40
#define _SSP1CON2_GCEN1_POSN                                0x7
#define _SSP1CON2_GCEN1_POSITION                            0x7
#define _SSP1CON2_GCEN1_SIZE                                0x1
#define _SSP1CON2_GCEN1_LENGTH                              0x1
#define _SSP1CON2_GCEN1_MASK                                0x80
#define _SSP1CON2_RSEN1_POSN                                0x1
#define _SSP1CON2_RSEN1_POSITION                            0x1
#define _SSP1CON2_RSEN1_SIZE                                0x1
#define _SSP1CON2_RSEN1_LENGTH                              0x1
#define _SSP1CON2_RSEN1_MASK                                0x2
#define _SSP1CON2_PEN1_POSN                                 0x2
#define _SSP1CON2_PEN1_POSITION                             0x2
#define _SSP1CON2_PEN1_SIZE                                 0x1
#define _SSP1CON2_PEN1_LENGTH                               0x1
#define _SSP1CON2_PEN1_MASK                                 0x4
#define _SSP1CON2_RCEN1_POSN                                0x3
#define _SSP1CON2_RCEN1_POSITION                            0x3
#define _SSP1CON2_RCEN1_SIZE                                0x1
#define _SSP1CON2_RCEN1_LENGTH                              0x1
#define _SSP1CON2_RCEN1_MASK                                0x8
#define _SSP1CON2_ADMSK41_POSN                              0x4
#define _SSP1CON2_ADMSK41_POSITION                          0x4
#define _SSP1CON2_ADMSK41_SIZE                              0x1
#define _SSP1CON2_ADMSK41_LENGTH                            0x1
#define _SSP1CON2_ADMSK41_MASK                              0x10
#define _SSP1CON2_ADMSK51_POSN                              0x5
#define _SSP1CON2_ADMSK51_POSITION                          0x5
#define _SSP1CON2_ADMSK51_SIZE                              0x1
#define _SSP1CON2_ADMSK51_LENGTH                            0x1
#define _SSP1CON2_ADMSK51_MASK                              0x20
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
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned SEN1                   :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
        unsigned PEN1                   :1;
        unsigned RCEN1                  :1;
        unsigned ADMSK41                :1;
        unsigned ADMSK51                :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __at(0xFC5);
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
#define _SSPCON2_ADMSK1_POSN                                0x1
#define _SSPCON2_ADMSK1_POSITION                            0x1
#define _SSPCON2_ADMSK1_SIZE                                0x1
#define _SSPCON2_ADMSK1_LENGTH                              0x1
#define _SSPCON2_ADMSK1_MASK                                0x2
#define _SSPCON2_ADMSK2_POSN                                0x2
#define _SSPCON2_ADMSK2_POSITION                            0x2
#define _SSPCON2_ADMSK2_SIZE                                0x1
#define _SSPCON2_ADMSK2_LENGTH                              0x1
#define _SSPCON2_ADMSK2_MASK                                0x4
#define _SSPCON2_ADMSK3_POSN                                0x3
#define _SSPCON2_ADMSK3_POSITION                            0x3
#define _SSPCON2_ADMSK3_SIZE                                0x1
#define _SSPCON2_ADMSK3_LENGTH                              0x1
#define _SSPCON2_ADMSK3_MASK                                0x8
#define _SSPCON2_ADMSK4_POSN                                0x4
#define _SSPCON2_ADMSK4_POSITION                            0x4
#define _SSPCON2_ADMSK4_SIZE                                0x1
#define _SSPCON2_ADMSK4_LENGTH                              0x1
#define _SSPCON2_ADMSK4_MASK                                0x10
#define _SSPCON2_ADMSK5_POSN                                0x5
#define _SSPCON2_ADMSK5_POSITION                            0x5
#define _SSPCON2_ADMSK5_SIZE                                0x1
#define _SSPCON2_ADMSK5_LENGTH                              0x1
#define _SSPCON2_ADMSK5_MASK                                0x20
#define _SSPCON2_SEN1_POSN                                  0x0
#define _SSPCON2_SEN1_POSITION                              0x0
#define _SSPCON2_SEN1_SIZE                                  0x1
#define _SSPCON2_SEN1_LENGTH                                0x1
#define _SSPCON2_SEN1_MASK                                  0x1
#define _SSPCON2_ADMSK11_POSN                               0x1
#define _SSPCON2_ADMSK11_POSITION                           0x1
#define _SSPCON2_ADMSK11_SIZE                               0x1
#define _SSPCON2_ADMSK11_LENGTH                             0x1
#define _SSPCON2_ADMSK11_MASK                               0x2
#define _SSPCON2_ADMSK21_POSN                               0x2
#define _SSPCON2_ADMSK21_POSITION                           0x2
#define _SSPCON2_ADMSK21_SIZE                               0x1
#define _SSPCON2_ADMSK21_LENGTH                             0x1
#define _SSPCON2_ADMSK21_MASK                               0x4
#define _SSPCON2_ADMSK31_POSN                               0x3
#define _SSPCON2_ADMSK31_POSITION                           0x3
#define _SSPCON2_ADMSK31_SIZE                               0x1
#define _SSPCON2_ADMSK31_LENGTH                             0x1
#define _SSPCON2_ADMSK31_MASK                               0x8
#define _SSPCON2_ACKEN1_POSN                                0x4
#define _SSPCON2_ACKEN1_POSITION                            0x4
#define _SSPCON2_ACKEN1_SIZE                                0x1
#define _SSPCON2_ACKEN1_LENGTH                              0x1
#define _SSPCON2_ACKEN1_MASK                                0x10
#define _SSPCON2_ACKDT1_POSN                                0x5
#define _SSPCON2_ACKDT1_POSITION                            0x5
#define _SSPCON2_ACKDT1_SIZE                                0x1
#define _SSPCON2_ACKDT1_LENGTH                              0x1
#define _SSPCON2_ACKDT1_MASK                                0x20
#define _SSPCON2_ACKSTAT1_POSN                              0x6
#define _SSPCON2_ACKSTAT1_POSITION                          0x6
#define _SSPCON2_ACKSTAT1_SIZE                              0x1
#define _SSPCON2_ACKSTAT1_LENGTH                            0x1
#define _SSPCON2_ACKSTAT1_MASK                              0x40
#define _SSPCON2_GCEN1_POSN                                 0x7
#define _SSPCON2_GCEN1_POSITION                             0x7
#define _SSPCON2_GCEN1_SIZE                                 0x1
#define _SSPCON2_GCEN1_LENGTH                               0x1
#define _SSPCON2_GCEN1_MASK                                 0x80
#define _SSPCON2_RSEN1_POSN                                 0x1
#define _SSPCON2_RSEN1_POSITION                             0x1
#define _SSPCON2_RSEN1_SIZE                                 0x1
#define _SSPCON2_RSEN1_LENGTH                               0x1
#define _SSPCON2_RSEN1_MASK                                 0x2
#define _SSPCON2_PEN1_POSN                                  0x2
#define _SSPCON2_PEN1_POSITION                              0x2
#define _SSPCON2_PEN1_SIZE                                  0x1
#define _SSPCON2_PEN1_LENGTH                                0x1
#define _SSPCON2_PEN1_MASK                                  0x4
#define _SSPCON2_RCEN1_POSN                                 0x3
#define _SSPCON2_RCEN1_POSITION                             0x3
#define _SSPCON2_RCEN1_SIZE                                 0x1
#define _SSPCON2_RCEN1_LENGTH                               0x1
#define _SSPCON2_RCEN1_MASK                                 0x8
#define _SSPCON2_ADMSK41_POSN                               0x4
#define _SSPCON2_ADMSK41_POSITION                           0x4
#define _SSPCON2_ADMSK41_SIZE                               0x1
#define _SSPCON2_ADMSK41_LENGTH                             0x1
#define _SSPCON2_ADMSK41_MASK                               0x10
#define _SSPCON2_ADMSK51_POSN                               0x5
#define _SSPCON2_ADMSK51_POSITION                           0x5
#define _SSPCON2_ADMSK51_SIZE                               0x1
#define _SSPCON2_ADMSK51_LENGTH                             0x1
#define _SSPCON2_ADMSK51_MASK                               0x20

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
extern volatile unsigned char           SSP1CON1            __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0FC6h");
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
    struct {
        unsigned SSPM01                 :1;
        unsigned SSPM11                 :1;
        unsigned SSPM21                 :1;
        unsigned SSPM31                 :1;
        unsigned CKP1                   :1;
        unsigned SSPEN1                 :1;
        unsigned SSPOV1                 :1;
        unsigned WCOL1                  :1;
    };
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0xFC6);
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
#define _SSP1CON1_SSPM01_POSN                               0x0
#define _SSP1CON1_SSPM01_POSITION                           0x0
#define _SSP1CON1_SSPM01_SIZE                               0x1
#define _SSP1CON1_SSPM01_LENGTH                             0x1
#define _SSP1CON1_SSPM01_MASK                               0x1
#define _SSP1CON1_SSPM11_POSN                               0x1
#define _SSP1CON1_SSPM11_POSITION                           0x1
#define _SSP1CON1_SSPM11_SIZE                               0x1
#define _SSP1CON1_SSPM11_LENGTH                             0x1
#define _SSP1CON1_SSPM11_MASK                               0x2
#define _SSP1CON1_SSPM21_POSN                               0x2
#define _SSP1CON1_SSPM21_POSITION                           0x2
#define _SSP1CON1_SSPM21_SIZE                               0x1
#define _SSP1CON1_SSPM21_LENGTH                             0x1
#define _SSP1CON1_SSPM21_MASK                               0x4
#define _SSP1CON1_SSPM31_POSN                               0x3
#define _SSP1CON1_SSPM31_POSITION                           0x3
#define _SSP1CON1_SSPM31_SIZE                               0x1
#define _SSP1CON1_SSPM31_LENGTH                             0x1
#define _SSP1CON1_SSPM31_MASK                               0x8
#define _SSP1CON1_CKP1_POSN                                 0x4
#define _SSP1CON1_CKP1_POSITION                             0x4
#define _SSP1CON1_CKP1_SIZE                                 0x1
#define _SSP1CON1_CKP1_LENGTH                               0x1
#define _SSP1CON1_CKP1_MASK                                 0x10
#define _SSP1CON1_SSPEN1_POSN                               0x5
#define _SSP1CON1_SSPEN1_POSITION                           0x5
#define _SSP1CON1_SSPEN1_SIZE                               0x1
#define _SSP1CON1_SSPEN1_LENGTH                             0x1
#define _SSP1CON1_SSPEN1_MASK                               0x20
#define _SSP1CON1_SSPOV1_POSN                               0x6
#define _SSP1CON1_SSPOV1_POSITION                           0x6
#define _SSP1CON1_SSPOV1_SIZE                               0x1
#define _SSP1CON1_SSPOV1_LENGTH                             0x1
#define _SSP1CON1_SSPOV1_MASK                               0x40
#define _SSP1CON1_WCOL1_POSN                                0x7
#define _SSP1CON1_WCOL1_POSITION                            0x7
#define _SSP1CON1_WCOL1_SIZE                                0x1
#define _SSP1CON1_WCOL1_LENGTH                              0x1
#define _SSP1CON1_WCOL1_MASK                                0x80
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
    struct {
        unsigned SSPM01                 :1;
        unsigned SSPM11                 :1;
        unsigned SSPM21                 :1;
        unsigned SSPM31                 :1;
        unsigned CKP1                   :1;
        unsigned SSPEN1                 :1;
        unsigned SSPOV1                 :1;
        unsigned WCOL1                  :1;
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
#define _SSPCON1_SSPM01_POSN                                0x0
#define _SSPCON1_SSPM01_POSITION                            0x0
#define _SSPCON1_SSPM01_SIZE                                0x1
#define _SSPCON1_SSPM01_LENGTH                              0x1
#define _SSPCON1_SSPM01_MASK                                0x1
#define _SSPCON1_SSPM11_POSN                                0x1
#define _SSPCON1_SSPM11_POSITION                            0x1
#define _SSPCON1_SSPM11_SIZE                                0x1
#define _SSPCON1_SSPM11_LENGTH                              0x1
#define _SSPCON1_SSPM11_MASK                                0x2
#define _SSPCON1_SSPM21_POSN                                0x2
#define _SSPCON1_SSPM21_POSITION                            0x2
#define _SSPCON1_SSPM21_SIZE                                0x1
#define _SSPCON1_SSPM21_LENGTH                              0x1
#define _SSPCON1_SSPM21_MASK                                0x4
#define _SSPCON1_SSPM31_POSN                                0x3
#define _SSPCON1_SSPM31_POSITION                            0x3
#define _SSPCON1_SSPM31_SIZE                                0x1
#define _SSPCON1_SSPM31_LENGTH                              0x1
#define _SSPCON1_SSPM31_MASK                                0x8
#define _SSPCON1_CKP1_POSN                                  0x4
#define _SSPCON1_CKP1_POSITION                              0x4
#define _SSPCON1_CKP1_SIZE                                  0x1
#define _SSPCON1_CKP1_LENGTH                                0x1
#define _SSPCON1_CKP1_MASK                                  0x10
#define _SSPCON1_SSPEN1_POSN                                0x5
#define _SSPCON1_SSPEN1_POSITION                            0x5
#define _SSPCON1_SSPEN1_SIZE                                0x1
#define _SSPCON1_SSPEN1_LENGTH                              0x1
#define _SSPCON1_SSPEN1_MASK                                0x20
#define _SSPCON1_SSPOV1_POSN                                0x6
#define _SSPCON1_SSPOV1_POSITION                            0x6
#define _SSPCON1_SSPOV1_SIZE                                0x1
#define _SSPCON1_SSPOV1_LENGTH                              0x1
#define _SSPCON1_SSPOV1_MASK                                0x40
#define _SSPCON1_WCOL1_POSN                                 0x7
#define _SSPCON1_WCOL1_POSITION                             0x7
#define _SSPCON1_WCOL1_SIZE                                 0x1
#define _SSPCON1_WCOL1_LENGTH                               0x1
#define _SSPCON1_WCOL1_MASK                                 0x80

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
extern volatile unsigned char           SSP1STAT            __at(0xFC7);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0FC7h");
#endif
// aliases
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
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
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
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0xFC7);
// bitfield macros
#define _SSP1STAT_R_NOT_W_POSN                              0x2
#define _SSP1STAT_R_NOT_W_POSITION                          0x2
#define _SSP1STAT_R_NOT_W_SIZE                              0x1
#define _SSP1STAT_R_NOT_W_LENGTH                            0x1
#define _SSP1STAT_R_NOT_W_MASK                              0x4
#define _SSP1STAT_D_NOT_A_POSN                              0x5
#define _SSP1STAT_D_NOT_A_POSITION                          0x5
#define _SSP1STAT_D_NOT_A_SIZE                              0x1
#define _SSP1STAT_D_NOT_A_LENGTH                            0x1
#define _SSP1STAT_D_NOT_A_MASK                              0x20
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
#define _SSP1STAT_R_POSN                                    0x2
#define _SSP1STAT_R_POSITION                                0x2
#define _SSP1STAT_R_SIZE                                    0x1
#define _SSP1STAT_R_LENGTH                                  0x1
#define _SSP1STAT_R_MASK                                    0x4
#define _SSP1STAT_D_POSN                                    0x5
#define _SSP1STAT_D_POSITION                                0x5
#define _SSP1STAT_D_SIZE                                    0x1
#define _SSP1STAT_D_LENGTH                                  0x1
#define _SSP1STAT_D_MASK                                    0x20
#define _SSP1STAT_R_W_POSN                                  0x2
#define _SSP1STAT_R_W_POSITION                              0x2
#define _SSP1STAT_R_W_SIZE                                  0x1
#define _SSP1STAT_R_W_LENGTH                                0x1
#define _SSP1STAT_R_W_MASK                                  0x4
#define _SSP1STAT_D_A_POSN                                  0x5
#define _SSP1STAT_D_A_POSITION                              0x5
#define _SSP1STAT_D_A_SIZE                                  0x1
#define _SSP1STAT_D_A_LENGTH                                0x1
#define _SSP1STAT_D_A_MASK                                  0x20
#define _SSP1STAT_nW_POSN                                   0x2
#define _SSP1STAT_nW_POSITION                               0x2
#define _SSP1STAT_nW_SIZE                                   0x1
#define _SSP1STAT_nW_LENGTH                                 0x1
#define _SSP1STAT_nW_MASK                                   0x4
#define _SSP1STAT_nA_POSN                                   0x5
#define _SSP1STAT_nA_POSITION                               0x5
#define _SSP1STAT_nA_SIZE                                   0x1
#define _SSP1STAT_nA_LENGTH                                 0x1
#define _SSP1STAT_nA_MASK                                   0x20
#define _SSP1STAT_NOT_WRITE_POSN                            0x2
#define _SSP1STAT_NOT_WRITE_POSITION                        0x2
#define _SSP1STAT_NOT_WRITE_SIZE                            0x1
#define _SSP1STAT_NOT_WRITE_LENGTH                          0x1
#define _SSP1STAT_NOT_WRITE_MASK                            0x4
#define _SSP1STAT_NOT_ADDRESS_POSN                          0x5
#define _SSP1STAT_NOT_ADDRESS_POSITION                      0x5
#define _SSP1STAT_NOT_ADDRESS_SIZE                          0x1
#define _SSP1STAT_NOT_ADDRESS_LENGTH                        0x1
#define _SSP1STAT_NOT_ADDRESS_MASK                          0x20
#define _SSP1STAT_nWRITE_POSN                               0x2
#define _SSP1STAT_nWRITE_POSITION                           0x2
#define _SSP1STAT_nWRITE_SIZE                               0x1
#define _SSP1STAT_nWRITE_LENGTH                             0x1
#define _SSP1STAT_nWRITE_MASK                               0x4
#define _SSP1STAT_nADDRESS_POSN                             0x5
#define _SSP1STAT_nADDRESS_POSITION                         0x5
#define _SSP1STAT_nADDRESS_SIZE                             0x1
#define _SSP1STAT_nADDRESS_LENGTH                           0x1
#define _SSP1STAT_nADDRESS_MASK                             0x20
#define _SSP1STAT_READ_WRITE_POSN                           0x2
#define _SSP1STAT_READ_WRITE_POSITION                       0x2
#define _SSP1STAT_READ_WRITE_SIZE                           0x1
#define _SSP1STAT_READ_WRITE_LENGTH                         0x1
#define _SSP1STAT_READ_WRITE_MASK                           0x4
#define _SSP1STAT_DATA_ADDRESS_POSN                         0x5
#define _SSP1STAT_DATA_ADDRESS_POSITION                     0x5
#define _SSP1STAT_DATA_ADDRESS_SIZE                         0x1
#define _SSP1STAT_DATA_ADDRESS_LENGTH                       0x1
#define _SSP1STAT_DATA_ADDRESS_MASK                         0x20
#define _SSP1STAT_I2C_READ_POSN                             0x2
#define _SSP1STAT_I2C_READ_POSITION                         0x2
#define _SSP1STAT_I2C_READ_SIZE                             0x1
#define _SSP1STAT_I2C_READ_LENGTH                           0x1
#define _SSP1STAT_I2C_READ_MASK                             0x4
#define _SSP1STAT_I2C_START_POSN                            0x3
#define _SSP1STAT_I2C_START_POSITION                        0x3
#define _SSP1STAT_I2C_START_SIZE                            0x1
#define _SSP1STAT_I2C_START_LENGTH                          0x1
#define _SSP1STAT_I2C_START_MASK                            0x8
#define _SSP1STAT_I2C_STOP_POSN                             0x4
#define _SSP1STAT_I2C_STOP_POSITION                         0x4
#define _SSP1STAT_I2C_STOP_SIZE                             0x1
#define _SSP1STAT_I2C_STOP_LENGTH                           0x1
#define _SSP1STAT_I2C_STOP_MASK                             0x10
#define _SSP1STAT_I2C_DAT_POSN                              0x5
#define _SSP1STAT_I2C_DAT_POSITION                          0x5
#define _SSP1STAT_I2C_DAT_SIZE                              0x1
#define _SSP1STAT_I2C_DAT_LENGTH                            0x1
#define _SSP1STAT_I2C_DAT_MASK                              0x20
#define _SSP1STAT_BF1_POSN                                  0x0
#define _SSP1STAT_BF1_POSITION                              0x0
#define _SSP1STAT_BF1_SIZE                                  0x1
#define _SSP1STAT_BF1_LENGTH                                0x1
#define _SSP1STAT_BF1_MASK                                  0x1
#define _SSP1STAT_UA1_POSN                                  0x1
#define _SSP1STAT_UA1_POSITION                              0x1
#define _SSP1STAT_UA1_SIZE                                  0x1
#define _SSP1STAT_UA1_LENGTH                                0x1
#define _SSP1STAT_UA1_MASK                                  0x2
#define _SSP1STAT_RW_POSN                                   0x2
#define _SSP1STAT_RW_POSITION                               0x2
#define _SSP1STAT_RW_SIZE                                   0x1
#define _SSP1STAT_RW_LENGTH                                 0x1
#define _SSP1STAT_RW_MASK                                   0x4
#define _SSP1STAT_START_POSN                                0x3
#define _SSP1STAT_START_POSITION                            0x3
#define _SSP1STAT_START_SIZE                                0x1
#define _SSP1STAT_START_LENGTH                              0x1
#define _SSP1STAT_START_MASK                                0x8
#define _SSP1STAT_STOP_POSN                                 0x4
#define _SSP1STAT_STOP_POSITION                             0x4
#define _SSP1STAT_STOP_SIZE                                 0x1
#define _SSP1STAT_STOP_LENGTH                               0x1
#define _SSP1STAT_STOP_MASK                                 0x10
#define _SSP1STAT_DA_POSN                                   0x5
#define _SSP1STAT_DA_POSITION                               0x5
#define _SSP1STAT_DA_SIZE                                   0x1
#define _SSP1STAT_DA_LENGTH                                 0x1
#define _SSP1STAT_DA_MASK                                   0x20
#define _SSP1STAT_CKE1_POSN                                 0x6
#define _SSP1STAT_CKE1_POSITION                             0x6
#define _SSP1STAT_CKE1_SIZE                                 0x1
#define _SSP1STAT_CKE1_LENGTH                               0x1
#define _SSP1STAT_CKE1_MASK                                 0x40
#define _SSP1STAT_SMP1_POSN                                 0x7
#define _SSP1STAT_SMP1_POSITION                             0x7
#define _SSP1STAT_SMP1_SIZE                                 0x1
#define _SSP1STAT_SMP1_LENGTH                               0x1
#define _SSP1STAT_SMP1_MASK                                 0x80
#define _SSP1STAT_RW1_POSN                                  0x2
#define _SSP1STAT_RW1_POSITION                              0x2
#define _SSP1STAT_RW1_SIZE                                  0x1
#define _SSP1STAT_RW1_LENGTH                                0x1
#define _SSP1STAT_RW1_MASK                                  0x4
#define _SSP1STAT_START1_POSN                               0x3
#define _SSP1STAT_START1_POSITION                           0x3
#define _SSP1STAT_START1_SIZE                               0x1
#define _SSP1STAT_START1_LENGTH                             0x1
#define _SSP1STAT_START1_MASK                               0x8
#define _SSP1STAT_STOP1_POSN                                0x4
#define _SSP1STAT_STOP1_POSITION                            0x4
#define _SSP1STAT_STOP1_SIZE                                0x1
#define _SSP1STAT_STOP1_LENGTH                              0x1
#define _SSP1STAT_STOP1_MASK                                0x10
#define _SSP1STAT_DA1_POSN                                  0x5
#define _SSP1STAT_DA1_POSITION                              0x5
#define _SSP1STAT_DA1_SIZE                                  0x1
#define _SSP1STAT_DA1_LENGTH                                0x1
#define _SSP1STAT_DA1_MASK                                  0x20
#define _SSP1STAT_NOT_W_POSN                                0x2
#define _SSP1STAT_NOT_W_POSITION                            0x2
#define _SSP1STAT_NOT_W_SIZE                                0x1
#define _SSP1STAT_NOT_W_LENGTH                              0x1
#define _SSP1STAT_NOT_W_MASK                                0x4
#define _SSP1STAT_NOT_A_POSN                                0x5
#define _SSP1STAT_NOT_A_POSITION                            0x5
#define _SSP1STAT_NOT_A_SIZE                                0x1
#define _SSP1STAT_NOT_A_LENGTH                              0x1
#define _SSP1STAT_NOT_A_MASK                                0x20
// alias bitfield definitions
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
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
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
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned RW                     :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
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
#define _SSPSTAT_I2C_DAT_POSN                               0x5
#define _SSPSTAT_I2C_DAT_POSITION                           0x5
#define _SSPSTAT_I2C_DAT_SIZE                               0x1
#define _SSPSTAT_I2C_DAT_LENGTH                             0x1
#define _SSPSTAT_I2C_DAT_MASK                               0x20
#define _SSPSTAT_BF1_POSN                                   0x0
#define _SSPSTAT_BF1_POSITION                               0x0
#define _SSPSTAT_BF1_SIZE                                   0x1
#define _SSPSTAT_BF1_LENGTH                                 0x1
#define _SSPSTAT_BF1_MASK                                   0x1
#define _SSPSTAT_UA1_POSN                                   0x1
#define _SSPSTAT_UA1_POSITION                               0x1
#define _SSPSTAT_UA1_SIZE                                   0x1
#define _SSPSTAT_UA1_LENGTH                                 0x1
#define _SSPSTAT_UA1_MASK                                   0x2
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
#define _SSPSTAT_CKE1_POSN                                  0x6
#define _SSPSTAT_CKE1_POSITION                              0x6
#define _SSPSTAT_CKE1_SIZE                                  0x1
#define _SSPSTAT_CKE1_LENGTH                                0x1
#define _SSPSTAT_CKE1_MASK                                  0x40
#define _SSPSTAT_SMP1_POSN                                  0x7
#define _SSPSTAT_SMP1_POSITION                              0x7
#define _SSPSTAT_SMP1_SIZE                                  0x1
#define _SSPSTAT_SMP1_LENGTH                                0x1
#define _SSPSTAT_SMP1_MASK                                  0x80
#define _SSPSTAT_RW1_POSN                                   0x2
#define _SSPSTAT_RW1_POSITION                               0x2
#define _SSPSTAT_RW1_SIZE                                   0x1
#define _SSPSTAT_RW1_LENGTH                                 0x1
#define _SSPSTAT_RW1_MASK                                   0x4
#define _SSPSTAT_START1_POSN                                0x3
#define _SSPSTAT_START1_POSITION                            0x3
#define _SSPSTAT_START1_SIZE                                0x1
#define _SSPSTAT_START1_LENGTH                              0x1
#define _SSPSTAT_START1_MASK                                0x8
#define _SSPSTAT_STOP1_POSN                                 0x4
#define _SSPSTAT_STOP1_POSITION                             0x4
#define _SSPSTAT_STOP1_SIZE                                 0x1
#define _SSPSTAT_STOP1_LENGTH                               0x1
#define _SSPSTAT_STOP1_MASK                                 0x10
#define _SSPSTAT_DA1_POSN                                   0x5
#define _SSPSTAT_DA1_POSITION                               0x5
#define _SSPSTAT_DA1_SIZE                                   0x1
#define _SSPSTAT_DA1_LENGTH                                 0x1
#define _SSPSTAT_DA1_MASK                                   0x20
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

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
extern volatile unsigned char           SSP1ADD             __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0FC8h");
#endif
// aliases
extern volatile unsigned char           SSPADD              __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
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
    struct {
        unsigned MSK01                  :1;
        unsigned MSK11                  :1;
        unsigned MSK21                  :1;
        unsigned MSK31                  :1;
        unsigned MSK41                  :1;
        unsigned MSK51                  :1;
        unsigned MSK61                  :1;
        unsigned MSK71                  :1;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0xFC8);
// bitfield macros
#define _SSP1ADD_SSPADD_POSN                                0x0
#define _SSP1ADD_SSPADD_POSITION                            0x0
#define _SSP1ADD_SSPADD_SIZE                                0x8
#define _SSP1ADD_SSPADD_LENGTH                              0x8
#define _SSP1ADD_SSPADD_MASK                                0xFF
#define _SSP1ADD_MSK0_POSN                                  0x0
#define _SSP1ADD_MSK0_POSITION                              0x0
#define _SSP1ADD_MSK0_SIZE                                  0x1
#define _SSP1ADD_MSK0_LENGTH                                0x1
#define _SSP1ADD_MSK0_MASK                                  0x1
#define _SSP1ADD_MSK1_POSN                                  0x1
#define _SSP1ADD_MSK1_POSITION                              0x1
#define _SSP1ADD_MSK1_SIZE                                  0x1
#define _SSP1ADD_MSK1_LENGTH                                0x1
#define _SSP1ADD_MSK1_MASK                                  0x2
#define _SSP1ADD_MSK2_POSN                                  0x2
#define _SSP1ADD_MSK2_POSITION                              0x2
#define _SSP1ADD_MSK2_SIZE                                  0x1
#define _SSP1ADD_MSK2_LENGTH                                0x1
#define _SSP1ADD_MSK2_MASK                                  0x4
#define _SSP1ADD_MSK3_POSN                                  0x3
#define _SSP1ADD_MSK3_POSITION                              0x3
#define _SSP1ADD_MSK3_SIZE                                  0x1
#define _SSP1ADD_MSK3_LENGTH                                0x1
#define _SSP1ADD_MSK3_MASK                                  0x8
#define _SSP1ADD_MSK4_POSN                                  0x4
#define _SSP1ADD_MSK4_POSITION                              0x4
#define _SSP1ADD_MSK4_SIZE                                  0x1
#define _SSP1ADD_MSK4_LENGTH                                0x1
#define _SSP1ADD_MSK4_MASK                                  0x10
#define _SSP1ADD_MSK5_POSN                                  0x5
#define _SSP1ADD_MSK5_POSITION                              0x5
#define _SSP1ADD_MSK5_SIZE                                  0x1
#define _SSP1ADD_MSK5_LENGTH                                0x1
#define _SSP1ADD_MSK5_MASK                                  0x20
#define _SSP1ADD_MSK6_POSN                                  0x6
#define _SSP1ADD_MSK6_POSITION                              0x6
#define _SSP1ADD_MSK6_SIZE                                  0x1
#define _SSP1ADD_MSK6_LENGTH                                0x1
#define _SSP1ADD_MSK6_MASK                                  0x40
#define _SSP1ADD_MSK7_POSN                                  0x7
#define _SSP1ADD_MSK7_POSITION                              0x7
#define _SSP1ADD_MSK7_SIZE                                  0x1
#define _SSP1ADD_MSK7_LENGTH                                0x1
#define _SSP1ADD_MSK7_MASK                                  0x80
#define _SSP1ADD_MSK01_POSN                                 0x0
#define _SSP1ADD_MSK01_POSITION                             0x0
#define _SSP1ADD_MSK01_SIZE                                 0x1
#define _SSP1ADD_MSK01_LENGTH                               0x1
#define _SSP1ADD_MSK01_MASK                                 0x1
#define _SSP1ADD_MSK11_POSN                                 0x1
#define _SSP1ADD_MSK11_POSITION                             0x1
#define _SSP1ADD_MSK11_SIZE                                 0x1
#define _SSP1ADD_MSK11_LENGTH                               0x1
#define _SSP1ADD_MSK11_MASK                                 0x2
#define _SSP1ADD_MSK21_POSN                                 0x2
#define _SSP1ADD_MSK21_POSITION                             0x2
#define _SSP1ADD_MSK21_SIZE                                 0x1
#define _SSP1ADD_MSK21_LENGTH                               0x1
#define _SSP1ADD_MSK21_MASK                                 0x4
#define _SSP1ADD_MSK31_POSN                                 0x3
#define _SSP1ADD_MSK31_POSITION                             0x3
#define _SSP1ADD_MSK31_SIZE                                 0x1
#define _SSP1ADD_MSK31_LENGTH                               0x1
#define _SSP1ADD_MSK31_MASK                                 0x8
#define _SSP1ADD_MSK41_POSN                                 0x4
#define _SSP1ADD_MSK41_POSITION                             0x4
#define _SSP1ADD_MSK41_SIZE                                 0x1
#define _SSP1ADD_MSK41_LENGTH                               0x1
#define _SSP1ADD_MSK41_MASK                                 0x10
#define _SSP1ADD_MSK51_POSN                                 0x5
#define _SSP1ADD_MSK51_POSITION                             0x5
#define _SSP1ADD_MSK51_SIZE                                 0x1
#define _SSP1ADD_MSK51_LENGTH                               0x1
#define _SSP1ADD_MSK51_MASK                                 0x20
#define _SSP1ADD_MSK61_POSN                                 0x6
#define _SSP1ADD_MSK61_POSITION                             0x6
#define _SSP1ADD_MSK61_SIZE                                 0x1
#define _SSP1ADD_MSK61_LENGTH                               0x1
#define _SSP1ADD_MSK61_MASK                                 0x40
#define _SSP1ADD_MSK71_POSN                                 0x7
#define _SSP1ADD_MSK71_POSITION                             0x7
#define _SSP1ADD_MSK71_SIZE                                 0x1
#define _SSP1ADD_MSK71_LENGTH                               0x1
#define _SSP1ADD_MSK71_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
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
    struct {
        unsigned MSK01                  :1;
        unsigned MSK11                  :1;
        unsigned MSK21                  :1;
        unsigned MSK31                  :1;
        unsigned MSK41                  :1;
        unsigned MSK51                  :1;
        unsigned MSK61                  :1;
        unsigned MSK71                  :1;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0xFC8);
// bitfield macros
#define _SSPADD_SSPADD_POSN                                 0x0
#define _SSPADD_SSPADD_POSITION                             0x0
#define _SSPADD_SSPADD_SIZE                                 0x8
#define _SSPADD_SSPADD_LENGTH                               0x8
#define _SSPADD_SSPADD_MASK                                 0xFF
#define _SSPADD_MSK0_POSN                                   0x0
#define _SSPADD_MSK0_POSITION                               0x0
#define _SSPADD_MSK0_SIZE                                   0x1
#define _SSPADD_MSK0_LENGTH                                 0x1
#define _SSPADD_MSK0_MASK                                   0x1
#define _SSPADD_MSK1_POSN                                   0x1
#define _SSPADD_MSK1_POSITION                               0x1
#define _SSPADD_MSK1_SIZE                                   0x1
#define _SSPADD_MSK1_LENGTH                                 0x1
#define _SSPADD_MSK1_MASK                                   0x2
#define _SSPADD_MSK2_POSN                                   0x2
#define _SSPADD_MSK2_POSITION                               0x2
#define _SSPADD_MSK2_SIZE                                   0x1
#define _SSPADD_MSK2_LENGTH                                 0x1
#define _SSPADD_MSK2_MASK                                   0x4
#define _SSPADD_MSK3_POSN                                   0x3
#define _SSPADD_MSK3_POSITION                               0x3
#define _SSPADD_MSK3_SIZE                                   0x1
#define _SSPADD_MSK3_LENGTH                                 0x1
#define _SSPADD_MSK3_MASK                                   0x8
#define _SSPADD_MSK4_POSN                                   0x4
#define _SSPADD_MSK4_POSITION                               0x4
#define _SSPADD_MSK4_SIZE                                   0x1
#define _SSPADD_MSK4_LENGTH                                 0x1
#define _SSPADD_MSK4_MASK                                   0x10
#define _SSPADD_MSK5_POSN                                   0x5
#define _SSPADD_MSK5_POSITION                               0x5
#define _SSPADD_MSK5_SIZE                                   0x1
#define _SSPADD_MSK5_LENGTH                                 0x1
#define _SSPADD_MSK5_MASK                                   0x20
#define _SSPADD_MSK6_POSN                                   0x6
#define _SSPADD_MSK6_POSITION                               0x6
#define _SSPADD_MSK6_SIZE                                   0x1
#define _SSPADD_MSK6_LENGTH                                 0x1
#define _SSPADD_MSK6_MASK                                   0x40
#define _SSPADD_MSK7_POSN                                   0x7
#define _SSPADD_MSK7_POSITION                               0x7
#define _SSPADD_MSK7_SIZE                                   0x1
#define _SSPADD_MSK7_LENGTH                                 0x1
#define _SSPADD_MSK7_MASK                                   0x80
#define _SSPADD_MSK01_POSN                                  0x0
#define _SSPADD_MSK01_POSITION                              0x0
#define _SSPADD_MSK01_SIZE                                  0x1
#define _SSPADD_MSK01_LENGTH                                0x1
#define _SSPADD_MSK01_MASK                                  0x1
#define _SSPADD_MSK11_POSN                                  0x1
#define _SSPADD_MSK11_POSITION                              0x1
#define _SSPADD_MSK11_SIZE                                  0x1
#define _SSPADD_MSK11_LENGTH                                0x1
#define _SSPADD_MSK11_MASK                                  0x2
#define _SSPADD_MSK21_POSN                                  0x2
#define _SSPADD_MSK21_POSITION                              0x2
#define _SSPADD_MSK21_SIZE                                  0x1
#define _SSPADD_MSK21_LENGTH                                0x1
#define _SSPADD_MSK21_MASK                                  0x4
#define _SSPADD_MSK31_POSN                                  0x3
#define _SSPADD_MSK31_POSITION                              0x3
#define _SSPADD_MSK31_SIZE                                  0x1
#define _SSPADD_MSK31_LENGTH                                0x1
#define _SSPADD_MSK31_MASK                                  0x8
#define _SSPADD_MSK41_POSN                                  0x4
#define _SSPADD_MSK41_POSITION                              0x4
#define _SSPADD_MSK41_SIZE                                  0x1
#define _SSPADD_MSK41_LENGTH                                0x1
#define _SSPADD_MSK41_MASK                                  0x10
#define _SSPADD_MSK51_POSN                                  0x5
#define _SSPADD_MSK51_POSITION                              0x5
#define _SSPADD_MSK51_SIZE                                  0x1
#define _SSPADD_MSK51_LENGTH                                0x1
#define _SSPADD_MSK51_MASK                                  0x20
#define _SSPADD_MSK61_POSN                                  0x6
#define _SSPADD_MSK61_POSITION                              0x6
#define _SSPADD_MSK61_SIZE                                  0x1
#define _SSPADD_MSK61_LENGTH                                0x1
#define _SSPADD_MSK61_MASK                                  0x40
#define _SSPADD_MSK71_POSN                                  0x7
#define _SSPADD_MSK71_POSITION                              0x7
#define _SSPADD_MSK71_SIZE                                  0x1
#define _SSPADD_MSK71_LENGTH                                0x1
#define _SSPADD_MSK71_MASK                                  0x80

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
extern volatile unsigned char           SSP1BUF             __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0FC9h");
#endif
// aliases
extern volatile unsigned char           SSPBUF              __at(0xFC9);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0xFC9);
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
extern volatile SSPBUFbits_t SSPBUFbits __at(0xFC9);
// bitfield macros
#define _SSPBUF_SSPBUF_POSN                                 0x0
#define _SSPBUF_SSPBUF_POSITION                             0x0
#define _SSPBUF_SSPBUF_SIZE                                 0x8
#define _SSPBUF_SSPBUF_LENGTH                               0x8
#define _SSPBUF_SSPBUF_MASK                                 0xFF

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

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0xFCB);
#ifndef _LIB_BUILD
asm("PR2 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           MEMCON              __at(0xFCB);
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
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
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF
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
        unsigned PR2                    :8;
    };
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
#define _MEMCON_PR2_POSN                                    0x0
#define _MEMCON_PR2_POSITION                                0x0
#define _MEMCON_PR2_SIZE                                    0x8
#define _MEMCON_PR2_LENGTH                                  0x8
#define _MEMCON_PR2_MASK                                    0xFF
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
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0xFCC);
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

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
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
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
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
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
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits_t;
extern volatile TMR1Lbits_t TMR1Lbits __at(0xFCE);
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0xFCF);
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits_t;
extern volatile TMR1Hbits_t TMR1Hbits __at(0xFCF);
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF

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
        unsigned                        :5;
        unsigned NOT_CM                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned nCM                    :1;
        unsigned                        :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned CM                     :1;
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
#define _RCON_NOT_CM_POSN                                   0x5
#define _RCON_NOT_CM_POSITION                               0x5
#define _RCON_NOT_CM_SIZE                                   0x1
#define _RCON_NOT_CM_LENGTH                                 0x1
#define _RCON_NOT_CM_MASK                                   0x20
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
#define _RCON_nCM_POSN                                      0x5
#define _RCON_nCM_POSITION                                  0x5
#define _RCON_nCM_SIZE                                      0x1
#define _RCON_nCM_LENGTH                                    0x1
#define _RCON_nCM_MASK                                      0x20
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
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
#define _RCON_CM_POSN                                       0x5
#define _RCON_CM_POSITION                                   0x5
#define _RCON_CM_SIZE                                       0x1
#define _RCON_CM_LENGTH                                     0x1
#define _RCON_CM_MASK                                       0x20

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
        unsigned REGSLP                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0xFD1);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_REGSLP_POSN                                 0x7
#define _WDTCON_REGSLP_POSITION                             0x7
#define _WDTCON_REGSLP_SIZE                                 0x1
#define _WDTCON_REGSLP_LENGTH                               0x1
#define _WDTCON_REGSLP_MASK                                 0x80
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: LCDREG
#define LCDREG LCDREG
extern volatile unsigned char           LCDREG              __at(0xFD2);
#ifndef _LIB_BUILD
asm("LCDREG equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CKSEL                  :2;
        unsigned MODE13                 :1;
        unsigned BIAS                   :3;
        unsigned CPEN                   :1;
    };
    struct {
        unsigned CKSEL0                 :1;
        unsigned CKSEL1                 :1;
        unsigned                        :1;
        unsigned BIAS0                  :1;
        unsigned BIAS1                  :1;
        unsigned BIAS2                  :1;
    };
} LCDREGbits_t;
extern volatile LCDREGbits_t LCDREGbits __at(0xFD2);
// bitfield macros
#define _LCDREG_CKSEL_POSN                                  0x0
#define _LCDREG_CKSEL_POSITION                              0x0
#define _LCDREG_CKSEL_SIZE                                  0x2
#define _LCDREG_CKSEL_LENGTH                                0x2
#define _LCDREG_CKSEL_MASK                                  0x3
#define _LCDREG_MODE13_POSN                                 0x2
#define _LCDREG_MODE13_POSITION                             0x2
#define _LCDREG_MODE13_SIZE                                 0x1
#define _LCDREG_MODE13_LENGTH                               0x1
#define _LCDREG_MODE13_MASK                                 0x4
#define _LCDREG_BIAS_POSN                                   0x3
#define _LCDREG_BIAS_POSITION                               0x3
#define _LCDREG_BIAS_SIZE                                   0x3
#define _LCDREG_BIAS_LENGTH                                 0x3
#define _LCDREG_BIAS_MASK                                   0x38
#define _LCDREG_CPEN_POSN                                   0x6
#define _LCDREG_CPEN_POSITION                               0x6
#define _LCDREG_CPEN_SIZE                                   0x1
#define _LCDREG_CPEN_LENGTH                                 0x1
#define _LCDREG_CPEN_MASK                                   0x40
#define _LCDREG_CKSEL0_POSN                                 0x0
#define _LCDREG_CKSEL0_POSITION                             0x0
#define _LCDREG_CKSEL0_SIZE                                 0x1
#define _LCDREG_CKSEL0_LENGTH                               0x1
#define _LCDREG_CKSEL0_MASK                                 0x1
#define _LCDREG_CKSEL1_POSN                                 0x1
#define _LCDREG_CKSEL1_POSITION                             0x1
#define _LCDREG_CKSEL1_SIZE                                 0x1
#define _LCDREG_CKSEL1_LENGTH                               0x1
#define _LCDREG_CKSEL1_MASK                                 0x2
#define _LCDREG_BIAS0_POSN                                  0x3
#define _LCDREG_BIAS0_POSITION                              0x3
#define _LCDREG_BIAS0_SIZE                                  0x1
#define _LCDREG_BIAS0_LENGTH                                0x1
#define _LCDREG_BIAS0_MASK                                  0x8
#define _LCDREG_BIAS1_POSN                                  0x4
#define _LCDREG_BIAS1_POSITION                              0x4
#define _LCDREG_BIAS1_SIZE                                  0x1
#define _LCDREG_BIAS1_LENGTH                                0x1
#define _LCDREG_BIAS1_MASK                                  0x10
#define _LCDREG_BIAS2_POSN                                  0x5
#define _LCDREG_BIAS2_POSITION                              0x5
#define _LCDREG_BIAS2_SIZE                                  0x1
#define _LCDREG_BIAS2_LENGTH                                0x1
#define _LCDREG_BIAS2_MASK                                  0x20

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
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
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
#define _T0CON_T08BIT_POSN                                  0x6
#define _T0CON_T08BIT_POSITION                              0x6
#define _T0CON_T08BIT_SIZE                                  0x1
#define _T0CON_T08BIT_LENGTH                                0x1
#define _T0CON_T08BIT_MASK                                  0x40
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
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0L                  :8;
    };
} TMR0Lbits_t;
extern volatile TMR0Lbits_t TMR0Lbits __at(0xFD6);
// bitfield macros
#define _TMR0L_TMR0L_POSN                                   0x0
#define _TMR0L_TMR0L_POSITION                               0x0
#define _TMR0L_TMR0L_SIZE                                   0x8
#define _TMR0L_TMR0L_LENGTH                                 0x8
#define _TMR0L_TMR0L_MASK                                   0xFF

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0xFD7);
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0H                  :8;
    };
} TMR0Hbits_t;
extern volatile TMR0Hbits_t TMR0Hbits __at(0xFD7);
// bitfield macros
#define _TMR0H_TMR0H_POSN                                   0x0
#define _TMR0H_TMR0H_POSITION                               0x0
#define _TMR0H_TMR0H_SIZE                                   0x8
#define _TMR0H_TMR0H_LENGTH                                 0x8
#define _TMR0H_TMR0H_MASK                                   0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned FSR2L                  :8;
    };
} FSR2Lbits_t;
extern volatile FSR2Lbits_t FSR2Lbits __at(0xFD9);
// bitfield macros
#define _FSR2L_FSR2L_POSN                                   0x0
#define _FSR2L_FSR2L_POSITION                               0x0
#define _FSR2L_FSR2L_SIZE                                   0x8
#define _FSR2L_FSR2L_LENGTH                                 0x8
#define _FSR2L_FSR2L_MASK                                   0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned PLUSW2                 :8;
    };
} PLUSW2bits_t;
extern volatile PLUSW2bits_t PLUSW2bits __at(0xFDB);
// bitfield macros
#define _PLUSW2_PLUSW2_POSN                                 0x0
#define _PLUSW2_PLUSW2_POSITION                             0x0
#define _PLUSW2_PLUSW2_SIZE                                 0x8
#define _PLUSW2_PLUSW2_LENGTH                               0x8
#define _PLUSW2_PLUSW2_MASK                                 0xFF

// Register: PREINC2
#define PREINC2 PREINC2
extern volatile unsigned char           PREINC2             __at(0xFDC);
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PREINC2                :8;
    };
} PREINC2bits_t;
extern volatile PREINC2bits_t PREINC2bits __at(0xFDC);
// bitfield macros
#define _PREINC2_PREINC2_POSN                               0x0
#define _PREINC2_PREINC2_POSITION                           0x0
#define _PREINC2_PREINC2_SIZE                               0x8
#define _PREINC2_PREINC2_LENGTH                             0x8
#define _PREINC2_PREINC2_MASK                               0xFF

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
extern volatile unsigned char           POSTDEC2            __at(0xFDD);
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTDEC2               :8;
    };
} POSTDEC2bits_t;
extern volatile POSTDEC2bits_t POSTDEC2bits __at(0xFDD);
// bitfield macros
#define _POSTDEC2_POSTDEC2_POSN                             0x0
#define _POSTDEC2_POSTDEC2_POSITION                         0x0
#define _POSTDEC2_POSTDEC2_SIZE                             0x8
#define _POSTDEC2_POSTDEC2_LENGTH                           0x8
#define _POSTDEC2_POSTDEC2_MASK                             0xFF

// Register: POSTINC2
#define POSTINC2 POSTINC2
extern volatile unsigned char           POSTINC2            __at(0xFDE);
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTINC2               :8;
    };
} POSTINC2bits_t;
extern volatile POSTINC2bits_t POSTINC2bits __at(0xFDE);
// bitfield macros
#define _POSTINC2_POSTINC2_POSN                             0x0
#define _POSTINC2_POSTINC2_POSITION                         0x0
#define _POSTINC2_POSTINC2_SIZE                             0x8
#define _POSTINC2_POSTINC2_LENGTH                           0x8
#define _POSTINC2_POSTINC2_MASK                             0xFF

// Register: INDF2
#define INDF2 INDF2
extern volatile unsigned char           INDF2               __at(0xFDF);
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF2                  :8;
    };
} INDF2bits_t;
extern volatile INDF2bits_t INDF2bits __at(0xFDF);
// bitfield macros
#define _INDF2_INDF2_POSN                                   0x0
#define _INDF2_INDF2_POSITION                               0x0
#define _INDF2_INDF2_SIZE                                   0x8
#define _INDF2_INDF2_LENGTH                                 0x8
#define _INDF2_INDF2_MASK                                   0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L                  :8;
    };
} FSR1Lbits_t;
extern volatile FSR1Lbits_t FSR1Lbits __at(0xFE1);
// bitfield macros
#define _FSR1L_FSR1L_POSN                                   0x0
#define _FSR1L_FSR1L_POSITION                               0x0
#define _FSR1L_FSR1L_SIZE                                   0x8
#define _FSR1L_FSR1L_LENGTH                                 0x8
#define _FSR1L_FSR1L_MASK                                   0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned PLUSW1                 :8;
    };
} PLUSW1bits_t;
extern volatile PLUSW1bits_t PLUSW1bits __at(0xFE3);
// bitfield macros
#define _PLUSW1_PLUSW1_POSN                                 0x0
#define _PLUSW1_PLUSW1_POSITION                             0x0
#define _PLUSW1_PLUSW1_SIZE                                 0x8
#define _PLUSW1_PLUSW1_LENGTH                               0x8
#define _PLUSW1_PLUSW1_MASK                                 0xFF

// Register: PREINC1
#define PREINC1 PREINC1
extern volatile unsigned char           PREINC1             __at(0xFE4);
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PREINC1                :8;
    };
} PREINC1bits_t;
extern volatile PREINC1bits_t PREINC1bits __at(0xFE4);
// bitfield macros
#define _PREINC1_PREINC1_POSN                               0x0
#define _PREINC1_PREINC1_POSITION                           0x0
#define _PREINC1_PREINC1_SIZE                               0x8
#define _PREINC1_PREINC1_LENGTH                             0x8
#define _PREINC1_PREINC1_MASK                               0xFF

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
extern volatile unsigned char           POSTDEC1            __at(0xFE5);
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTDEC1               :8;
    };
} POSTDEC1bits_t;
extern volatile POSTDEC1bits_t POSTDEC1bits __at(0xFE5);
// bitfield macros
#define _POSTDEC1_POSTDEC1_POSN                             0x0
#define _POSTDEC1_POSTDEC1_POSITION                         0x0
#define _POSTDEC1_POSTDEC1_SIZE                             0x8
#define _POSTDEC1_POSTDEC1_LENGTH                           0x8
#define _POSTDEC1_POSTDEC1_MASK                             0xFF

// Register: POSTINC1
#define POSTINC1 POSTINC1
extern volatile unsigned char           POSTINC1            __at(0xFE6);
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTINC1               :8;
    };
} POSTINC1bits_t;
extern volatile POSTINC1bits_t POSTINC1bits __at(0xFE6);
// bitfield macros
#define _POSTINC1_POSTINC1_POSN                             0x0
#define _POSTINC1_POSTINC1_POSITION                         0x0
#define _POSTINC1_POSTINC1_SIZE                             0x8
#define _POSTINC1_POSTINC1_LENGTH                           0x8
#define _POSTINC1_POSTINC1_MASK                             0xFF

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0xFE7);
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF1                  :8;
    };
} INDF1bits_t;
extern volatile INDF1bits_t INDF1bits __at(0xFE7);
// bitfield macros
#define _INDF1_INDF1_POSN                                   0x0
#define _INDF1_INDF1_POSITION                               0x0
#define _INDF1_INDF1_SIZE                                   0x8
#define _INDF1_INDF1_LENGTH                                 0x8
#define _INDF1_INDF1_MASK                                   0xFF

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0xFE8);
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG                   :8;
    };
} WREGbits_t;
extern volatile WREGbits_t WREGbits __at(0xFE8);
// bitfield macros
#define _WREG_WREG_POSN                                     0x0
#define _WREG_WREG_POSITION                                 0x0
#define _WREG_WREG_SIZE                                     0x8
#define _WREG_WREG_LENGTH                                   0x8
#define _WREG_WREG_MASK                                     0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L                  :8;
    };
} FSR0Lbits_t;
extern volatile FSR0Lbits_t FSR0Lbits __at(0xFE9);
// bitfield macros
#define _FSR0L_FSR0L_POSN                                   0x0
#define _FSR0L_FSR0L_POSITION                               0x0
#define _FSR0L_FSR0L_SIZE                                   0x8
#define _FSR0L_FSR0L_LENGTH                                 0x8
#define _FSR0L_FSR0L_MASK                                   0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned PLUSW0                 :8;
    };
} PLUSW0bits_t;
extern volatile PLUSW0bits_t PLUSW0bits __at(0xFEB);
// bitfield macros
#define _PLUSW0_PLUSW0_POSN                                 0x0
#define _PLUSW0_PLUSW0_POSITION                             0x0
#define _PLUSW0_PLUSW0_SIZE                                 0x8
#define _PLUSW0_PLUSW0_LENGTH                               0x8
#define _PLUSW0_PLUSW0_MASK                                 0xFF

// Register: PREINC0
#define PREINC0 PREINC0
extern volatile unsigned char           PREINC0             __at(0xFEC);
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PREINC0                :8;
    };
} PREINC0bits_t;
extern volatile PREINC0bits_t PREINC0bits __at(0xFEC);
// bitfield macros
#define _PREINC0_PREINC0_POSN                               0x0
#define _PREINC0_PREINC0_POSITION                           0x0
#define _PREINC0_PREINC0_SIZE                               0x8
#define _PREINC0_PREINC0_LENGTH                             0x8
#define _PREINC0_PREINC0_MASK                               0xFF

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
extern volatile unsigned char           POSTDEC0            __at(0xFED);
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTDEC0               :8;
    };
} POSTDEC0bits_t;
extern volatile POSTDEC0bits_t POSTDEC0bits __at(0xFED);
// bitfield macros
#define _POSTDEC0_POSTDEC0_POSN                             0x0
#define _POSTDEC0_POSTDEC0_POSITION                         0x0
#define _POSTDEC0_POSTDEC0_SIZE                             0x8
#define _POSTDEC0_POSTDEC0_LENGTH                           0x8
#define _POSTDEC0_POSTDEC0_MASK                             0xFF

// Register: POSTINC0
#define POSTINC0 POSTINC0
extern volatile unsigned char           POSTINC0            __at(0xFEE);
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POSTINC0               :8;
    };
} POSTINC0bits_t;
extern volatile POSTINC0bits_t POSTINC0bits __at(0xFEE);
// bitfield macros
#define _POSTINC0_POSTINC0_POSN                             0x0
#define _POSTINC0_POSTINC0_POSITION                         0x0
#define _POSTINC0_POSTINC0_SIZE                             0x8
#define _POSTINC0_POSTINC0_LENGTH                           0x8
#define _POSTINC0_POSTINC0_MASK                             0xFF

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0xFEF);
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF0                  :8;
    };
} INDF0bits_t;
extern volatile INDF0bits_t INDF0bits __at(0xFEF);
// bitfield macros
#define _INDF0_INDF0_POSN                                   0x0
#define _INDF0_INDF0_POSITION                               0x0
#define _INDF0_INDF0_SIZE                                   0x8
#define _INDF0_INDF0_LENGTH                                 0x8
#define _INDF0_INDF0_MASK                                   0xFF

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
        unsigned INT3IF                 :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned INT3IE                 :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned INT3F                  :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned INT3E                  :1;
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
#define _INTCON3_INT3IF_POSN                                0x2
#define _INTCON3_INT3IF_POSITION                            0x2
#define _INTCON3_INT3IF_SIZE                                0x1
#define _INTCON3_INT3IF_LENGTH                              0x1
#define _INTCON3_INT3IF_MASK                                0x4
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
#define _INTCON3_INT3IE_POSN                                0x5
#define _INTCON3_INT3IE_POSITION                            0x5
#define _INTCON3_INT3IE_SIZE                                0x1
#define _INTCON3_INT3IE_LENGTH                              0x1
#define _INTCON3_INT3IE_MASK                                0x20
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
#define _INTCON3_INT3F_POSN                                 0x2
#define _INTCON3_INT3F_POSITION                             0x2
#define _INTCON3_INT3F_SIZE                                 0x1
#define _INTCON3_INT3F_LENGTH                               0x1
#define _INTCON3_INT3F_MASK                                 0x4
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
#define _INTCON3_INT3E_POSN                                 0x5
#define _INTCON3_INT3E_POSITION                             0x5
#define _INTCON3_INT3E_SIZE                                 0x1
#define _INTCON3_INT3E_LENGTH                               0x1
#define _INTCON3_INT3E_MASK                                 0x20
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
        unsigned INT3IP                 :1;
        unsigned TMR0IP                 :1;
        unsigned INTEDG3                :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT3P                  :1;
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
#define _INTCON2_INT3IP_POSN                                0x1
#define _INTCON2_INT3IP_POSITION                            0x1
#define _INTCON2_INT3IP_SIZE                                0x1
#define _INTCON2_INT3IP_LENGTH                              0x1
#define _INTCON2_INT3IP_MASK                                0x2
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG3_POSN                               0x3
#define _INTCON2_INTEDG3_POSITION                           0x3
#define _INTCON2_INTEDG3_SIZE                               0x1
#define _INTCON2_INTEDG3_LENGTH                             0x1
#define _INTCON2_INTEDG3_MASK                               0x8
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
#define _INTCON2_INT3P_POSN                                 0x1
#define _INTCON2_INT3P_POSITION                             0x1
#define _INTCON2_INT3P_SIZE                                 0x1
#define _INTCON2_INT3P_LENGTH                               0x1
#define _INTCON2_INT3P_MASK                                 0x2
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
// bitfield definitions
typedef union {
    struct {
        unsigned PRODL                  :8;
    };
} PRODLbits_t;
extern volatile PRODLbits_t PRODLbits __at(0xFF3);
// bitfield macros
#define _PRODL_PRODL_POSN                                   0x0
#define _PRODL_PRODL_POSITION                               0x0
#define _PRODL_PRODL_SIZE                                   0x8
#define _PRODL_PRODL_LENGTH                                 0x8
#define _PRODL_PRODL_MASK                                   0xFF

// Register: PRODH
#define PRODH PRODH
extern volatile unsigned char           PRODH               __at(0xFF4);
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PRODH                  :8;
    };
} PRODHbits_t;
extern volatile PRODHbits_t PRODHbits __at(0xFF4);
// bitfield macros
#define _PRODH_PRODH_POSN                                   0x0
#define _PRODH_PRODH_POSITION                               0x0
#define _PRODH_PRODH_SIZE                                   0x8
#define _PRODH_PRODH_LENGTH                                 0x8
#define _PRODH_PRODH_MASK                                   0xFF

// Register: TABLAT
#define TABLAT TABLAT
extern volatile unsigned char           TABLAT              __at(0xFF5);
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TABLAT                 :8;
    };
} TABLATbits_t;
extern volatile TABLATbits_t TABLATbits __at(0xFF5);
// bitfield macros
#define _TABLAT_TABLAT_POSN                                 0x0
#define _TABLAT_TABLAT_POSITION                             0x0
#define _TABLAT_TABLAT_SIZE                                 0x8
#define _TABLAT_TABLAT_LENGTH                               0x8
#define _TABLAT_TABLAT_MASK                                 0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned TBLPTRL                :8;
    };
} TBLPTRLbits_t;
extern volatile TBLPTRLbits_t TBLPTRLbits __at(0xFF6);
// bitfield macros
#define _TBLPTRL_TBLPTRL_POSN                               0x0
#define _TBLPTRL_TBLPTRL_POSITION                           0x0
#define _TBLPTRL_TBLPTRL_SIZE                               0x8
#define _TBLPTRL_TBLPTRL_LENGTH                             0x8
#define _TBLPTRL_TBLPTRL_MASK                               0xFF

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
extern volatile unsigned char           TBLPTRH             __at(0xFF7);
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TBLPTRH                :8;
    };
} TBLPTRHbits_t;
extern volatile TBLPTRHbits_t TBLPTRHbits __at(0xFF7);
// bitfield macros
#define _TBLPTRH_TBLPTRH_POSN                               0x0
#define _TBLPTRH_TBLPTRH_POSITION                           0x0
#define _TBLPTRH_TBLPTRH_SIZE                               0x8
#define _TBLPTRH_TBLPTRH_LENGTH                             0x8
#define _TBLPTRH_TBLPTRH_MASK                               0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits_t;
extern volatile PCLbits_t PCLbits __at(0xFF9);
// bitfield macros
#define _PCL_PCL_POSN                                       0x0
#define _PCL_PCL_POSITION                                   0x0
#define _PCL_PCL_SIZE                                       0x8
#define _PCL_PCL_LENGTH                                     0x8
#define _PCL_PCL_MASK                                       0xFF

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0xFFA);
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCH                    :8;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0xFFA);
// bitfield macros
#define _PCLATH_PCH_POSN                                    0x0
#define _PCLATH_PCH_POSITION                                0x0
#define _PCLATH_PCH_SIZE                                    0x8
#define _PCLATH_PCH_LENGTH                                  0x8
#define _PCLATH_PCH_MASK                                    0xFF

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
        unsigned SP0                    :1;
        unsigned SP1                    :1;
        unsigned SP2                    :1;
        unsigned SP3                    :1;
        unsigned SP4                    :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
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
#define _STKPTR_SP0_POSN                                    0x0
#define _STKPTR_SP0_POSITION                                0x0
#define _STKPTR_SP0_SIZE                                    0x1
#define _STKPTR_SP0_LENGTH                                  0x1
#define _STKPTR_SP0_MASK                                    0x1
#define _STKPTR_SP1_POSN                                    0x1
#define _STKPTR_SP1_POSITION                                0x1
#define _STKPTR_SP1_SIZE                                    0x1
#define _STKPTR_SP1_LENGTH                                  0x1
#define _STKPTR_SP1_MASK                                    0x2
#define _STKPTR_SP2_POSN                                    0x2
#define _STKPTR_SP2_POSITION                                0x2
#define _STKPTR_SP2_SIZE                                    0x1
#define _STKPTR_SP2_LENGTH                                  0x1
#define _STKPTR_SP2_MASK                                    0x4
#define _STKPTR_SP3_POSN                                    0x3
#define _STKPTR_SP3_POSITION                                0x3
#define _STKPTR_SP3_SIZE                                    0x1
#define _STKPTR_SP3_LENGTH                                  0x1
#define _STKPTR_SP3_MASK                                    0x8
#define _STKPTR_SP4_POSN                                    0x4
#define _STKPTR_SP4_POSITION                                0x4
#define _STKPTR_SP4_SIZE                                    0x1
#define _STKPTR_SP4_LENGTH                                  0x1
#define _STKPTR_SP4_MASK                                    0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80
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

// Register: TOS
#define TOS TOS
extern volatile unsigned short          TOS                 __at(0xFFD);
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFFD);
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSL                   :8;
    };
} TOSLbits_t;
extern volatile TOSLbits_t TOSLbits __at(0xFFD);
// bitfield macros
#define _TOSL_TOSL_POSN                                     0x0
#define _TOSL_TOSL_POSITION                                 0x0
#define _TOSL_TOSL_SIZE                                     0x8
#define _TOSL_TOSL_LENGTH                                   0x8
#define _TOSL_TOSL_MASK                                     0xFF

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFFE);
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSH                   :8;
    };
} TOSHbits_t;
extern volatile TOSHbits_t TOSHbits __at(0xFFE);
// bitfield macros
#define _TOSH_TOSH_POSN                                     0x0
#define _TOSH_TOSH_POSITION                                 0x0
#define _TOSH_TOSH_SIZE                                     0x8
#define _TOSH_TOSH_LENGTH                                   0x8
#define _TOSH_TOSH_MASK                                     0xFF

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
// BAUDCON1<ABDEN>
extern volatile __bit                   ABDEN               __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDEN1>
extern volatile __bit                   ABDEN1              __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN1_bit          _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON1,7)
// BAUDCON1<ABDOVF1>
extern volatile __bit                   ABDOVF1             __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF1_bit         _BIT_ACCESS(BAUDCON1,7)
// SSP1CON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKDT1>
extern volatile __bit                   ACKDT1              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT1_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKEN1>
extern volatile __bit                   ACKEN1              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN1_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSP1CON2,6)
// SSP1CON2<ACKSTAT1>
extern volatile __bit                   ACKSTAT1            __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT1_bit        _BIT_ACCESS(SSP1CON2,6)
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON2,3)
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON2,4)
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON2,5)
// ADCON0<ADCAL>
extern volatile __bit                   ADCAL               __at(0x7E17);	// @ (0xFC2 * 8 + 7)
#define                                 ADCAL_bit           _BIT_ACCESS(ADCON0,7)
// ADCON2<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON2,0)
// ADCON2<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON2,1)
// ADCON2<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON2,2)
// RCSTA1<ADDEN1>
extern volatile __bit                   ADDEN1              __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN1_bit          _BIT_ACCESS(RCSTA1,3)
// RCSTA2<ADDEN2>
extern volatile __bit                   ADDEN2              __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 ADDEN2_bit          _BIT_ACCESS(RCSTA2,3)
// RCSTA1<ADEN>
extern volatile __bit                   ADEN                __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADEN_bit            _BIT_ACCESS(RCSTA1,3)
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
// SSP1CON2<ADMSK1>
extern volatile __bit                   ADMSK1              __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK1_bit          _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<ADMSK11>
extern volatile __bit                   ADMSK11             __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK11_bit         _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<ADMSK2>
extern volatile __bit                   ADMSK2              __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK2_bit          _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<ADMSK21>
extern volatile __bit                   ADMSK21             __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK21_bit         _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<ADMSK3>
extern volatile __bit                   ADMSK3              __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK3_bit          _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<ADMSK31>
extern volatile __bit                   ADMSK31             __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK31_bit         _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<ADMSK4>
extern volatile __bit                   ADMSK4              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK4_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ADMSK41>
extern volatile __bit                   ADMSK41             __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK41_bit         _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ADMSK5>
extern volatile __bit                   ADMSK5              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK5_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ADMSK51>
extern volatile __bit                   ADMSK51             __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK51_bit         _BIT_ACCESS(SSP1CON2,5)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x7E10);	// @ (0xFC2 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ALRMCFG<ALRMEN>
extern volatile __bit                   ALRMEN              __at(0x7ADF);	// @ (0xF5B * 8 + 7)
#define                                 ALRMEN_bit          _BIT_ACCESS(ALRMCFG,7)
// ALRMCFG<ALRMPTR0>
extern volatile __bit                   ALRMPTR0            __at(0x7AD8);	// @ (0xF5B * 8 + 0)
#define                                 ALRMPTR0_bit        _BIT_ACCESS(ALRMCFG,0)
// ALRMCFG<ALRMPTR1>
extern volatile __bit                   ALRMPTR1            __at(0x7AD9);	// @ (0xF5B * 8 + 1)
#define                                 ALRMPTR1_bit        _BIT_ACCESS(ALRMCFG,1)
// ALRMCFG<AMASK0>
extern volatile __bit                   AMASK0              __at(0x7ADA);	// @ (0xF5B * 8 + 2)
#define                                 AMASK0_bit          _BIT_ACCESS(ALRMCFG,2)
// ALRMCFG<AMASK1>
extern volatile __bit                   AMASK1              __at(0x7ADB);	// @ (0xF5B * 8 + 3)
#define                                 AMASK1_bit          _BIT_ACCESS(ALRMCFG,3)
// ALRMCFG<AMASK2>
extern volatile __bit                   AMASK2              __at(0x7ADC);	// @ (0xF5B * 8 + 4)
#define                                 AMASK2_bit          _BIT_ACCESS(ALRMCFG,4)
// ALRMCFG<AMASK3>
extern volatile __bit                   AMASK3              __at(0x7ADD);	// @ (0xF5B * 8 + 5)
#define                                 AMASK3_bit          _BIT_ACCESS(ALRMCFG,5)
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTF<AN10>
extern volatile __bit                   AN10                __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 AN10_bit            _BIT_ACCESS(PORTF,5)
// PORTF<AN11>
extern volatile __bit                   AN11                __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 AN11_bit            _BIT_ACCESS(PORTF,6)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// PORTF<AN5>
extern volatile __bit                   AN5                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 AN5_bit             _BIT_ACCESS(PORTF,7)
// PORTF<AN6>
extern volatile __bit                   AN6                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 AN6_bit             _BIT_ACCESS(PORTF,1)
// PORTF<AN7>
extern volatile __bit                   AN7                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 AN7_bit             _BIT_ACCESS(PORTF,2)
// PORTF<AN8>
extern volatile __bit                   AN8                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 AN8_bit             _BIT_ACCESS(PORTF,3)
// PORTF<AN9>
extern volatile __bit                   AN9                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 AN9_bit             _BIT_ACCESS(PORTF,4)
// ALRMRPT<ARPT0>
extern volatile __bit                   ARPT0               __at(0x7AD0);	// @ (0xF5A * 8 + 0)
#define                                 ARPT0_bit           _BIT_ACCESS(ALRMRPT,0)
// ALRMRPT<ARPT1>
extern volatile __bit                   ARPT1               __at(0x7AD1);	// @ (0xF5A * 8 + 1)
#define                                 ARPT1_bit           _BIT_ACCESS(ALRMRPT,1)
// ALRMRPT<ARPT2>
extern volatile __bit                   ARPT2               __at(0x7AD2);	// @ (0xF5A * 8 + 2)
#define                                 ARPT2_bit           _BIT_ACCESS(ALRMRPT,2)
// ALRMRPT<ARPT3>
extern volatile __bit                   ARPT3               __at(0x7AD3);	// @ (0xF5A * 8 + 3)
#define                                 ARPT3_bit           _BIT_ACCESS(ALRMRPT,3)
// ALRMRPT<ARPT4>
extern volatile __bit                   ARPT4               __at(0x7AD4);	// @ (0xF5A * 8 + 4)
#define                                 ARPT4_bit           _BIT_ACCESS(ALRMRPT,4)
// ALRMRPT<ARPT5>
extern volatile __bit                   ARPT5               __at(0x7AD5);	// @ (0xF5A * 8 + 5)
#define                                 ARPT5_bit           _BIT_ACCESS(ALRMRPT,5)
// ALRMRPT<ARPT6>
extern volatile __bit                   ARPT6               __at(0x7AD6);	// @ (0xF5A * 8 + 6)
#define                                 ARPT6_bit           _BIT_ACCESS(ALRMRPT,6)
// ALRMRPT<ARPT7>
extern volatile __bit                   ARPT7               __at(0x7AD7);	// @ (0xF5A * 8 + 7)
#define                                 ARPT7_bit           _BIT_ACCESS(ALRMRPT,7)
// PIE2<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR2,3)
// IPR2<BCL1IP>
extern volatile __bit                   BCL1IP              __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCL1IP_bit          _BIT_ACCESS(IPR2,3)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// IPR2<BCLIP>
extern volatile __bit                   BCLIP               __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCLIP_bit           _BIT_ACCESS(IPR2,3)
// SSP1STAT<BF>
extern volatile __bit                   BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSP1STAT,0)
// SSP1STAT<BF1>
extern volatile __bit                   BF1                 __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF1_bit             _BIT_ACCESS(SSP1STAT,0)
// LCDREG<BIAS0>
extern volatile __bit                   BIAS0               __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 BIAS0_bit           _BIT_ACCESS(LCDREG,3)
// LCDREG<BIAS1>
extern volatile __bit                   BIAS1               __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 BIAS1_bit           _BIT_ACCESS(LCDREG,4)
// LCDREG<BIAS2>
extern volatile __bit                   BIAS2               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 BIAS2_bit           _BIT_ACCESS(LCDREG,5)
// LCDPS<BIASMD>
extern volatile __bit                   BIASMD              __at(0x7D56);	// @ (0xFAA * 8 + 6)
#define                                 BIASMD_bit          _BIT_ACCESS(LCDPS,6)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// BAUDCON1<BRG16>
extern volatile __bit                   BRG16               __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON1,3)
// BAUDCON1<BRG161>
extern volatile __bit                   BRG161              __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG161_bit          _BIT_ACCESS(BAUDCON1,3)
// TXSTA1<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA1,2)
// TXSTA2<BRGH2>
extern volatile __bit                   BRGH2               __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 BRGH2_bit           _BIT_ACCESS(TXSTA2,2)
// PORTF<C1INA>
extern volatile __bit                   C1INA               __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 C1INA_bit           _BIT_ACCESS(PORTF,6)
// PORTF<C1INB>
extern volatile __bit                   C1INB               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 C1INB_bit           _BIT_ACCESS(PORTF,5)
// CMCON<C1INV>
extern volatile __bit                   C1INV               __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 C1INV_bit           _BIT_ACCESS(CMCON,4)
// PORTF<C1OUTF>
extern volatile __bit                   C1OUTF              __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 C1OUTF_bit          _BIT_ACCESS(PORTF,2)
// PORTF<C2INA>
extern volatile __bit                   C2INA               __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 C2INA_bit           _BIT_ACCESS(PORTF,4)
// PORTF<C2INB>
extern volatile __bit                   C2INB               __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 C2INB_bit           _BIT_ACCESS(PORTF,3)
// CMCON<C2INV>
extern volatile __bit                   C2INV               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 C2INV_bit           _BIT_ACCESS(CMCON,5)
// PORTF<C2OUTF>
extern volatile __bit                   C2OUTF              __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 C2OUTF_bit          _BIT_ACCESS(PORTF,1)
// PORTG<C3OUTG>
extern volatile __bit                   C3OUTG              __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 C3OUTG_bit          _BIT_ACCESS(PORTG,1)
// RTCCAL<CAL0>
extern volatile __bit                   CAL0                __at(0x7AF0);	// @ (0xF5E * 8 + 0)
#define                                 CAL0_bit            _BIT_ACCESS(RTCCAL,0)
// RTCCAL<CAL1>
extern volatile __bit                   CAL1                __at(0x7AF1);	// @ (0xF5E * 8 + 1)
#define                                 CAL1_bit            _BIT_ACCESS(RTCCAL,1)
// RTCCAL<CAL2>
extern volatile __bit                   CAL2                __at(0x7AF2);	// @ (0xF5E * 8 + 2)
#define                                 CAL2_bit            _BIT_ACCESS(RTCCAL,2)
// RTCCAL<CAL3>
extern volatile __bit                   CAL3                __at(0x7AF3);	// @ (0xF5E * 8 + 3)
#define                                 CAL3_bit            _BIT_ACCESS(RTCCAL,3)
// RTCCAL<CAL4>
extern volatile __bit                   CAL4                __at(0x7AF4);	// @ (0xF5E * 8 + 4)
#define                                 CAL4_bit            _BIT_ACCESS(RTCCAL,4)
// RTCCAL<CAL5>
extern volatile __bit                   CAL5                __at(0x7AF5);	// @ (0xF5E * 8 + 5)
#define                                 CAL5_bit            _BIT_ACCESS(RTCCAL,5)
// RTCCAL<CAL6>
extern volatile __bit                   CAL6                __at(0x7AF6);	// @ (0xF5E * 8 + 6)
#define                                 CAL6_bit            _BIT_ACCESS(RTCCAL,6)
// RTCCAL<CAL7>
extern volatile __bit                   CAL7                __at(0x7AF7);	// @ (0xF5E * 8 + 7)
#define                                 CAL7_bit            _BIT_ACCESS(RTCCAL,7)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
// PIE3<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR3,1)
// IPR3<CCP1IP>
extern volatile __bit                   CCP1IP              __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 CCP1IP_bit          _BIT_ACCESS(IPR3,1)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x7B42);	// @ (0xF68 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// TRISG<CCP1OD>
extern volatile __bit                   CCP1OD              __at(0x7CC5);	// @ (0xF98 * 8 + 5)
#define                                 CCP1OD_bit          _BIT_ACCESS(TRISG,5)
// PORTE<CCP2E>
extern volatile __bit                   CCP2E               __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 CCP2E_bit           _BIT_ACCESS(PORTE,7)
// PIE3<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE3,2)
// PIR3<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR3,2)
// IPR3<CCP2IP>
extern volatile __bit                   CCP2IP              __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 CCP2IP_bit          _BIT_ACCESS(IPR3,2)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0x7B28);	// @ (0xF65 * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7B29);	// @ (0xF65 * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7B2A);	// @ (0xF65 * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7B2B);	// @ (0xF65 * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// TRISG<CCP2OD>
extern volatile __bit                   CCP2OD              __at(0x7CC6);	// @ (0xF98 * 8 + 6)
#define                                 CCP2OD_bit          _BIT_ACCESS(TRISG,6)
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        _BIT_ACCESS(PORTB,3)
// PORTE<CCP6E>
extern volatile __bit                   CCP6E               __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 CCP6E_bit           _BIT_ACCESS(PORTE,6)
// PORTE<CCP7E>
extern volatile __bit                   CCP7E               __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 CCP7E_bit           _BIT_ACCESS(PORTE,5)
// PORTE<CCP8E>
extern volatile __bit                   CCP8E               __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 CCP8E_bit           _BIT_ACCESS(PORTE,4)
// PORTE<CCP9E>
extern volatile __bit                   CCP9E               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 CCP9E_bit           _BIT_ACCESS(PORTE,3)
// ALRMCFG<CHIME>
extern volatile __bit                   CHIME               __at(0x7ADE);	// @ (0xF5B * 8 + 6)
#define                                 CHIME_bit           _BIT_ACCESS(ALRMCFG,6)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x7E12);	// @ (0xFC2 * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x7E13);	// @ (0xFC2 * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x7E14);	// @ (0xFC2 * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x7E15);	// @ (0xFC2 * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// ADCON1<CHSN3>
extern volatile __bit                   CHSN3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 CHSN3_bit           _BIT_ACCESS(ADCON1,3)
// CMCON<CIS>
extern volatile __bit                   CIS                 __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 CIS_bit             _BIT_ACCESS(CMCON,3)
// PORTC<CK1>
extern volatile __bit                   CK1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK1_bit             _BIT_ACCESS(PORTC,6)
// PORTG<CK2>
extern volatile __bit                   CK2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 CK2_bit             _BIT_ACCESS(PORTG,1)
// SSP1STAT<CKE>
extern volatile __bit                   CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSP1STAT,6)
// SSP1STAT<CKE1>
extern volatile __bit                   CKE1                __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE1_bit            _BIT_ACCESS(SSP1STAT,6)
// SSP1CON1<CKP>
extern volatile __bit                   CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSP1CON1,4)
// SSP1CON1<CKP1>
extern volatile __bit                   CKP1                __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP1_bit            _BIT_ACCESS(SSP1CON1,4)
// LCDREG<CKSEL0>
extern volatile __bit                   CKSEL0              __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 CKSEL0_bit          _BIT_ACCESS(LCDREG,0)
// LCDREG<CKSEL1>
extern volatile __bit                   CKSEL1              __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 CKSEL1_bit          _BIT_ACCESS(LCDREG,1)
// BAUDCON1<CKTXP>
extern volatile __bit                   CKTXP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 CKTXP_bit           _BIT_ACCESS(BAUDCON1,4)
// PORTA<CLKI>
extern volatile __bit                   CLKI                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 CLKI_bit            _BIT_ACCESS(PORTA,7)
// PORTA<CLKO>
extern volatile __bit                   CLKO                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 CLKO_bit            _BIT_ACCESS(PORTA,6)
// RCON<CM>
extern volatile __bit                   CM                  __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 CM_bit              _BIT_ACCESS(RCON,5)
// CMCON<CM0>
extern volatile __bit                   CM0                 __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CM0_bit             _BIT_ACCESS(CMCON,0)
// CMCON<CM1>
extern volatile __bit                   CM1                 __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CM1_bit             _BIT_ACCESS(CMCON,1)
// CMCON<CM2>
extern volatile __bit                   CM2                 __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CM2_bit             _BIT_ACCESS(CMCON,2)
// CMCON<CMEN0>
extern volatile __bit                   CMEN0               __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CMEN0_bit           _BIT_ACCESS(CMCON,0)
// CMCON<CMEN1>
extern volatile __bit                   CMEN1               __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CMEN1_bit           _BIT_ACCESS(CMCON,1)
// CMCON<CMEN2>
extern volatile __bit                   CMEN2               __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CMEN2_bit           _BIT_ACCESS(CMCON,2)
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            _BIT_ACCESS(IPR2,6)
// PORTE<COM0>
extern volatile __bit                   COM0                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 COM0_bit            _BIT_ACCESS(PORTE,3)
// PORTE<COM1>
extern volatile __bit                   COM1                __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 COM1_bit            _BIT_ACCESS(PORTE,4)
// PORTE<COM2>
extern volatile __bit                   COM2                __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 COM2_bit            _BIT_ACCESS(PORTE,5)
// PORTE<COM3>
extern volatile __bit                   COM3                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 COM3_bit            _BIT_ACCESS(PORTE,6)
// LCDREG<CPEN>
extern volatile __bit                   CPEN                __at(0x7E96);	// @ (0xFD2 * 8 + 6)
#define                                 CPEN_bit            _BIT_ACCESS(LCDREG,6)
// RCSTA1<CREN1>
extern volatile __bit                   CREN1               __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN1_bit           _BIT_ACCESS(RCSTA1,4)
// RCSTA2<CREN2>
extern volatile __bit                   CREN2               __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 CREN2_bit           _BIT_ACCESS(RCSTA2,4)
// LCDCON<CS0>
extern volatile __bit                   CS0                 __at(0x7D42);	// @ (0xFA8 * 8 + 2)
#define                                 CS0_bit             _BIT_ACCESS(LCDCON,2)
// LCDCON<CS1>
extern volatile __bit                   CS1                 __at(0x7D43);	// @ (0xFA8 * 8 + 3)
#define                                 CS1_bit             _BIT_ACCESS(LCDCON,3)
// TXSTA1<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA1,7)
// TXSTA2<CSRC2>
extern volatile __bit                   CSRC2               __at(0x7B0F);	// @ (0xF61 * 8 + 7)
#define                                 CSRC2_bit           _BIT_ACCESS(TXSTA2,7)
// PORTB<CTED1>
extern volatile __bit                   CTED1               __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 CTED1_bit           _BIT_ACCESS(PORTB,2)
// PORTB<CTED2>
extern volatile __bit                   CTED2               __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CTED2_bit           _BIT_ACCESS(PORTB,3)
// CTMUCONH<CTMUEN>
extern volatile __bit                   CTMUEN              __at(0x7ABF);	// @ (0xF57 * 8 + 7)
#define                                 CTMUEN_bit          _BIT_ACCESS(CTMUCONH,7)
// PIE3<CTMUIE>
extern volatile __bit                   CTMUIE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 CTMUIE_bit          _BIT_ACCESS(PIE3,3)
// PIR3<CTMUIF>
extern volatile __bit                   CTMUIF              __at(0x7D23);	// @ (0xFA4 * 8 + 3)
#define                                 CTMUIF_bit          _BIT_ACCESS(PIR3,3)
// IPR3<CTMUIP>
extern volatile __bit                   CTMUIP              __at(0x7D2B);	// @ (0xFA5 * 8 + 3)
#define                                 CTMUIP_bit          _BIT_ACCESS(IPR3,3)
// CTMUCONH<CTMUSIDL>
extern volatile __bit                   CTMUSIDL            __at(0x7ABD);	// @ (0xF57 * 8 + 5)
#define                                 CTMUSIDL_bit        _BIT_ACCESS(CTMUCONH,5)
// PORTD<CTPLS>
extern volatile __bit                   CTPLS               __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 CTPLS_bit           _BIT_ACCESS(PORTD,0)
// CTMUCONH<CTTRIG>
extern volatile __bit                   CTTRIG              __at(0x7AB8);	// @ (0xF57 * 8 + 0)
#define                                 CTTRIG_bit          _BIT_ACCESS(CTMUCONH,0)
// CVRCON<CVR0>
extern volatile __bit                   CVR0                __at(0x7DA8);	// @ (0xFB5 * 8 + 0)
#define                                 CVR0_bit            _BIT_ACCESS(CVRCON,0)
// CVRCON<CVR1>
extern volatile __bit                   CVR1                __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 CVR1_bit            _BIT_ACCESS(CVRCON,1)
// CVRCON<CVR2>
extern volatile __bit                   CVR2                __at(0x7DAA);	// @ (0xFB5 * 8 + 2)
#define                                 CVR2_bit            _BIT_ACCESS(CVRCON,2)
// CVRCON<CVR3>
extern volatile __bit                   CVR3                __at(0x7DAB);	// @ (0xFB5 * 8 + 3)
#define                                 CVR3_bit            _BIT_ACCESS(CVRCON,3)
// PORTF<CVREF>
extern volatile __bit                   CVREF               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 CVREF_bit           _BIT_ACCESS(PORTF,5)
// CVRCON<CVREN>
extern volatile __bit                   CVREN               __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 CVREN_bit           _BIT_ACCESS(CVRCON,7)
// CVRCON<CVROE>
extern volatile __bit                   CVROE               __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROE_bit           _BIT_ACCESS(CVRCON,6)
// CVRCON<CVROEN>
extern volatile __bit                   CVROEN              __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 CVROEN_bit          _BIT_ACCESS(CVRCON,6)
// CVRCON<CVRR>
extern volatile __bit                   CVRR                __at(0x7DAD);	// @ (0xFB5 * 8 + 5)
#define                                 CVRR_bit            _BIT_ACCESS(CVRCON,5)
// CVRCON<CVRSS>
extern volatile __bit                   CVRSS               __at(0x7DAC);	// @ (0xFB5 * 8 + 4)
#define                                 CVRSS_bit           _BIT_ACCESS(CVRCON,4)
// SSP1STAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DA1>
extern volatile __bit                   DA1                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA1_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSP1STAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x7B2C);	// @ (0xF65 * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7B2D);	// @ (0xF65 * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// CCP1CON<DCCP1X>
extern volatile __bit                   DCCP1X              __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 DCCP1X_bit          _BIT_ACCESS(CCP1CON,5)
// CCP1CON<DCCP1Y>
extern volatile __bit                   DCCP1Y              __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 DCCP1Y_bit          _BIT_ACCESS(CCP1CON,4)
// CCP2CON<DCCP2X>
extern volatile __bit                   DCCP2X              __at(0x7B2D);	// @ (0xF65 * 8 + 5)
#define                                 DCCP2X_bit          _BIT_ACCESS(CCP2CON,5)
// CCP2CON<DCCP2Y>
extern volatile __bit                   DCCP2Y              __at(0x7B2C);	// @ (0xF65 * 8 + 4)
#define                                 DCCP2Y_bit          _BIT_ACCESS(CCP2CON,4)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// PORTC<DT1>
extern volatile __bit                   DT1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<DT2>
extern volatile __bit                   DT2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 DT2_bit             _BIT_ACCESS(PORTG,2)
// BAUDCON1<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<DTRXP1>
extern volatile __bit                   DTRXP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP1_bit          _BIT_ACCESS(BAUDCON1,5)
// SSP1STAT<D_A>
extern volatile __bit                   D_A                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<D_NOT_A>
extern volatile __bit                   D_NOT_A             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_NOT_A_bit         _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<D_nA>
extern volatile __bit                   D_nA                __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSP1STAT,5)
// PR2<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 EBDIS_bit           _BIT_ACCESS(PR2,7)
// CTMUCONL<EDG1POL>
extern volatile __bit                   EDG1POL             __at(0x7AB4);	// @ (0xF56 * 8 + 4)
#define                                 EDG1POL_bit         _BIT_ACCESS(CTMUCONL,4)
// CTMUCONL<EDG1SEL0>
extern volatile __bit                   EDG1SEL0            __at(0x7AB2);	// @ (0xF56 * 8 + 2)
#define                                 EDG1SEL0_bit        _BIT_ACCESS(CTMUCONL,2)
// CTMUCONL<EDG1SEL1>
extern volatile __bit                   EDG1SEL1            __at(0x7AB3);	// @ (0xF56 * 8 + 3)
#define                                 EDG1SEL1_bit        _BIT_ACCESS(CTMUCONL,3)
// CTMUCONL<EDG1STAT>
extern volatile __bit                   EDG1STAT            __at(0x7AB0);	// @ (0xF56 * 8 + 0)
#define                                 EDG1STAT_bit        _BIT_ACCESS(CTMUCONL,0)
// CTMUCONL<EDG2POL>
extern volatile __bit                   EDG2POL             __at(0x7AB7);	// @ (0xF56 * 8 + 7)
#define                                 EDG2POL_bit         _BIT_ACCESS(CTMUCONL,7)
// CTMUCONL<EDG2SEL0>
extern volatile __bit                   EDG2SEL0            __at(0x7AB5);	// @ (0xF56 * 8 + 5)
#define                                 EDG2SEL0_bit        _BIT_ACCESS(CTMUCONL,5)
// CTMUCONL<EDG2SEL1>
extern volatile __bit                   EDG2SEL1            __at(0x7AB6);	// @ (0xF56 * 8 + 6)
#define                                 EDG2SEL1_bit        _BIT_ACCESS(CTMUCONL,6)
// CTMUCONL<EDG2STAT>
extern volatile __bit                   EDG2STAT            __at(0x7AB1);	// @ (0xF56 * 8 + 1)
#define                                 EDG2STAT_bit        _BIT_ACCESS(CTMUCONL,1)
// CTMUCONH<EDGEN>
extern volatile __bit                   EDGEN               __at(0x7ABB);	// @ (0xF57 * 8 + 3)
#define                                 EDGEN_bit           _BIT_ACCESS(CTMUCONH,3)
// CTMUCONH<EDGSEQEN>
extern volatile __bit                   EDGSEQEN            __at(0x7ABA);	// @ (0xF57 * 8 + 2)
#define                                 EDGSEQEN_bit        _BIT_ACCESS(CTMUCONH,2)
// RCSTA1<FERR1>
extern volatile __bit                   FERR1               __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR1_bit           _BIT_ACCESS(RCSTA1,2)
// RCSTA2<FERR2>
extern volatile __bit                   FERR2               __at(0x7B02);	// @ (0xF60 * 8 + 2)
#define                                 FERR2_bit           _BIT_ACCESS(RCSTA2,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// SSP1CON2<GCEN>
extern volatile __bit                   GCEN                __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSP1CON2,7)
// SSP1CON2<GCEN1>
extern volatile __bit                   GCEN1               __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN1_bit           _BIT_ACCESS(SSP1CON2,7)
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
// RTCCFG<HALFSEC>
extern volatile __bit                   HALFSEC             __at(0x7AFB);	// @ (0xF5F * 8 + 3)
#define                                 HALFSEC_bit         _BIT_ACCESS(RTCCFG,3)
// SSP1STAT<I2C_DAT>
extern volatile __bit                   I2C_DAT             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 I2C_DAT_bit         _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 I2C_READ_bit        _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 I2C_START_bit       _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 I2C_STOP_bit        _BIT_ACCESS(SSP1STAT,4)
// CTMUCONH<IDISSEN>
extern volatile __bit                   IDISSEN             __at(0x7AB9);	// @ (0xF57 * 8 + 1)
#define                                 IDISSEN_bit         _BIT_ACCESS(CTMUCONH,1)
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(OSCCON,7)
// PORTB<INT0>
extern volatile __bit                   INT0                __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 INT0_bit            _BIT_ACCESS(PORTB,0)
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
// PORTB<INT1>
extern volatile __bit                   INT1                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 INT1_bit            _BIT_ACCESS(PORTB,1)
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
// PORTB<INT2>
extern volatile __bit                   INT2                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 INT2_bit            _BIT_ACCESS(PORTB,2)
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
// PORTB<INT3>
extern volatile __bit                   INT3                __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 INT3_bit            _BIT_ACCESS(PORTB,3)
// INTCON3<INT3E>
extern volatile __bit                   INT3E               __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3E_bit           _BIT_ACCESS(INTCON3,5)
// INTCON3<INT3F>
extern volatile __bit                   INT3F               __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3F_bit           _BIT_ACCESS(INTCON3,2)
// INTCON3<INT3IE>
extern volatile __bit                   INT3IE              __at(0x7F85);	// @ (0xFF0 * 8 + 5)
#define                                 INT3IE_bit          _BIT_ACCESS(INTCON3,5)
// INTCON3<INT3IF>
extern volatile __bit                   INT3IF              __at(0x7F82);	// @ (0xFF0 * 8 + 2)
#define                                 INT3IF_bit          _BIT_ACCESS(INTCON3,2)
// INTCON2<INT3IP>
extern volatile __bit                   INT3IP              __at(0x7F89);	// @ (0xFF1 * 8 + 1)
#define                                 INT3IP_bit          _BIT_ACCESS(INTCON2,1)
// INTCON2<INT3P>
extern volatile __bit                   INT3P               __at(0x7F89);	// @ (0xFF1 * 8 + 1)
#define                                 INT3P_bit           _BIT_ACCESS(INTCON2,1)
// INTCON2<INTEDG0>
extern volatile __bit                   INTEDG0             __at(0x7F8E);	// @ (0xFF1 * 8 + 6)
#define                                 INTEDG0_bit         _BIT_ACCESS(INTCON2,6)
// INTCON2<INTEDG1>
extern volatile __bit                   INTEDG1             __at(0x7F8D);	// @ (0xFF1 * 8 + 5)
#define                                 INTEDG1_bit         _BIT_ACCESS(INTCON2,5)
// INTCON2<INTEDG2>
extern volatile __bit                   INTEDG2             __at(0x7F8C);	// @ (0xFF1 * 8 + 4)
#define                                 INTEDG2_bit         _BIT_ACCESS(INTCON2,4)
// INTCON2<INTEDG3>
extern volatile __bit                   INTEDG3             __at(0x7F8B);	// @ (0xFF1 * 8 + 3)
#define                                 INTEDG3_bit         _BIT_ACCESS(INTCON2,3)
// OSCTUNE<INTSRC>
extern volatile __bit                   INTSRC              __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 INTSRC_bit          _BIT_ACCESS(OSCTUNE,7)
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
// CTMUICON<IRNG0>
extern volatile __bit                   IRNG0               __at(0x7AA8);	// @ (0xF55 * 8 + 0)
#define                                 IRNG0_bit           _BIT_ACCESS(CTMUICON,0)
// CTMUICON<IRNG1>
extern volatile __bit                   IRNG1               __at(0x7AA9);	// @ (0xF55 * 8 + 1)
#define                                 IRNG1_bit           _BIT_ACCESS(CTMUICON,1)
// CTMUICON<ITRIM0>
extern volatile __bit                   ITRIM0              __at(0x7AAA);	// @ (0xF55 * 8 + 2)
#define                                 ITRIM0_bit          _BIT_ACCESS(CTMUICON,2)
// CTMUICON<ITRIM1>
extern volatile __bit                   ITRIM1              __at(0x7AAB);	// @ (0xF55 * 8 + 3)
#define                                 ITRIM1_bit          _BIT_ACCESS(CTMUICON,3)
// CTMUICON<ITRIM2>
extern volatile __bit                   ITRIM2              __at(0x7AAC);	// @ (0xF55 * 8 + 4)
#define                                 ITRIM2_bit          _BIT_ACCESS(CTMUICON,4)
// CTMUICON<ITRIM3>
extern volatile __bit                   ITRIM3              __at(0x7AAD);	// @ (0xF55 * 8 + 5)
#define                                 ITRIM3_bit          _BIT_ACCESS(CTMUICON,5)
// CTMUICON<ITRIM4>
extern volatile __bit                   ITRIM4              __at(0x7AAE);	// @ (0xF55 * 8 + 6)
#define                                 ITRIM4_bit          _BIT_ACCESS(CTMUICON,6)
// CTMUICON<ITRIM5>
extern volatile __bit                   ITRIM5              __at(0x7AAF);	// @ (0xF55 * 8 + 7)
#define                                 ITRIM5_bit          _BIT_ACCESS(CTMUICON,7)
// PORTB<KBI0>
extern volatile __bit                   KBI0                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 KBI0_bit            _BIT_ACCESS(PORTB,4)
// PORTB<KBI1>
extern volatile __bit                   KBI1                __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 KBI1_bit            _BIT_ACCESS(PORTB,5)
// PORTB<KBI2>
extern volatile __bit                   KBI2                __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 KBI2_bit            _BIT_ACCESS(PORTB,6)
// PORTB<KBI3>
extern volatile __bit                   KBI3                __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 KBI3_bit            _BIT_ACCESS(PORTB,7)
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
// LATA<LA5>
extern volatile __bit                   LA5                 __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LA5_bit             _BIT_ACCESS(LATA,5)
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
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
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
// LATD<LATD0>
extern volatile __bit                   LATD0               __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LATD0_bit           _BIT_ACCESS(LATD,0)
// LATD<LATD1>
extern volatile __bit                   LATD1               __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LATD1_bit           _BIT_ACCESS(LATD,1)
// LATD<LATD2>
extern volatile __bit                   LATD2               __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LATD2_bit           _BIT_ACCESS(LATD,2)
// LATD<LATD3>
extern volatile __bit                   LATD3               __at(0x7C63);	// @ (0xF8C * 8 + 3)
#define                                 LATD3_bit           _BIT_ACCESS(LATD,3)
// LATD<LATD4>
extern volatile __bit                   LATD4               __at(0x7C64);	// @ (0xF8C * 8 + 4)
#define                                 LATD4_bit           _BIT_ACCESS(LATD,4)
// LATD<LATD5>
extern volatile __bit                   LATD5               __at(0x7C65);	// @ (0xF8C * 8 + 5)
#define                                 LATD5_bit           _BIT_ACCESS(LATD,5)
// LATD<LATD6>
extern volatile __bit                   LATD6               __at(0x7C66);	// @ (0xF8C * 8 + 6)
#define                                 LATD6_bit           _BIT_ACCESS(LATD,6)
// LATD<LATD7>
extern volatile __bit                   LATD7               __at(0x7C67);	// @ (0xF8C * 8 + 7)
#define                                 LATD7_bit           _BIT_ACCESS(LATD,7)
// LATE<LATE0>
extern volatile __bit                   LATE0               __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LATE0_bit           _BIT_ACCESS(LATE,0)
// LATE<LATE1>
extern volatile __bit                   LATE1               __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LATE1_bit           _BIT_ACCESS(LATE,1)
// LATE<LATE3>
extern volatile __bit                   LATE3               __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LATE3_bit           _BIT_ACCESS(LATE,3)
// LATE<LATE4>
extern volatile __bit                   LATE4               __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LATE4_bit           _BIT_ACCESS(LATE,4)
// LATE<LATE5>
extern volatile __bit                   LATE5               __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LATE5_bit           _BIT_ACCESS(LATE,5)
// LATE<LATE6>
extern volatile __bit                   LATE6               __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LATE6_bit           _BIT_ACCESS(LATE,6)
// LATE<LATE7>
extern volatile __bit                   LATE7               __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LATE7_bit           _BIT_ACCESS(LATE,7)
// LATF<LATF1>
extern volatile __bit                   LATF1               __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LATF1_bit           _BIT_ACCESS(LATF,1)
// LATF<LATF2>
extern volatile __bit                   LATF2               __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LATF2_bit           _BIT_ACCESS(LATF,2)
// LATF<LATF3>
extern volatile __bit                   LATF3               __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LATF3_bit           _BIT_ACCESS(LATF,3)
// LATF<LATF4>
extern volatile __bit                   LATF4               __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LATF4_bit           _BIT_ACCESS(LATF,4)
// LATF<LATF5>
extern volatile __bit                   LATF5               __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LATF5_bit           _BIT_ACCESS(LATF,5)
// LATF<LATF6>
extern volatile __bit                   LATF6               __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LATF6_bit           _BIT_ACCESS(LATF,6)
// LATF<LATF7>
extern volatile __bit                   LATF7               __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LATF7_bit           _BIT_ACCESS(LATF,7)
// LATG<LATG0>
extern volatile __bit                   LATG0               __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LATG0_bit           _BIT_ACCESS(LATG,0)
// LATG<LATG1>
extern volatile __bit                   LATG1               __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LATG1_bit           _BIT_ACCESS(LATG,1)
// LATG<LATG2>
extern volatile __bit                   LATG2               __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LATG2_bit           _BIT_ACCESS(LATG,2)
// LATG<LATG3>
extern volatile __bit                   LATG3               __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LATG3_bit           _BIT_ACCESS(LATG,3)
// LATG<LATG4>
extern volatile __bit                   LATG4               __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LATG4_bit           _BIT_ACCESS(LATG,4)
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
// LCDPS<LCDA>
extern volatile __bit                   LCDA                __at(0x7D55);	// @ (0xFAA * 8 + 5)
#define                                 LCDA_bit            _BIT_ACCESS(LCDPS,5)
// PORTG<LCDBIAS0>
extern volatile __bit                   LCDBIAS0            __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 LCDBIAS0_bit        _BIT_ACCESS(PORTG,0)
// PORTE<LCDBIAS1>
extern volatile __bit                   LCDBIAS1            __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 LCDBIAS1_bit        _BIT_ACCESS(PORTE,0)
// PORTE<LCDBIAS2>
extern volatile __bit                   LCDBIAS2            __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 LCDBIAS2_bit        _BIT_ACCESS(PORTE,1)
// LCDCON<LCDCS0>
extern volatile __bit                   LCDCS0              __at(0x7D42);	// @ (0xFA8 * 8 + 2)
#define                                 LCDCS0_bit          _BIT_ACCESS(LCDCON,2)
// LCDCON<LCDCS1>
extern volatile __bit                   LCDCS1              __at(0x7D43);	// @ (0xFA8 * 8 + 3)
#define                                 LCDCS1_bit          _BIT_ACCESS(LCDCON,3)
// LCDCON<LCDEN>
extern volatile __bit                   LCDEN               __at(0x7D47);	// @ (0xFA8 * 8 + 7)
#define                                 LCDEN_bit           _BIT_ACCESS(LCDCON,7)
// PIE3<LCDIE>
extern volatile __bit                   LCDIE               __at(0x7D1E);	// @ (0xFA3 * 8 + 6)
#define                                 LCDIE_bit           _BIT_ACCESS(PIE3,6)
// PIR3<LCDIF>
extern volatile __bit                   LCDIF               __at(0x7D26);	// @ (0xFA4 * 8 + 6)
#define                                 LCDIF_bit           _BIT_ACCESS(PIR3,6)
// IPR3<LCDIP>
extern volatile __bit                   LCDIP               __at(0x7D2E);	// @ (0xFA5 * 8 + 6)
#define                                 LCDIP_bit           _BIT_ACCESS(IPR3,6)
// LCDPS<LCDPS0>
extern volatile __bit                   LCDPS0              __at(0x7D50);	// @ (0xFAA * 8 + 0)
#define                                 LCDPS0_bit          _BIT_ACCESS(LCDPS,0)
// LCDPS<LCDPS1>
extern volatile __bit                   LCDPS1              __at(0x7D51);	// @ (0xFAA * 8 + 1)
#define                                 LCDPS1_bit          _BIT_ACCESS(LCDPS,1)
// LCDPS<LCDPS2>
extern volatile __bit                   LCDPS2              __at(0x7D52);	// @ (0xFAA * 8 + 2)
#define                                 LCDPS2_bit          _BIT_ACCESS(LCDPS,2)
// LCDPS<LCDPS3>
extern volatile __bit                   LCDPS3              __at(0x7D53);	// @ (0xFAA * 8 + 3)
#define                                 LCDPS3_bit          _BIT_ACCESS(LCDPS,3)
// LCDCON<LCDSLPEN>
extern volatile __bit                   LCDSLPEN            __at(0x7D46);	// @ (0xFA8 * 8 + 6)
#define                                 LCDSLPEN_bit        _BIT_ACCESS(LCDCON,6)
// LCDCON<LCDWERR>
extern volatile __bit                   LCDWERR             __at(0x7D45);	// @ (0xFA8 * 8 + 5)
#define                                 LCDWERR_bit         _BIT_ACCESS(LCDCON,5)
// LATD<LD0>
extern volatile __bit                   LD0                 __at(0x7C60);	// @ (0xF8C * 8 + 0)
#define                                 LD0_bit             _BIT_ACCESS(LATD,0)
// LATD<LD1>
extern volatile __bit                   LD1                 __at(0x7C61);	// @ (0xF8C * 8 + 1)
#define                                 LD1_bit             _BIT_ACCESS(LATD,1)
// LATD<LD2>
extern volatile __bit                   LD2                 __at(0x7C62);	// @ (0xF8C * 8 + 2)
#define                                 LD2_bit             _BIT_ACCESS(LATD,2)
// LATD<LD3>
extern volatile __bit                   LD3                 __at(0x7C63);	// @ (0xF8C * 8 + 3)
#define                                 LD3_bit             _BIT_ACCESS(LATD,3)
// LATD<LD4>
extern volatile __bit                   LD4                 __at(0x7C64);	// @ (0xF8C * 8 + 4)
#define                                 LD4_bit             _BIT_ACCESS(LATD,4)
// LATD<LD5>
extern volatile __bit                   LD5                 __at(0x7C65);	// @ (0xF8C * 8 + 5)
#define                                 LD5_bit             _BIT_ACCESS(LATD,5)
// LATD<LD6>
extern volatile __bit                   LD6                 __at(0x7C66);	// @ (0xF8C * 8 + 6)
#define                                 LD6_bit             _BIT_ACCESS(LATD,6)
// LATD<LD7>
extern volatile __bit                   LD7                 __at(0x7C67);	// @ (0xF8C * 8 + 7)
#define                                 LD7_bit             _BIT_ACCESS(LATD,7)
// LATE<LE0>
extern volatile __bit                   LE0                 __at(0x7C68);	// @ (0xF8D * 8 + 0)
#define                                 LE0_bit             _BIT_ACCESS(LATE,0)
// LATE<LE1>
extern volatile __bit                   LE1                 __at(0x7C69);	// @ (0xF8D * 8 + 1)
#define                                 LE1_bit             _BIT_ACCESS(LATE,1)
// LATE<LE3>
extern volatile __bit                   LE3                 __at(0x7C6B);	// @ (0xF8D * 8 + 3)
#define                                 LE3_bit             _BIT_ACCESS(LATE,3)
// LATE<LE4>
extern volatile __bit                   LE4                 __at(0x7C6C);	// @ (0xF8D * 8 + 4)
#define                                 LE4_bit             _BIT_ACCESS(LATE,4)
// LATE<LE5>
extern volatile __bit                   LE5                 __at(0x7C6D);	// @ (0xF8D * 8 + 5)
#define                                 LE5_bit             _BIT_ACCESS(LATE,5)
// LATE<LE6>
extern volatile __bit                   LE6                 __at(0x7C6E);	// @ (0xF8D * 8 + 6)
#define                                 LE6_bit             _BIT_ACCESS(LATE,6)
// LATE<LE7>
extern volatile __bit                   LE7                 __at(0x7C6F);	// @ (0xF8D * 8 + 7)
#define                                 LE7_bit             _BIT_ACCESS(LATE,7)
// LATF<LF1>
extern volatile __bit                   LF1                 __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 LF1_bit             _BIT_ACCESS(LATF,1)
// LATF<LF2>
extern volatile __bit                   LF2                 __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 LF2_bit             _BIT_ACCESS(LATF,2)
// LATF<LF3>
extern volatile __bit                   LF3                 __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 LF3_bit             _BIT_ACCESS(LATF,3)
// LATF<LF4>
extern volatile __bit                   LF4                 __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 LF4_bit             _BIT_ACCESS(LATF,4)
// LATF<LF5>
extern volatile __bit                   LF5                 __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 LF5_bit             _BIT_ACCESS(LATF,5)
// LATF<LF6>
extern volatile __bit                   LF6                 __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 LF6_bit             _BIT_ACCESS(LATF,6)
// LATF<LF7>
extern volatile __bit                   LF7                 __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 LF7_bit             _BIT_ACCESS(LATF,7)
// LATG<LG0>
extern volatile __bit                   LG0                 __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 LG0_bit             _BIT_ACCESS(LATG,0)
// LATG<LG1>
extern volatile __bit                   LG1                 __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 LG1_bit             _BIT_ACCESS(LATG,1)
// LATG<LG2>
extern volatile __bit                   LG2                 __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 LG2_bit             _BIT_ACCESS(LATG,2)
// LATG<LG3>
extern volatile __bit                   LG3                 __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 LG3_bit             _BIT_ACCESS(LATG,3)
// LATG<LG4>
extern volatile __bit                   LG4                 __at(0x7C7C);	// @ (0xF8F * 8 + 4)
#define                                 LG4_bit             _BIT_ACCESS(LATG,4)
// LCDCON<LMUX0>
extern volatile __bit                   LMUX0               __at(0x7D40);	// @ (0xFA8 * 8 + 0)
#define                                 LMUX0_bit           _BIT_ACCESS(LCDCON,0)
// LCDCON<LMUX1>
extern volatile __bit                   LMUX1               __at(0x7D41);	// @ (0xFA8 * 8 + 1)
#define                                 LMUX1_bit           _BIT_ACCESS(LCDCON,1)
// LCDPS<LP0>
extern volatile __bit                   LP0                 __at(0x7D50);	// @ (0xFAA * 8 + 0)
#define                                 LP0_bit             _BIT_ACCESS(LCDPS,0)
// LCDPS<LP1>
extern volatile __bit                   LP1                 __at(0x7D51);	// @ (0xFAA * 8 + 1)
#define                                 LP1_bit             _BIT_ACCESS(LCDPS,1)
// LCDPS<LP2>
extern volatile __bit                   LP2                 __at(0x7D52);	// @ (0xFAA * 8 + 2)
#define                                 LP2_bit             _BIT_ACCESS(LCDPS,2)
// LCDPS<LP3>
extern volatile __bit                   LP3                 __at(0x7D53);	// @ (0xFAA * 8 + 3)
#define                                 LP3_bit             _BIT_ACCESS(LCDPS,3)
// PIE2<LVDIE>
extern volatile __bit                   LVDIE               __at(0x7D02);	// @ (0xFA0 * 8 + 2)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<LVDIF>
extern volatile __bit                   LVDIF               __at(0x7D0A);	// @ (0xFA1 * 8 + 2)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR2,2)
// PORTA<LVDIN>
extern volatile __bit                   LVDIN               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 LVDIN_bit           _BIT_ACCESS(PORTA,5)
// IPR2<LVDIP>
extern volatile __bit                   LVDIP               __at(0x7D12);	// @ (0xFA2 * 8 + 2)
#define                                 LVDIP_bit           _BIT_ACCESS(IPR2,2)
// LCDREG<MODE13>
extern volatile __bit                   MODE13              __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 MODE13_bit          _BIT_ACCESS(LCDREG,2)
// SSP1ADD<MSK0>
extern volatile __bit _DEPRECATED       MSK0                __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK01>
extern volatile __bit                   MSK01               __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK01_bit           _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK1>
extern volatile __bit _DEPRECATED       MSK1                __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK11>
extern volatile __bit                   MSK11               __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK11_bit           _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK2>
extern volatile __bit _DEPRECATED       MSK2                __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK21>
extern volatile __bit                   MSK21               __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK21_bit           _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK3>
extern volatile __bit _DEPRECATED       MSK3                __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK31>
extern volatile __bit                   MSK31               __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK31_bit           _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK4>
extern volatile __bit _DEPRECATED       MSK4                __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK41>
extern volatile __bit                   MSK41               __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK41_bit           _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK5>
extern volatile __bit _DEPRECATED       MSK5                __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK51>
extern volatile __bit                   MSK51               __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK51_bit           _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK6>
extern volatile __bit _DEPRECATED       MSK6                __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK61>
extern volatile __bit                   MSK61               __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK61_bit           _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK7>
extern volatile __bit _DEPRECATED       MSK7                __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSP1ADD,7)
// SSP1ADD<MSK71>
extern volatile __bit                   MSK71               __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK71_bit           _BIT_ACCESS(SSP1ADD,7)
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        _BIT_ACCESS(STATUS,4)
// SSP1STAT<NOT_A>
extern volatile __bit                   NOT_A               __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_A_bit           _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<NOT_ADDRESS>
extern volatile __bit                   NOT_ADDRESS         __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_ADDRESS_bit     _BIT_ACCESS(SSP1STAT,5)
// RCON<NOT_BOR>
extern volatile __bit                   NOT_BOR             __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 NOT_BOR_bit         _BIT_ACCESS(RCON,0)
// RCON<NOT_CM>
extern volatile __bit                   NOT_CM              __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 NOT_CM_bit          _BIT_ACCESS(RCON,5)
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 NOT_DONE_bit        _BIT_ACCESS(ADCON0,1)
// RCON<NOT_PD>
extern volatile __bit                   NOT_PD              __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 NOT_PD_bit          _BIT_ACCESS(RCON,2)
// RCON<NOT_POR>
extern volatile __bit                   NOT_POR             __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 NOT_POR_bit         _BIT_ACCESS(RCON,1)
// INTCON2<NOT_RBPU>
extern volatile __bit                   NOT_RBPU            __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 NOT_RBPU_bit        _BIT_ACCESS(INTCON2,7)
// RCSTA2<NOT_RC8>
extern volatile __bit _DEPRECATED       NOT_RC8             __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 NOT_RC8_bit         _BIT_ACCESS(RCSTA2,6)
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// T3CON<NOT_T3SYNC>
extern volatile __bit                   NOT_T3SYNC          __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 NOT_T3SYNC_bit      _BIT_ACCESS(T3CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// TXSTA2<NOT_TX8>
extern volatile __bit _DEPRECATED       NOT_TX8             __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 NOT_TX8_bit         _BIT_ACCESS(TXSTA2,6)
// SSP1STAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSP1STAT,2)
// RCSTA1<OERR1>
extern volatile __bit                   OERR1               __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR1_bit           _BIT_ACCESS(RCSTA1,1)
// RCSTA2<OERR2>
extern volatile __bit                   OERR2               __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 OERR2_bit           _BIT_ACCESS(RCSTA2,1)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,7)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,6)
// PIE2<OSCFIE>
extern volatile __bit                   OSCFIE              __at(0x7D07);	// @ (0xFA0 * 8 + 7)
#define                                 OSCFIE_bit          _BIT_ACCESS(PIE2,7)
// PIR2<OSCFIF>
extern volatile __bit                   OSCFIF              __at(0x7D0F);	// @ (0xFA1 * 8 + 7)
#define                                 OSCFIF_bit          _BIT_ACCESS(PIR2,7)
// IPR2<OSCFIP>
extern volatile __bit                   OSCFIP              __at(0x7D17);	// @ (0xFA2 * 8 + 7)
#define                                 OSCFIP_bit          _BIT_ACCESS(IPR2,7)
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x7E9B);	// @ (0xFD3 * 8 + 3)
#define                                 OSTS_bit            _BIT_ACCESS(OSCCON,3)
// STATUS<OV>
extern volatile __bit                   OV                  __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OV_bit              _BIT_ACCESS(STATUS,3)
// STATUS<OVERFLOW>
extern volatile __bit                   OVERFLOW            __at(0x7EC3);	// @ (0xFD8 * 8 + 3)
#define                                 OVERFLOW_bit        _BIT_ACCESS(STATUS,3)
// PORTC<PA1>
extern volatile __bit                   PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// PORTE<PA2E>
extern volatile __bit                   PA2E                __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 PA2E_bit            _BIT_ACCESS(PORTE,7)
// PORTE<PB1E>
extern volatile __bit                   PB1E                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 PB1E_bit            _BIT_ACCESS(PORTE,6)
// PORTE<PB3E>
extern volatile __bit                   PB3E                __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 PB3E_bit            _BIT_ACCESS(PORTE,4)
// PORTE<PC1E>
extern volatile __bit                   PC1E                __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 PC1E_bit            _BIT_ACCESS(PORTE,5)
// PORTE<PC2>
extern volatile __bit                   PC2                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 PC2_bit             _BIT_ACCESS(PORTE,1)
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            _BIT_ACCESS(PORTE,3)
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// ADCON1<PCFG3>
extern volatile __bit                   PCFG3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 PCFG3_bit           _BIT_ACCESS(ADCON1,3)
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              _BIT_ACCESS(RCON,2)
// PORTE<PD2>
extern volatile __bit                   PD2                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 PD2_bit             _BIT_ACCESS(PORTE,0)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       _BIT_ACCESS(INTCON,6)
// SSP1CON2<PEN>
extern volatile __bit                   PEN                 __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<PEN1>
extern volatile __bit                   PEN1                __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN1_bit            _BIT_ACCESS(SSP1CON2,2)
// PORTB<PGC>
extern volatile __bit                   PGC                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 PGC_bit             _BIT_ACCESS(PORTB,6)
// PORTB<PGD>
extern volatile __bit                   PGD                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 PGD_bit             _BIT_ACCESS(PORTB,7)
// OSCTUNE<PLLEN>
extern volatile __bit                   PLLEN               __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 PLLEN_bit           _BIT_ACCESS(OSCTUNE,6)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PORTA<RA6>
extern volatile __bit                   RA6                 __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTA<RA7>
extern volatile __bit                   RA7                 __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTA,7)
// PORTB<RB0>
extern volatile __bit                   RB0                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit                   RB1                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit                   RB2                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit                   RB3                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
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
extern volatile __bit                   RC0                 __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
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
extern volatile __bit                   RC2                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PIE3<RC2IE>
extern volatile __bit                   RC2IE               __at(0x7D1D);	// @ (0xFA3 * 8 + 5)
#define                                 RC2IE_bit           _BIT_ACCESS(PIE3,5)
// PIR3<RC2IF>
extern volatile __bit                   RC2IF               __at(0x7D25);	// @ (0xFA4 * 8 + 5)
#define                                 RC2IF_bit           _BIT_ACCESS(PIR3,5)
// IPR3<RC2IP>
extern volatile __bit                   RC2IP               __at(0x7D2D);	// @ (0xFA5 * 8 + 5)
#define                                 RC2IP_bit           _BIT_ACCESS(IPR3,5)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RCSTA2<RC8_92>
extern volatile __bit                   RC8_92              __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RC8_92_bit          _BIT_ACCESS(RCSTA2,6)
// RCSTA2<RC92>
extern volatile __bit                   RC92                __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RC92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA2<RCD82>
extern volatile __bit                   RCD82               __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 RCD82_bit           _BIT_ACCESS(RCSTA2,0)
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN1_bit           _BIT_ACCESS(SSP1CON2,3)
// BAUDCON1<RCIDL>
extern volatile __bit                   RCIDL               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCIDL1>
extern volatile __bit                   RCIDL1              __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL1_bit          _BIT_ACCESS(BAUDCON1,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// IPR1<RCIP>
extern volatile __bit                   RCIP                __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RCIP_bit            _BIT_ACCESS(IPR1,5)
// BAUDCON1<RCMT>
extern volatile __bit                   RCMT                __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCMT_bit            _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCMT1>
extern volatile __bit                   RCMT1               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCMT1_bit           _BIT_ACCESS(BAUDCON1,6)
// PORTD<RD0>
extern volatile __bit                   RD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit                   RD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 RD163_bit           _BIT_ACCESS(T3CON,7)
// PORTD<RD2>
extern volatile __bit                   RD2                 __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit                   RD3                 __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit                   RD4                 __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit                   RD5                 __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit                   RD6                 __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit                   RD7                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RDE>
extern volatile __bit                   RDE                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RDE_bit             _BIT_ACCESS(PORTE,0)
// PORTG<RDPU>
extern volatile __bit                   RDPU                __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 RDPU_bit            _BIT_ACCESS(PORTG,7)
// PORTE<RE0>
extern volatile __bit                   RE0                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit                   RE1                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// PORTE<RE4>
extern volatile __bit                   RE4                 __at(0x7C24);	// @ (0xF84 * 8 + 4)
#define                                 RE4_bit             _BIT_ACCESS(PORTE,4)
// PORTE<RE5>
extern volatile __bit                   RE5                 __at(0x7C25);	// @ (0xF84 * 8 + 5)
#define                                 RE5_bit             _BIT_ACCESS(PORTE,5)
// PORTE<RE6>
extern volatile __bit                   RE6                 __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit                   RE7                 __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// SSP1STAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSP1STAT,2)
// WDTCON<REGSLP>
extern volatile __bit                   REGSLP              __at(0x7E8F);	// @ (0xFD1 * 8 + 7)
#define                                 REGSLP_bit          _BIT_ACCESS(WDTCON,7)
// PORTG<REPU>
extern volatile __bit                   REPU                __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 REPU_bit            _BIT_ACCESS(PORTG,6)
// PORTF<RF1>
extern volatile __bit                   RF1                 __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 RF1_bit             _BIT_ACCESS(PORTF,1)
// PORTF<RF2>
extern volatile __bit                   RF2                 __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 RF2_bit             _BIT_ACCESS(PORTF,2)
// PORTF<RF3>
extern volatile __bit                   RF3                 __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 RF3_bit             _BIT_ACCESS(PORTF,3)
// PORTF<RF4>
extern volatile __bit                   RF4                 __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 RF4_bit             _BIT_ACCESS(PORTF,4)
// PORTF<RF5>
extern volatile __bit                   RF5                 __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 RF5_bit             _BIT_ACCESS(PORTF,5)
// PORTF<RF6>
extern volatile __bit                   RF6                 __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 RF6_bit             _BIT_ACCESS(PORTF,6)
// PORTF<RF7>
extern volatile __bit                   RF7                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 RF7_bit             _BIT_ACCESS(PORTF,7)
// PORTG<RG0>
extern volatile __bit                   RG0                 __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 RG0_bit             _BIT_ACCESS(PORTG,0)
// PORTG<RG1>
extern volatile __bit                   RG1                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 RG1_bit             _BIT_ACCESS(PORTG,1)
// PORTG<RG2>
extern volatile __bit                   RG2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RG2_bit             _BIT_ACCESS(PORTG,2)
// PORTG<RG3>
extern volatile __bit                   RG3                 __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 RG3_bit             _BIT_ACCESS(PORTG,3)
// PORTG<RG4>
extern volatile __bit                   RG4                 __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 RG4_bit             _BIT_ACCESS(PORTG,4)
// PORTG<RG5>
extern volatile __bit                   RG5                 __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 RG5_bit             _BIT_ACCESS(PORTG,5)
// PORTG<RG6>
extern volatile __bit                   RG6                 __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 RG6_bit             _BIT_ACCESS(PORTG,6)
// PORTG<RG7>
extern volatile __bit                   RG7                 __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 RG7_bit             _BIT_ACCESS(PORTG,7)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTG<RJPU>
extern volatile __bit _DEPRECATED       RJPU                __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 RJPU_bit            _BIT_ACCESS(PORTG,5)
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN1_bit           _BIT_ACCESS(SSP1CON2,1)
// PORTG<RTCC>
extern volatile __bit                   RTCC                __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 RTCC_bit            _BIT_ACCESS(PORTG,4)
// PIE3<RTCCIE>
extern volatile __bit                   RTCCIE              __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 RTCCIE_bit          _BIT_ACCESS(PIE3,0)
// PIR3<RTCCIF>
extern volatile __bit                   RTCCIF              __at(0x7D20);	// @ (0xFA4 * 8 + 0)
#define                                 RTCCIF_bit          _BIT_ACCESS(PIR3,0)
// IPR3<RTCCIP>
extern volatile __bit                   RTCCIP              __at(0x7D28);	// @ (0xFA5 * 8 + 0)
#define                                 RTCCIP_bit          _BIT_ACCESS(IPR3,0)
// RTCCFG<RTCEN>
extern volatile __bit                   RTCEN               __at(0x7AFF);	// @ (0xF5F * 8 + 7)
#define                                 RTCEN_bit           _BIT_ACCESS(RTCCFG,7)
// RTCCFG<RTCOE>
extern volatile __bit                   RTCOE               __at(0x7AFA);	// @ (0xF5F * 8 + 2)
#define                                 RTCOE_bit           _BIT_ACCESS(RTCCFG,2)
// RTCCFG<RTCPTR0>
extern volatile __bit                   RTCPTR0             __at(0x7AF8);	// @ (0xF5F * 8 + 0)
#define                                 RTCPTR0_bit         _BIT_ACCESS(RTCCFG,0)
// RTCCFG<RTCPTR1>
extern volatile __bit                   RTCPTR1             __at(0x7AF9);	// @ (0xF5F * 8 + 1)
#define                                 RTCPTR1_bit         _BIT_ACCESS(RTCCFG,1)
// RTCCFG<RTCSYNC>
extern volatile __bit                   RTCSYNC             __at(0x7AFC);	// @ (0xF5F * 8 + 4)
#define                                 RTCSYNC_bit         _BIT_ACCESS(RTCCFG,4)
// RTCCFG<RTCWREN>
extern volatile __bit                   RTCWREN             __at(0x7AFD);	// @ (0xF5F * 8 + 5)
#define                                 RTCWREN_bit         _BIT_ACCESS(RTCCFG,5)
// PADCFG1<RTSECSEL0>
extern volatile __bit                   RTSECSEL0           __at(0x7AA1);	// @ (0xF54 * 8 + 1)
#define                                 RTSECSEL0_bit       _BIT_ACCESS(PADCFG1,1)
// PADCFG1<RTSECSEL1>
extern volatile __bit                   RTSECSEL1           __at(0x7AA2);	// @ (0xF54 * 8 + 2)
#define                                 RTSECSEL1_bit       _BIT_ACCESS(PADCFG1,2)
// SSP1STAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<RW1>
extern volatile __bit                   RW1                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW1_bit             _BIT_ACCESS(SSP1STAT,2)
// PORTC<RX1>
extern volatile __bit                   RX1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX1_bit             _BIT_ACCESS(PORTC,7)
// PORTG<RX2>
extern volatile __bit                   RX2                 __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 RX2_bit             _BIT_ACCESS(PORTG,2)
// RCSTA1<RX91>
extern volatile __bit                   RX91                __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX91_bit            _BIT_ACCESS(RCSTA1,6)
// RCSTA2<RX92>
extern volatile __bit                   RX92                __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 RX92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA1<RX9D1>
extern volatile __bit                   RX9D1               __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D1_bit           _BIT_ACCESS(RCSTA1,0)
// RCSTA2<RX9D2>
extern volatile __bit                   RX9D2               __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 RX9D2_bit           _BIT_ACCESS(RCSTA2,0)
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
// BAUDCON1<RXCKP>
extern volatile __bit                   RXCKP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXCKP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP>
extern volatile __bit                   RXDTP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP1>
extern volatile __bit                   RXDTP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP1_bit          _BIT_ACCESS(BAUDCON1,5)
// SSP1STAT<R_NOT_W>
extern volatile __bit                   R_NOT_W             __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_NOT_W_bit         _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<R_nW>
extern volatile __bit                   R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSP1STAT,2)
// LCDDATA0<S00C0>
extern volatile __bit                   S00C0               __at(0x7DD8);	// @ (0xFBB * 8 + 0)
#define                                 S00C0_bit           _BIT_ACCESS(LCDDATA0,0)
// LCDDATA6<S00C1>
extern volatile __bit                   S00C1               __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 S00C1_bit           _BIT_ACCESS(LCDDATA6,0)
// LCDDATA12<S00C2>
extern volatile __bit                   S00C2               __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 S00C2_bit           _BIT_ACCESS(LCDDATA12,0)
// LCDDATA18<S00C3>
extern volatile __bit                   S00C3               __at(0x7BC0);	// @ (0xF78 * 8 + 0)
#define                                 S00C3_bit           _BIT_ACCESS(LCDDATA18,0)
// LCDDATA0<S01C0>
extern volatile __bit                   S01C0               __at(0x7DD9);	// @ (0xFBB * 8 + 1)
#define                                 S01C0_bit           _BIT_ACCESS(LCDDATA0,1)
// LCDDATA6<S01C1>
extern volatile __bit                   S01C1               __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 S01C1_bit           _BIT_ACCESS(LCDDATA6,1)
// LCDDATA12<S01C2>
extern volatile __bit                   S01C2               __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 S01C2_bit           _BIT_ACCESS(LCDDATA12,1)
// LCDDATA18<S01C3>
extern volatile __bit                   S01C3               __at(0x7BC1);	// @ (0xF78 * 8 + 1)
#define                                 S01C3_bit           _BIT_ACCESS(LCDDATA18,1)
// LCDDATA0<S02C0>
extern volatile __bit                   S02C0               __at(0x7DDA);	// @ (0xFBB * 8 + 2)
#define                                 S02C0_bit           _BIT_ACCESS(LCDDATA0,2)
// LCDDATA6<S02C1>
extern volatile __bit                   S02C1               __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 S02C1_bit           _BIT_ACCESS(LCDDATA6,2)
// LCDDATA12<S02C2>
extern volatile __bit                   S02C2               __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 S02C2_bit           _BIT_ACCESS(LCDDATA12,2)
// LCDDATA18<S02C3>
extern volatile __bit                   S02C3               __at(0x7BC2);	// @ (0xF78 * 8 + 2)
#define                                 S02C3_bit           _BIT_ACCESS(LCDDATA18,2)
// LCDDATA0<S03C0>
extern volatile __bit                   S03C0               __at(0x7DDB);	// @ (0xFBB * 8 + 3)
#define                                 S03C0_bit           _BIT_ACCESS(LCDDATA0,3)
// LCDDATA6<S03C1>
extern volatile __bit                   S03C1               __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 S03C1_bit           _BIT_ACCESS(LCDDATA6,3)
// LCDDATA12<S03C2>
extern volatile __bit                   S03C2               __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 S03C2_bit           _BIT_ACCESS(LCDDATA12,3)
// LCDDATA18<S03C3>
extern volatile __bit                   S03C3               __at(0x7BC3);	// @ (0xF78 * 8 + 3)
#define                                 S03C3_bit           _BIT_ACCESS(LCDDATA18,3)
// LCDDATA0<S04C0>
extern volatile __bit                   S04C0               __at(0x7DDC);	// @ (0xFBB * 8 + 4)
#define                                 S04C0_bit           _BIT_ACCESS(LCDDATA0,4)
// LCDDATA6<S04C1>
extern volatile __bit                   S04C1               __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 S04C1_bit           _BIT_ACCESS(LCDDATA6,4)
// LCDDATA12<S04C2>
extern volatile __bit                   S04C2               __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 S04C2_bit           _BIT_ACCESS(LCDDATA12,4)
// LCDDATA18<S04C3>
extern volatile __bit                   S04C3               __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 S04C3_bit           _BIT_ACCESS(LCDDATA18,4)
// LCDDATA0<S05C0>
extern volatile __bit                   S05C0               __at(0x7DDD);	// @ (0xFBB * 8 + 5)
#define                                 S05C0_bit           _BIT_ACCESS(LCDDATA0,5)
// LCDDATA6<S05C1>
extern volatile __bit                   S05C1               __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 S05C1_bit           _BIT_ACCESS(LCDDATA6,5)
// LCDDATA12<S05C2>
extern volatile __bit                   S05C2               __at(0x7B95);	// @ (0xF72 * 8 + 5)
#define                                 S05C2_bit           _BIT_ACCESS(LCDDATA12,5)
// LCDDATA18<S05C3>
extern volatile __bit                   S05C3               __at(0x7BC5);	// @ (0xF78 * 8 + 5)
#define                                 S05C3_bit           _BIT_ACCESS(LCDDATA18,5)
// LCDDATA0<S06C0>
extern volatile __bit                   S06C0               __at(0x7DDE);	// @ (0xFBB * 8 + 6)
#define                                 S06C0_bit           _BIT_ACCESS(LCDDATA0,6)
// LCDDATA6<S06C1>
extern volatile __bit                   S06C1               __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 S06C1_bit           _BIT_ACCESS(LCDDATA6,6)
// LCDDATA12<S06C2>
extern volatile __bit                   S06C2               __at(0x7B96);	// @ (0xF72 * 8 + 6)
#define                                 S06C2_bit           _BIT_ACCESS(LCDDATA12,6)
// LCDDATA18<S06C3>
extern volatile __bit                   S06C3               __at(0x7BC6);	// @ (0xF78 * 8 + 6)
#define                                 S06C3_bit           _BIT_ACCESS(LCDDATA18,6)
// LCDDATA0<S07C0>
extern volatile __bit                   S07C0               __at(0x7DDF);	// @ (0xFBB * 8 + 7)
#define                                 S07C0_bit           _BIT_ACCESS(LCDDATA0,7)
// LCDDATA6<S07C1>
extern volatile __bit                   S07C1               __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 S07C1_bit           _BIT_ACCESS(LCDDATA6,7)
// LCDDATA12<S07C2>
extern volatile __bit                   S07C2               __at(0x7B97);	// @ (0xF72 * 8 + 7)
#define                                 S07C2_bit           _BIT_ACCESS(LCDDATA12,7)
// LCDDATA18<S07C3>
extern volatile __bit                   S07C3               __at(0x7BC7);	// @ (0xF78 * 8 + 7)
#define                                 S07C3_bit           _BIT_ACCESS(LCDDATA18,7)
// LCDDATA1<S08C0>
extern volatile __bit                   S08C0               __at(0x7DE0);	// @ (0xFBC * 8 + 0)
#define                                 S08C0_bit           _BIT_ACCESS(LCDDATA1,0)
// LCDDATA7<S08C1>
extern volatile __bit                   S08C1               __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 S08C1_bit           _BIT_ACCESS(LCDDATA7,0)
// LCDDATA13<S08C2>
extern volatile __bit                   S08C2               __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 S08C2_bit           _BIT_ACCESS(LCDDATA13,0)
// LCDDATA19<S08C3>
extern volatile __bit                   S08C3               __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 S08C3_bit           _BIT_ACCESS(LCDDATA19,0)
// LCDDATA1<S09C0>
extern volatile __bit                   S09C0               __at(0x7DE1);	// @ (0xFBC * 8 + 1)
#define                                 S09C0_bit           _BIT_ACCESS(LCDDATA1,1)
// LCDDATA7<S09C1>
extern volatile __bit                   S09C1               __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 S09C1_bit           _BIT_ACCESS(LCDDATA7,1)
// LCDDATA13<S09C2>
extern volatile __bit                   S09C2               __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 S09C2_bit           _BIT_ACCESS(LCDDATA13,1)
// LCDDATA19<S09C3>
extern volatile __bit                   S09C3               __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 S09C3_bit           _BIT_ACCESS(LCDDATA19,1)
// LCDDATA0<S0C0>
extern volatile __bit                   S0C0                __at(0x7DD8);	// @ (0xFBB * 8 + 0)
#define                                 S0C0_bit            _BIT_ACCESS(LCDDATA0,0)
// LCDDATA6<S0C1>
extern volatile __bit                   S0C1                __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 S0C1_bit            _BIT_ACCESS(LCDDATA6,0)
// LCDDATA12<S0C2>
extern volatile __bit                   S0C2                __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 S0C2_bit            _BIT_ACCESS(LCDDATA12,0)
// LCDDATA18<S0C3>
extern volatile __bit                   S0C3                __at(0x7BC0);	// @ (0xF78 * 8 + 0)
#define                                 S0C3_bit            _BIT_ACCESS(LCDDATA18,0)
// LCDDATA1<S10C0>
extern volatile __bit                   S10C0               __at(0x7DE2);	// @ (0xFBC * 8 + 2)
#define                                 S10C0_bit           _BIT_ACCESS(LCDDATA1,2)
// LCDDATA7<S10C1>
extern volatile __bit                   S10C1               __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 S10C1_bit           _BIT_ACCESS(LCDDATA7,2)
// LCDDATA13<S10C2>
extern volatile __bit                   S10C2               __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 S10C2_bit           _BIT_ACCESS(LCDDATA13,2)
// LCDDATA19<S10C3>
extern volatile __bit                   S10C3               __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 S10C3_bit           _BIT_ACCESS(LCDDATA19,2)
// LCDDATA1<S11C0>
extern volatile __bit                   S11C0               __at(0x7DE3);	// @ (0xFBC * 8 + 3)
#define                                 S11C0_bit           _BIT_ACCESS(LCDDATA1,3)
// LCDDATA7<S11C1>
extern volatile __bit                   S11C1               __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 S11C1_bit           _BIT_ACCESS(LCDDATA7,3)
// LCDDATA13<S11C2>
extern volatile __bit                   S11C2               __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 S11C2_bit           _BIT_ACCESS(LCDDATA13,3)
// LCDDATA19<S11C3>
extern volatile __bit                   S11C3               __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 S11C3_bit           _BIT_ACCESS(LCDDATA19,3)
// LCDDATA1<S12C0>
extern volatile __bit                   S12C0               __at(0x7DE4);	// @ (0xFBC * 8 + 4)
#define                                 S12C0_bit           _BIT_ACCESS(LCDDATA1,4)
// LCDDATA7<S12C1>
extern volatile __bit                   S12C1               __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 S12C1_bit           _BIT_ACCESS(LCDDATA7,4)
// LCDDATA13<S12C2>
extern volatile __bit                   S12C2               __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 S12C2_bit           _BIT_ACCESS(LCDDATA13,4)
// LCDDATA19<S12C3>
extern volatile __bit                   S12C3               __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 S12C3_bit           _BIT_ACCESS(LCDDATA19,4)
// LCDDATA1<S13C0>
extern volatile __bit                   S13C0               __at(0x7DE5);	// @ (0xFBC * 8 + 5)
#define                                 S13C0_bit           _BIT_ACCESS(LCDDATA1,5)
// LCDDATA7<S13C1>
extern volatile __bit                   S13C1               __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 S13C1_bit           _BIT_ACCESS(LCDDATA7,5)
// LCDDATA13<S13C2>
extern volatile __bit                   S13C2               __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 S13C2_bit           _BIT_ACCESS(LCDDATA13,5)
// LCDDATA19<S13C3>
extern volatile __bit                   S13C3               __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 S13C3_bit           _BIT_ACCESS(LCDDATA19,5)
// LCDDATA1<S14C0>
extern volatile __bit                   S14C0               __at(0x7DE6);	// @ (0xFBC * 8 + 6)
#define                                 S14C0_bit           _BIT_ACCESS(LCDDATA1,6)
// LCDDATA7<S14C1>
extern volatile __bit                   S14C1               __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 S14C1_bit           _BIT_ACCESS(LCDDATA7,6)
// LCDDATA13<S14C2>
extern volatile __bit                   S14C2               __at(0x7B9E);	// @ (0xF73 * 8 + 6)
#define                                 S14C2_bit           _BIT_ACCESS(LCDDATA13,6)
// LCDDATA19<S14C3>
extern volatile __bit                   S14C3               __at(0x7BCE);	// @ (0xF79 * 8 + 6)
#define                                 S14C3_bit           _BIT_ACCESS(LCDDATA19,6)
// LCDDATA1<S15C0>
extern volatile __bit                   S15C0               __at(0x7DE7);	// @ (0xFBC * 8 + 7)
#define                                 S15C0_bit           _BIT_ACCESS(LCDDATA1,7)
// LCDDATA7<S15C1>
extern volatile __bit                   S15C1               __at(0x7B6F);	// @ (0xF6D * 8 + 7)
#define                                 S15C1_bit           _BIT_ACCESS(LCDDATA7,7)
// LCDDATA13<S15C2>
extern volatile __bit                   S15C2               __at(0x7B9F);	// @ (0xF73 * 8 + 7)
#define                                 S15C2_bit           _BIT_ACCESS(LCDDATA13,7)
// LCDDATA19<S15C3>
extern volatile __bit                   S15C3               __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 S15C3_bit           _BIT_ACCESS(LCDDATA19,7)
// LCDDATA2<S16C0>
extern volatile __bit                   S16C0               __at(0x7DE8);	// @ (0xFBD * 8 + 0)
#define                                 S16C0_bit           _BIT_ACCESS(LCDDATA2,0)
// LCDDATA8<S16C1>
extern volatile __bit                   S16C1               __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 S16C1_bit           _BIT_ACCESS(LCDDATA8,0)
// LCDDATA14<S16C2>
extern volatile __bit                   S16C2               __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 S16C2_bit           _BIT_ACCESS(LCDDATA14,0)
// LCDDATA20<S16C3>
extern volatile __bit                   S16C3               __at(0x7BD0);	// @ (0xF7A * 8 + 0)
#define                                 S16C3_bit           _BIT_ACCESS(LCDDATA20,0)
// LCDDATA2<S17C0>
extern volatile __bit                   S17C0               __at(0x7DE9);	// @ (0xFBD * 8 + 1)
#define                                 S17C0_bit           _BIT_ACCESS(LCDDATA2,1)
// LCDDATA8<S17C1>
extern volatile __bit                   S17C1               __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 S17C1_bit           _BIT_ACCESS(LCDDATA8,1)
// LCDDATA14<S17C2>
extern volatile __bit                   S17C2               __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 S17C2_bit           _BIT_ACCESS(LCDDATA14,1)
// LCDDATA20<S17C3>
extern volatile __bit                   S17C3               __at(0x7BD1);	// @ (0xF7A * 8 + 1)
#define                                 S17C3_bit           _BIT_ACCESS(LCDDATA20,1)
// LCDDATA2<S18C0>
extern volatile __bit                   S18C0               __at(0x7DEA);	// @ (0xFBD * 8 + 2)
#define                                 S18C0_bit           _BIT_ACCESS(LCDDATA2,2)
// LCDDATA8<S18C1>
extern volatile __bit                   S18C1               __at(0x7B72);	// @ (0xF6E * 8 + 2)
#define                                 S18C1_bit           _BIT_ACCESS(LCDDATA8,2)
// LCDDATA14<S18C2>
extern volatile __bit                   S18C2               __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 S18C2_bit           _BIT_ACCESS(LCDDATA14,2)
// LCDDATA20<S18C3>
extern volatile __bit                   S18C3               __at(0x7BD2);	// @ (0xF7A * 8 + 2)
#define                                 S18C3_bit           _BIT_ACCESS(LCDDATA20,2)
// LCDDATA2<S19C0>
extern volatile __bit                   S19C0               __at(0x7DEB);	// @ (0xFBD * 8 + 3)
#define                                 S19C0_bit           _BIT_ACCESS(LCDDATA2,3)
// LCDDATA8<S19C1>
extern volatile __bit                   S19C1               __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 S19C1_bit           _BIT_ACCESS(LCDDATA8,3)
// LCDDATA14<S19C2>
extern volatile __bit                   S19C2               __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 S19C2_bit           _BIT_ACCESS(LCDDATA14,3)
// LCDDATA20<S19C3>
extern volatile __bit                   S19C3               __at(0x7BD3);	// @ (0xF7A * 8 + 3)
#define                                 S19C3_bit           _BIT_ACCESS(LCDDATA20,3)
// LCDDATA0<S1C0>
extern volatile __bit                   S1C0                __at(0x7DD9);	// @ (0xFBB * 8 + 1)
#define                                 S1C0_bit            _BIT_ACCESS(LCDDATA0,1)
// LCDDATA6<S1C1>
extern volatile __bit                   S1C1                __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 S1C1_bit            _BIT_ACCESS(LCDDATA6,1)
// LCDDATA12<S1C2>
extern volatile __bit                   S1C2                __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 S1C2_bit            _BIT_ACCESS(LCDDATA12,1)
// LCDDATA18<S1C3>
extern volatile __bit                   S1C3                __at(0x7BC1);	// @ (0xF78 * 8 + 1)
#define                                 S1C3_bit            _BIT_ACCESS(LCDDATA18,1)
// LCDDATA2<S20C0>
extern volatile __bit                   S20C0               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 S20C0_bit           _BIT_ACCESS(LCDDATA2,4)
// LCDDATA8<S20C1>
extern volatile __bit                   S20C1               __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 S20C1_bit           _BIT_ACCESS(LCDDATA8,4)
// LCDDATA14<S20C2>
extern volatile __bit                   S20C2               __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 S20C2_bit           _BIT_ACCESS(LCDDATA14,4)
// LCDDATA20<S20C3>
extern volatile __bit                   S20C3               __at(0x7BD4);	// @ (0xF7A * 8 + 4)
#define                                 S20C3_bit           _BIT_ACCESS(LCDDATA20,4)
// LCDDATA2<S21C0>
extern volatile __bit                   S21C0               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 S21C0_bit           _BIT_ACCESS(LCDDATA2,5)
// LCDDATA8<S21C1>
extern volatile __bit                   S21C1               __at(0x7B75);	// @ (0xF6E * 8 + 5)
#define                                 S21C1_bit           _BIT_ACCESS(LCDDATA8,5)
// LCDDATA14<S21C2>
extern volatile __bit                   S21C2               __at(0x7BA5);	// @ (0xF74 * 8 + 5)
#define                                 S21C2_bit           _BIT_ACCESS(LCDDATA14,5)
// LCDDATA20<S21C3>
extern volatile __bit                   S21C3               __at(0x7BD5);	// @ (0xF7A * 8 + 5)
#define                                 S21C3_bit           _BIT_ACCESS(LCDDATA20,5)
// LCDDATA2<S22C0>
extern volatile __bit                   S22C0               __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 S22C0_bit           _BIT_ACCESS(LCDDATA2,6)
// LCDDATA8<S22C1>
extern volatile __bit                   S22C1               __at(0x7B76);	// @ (0xF6E * 8 + 6)
#define                                 S22C1_bit           _BIT_ACCESS(LCDDATA8,6)
// LCDDATA14<S22C2>
extern volatile __bit                   S22C2               __at(0x7BA6);	// @ (0xF74 * 8 + 6)
#define                                 S22C2_bit           _BIT_ACCESS(LCDDATA14,6)
// LCDDATA20<S22C3>
extern volatile __bit                   S22C3               __at(0x7BD6);	// @ (0xF7A * 8 + 6)
#define                                 S22C3_bit           _BIT_ACCESS(LCDDATA20,6)
// LCDDATA2<S23C0>
extern volatile __bit                   S23C0               __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 S23C0_bit           _BIT_ACCESS(LCDDATA2,7)
// LCDDATA8<S23C1>
extern volatile __bit                   S23C1               __at(0x7B77);	// @ (0xF6E * 8 + 7)
#define                                 S23C1_bit           _BIT_ACCESS(LCDDATA8,7)
// LCDDATA14<S23C2>
extern volatile __bit                   S23C2               __at(0x7BA7);	// @ (0xF74 * 8 + 7)
#define                                 S23C2_bit           _BIT_ACCESS(LCDDATA14,7)
// LCDDATA20<S23C3>
extern volatile __bit                   S23C3               __at(0x7BD7);	// @ (0xF7A * 8 + 7)
#define                                 S23C3_bit           _BIT_ACCESS(LCDDATA20,7)
// LCDDATA3<S24C0>
extern volatile __bit                   S24C0               __at(0x7DF0);	// @ (0xFBE * 8 + 0)
#define                                 S24C0_bit           _BIT_ACCESS(LCDDATA3,0)
// LCDDATA9<S24C1>
extern volatile __bit                   S24C1               __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 S24C1_bit           _BIT_ACCESS(LCDDATA9,0)
// LCDDATA15<S24C2>
extern volatile __bit                   S24C2               __at(0x7BA8);	// @ (0xF75 * 8 + 0)
#define                                 S24C2_bit           _BIT_ACCESS(LCDDATA15,0)
// LCDDATA21<S24C3>
extern volatile __bit                   S24C3               __at(0x7BD8);	// @ (0xF7B * 8 + 0)
#define                                 S24C3_bit           _BIT_ACCESS(LCDDATA21,0)
// LCDDATA3<S25C0>
extern volatile __bit                   S25C0               __at(0x7DF1);	// @ (0xFBE * 8 + 1)
#define                                 S25C0_bit           _BIT_ACCESS(LCDDATA3,1)
// LCDDATA9<S25C1>
extern volatile __bit                   S25C1               __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 S25C1_bit           _BIT_ACCESS(LCDDATA9,1)
// LCDDATA15<S25C2>
extern volatile __bit                   S25C2               __at(0x7BA9);	// @ (0xF75 * 8 + 1)
#define                                 S25C2_bit           _BIT_ACCESS(LCDDATA15,1)
// LCDDATA21<S25C3>
extern volatile __bit                   S25C3               __at(0x7BD9);	// @ (0xF7B * 8 + 1)
#define                                 S25C3_bit           _BIT_ACCESS(LCDDATA21,1)
// LCDDATA3<S26C0>
extern volatile __bit                   S26C0               __at(0x7DF2);	// @ (0xFBE * 8 + 2)
#define                                 S26C0_bit           _BIT_ACCESS(LCDDATA3,2)
// LCDDATA9<S26C1>
extern volatile __bit                   S26C1               __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 S26C1_bit           _BIT_ACCESS(LCDDATA9,2)
// LCDDATA15<S26C2>
extern volatile __bit                   S26C2               __at(0x7BAA);	// @ (0xF75 * 8 + 2)
#define                                 S26C2_bit           _BIT_ACCESS(LCDDATA15,2)
// LCDDATA21<S26C3>
extern volatile __bit                   S26C3               __at(0x7BDA);	// @ (0xF7B * 8 + 2)
#define                                 S26C3_bit           _BIT_ACCESS(LCDDATA21,2)
// LCDDATA3<S27C0>
extern volatile __bit                   S27C0               __at(0x7DF3);	// @ (0xFBE * 8 + 3)
#define                                 S27C0_bit           _BIT_ACCESS(LCDDATA3,3)
// LCDDATA9<S27C1>
extern volatile __bit                   S27C1               __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 S27C1_bit           _BIT_ACCESS(LCDDATA9,3)
// LCDDATA15<S27C2>
extern volatile __bit                   S27C2               __at(0x7BAB);	// @ (0xF75 * 8 + 3)
#define                                 S27C2_bit           _BIT_ACCESS(LCDDATA15,3)
// LCDDATA21<S27C3>
extern volatile __bit                   S27C3               __at(0x7BDB);	// @ (0xF7B * 8 + 3)
#define                                 S27C3_bit           _BIT_ACCESS(LCDDATA21,3)
// LCDDATA3<S28C0>
extern volatile __bit                   S28C0               __at(0x7DF4);	// @ (0xFBE * 8 + 4)
#define                                 S28C0_bit           _BIT_ACCESS(LCDDATA3,4)
// LCDDATA9<S28C1>
extern volatile __bit                   S28C1               __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 S28C1_bit           _BIT_ACCESS(LCDDATA9,4)
// LCDDATA15<S28C2>
extern volatile __bit                   S28C2               __at(0x7BAC);	// @ (0xF75 * 8 + 4)
#define                                 S28C2_bit           _BIT_ACCESS(LCDDATA15,4)
// LCDDATA21<S28C3>
extern volatile __bit                   S28C3               __at(0x7BDC);	// @ (0xF7B * 8 + 4)
#define                                 S28C3_bit           _BIT_ACCESS(LCDDATA21,4)
// LCDDATA3<S29C0>
extern volatile __bit                   S29C0               __at(0x7DF5);	// @ (0xFBE * 8 + 5)
#define                                 S29C0_bit           _BIT_ACCESS(LCDDATA3,5)
// LCDDATA9<S29C1>
extern volatile __bit                   S29C1               __at(0x7B7D);	// @ (0xF6F * 8 + 5)
#define                                 S29C1_bit           _BIT_ACCESS(LCDDATA9,5)
// LCDDATA15<S29C2>
extern volatile __bit                   S29C2               __at(0x7BAD);	// @ (0xF75 * 8 + 5)
#define                                 S29C2_bit           _BIT_ACCESS(LCDDATA15,5)
// LCDDATA21<S29C3>
extern volatile __bit                   S29C3               __at(0x7BDD);	// @ (0xF7B * 8 + 5)
#define                                 S29C3_bit           _BIT_ACCESS(LCDDATA21,5)
// LCDDATA0<S2C0>
extern volatile __bit                   S2C0                __at(0x7DDA);	// @ (0xFBB * 8 + 2)
#define                                 S2C0_bit            _BIT_ACCESS(LCDDATA0,2)
// LCDDATA6<S2C1>
extern volatile __bit                   S2C1                __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 S2C1_bit            _BIT_ACCESS(LCDDATA6,2)
// LCDDATA12<S2C2>
extern volatile __bit                   S2C2                __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 S2C2_bit            _BIT_ACCESS(LCDDATA12,2)
// LCDDATA18<S2C3>
extern volatile __bit                   S2C3                __at(0x7BC2);	// @ (0xF78 * 8 + 2)
#define                                 S2C3_bit            _BIT_ACCESS(LCDDATA18,2)
// LCDDATA3<S30C0>
extern volatile __bit                   S30C0               __at(0x7DF6);	// @ (0xFBE * 8 + 6)
#define                                 S30C0_bit           _BIT_ACCESS(LCDDATA3,6)
// LCDDATA9<S30C1>
extern volatile __bit                   S30C1               __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 S30C1_bit           _BIT_ACCESS(LCDDATA9,6)
// LCDDATA15<S30C2>
extern volatile __bit                   S30C2               __at(0x7BAE);	// @ (0xF75 * 8 + 6)
#define                                 S30C2_bit           _BIT_ACCESS(LCDDATA15,6)
// LCDDATA21<S30C3>
extern volatile __bit                   S30C3               __at(0x7BDE);	// @ (0xF7B * 8 + 6)
#define                                 S30C3_bit           _BIT_ACCESS(LCDDATA21,6)
// LCDDATA3<S31C0>
extern volatile __bit                   S31C0               __at(0x7DF7);	// @ (0xFBE * 8 + 7)
#define                                 S31C0_bit           _BIT_ACCESS(LCDDATA3,7)
// LCDDATA9<S31C1>
extern volatile __bit                   S31C1               __at(0x7B7F);	// @ (0xF6F * 8 + 7)
#define                                 S31C1_bit           _BIT_ACCESS(LCDDATA9,7)
// LCDDATA15<S31C2>
extern volatile __bit                   S31C2               __at(0x7BAF);	// @ (0xF75 * 8 + 7)
#define                                 S31C2_bit           _BIT_ACCESS(LCDDATA15,7)
// LCDDATA21<S31C3>
extern volatile __bit                   S31C3               __at(0x7BDF);	// @ (0xF7B * 8 + 7)
#define                                 S31C3_bit           _BIT_ACCESS(LCDDATA21,7)
// LCDDATA4<S32C0>
extern volatile __bit                   S32C0               __at(0x7DF8);	// @ (0xFBF * 8 + 0)
#define                                 S32C0_bit           _BIT_ACCESS(LCDDATA4,0)
// LCDDATA10<S32C1>
extern volatile __bit                   S32C1               __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 S32C1_bit           _BIT_ACCESS(LCDDATA10,0)
// LCDDATA16<S32C2>
extern volatile __bit                   S32C2               __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 S32C2_bit           _BIT_ACCESS(LCDDATA16,0)
// LCDDATA22<S32C3>
extern volatile __bit                   S32C3               __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 S32C3_bit           _BIT_ACCESS(LCDDATA22,0)
// LCDDATA4<S33C0>
extern volatile __bit                   S33C0               __at(0x7DF9);	// @ (0xFBF * 8 + 1)
#define                                 S33C0_bit           _BIT_ACCESS(LCDDATA4,1)
// LCDDATA4<S34C0>
extern volatile __bit                   S34C0               __at(0x7DFA);	// @ (0xFBF * 8 + 2)
#define                                 S34C0_bit           _BIT_ACCESS(LCDDATA4,2)
// LCDDATA4<S35C0>
extern volatile __bit                   S35C0               __at(0x7DFB);	// @ (0xFBF * 8 + 3)
#define                                 S35C0_bit           _BIT_ACCESS(LCDDATA4,3)
// LCDDATA4<S36C0>
extern volatile __bit                   S36C0               __at(0x7DFC);	// @ (0xFBF * 8 + 4)
#define                                 S36C0_bit           _BIT_ACCESS(LCDDATA4,4)
// LCDDATA4<S37C0>
extern volatile __bit                   S37C0               __at(0x7DFD);	// @ (0xFBF * 8 + 5)
#define                                 S37C0_bit           _BIT_ACCESS(LCDDATA4,5)
// LCDDATA4<S38C0>
extern volatile __bit                   S38C0               __at(0x7DFE);	// @ (0xFBF * 8 + 6)
#define                                 S38C0_bit           _BIT_ACCESS(LCDDATA4,6)
// LCDDATA4<S39C0>
extern volatile __bit                   S39C0               __at(0x7DFF);	// @ (0xFBF * 8 + 7)
#define                                 S39C0_bit           _BIT_ACCESS(LCDDATA4,7)
// LCDDATA0<S3C0>
extern volatile __bit                   S3C0                __at(0x7DDB);	// @ (0xFBB * 8 + 3)
#define                                 S3C0_bit            _BIT_ACCESS(LCDDATA0,3)
// LCDDATA6<S3C1>
extern volatile __bit                   S3C1                __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 S3C1_bit            _BIT_ACCESS(LCDDATA6,3)
// LCDDATA12<S3C2>
extern volatile __bit                   S3C2                __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 S3C2_bit            _BIT_ACCESS(LCDDATA12,3)
// LCDDATA18<S3C3>
extern volatile __bit                   S3C3                __at(0x7BC3);	// @ (0xF78 * 8 + 3)
#define                                 S3C3_bit            _BIT_ACCESS(LCDDATA18,3)
// LCDDATA0<S4C0>
extern volatile __bit                   S4C0                __at(0x7DDC);	// @ (0xFBB * 8 + 4)
#define                                 S4C0_bit            _BIT_ACCESS(LCDDATA0,4)
// LCDDATA6<S4C1>
extern volatile __bit                   S4C1                __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 S4C1_bit            _BIT_ACCESS(LCDDATA6,4)
// LCDDATA12<S4C2>
extern volatile __bit                   S4C2                __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 S4C2_bit            _BIT_ACCESS(LCDDATA12,4)
// LCDDATA18<S4C3>
extern volatile __bit                   S4C3                __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 S4C3_bit            _BIT_ACCESS(LCDDATA18,4)
// LCDDATA0<S5C0>
extern volatile __bit                   S5C0                __at(0x7DDD);	// @ (0xFBB * 8 + 5)
#define                                 S5C0_bit            _BIT_ACCESS(LCDDATA0,5)
// LCDDATA6<S5C1>
extern volatile __bit                   S5C1                __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 S5C1_bit            _BIT_ACCESS(LCDDATA6,5)
// LCDDATA12<S5C2>
extern volatile __bit                   S5C2                __at(0x7B95);	// @ (0xF72 * 8 + 5)
#define                                 S5C2_bit            _BIT_ACCESS(LCDDATA12,5)
// LCDDATA18<S5C3>
extern volatile __bit                   S5C3                __at(0x7BC5);	// @ (0xF78 * 8 + 5)
#define                                 S5C3_bit            _BIT_ACCESS(LCDDATA18,5)
// LCDDATA0<S6C0>
extern volatile __bit                   S6C0                __at(0x7DDE);	// @ (0xFBB * 8 + 6)
#define                                 S6C0_bit            _BIT_ACCESS(LCDDATA0,6)
// LCDDATA6<S6C1>
extern volatile __bit                   S6C1                __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 S6C1_bit            _BIT_ACCESS(LCDDATA6,6)
// LCDDATA12<S6C2>
extern volatile __bit                   S6C2                __at(0x7B96);	// @ (0xF72 * 8 + 6)
#define                                 S6C2_bit            _BIT_ACCESS(LCDDATA12,6)
// LCDDATA18<S6C3>
extern volatile __bit                   S6C3                __at(0x7BC6);	// @ (0xF78 * 8 + 6)
#define                                 S6C3_bit            _BIT_ACCESS(LCDDATA18,6)
// LCDDATA0<S7C0>
extern volatile __bit                   S7C0                __at(0x7DDF);	// @ (0xFBB * 8 + 7)
#define                                 S7C0_bit            _BIT_ACCESS(LCDDATA0,7)
// LCDDATA6<S7C1>
extern volatile __bit                   S7C1                __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 S7C1_bit            _BIT_ACCESS(LCDDATA6,7)
// LCDDATA12<S7C2>
extern volatile __bit                   S7C2                __at(0x7B97);	// @ (0xF72 * 8 + 7)
#define                                 S7C2_bit            _BIT_ACCESS(LCDDATA12,7)
// LCDDATA18<S7C3>
extern volatile __bit                   S7C3                __at(0x7BC7);	// @ (0xF78 * 8 + 7)
#define                                 S7C3_bit            _BIT_ACCESS(LCDDATA18,7)
// LCDDATA1<S8C0>
extern volatile __bit                   S8C0                __at(0x7DE0);	// @ (0xFBC * 8 + 0)
#define                                 S8C0_bit            _BIT_ACCESS(LCDDATA1,0)
// LCDDATA7<S8C1>
extern volatile __bit                   S8C1                __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 S8C1_bit            _BIT_ACCESS(LCDDATA7,0)
// LCDDATA13<S8C2>
extern volatile __bit                   S8C2                __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 S8C2_bit            _BIT_ACCESS(LCDDATA13,0)
// LCDDATA19<S8C3>
extern volatile __bit                   S8C3                __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 S8C3_bit            _BIT_ACCESS(LCDDATA19,0)
// LCDDATA1<S9C0>
extern volatile __bit                   S9C0                __at(0x7DE1);	// @ (0xFBC * 8 + 1)
#define                                 S9C0_bit            _BIT_ACCESS(LCDDATA1,1)
// LCDDATA7<S9C1>
extern volatile __bit                   S9C1                __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 S9C1_bit            _BIT_ACCESS(LCDDATA7,1)
// LCDDATA13<S9C2>
extern volatile __bit                   S9C2                __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 S9C2_bit            _BIT_ACCESS(LCDDATA13,1)
// LCDDATA19<S9C3>
extern volatile __bit                   S9C3                __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 S9C3_bit            _BIT_ACCESS(LCDDATA19,1)
// PORTC<SCK>
extern volatile __bit                   SCK                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCK_bit             _BIT_ACCESS(PORTC,3)
// BAUDCON1<SCKP>
extern volatile __bit                   SCKP                __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<SCKP1>
extern volatile __bit                   SCKP1               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP1_bit           _BIT_ACCESS(BAUDCON1,4)
// PORTC<SCL>
extern volatile __bit                   SCL                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCL_bit             _BIT_ACCESS(PORTC,3)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// PORTC<SDA>
extern volatile __bit                   SDA                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDA_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDI>
extern volatile __bit                   SDI                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI_bit             _BIT_ACCESS(PORTC,4)
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SDO_bit             _BIT_ACCESS(PORTC,5)
// LCDSE0<SE0>
extern volatile __bit                   SE0                 __at(0x7D48);	// @ (0xFA9 * 8 + 0)
#define                                 SE0_bit             _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SE00>
extern volatile __bit                   SE00                __at(0x7D48);	// @ (0xFA9 * 8 + 0)
#define                                 SE00_bit            _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SE01>
extern volatile __bit                   SE01                __at(0x7D49);	// @ (0xFA9 * 8 + 1)
#define                                 SE01_bit            _BIT_ACCESS(LCDSE0,1)
// LCDSE0<SE02>
extern volatile __bit                   SE02                __at(0x7D4A);	// @ (0xFA9 * 8 + 2)
#define                                 SE02_bit            _BIT_ACCESS(LCDSE0,2)
// LCDSE0<SE03>
extern volatile __bit                   SE03                __at(0x7D4B);	// @ (0xFA9 * 8 + 3)
#define                                 SE03_bit            _BIT_ACCESS(LCDSE0,3)
// LCDSE0<SE04>
extern volatile __bit                   SE04                __at(0x7D4C);	// @ (0xFA9 * 8 + 4)
#define                                 SE04_bit            _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SE05>
extern volatile __bit                   SE05                __at(0x7D4D);	// @ (0xFA9 * 8 + 5)
#define                                 SE05_bit            _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SE06>
extern volatile __bit                   SE06                __at(0x7D4E);	// @ (0xFA9 * 8 + 6)
#define                                 SE06_bit            _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SE07>
extern volatile __bit                   SE07                __at(0x7D4F);	// @ (0xFA9 * 8 + 7)
#define                                 SE07_bit            _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SE08>
extern volatile __bit                   SE08                __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 SE08_bit            _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SE09>
extern volatile __bit                   SE09                __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 SE09_bit            _BIT_ACCESS(LCDSE1,1)
// LCDSE0<SE1>
extern volatile __bit                   SE1                 __at(0x7D49);	// @ (0xFA9 * 8 + 1)
#define                                 SE1_bit             _BIT_ACCESS(LCDSE0,1)
// LCDSE1<SE10>
extern volatile __bit                   SE10                __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 SE10_bit            _BIT_ACCESS(LCDSE1,2)
// LCDSE1<SE11>
extern volatile __bit                   SE11                __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 SE11_bit            _BIT_ACCESS(LCDSE1,3)
// LCDSE1<SE12>
extern volatile __bit                   SE12                __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 SE12_bit            _BIT_ACCESS(LCDSE1,4)
// LCDSE1<SE13>
extern volatile __bit                   SE13                __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 SE13_bit            _BIT_ACCESS(LCDSE1,5)
// LCDSE1<SE14>
extern volatile __bit                   SE14                __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 SE14_bit            _BIT_ACCESS(LCDSE1,6)
// LCDSE1<SE15>
extern volatile __bit                   SE15                __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 SE15_bit            _BIT_ACCESS(LCDSE1,7)
// LCDSE2<SE16>
extern volatile __bit                   SE16                __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 SE16_bit            _BIT_ACCESS(LCDSE2,0)
// LCDSE2<SE17>
extern volatile __bit                   SE17                __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 SE17_bit            _BIT_ACCESS(LCDSE2,1)
// LCDSE2<SE18>
extern volatile __bit                   SE18                __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 SE18_bit            _BIT_ACCESS(LCDSE2,2)
// LCDSE2<SE19>
extern volatile __bit                   SE19                __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 SE19_bit            _BIT_ACCESS(LCDSE2,3)
// LCDSE0<SE2>
extern volatile __bit                   SE2                 __at(0x7D4A);	// @ (0xFA9 * 8 + 2)
#define                                 SE2_bit             _BIT_ACCESS(LCDSE0,2)
// LCDSE2<SE20>
extern volatile __bit                   SE20                __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 SE20_bit            _BIT_ACCESS(LCDSE2,4)
// LCDSE2<SE21>
extern volatile __bit                   SE21                __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 SE21_bit            _BIT_ACCESS(LCDSE2,5)
// LCDSE2<SE22>
extern volatile __bit                   SE22                __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 SE22_bit            _BIT_ACCESS(LCDSE2,6)
// LCDSE2<SE23>
extern volatile __bit                   SE23                __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 SE23_bit            _BIT_ACCESS(LCDSE2,7)
// LCDSE3<SE24>
extern volatile __bit                   SE24                __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 SE24_bit            _BIT_ACCESS(LCDSE3,0)
// LCDSE3<SE25>
extern volatile __bit                   SE25                __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 SE25_bit            _BIT_ACCESS(LCDSE3,1)
// LCDSE3<SE26>
extern volatile __bit                   SE26                __at(0x7DC2);	// @ (0xFB8 * 8 + 2)
#define                                 SE26_bit            _BIT_ACCESS(LCDSE3,2)
// LCDSE3<SE27>
extern volatile __bit                   SE27                __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 SE27_bit            _BIT_ACCESS(LCDSE3,3)
// LCDSE3<SE28>
extern volatile __bit                   SE28                __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SE28_bit            _BIT_ACCESS(LCDSE3,4)
// LCDSE3<SE29>
extern volatile __bit                   SE29                __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 SE29_bit            _BIT_ACCESS(LCDSE3,5)
// LCDSE0<SE3>
extern volatile __bit                   SE3                 __at(0x7D4B);	// @ (0xFA9 * 8 + 3)
#define                                 SE3_bit             _BIT_ACCESS(LCDSE0,3)
// LCDSE3<SE30>
extern volatile __bit                   SE30                __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 SE30_bit            _BIT_ACCESS(LCDSE3,6)
// LCDSE3<SE31>
extern volatile __bit                   SE31                __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
#define                                 SE31_bit            _BIT_ACCESS(LCDSE3,7)
// LCDSE4<SE32>
extern volatile __bit                   SE32                __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 SE32_bit            _BIT_ACCESS(LCDSE4,0)
// LCDSE0<SE4>
extern volatile __bit                   SE4                 __at(0x7D4C);	// @ (0xFA9 * 8 + 4)
#define                                 SE4_bit             _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SE5>
extern volatile __bit                   SE5                 __at(0x7D4D);	// @ (0xFA9 * 8 + 5)
#define                                 SE5_bit             _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SE6>
extern volatile __bit                   SE6                 __at(0x7D4E);	// @ (0xFA9 * 8 + 6)
#define                                 SE6_bit             _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SE7>
extern volatile __bit                   SE7                 __at(0x7D4F);	// @ (0xFA9 * 8 + 7)
#define                                 SE7_bit             _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SE8>
extern volatile __bit                   SE8                 __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 SE8_bit             _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SE9>
extern volatile __bit                   SE9                 __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 SE9_bit             _BIT_ACCESS(LCDSE1,1)
// PORTD<SEG0>
extern volatile __bit                   SEG0                __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 SEG0_bit            _BIT_ACCESS(PORTD,0)
// LCDDATA18<SEG00COM3>
extern volatile __bit                   SEG00COM3           __at(0x7BC0);	// @ (0xF78 * 8 + 0)
#define                                 SEG00COM3_bit       _BIT_ACCESS(LCDDATA18,0)
// LCDDATA18<SEG01COM3>
extern volatile __bit                   SEG01COM3           __at(0x7BC1);	// @ (0xF78 * 8 + 1)
#define                                 SEG01COM3_bit       _BIT_ACCESS(LCDDATA18,1)
// LCDDATA18<SEG02COM3>
extern volatile __bit                   SEG02COM3           __at(0x7BC2);	// @ (0xF78 * 8 + 2)
#define                                 SEG02COM3_bit       _BIT_ACCESS(LCDDATA18,2)
// LCDDATA18<SEG03COM3>
extern volatile __bit                   SEG03COM3           __at(0x7BC3);	// @ (0xF78 * 8 + 3)
#define                                 SEG03COM3_bit       _BIT_ACCESS(LCDDATA18,3)
// LCDDATA18<SEG04COM3>
extern volatile __bit                   SEG04COM3           __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 SEG04COM3_bit       _BIT_ACCESS(LCDDATA18,4)
// LCDDATA18<SEG05COM3>
extern volatile __bit                   SEG05COM3           __at(0x7BC5);	// @ (0xF78 * 8 + 5)
#define                                 SEG05COM3_bit       _BIT_ACCESS(LCDDATA18,5)
// LCDDATA18<SEG06COM3>
extern volatile __bit                   SEG06COM3           __at(0x7BC6);	// @ (0xF78 * 8 + 6)
#define                                 SEG06COM3_bit       _BIT_ACCESS(LCDDATA18,6)
// LCDDATA18<SEG07COM3>
extern volatile __bit                   SEG07COM3           __at(0x7BC7);	// @ (0xF78 * 8 + 7)
#define                                 SEG07COM3_bit       _BIT_ACCESS(LCDDATA18,7)
// LCDDATA0<SEG0COM0>
extern volatile __bit                   SEG0COM0            __at(0x7DD8);	// @ (0xFBB * 8 + 0)
#define                                 SEG0COM0_bit        _BIT_ACCESS(LCDDATA0,0)
// LCDDATA6<SEG0COM1>
extern volatile __bit                   SEG0COM1            __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 SEG0COM1_bit        _BIT_ACCESS(LCDDATA6,0)
// LCDDATA12<SEG0COM2>
extern volatile __bit                   SEG0COM2            __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 SEG0COM2_bit        _BIT_ACCESS(LCDDATA12,0)
// PORTD<SEG1>
extern volatile __bit                   SEG1                __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 SEG1_bit            _BIT_ACCESS(PORTD,1)
// PORTB<SEG10>
extern volatile __bit                   SEG10               __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 SEG10_bit           _BIT_ACCESS(PORTB,3)
// LCDDATA1<SEG10COM0>
extern volatile __bit                   SEG10COM0           __at(0x7DE2);	// @ (0xFBC * 8 + 2)
#define                                 SEG10COM0_bit       _BIT_ACCESS(LCDDATA1,2)
// LCDDATA7<SEG10COM1>
extern volatile __bit                   SEG10COM1           __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 SEG10COM1_bit       _BIT_ACCESS(LCDDATA7,2)
// LCDDATA13<SEG10COM2>
extern volatile __bit                   SEG10COM2           __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 SEG10COM2_bit       _BIT_ACCESS(LCDDATA13,2)
// LCDDATA19<SEG10COM3>
extern volatile __bit                   SEG10COM3           __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 SEG10COM3_bit       _BIT_ACCESS(LCDDATA19,2)
// PORTB<SEG11>
extern volatile __bit                   SEG11               __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 SEG11_bit           _BIT_ACCESS(PORTB,4)
// LCDDATA1<SEG11COM0>
extern volatile __bit                   SEG11COM0           __at(0x7DE3);	// @ (0xFBC * 8 + 3)
#define                                 SEG11COM0_bit       _BIT_ACCESS(LCDDATA1,3)
// LCDDATA7<SEG11COM1>
extern volatile __bit                   SEG11COM1           __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 SEG11COM1_bit       _BIT_ACCESS(LCDDATA7,3)
// LCDDATA13<SEG11COM2>
extern volatile __bit                   SEG11COM2           __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 SEG11COM2_bit       _BIT_ACCESS(LCDDATA13,3)
// LCDDATA19<SEG11COM3>
extern volatile __bit                   SEG11COM3           __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 SEG11COM3_bit       _BIT_ACCESS(LCDDATA19,3)
// PORTC<SEG12>
extern volatile __bit                   SEG12               __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SEG12_bit           _BIT_ACCESS(PORTC,5)
// LCDDATA1<SEG12COM0>
extern volatile __bit                   SEG12COM0           __at(0x7DE4);	// @ (0xFBC * 8 + 4)
#define                                 SEG12COM0_bit       _BIT_ACCESS(LCDDATA1,4)
// LCDDATA7<SEG12COM1>
extern volatile __bit                   SEG12COM1           __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 SEG12COM1_bit       _BIT_ACCESS(LCDDATA7,4)
// LCDDATA13<SEG12COM2>
extern volatile __bit                   SEG12COM2           __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 SEG12COM2_bit       _BIT_ACCESS(LCDDATA13,4)
// LCDDATA19<SEG12COM3>
extern volatile __bit                   SEG12COM3           __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 SEG12COM3_bit       _BIT_ACCESS(LCDDATA19,4)
// PORTC<SEG13>
extern volatile __bit                   SEG13               __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 SEG13_bit           _BIT_ACCESS(PORTC,2)
// LCDDATA1<SEG13COM0>
extern volatile __bit                   SEG13COM0           __at(0x7DE5);	// @ (0xFBC * 8 + 5)
#define                                 SEG13COM0_bit       _BIT_ACCESS(LCDDATA1,5)
// LCDDATA7<SEG13COM1>
extern volatile __bit                   SEG13COM1           __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 SEG13COM1_bit       _BIT_ACCESS(LCDDATA7,5)
// LCDDATA13<SEG13COM2>
extern volatile __bit                   SEG13COM2           __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 SEG13COM2_bit       _BIT_ACCESS(LCDDATA13,5)
// LCDDATA19<SEG13COM3>
extern volatile __bit                   SEG13COM3           __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 SEG13COM3_bit       _BIT_ACCESS(LCDDATA19,5)
// PORTA<SEG14>
extern volatile __bit                   SEG14               __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 SEG14_bit           _BIT_ACCESS(PORTA,4)
// LCDDATA1<SEG14COM0>
extern volatile __bit                   SEG14COM0           __at(0x7DE6);	// @ (0xFBC * 8 + 6)
#define                                 SEG14COM0_bit       _BIT_ACCESS(LCDDATA1,6)
// LCDDATA7<SEG14COM1>
extern volatile __bit                   SEG14COM1           __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 SEG14COM1_bit       _BIT_ACCESS(LCDDATA7,6)
// LCDDATA13<SEG14COM2>
extern volatile __bit                   SEG14COM2           __at(0x7B9E);	// @ (0xF73 * 8 + 6)
#define                                 SEG14COM2_bit       _BIT_ACCESS(LCDDATA13,6)
// LCDDATA19<SEG14COM3>
extern volatile __bit                   SEG14COM3           __at(0x7BCE);	// @ (0xF79 * 8 + 6)
#define                                 SEG14COM3_bit       _BIT_ACCESS(LCDDATA19,6)
// PORTA<SEG15>
extern volatile __bit                   SEG15               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 SEG15_bit           _BIT_ACCESS(PORTA,5)
// LCDDATA1<SEG15COM0>
extern volatile __bit                   SEG15COM0           __at(0x7DE7);	// @ (0xFBC * 8 + 7)
#define                                 SEG15COM0_bit       _BIT_ACCESS(LCDDATA1,7)
// LCDDATA7<SEG15COM1>
extern volatile __bit                   SEG15COM1           __at(0x7B6F);	// @ (0xF6D * 8 + 7)
#define                                 SEG15COM1_bit       _BIT_ACCESS(LCDDATA7,7)
// LCDDATA13<SEG15COM2>
extern volatile __bit                   SEG15COM2           __at(0x7B9F);	// @ (0xF73 * 8 + 7)
#define                                 SEG15COM2_bit       _BIT_ACCESS(LCDDATA13,7)
// LCDDATA19<SEG15COM3>
extern volatile __bit                   SEG15COM3           __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 SEG15COM3_bit       _BIT_ACCESS(LCDDATA19,7)
// PORTC<SEG16>
extern volatile __bit                   SEG16               __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SEG16_bit           _BIT_ACCESS(PORTC,4)
// LCDDATA2<SEG16COM0>
extern volatile __bit                   SEG16COM0           __at(0x7DE8);	// @ (0xFBD * 8 + 0)
#define                                 SEG16COM0_bit       _BIT_ACCESS(LCDDATA2,0)
// LCDDATA8<SEG16COM1>
extern volatile __bit                   SEG16COM1           __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 SEG16COM1_bit       _BIT_ACCESS(LCDDATA8,0)
// LCDDATA14<SEG16COM2>
extern volatile __bit                   SEG16COM2           __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 SEG16COM2_bit       _BIT_ACCESS(LCDDATA14,0)
// LCDDATA20<SEG16COM3>
extern volatile __bit                   SEG16COM3           __at(0x7BD0);	// @ (0xF7A * 8 + 0)
#define                                 SEG16COM3_bit       _BIT_ACCESS(LCDDATA20,0)
// PORTC<SEG17>
extern volatile __bit                   SEG17               __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SEG17_bit           _BIT_ACCESS(PORTC,3)
// LCDDATA2<SEG17COM0>
extern volatile __bit                   SEG17COM0           __at(0x7DE9);	// @ (0xFBD * 8 + 1)
#define                                 SEG17COM0_bit       _BIT_ACCESS(LCDDATA2,1)
// LCDDATA8<SEG17COM1>
extern volatile __bit                   SEG17COM1           __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 SEG17COM1_bit       _BIT_ACCESS(LCDDATA8,1)
// LCDDATA14<SEG17COM2>
extern volatile __bit                   SEG17COM2           __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 SEG17COM2_bit       _BIT_ACCESS(LCDDATA14,1)
// LCDDATA20<SEG17COM3>
extern volatile __bit                   SEG17COM3           __at(0x7BD1);	// @ (0xF7A * 8 + 1)
#define                                 SEG17COM3_bit       _BIT_ACCESS(LCDDATA20,1)
// PORTA<SEG18>
extern volatile __bit                   SEG18               __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 SEG18_bit           _BIT_ACCESS(PORTA,1)
// LCDDATA2<SEG18COM0>
extern volatile __bit                   SEG18COM0           __at(0x7DEA);	// @ (0xFBD * 8 + 2)
#define                                 SEG18COM0_bit       _BIT_ACCESS(LCDDATA2,2)
// LCDDATA8<SEG18COM1>
extern volatile __bit                   SEG18COM1           __at(0x7B72);	// @ (0xF6E * 8 + 2)
#define                                 SEG18COM1_bit       _BIT_ACCESS(LCDDATA8,2)
// LCDDATA14<SEG18COM2>
extern volatile __bit                   SEG18COM2           __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 SEG18COM2_bit       _BIT_ACCESS(LCDDATA14,2)
// LCDDATA20<SEG18COM3>
extern volatile __bit                   SEG18COM3           __at(0x7BD2);	// @ (0xF7A * 8 + 2)
#define                                 SEG18COM3_bit       _BIT_ACCESS(LCDDATA20,2)
// PORTF<SEG19>
extern volatile __bit                   SEG19               __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 SEG19_bit           _BIT_ACCESS(PORTF,1)
// LCDDATA2<SEG19COM0>
extern volatile __bit                   SEG19COM0           __at(0x7DEB);	// @ (0xFBD * 8 + 3)
#define                                 SEG19COM0_bit       _BIT_ACCESS(LCDDATA2,3)
// LCDDATA8<SEG19COM1>
extern volatile __bit                   SEG19COM1           __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 SEG19COM1_bit       _BIT_ACCESS(LCDDATA8,3)
// LCDDATA14<SEG19COM2>
extern volatile __bit                   SEG19COM2           __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 SEG19COM2_bit       _BIT_ACCESS(LCDDATA14,3)
// LCDDATA20<SEG19COM3>
extern volatile __bit                   SEG19COM3           __at(0x7BD3);	// @ (0xF7A * 8 + 3)
#define                                 SEG19COM3_bit       _BIT_ACCESS(LCDDATA20,3)
// LCDDATA0<SEG1COM0>
extern volatile __bit                   SEG1COM0            __at(0x7DD9);	// @ (0xFBB * 8 + 1)
#define                                 SEG1COM0_bit        _BIT_ACCESS(LCDDATA0,1)
// LCDDATA6<SEG1COM1>
extern volatile __bit                   SEG1COM1            __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 SEG1COM1_bit        _BIT_ACCESS(LCDDATA6,1)
// LCDDATA12<SEG1COM2>
extern volatile __bit                   SEG1COM2            __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 SEG1COM2_bit        _BIT_ACCESS(LCDDATA12,1)
// PORTD<SEG2>
extern volatile __bit                   SEG2                __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 SEG2_bit            _BIT_ACCESS(PORTD,2)
// PORTF<SEG20>
extern volatile __bit                   SEG20               __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 SEG20_bit           _BIT_ACCESS(PORTF,2)
// LCDDATA2<SEG20COM0>
extern volatile __bit                   SEG20COM0           __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 SEG20COM0_bit       _BIT_ACCESS(LCDDATA2,4)
// LCDDATA8<SEG20COM1>
extern volatile __bit                   SEG20COM1           __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 SEG20COM1_bit       _BIT_ACCESS(LCDDATA8,4)
// LCDDATA14<SEG20COM2>
extern volatile __bit                   SEG20COM2           __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 SEG20COM2_bit       _BIT_ACCESS(LCDDATA14,4)
// LCDDATA20<SEG20COM3>
extern volatile __bit                   SEG20COM3           __at(0x7BD4);	// @ (0xF7A * 8 + 4)
#define                                 SEG20COM3_bit       _BIT_ACCESS(LCDDATA20,4)
// PORTF<SEG21>
extern volatile __bit                   SEG21               __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 SEG21_bit           _BIT_ACCESS(PORTF,3)
// LCDDATA2<SEG21COM0>
extern volatile __bit                   SEG21COM0           __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 SEG21COM0_bit       _BIT_ACCESS(LCDDATA2,5)
// LCDDATA8<SEG21COM1>
extern volatile __bit                   SEG21COM1           __at(0x7B75);	// @ (0xF6E * 8 + 5)
#define                                 SEG21COM1_bit       _BIT_ACCESS(LCDDATA8,5)
// LCDDATA14<SEG21COM2>
extern volatile __bit                   SEG21COM2           __at(0x7BA5);	// @ (0xF74 * 8 + 5)
#define                                 SEG21COM2_bit       _BIT_ACCESS(LCDDATA14,5)
// LCDDATA20<SEG21COM3>
extern volatile __bit                   SEG21COM3           __at(0x7BD5);	// @ (0xF7A * 8 + 5)
#define                                 SEG21COM3_bit       _BIT_ACCESS(LCDDATA20,5)
// PORTF<SEG22>
extern volatile __bit                   SEG22               __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 SEG22_bit           _BIT_ACCESS(PORTF,4)
// LCDDATA2<SEG22COM0>
extern volatile __bit                   SEG22COM0           __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 SEG22COM0_bit       _BIT_ACCESS(LCDDATA2,6)
// LCDDATA8<SEG22COM1>
extern volatile __bit                   SEG22COM1           __at(0x7B76);	// @ (0xF6E * 8 + 6)
#define                                 SEG22COM1_bit       _BIT_ACCESS(LCDDATA8,6)
// LCDDATA14<SEG22COM2>
extern volatile __bit                   SEG22COM2           __at(0x7BA6);	// @ (0xF74 * 8 + 6)
#define                                 SEG22COM2_bit       _BIT_ACCESS(LCDDATA14,6)
// LCDDATA20<SEG22COM3>
extern volatile __bit                   SEG22COM3           __at(0x7BD6);	// @ (0xF7A * 8 + 6)
#define                                 SEG22COM3_bit       _BIT_ACCESS(LCDDATA20,6)
// PORTF<SEG23>
extern volatile __bit                   SEG23               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 SEG23_bit           _BIT_ACCESS(PORTF,5)
// LCDDATA2<SEG23COM0>
extern volatile __bit                   SEG23COM0           __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 SEG23COM0_bit       _BIT_ACCESS(LCDDATA2,7)
// LCDDATA8<SEG23COM1>
extern volatile __bit                   SEG23COM1           __at(0x7B77);	// @ (0xF6E * 8 + 7)
#define                                 SEG23COM1_bit       _BIT_ACCESS(LCDDATA8,7)
// LCDDATA14<SEG23COM2>
extern volatile __bit                   SEG23COM2           __at(0x7BA7);	// @ (0xF74 * 8 + 7)
#define                                 SEG23COM2_bit       _BIT_ACCESS(LCDDATA14,7)
// LCDDATA20<SEG23COM3>
extern volatile __bit                   SEG23COM3           __at(0x7BD7);	// @ (0xF7A * 8 + 7)
#define                                 SEG23COM3_bit       _BIT_ACCESS(LCDDATA20,7)
// PORTF<SEG24>
extern volatile __bit                   SEG24               __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 SEG24_bit           _BIT_ACCESS(PORTF,6)
// LCDDATA3<SEG24COM0>
extern volatile __bit                   SEG24COM0           __at(0x7DF0);	// @ (0xFBE * 8 + 0)
#define                                 SEG24COM0_bit       _BIT_ACCESS(LCDDATA3,0)
// LCDDATA9<SEG24COM1>
extern volatile __bit                   SEG24COM1           __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 SEG24COM1_bit       _BIT_ACCESS(LCDDATA9,0)
// LCDDATA15<SEG24COM2>
extern volatile __bit                   SEG24COM2           __at(0x7BA8);	// @ (0xF75 * 8 + 0)
#define                                 SEG24COM2_bit       _BIT_ACCESS(LCDDATA15,0)
// LCDDATA21<SEG24COM3>
extern volatile __bit                   SEG24COM3           __at(0x7BD8);	// @ (0xF7B * 8 + 0)
#define                                 SEG24COM3_bit       _BIT_ACCESS(LCDDATA21,0)
// PORTF<SEG25>
extern volatile __bit                   SEG25               __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 SEG25_bit           _BIT_ACCESS(PORTF,7)
// LCDDATA3<SEG25COM0>
extern volatile __bit                   SEG25COM0           __at(0x7DF1);	// @ (0xFBE * 8 + 1)
#define                                 SEG25COM0_bit       _BIT_ACCESS(LCDDATA3,1)
// LCDDATA9<SEG25COM1>
extern volatile __bit                   SEG25COM1           __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 SEG25COM1_bit       _BIT_ACCESS(LCDDATA9,1)
// LCDDATA15<SEG25COM2>
extern volatile __bit                   SEG25COM2           __at(0x7BA9);	// @ (0xF75 * 8 + 1)
#define                                 SEG25COM2_bit       _BIT_ACCESS(LCDDATA15,1)
// LCDDATA21<SEG25COM3>
extern volatile __bit                   SEG25COM3           __at(0x7BD9);	// @ (0xF7B * 8 + 1)
#define                                 SEG25COM3_bit       _BIT_ACCESS(LCDDATA21,1)
// PORTG<SEG26>
extern volatile __bit                   SEG26               __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 SEG26_bit           _BIT_ACCESS(PORTG,4)
// LCDDATA3<SEG26COM0>
extern volatile __bit                   SEG26COM0           __at(0x7DF2);	// @ (0xFBE * 8 + 2)
#define                                 SEG26COM0_bit       _BIT_ACCESS(LCDDATA3,2)
// LCDDATA9<SEG26COM1>
extern volatile __bit                   SEG26COM1           __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 SEG26COM1_bit       _BIT_ACCESS(LCDDATA9,2)
// LCDDATA15<SEG26COM2>
extern volatile __bit                   SEG26COM2           __at(0x7BAA);	// @ (0xF75 * 8 + 2)
#define                                 SEG26COM2_bit       _BIT_ACCESS(LCDDATA15,2)
// LCDDATA21<SEG26COM3>
extern volatile __bit                   SEG26COM3           __at(0x7BDA);	// @ (0xF7B * 8 + 2)
#define                                 SEG26COM3_bit       _BIT_ACCESS(LCDDATA21,2)
// PORTC<SEG27>
extern volatile __bit                   SEG27               __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 SEG27_bit           _BIT_ACCESS(PORTC,6)
// LCDDATA3<SEG27COM0>
extern volatile __bit                   SEG27COM0           __at(0x7DF3);	// @ (0xFBE * 8 + 3)
#define                                 SEG27COM0_bit       _BIT_ACCESS(LCDDATA3,3)
// LCDDATA9<SEG27COM1>
extern volatile __bit                   SEG27COM1           __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 SEG27COM1_bit       _BIT_ACCESS(LCDDATA9,3)
// LCDDATA15<SEG27COM2>
extern volatile __bit                   SEG27COM2           __at(0x7BAB);	// @ (0xF75 * 8 + 3)
#define                                 SEG27COM2_bit       _BIT_ACCESS(LCDDATA15,3)
// LCDDATA21<SEG27COM3>
extern volatile __bit                   SEG27COM3           __at(0x7BDB);	// @ (0xF7B * 8 + 3)
#define                                 SEG27COM3_bit       _BIT_ACCESS(LCDDATA21,3)
// PORTC<SEG28>
extern volatile __bit                   SEG28               __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 SEG28_bit           _BIT_ACCESS(PORTC,7)
// LCDDATA3<SEG28COM0>
extern volatile __bit                   SEG28COM0           __at(0x7DF4);	// @ (0xFBE * 8 + 4)
#define                                 SEG28COM0_bit       _BIT_ACCESS(LCDDATA3,4)
// LCDDATA9<SEG28COM1>
extern volatile __bit                   SEG28COM1           __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 SEG28COM1_bit       _BIT_ACCESS(LCDDATA9,4)
// LCDDATA15<SEG28COM2>
extern volatile __bit                   SEG28COM2           __at(0x7BAC);	// @ (0xF75 * 8 + 4)
#define                                 SEG28COM2_bit       _BIT_ACCESS(LCDDATA15,4)
// LCDDATA21<SEG28COM3>
extern volatile __bit                   SEG28COM3           __at(0x7BDC);	// @ (0xF7B * 8 + 4)
#define                                 SEG28COM3_bit       _BIT_ACCESS(LCDDATA21,4)
// PORTB<SEG29>
extern volatile __bit                   SEG29               __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 SEG29_bit           _BIT_ACCESS(PORTB,5)
// LCDDATA3<SEG29COM0>
extern volatile __bit                   SEG29COM0           __at(0x7DF5);	// @ (0xFBE * 8 + 5)
#define                                 SEG29COM0_bit       _BIT_ACCESS(LCDDATA3,5)
// LCDDATA9<SEG29COM1>
extern volatile __bit                   SEG29COM1           __at(0x7B7D);	// @ (0xF6F * 8 + 5)
#define                                 SEG29COM1_bit       _BIT_ACCESS(LCDDATA9,5)
// LCDDATA15<SEG29COM2>
extern volatile __bit                   SEG29COM2           __at(0x7BAD);	// @ (0xF75 * 8 + 5)
#define                                 SEG29COM2_bit       _BIT_ACCESS(LCDDATA15,5)
// LCDDATA21<SEG29COM3>
extern volatile __bit                   SEG29COM3           __at(0x7BDD);	// @ (0xF7B * 8 + 5)
#define                                 SEG29COM3_bit       _BIT_ACCESS(LCDDATA21,5)
// LCDDATA0<SEG2COM0>
extern volatile __bit                   SEG2COM0            __at(0x7DDA);	// @ (0xFBB * 8 + 2)
#define                                 SEG2COM0_bit        _BIT_ACCESS(LCDDATA0,2)
// LCDDATA6<SEG2COM1>
extern volatile __bit                   SEG2COM1            __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 SEG2COM1_bit        _BIT_ACCESS(LCDDATA6,2)
// LCDDATA12<SEG2COM2>
extern volatile __bit                   SEG2COM2            __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 SEG2COM2_bit        _BIT_ACCESS(LCDDATA12,2)
// PORTD<SEG3>
extern volatile __bit                   SEG3                __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 SEG3_bit            _BIT_ACCESS(PORTD,3)
// PORTB<SEG30>
extern volatile __bit                   SEG30               __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 SEG30_bit           _BIT_ACCESS(PORTB,0)
// LCDDATA3<SEG30COM0>
extern volatile __bit                   SEG30COM0           __at(0x7DF6);	// @ (0xFBE * 8 + 6)
#define                                 SEG30COM0_bit       _BIT_ACCESS(LCDDATA3,6)
// LCDDATA9<SEG30COM1>
extern volatile __bit                   SEG30COM1           __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 SEG30COM1_bit       _BIT_ACCESS(LCDDATA9,6)
// LCDDATA15<SEG30COM2>
extern volatile __bit                   SEG30COM2           __at(0x7BAE);	// @ (0xF75 * 8 + 6)
#define                                 SEG30COM2_bit       _BIT_ACCESS(LCDDATA15,6)
// LCDDATA21<SEG30COM3>
extern volatile __bit                   SEG30COM3           __at(0x7BDE);	// @ (0xF7B * 8 + 6)
#define                                 SEG30COM3_bit       _BIT_ACCESS(LCDDATA21,6)
// PORTE<SEG31>
extern volatile __bit                   SEG31               __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 SEG31_bit           _BIT_ACCESS(PORTE,7)
// LCDDATA3<SEG31COM0>
extern volatile __bit                   SEG31COM0           __at(0x7DF7);	// @ (0xFBE * 8 + 7)
#define                                 SEG31COM0_bit       _BIT_ACCESS(LCDDATA3,7)
// LCDDATA9<SEG31COM1>
extern volatile __bit                   SEG31COM1           __at(0x7B7F);	// @ (0xF6F * 8 + 7)
#define                                 SEG31COM1_bit       _BIT_ACCESS(LCDDATA9,7)
// LCDDATA15<SEG31COM2>
extern volatile __bit                   SEG31COM2           __at(0x7BAF);	// @ (0xF75 * 8 + 7)
#define                                 SEG31COM2_bit       _BIT_ACCESS(LCDDATA15,7)
// LCDDATA21<SEG31COM3>
extern volatile __bit                   SEG31COM3           __at(0x7BDF);	// @ (0xF7B * 8 + 7)
#define                                 SEG31COM3_bit       _BIT_ACCESS(LCDDATA21,7)
// PORTC<SEG32>
extern volatile __bit                   SEG32               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 SEG32_bit           _BIT_ACCESS(PORTC,1)
// LCDDATA4<SEG32COM0>
extern volatile __bit                   SEG32COM0           __at(0x7DF8);	// @ (0xFBF * 8 + 0)
#define                                 SEG32COM0_bit       _BIT_ACCESS(LCDDATA4,0)
// LCDDATA10<SEG32COM1>
extern volatile __bit                   SEG32COM1           __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 SEG32COM1_bit       _BIT_ACCESS(LCDDATA10,0)
// LCDDATA16<SEG32COM2>
extern volatile __bit                   SEG32COM2           __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 SEG32COM2_bit       _BIT_ACCESS(LCDDATA16,0)
// LCDDATA22<SEG32COM3>
extern volatile __bit                   SEG32COM3           __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 SEG32COM3_bit       _BIT_ACCESS(LCDDATA22,0)
// LCDDATA4<SEG33COM0>
extern volatile __bit                   SEG33COM0           __at(0x7DF9);	// @ (0xFBF * 8 + 1)
#define                                 SEG33COM0_bit       _BIT_ACCESS(LCDDATA4,1)
// LCDDATA4<SEG34COM0>
extern volatile __bit                   SEG34COM0           __at(0x7DFA);	// @ (0xFBF * 8 + 2)
#define                                 SEG34COM0_bit       _BIT_ACCESS(LCDDATA4,2)
// LCDDATA4<SEG35COM0>
extern volatile __bit                   SEG35COM0           __at(0x7DFB);	// @ (0xFBF * 8 + 3)
#define                                 SEG35COM0_bit       _BIT_ACCESS(LCDDATA4,3)
// LCDDATA4<SEG36COM0>
extern volatile __bit                   SEG36COM0           __at(0x7DFC);	// @ (0xFBF * 8 + 4)
#define                                 SEG36COM0_bit       _BIT_ACCESS(LCDDATA4,4)
// LCDDATA4<SEG37COM0>
extern volatile __bit                   SEG37COM0           __at(0x7DFD);	// @ (0xFBF * 8 + 5)
#define                                 SEG37COM0_bit       _BIT_ACCESS(LCDDATA4,5)
// LCDDATA4<SEG38COM0>
extern volatile __bit                   SEG38COM0           __at(0x7DFE);	// @ (0xFBF * 8 + 6)
#define                                 SEG38COM0_bit       _BIT_ACCESS(LCDDATA4,6)
// LCDDATA4<SEG39COM0>
extern volatile __bit                   SEG39COM0           __at(0x7DFF);	// @ (0xFBF * 8 + 7)
#define                                 SEG39COM0_bit       _BIT_ACCESS(LCDDATA4,7)
// LCDDATA0<SEG3COM0>
extern volatile __bit                   SEG3COM0            __at(0x7DDB);	// @ (0xFBB * 8 + 3)
#define                                 SEG3COM0_bit        _BIT_ACCESS(LCDDATA0,3)
// LCDDATA6<SEG3COM1>
extern volatile __bit                   SEG3COM1            __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 SEG3COM1_bit        _BIT_ACCESS(LCDDATA6,3)
// LCDDATA12<SEG3COM2>
extern volatile __bit                   SEG3COM2            __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 SEG3COM2_bit        _BIT_ACCESS(LCDDATA12,3)
// PORTD<SEG4>
extern volatile __bit                   SEG4                __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 SEG4_bit            _BIT_ACCESS(PORTD,4)
// LCDDATA0<SEG4COM0>
extern volatile __bit                   SEG4COM0            __at(0x7DDC);	// @ (0xFBB * 8 + 4)
#define                                 SEG4COM0_bit        _BIT_ACCESS(LCDDATA0,4)
// LCDDATA6<SEG4COM1>
extern volatile __bit                   SEG4COM1            __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 SEG4COM1_bit        _BIT_ACCESS(LCDDATA6,4)
// LCDDATA12<SEG4COM2>
extern volatile __bit                   SEG4COM2            __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 SEG4COM2_bit        _BIT_ACCESS(LCDDATA12,4)
// PORTD<SEG5>
extern volatile __bit                   SEG5                __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 SEG5_bit            _BIT_ACCESS(PORTD,5)
// LCDDATA0<SEG5COM0>
extern volatile __bit                   SEG5COM0            __at(0x7DDD);	// @ (0xFBB * 8 + 5)
#define                                 SEG5COM0_bit        _BIT_ACCESS(LCDDATA0,5)
// LCDDATA6<SEG5COM1>
extern volatile __bit                   SEG5COM1            __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 SEG5COM1_bit        _BIT_ACCESS(LCDDATA6,5)
// LCDDATA12<SEG5COM2>
extern volatile __bit                   SEG5COM2            __at(0x7B95);	// @ (0xF72 * 8 + 5)
#define                                 SEG5COM2_bit        _BIT_ACCESS(LCDDATA12,5)
// PORTD<SEG6>
extern volatile __bit                   SEG6                __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 SEG6_bit            _BIT_ACCESS(PORTD,6)
// LCDDATA0<SEG6COM0>
extern volatile __bit                   SEG6COM0            __at(0x7DDE);	// @ (0xFBB * 8 + 6)
#define                                 SEG6COM0_bit        _BIT_ACCESS(LCDDATA0,6)
// LCDDATA6<SEG6COM1>
extern volatile __bit                   SEG6COM1            __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 SEG6COM1_bit        _BIT_ACCESS(LCDDATA6,6)
// LCDDATA12<SEG6COM2>
extern volatile __bit                   SEG6COM2            __at(0x7B96);	// @ (0xF72 * 8 + 6)
#define                                 SEG6COM2_bit        _BIT_ACCESS(LCDDATA12,6)
// PORTD<SEG7>
extern volatile __bit                   SEG7                __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 SEG7_bit            _BIT_ACCESS(PORTD,7)
// LCDDATA0<SEG7COM0>
extern volatile __bit                   SEG7COM0            __at(0x7DDF);	// @ (0xFBB * 8 + 7)
#define                                 SEG7COM0_bit        _BIT_ACCESS(LCDDATA0,7)
// LCDDATA6<SEG7COM1>
extern volatile __bit                   SEG7COM1            __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 SEG7COM1_bit        _BIT_ACCESS(LCDDATA6,7)
// LCDDATA12<SEG7COM2>
extern volatile __bit                   SEG7COM2            __at(0x7B97);	// @ (0xF72 * 8 + 7)
#define                                 SEG7COM2_bit        _BIT_ACCESS(LCDDATA12,7)
// PORTB<SEG8>
extern volatile __bit                   SEG8                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 SEG8_bit            _BIT_ACCESS(PORTB,1)
// LCDDATA1<SEG8COM0>
extern volatile __bit                   SEG8COM0            __at(0x7DE0);	// @ (0xFBC * 8 + 0)
#define                                 SEG8COM0_bit        _BIT_ACCESS(LCDDATA1,0)
// LCDDATA7<SEG8COM1>
extern volatile __bit                   SEG8COM1            __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 SEG8COM1_bit        _BIT_ACCESS(LCDDATA7,0)
// LCDDATA13<SEG8COM2>
extern volatile __bit                   SEG8COM2            __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 SEG8COM2_bit        _BIT_ACCESS(LCDDATA13,0)
// LCDDATA19<SEG8COM3>
extern volatile __bit                   SEG8COM3            __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 SEG8COM3_bit        _BIT_ACCESS(LCDDATA19,0)
// PORTB<SEG9>
extern volatile __bit                   SEG9                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 SEG9_bit            _BIT_ACCESS(PORTB,2)
// LCDDATA1<SEG9COM0>
extern volatile __bit                   SEG9COM0            __at(0x7DE1);	// @ (0xFBC * 8 + 1)
#define                                 SEG9COM0_bit        _BIT_ACCESS(LCDDATA1,1)
// LCDDATA7<SEG9COM1>
extern volatile __bit                   SEG9COM1            __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 SEG9COM1_bit        _BIT_ACCESS(LCDDATA7,1)
// LCDDATA13<SEG9COM2>
extern volatile __bit                   SEG9COM2            __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 SEG9COM2_bit        _BIT_ACCESS(LCDDATA13,1)
// LCDDATA19<SEG9COM3>
extern volatile __bit                   SEG9COM3            __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 SEG9COM3_bit        _BIT_ACCESS(LCDDATA19,1)
// LCDSE0<SEGEN0>
extern volatile __bit                   SEGEN0              __at(0x7D48);	// @ (0xFA9 * 8 + 0)
#define                                 SEGEN0_bit          _BIT_ACCESS(LCDSE0,0)
// LCDSE0<SEGEN1>
extern volatile __bit                   SEGEN1              __at(0x7D49);	// @ (0xFA9 * 8 + 1)
#define                                 SEGEN1_bit          _BIT_ACCESS(LCDSE0,1)
// LCDSE1<SEGEN10>
extern volatile __bit                   SEGEN10             __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 SEGEN10_bit         _BIT_ACCESS(LCDSE1,2)
// LCDSE1<SEGEN11>
extern volatile __bit                   SEGEN11             __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 SEGEN11_bit         _BIT_ACCESS(LCDSE1,3)
// LCDSE1<SEGEN12>
extern volatile __bit                   SEGEN12             __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 SEGEN12_bit         _BIT_ACCESS(LCDSE1,4)
// LCDSE1<SEGEN13>
extern volatile __bit                   SEGEN13             __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 SEGEN13_bit         _BIT_ACCESS(LCDSE1,5)
// LCDSE1<SEGEN14>
extern volatile __bit                   SEGEN14             __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 SEGEN14_bit         _BIT_ACCESS(LCDSE1,6)
// LCDSE1<SEGEN15>
extern volatile __bit                   SEGEN15             __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 SEGEN15_bit         _BIT_ACCESS(LCDSE1,7)
// LCDSE2<SEGEN16>
extern volatile __bit                   SEGEN16             __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 SEGEN16_bit         _BIT_ACCESS(LCDSE2,0)
// LCDSE2<SEGEN17>
extern volatile __bit                   SEGEN17             __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 SEGEN17_bit         _BIT_ACCESS(LCDSE2,1)
// LCDSE2<SEGEN18>
extern volatile __bit                   SEGEN18             __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 SEGEN18_bit         _BIT_ACCESS(LCDSE2,2)
// LCDSE2<SEGEN19>
extern volatile __bit                   SEGEN19             __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 SEGEN19_bit         _BIT_ACCESS(LCDSE2,3)
// LCDSE0<SEGEN2>
extern volatile __bit                   SEGEN2              __at(0x7D4A);	// @ (0xFA9 * 8 + 2)
#define                                 SEGEN2_bit          _BIT_ACCESS(LCDSE0,2)
// LCDSE2<SEGEN20>
extern volatile __bit                   SEGEN20             __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 SEGEN20_bit         _BIT_ACCESS(LCDSE2,4)
// LCDSE2<SEGEN21>
extern volatile __bit                   SEGEN21             __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 SEGEN21_bit         _BIT_ACCESS(LCDSE2,5)
// LCDSE2<SEGEN22>
extern volatile __bit                   SEGEN22             __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 SEGEN22_bit         _BIT_ACCESS(LCDSE2,6)
// LCDSE2<SEGEN23>
extern volatile __bit                   SEGEN23             __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 SEGEN23_bit         _BIT_ACCESS(LCDSE2,7)
// LCDSE3<SEGEN24>
extern volatile __bit                   SEGEN24             __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 SEGEN24_bit         _BIT_ACCESS(LCDSE3,0)
// LCDSE3<SEGEN25>
extern volatile __bit                   SEGEN25             __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 SEGEN25_bit         _BIT_ACCESS(LCDSE3,1)
// LCDSE3<SEGEN26>
extern volatile __bit                   SEGEN26             __at(0x7DC2);	// @ (0xFB8 * 8 + 2)
#define                                 SEGEN26_bit         _BIT_ACCESS(LCDSE3,2)
// LCDSE3<SEGEN27>
extern volatile __bit                   SEGEN27             __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 SEGEN27_bit         _BIT_ACCESS(LCDSE3,3)
// LCDSE3<SEGEN28>
extern volatile __bit                   SEGEN28             __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SEGEN28_bit         _BIT_ACCESS(LCDSE3,4)
// LCDSE3<SEGEN29>
extern volatile __bit                   SEGEN29             __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 SEGEN29_bit         _BIT_ACCESS(LCDSE3,5)
// LCDSE0<SEGEN3>
extern volatile __bit                   SEGEN3              __at(0x7D4B);	// @ (0xFA9 * 8 + 3)
#define                                 SEGEN3_bit          _BIT_ACCESS(LCDSE0,3)
// LCDSE3<SEGEN30>
extern volatile __bit                   SEGEN30             __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 SEGEN30_bit         _BIT_ACCESS(LCDSE3,6)
// LCDSE3<SEGEN31>
extern volatile __bit                   SEGEN31             __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
#define                                 SEGEN31_bit         _BIT_ACCESS(LCDSE3,7)
// LCDSE4<SEGEN32>
extern volatile __bit                   SEGEN32             __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 SEGEN32_bit         _BIT_ACCESS(LCDSE4,0)
// LCDSE0<SEGEN4>
extern volatile __bit                   SEGEN4              __at(0x7D4C);	// @ (0xFA9 * 8 + 4)
#define                                 SEGEN4_bit          _BIT_ACCESS(LCDSE0,4)
// LCDSE0<SEGEN5>
extern volatile __bit                   SEGEN5              __at(0x7D4D);	// @ (0xFA9 * 8 + 5)
#define                                 SEGEN5_bit          _BIT_ACCESS(LCDSE0,5)
// LCDSE0<SEGEN6>
extern volatile __bit                   SEGEN6              __at(0x7D4E);	// @ (0xFA9 * 8 + 6)
#define                                 SEGEN6_bit          _BIT_ACCESS(LCDSE0,6)
// LCDSE0<SEGEN7>
extern volatile __bit                   SEGEN7              __at(0x7D4F);	// @ (0xFA9 * 8 + 7)
#define                                 SEGEN7_bit          _BIT_ACCESS(LCDSE0,7)
// LCDSE1<SEGEN8>
extern volatile __bit                   SEGEN8              __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 SEGEN8_bit          _BIT_ACCESS(LCDSE1,0)
// LCDSE1<SEGEN9>
extern volatile __bit                   SEGEN9              __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 SEGEN9_bit          _BIT_ACCESS(LCDSE1,1)
// SSP1CON2<SEN>
extern volatile __bit                   SEN                 __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSP1CON2,0)
// SSP1CON2<SEN1>
extern volatile __bit                   SEN1                __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN1_bit            _BIT_ACCESS(SSP1CON2,0)
// TXSTA1<SENDB>
extern volatile __bit                   SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA1,3)
// TXSTA1<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA1,3)
// TXSTA2<SENDB2>
extern volatile __bit                   SENDB2              __at(0x7B0B);	// @ (0xF61 * 8 + 3)
#define                                 SENDB2_bit          _BIT_ACCESS(TXSTA2,3)
// LCDCON<SLPEN>
extern volatile __bit                   SLPEN               __at(0x7D46);	// @ (0xFA8 * 8 + 6)
#define                                 SLPEN_bit           _BIT_ACCESS(LCDCON,6)
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// SSP1STAT<SMP1>
extern volatile __bit                   SMP1                __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP1_bit            _BIT_ACCESS(SSP1STAT,7)
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(T1CON,3)
// T3CON<SOSCEN3>
extern volatile __bit                   SOSCEN3             __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 SOSCEN3_bit         _BIT_ACCESS(T3CON,3)
// STKPTR<SP0>
extern volatile __bit                   SP0                 __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 SP0_bit             _BIT_ACCESS(STKPTR,0)
// STKPTR<SP1>
extern volatile __bit                   SP1                 __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 SP1_bit             _BIT_ACCESS(STKPTR,1)
// STKPTR<SP2>
extern volatile __bit                   SP2                 __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 SP2_bit             _BIT_ACCESS(STKPTR,2)
// STKPTR<SP3>
extern volatile __bit                   SP3                 __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 SP3_bit             _BIT_ACCESS(STKPTR,3)
// STKPTR<SP4>
extern volatile __bit                   SP4                 __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 SP4_bit             _BIT_ACCESS(STKPTR,4)
// RCSTA1<SPEN1>
extern volatile __bit                   SPEN1               __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN1_bit           _BIT_ACCESS(RCSTA1,7)
// RCSTA2<SPEN2>
extern volatile __bit                   SPEN2               __at(0x7B07);	// @ (0xF60 * 8 + 7)
#define                                 SPEN2_bit           _BIT_ACCESS(RCSTA2,7)
// TRISG<SPIOD>
extern volatile __bit                   SPIOD               __at(0x7CC7);	// @ (0xF98 * 8 + 7)
#define                                 SPIOD_bit           _BIT_ACCESS(TRISG,7)
// RCSTA1<SREN1>
extern volatile __bit                   SREN1               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN1_bit           _BIT_ACCESS(RCSTA1,5)
// RCSTA2<SREN2>
extern volatile __bit                   SREN2               __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 SREN2_bit           _BIT_ACCESS(RCSTA2,5)
// RCSTA1<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA1,5)
// PORTF<SS1>
extern volatile __bit                   SS1                 __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 SS1_bit             _BIT_ACCESS(PORTF,7)
// PORTD<SS2>
extern volatile __bit                   SS2                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 SS2_bit             _BIT_ACCESS(PORTD,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// IPR1<SSP1IP>
extern volatile __bit                   SSP1IP              __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSP1IP_bit          _BIT_ACCESS(IPR1,3)
// SSP1CON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPEN1>
extern volatile __bit                   SSPEN1              __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN1_bit          _BIT_ACCESS(SSP1CON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// IPR1<SSPIP>
extern volatile __bit                   SSPIP               __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSPIP_bit           _BIT_ACCESS(IPR1,3)
// SSP1CON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSPM01>
extern volatile __bit                   SSPM01              __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM01_bit          _BIT_ACCESS(SSP1CON1,0)
// LCDDATA12<SSPM012>
extern volatile __bit                   SSPM012             __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 SSPM012_bit         _BIT_ACCESS(LCDDATA12,0)
// SSP1CON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM11_bit          _BIT_ACCESS(SSP1CON1,1)
// LCDDATA12<SSPM112>
extern volatile __bit                   SSPM112             __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 SSPM112_bit         _BIT_ACCESS(LCDDATA12,1)
// SSP1CON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM21_bit          _BIT_ACCESS(SSP1CON1,2)
// LCDDATA12<SSPM212>
extern volatile __bit                   SSPM212             __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 SSPM212_bit         _BIT_ACCESS(LCDDATA12,2)
// SSP1CON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM31_bit          _BIT_ACCESS(SSP1CON1,3)
// LCDDATA12<SSPM312>
extern volatile __bit                   SSPM312             __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 SSPM312_bit         _BIT_ACCESS(LCDDATA12,3)
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// SSP1CON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV1_bit          _BIT_ACCESS(SSP1CON1,6)
// SSP1STAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<START1>
extern volatile __bit                   START1              __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START1_bit          _BIT_ACCESS(SSP1STAT,3)
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
// SSP1STAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSP1STAT,4)
// SSP1STAT<STOP1>
extern volatile __bit                   STOP1               __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP1_bit           _BIT_ACCESS(SSP1STAT,4)
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA1<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA1,4)
// TXSTA2<SYNC2>
extern volatile __bit                   SYNC2               __at(0x7B0C);	// @ (0xF61 * 8 + 4)
#define                                 SYNC2_bit           _BIT_ACCESS(TXSTA2,4)
// T0CON<T08BIT>
extern volatile __bit                   T08BIT              __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T08BIT_bit          _BIT_ACCESS(T0CON,6)
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
// T3CON<T3CCP1>
extern volatile __bit                   T3CCP1              __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 T3CCP1_bit          _BIT_ACCESS(T3CON,3)
// T3CON<T3CCP2>
extern volatile __bit                   T3CCP2              __at(0x7D8E);	// @ (0xFB1 * 8 + 6)
#define                                 T3CCP2_bit          _BIT_ACCESS(T3CON,6)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// LCDDATA19<T3CKPS019>
extern volatile __bit                   T3CKPS019           __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 T3CKPS019_bit       _BIT_ACCESS(LCDDATA19,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// LCDDATA19<T3CKPS119>
extern volatile __bit                   T3CKPS119           __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 T3CKPS119_bit       _BIT_ACCESS(LCDDATA19,5)
// T3CON<T3INSYNC>
extern volatile __bit                   T3INSYNC            __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3INSYNC_bit        _BIT_ACCESS(T3CON,2)
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 T3RD16_bit          _BIT_ACCESS(T3CON,7)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
// LCDDATA16<T4CKPS016>
extern volatile __bit                   T4CKPS016           __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 T4CKPS016_bit       _BIT_ACCESS(LCDDATA16,0)
// LCDDATA16<T4CKPS116>
extern volatile __bit                   T4CKPS116           __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 T4CKPS116_bit       _BIT_ACCESS(LCDDATA16,1)
// LCDDATA16<T4OUTPS016>
extern volatile __bit                   T4OUTPS016          __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 T4OUTPS016_bit      _BIT_ACCESS(LCDDATA16,3)
// LCDDATA16<T4OUTPS116>
extern volatile __bit                   T4OUTPS116          __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 T4OUTPS116_bit      _BIT_ACCESS(LCDDATA16,4)
// LCDDATA16<T4OUTPS216>
extern volatile __bit                   T4OUTPS216          __at(0x7BB5);	// @ (0xF76 * 8 + 5)
#define                                 T4OUTPS216_bit      _BIT_ACCESS(LCDDATA16,5)
// LCDDATA16<T4OUTPS316>
extern volatile __bit                   T4OUTPS316          __at(0x7BB6);	// @ (0xF76 * 8 + 6)
#define                                 T4OUTPS316_bit      _BIT_ACCESS(LCDDATA16,6)
// CTMUCONH<TGEN>
extern volatile __bit                   TGEN                __at(0x7ABC);	// @ (0xF57 * 8 + 4)
#define                                 TGEN_bit            _BIT_ACCESS(CTMUCONH,4)
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
// T3CON<TMR3CS>
extern volatile __bit                   TMR3CS              __at(0x7D89);	// @ (0xFB1 * 8 + 1)
#define                                 TMR3CS_bit          _BIT_ACCESS(T3CON,1)
// LCDDATA19<TMR3CS019>
extern volatile __bit                   TMR3CS019           __at(0x7BCE);	// @ (0xF79 * 8 + 6)
#define                                 TMR3CS019_bit       _BIT_ACCESS(LCDDATA19,6)
// LCDDATA19<TMR3CS119>
extern volatile __bit                   TMR3CS119           __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 TMR3CS119_bit       _BIT_ACCESS(LCDDATA19,7)
// PIE2<TMR3IE>
extern volatile __bit                   TMR3IE              __at(0x7D01);	// @ (0xFA0 * 8 + 1)
#define                                 TMR3IE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<TMR3IF>
extern volatile __bit                   TMR3IF              __at(0x7D09);	// @ (0xFA1 * 8 + 1)
#define                                 TMR3IF_bit          _BIT_ACCESS(PIR2,1)
// IPR2<TMR3IP>
extern volatile __bit                   TMR3IP              __at(0x7D11);	// @ (0xFA2 * 8 + 1)
#define                                 TMR3IP_bit          _BIT_ACCESS(IPR2,1)
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x7D88);	// @ (0xFB1 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              _BIT_ACCESS(RCON,3)
// PORTA<TOCKI>
extern volatile __bit                   TOCKI               __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 TOCKI_bit           _BIT_ACCESS(PORTA,4)
// ADCON1<TRIGSEL>
extern volatile __bit                   TRIGSEL             __at(0x7E0F);	// @ (0xFC1 * 8 + 7)
#define                                 TRIGSEL_bit         _BIT_ACCESS(ADCON1,7)
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
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x7C95);	// @ (0xF92 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
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
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x7CA8);	// @ (0xF95 * 8 + 0)
#define                                 TRISD0_bit          _BIT_ACCESS(TRISD,0)
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x7CA9);	// @ (0xF95 * 8 + 1)
#define                                 TRISD1_bit          _BIT_ACCESS(TRISD,1)
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x7CAA);	// @ (0xF95 * 8 + 2)
#define                                 TRISD2_bit          _BIT_ACCESS(TRISD,2)
// TRISD<TRISD3>
extern volatile __bit                   TRISD3              __at(0x7CAB);	// @ (0xF95 * 8 + 3)
#define                                 TRISD3_bit          _BIT_ACCESS(TRISD,3)
// TRISD<TRISD4>
extern volatile __bit                   TRISD4              __at(0x7CAC);	// @ (0xF95 * 8 + 4)
#define                                 TRISD4_bit          _BIT_ACCESS(TRISD,4)
// TRISD<TRISD5>
extern volatile __bit                   TRISD5              __at(0x7CAD);	// @ (0xF95 * 8 + 5)
#define                                 TRISD5_bit          _BIT_ACCESS(TRISD,5)
// TRISD<TRISD6>
extern volatile __bit                   TRISD6              __at(0x7CAE);	// @ (0xF95 * 8 + 6)
#define                                 TRISD6_bit          _BIT_ACCESS(TRISD,6)
// TRISD<TRISD7>
extern volatile __bit                   TRISD7              __at(0x7CAF);	// @ (0xF95 * 8 + 7)
#define                                 TRISD7_bit          _BIT_ACCESS(TRISD,7)
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x7CB0);	// @ (0xF96 * 8 + 0)
#define                                 TRISE0_bit          _BIT_ACCESS(TRISE,0)
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x7CB1);	// @ (0xF96 * 8 + 1)
#define                                 TRISE1_bit          _BIT_ACCESS(TRISE,1)
// TRISE<TRISE3>
extern volatile __bit                   TRISE3              __at(0x7CB3);	// @ (0xF96 * 8 + 3)
#define                                 TRISE3_bit          _BIT_ACCESS(TRISE,3)
// TRISE<TRISE4>
extern volatile __bit                   TRISE4              __at(0x7CB4);	// @ (0xF96 * 8 + 4)
#define                                 TRISE4_bit          _BIT_ACCESS(TRISE,4)
// TRISE<TRISE5>
extern volatile __bit                   TRISE5              __at(0x7CB5);	// @ (0xF96 * 8 + 5)
#define                                 TRISE5_bit          _BIT_ACCESS(TRISE,5)
// TRISE<TRISE6>
extern volatile __bit                   TRISE6              __at(0x7CB6);	// @ (0xF96 * 8 + 6)
#define                                 TRISE6_bit          _BIT_ACCESS(TRISE,6)
// TRISE<TRISE7>
extern volatile __bit                   TRISE7              __at(0x7CB7);	// @ (0xF96 * 8 + 7)
#define                                 TRISE7_bit          _BIT_ACCESS(TRISE,7)
// TRISF<TRISF1>
extern volatile __bit                   TRISF1              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 TRISF1_bit          _BIT_ACCESS(TRISF,1)
// TRISF<TRISF2>
extern volatile __bit                   TRISF2              __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 TRISF2_bit          _BIT_ACCESS(TRISF,2)
// TRISF<TRISF3>
extern volatile __bit                   TRISF3              __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 TRISF3_bit          _BIT_ACCESS(TRISF,3)
// TRISF<TRISF4>
extern volatile __bit                   TRISF4              __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 TRISF4_bit          _BIT_ACCESS(TRISF,4)
// TRISF<TRISF5>
extern volatile __bit                   TRISF5              __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 TRISF5_bit          _BIT_ACCESS(TRISF,5)
// TRISF<TRISF6>
extern volatile __bit                   TRISF6              __at(0x7CBE);	// @ (0xF97 * 8 + 6)
#define                                 TRISF6_bit          _BIT_ACCESS(TRISF,6)
// TRISF<TRISF7>
extern volatile __bit                   TRISF7              __at(0x7CBF);	// @ (0xF97 * 8 + 7)
#define                                 TRISF7_bit          _BIT_ACCESS(TRISF,7)
// TRISG<TRISG0>
extern volatile __bit                   TRISG0              __at(0x7CC0);	// @ (0xF98 * 8 + 0)
#define                                 TRISG0_bit          _BIT_ACCESS(TRISG,0)
// TRISG<TRISG1>
extern volatile __bit                   TRISG1              __at(0x7CC1);	// @ (0xF98 * 8 + 1)
#define                                 TRISG1_bit          _BIT_ACCESS(TRISG,1)
// TRISG<TRISG2>
extern volatile __bit                   TRISG2              __at(0x7CC2);	// @ (0xF98 * 8 + 2)
#define                                 TRISG2_bit          _BIT_ACCESS(TRISG,2)
// TRISG<TRISG3>
extern volatile __bit                   TRISG3              __at(0x7CC3);	// @ (0xF98 * 8 + 3)
#define                                 TRISG3_bit          _BIT_ACCESS(TRISG,3)
// TRISG<TRISG4>
extern volatile __bit                   TRISG4              __at(0x7CC4);	// @ (0xF98 * 8 + 4)
#define                                 TRISG4_bit          _BIT_ACCESS(TRISG,4)
// TXSTA1<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA1,1)
// TXSTA2<TRMT2>
extern volatile __bit                   TRMT2               __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 TRMT2_bit           _BIT_ACCESS(TXSTA2,1)
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
// PORTC<TX1>
extern volatile __bit                   TX1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 TX1_bit             _BIT_ACCESS(PORTC,6)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,4)
// IPR1<TX1IP>
extern volatile __bit                   TX1IP               __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TX1IP_bit           _BIT_ACCESS(IPR1,4)
// PORTG<TX2>
extern volatile __bit                   TX2                 __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 TX2_bit             _BIT_ACCESS(PORTG,1)
// PIE3<TX2IE>
extern volatile __bit                   TX2IE               __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TX2IE_bit           _BIT_ACCESS(PIE3,4)
// PIR3<TX2IF>
extern volatile __bit                   TX2IF               __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TX2IF_bit           _BIT_ACCESS(PIR3,4)
// IPR3<TX2IP>
extern volatile __bit                   TX2IP               __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TX2IP_bit           _BIT_ACCESS(IPR3,4)
// TXSTA2<TX8_92>
extern volatile __bit                   TX8_92              __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 TX8_92_bit          _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX91>
extern volatile __bit                   TX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX91_bit            _BIT_ACCESS(TXSTA1,6)
// TXSTA2<TX92>
extern volatile __bit                   TX92                __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 TX92_bit            _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D1_bit           _BIT_ACCESS(TXSTA1,0)
// TXSTA2<TX9D2>
extern volatile __bit                   TX9D2               __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 TX9D2_bit           _BIT_ACCESS(TXSTA2,0)
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
// BAUDCON1<TXCKP>
extern volatile __bit                   TXCKP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<TXCKP1>
extern volatile __bit                   TXCKP1              __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP1_bit          _BIT_ACCESS(BAUDCON1,4)
// TXSTA2<TXD82>
extern volatile __bit                   TXD82               __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 TXD82_bit           _BIT_ACCESS(TXSTA2,0)
// TXSTA1<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN1_bit           _BIT_ACCESS(TXSTA1,5)
// TXSTA2<TXEN2>
extern volatile __bit                   TXEN2               __at(0x7B0D);	// @ (0xF61 * 8 + 5)
#define                                 TXEN2_bit           _BIT_ACCESS(TXSTA2,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            _BIT_ACCESS(IPR1,4)
// LATG<U1OD>
extern volatile __bit                   U1OD                __at(0x7C7E);	// @ (0xF8F * 8 + 6)
#define                                 U1OD_bit            _BIT_ACCESS(LATG,6)
// LATG<U2OD>
extern volatile __bit                   U2OD                __at(0x7C7F);	// @ (0xF8F * 8 + 7)
#define                                 U2OD_bit            _BIT_ACCESS(LATG,7)
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// SSP1STAT<UA1>
extern volatile __bit                   UA1                 __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA1_bit             _BIT_ACCESS(SSP1STAT,1)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG11>
extern volatile __bit                   VCFG11              __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG11_bit          _BIT_ACCESS(ADCON1,5)
// PORTG<VLCAP1>
extern volatile __bit                   VLCAP1              __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 VLCAP1_bit          _BIT_ACCESS(PORTG,2)
// PORTG<VLCAP2>
extern volatile __bit                   VLCAP2              __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 VLCAP2_bit          _BIT_ACCESS(PORTG,3)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
// BAUDCON1<W4E>
extern volatile __bit                   W4E                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON1,1)
// LCDPS<WA>
extern volatile __bit                   WA                  __at(0x7D54);	// @ (0xFAA * 8 + 4)
#define                                 WA_bit              _BIT_ACCESS(LCDPS,4)
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(PR2,4)
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(PR2,5)
// RTCVALH<WAITB0>
extern volatile __bit                   WAITB0              __at(0x7AEE);	// @ (0xF5D * 8 + 6)
#define                                 WAITB0_bit          _BIT_ACCESS(RTCVALH,6)
// RTCVALH<WAITB1>
extern volatile __bit                   WAITB1              __at(0x7AEF);	// @ (0xF5D * 8 + 7)
#define                                 WAITB1_bit          _BIT_ACCESS(RTCVALH,7)
// RTCVALH<WAITE0>
extern volatile __bit                   WAITE0              __at(0x7AE8);	// @ (0xF5D * 8 + 0)
#define                                 WAITE0_bit          _BIT_ACCESS(RTCVALH,0)
// RTCVALH<WAITE1>
extern volatile __bit                   WAITE1              __at(0x7AE9);	// @ (0xF5D * 8 + 1)
#define                                 WAITE1_bit          _BIT_ACCESS(RTCVALH,1)
// RTCVALH<WAITM0>
extern volatile __bit                   WAITM0              __at(0x7AEA);	// @ (0xF5D * 8 + 2)
#define                                 WAITM0_bit          _BIT_ACCESS(RTCVALH,2)
// RTCVALH<WAITM1>
extern volatile __bit                   WAITM1              __at(0x7AEB);	// @ (0xF5D * 8 + 3)
#define                                 WAITM1_bit          _BIT_ACCESS(RTCVALH,3)
// RTCVALH<WAITM2>
extern volatile __bit                   WAITM2              __at(0x7AEC);	// @ (0xF5D * 8 + 4)
#define                                 WAITM2_bit          _BIT_ACCESS(RTCVALH,4)
// RTCVALH<WAITM3>
extern volatile __bit                   WAITM3              __at(0x7AED);	// @ (0xF5D * 8 + 5)
#define                                 WAITM3_bit          _BIT_ACCESS(RTCVALH,5)
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// SSP1CON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL1_bit           _BIT_ACCESS(SSP1CON1,7)
// LCDCON<WERR>
extern volatile __bit                   WERR                __at(0x7D45);	// @ (0xFA8 * 8 + 5)
#define                                 WERR_bit            _BIT_ACCESS(LCDCON,5)
// LCDPS<WFT>
extern volatile __bit                   WFT                 __at(0x7D57);	// @ (0xFAA * 8 + 7)
#define                                 WFT_bit             _BIT_ACCESS(LCDPS,7)
// PR2<WM0>
extern volatile __bit                   WM0                 __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 WM0_bit             _BIT_ACCESS(PR2,0)
// PR2<WM1>
extern volatile __bit                   WM1                 __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 WM1_bit             _BIT_ACCESS(PR2,1)
// EECON1<WPROG>
extern volatile __bit                   WPROG               __at(0x7D35);	// @ (0xFA6 * 8 + 5)
#define                                 WPROG_bit           _BIT_ACCESS(EECON1,5)
// EECON1<WR>
extern volatile __bit                   WR                  __at(0x7D31);	// @ (0xFA6 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// PORTE<WRE>
extern volatile __bit                   WRE                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 WRE_bit             _BIT_ACCESS(PORTE,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x7D32);	// @ (0xFA6 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x7D33);	// @ (0xFA6 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// BAUDCON1<WUE>
extern volatile __bit                   WUE                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON1,1)
// BAUDCON1<WUE1>
extern volatile __bit                   WUE1                __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE1_bit            _BIT_ACCESS(BAUDCON1,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSP1STAT<nA>
extern volatile __bit                   nA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSP1STAT,5)
// RCON<nBOR>
extern volatile __bit                   nBOR                __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(RCON,0)
// RCON<nCM>
extern volatile __bit                   nCM                 __at(0x7E85);	// @ (0xFD0 * 8 + 5)
#define                                 nCM_bit             _BIT_ACCESS(RCON,5)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// RCON<nPD>
extern volatile __bit                   nPD                 __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 nPD_bit             _BIT_ACCESS(RCON,2)
// RCON<nPOR>
extern volatile __bit                   nPOR                __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(RCON,1)
// INTCON2<nRBPU>
extern volatile __bit                   nRBPU               __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(INTCON2,7)
// RCSTA1<nRC8>
extern volatile __bit                   nRC8                __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 nRC8_bit            _BIT_ACCESS(RCSTA1,6)
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 nT3SYNC_bit         _BIT_ACCESS(T3CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// TXSTA1<nTX8>
extern volatile __bit                   nTX8                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 nTX8_bit            _BIT_ACCESS(TXSTA1,6)
// SSP1STAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSP1STAT,2)

#endif // _PIC18F86J72_H_
