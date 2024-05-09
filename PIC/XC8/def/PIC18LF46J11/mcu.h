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

#ifndef _PIC18LF46J11_H_
#define _PIC18LF46J11_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18LF46J11
 */
#ifndef _XC_H_
#warning Header file pic18lf46j11.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: RPOR0
#define RPOR0 RPOR0
extern volatile unsigned char           RPOR0               __at(0xEC6);
#ifndef _LIB_BUILD
asm("RPOR0 equ 0EC6h");
#endif

// Register: RPOR1
#define RPOR1 RPOR1
extern volatile unsigned char           RPOR1               __at(0xEC7);
#ifndef _LIB_BUILD
asm("RPOR1 equ 0EC7h");
#endif

// Register: RPOR2
#define RPOR2 RPOR2
extern volatile unsigned char           RPOR2               __at(0xEC8);
#ifndef _LIB_BUILD
asm("RPOR2 equ 0EC8h");
#endif

// Register: RPOR3
#define RPOR3 RPOR3
extern volatile unsigned char           RPOR3               __at(0xEC9);
#ifndef _LIB_BUILD
asm("RPOR3 equ 0EC9h");
#endif

// Register: RPOR4
#define RPOR4 RPOR4
extern volatile unsigned char           RPOR4               __at(0xECA);
#ifndef _LIB_BUILD
asm("RPOR4 equ 0ECAh");
#endif

// Register: RPOR5
#define RPOR5 RPOR5
extern volatile unsigned char           RPOR5               __at(0xECB);
#ifndef _LIB_BUILD
asm("RPOR5 equ 0ECBh");
#endif

// Register: RPOR6
#define RPOR6 RPOR6
extern volatile unsigned char           RPOR6               __at(0xECC);
#ifndef _LIB_BUILD
asm("RPOR6 equ 0ECCh");
#endif

// Register: RPOR7
#define RPOR7 RPOR7
extern volatile unsigned char           RPOR7               __at(0xECD);
#ifndef _LIB_BUILD
asm("RPOR7 equ 0ECDh");
#endif

// Register: RPOR8
#define RPOR8 RPOR8
extern volatile unsigned char           RPOR8               __at(0xECE);
#ifndef _LIB_BUILD
asm("RPOR8 equ 0ECEh");
#endif

// Register: RPOR9
#define RPOR9 RPOR9
extern volatile unsigned char           RPOR9               __at(0xECF);
#ifndef _LIB_BUILD
asm("RPOR9 equ 0ECFh");
#endif

// Register: RPOR10
#define RPOR10 RPOR10
extern volatile unsigned char           RPOR10              __at(0xED0);
#ifndef _LIB_BUILD
asm("RPOR10 equ 0ED0h");
#endif

// Register: RPOR11
#define RPOR11 RPOR11
extern volatile unsigned char           RPOR11              __at(0xED1);
#ifndef _LIB_BUILD
asm("RPOR11 equ 0ED1h");
#endif

// Register: RPOR12
#define RPOR12 RPOR12
extern volatile unsigned char           RPOR12              __at(0xED2);
#ifndef _LIB_BUILD
asm("RPOR12 equ 0ED2h");
#endif

// Register: RPOR13
#define RPOR13 RPOR13
extern volatile unsigned char           RPOR13              __at(0xED3);
#ifndef _LIB_BUILD
asm("RPOR13 equ 0ED3h");
#endif

// Register: RPOR14
#define RPOR14 RPOR14
extern volatile unsigned char           RPOR14              __at(0xED4);
#ifndef _LIB_BUILD
asm("RPOR14 equ 0ED4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RPOR                   :5;
    };
} RPOR14bits_t;
extern volatile RPOR14bits_t RPOR14bits __at(0xED4);
// bitfield macros
#define _RPOR14_RPOR_POSN                                   0x0
#define _RPOR14_RPOR_POSITION                               0x0
#define _RPOR14_RPOR_SIZE                                   0x5
#define _RPOR14_RPOR_LENGTH                                 0x5
#define _RPOR14_RPOR_MASK                                   0x1F

// Register: RPOR15
#define RPOR15 RPOR15
extern volatile unsigned char           RPOR15              __at(0xED5);
#ifndef _LIB_BUILD
asm("RPOR15 equ 0ED5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RPOR                   :5;
    };
} RPOR15bits_t;
extern volatile RPOR15bits_t RPOR15bits __at(0xED5);
// bitfield macros
#define _RPOR15_RPOR_POSN                                   0x0
#define _RPOR15_RPOR_POSITION                               0x0
#define _RPOR15_RPOR_SIZE                                   0x5
#define _RPOR15_RPOR_LENGTH                                 0x5
#define _RPOR15_RPOR_MASK                                   0x1F

// Register: RPOR16
#define RPOR16 RPOR16
extern volatile unsigned char           RPOR16              __at(0xED6);
#ifndef _LIB_BUILD
asm("RPOR16 equ 0ED6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RPOR                   :5;
    };
} RPOR16bits_t;
extern volatile RPOR16bits_t RPOR16bits __at(0xED6);
// bitfield macros
#define _RPOR16_RPOR_POSN                                   0x0
#define _RPOR16_RPOR_POSITION                               0x0
#define _RPOR16_RPOR_SIZE                                   0x5
#define _RPOR16_RPOR_LENGTH                                 0x5
#define _RPOR16_RPOR_MASK                                   0x1F

// Register: RPOR17
#define RPOR17 RPOR17
extern volatile unsigned char           RPOR17              __at(0xED7);
#ifndef _LIB_BUILD
asm("RPOR17 equ 0ED7h");
#endif

// Register: RPOR18
#define RPOR18 RPOR18
extern volatile unsigned char           RPOR18              __at(0xED8);
#ifndef _LIB_BUILD
asm("RPOR18 equ 0ED8h");
#endif

// Register: RPOR19
#define RPOR19 RPOR19
extern volatile unsigned char           RPOR19              __at(0xED9);
#ifndef _LIB_BUILD
asm("RPOR19 equ 0ED9h");
#endif

// Register: RPOR20
#define RPOR20 RPOR20
extern volatile unsigned char           RPOR20              __at(0xEDA);
#ifndef _LIB_BUILD
asm("RPOR20 equ 0EDAh");
#endif

// Register: RPOR21
#define RPOR21 RPOR21
extern volatile unsigned char           RPOR21              __at(0xEDB);
#ifndef _LIB_BUILD
asm("RPOR21 equ 0EDBh");
#endif

// Register: RPOR22
#define RPOR22 RPOR22
extern volatile unsigned char           RPOR22              __at(0xEDC);
#ifndef _LIB_BUILD
asm("RPOR22 equ 0EDCh");
#endif

// Register: RPOR23
#define RPOR23 RPOR23
extern volatile unsigned char           RPOR23              __at(0xEDD);
#ifndef _LIB_BUILD
asm("RPOR23 equ 0EDDh");
#endif

// Register: RPOR24
#define RPOR24 RPOR24
extern volatile unsigned char           RPOR24              __at(0xEDE);
#ifndef _LIB_BUILD
asm("RPOR24 equ 0EDEh");
#endif

// Register: RPINR1
#define RPINR1 RPINR1
extern volatile unsigned char           RPINR1              __at(0xEE7);
#ifndef _LIB_BUILD
asm("RPINR1 equ 0EE7h");
#endif

// Register: RPINR2
#define RPINR2 RPINR2
extern volatile unsigned char           RPINR2              __at(0xEE8);
#ifndef _LIB_BUILD
asm("RPINR2 equ 0EE8h");
#endif

// Register: RPINR3
#define RPINR3 RPINR3
extern volatile unsigned char           RPINR3              __at(0xEE9);
#ifndef _LIB_BUILD
asm("RPINR3 equ 0EE9h");
#endif

// Register: RPINR4
#define RPINR4 RPINR4
extern volatile unsigned char           RPINR4              __at(0xEEA);
#ifndef _LIB_BUILD
asm("RPINR4 equ 0EEAh");
#endif

// Register: RPINR6
#define RPINR6 RPINR6
extern volatile unsigned char           RPINR6              __at(0xEEC);
#ifndef _LIB_BUILD
asm("RPINR6 equ 0EECh");
#endif

// Register: RPINR7
#define RPINR7 RPINR7
extern volatile unsigned char           RPINR7              __at(0xEED);
#ifndef _LIB_BUILD
asm("RPINR7 equ 0EEDh");
#endif

// Register: RPINR8
#define RPINR8 RPINR8
extern volatile unsigned char           RPINR8              __at(0xEEE);
#ifndef _LIB_BUILD
asm("RPINR8 equ 0EEEh");
#endif

// Register: RPINR12
#define RPINR12 RPINR12
extern volatile unsigned char           RPINR12             __at(0xEF2);
#ifndef _LIB_BUILD
asm("RPINR12 equ 0EF2h");
#endif

// Register: RPINR13
#define RPINR13 RPINR13
extern volatile unsigned char           RPINR13             __at(0xEF3);
#ifndef _LIB_BUILD
asm("RPINR13 equ 0EF3h");
#endif

// Register: RPINR16
#define RPINR16 RPINR16
extern volatile unsigned char           RPINR16             __at(0xEF6);
#ifndef _LIB_BUILD
asm("RPINR16 equ 0EF6h");
#endif

// Register: RPINR17
#define RPINR17 RPINR17
extern volatile unsigned char           RPINR17             __at(0xEF7);
#ifndef _LIB_BUILD
asm("RPINR17 equ 0EF7h");
#endif

// Register: RPINR21
#define RPINR21 RPINR21
extern volatile unsigned char           RPINR21             __at(0xEFB);
#ifndef _LIB_BUILD
asm("RPINR21 equ 0EFBh");
#endif

// Register: RPINR22
#define RPINR22 RPINR22
extern volatile unsigned char           RPINR22             __at(0xEFC);
#ifndef _LIB_BUILD
asm("RPINR22 equ 0EFCh");
#endif

// Register: RPINR23
#define RPINR23 RPINR23
extern volatile unsigned char           RPINR23             __at(0xEFD);
#ifndef _LIB_BUILD
asm("RPINR23 equ 0EFDh");
#endif

// Register: RPINR24
#define RPINR24 RPINR24
extern volatile unsigned char           RPINR24             __at(0xEFE);
#ifndef _LIB_BUILD
asm("RPINR24 equ 0EFEh");
#endif

// Register: PPSCON
#define PPSCON PPSCON
extern volatile unsigned char           PPSCON              __at(0xEFF);
#ifndef _LIB_BUILD
asm("PPSCON equ 0EFFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOLOCK                 :1;
    };
} PPSCONbits_t;
extern volatile PPSCONbits_t PPSCONbits __at(0xEFF);
// bitfield macros
#define _PPSCON_IOLOCK_POSN                                 0x0
#define _PPSCON_IOLOCK_POSITION                             0x0
#define _PPSCON_IOLOCK_SIZE                                 0x1
#define _PPSCON_IOLOCK_LENGTH                               0x1
#define _PPSCON_IOLOCK_MASK                                 0x1

// Register: PADCFG1
#define PADCFG1 PADCFG1
extern volatile unsigned char           PADCFG1             __at(0xF3C);
#ifndef _LIB_BUILD
asm("PADCFG1 equ 0F3Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMPTTL                 :1;
        unsigned RTSECSEL0              :1;
        unsigned RTSECSEL1              :1;
    };
} PADCFG1bits_t;
extern volatile PADCFG1bits_t PADCFG1bits __at(0xF3C);
// bitfield macros
#define _PADCFG1_PMPTTL_POSN                                0x0
#define _PADCFG1_PMPTTL_POSITION                            0x0
#define _PADCFG1_PMPTTL_SIZE                                0x1
#define _PADCFG1_PMPTTL_LENGTH                              0x1
#define _PADCFG1_PMPTTL_MASK                                0x1
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

// Register: REFOCON
#define REFOCON REFOCON
extern volatile unsigned char           REFOCON             __at(0xF3D);
#ifndef _LIB_BUILD
asm("REFOCON equ 0F3Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RODIV                  :4;
        unsigned ROSEL                  :1;
        unsigned ROSSLP                 :1;
        unsigned                        :1;
        unsigned ROON                   :1;
    };
    struct {
        unsigned RODIV0                 :1;
        unsigned RODIV1                 :1;
        unsigned RODIV2                 :1;
        unsigned RODIV3                 :1;
    };
} REFOCONbits_t;
extern volatile REFOCONbits_t REFOCONbits __at(0xF3D);
// bitfield macros
#define _REFOCON_RODIV_POSN                                 0x0
#define _REFOCON_RODIV_POSITION                             0x0
#define _REFOCON_RODIV_SIZE                                 0x4
#define _REFOCON_RODIV_LENGTH                               0x4
#define _REFOCON_RODIV_MASK                                 0xF
#define _REFOCON_ROSEL_POSN                                 0x4
#define _REFOCON_ROSEL_POSITION                             0x4
#define _REFOCON_ROSEL_SIZE                                 0x1
#define _REFOCON_ROSEL_LENGTH                               0x1
#define _REFOCON_ROSEL_MASK                                 0x10
#define _REFOCON_ROSSLP_POSN                                0x5
#define _REFOCON_ROSSLP_POSITION                            0x5
#define _REFOCON_ROSSLP_SIZE                                0x1
#define _REFOCON_ROSSLP_LENGTH                              0x1
#define _REFOCON_ROSSLP_MASK                                0x20
#define _REFOCON_ROON_POSN                                  0x7
#define _REFOCON_ROON_POSITION                              0x7
#define _REFOCON_ROON_SIZE                                  0x1
#define _REFOCON_ROON_LENGTH                                0x1
#define _REFOCON_ROON_MASK                                  0x80
#define _REFOCON_RODIV0_POSN                                0x0
#define _REFOCON_RODIV0_POSITION                            0x0
#define _REFOCON_RODIV0_SIZE                                0x1
#define _REFOCON_RODIV0_LENGTH                              0x1
#define _REFOCON_RODIV0_MASK                                0x1
#define _REFOCON_RODIV1_POSN                                0x1
#define _REFOCON_RODIV1_POSITION                            0x1
#define _REFOCON_RODIV1_SIZE                                0x1
#define _REFOCON_RODIV1_LENGTH                              0x1
#define _REFOCON_RODIV1_MASK                                0x2
#define _REFOCON_RODIV2_POSN                                0x2
#define _REFOCON_RODIV2_POSITION                            0x2
#define _REFOCON_RODIV2_SIZE                                0x1
#define _REFOCON_RODIV2_LENGTH                              0x1
#define _REFOCON_RODIV2_MASK                                0x4
#define _REFOCON_RODIV3_POSN                                0x3
#define _REFOCON_RODIV3_POSITION                            0x3
#define _REFOCON_RODIV3_SIZE                                0x1
#define _REFOCON_RODIV3_LENGTH                              0x1
#define _REFOCON_RODIV3_MASK                                0x8

// Register: RTCCAL
#define RTCCAL RTCCAL
extern volatile unsigned char           RTCCAL              __at(0xF3E);
#ifndef _LIB_BUILD
asm("RTCCAL equ 0F3Eh");
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
extern volatile RTCCALbits_t RTCCALbits __at(0xF3E);
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
extern volatile unsigned char           RTCCFG              __at(0xF3F);
#ifndef _LIB_BUILD
asm("RTCCFG equ 0F3Fh");
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
extern volatile RTCCFGbits_t RTCCFGbits __at(0xF3F);
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

// Register: ODCON3
#define ODCON3 ODCON3
extern volatile unsigned char           ODCON3              __at(0xF40);
#ifndef _LIB_BUILD
asm("ODCON3 equ 0F40h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPI1OD                 :1;
        unsigned SPI2OD                 :1;
    };
} ODCON3bits_t;
extern volatile ODCON3bits_t ODCON3bits __at(0xF40);
// bitfield macros
#define _ODCON3_SPI1OD_POSN                                 0x0
#define _ODCON3_SPI1OD_POSITION                             0x0
#define _ODCON3_SPI1OD_SIZE                                 0x1
#define _ODCON3_SPI1OD_LENGTH                               0x1
#define _ODCON3_SPI1OD_MASK                                 0x1
#define _ODCON3_SPI2OD_POSN                                 0x1
#define _ODCON3_SPI2OD_POSITION                             0x1
#define _ODCON3_SPI2OD_SIZE                                 0x1
#define _ODCON3_SPI2OD_LENGTH                               0x1
#define _ODCON3_SPI2OD_MASK                                 0x2

// Register: ODCON2
#define ODCON2 ODCON2
extern volatile unsigned char           ODCON2              __at(0xF41);
#ifndef _LIB_BUILD
asm("ODCON2 equ 0F41h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned U1OD                   :1;
        unsigned U2OD                   :1;
    };
} ODCON2bits_t;
extern volatile ODCON2bits_t ODCON2bits __at(0xF41);
// bitfield macros
#define _ODCON2_U1OD_POSN                                   0x0
#define _ODCON2_U1OD_POSITION                               0x0
#define _ODCON2_U1OD_SIZE                                   0x1
#define _ODCON2_U1OD_LENGTH                                 0x1
#define _ODCON2_U1OD_MASK                                   0x1
#define _ODCON2_U2OD_POSN                                   0x1
#define _ODCON2_U2OD_POSITION                               0x1
#define _ODCON2_U2OD_SIZE                                   0x1
#define _ODCON2_U2OD_LENGTH                                 0x1
#define _ODCON2_U2OD_MASK                                   0x2

// Register: ODCON1
#define ODCON1 ODCON1
extern volatile unsigned char           ODCON1              __at(0xF42);
#ifndef _LIB_BUILD
asm("ODCON1 equ 0F42h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ECCP1OD                :1;
        unsigned ECCP2OD                :1;
    };
} ODCON1bits_t;
extern volatile ODCON1bits_t ODCON1bits __at(0xF42);
// bitfield macros
#define _ODCON1_ECCP1OD_POSN                                0x0
#define _ODCON1_ECCP1OD_POSITION                            0x0
#define _ODCON1_ECCP1OD_SIZE                                0x1
#define _ODCON1_ECCP1OD_LENGTH                              0x1
#define _ODCON1_ECCP1OD_MASK                                0x1
#define _ODCON1_ECCP2OD_POSN                                0x1
#define _ODCON1_ECCP2OD_POSITION                            0x1
#define _ODCON1_ECCP2OD_SIZE                                0x1
#define _ODCON1_ECCP2OD_LENGTH                              0x1
#define _ODCON1_ECCP2OD_MASK                                0x2

// Register: ANCON0
#define ANCON0 ANCON0
extern volatile unsigned char           ANCON0              __at(0xF48);
#ifndef _LIB_BUILD
asm("ANCON0 equ 0F48h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned PCFG4                  :1;
        unsigned PCFG5                  :1;
        unsigned PCFG6                  :1;
        unsigned PCFG7                  :1;
    };
} ANCON0bits_t;
extern volatile ANCON0bits_t ANCON0bits __at(0xF48);
// bitfield macros
#define _ANCON0_PCFG0_POSN                                  0x0
#define _ANCON0_PCFG0_POSITION                              0x0
#define _ANCON0_PCFG0_SIZE                                  0x1
#define _ANCON0_PCFG0_LENGTH                                0x1
#define _ANCON0_PCFG0_MASK                                  0x1
#define _ANCON0_PCFG1_POSN                                  0x1
#define _ANCON0_PCFG1_POSITION                              0x1
#define _ANCON0_PCFG1_SIZE                                  0x1
#define _ANCON0_PCFG1_LENGTH                                0x1
#define _ANCON0_PCFG1_MASK                                  0x2
#define _ANCON0_PCFG2_POSN                                  0x2
#define _ANCON0_PCFG2_POSITION                              0x2
#define _ANCON0_PCFG2_SIZE                                  0x1
#define _ANCON0_PCFG2_LENGTH                                0x1
#define _ANCON0_PCFG2_MASK                                  0x4
#define _ANCON0_PCFG3_POSN                                  0x3
#define _ANCON0_PCFG3_POSITION                              0x3
#define _ANCON0_PCFG3_SIZE                                  0x1
#define _ANCON0_PCFG3_LENGTH                                0x1
#define _ANCON0_PCFG3_MASK                                  0x8
#define _ANCON0_PCFG4_POSN                                  0x4
#define _ANCON0_PCFG4_POSITION                              0x4
#define _ANCON0_PCFG4_SIZE                                  0x1
#define _ANCON0_PCFG4_LENGTH                                0x1
#define _ANCON0_PCFG4_MASK                                  0x10
#define _ANCON0_PCFG5_POSN                                  0x5
#define _ANCON0_PCFG5_POSITION                              0x5
#define _ANCON0_PCFG5_SIZE                                  0x1
#define _ANCON0_PCFG5_LENGTH                                0x1
#define _ANCON0_PCFG5_MASK                                  0x20
#define _ANCON0_PCFG6_POSN                                  0x6
#define _ANCON0_PCFG6_POSITION                              0x6
#define _ANCON0_PCFG6_SIZE                                  0x1
#define _ANCON0_PCFG6_LENGTH                                0x1
#define _ANCON0_PCFG6_MASK                                  0x40
#define _ANCON0_PCFG7_POSN                                  0x7
#define _ANCON0_PCFG7_POSITION                              0x7
#define _ANCON0_PCFG7_SIZE                                  0x1
#define _ANCON0_PCFG7_LENGTH                                0x1
#define _ANCON0_PCFG7_MASK                                  0x80

// Register: ANCON1
#define ANCON1 ANCON1
extern volatile unsigned char           ANCON1              __at(0xF49);
#ifndef _LIB_BUILD
asm("ANCON1 equ 0F49h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG8                  :1;
        unsigned PCFG9                  :1;
        unsigned PCFG10                 :1;
        unsigned PCFG11                 :1;
        unsigned PCFG12                 :1;
        unsigned                        :1;
        unsigned VBG2EN                 :1;
        unsigned VBGEN                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned PCFG14                 :1;
        unsigned PCFG15                 :1;
    };
} ANCON1bits_t;
extern volatile ANCON1bits_t ANCON1bits __at(0xF49);
// bitfield macros
#define _ANCON1_PCFG8_POSN                                  0x0
#define _ANCON1_PCFG8_POSITION                              0x0
#define _ANCON1_PCFG8_SIZE                                  0x1
#define _ANCON1_PCFG8_LENGTH                                0x1
#define _ANCON1_PCFG8_MASK                                  0x1
#define _ANCON1_PCFG9_POSN                                  0x1
#define _ANCON1_PCFG9_POSITION                              0x1
#define _ANCON1_PCFG9_SIZE                                  0x1
#define _ANCON1_PCFG9_LENGTH                                0x1
#define _ANCON1_PCFG9_MASK                                  0x2
#define _ANCON1_PCFG10_POSN                                 0x2
#define _ANCON1_PCFG10_POSITION                             0x2
#define _ANCON1_PCFG10_SIZE                                 0x1
#define _ANCON1_PCFG10_LENGTH                               0x1
#define _ANCON1_PCFG10_MASK                                 0x4
#define _ANCON1_PCFG11_POSN                                 0x3
#define _ANCON1_PCFG11_POSITION                             0x3
#define _ANCON1_PCFG11_SIZE                                 0x1
#define _ANCON1_PCFG11_LENGTH                               0x1
#define _ANCON1_PCFG11_MASK                                 0x8
#define _ANCON1_PCFG12_POSN                                 0x4
#define _ANCON1_PCFG12_POSITION                             0x4
#define _ANCON1_PCFG12_SIZE                                 0x1
#define _ANCON1_PCFG12_LENGTH                               0x1
#define _ANCON1_PCFG12_MASK                                 0x10
#define _ANCON1_VBG2EN_POSN                                 0x6
#define _ANCON1_VBG2EN_POSITION                             0x6
#define _ANCON1_VBG2EN_SIZE                                 0x1
#define _ANCON1_VBG2EN_LENGTH                               0x1
#define _ANCON1_VBG2EN_MASK                                 0x40
#define _ANCON1_VBGEN_POSN                                  0x7
#define _ANCON1_VBGEN_POSITION                              0x7
#define _ANCON1_VBGEN_SIZE                                  0x1
#define _ANCON1_VBGEN_LENGTH                                0x1
#define _ANCON1_VBGEN_MASK                                  0x80
#define _ANCON1_PCFG14_POSN                                 0x6
#define _ANCON1_PCFG14_POSITION                             0x6
#define _ANCON1_PCFG14_SIZE                                 0x1
#define _ANCON1_PCFG14_LENGTH                               0x1
#define _ANCON1_PCFG14_MASK                                 0x40
#define _ANCON1_PCFG15_POSN                                 0x7
#define _ANCON1_PCFG15_POSITION                             0x7
#define _ANCON1_PCFG15_SIZE                                 0x1
#define _ANCON1_PCFG15_LENGTH                               0x1
#define _ANCON1_PCFG15_MASK                                 0x80

// Register: DSWAKEL
#define DSWAKEL DSWAKEL
extern volatile unsigned char           DSWAKEL             __at(0xF4A);
#ifndef _LIB_BUILD
asm("DSWAKEL equ 0F4Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSPOR                  :1;
        unsigned                        :1;
        unsigned DSMCLR                 :1;
        unsigned DSRTC                  :1;
        unsigned DSWDT                  :1;
        unsigned DSULP                  :1;
        unsigned                        :1;
        unsigned DSFLT                  :1;
    };
} DSWAKELbits_t;
extern volatile DSWAKELbits_t DSWAKELbits __at(0xF4A);
// bitfield macros
#define _DSWAKEL_DSPOR_POSN                                 0x0
#define _DSWAKEL_DSPOR_POSITION                             0x0
#define _DSWAKEL_DSPOR_SIZE                                 0x1
#define _DSWAKEL_DSPOR_LENGTH                               0x1
#define _DSWAKEL_DSPOR_MASK                                 0x1
#define _DSWAKEL_DSMCLR_POSN                                0x2
#define _DSWAKEL_DSMCLR_POSITION                            0x2
#define _DSWAKEL_DSMCLR_SIZE                                0x1
#define _DSWAKEL_DSMCLR_LENGTH                              0x1
#define _DSWAKEL_DSMCLR_MASK                                0x4
#define _DSWAKEL_DSRTC_POSN                                 0x3
#define _DSWAKEL_DSRTC_POSITION                             0x3
#define _DSWAKEL_DSRTC_SIZE                                 0x1
#define _DSWAKEL_DSRTC_LENGTH                               0x1
#define _DSWAKEL_DSRTC_MASK                                 0x8
#define _DSWAKEL_DSWDT_POSN                                 0x4
#define _DSWAKEL_DSWDT_POSITION                             0x4
#define _DSWAKEL_DSWDT_SIZE                                 0x1
#define _DSWAKEL_DSWDT_LENGTH                               0x1
#define _DSWAKEL_DSWDT_MASK                                 0x10
#define _DSWAKEL_DSULP_POSN                                 0x5
#define _DSWAKEL_DSULP_POSITION                             0x5
#define _DSWAKEL_DSULP_SIZE                                 0x1
#define _DSWAKEL_DSULP_LENGTH                               0x1
#define _DSWAKEL_DSULP_MASK                                 0x20
#define _DSWAKEL_DSFLT_POSN                                 0x7
#define _DSWAKEL_DSFLT_POSITION                             0x7
#define _DSWAKEL_DSFLT_SIZE                                 0x1
#define _DSWAKEL_DSFLT_LENGTH                               0x1
#define _DSWAKEL_DSFLT_MASK                                 0x80

// Register: DSWAKEH
#define DSWAKEH DSWAKEH
extern volatile unsigned char           DSWAKEH             __at(0xF4B);
#ifndef _LIB_BUILD
asm("DSWAKEH equ 0F4Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSINT0                 :1;
    };
} DSWAKEHbits_t;
extern volatile DSWAKEHbits_t DSWAKEHbits __at(0xF4B);
// bitfield macros
#define _DSWAKEH_DSINT0_POSN                                0x0
#define _DSWAKEH_DSINT0_POSITION                            0x0
#define _DSWAKEH_DSINT0_SIZE                                0x1
#define _DSWAKEH_DSINT0_LENGTH                              0x1
#define _DSWAKEH_DSINT0_MASK                                0x1

// Register: DSCONL
#define DSCONL DSCONL
extern volatile unsigned char           DSCONL              __at(0xF4C);
#ifndef _LIB_BUILD
asm("DSCONL equ 0F4Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RELEASE                :1;
        unsigned DSBOR                  :1;
        unsigned ULPWDIS                :1;
    };
} DSCONLbits_t;
extern volatile DSCONLbits_t DSCONLbits __at(0xF4C);
// bitfield macros
#define _DSCONL_RELEASE_POSN                                0x0
#define _DSCONL_RELEASE_POSITION                            0x0
#define _DSCONL_RELEASE_SIZE                                0x1
#define _DSCONL_RELEASE_LENGTH                              0x1
#define _DSCONL_RELEASE_MASK                                0x1
#define _DSCONL_DSBOR_POSN                                  0x1
#define _DSCONL_DSBOR_POSITION                              0x1
#define _DSCONL_DSBOR_SIZE                                  0x1
#define _DSCONL_DSBOR_LENGTH                                0x1
#define _DSCONL_DSBOR_MASK                                  0x2
#define _DSCONL_ULPWDIS_POSN                                0x2
#define _DSCONL_ULPWDIS_POSITION                            0x2
#define _DSCONL_ULPWDIS_SIZE                                0x1
#define _DSCONL_ULPWDIS_LENGTH                              0x1
#define _DSCONL_ULPWDIS_MASK                                0x4

// Register: DSCONH
#define DSCONH DSCONH
extern volatile unsigned char           DSCONH              __at(0xF4D);
#ifndef _LIB_BUILD
asm("DSCONH equ 0F4Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCWDIS                :1;
        unsigned DSULPEN                :1;
        unsigned                        :5;
        unsigned DSEN                   :1;
    };
} DSCONHbits_t;
extern volatile DSCONHbits_t DSCONHbits __at(0xF4D);
// bitfield macros
#define _DSCONH_RTCWDIS_POSN                                0x0
#define _DSCONH_RTCWDIS_POSITION                            0x0
#define _DSCONH_RTCWDIS_SIZE                                0x1
#define _DSCONH_RTCWDIS_LENGTH                              0x1
#define _DSCONH_RTCWDIS_MASK                                0x1
#define _DSCONH_DSULPEN_POSN                                0x1
#define _DSCONH_DSULPEN_POSITION                            0x1
#define _DSCONH_DSULPEN_SIZE                                0x1
#define _DSCONH_DSULPEN_LENGTH                              0x1
#define _DSCONH_DSULPEN_MASK                                0x2
#define _DSCONH_DSEN_POSN                                   0x7
#define _DSCONH_DSEN_POSITION                               0x7
#define _DSCONH_DSEN_SIZE                                   0x1
#define _DSCONH_DSEN_LENGTH                                 0x1
#define _DSCONH_DSEN_MASK                                   0x80

// Register: DSGPR0
#define DSGPR0 DSGPR0
extern volatile unsigned char           DSGPR0              __at(0xF4E);
#ifndef _LIB_BUILD
asm("DSGPR0 equ 0F4Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSGPR0                 :8;
    };
} DSGPR0bits_t;
extern volatile DSGPR0bits_t DSGPR0bits __at(0xF4E);
// bitfield macros
#define _DSGPR0_DSGPR0_POSN                                 0x0
#define _DSGPR0_DSGPR0_POSITION                             0x0
#define _DSGPR0_DSGPR0_SIZE                                 0x8
#define _DSGPR0_DSGPR0_LENGTH                               0x8
#define _DSGPR0_DSGPR0_MASK                                 0xFF

// Register: DSGPR1
#define DSGPR1 DSGPR1
extern volatile unsigned char           DSGPR1              __at(0xF4F);
#ifndef _LIB_BUILD
asm("DSGPR1 equ 0F4Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSGPR1                 :8;
    };
} DSGPR1bits_t;
extern volatile DSGPR1bits_t DSGPR1bits __at(0xF4F);
// bitfield macros
#define _DSGPR1_DSGPR1_POSN                                 0x0
#define _DSGPR1_DSGPR1_POSITION                             0x0
#define _DSGPR1_DSGPR1_SIZE                                 0x8
#define _DSGPR1_DSGPR1_LENGTH                               0x8
#define _DSGPR1_DSGPR1_MASK                                 0xFF

// Register: TCLKCON
#define TCLKCON TCLKCON
extern volatile unsigned char           TCLKCON             __at(0xF52);
#ifndef _LIB_BUILD
asm("TCLKCON equ 0F52h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T3CCP1                 :1;
        unsigned T3CCP2                 :1;
        unsigned                        :2;
        unsigned T1RUN                  :1;
    };
} TCLKCONbits_t;
extern volatile TCLKCONbits_t TCLKCONbits __at(0xF52);
// bitfield macros
#define _TCLKCON_T3CCP1_POSN                                0x0
#define _TCLKCON_T3CCP1_POSITION                            0x0
#define _TCLKCON_T3CCP1_SIZE                                0x1
#define _TCLKCON_T3CCP1_LENGTH                              0x1
#define _TCLKCON_T3CCP1_MASK                                0x1
#define _TCLKCON_T3CCP2_POSN                                0x1
#define _TCLKCON_T3CCP2_POSITION                            0x1
#define _TCLKCON_T3CCP2_SIZE                                0x1
#define _TCLKCON_T3CCP2_LENGTH                              0x1
#define _TCLKCON_T3CCP2_MASK                                0x2
#define _TCLKCON_T1RUN_POSN                                 0x4
#define _TCLKCON_T1RUN_POSITION                             0x4
#define _TCLKCON_T1RUN_SIZE                                 0x1
#define _TCLKCON_T1RUN_LENGTH                               0x1
#define _TCLKCON_T1RUN_MASK                                 0x10

// Register: CVRCON
#define CVRCON CVRCON
extern volatile unsigned char           CVRCON              __at(0xF53);
#ifndef _LIB_BUILD
asm("CVRCON equ 0F53h");
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
extern volatile CVRCONbits_t CVRCONbits __at(0xF53);
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

// Register: PMSTATL
#define PMSTATL PMSTATL
extern volatile unsigned char           PMSTATL             __at(0xF54);
#ifndef _LIB_BUILD
asm("PMSTATL equ 0F54h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OB0E                   :1;
        unsigned OB1E                   :1;
        unsigned OB2E                   :1;
        unsigned OB3E                   :1;
        unsigned                        :2;
        unsigned OBUF                   :1;
        unsigned OBE                    :1;
    };
} PMSTATLbits_t;
extern volatile PMSTATLbits_t PMSTATLbits __at(0xF54);
// bitfield macros
#define _PMSTATL_OB0E_POSN                                  0x0
#define _PMSTATL_OB0E_POSITION                              0x0
#define _PMSTATL_OB0E_SIZE                                  0x1
#define _PMSTATL_OB0E_LENGTH                                0x1
#define _PMSTATL_OB0E_MASK                                  0x1
#define _PMSTATL_OB1E_POSN                                  0x1
#define _PMSTATL_OB1E_POSITION                              0x1
#define _PMSTATL_OB1E_SIZE                                  0x1
#define _PMSTATL_OB1E_LENGTH                                0x1
#define _PMSTATL_OB1E_MASK                                  0x2
#define _PMSTATL_OB2E_POSN                                  0x2
#define _PMSTATL_OB2E_POSITION                              0x2
#define _PMSTATL_OB2E_SIZE                                  0x1
#define _PMSTATL_OB2E_LENGTH                                0x1
#define _PMSTATL_OB2E_MASK                                  0x4
#define _PMSTATL_OB3E_POSN                                  0x3
#define _PMSTATL_OB3E_POSITION                              0x3
#define _PMSTATL_OB3E_SIZE                                  0x1
#define _PMSTATL_OB3E_LENGTH                                0x1
#define _PMSTATL_OB3E_MASK                                  0x8
#define _PMSTATL_OBUF_POSN                                  0x6
#define _PMSTATL_OBUF_POSITION                              0x6
#define _PMSTATL_OBUF_SIZE                                  0x1
#define _PMSTATL_OBUF_LENGTH                                0x1
#define _PMSTATL_OBUF_MASK                                  0x40
#define _PMSTATL_OBE_POSN                                   0x7
#define _PMSTATL_OBE_POSITION                               0x7
#define _PMSTATL_OBE_SIZE                                   0x1
#define _PMSTATL_OBE_LENGTH                                 0x1
#define _PMSTATL_OBE_MASK                                   0x80

// Register: PMSTATH
#define PMSTATH PMSTATH
extern volatile unsigned char           PMSTATH             __at(0xF55);
#ifndef _LIB_BUILD
asm("PMSTATH equ 0F55h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IB0F                   :1;
        unsigned IB1F                   :1;
        unsigned IB2F                   :1;
        unsigned IB3F                   :1;
        unsigned                        :2;
        unsigned IBOV                   :1;
        unsigned IBF                    :1;
    };
} PMSTATHbits_t;
extern volatile PMSTATHbits_t PMSTATHbits __at(0xF55);
// bitfield macros
#define _PMSTATH_IB0F_POSN                                  0x0
#define _PMSTATH_IB0F_POSITION                              0x0
#define _PMSTATH_IB0F_SIZE                                  0x1
#define _PMSTATH_IB0F_LENGTH                                0x1
#define _PMSTATH_IB0F_MASK                                  0x1
#define _PMSTATH_IB1F_POSN                                  0x1
#define _PMSTATH_IB1F_POSITION                              0x1
#define _PMSTATH_IB1F_SIZE                                  0x1
#define _PMSTATH_IB1F_LENGTH                                0x1
#define _PMSTATH_IB1F_MASK                                  0x2
#define _PMSTATH_IB2F_POSN                                  0x2
#define _PMSTATH_IB2F_POSITION                              0x2
#define _PMSTATH_IB2F_SIZE                                  0x1
#define _PMSTATH_IB2F_LENGTH                                0x1
#define _PMSTATH_IB2F_MASK                                  0x4
#define _PMSTATH_IB3F_POSN                                  0x3
#define _PMSTATH_IB3F_POSITION                              0x3
#define _PMSTATH_IB3F_SIZE                                  0x1
#define _PMSTATH_IB3F_LENGTH                                0x1
#define _PMSTATH_IB3F_MASK                                  0x8
#define _PMSTATH_IBOV_POSN                                  0x6
#define _PMSTATH_IBOV_POSITION                              0x6
#define _PMSTATH_IBOV_SIZE                                  0x1
#define _PMSTATH_IBOV_LENGTH                                0x1
#define _PMSTATH_IBOV_MASK                                  0x40
#define _PMSTATH_IBF_POSN                                   0x7
#define _PMSTATH_IBF_POSITION                               0x7
#define _PMSTATH_IBF_SIZE                                   0x1
#define _PMSTATH_IBF_LENGTH                                 0x1
#define _PMSTATH_IBF_MASK                                   0x80

// Register: PMEL
#define PMEL PMEL
extern volatile unsigned char           PMEL                __at(0xF56);
#ifndef _LIB_BUILD
asm("PMEL equ 0F56h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PTENL                  :8;
    };
    struct {
        unsigned PTEN0                  :1;
        unsigned PTEN1                  :1;
        unsigned PTEN2                  :1;
        unsigned PTEN3                  :1;
        unsigned PTEN4                  :1;
        unsigned PTEN5                  :1;
        unsigned PTEN6                  :1;
        unsigned PTEN7                  :1;
    };
} PMELbits_t;
extern volatile PMELbits_t PMELbits __at(0xF56);
// bitfield macros
#define _PMEL_PTENL_POSN                                    0x0
#define _PMEL_PTENL_POSITION                                0x0
#define _PMEL_PTENL_SIZE                                    0x8
#define _PMEL_PTENL_LENGTH                                  0x8
#define _PMEL_PTENL_MASK                                    0xFF
#define _PMEL_PTEN0_POSN                                    0x0
#define _PMEL_PTEN0_POSITION                                0x0
#define _PMEL_PTEN0_SIZE                                    0x1
#define _PMEL_PTEN0_LENGTH                                  0x1
#define _PMEL_PTEN0_MASK                                    0x1
#define _PMEL_PTEN1_POSN                                    0x1
#define _PMEL_PTEN1_POSITION                                0x1
#define _PMEL_PTEN1_SIZE                                    0x1
#define _PMEL_PTEN1_LENGTH                                  0x1
#define _PMEL_PTEN1_MASK                                    0x2
#define _PMEL_PTEN2_POSN                                    0x2
#define _PMEL_PTEN2_POSITION                                0x2
#define _PMEL_PTEN2_SIZE                                    0x1
#define _PMEL_PTEN2_LENGTH                                  0x1
#define _PMEL_PTEN2_MASK                                    0x4
#define _PMEL_PTEN3_POSN                                    0x3
#define _PMEL_PTEN3_POSITION                                0x3
#define _PMEL_PTEN3_SIZE                                    0x1
#define _PMEL_PTEN3_LENGTH                                  0x1
#define _PMEL_PTEN3_MASK                                    0x8
#define _PMEL_PTEN4_POSN                                    0x4
#define _PMEL_PTEN4_POSITION                                0x4
#define _PMEL_PTEN4_SIZE                                    0x1
#define _PMEL_PTEN4_LENGTH                                  0x1
#define _PMEL_PTEN4_MASK                                    0x10
#define _PMEL_PTEN5_POSN                                    0x5
#define _PMEL_PTEN5_POSITION                                0x5
#define _PMEL_PTEN5_SIZE                                    0x1
#define _PMEL_PTEN5_LENGTH                                  0x1
#define _PMEL_PTEN5_MASK                                    0x20
#define _PMEL_PTEN6_POSN                                    0x6
#define _PMEL_PTEN6_POSITION                                0x6
#define _PMEL_PTEN6_SIZE                                    0x1
#define _PMEL_PTEN6_LENGTH                                  0x1
#define _PMEL_PTEN6_MASK                                    0x40
#define _PMEL_PTEN7_POSN                                    0x7
#define _PMEL_PTEN7_POSITION                                0x7
#define _PMEL_PTEN7_SIZE                                    0x1
#define _PMEL_PTEN7_LENGTH                                  0x1
#define _PMEL_PTEN7_MASK                                    0x80

// Register: PMEH
#define PMEH PMEH
extern volatile unsigned char           PMEH                __at(0xF57);
#ifndef _LIB_BUILD
asm("PMEH equ 0F57h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PTENH                  :8;
    };
    struct {
        unsigned PTEN8                  :1;
        unsigned PTEN9                  :1;
        unsigned PTEN10                 :1;
        unsigned PTEN11                 :1;
        unsigned PTEN12                 :1;
        unsigned PTEN13                 :1;
        unsigned PTEN14                 :1;
        unsigned PTEN15                 :1;
    };
} PMEHbits_t;
extern volatile PMEHbits_t PMEHbits __at(0xF57);
// bitfield macros
#define _PMEH_PTENH_POSN                                    0x0
#define _PMEH_PTENH_POSITION                                0x0
#define _PMEH_PTENH_SIZE                                    0x8
#define _PMEH_PTENH_LENGTH                                  0x8
#define _PMEH_PTENH_MASK                                    0xFF
#define _PMEH_PTEN8_POSN                                    0x0
#define _PMEH_PTEN8_POSITION                                0x0
#define _PMEH_PTEN8_SIZE                                    0x1
#define _PMEH_PTEN8_LENGTH                                  0x1
#define _PMEH_PTEN8_MASK                                    0x1
#define _PMEH_PTEN9_POSN                                    0x1
#define _PMEH_PTEN9_POSITION                                0x1
#define _PMEH_PTEN9_SIZE                                    0x1
#define _PMEH_PTEN9_LENGTH                                  0x1
#define _PMEH_PTEN9_MASK                                    0x2
#define _PMEH_PTEN10_POSN                                   0x2
#define _PMEH_PTEN10_POSITION                               0x2
#define _PMEH_PTEN10_SIZE                                   0x1
#define _PMEH_PTEN10_LENGTH                                 0x1
#define _PMEH_PTEN10_MASK                                   0x4
#define _PMEH_PTEN11_POSN                                   0x3
#define _PMEH_PTEN11_POSITION                               0x3
#define _PMEH_PTEN11_SIZE                                   0x1
#define _PMEH_PTEN11_LENGTH                                 0x1
#define _PMEH_PTEN11_MASK                                   0x8
#define _PMEH_PTEN12_POSN                                   0x4
#define _PMEH_PTEN12_POSITION                               0x4
#define _PMEH_PTEN12_SIZE                                   0x1
#define _PMEH_PTEN12_LENGTH                                 0x1
#define _PMEH_PTEN12_MASK                                   0x10
#define _PMEH_PTEN13_POSN                                   0x5
#define _PMEH_PTEN13_POSITION                               0x5
#define _PMEH_PTEN13_SIZE                                   0x1
#define _PMEH_PTEN13_LENGTH                                 0x1
#define _PMEH_PTEN13_MASK                                   0x20
#define _PMEH_PTEN14_POSN                                   0x6
#define _PMEH_PTEN14_POSITION                               0x6
#define _PMEH_PTEN14_SIZE                                   0x1
#define _PMEH_PTEN14_LENGTH                                 0x1
#define _PMEH_PTEN14_MASK                                   0x40
#define _PMEH_PTEN15_POSN                                   0x7
#define _PMEH_PTEN15_POSITION                               0x7
#define _PMEH_PTEN15_SIZE                                   0x1
#define _PMEH_PTEN15_LENGTH                                 0x1
#define _PMEH_PTEN15_MASK                                   0x80

// Register: PMDIN2L
#define PMDIN2L PMDIN2L
extern volatile unsigned char           PMDIN2L             __at(0xF58);
#ifndef _LIB_BUILD
asm("PMDIN2L equ 0F58h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAL                  :8;
    };
} PMDIN2Lbits_t;
extern volatile PMDIN2Lbits_t PMDIN2Lbits __at(0xF58);
// bitfield macros
#define _PMDIN2L_DATAL_POSN                                 0x0
#define _PMDIN2L_DATAL_POSITION                             0x0
#define _PMDIN2L_DATAL_SIZE                                 0x8
#define _PMDIN2L_DATAL_LENGTH                               0x8
#define _PMDIN2L_DATAL_MASK                                 0xFF

// Register: PMDIN2H
#define PMDIN2H PMDIN2H
extern volatile unsigned char           PMDIN2H             __at(0xF59);
#ifndef _LIB_BUILD
asm("PMDIN2H equ 0F59h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAH                  :8;
    };
} PMDIN2Hbits_t;
extern volatile PMDIN2Hbits_t PMDIN2Hbits __at(0xF59);
// bitfield macros
#define _PMDIN2H_DATAH_POSN                                 0x0
#define _PMDIN2H_DATAH_POSITION                             0x0
#define _PMDIN2H_DATAH_SIZE                                 0x8
#define _PMDIN2H_DATAH_LENGTH                               0x8
#define _PMDIN2H_DATAH_MASK                                 0xFF

// Register: PMDOUT2L
#define PMDOUT2L PMDOUT2L
extern volatile unsigned char           PMDOUT2L            __at(0xF5A);
#ifndef _LIB_BUILD
asm("PMDOUT2L equ 0F5Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAL                  :8;
    };
} PMDOUT2Lbits_t;
extern volatile PMDOUT2Lbits_t PMDOUT2Lbits __at(0xF5A);
// bitfield macros
#define _PMDOUT2L_DATAL_POSN                                0x0
#define _PMDOUT2L_DATAL_POSITION                            0x0
#define _PMDOUT2L_DATAL_SIZE                                0x8
#define _PMDOUT2L_DATAL_LENGTH                              0x8
#define _PMDOUT2L_DATAL_MASK                                0xFF

// Register: PMDOUT2H
#define PMDOUT2H PMDOUT2H
extern volatile unsigned char           PMDOUT2H            __at(0xF5B);
#ifndef _LIB_BUILD
asm("PMDOUT2H equ 0F5Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAH                  :8;
    };
} PMDOUT2Hbits_t;
extern volatile PMDOUT2Hbits_t PMDOUT2Hbits __at(0xF5B);
// bitfield macros
#define _PMDOUT2H_DATAH_POSN                                0x0
#define _PMDOUT2H_DATAH_POSITION                            0x0
#define _PMDOUT2H_DATAH_SIZE                                0x8
#define _PMDOUT2H_DATAH_LENGTH                              0x8
#define _PMDOUT2H_DATAH_MASK                                0xFF

// Register: PMMODEL
#define PMMODEL PMMODEL
extern volatile unsigned char           PMMODEL             __at(0xF5C);
#ifndef _LIB_BUILD
asm("PMMODEL equ 0F5Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WAITE                  :2;
        unsigned WAITM                  :4;
        unsigned WAITB                  :2;
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
} PMMODELbits_t;
extern volatile PMMODELbits_t PMMODELbits __at(0xF5C);
// bitfield macros
#define _PMMODEL_WAITE_POSN                                 0x0
#define _PMMODEL_WAITE_POSITION                             0x0
#define _PMMODEL_WAITE_SIZE                                 0x2
#define _PMMODEL_WAITE_LENGTH                               0x2
#define _PMMODEL_WAITE_MASK                                 0x3
#define _PMMODEL_WAITM_POSN                                 0x2
#define _PMMODEL_WAITM_POSITION                             0x2
#define _PMMODEL_WAITM_SIZE                                 0x4
#define _PMMODEL_WAITM_LENGTH                               0x4
#define _PMMODEL_WAITM_MASK                                 0x3C
#define _PMMODEL_WAITB_POSN                                 0x6
#define _PMMODEL_WAITB_POSITION                             0x6
#define _PMMODEL_WAITB_SIZE                                 0x2
#define _PMMODEL_WAITB_LENGTH                               0x2
#define _PMMODEL_WAITB_MASK                                 0xC0
#define _PMMODEL_WAITE0_POSN                                0x0
#define _PMMODEL_WAITE0_POSITION                            0x0
#define _PMMODEL_WAITE0_SIZE                                0x1
#define _PMMODEL_WAITE0_LENGTH                              0x1
#define _PMMODEL_WAITE0_MASK                                0x1
#define _PMMODEL_WAITE1_POSN                                0x1
#define _PMMODEL_WAITE1_POSITION                            0x1
#define _PMMODEL_WAITE1_SIZE                                0x1
#define _PMMODEL_WAITE1_LENGTH                              0x1
#define _PMMODEL_WAITE1_MASK                                0x2
#define _PMMODEL_WAITM0_POSN                                0x2
#define _PMMODEL_WAITM0_POSITION                            0x2
#define _PMMODEL_WAITM0_SIZE                                0x1
#define _PMMODEL_WAITM0_LENGTH                              0x1
#define _PMMODEL_WAITM0_MASK                                0x4
#define _PMMODEL_WAITM1_POSN                                0x3
#define _PMMODEL_WAITM1_POSITION                            0x3
#define _PMMODEL_WAITM1_SIZE                                0x1
#define _PMMODEL_WAITM1_LENGTH                              0x1
#define _PMMODEL_WAITM1_MASK                                0x8
#define _PMMODEL_WAITM2_POSN                                0x4
#define _PMMODEL_WAITM2_POSITION                            0x4
#define _PMMODEL_WAITM2_SIZE                                0x1
#define _PMMODEL_WAITM2_LENGTH                              0x1
#define _PMMODEL_WAITM2_MASK                                0x10
#define _PMMODEL_WAITM3_POSN                                0x5
#define _PMMODEL_WAITM3_POSITION                            0x5
#define _PMMODEL_WAITM3_SIZE                                0x1
#define _PMMODEL_WAITM3_LENGTH                              0x1
#define _PMMODEL_WAITM3_MASK                                0x20
#define _PMMODEL_WAITB0_POSN                                0x6
#define _PMMODEL_WAITB0_POSITION                            0x6
#define _PMMODEL_WAITB0_SIZE                                0x1
#define _PMMODEL_WAITB0_LENGTH                              0x1
#define _PMMODEL_WAITB0_MASK                                0x40
#define _PMMODEL_WAITB1_POSN                                0x7
#define _PMMODEL_WAITB1_POSITION                            0x7
#define _PMMODEL_WAITB1_SIZE                                0x1
#define _PMMODEL_WAITB1_LENGTH                              0x1
#define _PMMODEL_WAITB1_MASK                                0x80

// Register: PMMODEH
#define PMMODEH PMMODEH
extern volatile unsigned char           PMMODEH             __at(0xF5D);
#ifndef _LIB_BUILD
asm("PMMODEH equ 0F5Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE16                 :1;
        unsigned INCM0                  :1;
        unsigned INCM1                  :1;
        unsigned IRQM0                  :1;
        unsigned IRQM1                  :1;
        unsigned BUSY                   :1;
    };
} PMMODEHbits_t;
extern volatile PMMODEHbits_t PMMODEHbits __at(0xF5D);
// bitfield macros
#define _PMMODEH_MODE0_POSN                                 0x0
#define _PMMODEH_MODE0_POSITION                             0x0
#define _PMMODEH_MODE0_SIZE                                 0x1
#define _PMMODEH_MODE0_LENGTH                               0x1
#define _PMMODEH_MODE0_MASK                                 0x1
#define _PMMODEH_MODE1_POSN                                 0x1
#define _PMMODEH_MODE1_POSITION                             0x1
#define _PMMODEH_MODE1_SIZE                                 0x1
#define _PMMODEH_MODE1_LENGTH                               0x1
#define _PMMODEH_MODE1_MASK                                 0x2
#define _PMMODEH_MODE16_POSN                                0x2
#define _PMMODEH_MODE16_POSITION                            0x2
#define _PMMODEH_MODE16_SIZE                                0x1
#define _PMMODEH_MODE16_LENGTH                              0x1
#define _PMMODEH_MODE16_MASK                                0x4
#define _PMMODEH_INCM0_POSN                                 0x3
#define _PMMODEH_INCM0_POSITION                             0x3
#define _PMMODEH_INCM0_SIZE                                 0x1
#define _PMMODEH_INCM0_LENGTH                               0x1
#define _PMMODEH_INCM0_MASK                                 0x8
#define _PMMODEH_INCM1_POSN                                 0x4
#define _PMMODEH_INCM1_POSITION                             0x4
#define _PMMODEH_INCM1_SIZE                                 0x1
#define _PMMODEH_INCM1_LENGTH                               0x1
#define _PMMODEH_INCM1_MASK                                 0x10
#define _PMMODEH_IRQM0_POSN                                 0x5
#define _PMMODEH_IRQM0_POSITION                             0x5
#define _PMMODEH_IRQM0_SIZE                                 0x1
#define _PMMODEH_IRQM0_LENGTH                               0x1
#define _PMMODEH_IRQM0_MASK                                 0x20
#define _PMMODEH_IRQM1_POSN                                 0x6
#define _PMMODEH_IRQM1_POSITION                             0x6
#define _PMMODEH_IRQM1_SIZE                                 0x1
#define _PMMODEH_IRQM1_LENGTH                               0x1
#define _PMMODEH_IRQM1_MASK                                 0x40
#define _PMMODEH_BUSY_POSN                                  0x7
#define _PMMODEH_BUSY_POSITION                              0x7
#define _PMMODEH_BUSY_SIZE                                  0x1
#define _PMMODEH_BUSY_LENGTH                                0x1
#define _PMMODEH_BUSY_MASK                                  0x80

// Register: PMCONL
#define PMCONL PMCONL
extern volatile unsigned char           PMCONL              __at(0xF5E);
#ifndef _LIB_BUILD
asm("PMCONL equ 0F5Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RDSP                   :1;
        unsigned WRSP                   :1;
        unsigned BEP                    :1;
        unsigned CS1P                   :1;
        unsigned CS2P                   :1;
        unsigned ALP                    :1;
        unsigned CSF0                   :1;
        unsigned CSF1                   :1;
    };
} PMCONLbits_t;
extern volatile PMCONLbits_t PMCONLbits __at(0xF5E);
// bitfield macros
#define _PMCONL_RDSP_POSN                                   0x0
#define _PMCONL_RDSP_POSITION                               0x0
#define _PMCONL_RDSP_SIZE                                   0x1
#define _PMCONL_RDSP_LENGTH                                 0x1
#define _PMCONL_RDSP_MASK                                   0x1
#define _PMCONL_WRSP_POSN                                   0x1
#define _PMCONL_WRSP_POSITION                               0x1
#define _PMCONL_WRSP_SIZE                                   0x1
#define _PMCONL_WRSP_LENGTH                                 0x1
#define _PMCONL_WRSP_MASK                                   0x2
#define _PMCONL_BEP_POSN                                    0x2
#define _PMCONL_BEP_POSITION                                0x2
#define _PMCONL_BEP_SIZE                                    0x1
#define _PMCONL_BEP_LENGTH                                  0x1
#define _PMCONL_BEP_MASK                                    0x4
#define _PMCONL_CS1P_POSN                                   0x3
#define _PMCONL_CS1P_POSITION                               0x3
#define _PMCONL_CS1P_SIZE                                   0x1
#define _PMCONL_CS1P_LENGTH                                 0x1
#define _PMCONL_CS1P_MASK                                   0x8
#define _PMCONL_CS2P_POSN                                   0x4
#define _PMCONL_CS2P_POSITION                               0x4
#define _PMCONL_CS2P_SIZE                                   0x1
#define _PMCONL_CS2P_LENGTH                                 0x1
#define _PMCONL_CS2P_MASK                                   0x10
#define _PMCONL_ALP_POSN                                    0x5
#define _PMCONL_ALP_POSITION                                0x5
#define _PMCONL_ALP_SIZE                                    0x1
#define _PMCONL_ALP_LENGTH                                  0x1
#define _PMCONL_ALP_MASK                                    0x20
#define _PMCONL_CSF0_POSN                                   0x6
#define _PMCONL_CSF0_POSITION                               0x6
#define _PMCONL_CSF0_SIZE                                   0x1
#define _PMCONL_CSF0_LENGTH                                 0x1
#define _PMCONL_CSF0_MASK                                   0x40
#define _PMCONL_CSF1_POSN                                   0x7
#define _PMCONL_CSF1_POSITION                               0x7
#define _PMCONL_CSF1_SIZE                                   0x1
#define _PMCONL_CSF1_LENGTH                                 0x1
#define _PMCONL_CSF1_MASK                                   0x80

// Register: PMCONH
#define PMCONH PMCONH
extern volatile unsigned char           PMCONH              __at(0xF5F);
#ifndef _LIB_BUILD
asm("PMCONH equ 0F5Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PTRDEN                 :1;
        unsigned PTWREN                 :1;
        unsigned PTBEEN                 :1;
        unsigned ADRMUX0                :1;
        unsigned ADRMUX1                :1;
        unsigned PSIDL                  :1;
        unsigned                        :1;
        unsigned PMPEN                  :1;
    };
} PMCONHbits_t;
extern volatile PMCONHbits_t PMCONHbits __at(0xF5F);
// bitfield macros
#define _PMCONH_PTRDEN_POSN                                 0x0
#define _PMCONH_PTRDEN_POSITION                             0x0
#define _PMCONH_PTRDEN_SIZE                                 0x1
#define _PMCONH_PTRDEN_LENGTH                               0x1
#define _PMCONH_PTRDEN_MASK                                 0x1
#define _PMCONH_PTWREN_POSN                                 0x1
#define _PMCONH_PTWREN_POSITION                             0x1
#define _PMCONH_PTWREN_SIZE                                 0x1
#define _PMCONH_PTWREN_LENGTH                               0x1
#define _PMCONH_PTWREN_MASK                                 0x2
#define _PMCONH_PTBEEN_POSN                                 0x2
#define _PMCONH_PTBEEN_POSITION                             0x2
#define _PMCONH_PTBEEN_SIZE                                 0x1
#define _PMCONH_PTBEEN_LENGTH                               0x1
#define _PMCONH_PTBEEN_MASK                                 0x4
#define _PMCONH_ADRMUX0_POSN                                0x3
#define _PMCONH_ADRMUX0_POSITION                            0x3
#define _PMCONH_ADRMUX0_SIZE                                0x1
#define _PMCONH_ADRMUX0_LENGTH                              0x1
#define _PMCONH_ADRMUX0_MASK                                0x8
#define _PMCONH_ADRMUX1_POSN                                0x4
#define _PMCONH_ADRMUX1_POSITION                            0x4
#define _PMCONH_ADRMUX1_SIZE                                0x1
#define _PMCONH_ADRMUX1_LENGTH                              0x1
#define _PMCONH_ADRMUX1_MASK                                0x10
#define _PMCONH_PSIDL_POSN                                  0x5
#define _PMCONH_PSIDL_POSITION                              0x5
#define _PMCONH_PSIDL_SIZE                                  0x1
#define _PMCONH_PSIDL_LENGTH                                0x1
#define _PMCONH_PSIDL_MASK                                  0x20
#define _PMCONH_PMPEN_POSN                                  0x7
#define _PMCONH_PMPEN_POSITION                              0x7
#define _PMCONH_PMPEN_SIZE                                  0x1
#define _PMCONH_PMPEN_LENGTH                                0x1
#define _PMCONH_PMPEN_MASK                                  0x80

// Register: DMABCH
#define DMABCH DMABCH
extern volatile unsigned char           DMABCH              __at(0xF66);
#ifndef _LIB_BUILD
asm("DMABCH equ 0F66h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMACNTHB               :2;
    };
} DMABCHbits_t;
extern volatile DMABCHbits_t DMABCHbits __at(0xF66);
// bitfield macros
#define _DMABCH_DMACNTHB_POSN                               0x0
#define _DMABCH_DMACNTHB_POSITION                           0x0
#define _DMABCH_DMACNTHB_SIZE                               0x2
#define _DMABCH_DMACNTHB_LENGTH                             0x2
#define _DMABCH_DMACNTHB_MASK                               0x3

// Register: DMABCL
#define DMABCL DMABCL
extern volatile unsigned char           DMABCL              __at(0xF67);
#ifndef _LIB_BUILD
asm("DMABCL equ 0F67h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMACNTLB               :8;
    };
} DMABCLbits_t;
extern volatile DMABCLbits_t DMABCLbits __at(0xF67);
// bitfield macros
#define _DMABCL_DMACNTLB_POSN                               0x0
#define _DMABCL_DMACNTLB_POSITION                           0x0
#define _DMABCL_DMACNTLB_SIZE                               0x8
#define _DMABCL_DMACNTLB_LENGTH                             0x8
#define _DMABCL_DMACNTLB_MASK                               0xFF

// Register: RXADDRH
#define RXADDRH RXADDRH
extern volatile unsigned char           RXADDRH             __at(0xF68);
#ifndef _LIB_BUILD
asm("RXADDRH equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMARCPTRHB             :4;
    };
} RXADDRHbits_t;
extern volatile RXADDRHbits_t RXADDRHbits __at(0xF68);
// bitfield macros
#define _RXADDRH_DMARCPTRHB_POSN                            0x0
#define _RXADDRH_DMARCPTRHB_POSITION                        0x0
#define _RXADDRH_DMARCPTRHB_SIZE                            0x4
#define _RXADDRH_DMARCPTRHB_LENGTH                          0x4
#define _RXADDRH_DMARCPTRHB_MASK                            0xF

// Register: RXADDRL
#define RXADDRL RXADDRL
extern volatile unsigned char           RXADDRL             __at(0xF69);
#ifndef _LIB_BUILD
asm("RXADDRL equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMARCVPTRLB            :8;
    };
} RXADDRLbits_t;
extern volatile RXADDRLbits_t RXADDRLbits __at(0xF69);
// bitfield macros
#define _RXADDRL_DMARCVPTRLB_POSN                           0x0
#define _RXADDRL_DMARCVPTRLB_POSITION                       0x0
#define _RXADDRL_DMARCVPTRLB_SIZE                           0x8
#define _RXADDRL_DMARCVPTRLB_LENGTH                         0x8
#define _RXADDRL_DMARCVPTRLB_MASK                           0xFF

// Register: TXADDRH
#define TXADDRH TXADDRH
extern volatile unsigned char           TXADDRH             __at(0xF6A);
#ifndef _LIB_BUILD
asm("TXADDRH equ 0F6Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMATXPTRHB             :4;
    };
} TXADDRHbits_t;
extern volatile TXADDRHbits_t TXADDRHbits __at(0xF6A);
// bitfield macros
#define _TXADDRH_DMATXPTRHB_POSN                            0x0
#define _TXADDRH_DMATXPTRHB_POSITION                        0x0
#define _TXADDRH_DMATXPTRHB_SIZE                            0x4
#define _TXADDRH_DMATXPTRHB_LENGTH                          0x4
#define _TXADDRH_DMATXPTRHB_MASK                            0xF

// Register: TXADDRL
#define TXADDRL TXADDRL
extern volatile unsigned char           TXADDRL             __at(0xF6B);
#ifndef _LIB_BUILD
asm("TXADDRL equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMATXPTRLB             :8;
    };
} TXADDRLbits_t;
extern volatile TXADDRLbits_t TXADDRLbits __at(0xF6B);
// bitfield macros
#define _TXADDRL_DMATXPTRLB_POSN                            0x0
#define _TXADDRL_DMATXPTRLB_POSITION                        0x0
#define _TXADDRL_DMATXPTRLB_SIZE                            0x8
#define _TXADDRL_DMATXPTRLB_LENGTH                          0x8
#define _TXADDRL_DMATXPTRLB_MASK                            0xFF

// Register: PMDIN1L
#define PMDIN1L PMDIN1L
extern volatile unsigned char           PMDIN1L             __at(0xF6C);
#ifndef _LIB_BUILD
asm("PMDIN1L equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAL                  :8;
    };
} PMDIN1Lbits_t;
extern volatile PMDIN1Lbits_t PMDIN1Lbits __at(0xF6C);
// bitfield macros
#define _PMDIN1L_DATAL_POSN                                 0x0
#define _PMDIN1L_DATAL_POSITION                             0x0
#define _PMDIN1L_DATAL_SIZE                                 0x8
#define _PMDIN1L_DATAL_LENGTH                               0x8
#define _PMDIN1L_DATAL_MASK                                 0xFF

// Register: PMDIN1H
#define PMDIN1H PMDIN1H
extern volatile unsigned char           PMDIN1H             __at(0xF6D);
#ifndef _LIB_BUILD
asm("PMDIN1H equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATAH                  :8;
    };
} PMDIN1Hbits_t;
extern volatile PMDIN1Hbits_t PMDIN1Hbits __at(0xF6D);
// bitfield macros
#define _PMDIN1H_DATAH_POSN                                 0x0
#define _PMDIN1H_DATAH_POSITION                             0x0
#define _PMDIN1H_DATAH_SIZE                                 0x8
#define _PMDIN1H_DATAH_LENGTH                               0x8
#define _PMDIN1H_DATAH_MASK                                 0xFF

// Register: PMADDRL
#define PMADDRL PMADDRL
extern volatile unsigned char           PMADDRL             __at(0xF6E);
#ifndef _LIB_BUILD
asm("PMADDRL equ 0F6Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDRL                  :8;
    };
} PMADDRLbits_t;
extern volatile PMADDRLbits_t PMADDRLbits __at(0xF6E);
// bitfield macros
#define _PMADDRL_ADDRL_POSN                                 0x0
#define _PMADDRL_ADDRL_POSITION                             0x0
#define _PMADDRL_ADDRL_SIZE                                 0x8
#define _PMADDRL_ADDRL_LENGTH                               0x8
#define _PMADDRL_ADDRL_MASK                                 0xFF

// Register: PMDOUT1L
#define PMDOUT1L PMDOUT1L
extern volatile unsigned char           PMDOUT1L            __at(0xF6E);
#ifndef _LIB_BUILD
asm("PMDOUT1L equ 0F6Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDOUT1L               :8;
    };
} PMDOUT1Lbits_t;
extern volatile PMDOUT1Lbits_t PMDOUT1Lbits __at(0xF6E);
// bitfield macros
#define _PMDOUT1L_PMDOUT1L_POSN                             0x0
#define _PMDOUT1L_PMDOUT1L_POSITION                         0x0
#define _PMDOUT1L_PMDOUT1L_SIZE                             0x8
#define _PMDOUT1L_PMDOUT1L_LENGTH                           0x8
#define _PMDOUT1L_PMDOUT1L_MASK                             0xFF

// Register: PMADDRH
#define PMADDRH PMADDRH
extern volatile unsigned char           PMADDRH             __at(0xF6F);
#ifndef _LIB_BUILD
asm("PMADDRH equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned CS1                    :1;
    };
} PMADDRHbits_t;
extern volatile PMADDRHbits_t PMADDRHbits __at(0xF6F);
// bitfield macros
#define _PMADDRH_CS1_POSN                                   0x6
#define _PMADDRH_CS1_POSITION                               0x6
#define _PMADDRH_CS1_SIZE                                   0x1
#define _PMADDRH_CS1_LENGTH                                 0x1
#define _PMADDRH_CS1_MASK                                   0x40

// Register: PMDOUT1H
#define PMDOUT1H PMDOUT1H
extern volatile unsigned char           PMDOUT1H            __at(0xF6F);
#ifndef _LIB_BUILD
asm("PMDOUT1H equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDOUT1H               :8;
    };
} PMDOUT1Hbits_t;
extern volatile PMDOUT1Hbits_t PMDOUT1Hbits __at(0xF6F);
// bitfield macros
#define _PMDOUT1H_PMDOUT1H_POSN                             0x0
#define _PMDOUT1H_PMDOUT1H_POSITION                         0x0
#define _PMDOUT1H_PMDOUT1H_SIZE                             0x8
#define _PMDOUT1H_PMDOUT1H_LENGTH                           0x8
#define _PMDOUT1H_PMDOUT1H_MASK                             0xFF

// Register: CMSTAT
#define CMSTAT CMSTAT
extern volatile unsigned char           CMSTAT              __at(0xF70);
#ifndef _LIB_BUILD
asm("CMSTAT equ 0F70h");
#endif
// aliases
extern volatile unsigned char           CMSTATUS            __at(0xF70);
#ifndef _LIB_BUILD
asm("CMSTATUS equ 0F70h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned COUT1                  :1;
        unsigned COUT2                  :1;
    };
} CMSTATbits_t;
extern volatile CMSTATbits_t CMSTATbits __at(0xF70);
// bitfield macros
#define _CMSTAT_COUT1_POSN                                  0x0
#define _CMSTAT_COUT1_POSITION                              0x0
#define _CMSTAT_COUT1_SIZE                                  0x1
#define _CMSTAT_COUT1_LENGTH                                0x1
#define _CMSTAT_COUT1_MASK                                  0x1
#define _CMSTAT_COUT2_POSN                                  0x1
#define _CMSTAT_COUT2_POSITION                              0x1
#define _CMSTAT_COUT2_SIZE                                  0x1
#define _CMSTAT_COUT2_LENGTH                                0x1
#define _CMSTAT_COUT2_MASK                                  0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned COUT1                  :1;
        unsigned COUT2                  :1;
    };
} CMSTATUSbits_t;
extern volatile CMSTATUSbits_t CMSTATUSbits __at(0xF70);
// bitfield macros
#define _CMSTATUS_COUT1_POSN                                0x0
#define _CMSTATUS_COUT1_POSITION                            0x0
#define _CMSTATUS_COUT1_SIZE                                0x1
#define _CMSTATUS_COUT1_LENGTH                              0x1
#define _CMSTATUS_COUT1_MASK                                0x1
#define _CMSTATUS_COUT2_POSN                                0x1
#define _CMSTATUS_COUT2_POSITION                            0x1
#define _CMSTATUS_COUT2_SIZE                                0x1
#define _CMSTATUS_COUT2_LENGTH                              0x1
#define _CMSTATUS_COUT2_MASK                                0x2

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
extern volatile unsigned char           SSP2CON2            __at(0xF71);
#ifndef _LIB_BUILD
asm("SSP2CON2 equ 0F71h");
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
        unsigned SEN2                   :1;
        unsigned ADMSK12                :1;
        unsigned ADMSK22                :1;
        unsigned ADMSK32                :1;
        unsigned ACKEN2                 :1;
        unsigned ACKDT2                 :1;
        unsigned ACKSTAT2               :1;
        unsigned GCEN2                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN2                  :1;
        unsigned PEN2                   :1;
        unsigned RCEN2                  :1;
        unsigned ADMSK42                :1;
        unsigned ADMSK52                :1;
    };
} SSP2CON2bits_t;
extern volatile SSP2CON2bits_t SSP2CON2bits __at(0xF71);
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
#define _SSP2CON2_ADMSK1_POSN                               0x1
#define _SSP2CON2_ADMSK1_POSITION                           0x1
#define _SSP2CON2_ADMSK1_SIZE                               0x1
#define _SSP2CON2_ADMSK1_LENGTH                             0x1
#define _SSP2CON2_ADMSK1_MASK                               0x2
#define _SSP2CON2_ADMSK2_POSN                               0x2
#define _SSP2CON2_ADMSK2_POSITION                           0x2
#define _SSP2CON2_ADMSK2_SIZE                               0x1
#define _SSP2CON2_ADMSK2_LENGTH                             0x1
#define _SSP2CON2_ADMSK2_MASK                               0x4
#define _SSP2CON2_ADMSK3_POSN                               0x3
#define _SSP2CON2_ADMSK3_POSITION                           0x3
#define _SSP2CON2_ADMSK3_SIZE                               0x1
#define _SSP2CON2_ADMSK3_LENGTH                             0x1
#define _SSP2CON2_ADMSK3_MASK                               0x8
#define _SSP2CON2_ADMSK4_POSN                               0x4
#define _SSP2CON2_ADMSK4_POSITION                           0x4
#define _SSP2CON2_ADMSK4_SIZE                               0x1
#define _SSP2CON2_ADMSK4_LENGTH                             0x1
#define _SSP2CON2_ADMSK4_MASK                               0x10
#define _SSP2CON2_ADMSK5_POSN                               0x5
#define _SSP2CON2_ADMSK5_POSITION                           0x5
#define _SSP2CON2_ADMSK5_SIZE                               0x1
#define _SSP2CON2_ADMSK5_LENGTH                             0x1
#define _SSP2CON2_ADMSK5_MASK                               0x20
#define _SSP2CON2_SEN2_POSN                                 0x0
#define _SSP2CON2_SEN2_POSITION                             0x0
#define _SSP2CON2_SEN2_SIZE                                 0x1
#define _SSP2CON2_SEN2_LENGTH                               0x1
#define _SSP2CON2_SEN2_MASK                                 0x1
#define _SSP2CON2_ADMSK12_POSN                              0x1
#define _SSP2CON2_ADMSK12_POSITION                          0x1
#define _SSP2CON2_ADMSK12_SIZE                              0x1
#define _SSP2CON2_ADMSK12_LENGTH                            0x1
#define _SSP2CON2_ADMSK12_MASK                              0x2
#define _SSP2CON2_ADMSK22_POSN                              0x2
#define _SSP2CON2_ADMSK22_POSITION                          0x2
#define _SSP2CON2_ADMSK22_SIZE                              0x1
#define _SSP2CON2_ADMSK22_LENGTH                            0x1
#define _SSP2CON2_ADMSK22_MASK                              0x4
#define _SSP2CON2_ADMSK32_POSN                              0x3
#define _SSP2CON2_ADMSK32_POSITION                          0x3
#define _SSP2CON2_ADMSK32_SIZE                              0x1
#define _SSP2CON2_ADMSK32_LENGTH                            0x1
#define _SSP2CON2_ADMSK32_MASK                              0x8
#define _SSP2CON2_ACKEN2_POSN                               0x4
#define _SSP2CON2_ACKEN2_POSITION                           0x4
#define _SSP2CON2_ACKEN2_SIZE                               0x1
#define _SSP2CON2_ACKEN2_LENGTH                             0x1
#define _SSP2CON2_ACKEN2_MASK                               0x10
#define _SSP2CON2_ACKDT2_POSN                               0x5
#define _SSP2CON2_ACKDT2_POSITION                           0x5
#define _SSP2CON2_ACKDT2_SIZE                               0x1
#define _SSP2CON2_ACKDT2_LENGTH                             0x1
#define _SSP2CON2_ACKDT2_MASK                               0x20
#define _SSP2CON2_ACKSTAT2_POSN                             0x6
#define _SSP2CON2_ACKSTAT2_POSITION                         0x6
#define _SSP2CON2_ACKSTAT2_SIZE                             0x1
#define _SSP2CON2_ACKSTAT2_LENGTH                           0x1
#define _SSP2CON2_ACKSTAT2_MASK                             0x40
#define _SSP2CON2_GCEN2_POSN                                0x7
#define _SSP2CON2_GCEN2_POSITION                            0x7
#define _SSP2CON2_GCEN2_SIZE                                0x1
#define _SSP2CON2_GCEN2_LENGTH                              0x1
#define _SSP2CON2_GCEN2_MASK                                0x80
#define _SSP2CON2_RSEN2_POSN                                0x1
#define _SSP2CON2_RSEN2_POSITION                            0x1
#define _SSP2CON2_RSEN2_SIZE                                0x1
#define _SSP2CON2_RSEN2_LENGTH                              0x1
#define _SSP2CON2_RSEN2_MASK                                0x2
#define _SSP2CON2_PEN2_POSN                                 0x2
#define _SSP2CON2_PEN2_POSITION                             0x2
#define _SSP2CON2_PEN2_SIZE                                 0x1
#define _SSP2CON2_PEN2_LENGTH                               0x1
#define _SSP2CON2_PEN2_MASK                                 0x4
#define _SSP2CON2_RCEN2_POSN                                0x3
#define _SSP2CON2_RCEN2_POSITION                            0x3
#define _SSP2CON2_RCEN2_SIZE                                0x1
#define _SSP2CON2_RCEN2_LENGTH                              0x1
#define _SSP2CON2_RCEN2_MASK                                0x8
#define _SSP2CON2_ADMSK42_POSN                              0x4
#define _SSP2CON2_ADMSK42_POSITION                          0x4
#define _SSP2CON2_ADMSK42_SIZE                              0x1
#define _SSP2CON2_ADMSK42_LENGTH                            0x1
#define _SSP2CON2_ADMSK42_MASK                              0x10
#define _SSP2CON2_ADMSK52_POSN                              0x5
#define _SSP2CON2_ADMSK52_POSITION                          0x5
#define _SSP2CON2_ADMSK52_SIZE                              0x1
#define _SSP2CON2_ADMSK52_LENGTH                            0x1
#define _SSP2CON2_ADMSK52_MASK                              0x20

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
extern volatile unsigned char           SSP2CON1            __at(0xF72);
#ifndef _LIB_BUILD
asm("SSP2CON1 equ 0F72h");
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
        unsigned SSPM02                 :1;
        unsigned SSPM12                 :1;
        unsigned SSPM22                 :1;
        unsigned SSPM32                 :1;
        unsigned CKP2                   :1;
        unsigned SSPEN2                 :1;
        unsigned SSPOV2                 :1;
        unsigned WCOL2                  :1;
    };
} SSP2CON1bits_t;
extern volatile SSP2CON1bits_t SSP2CON1bits __at(0xF72);
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
#define _SSP2CON1_SSPM02_POSN                               0x0
#define _SSP2CON1_SSPM02_POSITION                           0x0
#define _SSP2CON1_SSPM02_SIZE                               0x1
#define _SSP2CON1_SSPM02_LENGTH                             0x1
#define _SSP2CON1_SSPM02_MASK                               0x1
#define _SSP2CON1_SSPM12_POSN                               0x1
#define _SSP2CON1_SSPM12_POSITION                           0x1
#define _SSP2CON1_SSPM12_SIZE                               0x1
#define _SSP2CON1_SSPM12_LENGTH                             0x1
#define _SSP2CON1_SSPM12_MASK                               0x2
#define _SSP2CON1_SSPM22_POSN                               0x2
#define _SSP2CON1_SSPM22_POSITION                           0x2
#define _SSP2CON1_SSPM22_SIZE                               0x1
#define _SSP2CON1_SSPM22_LENGTH                             0x1
#define _SSP2CON1_SSPM22_MASK                               0x4
#define _SSP2CON1_SSPM32_POSN                               0x3
#define _SSP2CON1_SSPM32_POSITION                           0x3
#define _SSP2CON1_SSPM32_SIZE                               0x1
#define _SSP2CON1_SSPM32_LENGTH                             0x1
#define _SSP2CON1_SSPM32_MASK                               0x8
#define _SSP2CON1_CKP2_POSN                                 0x4
#define _SSP2CON1_CKP2_POSITION                             0x4
#define _SSP2CON1_CKP2_SIZE                                 0x1
#define _SSP2CON1_CKP2_LENGTH                               0x1
#define _SSP2CON1_CKP2_MASK                                 0x10
#define _SSP2CON1_SSPEN2_POSN                               0x5
#define _SSP2CON1_SSPEN2_POSITION                           0x5
#define _SSP2CON1_SSPEN2_SIZE                               0x1
#define _SSP2CON1_SSPEN2_LENGTH                             0x1
#define _SSP2CON1_SSPEN2_MASK                               0x20
#define _SSP2CON1_SSPOV2_POSN                               0x6
#define _SSP2CON1_SSPOV2_POSITION                           0x6
#define _SSP2CON1_SSPOV2_SIZE                               0x1
#define _SSP2CON1_SSPOV2_LENGTH                             0x1
#define _SSP2CON1_SSPOV2_MASK                               0x40
#define _SSP2CON1_WCOL2_POSN                                0x7
#define _SSP2CON1_WCOL2_POSITION                            0x7
#define _SSP2CON1_WCOL2_SIZE                                0x1
#define _SSP2CON1_WCOL2_LENGTH                              0x1
#define _SSP2CON1_WCOL2_MASK                                0x80

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
extern volatile unsigned char           SSP2STAT            __at(0xF73);
#ifndef _LIB_BUILD
asm("SSP2STAT equ 0F73h");
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
        unsigned BF2                    :1;
        unsigned UA2                    :1;
        unsigned I2C_READ2              :1;
        unsigned I2C_START2             :1;
        unsigned I2C_STOP2              :1;
        unsigned DA2                    :1;
        unsigned CKE2                   :1;
        unsigned SMP2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE2            :1;
        unsigned S2                     :1;
        unsigned P2                     :1;
        unsigned DATA_ADDRESS2          :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW2                    :1;
        unsigned START2                 :1;
        unsigned STOP2                  :1;
        unsigned D_A2                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A2               :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W2                   :1;
        unsigned                        :2;
        unsigned D_nA2                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_NOT_W2               :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_nW2                  :1;
        unsigned                        :2;
        unsigned I2C_DAT2               :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W2                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A2                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW2                    :1;
        unsigned                        :2;
        unsigned nA2                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE2             :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS2           :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE2                :1;
        unsigned                        :2;
        unsigned nADDRESS2              :1;
    };
} SSP2STATbits_t;
extern volatile SSP2STATbits_t SSP2STATbits __at(0xF73);
// bitfield macros
#define _SSP2STAT_R_NOT_W_POSN                              0x2
#define _SSP2STAT_R_NOT_W_POSITION                          0x2
#define _SSP2STAT_R_NOT_W_SIZE                              0x1
#define _SSP2STAT_R_NOT_W_LENGTH                            0x1
#define _SSP2STAT_R_NOT_W_MASK                              0x4
#define _SSP2STAT_D_NOT_A_POSN                              0x5
#define _SSP2STAT_D_NOT_A_POSITION                          0x5
#define _SSP2STAT_D_NOT_A_SIZE                              0x1
#define _SSP2STAT_D_NOT_A_LENGTH                            0x1
#define _SSP2STAT_D_NOT_A_MASK                              0x20
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
#define _SSP2STAT_BF2_POSN                                  0x0
#define _SSP2STAT_BF2_POSITION                              0x0
#define _SSP2STAT_BF2_SIZE                                  0x1
#define _SSP2STAT_BF2_LENGTH                                0x1
#define _SSP2STAT_BF2_MASK                                  0x1
#define _SSP2STAT_UA2_POSN                                  0x1
#define _SSP2STAT_UA2_POSITION                              0x1
#define _SSP2STAT_UA2_SIZE                                  0x1
#define _SSP2STAT_UA2_LENGTH                                0x1
#define _SSP2STAT_UA2_MASK                                  0x2
#define _SSP2STAT_I2C_READ2_POSN                            0x2
#define _SSP2STAT_I2C_READ2_POSITION                        0x2
#define _SSP2STAT_I2C_READ2_SIZE                            0x1
#define _SSP2STAT_I2C_READ2_LENGTH                          0x1
#define _SSP2STAT_I2C_READ2_MASK                            0x4
#define _SSP2STAT_I2C_START2_POSN                           0x3
#define _SSP2STAT_I2C_START2_POSITION                       0x3
#define _SSP2STAT_I2C_START2_SIZE                           0x1
#define _SSP2STAT_I2C_START2_LENGTH                         0x1
#define _SSP2STAT_I2C_START2_MASK                           0x8
#define _SSP2STAT_I2C_STOP2_POSN                            0x4
#define _SSP2STAT_I2C_STOP2_POSITION                        0x4
#define _SSP2STAT_I2C_STOP2_SIZE                            0x1
#define _SSP2STAT_I2C_STOP2_LENGTH                          0x1
#define _SSP2STAT_I2C_STOP2_MASK                            0x10
#define _SSP2STAT_DA2_POSN                                  0x5
#define _SSP2STAT_DA2_POSITION                              0x5
#define _SSP2STAT_DA2_SIZE                                  0x1
#define _SSP2STAT_DA2_LENGTH                                0x1
#define _SSP2STAT_DA2_MASK                                  0x20
#define _SSP2STAT_CKE2_POSN                                 0x6
#define _SSP2STAT_CKE2_POSITION                             0x6
#define _SSP2STAT_CKE2_SIZE                                 0x1
#define _SSP2STAT_CKE2_LENGTH                               0x1
#define _SSP2STAT_CKE2_MASK                                 0x40
#define _SSP2STAT_SMP2_POSN                                 0x7
#define _SSP2STAT_SMP2_POSITION                             0x7
#define _SSP2STAT_SMP2_SIZE                                 0x1
#define _SSP2STAT_SMP2_LENGTH                               0x1
#define _SSP2STAT_SMP2_MASK                                 0x80
#define _SSP2STAT_READ_WRITE2_POSN                          0x2
#define _SSP2STAT_READ_WRITE2_POSITION                      0x2
#define _SSP2STAT_READ_WRITE2_SIZE                          0x1
#define _SSP2STAT_READ_WRITE2_LENGTH                        0x1
#define _SSP2STAT_READ_WRITE2_MASK                          0x4
#define _SSP2STAT_S2_POSN                                   0x3
#define _SSP2STAT_S2_POSITION                               0x3
#define _SSP2STAT_S2_SIZE                                   0x1
#define _SSP2STAT_S2_LENGTH                                 0x1
#define _SSP2STAT_S2_MASK                                   0x8
#define _SSP2STAT_P2_POSN                                   0x4
#define _SSP2STAT_P2_POSITION                               0x4
#define _SSP2STAT_P2_SIZE                                   0x1
#define _SSP2STAT_P2_LENGTH                                 0x1
#define _SSP2STAT_P2_MASK                                   0x10
#define _SSP2STAT_DATA_ADDRESS2_POSN                        0x5
#define _SSP2STAT_DATA_ADDRESS2_POSITION                    0x5
#define _SSP2STAT_DATA_ADDRESS2_SIZE                        0x1
#define _SSP2STAT_DATA_ADDRESS2_LENGTH                      0x1
#define _SSP2STAT_DATA_ADDRESS2_MASK                        0x20
#define _SSP2STAT_RW2_POSN                                  0x2
#define _SSP2STAT_RW2_POSITION                              0x2
#define _SSP2STAT_RW2_SIZE                                  0x1
#define _SSP2STAT_RW2_LENGTH                                0x1
#define _SSP2STAT_RW2_MASK                                  0x4
#define _SSP2STAT_START2_POSN                               0x3
#define _SSP2STAT_START2_POSITION                           0x3
#define _SSP2STAT_START2_SIZE                               0x1
#define _SSP2STAT_START2_LENGTH                             0x1
#define _SSP2STAT_START2_MASK                               0x8
#define _SSP2STAT_STOP2_POSN                                0x4
#define _SSP2STAT_STOP2_POSITION                            0x4
#define _SSP2STAT_STOP2_SIZE                                0x1
#define _SSP2STAT_STOP2_LENGTH                              0x1
#define _SSP2STAT_STOP2_MASK                                0x10
#define _SSP2STAT_D_A2_POSN                                 0x5
#define _SSP2STAT_D_A2_POSITION                             0x5
#define _SSP2STAT_D_A2_SIZE                                 0x1
#define _SSP2STAT_D_A2_LENGTH                               0x1
#define _SSP2STAT_D_A2_MASK                                 0x20
#define _SSP2STAT_D_NOT_A2_POSN                             0x5
#define _SSP2STAT_D_NOT_A2_POSITION                         0x5
#define _SSP2STAT_D_NOT_A2_SIZE                             0x1
#define _SSP2STAT_D_NOT_A2_LENGTH                           0x1
#define _SSP2STAT_D_NOT_A2_MASK                             0x20
#define _SSP2STAT_R_W2_POSN                                 0x2
#define _SSP2STAT_R_W2_POSITION                             0x2
#define _SSP2STAT_R_W2_SIZE                                 0x1
#define _SSP2STAT_R_W2_LENGTH                               0x1
#define _SSP2STAT_R_W2_MASK                                 0x4
#define _SSP2STAT_D_nA2_POSN                                0x5
#define _SSP2STAT_D_nA2_POSITION                            0x5
#define _SSP2STAT_D_nA2_SIZE                                0x1
#define _SSP2STAT_D_nA2_LENGTH                              0x1
#define _SSP2STAT_D_nA2_MASK                                0x20
#define _SSP2STAT_R_NOT_W2_POSN                             0x2
#define _SSP2STAT_R_NOT_W2_POSITION                         0x2
#define _SSP2STAT_R_NOT_W2_SIZE                             0x1
#define _SSP2STAT_R_NOT_W2_LENGTH                           0x1
#define _SSP2STAT_R_NOT_W2_MASK                             0x4
#define _SSP2STAT_R_nW2_POSN                                0x2
#define _SSP2STAT_R_nW2_POSITION                            0x2
#define _SSP2STAT_R_nW2_SIZE                                0x1
#define _SSP2STAT_R_nW2_LENGTH                              0x1
#define _SSP2STAT_R_nW2_MASK                                0x4
#define _SSP2STAT_I2C_DAT2_POSN                             0x5
#define _SSP2STAT_I2C_DAT2_POSITION                         0x5
#define _SSP2STAT_I2C_DAT2_SIZE                             0x1
#define _SSP2STAT_I2C_DAT2_LENGTH                           0x1
#define _SSP2STAT_I2C_DAT2_MASK                             0x20
#define _SSP2STAT_NOT_W2_POSN                               0x2
#define _SSP2STAT_NOT_W2_POSITION                           0x2
#define _SSP2STAT_NOT_W2_SIZE                               0x1
#define _SSP2STAT_NOT_W2_LENGTH                             0x1
#define _SSP2STAT_NOT_W2_MASK                               0x4
#define _SSP2STAT_NOT_A2_POSN                               0x5
#define _SSP2STAT_NOT_A2_POSITION                           0x5
#define _SSP2STAT_NOT_A2_SIZE                               0x1
#define _SSP2STAT_NOT_A2_LENGTH                             0x1
#define _SSP2STAT_NOT_A2_MASK                               0x20
#define _SSP2STAT_nW2_POSN                                  0x2
#define _SSP2STAT_nW2_POSITION                              0x2
#define _SSP2STAT_nW2_SIZE                                  0x1
#define _SSP2STAT_nW2_LENGTH                                0x1
#define _SSP2STAT_nW2_MASK                                  0x4
#define _SSP2STAT_nA2_POSN                                  0x5
#define _SSP2STAT_nA2_POSITION                              0x5
#define _SSP2STAT_nA2_SIZE                                  0x1
#define _SSP2STAT_nA2_LENGTH                                0x1
#define _SSP2STAT_nA2_MASK                                  0x20
#define _SSP2STAT_NOT_WRITE2_POSN                           0x2
#define _SSP2STAT_NOT_WRITE2_POSITION                       0x2
#define _SSP2STAT_NOT_WRITE2_SIZE                           0x1
#define _SSP2STAT_NOT_WRITE2_LENGTH                         0x1
#define _SSP2STAT_NOT_WRITE2_MASK                           0x4
#define _SSP2STAT_NOT_ADDRESS2_POSN                         0x5
#define _SSP2STAT_NOT_ADDRESS2_POSITION                     0x5
#define _SSP2STAT_NOT_ADDRESS2_SIZE                         0x1
#define _SSP2STAT_NOT_ADDRESS2_LENGTH                       0x1
#define _SSP2STAT_NOT_ADDRESS2_MASK                         0x20
#define _SSP2STAT_nWRITE2_POSN                              0x2
#define _SSP2STAT_nWRITE2_POSITION                          0x2
#define _SSP2STAT_nWRITE2_SIZE                              0x1
#define _SSP2STAT_nWRITE2_LENGTH                            0x1
#define _SSP2STAT_nWRITE2_MASK                              0x4
#define _SSP2STAT_nADDRESS2_POSN                            0x5
#define _SSP2STAT_nADDRESS2_POSITION                        0x5
#define _SSP2STAT_nADDRESS2_SIZE                            0x1
#define _SSP2STAT_nADDRESS2_LENGTH                          0x1
#define _SSP2STAT_nADDRESS2_MASK                            0x20

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
extern volatile unsigned char           SSP2ADD             __at(0xF74);
#ifndef _LIB_BUILD
asm("SSP2ADD equ 0F74h");
#endif
// aliases
extern volatile unsigned char           SSP2MSK             __at(0xF74);
#ifndef _LIB_BUILD
asm("SSP2MSK equ 0F74h");
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
        unsigned MSK02                  :1;
        unsigned MSK12                  :1;
        unsigned MSK22                  :1;
        unsigned MSK32                  :1;
        unsigned MSK42                  :1;
        unsigned MSK52                  :1;
        unsigned MSK62                  :1;
        unsigned MSK72                  :1;
    };
} SSP2ADDbits_t;
extern volatile SSP2ADDbits_t SSP2ADDbits __at(0xF74);
// bitfield macros
#define _SSP2ADD_SSPADD_POSN                                0x0
#define _SSP2ADD_SSPADD_POSITION                            0x0
#define _SSP2ADD_SSPADD_SIZE                                0x8
#define _SSP2ADD_SSPADD_LENGTH                              0x8
#define _SSP2ADD_SSPADD_MASK                                0xFF
#define _SSP2ADD_MSK0_POSN                                  0x0
#define _SSP2ADD_MSK0_POSITION                              0x0
#define _SSP2ADD_MSK0_SIZE                                  0x1
#define _SSP2ADD_MSK0_LENGTH                                0x1
#define _SSP2ADD_MSK0_MASK                                  0x1
#define _SSP2ADD_MSK1_POSN                                  0x1
#define _SSP2ADD_MSK1_POSITION                              0x1
#define _SSP2ADD_MSK1_SIZE                                  0x1
#define _SSP2ADD_MSK1_LENGTH                                0x1
#define _SSP2ADD_MSK1_MASK                                  0x2
#define _SSP2ADD_MSK2_POSN                                  0x2
#define _SSP2ADD_MSK2_POSITION                              0x2
#define _SSP2ADD_MSK2_SIZE                                  0x1
#define _SSP2ADD_MSK2_LENGTH                                0x1
#define _SSP2ADD_MSK2_MASK                                  0x4
#define _SSP2ADD_MSK3_POSN                                  0x3
#define _SSP2ADD_MSK3_POSITION                              0x3
#define _SSP2ADD_MSK3_SIZE                                  0x1
#define _SSP2ADD_MSK3_LENGTH                                0x1
#define _SSP2ADD_MSK3_MASK                                  0x8
#define _SSP2ADD_MSK4_POSN                                  0x4
#define _SSP2ADD_MSK4_POSITION                              0x4
#define _SSP2ADD_MSK4_SIZE                                  0x1
#define _SSP2ADD_MSK4_LENGTH                                0x1
#define _SSP2ADD_MSK4_MASK                                  0x10
#define _SSP2ADD_MSK5_POSN                                  0x5
#define _SSP2ADD_MSK5_POSITION                              0x5
#define _SSP2ADD_MSK5_SIZE                                  0x1
#define _SSP2ADD_MSK5_LENGTH                                0x1
#define _SSP2ADD_MSK5_MASK                                  0x20
#define _SSP2ADD_MSK6_POSN                                  0x6
#define _SSP2ADD_MSK6_POSITION                              0x6
#define _SSP2ADD_MSK6_SIZE                                  0x1
#define _SSP2ADD_MSK6_LENGTH                                0x1
#define _SSP2ADD_MSK6_MASK                                  0x40
#define _SSP2ADD_MSK7_POSN                                  0x7
#define _SSP2ADD_MSK7_POSITION                              0x7
#define _SSP2ADD_MSK7_SIZE                                  0x1
#define _SSP2ADD_MSK7_LENGTH                                0x1
#define _SSP2ADD_MSK7_MASK                                  0x80
#define _SSP2ADD_MSK02_POSN                                 0x0
#define _SSP2ADD_MSK02_POSITION                             0x0
#define _SSP2ADD_MSK02_SIZE                                 0x1
#define _SSP2ADD_MSK02_LENGTH                               0x1
#define _SSP2ADD_MSK02_MASK                                 0x1
#define _SSP2ADD_MSK12_POSN                                 0x1
#define _SSP2ADD_MSK12_POSITION                             0x1
#define _SSP2ADD_MSK12_SIZE                                 0x1
#define _SSP2ADD_MSK12_LENGTH                               0x1
#define _SSP2ADD_MSK12_MASK                                 0x2
#define _SSP2ADD_MSK22_POSN                                 0x2
#define _SSP2ADD_MSK22_POSITION                             0x2
#define _SSP2ADD_MSK22_SIZE                                 0x1
#define _SSP2ADD_MSK22_LENGTH                               0x1
#define _SSP2ADD_MSK22_MASK                                 0x4
#define _SSP2ADD_MSK32_POSN                                 0x3
#define _SSP2ADD_MSK32_POSITION                             0x3
#define _SSP2ADD_MSK32_SIZE                                 0x1
#define _SSP2ADD_MSK32_LENGTH                               0x1
#define _SSP2ADD_MSK32_MASK                                 0x8
#define _SSP2ADD_MSK42_POSN                                 0x4
#define _SSP2ADD_MSK42_POSITION                             0x4
#define _SSP2ADD_MSK42_SIZE                                 0x1
#define _SSP2ADD_MSK42_LENGTH                               0x1
#define _SSP2ADD_MSK42_MASK                                 0x10
#define _SSP2ADD_MSK52_POSN                                 0x5
#define _SSP2ADD_MSK52_POSITION                             0x5
#define _SSP2ADD_MSK52_SIZE                                 0x1
#define _SSP2ADD_MSK52_LENGTH                               0x1
#define _SSP2ADD_MSK52_MASK                                 0x20
#define _SSP2ADD_MSK62_POSN                                 0x6
#define _SSP2ADD_MSK62_POSITION                             0x6
#define _SSP2ADD_MSK62_SIZE                                 0x1
#define _SSP2ADD_MSK62_LENGTH                               0x1
#define _SSP2ADD_MSK62_MASK                                 0x40
#define _SSP2ADD_MSK72_POSN                                 0x7
#define _SSP2ADD_MSK72_POSITION                             0x7
#define _SSP2ADD_MSK72_SIZE                                 0x1
#define _SSP2ADD_MSK72_LENGTH                               0x1
#define _SSP2ADD_MSK72_MASK                                 0x80
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
        unsigned MSK02                  :1;
        unsigned MSK12                  :1;
        unsigned MSK22                  :1;
        unsigned MSK32                  :1;
        unsigned MSK42                  :1;
        unsigned MSK52                  :1;
        unsigned MSK62                  :1;
        unsigned MSK72                  :1;
    };
} SSP2MSKbits_t;
extern volatile SSP2MSKbits_t SSP2MSKbits __at(0xF74);
// bitfield macros
#define _SSP2MSK_SSPADD_POSN                                0x0
#define _SSP2MSK_SSPADD_POSITION                            0x0
#define _SSP2MSK_SSPADD_SIZE                                0x8
#define _SSP2MSK_SSPADD_LENGTH                              0x8
#define _SSP2MSK_SSPADD_MASK                                0xFF
#define _SSP2MSK_MSK0_POSN                                  0x0
#define _SSP2MSK_MSK0_POSITION                              0x0
#define _SSP2MSK_MSK0_SIZE                                  0x1
#define _SSP2MSK_MSK0_LENGTH                                0x1
#define _SSP2MSK_MSK0_MASK                                  0x1
#define _SSP2MSK_MSK1_POSN                                  0x1
#define _SSP2MSK_MSK1_POSITION                              0x1
#define _SSP2MSK_MSK1_SIZE                                  0x1
#define _SSP2MSK_MSK1_LENGTH                                0x1
#define _SSP2MSK_MSK1_MASK                                  0x2
#define _SSP2MSK_MSK2_POSN                                  0x2
#define _SSP2MSK_MSK2_POSITION                              0x2
#define _SSP2MSK_MSK2_SIZE                                  0x1
#define _SSP2MSK_MSK2_LENGTH                                0x1
#define _SSP2MSK_MSK2_MASK                                  0x4
#define _SSP2MSK_MSK3_POSN                                  0x3
#define _SSP2MSK_MSK3_POSITION                              0x3
#define _SSP2MSK_MSK3_SIZE                                  0x1
#define _SSP2MSK_MSK3_LENGTH                                0x1
#define _SSP2MSK_MSK3_MASK                                  0x8
#define _SSP2MSK_MSK4_POSN                                  0x4
#define _SSP2MSK_MSK4_POSITION                              0x4
#define _SSP2MSK_MSK4_SIZE                                  0x1
#define _SSP2MSK_MSK4_LENGTH                                0x1
#define _SSP2MSK_MSK4_MASK                                  0x10
#define _SSP2MSK_MSK5_POSN                                  0x5
#define _SSP2MSK_MSK5_POSITION                              0x5
#define _SSP2MSK_MSK5_SIZE                                  0x1
#define _SSP2MSK_MSK5_LENGTH                                0x1
#define _SSP2MSK_MSK5_MASK                                  0x20
#define _SSP2MSK_MSK6_POSN                                  0x6
#define _SSP2MSK_MSK6_POSITION                              0x6
#define _SSP2MSK_MSK6_SIZE                                  0x1
#define _SSP2MSK_MSK6_LENGTH                                0x1
#define _SSP2MSK_MSK6_MASK                                  0x40
#define _SSP2MSK_MSK7_POSN                                  0x7
#define _SSP2MSK_MSK7_POSITION                              0x7
#define _SSP2MSK_MSK7_SIZE                                  0x1
#define _SSP2MSK_MSK7_LENGTH                                0x1
#define _SSP2MSK_MSK7_MASK                                  0x80
#define _SSP2MSK_MSK02_POSN                                 0x0
#define _SSP2MSK_MSK02_POSITION                             0x0
#define _SSP2MSK_MSK02_SIZE                                 0x1
#define _SSP2MSK_MSK02_LENGTH                               0x1
#define _SSP2MSK_MSK02_MASK                                 0x1
#define _SSP2MSK_MSK12_POSN                                 0x1
#define _SSP2MSK_MSK12_POSITION                             0x1
#define _SSP2MSK_MSK12_SIZE                                 0x1
#define _SSP2MSK_MSK12_LENGTH                               0x1
#define _SSP2MSK_MSK12_MASK                                 0x2
#define _SSP2MSK_MSK22_POSN                                 0x2
#define _SSP2MSK_MSK22_POSITION                             0x2
#define _SSP2MSK_MSK22_SIZE                                 0x1
#define _SSP2MSK_MSK22_LENGTH                               0x1
#define _SSP2MSK_MSK22_MASK                                 0x4
#define _SSP2MSK_MSK32_POSN                                 0x3
#define _SSP2MSK_MSK32_POSITION                             0x3
#define _SSP2MSK_MSK32_SIZE                                 0x1
#define _SSP2MSK_MSK32_LENGTH                               0x1
#define _SSP2MSK_MSK32_MASK                                 0x8
#define _SSP2MSK_MSK42_POSN                                 0x4
#define _SSP2MSK_MSK42_POSITION                             0x4
#define _SSP2MSK_MSK42_SIZE                                 0x1
#define _SSP2MSK_MSK42_LENGTH                               0x1
#define _SSP2MSK_MSK42_MASK                                 0x10
#define _SSP2MSK_MSK52_POSN                                 0x5
#define _SSP2MSK_MSK52_POSITION                             0x5
#define _SSP2MSK_MSK52_SIZE                                 0x1
#define _SSP2MSK_MSK52_LENGTH                               0x1
#define _SSP2MSK_MSK52_MASK                                 0x20
#define _SSP2MSK_MSK62_POSN                                 0x6
#define _SSP2MSK_MSK62_POSITION                             0x6
#define _SSP2MSK_MSK62_SIZE                                 0x1
#define _SSP2MSK_MSK62_LENGTH                               0x1
#define _SSP2MSK_MSK62_MASK                                 0x40
#define _SSP2MSK_MSK72_POSN                                 0x7
#define _SSP2MSK_MSK72_POSITION                             0x7
#define _SSP2MSK_MSK72_SIZE                                 0x1
#define _SSP2MSK_MSK72_LENGTH                               0x1
#define _SSP2MSK_MSK72_MASK                                 0x80

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
extern volatile unsigned char           SSP2BUF             __at(0xF75);
#ifndef _LIB_BUILD
asm("SSP2BUF equ 0F75h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP2BUFbits_t;
extern volatile SSP2BUFbits_t SSP2BUFbits __at(0xF75);
// bitfield macros
#define _SSP2BUF_SSPBUF_POSN                                0x0
#define _SSP2BUF_SSPBUF_POSITION                            0x0
#define _SSP2BUF_SSPBUF_SIZE                                0x8
#define _SSP2BUF_SSPBUF_LENGTH                              0x8
#define _SSP2BUF_SSPBUF_MASK                                0xFF

// Register: T4CON
#define T4CON T4CON
extern volatile unsigned char           T4CON               __at(0xF76);
#ifndef _LIB_BUILD
asm("T4CON equ 0F76h");
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
extern volatile T4CONbits_t T4CONbits __at(0xF76);
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

// Register: PR4
#define PR4 PR4
extern volatile unsigned char           PR4                 __at(0xF77);
#ifndef _LIB_BUILD
asm("PR4 equ 0F77h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR4                    :8;
    };
} PR4bits_t;
extern volatile PR4bits_t PR4bits __at(0xF77);
// bitfield macros
#define _PR4_PR4_POSN                                       0x0
#define _PR4_PR4_POSITION                                   0x0
#define _PR4_PR4_SIZE                                       0x8
#define _PR4_PR4_LENGTH                                     0x8
#define _PR4_PR4_MASK                                       0xFF

// Register: TMR4
#define TMR4 TMR4
extern volatile unsigned char           TMR4                __at(0xF78);
#ifndef _LIB_BUILD
asm("TMR4 equ 0F78h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR4                   :8;
    };
} TMR4bits_t;
extern volatile TMR4bits_t TMR4bits __at(0xF78);
// bitfield macros
#define _TMR4_TMR4_POSN                                     0x0
#define _TMR4_TMR4_POSITION                                 0x0
#define _TMR4_TMR4_SIZE                                     0x8
#define _TMR4_TMR4_LENGTH                                   0x8
#define _TMR4_TMR4_MASK                                     0xFF

// Register: T3CON
#define T3CON T3CON
extern volatile unsigned char           T3CON               __at(0xF79);
#ifndef _LIB_BUILD
asm("T3CON equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3ON                 :1;
        unsigned RD16                   :1;
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
    struct {
        unsigned                        :7;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits __at(0xF79);
// bitfield macros
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_RD16_POSN                                    0x1
#define _T3CON_RD16_POSITION                                0x1
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x2
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
extern volatile unsigned short          TMR3                __at(0xF7A);
#ifndef _LIB_BUILD
asm("TMR3 equ 0F7Ah");
#endif

// Register: TMR3L
#define TMR3L TMR3L
extern volatile unsigned char           TMR3L               __at(0xF7A);
#ifndef _LIB_BUILD
asm("TMR3L equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3L                  :8;
    };
} TMR3Lbits_t;
extern volatile TMR3Lbits_t TMR3Lbits __at(0xF7A);
// bitfield macros
#define _TMR3L_TMR3L_POSN                                   0x0
#define _TMR3L_TMR3L_POSITION                               0x0
#define _TMR3L_TMR3L_SIZE                                   0x8
#define _TMR3L_TMR3L_LENGTH                                 0x8
#define _TMR3L_TMR3L_MASK                                   0xFF

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0xF7B);
#ifndef _LIB_BUILD
asm("TMR3H equ 0F7Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR3H                  :8;
    };
} TMR3Hbits_t;
extern volatile TMR3Hbits_t TMR3Hbits __at(0xF7B);
// bitfield macros
#define _TMR3H_TMR3H_POSN                                   0x0
#define _TMR3H_TMR3H_POSITION                               0x0
#define _TMR3H_TMR3H_SIZE                                   0x8
#define _TMR3H_TMR3H_LENGTH                                 0x8
#define _TMR3H_TMR3H_MASK                                   0xFF

// Register: BAUDCON2
#define BAUDCON2 BAUDCON2
extern volatile unsigned char           BAUDCON2            __at(0xF7C);
#ifndef _LIB_BUILD
asm("BAUDCON2 equ 0F7Ch");
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
        unsigned ABDEN2                 :1;
        unsigned WUE2                   :1;
        unsigned                        :1;
        unsigned BRG162                 :1;
        unsigned SCKP2                  :1;
        unsigned DTRXP2                 :1;
        unsigned RCIDL2                 :1;
        unsigned ABDOVF2                :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP2                 :1;
        unsigned RXDTP2                 :1;
        unsigned RCMT2                  :1;
    };
} BAUDCON2bits_t;
extern volatile BAUDCON2bits_t BAUDCON2bits __at(0xF7C);
// bitfield macros
#define _BAUDCON2_ABDEN_POSN                                0x0
#define _BAUDCON2_ABDEN_POSITION                            0x0
#define _BAUDCON2_ABDEN_SIZE                                0x1
#define _BAUDCON2_ABDEN_LENGTH                              0x1
#define _BAUDCON2_ABDEN_MASK                                0x1
#define _BAUDCON2_WUE_POSN                                  0x1
#define _BAUDCON2_WUE_POSITION                              0x1
#define _BAUDCON2_WUE_SIZE                                  0x1
#define _BAUDCON2_WUE_LENGTH                                0x1
#define _BAUDCON2_WUE_MASK                                  0x2
#define _BAUDCON2_BRG16_POSN                                0x3
#define _BAUDCON2_BRG16_POSITION                            0x3
#define _BAUDCON2_BRG16_SIZE                                0x1
#define _BAUDCON2_BRG16_LENGTH                              0x1
#define _BAUDCON2_BRG16_MASK                                0x8
#define _BAUDCON2_TXCKP_POSN                                0x4
#define _BAUDCON2_TXCKP_POSITION                            0x4
#define _BAUDCON2_TXCKP_SIZE                                0x1
#define _BAUDCON2_TXCKP_LENGTH                              0x1
#define _BAUDCON2_TXCKP_MASK                                0x10
#define _BAUDCON2_RXDTP_POSN                                0x5
#define _BAUDCON2_RXDTP_POSITION                            0x5
#define _BAUDCON2_RXDTP_SIZE                                0x1
#define _BAUDCON2_RXDTP_LENGTH                              0x1
#define _BAUDCON2_RXDTP_MASK                                0x20
#define _BAUDCON2_RCIDL_POSN                                0x6
#define _BAUDCON2_RCIDL_POSITION                            0x6
#define _BAUDCON2_RCIDL_SIZE                                0x1
#define _BAUDCON2_RCIDL_LENGTH                              0x1
#define _BAUDCON2_RCIDL_MASK                                0x40
#define _BAUDCON2_ABDOVF_POSN                               0x7
#define _BAUDCON2_ABDOVF_POSITION                           0x7
#define _BAUDCON2_ABDOVF_SIZE                               0x1
#define _BAUDCON2_ABDOVF_LENGTH                             0x1
#define _BAUDCON2_ABDOVF_MASK                               0x80
#define _BAUDCON2_ABDEN2_POSN                               0x0
#define _BAUDCON2_ABDEN2_POSITION                           0x0
#define _BAUDCON2_ABDEN2_SIZE                               0x1
#define _BAUDCON2_ABDEN2_LENGTH                             0x1
#define _BAUDCON2_ABDEN2_MASK                               0x1
#define _BAUDCON2_WUE2_POSN                                 0x1
#define _BAUDCON2_WUE2_POSITION                             0x1
#define _BAUDCON2_WUE2_SIZE                                 0x1
#define _BAUDCON2_WUE2_LENGTH                               0x1
#define _BAUDCON2_WUE2_MASK                                 0x2
#define _BAUDCON2_BRG162_POSN                               0x3
#define _BAUDCON2_BRG162_POSITION                           0x3
#define _BAUDCON2_BRG162_SIZE                               0x1
#define _BAUDCON2_BRG162_LENGTH                             0x1
#define _BAUDCON2_BRG162_MASK                               0x8
#define _BAUDCON2_SCKP2_POSN                                0x4
#define _BAUDCON2_SCKP2_POSITION                            0x4
#define _BAUDCON2_SCKP2_SIZE                                0x1
#define _BAUDCON2_SCKP2_LENGTH                              0x1
#define _BAUDCON2_SCKP2_MASK                                0x10
#define _BAUDCON2_DTRXP2_POSN                               0x5
#define _BAUDCON2_DTRXP2_POSITION                           0x5
#define _BAUDCON2_DTRXP2_SIZE                               0x1
#define _BAUDCON2_DTRXP2_LENGTH                             0x1
#define _BAUDCON2_DTRXP2_MASK                               0x20
#define _BAUDCON2_RCIDL2_POSN                               0x6
#define _BAUDCON2_RCIDL2_POSITION                           0x6
#define _BAUDCON2_RCIDL2_SIZE                               0x1
#define _BAUDCON2_RCIDL2_LENGTH                             0x1
#define _BAUDCON2_RCIDL2_MASK                               0x40
#define _BAUDCON2_ABDOVF2_POSN                              0x7
#define _BAUDCON2_ABDOVF2_POSITION                          0x7
#define _BAUDCON2_ABDOVF2_SIZE                              0x1
#define _BAUDCON2_ABDOVF2_LENGTH                            0x1
#define _BAUDCON2_ABDOVF2_MASK                              0x80
#define _BAUDCON2_TXCKP2_POSN                               0x4
#define _BAUDCON2_TXCKP2_POSITION                           0x4
#define _BAUDCON2_TXCKP2_SIZE                               0x1
#define _BAUDCON2_TXCKP2_LENGTH                             0x1
#define _BAUDCON2_TXCKP2_MASK                               0x10
#define _BAUDCON2_RXDTP2_POSN                               0x5
#define _BAUDCON2_RXDTP2_POSITION                           0x5
#define _BAUDCON2_RXDTP2_SIZE                               0x1
#define _BAUDCON2_RXDTP2_LENGTH                             0x1
#define _BAUDCON2_RXDTP2_MASK                               0x20
#define _BAUDCON2_RCMT2_POSN                                0x6
#define _BAUDCON2_RCMT2_POSITION                            0x6
#define _BAUDCON2_RCMT2_SIZE                                0x1
#define _BAUDCON2_RCMT2_LENGTH                              0x1
#define _BAUDCON2_RCMT2_MASK                                0x40

// Register: SPBRGH2
#define SPBRGH2 SPBRGH2
extern volatile unsigned char           SPBRGH2             __at(0xF7D);
#ifndef _LIB_BUILD
asm("SPBRGH2 equ 0F7Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH2                :8;
    };
} SPBRGH2bits_t;
extern volatile SPBRGH2bits_t SPBRGH2bits __at(0xF7D);
// bitfield macros
#define _SPBRGH2_SPBRGH2_POSN                               0x0
#define _SPBRGH2_SPBRGH2_POSITION                           0x0
#define _SPBRGH2_SPBRGH2_SIZE                               0x8
#define _SPBRGH2_SPBRGH2_LENGTH                             0x8
#define _SPBRGH2_SPBRGH2_MASK                               0xFF

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
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
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
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
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
#define _BAUDCON1_RCMT_POSN                                 0x6
#define _BAUDCON1_RCMT_POSITION                             0x6
#define _BAUDCON1_RCMT_SIZE                                 0x1
#define _BAUDCON1_RCMT_LENGTH                               0x1
#define _BAUDCON1_RCMT_MASK                                 0x40
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
#define _BAUDCON1_RCMT1_POSN                                0x6
#define _BAUDCON1_RCMT1_POSITION                            0x6
#define _BAUDCON1_RCMT1_SIZE                                0x1
#define _BAUDCON1_RCMT1_LENGTH                              0x1
#define _BAUDCON1_RCMT1_MASK                                0x40
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
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
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
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
#define _BAUDCON_RCMT_POSN                                  0x6
#define _BAUDCON_RCMT_POSITION                              0x6
#define _BAUDCON_RCMT_SIZE                                  0x1
#define _BAUDCON_RCMT_LENGTH                                0x1
#define _BAUDCON_RCMT_MASK                                  0x40
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
#define _BAUDCON_RCMT1_POSN                                 0x6
#define _BAUDCON_RCMT1_POSITION                             0x6
#define _BAUDCON_RCMT1_SIZE                                 0x1
#define _BAUDCON_RCMT1_LENGTH                               0x1
#define _BAUDCON_RCMT1_MASK                                 0x40
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
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
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
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP1                  :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
#define _BAUDCTL_RCMT_POSN                                  0x6
#define _BAUDCTL_RCMT_POSITION                              0x6
#define _BAUDCTL_RCMT_SIZE                                  0x1
#define _BAUDCTL_RCMT_LENGTH                                0x1
#define _BAUDCTL_RCMT_MASK                                  0x40
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
#define _BAUDCTL_RCMT1_POSN                                 0x6
#define _BAUDCTL_RCMT1_POSITION                             0x6
#define _BAUDCTL_RCMT1_SIZE                                 0x1
#define _BAUDCTL_RCMT1_LENGTH                               0x1
#define _BAUDCTL_RCMT1_MASK                                 0x40
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
        unsigned                        :1;
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
        unsigned                        :5;
        unsigned NOT_SS1                :1;
    };
    struct {
        unsigned C1INA                  :1;
        unsigned C2INA                  :1;
        unsigned VREF_MINUS             :1;
        unsigned VREF_PLUS              :1;
        unsigned                        :1;
        unsigned nSS1                   :1;
        unsigned CLKO                   :1;
        unsigned CLKI                   :1;
    };
    struct {
        unsigned PMA6                   :1;
        unsigned PMA7                   :1;
        unsigned CVREF_MINUS            :1;
        unsigned C1INB                  :1;
        unsigned                        :1;
        unsigned HLVDIN                 :1;
    };
    struct {
        unsigned RP0                    :1;
        unsigned RP1                    :1;
        unsigned C2INB                  :1;
        unsigned                        :2;
        unsigned RCV                    :1;
    };
    struct {
        unsigned ULPWU                  :1;
        unsigned                        :4;
        unsigned RP2                    :1;
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
#define _PORTA_NOT_SS1_POSN                                 0x5
#define _PORTA_NOT_SS1_POSITION                             0x5
#define _PORTA_NOT_SS1_SIZE                                 0x1
#define _PORTA_NOT_SS1_LENGTH                               0x1
#define _PORTA_NOT_SS1_MASK                                 0x20
#define _PORTA_C1INA_POSN                                   0x0
#define _PORTA_C1INA_POSITION                               0x0
#define _PORTA_C1INA_SIZE                                   0x1
#define _PORTA_C1INA_LENGTH                                 0x1
#define _PORTA_C1INA_MASK                                   0x1
#define _PORTA_C2INA_POSN                                   0x1
#define _PORTA_C2INA_POSITION                               0x1
#define _PORTA_C2INA_SIZE                                   0x1
#define _PORTA_C2INA_LENGTH                                 0x1
#define _PORTA_C2INA_MASK                                   0x2
#define _PORTA_VREF_MINUS_POSN                              0x2
#define _PORTA_VREF_MINUS_POSITION                          0x2
#define _PORTA_VREF_MINUS_SIZE                              0x1
#define _PORTA_VREF_MINUS_LENGTH                            0x1
#define _PORTA_VREF_MINUS_MASK                              0x4
#define _PORTA_VREF_PLUS_POSN                               0x3
#define _PORTA_VREF_PLUS_POSITION                           0x3
#define _PORTA_VREF_PLUS_SIZE                               0x1
#define _PORTA_VREF_PLUS_LENGTH                             0x1
#define _PORTA_VREF_PLUS_MASK                               0x8
#define _PORTA_nSS1_POSN                                    0x5
#define _PORTA_nSS1_POSITION                                0x5
#define _PORTA_nSS1_SIZE                                    0x1
#define _PORTA_nSS1_LENGTH                                  0x1
#define _PORTA_nSS1_MASK                                    0x20
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
#define _PORTA_PMA6_POSN                                    0x0
#define _PORTA_PMA6_POSITION                                0x0
#define _PORTA_PMA6_SIZE                                    0x1
#define _PORTA_PMA6_LENGTH                                  0x1
#define _PORTA_PMA6_MASK                                    0x1
#define _PORTA_PMA7_POSN                                    0x1
#define _PORTA_PMA7_POSITION                                0x1
#define _PORTA_PMA7_SIZE                                    0x1
#define _PORTA_PMA7_LENGTH                                  0x1
#define _PORTA_PMA7_MASK                                    0x2
#define _PORTA_CVREF_MINUS_POSN                             0x2
#define _PORTA_CVREF_MINUS_POSITION                         0x2
#define _PORTA_CVREF_MINUS_SIZE                             0x1
#define _PORTA_CVREF_MINUS_LENGTH                           0x1
#define _PORTA_CVREF_MINUS_MASK                             0x4
#define _PORTA_C1INB_POSN                                   0x3
#define _PORTA_C1INB_POSITION                               0x3
#define _PORTA_C1INB_SIZE                                   0x1
#define _PORTA_C1INB_LENGTH                                 0x1
#define _PORTA_C1INB_MASK                                   0x8
#define _PORTA_HLVDIN_POSN                                  0x5
#define _PORTA_HLVDIN_POSITION                              0x5
#define _PORTA_HLVDIN_SIZE                                  0x1
#define _PORTA_HLVDIN_LENGTH                                0x1
#define _PORTA_HLVDIN_MASK                                  0x20
#define _PORTA_RP0_POSN                                     0x0
#define _PORTA_RP0_POSITION                                 0x0
#define _PORTA_RP0_SIZE                                     0x1
#define _PORTA_RP0_LENGTH                                   0x1
#define _PORTA_RP0_MASK                                     0x1
#define _PORTA_RP1_POSN                                     0x1
#define _PORTA_RP1_POSITION                                 0x1
#define _PORTA_RP1_SIZE                                     0x1
#define _PORTA_RP1_LENGTH                                   0x1
#define _PORTA_RP1_MASK                                     0x2
#define _PORTA_C2INB_POSN                                   0x2
#define _PORTA_C2INB_POSITION                               0x2
#define _PORTA_C2INB_SIZE                                   0x1
#define _PORTA_C2INB_LENGTH                                 0x1
#define _PORTA_C2INB_MASK                                   0x4
#define _PORTA_RCV_POSN                                     0x5
#define _PORTA_RCV_POSITION                                 0x5
#define _PORTA_RCV_SIZE                                     0x1
#define _PORTA_RCV_LENGTH                                   0x1
#define _PORTA_RCV_MASK                                     0x20
#define _PORTA_ULPWU_POSN                                   0x0
#define _PORTA_ULPWU_POSITION                               0x0
#define _PORTA_ULPWU_SIZE                                   0x1
#define _PORTA_ULPWU_LENGTH                                 0x1
#define _PORTA_ULPWU_MASK                                   0x1
#define _PORTA_RP2_POSN                                     0x5
#define _PORTA_RP2_POSITION                                 0x5
#define _PORTA_RP2_SIZE                                     0x1
#define _PORTA_RP2_LENGTH                                   0x1
#define _PORTA_RP2_MASK                                     0x20
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
        unsigned AN12                   :1;
        unsigned AN10                   :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned PMA1                   :1;
        unsigned PMA0                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned PMPBE                  :1;
        unsigned CTEDG1                 :1;
        unsigned CTEDG2                 :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned RP3                    :1;
        unsigned RTCC                   :1;
        unsigned PMA3                   :1;
        unsigned PMA2                   :1;
        unsigned                        :2;
        unsigned RP9                    :1;
        unsigned RP10                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned RP4                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned REFO                   :1;
        unsigned RP6                    :1;
        unsigned RP7                    :1;
        unsigned RP8                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RP5                    :1;
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
#define _PORTB_PMA1_POSN                                    0x4
#define _PORTB_PMA1_POSITION                                0x4
#define _PORTB_PMA1_SIZE                                    0x1
#define _PORTB_PMA1_LENGTH                                  0x1
#define _PORTB_PMA1_MASK                                    0x10
#define _PORTB_PMA0_POSN                                    0x5
#define _PORTB_PMA0_POSITION                                0x5
#define _PORTB_PMA0_SIZE                                    0x1
#define _PORTB_PMA0_LENGTH                                  0x1
#define _PORTB_PMA0_MASK                                    0x20
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
#define _PORTB_INT0_POSN                                    0x0
#define _PORTB_INT0_POSITION                                0x0
#define _PORTB_INT0_SIZE                                    0x1
#define _PORTB_INT0_LENGTH                                  0x1
#define _PORTB_INT0_MASK                                    0x1
#define _PORTB_PMPBE_POSN                                   0x1
#define _PORTB_PMPBE_POSITION                               0x1
#define _PORTB_PMPBE_SIZE                                   0x1
#define _PORTB_PMPBE_LENGTH                                 0x1
#define _PORTB_PMPBE_MASK                                   0x2
#define _PORTB_CTEDG1_POSN                                  0x2
#define _PORTB_CTEDG1_POSITION                              0x2
#define _PORTB_CTEDG1_SIZE                                  0x1
#define _PORTB_CTEDG1_LENGTH                                0x1
#define _PORTB_CTEDG1_MASK                                  0x4
#define _PORTB_CTEDG2_POSN                                  0x3
#define _PORTB_CTEDG2_POSITION                              0x3
#define _PORTB_CTEDG2_SIZE                                  0x1
#define _PORTB_CTEDG2_LENGTH                                0x1
#define _PORTB_CTEDG2_MASK                                  0x8
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
#define _PORTB_RP3_POSN                                     0x0
#define _PORTB_RP3_POSITION                                 0x0
#define _PORTB_RP3_SIZE                                     0x1
#define _PORTB_RP3_LENGTH                                   0x1
#define _PORTB_RP3_MASK                                     0x1
#define _PORTB_RTCC_POSN                                    0x1
#define _PORTB_RTCC_POSITION                                0x1
#define _PORTB_RTCC_SIZE                                    0x1
#define _PORTB_RTCC_LENGTH                                  0x1
#define _PORTB_RTCC_MASK                                    0x2
#define _PORTB_PMA3_POSN                                    0x2
#define _PORTB_PMA3_POSITION                                0x2
#define _PORTB_PMA3_SIZE                                    0x1
#define _PORTB_PMA3_LENGTH                                  0x1
#define _PORTB_PMA3_MASK                                    0x4
#define _PORTB_PMA2_POSN                                    0x3
#define _PORTB_PMA2_POSITION                                0x3
#define _PORTB_PMA2_SIZE                                    0x1
#define _PORTB_PMA2_LENGTH                                  0x1
#define _PORTB_PMA2_MASK                                    0x8
#define _PORTB_RP9_POSN                                     0x6
#define _PORTB_RP9_POSITION                                 0x6
#define _PORTB_RP9_SIZE                                     0x1
#define _PORTB_RP9_LENGTH                                   0x1
#define _PORTB_RP9_MASK                                     0x40
#define _PORTB_RP10_POSN                                    0x7
#define _PORTB_RP10_POSITION                                0x7
#define _PORTB_RP10_SIZE                                    0x1
#define _PORTB_RP10_LENGTH                                  0x1
#define _PORTB_RP10_MASK                                    0x80
#define _PORTB_RP4_POSN                                     0x1
#define _PORTB_RP4_POSITION                                 0x1
#define _PORTB_RP4_SIZE                                     0x1
#define _PORTB_RP4_LENGTH                                   0x1
#define _PORTB_RP4_MASK                                     0x2
#define _PORTB_REFO_POSN                                    0x2
#define _PORTB_REFO_POSITION                                0x2
#define _PORTB_REFO_SIZE                                    0x1
#define _PORTB_REFO_LENGTH                                  0x1
#define _PORTB_REFO_MASK                                    0x4
#define _PORTB_RP6_POSN                                     0x3
#define _PORTB_RP6_POSITION                                 0x3
#define _PORTB_RP6_SIZE                                     0x1
#define _PORTB_RP6_LENGTH                                   0x1
#define _PORTB_RP6_MASK                                     0x8
#define _PORTB_RP7_POSN                                     0x4
#define _PORTB_RP7_POSITION                                 0x4
#define _PORTB_RP7_SIZE                                     0x1
#define _PORTB_RP7_LENGTH                                   0x1
#define _PORTB_RP7_MASK                                     0x10
#define _PORTB_RP8_POSN                                     0x5
#define _PORTB_RP8_POSITION                                 0x5
#define _PORTB_RP8_SIZE                                     0x1
#define _PORTB_RP8_LENGTH                                   0x1
#define _PORTB_RP8_MASK                                     0x20
#define _PORTB_RP5_POSN                                     0x2
#define _PORTB_RP5_POSITION                                 0x2
#define _PORTB_RP5_SIZE                                     0x1
#define _PORTB_RP5_LENGTH                                   0x1
#define _PORTB_RP5_MASK                                     0x4
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
        unsigned AN11                   :1;
        unsigned SCK1                   :1;
        unsigned                        :2;
        unsigned PMA5                   :1;
        unsigned PMA4                   :1;
    };
    struct {
        unsigned T1CKI                  :1;
        unsigned                        :1;
        unsigned CTPLS                  :1;
        unsigned SCL1                   :1;
        unsigned SDI1                   :1;
        unsigned SDO1                   :1;
        unsigned TX1                    :1;
        unsigned RX1                    :1;
    };
    struct {
        unsigned RP11                   :1;
        unsigned RP12                   :1;
        unsigned RP13                   :1;
        unsigned RP14                   :1;
        unsigned RP15                   :1;
        unsigned RP16                   :1;
        unsigned CK1                    :1;
        unsigned DT1                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned RP17                   :1;
        unsigned RP18                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned CCP2                   :1;
        unsigned PA1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
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
#define _PORTC_AN11_POSN                                    0x2
#define _PORTC_AN11_POSITION                                0x2
#define _PORTC_AN11_SIZE                                    0x1
#define _PORTC_AN11_LENGTH                                  0x1
#define _PORTC_AN11_MASK                                    0x4
#define _PORTC_SCK1_POSN                                    0x3
#define _PORTC_SCK1_POSITION                                0x3
#define _PORTC_SCK1_SIZE                                    0x1
#define _PORTC_SCK1_LENGTH                                  0x1
#define _PORTC_SCK1_MASK                                    0x8
#define _PORTC_PMA5_POSN                                    0x6
#define _PORTC_PMA5_POSITION                                0x6
#define _PORTC_PMA5_SIZE                                    0x1
#define _PORTC_PMA5_LENGTH                                  0x1
#define _PORTC_PMA5_MASK                                    0x40
#define _PORTC_PMA4_POSN                                    0x7
#define _PORTC_PMA4_POSITION                                0x7
#define _PORTC_PMA4_SIZE                                    0x1
#define _PORTC_PMA4_LENGTH                                  0x1
#define _PORTC_PMA4_MASK                                    0x80
#define _PORTC_T1CKI_POSN                                   0x0
#define _PORTC_T1CKI_POSITION                               0x0
#define _PORTC_T1CKI_SIZE                                   0x1
#define _PORTC_T1CKI_LENGTH                                 0x1
#define _PORTC_T1CKI_MASK                                   0x1
#define _PORTC_CTPLS_POSN                                   0x2
#define _PORTC_CTPLS_POSITION                               0x2
#define _PORTC_CTPLS_SIZE                                   0x1
#define _PORTC_CTPLS_LENGTH                                 0x1
#define _PORTC_CTPLS_MASK                                   0x4
#define _PORTC_SCL1_POSN                                    0x3
#define _PORTC_SCL1_POSITION                                0x3
#define _PORTC_SCL1_SIZE                                    0x1
#define _PORTC_SCL1_LENGTH                                  0x1
#define _PORTC_SCL1_MASK                                    0x8
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
#define _PORTC_RP11_POSN                                    0x0
#define _PORTC_RP11_POSITION                                0x0
#define _PORTC_RP11_SIZE                                    0x1
#define _PORTC_RP11_LENGTH                                  0x1
#define _PORTC_RP11_MASK                                    0x1
#define _PORTC_RP12_POSN                                    0x1
#define _PORTC_RP12_POSITION                                0x1
#define _PORTC_RP12_SIZE                                    0x1
#define _PORTC_RP12_LENGTH                                  0x1
#define _PORTC_RP12_MASK                                    0x2
#define _PORTC_RP13_POSN                                    0x2
#define _PORTC_RP13_POSITION                                0x2
#define _PORTC_RP13_SIZE                                    0x1
#define _PORTC_RP13_LENGTH                                  0x1
#define _PORTC_RP13_MASK                                    0x4
#define _PORTC_RP14_POSN                                    0x3
#define _PORTC_RP14_POSITION                                0x3
#define _PORTC_RP14_SIZE                                    0x1
#define _PORTC_RP14_LENGTH                                  0x1
#define _PORTC_RP14_MASK                                    0x8
#define _PORTC_RP15_POSN                                    0x4
#define _PORTC_RP15_POSITION                                0x4
#define _PORTC_RP15_SIZE                                    0x1
#define _PORTC_RP15_LENGTH                                  0x1
#define _PORTC_RP15_MASK                                    0x10
#define _PORTC_RP16_POSN                                    0x5
#define _PORTC_RP16_POSITION                                0x5
#define _PORTC_RP16_SIZE                                    0x1
#define _PORTC_RP16_LENGTH                                  0x1
#define _PORTC_RP16_MASK                                    0x20
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
#define _PORTC_RP17_POSN                                    0x6
#define _PORTC_RP17_POSITION                                0x6
#define _PORTC_RP17_SIZE                                    0x1
#define _PORTC_RP17_LENGTH                                  0x1
#define _PORTC_RP17_MASK                                    0x40
#define _PORTC_RP18_POSN                                    0x7
#define _PORTC_RP18_POSITION                                0x7
#define _PORTC_RP18_SIZE                                    0x1
#define _PORTC_RP18_LENGTH                                  0x1
#define _PORTC_RP18_MASK                                    0x80
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2

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
        unsigned PMD0                   :1;
        unsigned PMD1                   :1;
        unsigned PMD2                   :1;
        unsigned PMD3                   :1;
        unsigned PMD4                   :1;
        unsigned PMD5                   :1;
        unsigned PMD6                   :1;
        unsigned PMD7                   :1;
    };
    struct {
        unsigned SCL2                   :1;
        unsigned SDA2                   :1;
        unsigned RP19                   :1;
        unsigned RP20                   :1;
        unsigned RP21                   :1;
        unsigned RP22                   :1;
        unsigned RP23                   :1;
        unsigned RP24                   :1;
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
#define _PORTD_PMD0_POSN                                    0x0
#define _PORTD_PMD0_POSITION                                0x0
#define _PORTD_PMD0_SIZE                                    0x1
#define _PORTD_PMD0_LENGTH                                  0x1
#define _PORTD_PMD0_MASK                                    0x1
#define _PORTD_PMD1_POSN                                    0x1
#define _PORTD_PMD1_POSITION                                0x1
#define _PORTD_PMD1_SIZE                                    0x1
#define _PORTD_PMD1_LENGTH                                  0x1
#define _PORTD_PMD1_MASK                                    0x2
#define _PORTD_PMD2_POSN                                    0x2
#define _PORTD_PMD2_POSITION                                0x2
#define _PORTD_PMD2_SIZE                                    0x1
#define _PORTD_PMD2_LENGTH                                  0x1
#define _PORTD_PMD2_MASK                                    0x4
#define _PORTD_PMD3_POSN                                    0x3
#define _PORTD_PMD3_POSITION                                0x3
#define _PORTD_PMD3_SIZE                                    0x1
#define _PORTD_PMD3_LENGTH                                  0x1
#define _PORTD_PMD3_MASK                                    0x8
#define _PORTD_PMD4_POSN                                    0x4
#define _PORTD_PMD4_POSITION                                0x4
#define _PORTD_PMD4_SIZE                                    0x1
#define _PORTD_PMD4_LENGTH                                  0x1
#define _PORTD_PMD4_MASK                                    0x10
#define _PORTD_PMD5_POSN                                    0x5
#define _PORTD_PMD5_POSITION                                0x5
#define _PORTD_PMD5_SIZE                                    0x1
#define _PORTD_PMD5_LENGTH                                  0x1
#define _PORTD_PMD5_MASK                                    0x20
#define _PORTD_PMD6_POSN                                    0x6
#define _PORTD_PMD6_POSITION                                0x6
#define _PORTD_PMD6_SIZE                                    0x1
#define _PORTD_PMD6_LENGTH                                  0x1
#define _PORTD_PMD6_MASK                                    0x40
#define _PORTD_PMD7_POSN                                    0x7
#define _PORTD_PMD7_POSITION                                0x7
#define _PORTD_PMD7_SIZE                                    0x1
#define _PORTD_PMD7_LENGTH                                  0x1
#define _PORTD_PMD7_MASK                                    0x80
#define _PORTD_SCL2_POSN                                    0x0
#define _PORTD_SCL2_POSITION                                0x0
#define _PORTD_SCL2_SIZE                                    0x1
#define _PORTD_SCL2_LENGTH                                  0x1
#define _PORTD_SCL2_MASK                                    0x1
#define _PORTD_SDA2_POSN                                    0x1
#define _PORTD_SDA2_POSITION                                0x1
#define _PORTD_SDA2_SIZE                                    0x1
#define _PORTD_SDA2_LENGTH                                  0x1
#define _PORTD_SDA2_MASK                                    0x2
#define _PORTD_RP19_POSN                                    0x2
#define _PORTD_RP19_POSITION                                0x2
#define _PORTD_RP19_SIZE                                    0x1
#define _PORTD_RP19_LENGTH                                  0x1
#define _PORTD_RP19_MASK                                    0x4
#define _PORTD_RP20_POSN                                    0x3
#define _PORTD_RP20_POSITION                                0x3
#define _PORTD_RP20_SIZE                                    0x1
#define _PORTD_RP20_LENGTH                                  0x1
#define _PORTD_RP20_MASK                                    0x8
#define _PORTD_RP21_POSN                                    0x4
#define _PORTD_RP21_POSITION                                0x4
#define _PORTD_RP21_SIZE                                    0x1
#define _PORTD_RP21_LENGTH                                  0x1
#define _PORTD_RP21_MASK                                    0x10
#define _PORTD_RP22_POSN                                    0x5
#define _PORTD_RP22_POSITION                                0x5
#define _PORTD_RP22_SIZE                                    0x1
#define _PORTD_RP22_LENGTH                                  0x1
#define _PORTD_RP22_MASK                                    0x20
#define _PORTD_RP23_POSN                                    0x6
#define _PORTD_RP23_POSITION                                0x6
#define _PORTD_RP23_SIZE                                    0x1
#define _PORTD_RP23_LENGTH                                  0x1
#define _PORTD_RP23_MASK                                    0x40
#define _PORTD_RP24_POSN                                    0x7
#define _PORTD_RP24_POSITION                                0x7
#define _PORTD_RP24_SIZE                                    0x1
#define _PORTD_RP24_LENGTH                                  0x1
#define _PORTD_RP24_MASK                                    0x80
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
        unsigned RE2                    :1;
        unsigned                        :3;
        unsigned REPU                   :1;
        unsigned RDPU                   :1;
    };
    struct {
        unsigned AN5                    :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
    };
    struct {
        unsigned PMPRD                  :1;
        unsigned PMPWR                  :1;
        unsigned PMPCS                  :1;
    };
    struct {
        unsigned PD2                    :1;
        unsigned PC2                    :1;
        unsigned CCP10                  :1;
        unsigned                        :3;
        unsigned CCP6E                  :1;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned RDE                    :1;
        unsigned WRE                    :1;
        unsigned CS                     :1;
        unsigned                        :3;
        unsigned PB1E                   :1;
        unsigned PA2E                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PB2                    :1;
        unsigned                        :3;
        unsigned RE6                    :1;
        unsigned RE7                    :1;
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
#define _PORTE_RE2_POSN                                     0x2
#define _PORTE_RE2_POSITION                                 0x2
#define _PORTE_RE2_SIZE                                     0x1
#define _PORTE_RE2_LENGTH                                   0x1
#define _PORTE_RE2_MASK                                     0x4
#define _PORTE_REPU_POSN                                    0x6
#define _PORTE_REPU_POSITION                                0x6
#define _PORTE_REPU_SIZE                                    0x1
#define _PORTE_REPU_LENGTH                                  0x1
#define _PORTE_REPU_MASK                                    0x40
#define _PORTE_RDPU_POSN                                    0x7
#define _PORTE_RDPU_POSITION                                0x7
#define _PORTE_RDPU_SIZE                                    0x1
#define _PORTE_RDPU_LENGTH                                  0x1
#define _PORTE_RDPU_MASK                                    0x80
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
#define _PORTE_PMPRD_POSN                                   0x0
#define _PORTE_PMPRD_POSITION                               0x0
#define _PORTE_PMPRD_SIZE                                   0x1
#define _PORTE_PMPRD_LENGTH                                 0x1
#define _PORTE_PMPRD_MASK                                   0x1
#define _PORTE_PMPWR_POSN                                   0x1
#define _PORTE_PMPWR_POSITION                               0x1
#define _PORTE_PMPWR_SIZE                                   0x1
#define _PORTE_PMPWR_LENGTH                                 0x1
#define _PORTE_PMPWR_MASK                                   0x2
#define _PORTE_PMPCS_POSN                                   0x2
#define _PORTE_PMPCS_POSITION                               0x2
#define _PORTE_PMPCS_SIZE                                   0x1
#define _PORTE_PMPCS_LENGTH                                 0x1
#define _PORTE_PMPCS_MASK                                   0x4
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
#define _PORTE_CCP10_POSN                                   0x2
#define _PORTE_CCP10_POSITION                               0x2
#define _PORTE_CCP10_SIZE                                   0x1
#define _PORTE_CCP10_LENGTH                                 0x1
#define _PORTE_CCP10_MASK                                   0x4
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
#define _PORTE_CS_POSN                                      0x2
#define _PORTE_CS_POSITION                                  0x2
#define _PORTE_CS_SIZE                                      0x1
#define _PORTE_CS_LENGTH                                    0x1
#define _PORTE_CS_MASK                                      0x4
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
#define _PORTE_PB2_POSN                                     0x2
#define _PORTE_PB2_POSITION                                 0x2
#define _PORTE_PB2_SIZE                                     0x1
#define _PORTE_PB2_LENGTH                                   0x1
#define _PORTE_PB2_MASK                                     0x4
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

// Register: HLVDCON
#define HLVDCON HLVDCON
extern volatile unsigned char           HLVDCON             __at(0xF85);
#ifndef _LIB_BUILD
asm("HLVDCON equ 0F85h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IRVST                  :1;
        unsigned BGVST                  :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
} HLVDCONbits_t;
extern volatile HLVDCONbits_t HLVDCONbits __at(0xF85);
// bitfield macros
#define _HLVDCON_HLVDL_POSN                                 0x0
#define _HLVDCON_HLVDL_POSITION                             0x0
#define _HLVDCON_HLVDL_SIZE                                 0x4
#define _HLVDCON_HLVDL_LENGTH                               0x4
#define _HLVDCON_HLVDL_MASK                                 0xF
#define _HLVDCON_HLVDEN_POSN                                0x4
#define _HLVDCON_HLVDEN_POSITION                            0x4
#define _HLVDCON_HLVDEN_SIZE                                0x1
#define _HLVDCON_HLVDEN_LENGTH                              0x1
#define _HLVDCON_HLVDEN_MASK                                0x10
#define _HLVDCON_IRVST_POSN                                 0x5
#define _HLVDCON_IRVST_POSITION                             0x5
#define _HLVDCON_IRVST_SIZE                                 0x1
#define _HLVDCON_IRVST_LENGTH                               0x1
#define _HLVDCON_IRVST_MASK                                 0x20
#define _HLVDCON_BGVST_POSN                                 0x6
#define _HLVDCON_BGVST_POSITION                             0x6
#define _HLVDCON_BGVST_SIZE                                 0x1
#define _HLVDCON_BGVST_LENGTH                               0x1
#define _HLVDCON_BGVST_MASK                                 0x40
#define _HLVDCON_VDIRMAG_POSN                               0x7
#define _HLVDCON_VDIRMAG_POSITION                           0x7
#define _HLVDCON_VDIRMAG_SIZE                               0x1
#define _HLVDCON_VDIRMAG_LENGTH                             0x1
#define _HLVDCON_VDIRMAG_MASK                               0x80
#define _HLVDCON_HLVDL0_POSN                                0x0
#define _HLVDCON_HLVDL0_POSITION                            0x0
#define _HLVDCON_HLVDL0_SIZE                                0x1
#define _HLVDCON_HLVDL0_LENGTH                              0x1
#define _HLVDCON_HLVDL0_MASK                                0x1
#define _HLVDCON_HLVDL1_POSN                                0x1
#define _HLVDCON_HLVDL1_POSITION                            0x1
#define _HLVDCON_HLVDL1_SIZE                                0x1
#define _HLVDCON_HLVDL1_LENGTH                              0x1
#define _HLVDCON_HLVDL1_MASK                                0x2
#define _HLVDCON_HLVDL2_POSN                                0x2
#define _HLVDCON_HLVDL2_POSITION                            0x2
#define _HLVDCON_HLVDL2_SIZE                                0x1
#define _HLVDCON_HLVDL2_LENGTH                              0x1
#define _HLVDCON_HLVDL2_MASK                                0x4
#define _HLVDCON_HLVDL3_POSN                                0x3
#define _HLVDCON_HLVDL3_POSITION                            0x3
#define _HLVDCON_HLVDL3_SIZE                                0x1
#define _HLVDCON_HLVDL3_LENGTH                              0x1
#define _HLVDCON_HLVDL3_MASK                                0x8

// Register: DMACON2
#define DMACON2 DMACON2
extern volatile unsigned char           DMACON2             __at(0xF86);
#ifndef _LIB_BUILD
asm("DMACON2 equ 0F86h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INTLVL                 :4;
        unsigned DLYCYC                 :4;
    };
    struct {
        unsigned INTLVL0                :1;
        unsigned INTLVL1                :1;
        unsigned INTLVL2                :1;
        unsigned INTLVL3                :1;
        unsigned DLYCYC0                :1;
        unsigned DLYCYC1                :1;
        unsigned DLYCYC2                :1;
        unsigned DLYCYC3                :1;
    };
} DMACON2bits_t;
extern volatile DMACON2bits_t DMACON2bits __at(0xF86);
// bitfield macros
#define _DMACON2_INTLVL_POSN                                0x0
#define _DMACON2_INTLVL_POSITION                            0x0
#define _DMACON2_INTLVL_SIZE                                0x4
#define _DMACON2_INTLVL_LENGTH                              0x4
#define _DMACON2_INTLVL_MASK                                0xF
#define _DMACON2_DLYCYC_POSN                                0x4
#define _DMACON2_DLYCYC_POSITION                            0x4
#define _DMACON2_DLYCYC_SIZE                                0x4
#define _DMACON2_DLYCYC_LENGTH                              0x4
#define _DMACON2_DLYCYC_MASK                                0xF0
#define _DMACON2_INTLVL0_POSN                               0x0
#define _DMACON2_INTLVL0_POSITION                           0x0
#define _DMACON2_INTLVL0_SIZE                               0x1
#define _DMACON2_INTLVL0_LENGTH                             0x1
#define _DMACON2_INTLVL0_MASK                               0x1
#define _DMACON2_INTLVL1_POSN                               0x1
#define _DMACON2_INTLVL1_POSITION                           0x1
#define _DMACON2_INTLVL1_SIZE                               0x1
#define _DMACON2_INTLVL1_LENGTH                             0x1
#define _DMACON2_INTLVL1_MASK                               0x2
#define _DMACON2_INTLVL2_POSN                               0x2
#define _DMACON2_INTLVL2_POSITION                           0x2
#define _DMACON2_INTLVL2_SIZE                               0x1
#define _DMACON2_INTLVL2_LENGTH                             0x1
#define _DMACON2_INTLVL2_MASK                               0x4
#define _DMACON2_INTLVL3_POSN                               0x3
#define _DMACON2_INTLVL3_POSITION                           0x3
#define _DMACON2_INTLVL3_SIZE                               0x1
#define _DMACON2_INTLVL3_LENGTH                             0x1
#define _DMACON2_INTLVL3_MASK                               0x8
#define _DMACON2_DLYCYC0_POSN                               0x4
#define _DMACON2_DLYCYC0_POSITION                           0x4
#define _DMACON2_DLYCYC0_SIZE                               0x1
#define _DMACON2_DLYCYC0_LENGTH                             0x1
#define _DMACON2_DLYCYC0_MASK                               0x10
#define _DMACON2_DLYCYC1_POSN                               0x5
#define _DMACON2_DLYCYC1_POSITION                           0x5
#define _DMACON2_DLYCYC1_SIZE                               0x1
#define _DMACON2_DLYCYC1_LENGTH                             0x1
#define _DMACON2_DLYCYC1_MASK                               0x20
#define _DMACON2_DLYCYC2_POSN                               0x6
#define _DMACON2_DLYCYC2_POSITION                           0x6
#define _DMACON2_DLYCYC2_SIZE                               0x1
#define _DMACON2_DLYCYC2_LENGTH                             0x1
#define _DMACON2_DLYCYC2_MASK                               0x40
#define _DMACON2_DLYCYC3_POSN                               0x7
#define _DMACON2_DLYCYC3_POSITION                           0x7
#define _DMACON2_DLYCYC3_SIZE                               0x1
#define _DMACON2_DLYCYC3_LENGTH                             0x1
#define _DMACON2_DLYCYC3_MASK                               0x80

// Register: DMACON1
#define DMACON1 DMACON1
extern volatile unsigned char           DMACON1             __at(0xF88);
#ifndef _LIB_BUILD
asm("DMACON1 equ 0F88h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMAEN                  :1;
        unsigned DLYINTEN               :1;
        unsigned DUPLEX0                :1;
        unsigned DUPLEX1                :1;
        unsigned RXINC                  :1;
        unsigned TXINC                  :1;
        unsigned SSCON0                 :1;
        unsigned SSCON1                 :1;
    };
} DMACON1bits_t;
extern volatile DMACON1bits_t DMACON1bits __at(0xF88);
// bitfield macros
#define _DMACON1_DMAEN_POSN                                 0x0
#define _DMACON1_DMAEN_POSITION                             0x0
#define _DMACON1_DMAEN_SIZE                                 0x1
#define _DMACON1_DMAEN_LENGTH                               0x1
#define _DMACON1_DMAEN_MASK                                 0x1
#define _DMACON1_DLYINTEN_POSN                              0x1
#define _DMACON1_DLYINTEN_POSITION                          0x1
#define _DMACON1_DLYINTEN_SIZE                              0x1
#define _DMACON1_DLYINTEN_LENGTH                            0x1
#define _DMACON1_DLYINTEN_MASK                              0x2
#define _DMACON1_DUPLEX0_POSN                               0x2
#define _DMACON1_DUPLEX0_POSITION                           0x2
#define _DMACON1_DUPLEX0_SIZE                               0x1
#define _DMACON1_DUPLEX0_LENGTH                             0x1
#define _DMACON1_DUPLEX0_MASK                               0x4
#define _DMACON1_DUPLEX1_POSN                               0x3
#define _DMACON1_DUPLEX1_POSITION                           0x3
#define _DMACON1_DUPLEX1_SIZE                               0x1
#define _DMACON1_DUPLEX1_LENGTH                             0x1
#define _DMACON1_DUPLEX1_MASK                               0x8
#define _DMACON1_RXINC_POSN                                 0x4
#define _DMACON1_RXINC_POSITION                             0x4
#define _DMACON1_RXINC_SIZE                                 0x1
#define _DMACON1_RXINC_LENGTH                               0x1
#define _DMACON1_RXINC_MASK                                 0x10
#define _DMACON1_TXINC_POSN                                 0x5
#define _DMACON1_TXINC_POSITION                             0x5
#define _DMACON1_TXINC_SIZE                                 0x1
#define _DMACON1_TXINC_LENGTH                               0x1
#define _DMACON1_TXINC_MASK                                 0x20
#define _DMACON1_SSCON0_POSN                                0x6
#define _DMACON1_SSCON0_POSITION                            0x6
#define _DMACON1_SSCON0_SIZE                                0x1
#define _DMACON1_SSCON0_LENGTH                              0x1
#define _DMACON1_SSCON0_MASK                                0x40
#define _DMACON1_SSCON1_POSN                                0x7
#define _DMACON1_SSCON1_POSITION                            0x7
#define _DMACON1_SSCON1_SIZE                                0x1
#define _DMACON1_SSCON1_LENGTH                              0x1
#define _DMACON1_SSCON1_MASK                                0x80

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
        unsigned                        :1;
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned                        :1;
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
        unsigned LATE2                  :1;
    };
    struct {
        unsigned LE0                    :1;
        unsigned LE1                    :1;
        unsigned LE2                    :1;
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
#define _LATE_LATE2_POSN                                    0x2
#define _LATE_LATE2_POSITION                                0x2
#define _LATE_LATE2_SIZE                                    0x1
#define _LATE_LATE2_LENGTH                                  0x1
#define _LATE_LATE2_MASK                                    0x4
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
#define _LATE_LE2_POSN                                      0x2
#define _LATE_LE2_POSITION                                  0x2
#define _LATE_LE2_SIZE                                      0x1
#define _LATE_LE2_LENGTH                                    0x1
#define _LATE_LE2_MASK                                      0x4

// Register: ALRMVALL
#define ALRMVALL ALRMVALL
extern volatile unsigned char           ALRMVALL            __at(0xF8E);
#ifndef _LIB_BUILD
asm("ALRMVALL equ 0F8Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ALRMVALL               :8;
    };
} ALRMVALLbits_t;
extern volatile ALRMVALLbits_t ALRMVALLbits __at(0xF8E);
// bitfield macros
#define _ALRMVALL_ALRMVALL_POSN                             0x0
#define _ALRMVALL_ALRMVALL_POSITION                         0x0
#define _ALRMVALL_ALRMVALL_SIZE                             0x8
#define _ALRMVALL_ALRMVALL_LENGTH                           0x8
#define _ALRMVALL_ALRMVALL_MASK                             0xFF

// Register: ALRMVALH
#define ALRMVALH ALRMVALH
extern volatile unsigned char           ALRMVALH            __at(0xF8F);
#ifndef _LIB_BUILD
asm("ALRMVALH equ 0F8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ALRMVALH               :8;
    };
} ALRMVALHbits_t;
extern volatile ALRMVALHbits_t ALRMVALHbits __at(0xF8F);
// bitfield macros
#define _ALRMVALH_ALRMVALH_POSN                             0x0
#define _ALRMVALH_ALRMVALH_POSITION                         0x0
#define _ALRMVALH_ALRMVALH_SIZE                             0x8
#define _ALRMVALH_ALRMVALH_LENGTH                           0x8
#define _ALRMVALH_ALRMVALH_MASK                             0xFF

// Register: ALRMRPT
#define ALRMRPT ALRMRPT
extern volatile unsigned char           ALRMRPT             __at(0xF90);
#ifndef _LIB_BUILD
asm("ALRMRPT equ 0F90h");
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
extern volatile ALRMRPTbits_t ALRMRPTbits __at(0xF90);
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
extern volatile unsigned char           ALRMCFG             __at(0xF91);
#ifndef _LIB_BUILD
asm("ALRMCFG equ 0F91h");
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
extern volatile ALRMCFGbits_t ALRMCFGbits __at(0xF91);
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
        unsigned                        :1;
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
        unsigned TRISE2                 :1;
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
#define _TRISE_TRISE2_POSN                                  0x2
#define _TRISE_TRISE2_POSITION                              0x2
#define _TRISE_TRISE2_SIZE                                  0x1
#define _TRISE_TRISE2_LENGTH                                0x1
#define _TRISE_TRISE2_MASK                                  0x4

// Register: T3GCON
#define T3GCON T3GCON
extern volatile unsigned char           T3GCON              __at(0xF97);
#ifndef _LIB_BUILD
asm("T3GCON equ 0F97h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T3GSS0                 :1;
        unsigned T3GSS1                 :1;
        unsigned T3GVAL                 :1;
        unsigned T3GGO_T3DONE           :1;
        unsigned T3GSPM                 :1;
        unsigned T3GTM                  :1;
        unsigned T3GPOL                 :1;
        unsigned TMR3GE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3GGO                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3DONE                 :1;
    };
} T3GCONbits_t;
extern volatile T3GCONbits_t T3GCONbits __at(0xF97);
// bitfield macros
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
#define _T3GCON_T3GVAL_POSN                                 0x2
#define _T3GCON_T3GVAL_POSITION                             0x2
#define _T3GCON_T3GVAL_SIZE                                 0x1
#define _T3GCON_T3GVAL_LENGTH                               0x1
#define _T3GCON_T3GVAL_MASK                                 0x4
#define _T3GCON_T3GGO_T3DONE_POSN                           0x3
#define _T3GCON_T3GGO_T3DONE_POSITION                       0x3
#define _T3GCON_T3GGO_T3DONE_SIZE                           0x1
#define _T3GCON_T3GGO_T3DONE_LENGTH                         0x1
#define _T3GCON_T3GGO_T3DONE_MASK                           0x8
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
#define _T3GCON_T3GGO_POSN                                  0x3
#define _T3GCON_T3GGO_POSITION                              0x3
#define _T3GCON_T3GGO_SIZE                                  0x1
#define _T3GCON_T3GGO_LENGTH                                0x1
#define _T3GCON_T3GGO_MASK                                  0x8
#define _T3GCON_T3DONE_POSN                                 0x3
#define _T3GCON_T3DONE_POSITION                             0x3
#define _T3GCON_T3DONE_SIZE                                 0x1
#define _T3GCON_T3DONE_LENGTH                               0x1
#define _T3GCON_T3DONE_MASK                                 0x8

// Register: RTCVALL
#define RTCVALL RTCVALL
extern volatile unsigned char           RTCVALL             __at(0xF98);
#ifndef _LIB_BUILD
asm("RTCVALL equ 0F98h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RTCVALL                :8;
    };
} RTCVALLbits_t;
extern volatile RTCVALLbits_t RTCVALLbits __at(0xF98);
// bitfield macros
#define _RTCVALL_RTCVALL_POSN                               0x0
#define _RTCVALL_RTCVALL_POSITION                           0x0
#define _RTCVALL_RTCVALL_SIZE                               0x8
#define _RTCVALL_RTCVALL_LENGTH                             0x8
#define _RTCVALL_RTCVALL_MASK                               0xFF

// Register: RTCVALH
#define RTCVALH RTCVALH
extern volatile unsigned char           RTCVALH             __at(0xF99);
#ifndef _LIB_BUILD
asm("RTCVALH equ 0F99h");
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
extern volatile RTCVALHbits_t RTCVALHbits __at(0xF99);
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

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0xF9A);
#ifndef _LIB_BUILD
asm("T1GCON equ 0F9Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GVAL                 :1;
        unsigned T1GGO_T1DONE           :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1GGO                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1DONE                 :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0xF9A);
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
#define _T1GCON_T1GGO_T1DONE_POSN                           0x3
#define _T1GCON_T1GGO_T1DONE_POSITION                       0x3
#define _T1GCON_T1GGO_T1DONE_SIZE                           0x1
#define _T1GCON_T1GGO_T1DONE_LENGTH                         0x1
#define _T1GCON_T1GGO_T1DONE_MASK                           0x8
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
#define _T1GCON_T1GGO_POSN                                  0x3
#define _T1GCON_T1GGO_POSITION                              0x3
#define _T1GCON_T1GGO_SIZE                                  0x1
#define _T1GCON_T1GGO_LENGTH                                0x1
#define _T1GCON_T1GGO_MASK                                  0x8
#define _T1GCON_T1DONE_POSN                                 0x3
#define _T1GCON_T1DONE_POSITION                             0x3
#define _T1GCON_T1DONE_SIZE                                 0x1
#define _T1GCON_T1DONE_LENGTH                               0x1
#define _T1GCON_T1DONE_MASK                                 0x8

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

// Register: RCSTA2
#define RCSTA2 RCSTA2
extern volatile unsigned char           RCSTA2              __at(0xF9C);
#ifndef _LIB_BUILD
asm("RCSTA2 equ 0F9Ch");
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
extern volatile RCSTA2bits_t RCSTA2bits __at(0xF9C);
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
        unsigned SSP1IE                 :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned ADIE                   :1;
        unsigned PMPIE                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIE                  :1;
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
#define _PIE1_PMPIE_POSN                                    0x7
#define _PIE1_PMPIE_POSITION                                0x7
#define _PIE1_PMPIE_SIZE                                    0x1
#define _PIE1_PMPIE_LENGTH                                  0x1
#define _PIE1_PMPIE_MASK                                    0x80
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
#define _PIE1_PSPIE_POSN                                    0x7
#define _PIE1_PSPIE_POSITION                                0x7
#define _PIE1_PSPIE_SIZE                                    0x1
#define _PIE1_PSPIE_LENGTH                                  0x1
#define _PIE1_PSPIE_MASK                                    0x80

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
        unsigned SSP1IF                 :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned ADIF                   :1;
        unsigned PMPIF                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIF                  :1;
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
#define _PIR1_PMPIF_POSN                                    0x7
#define _PIR1_PMPIF_POSITION                                0x7
#define _PIR1_PMPIF_SIZE                                    0x1
#define _PIR1_PMPIF_LENGTH                                  0x1
#define _PIR1_PMPIF_MASK                                    0x80
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
#define _PIR1_PSPIF_POSN                                    0x7
#define _PIR1_PSPIF_POSITION                                0x7
#define _PIR1_PSPIF_SIZE                                    0x1
#define _PIR1_PSPIF_LENGTH                                  0x1
#define _PIR1_PSPIF_MASK                                    0x80

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
        unsigned SSP1IP                 :1;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
        unsigned ADIP                   :1;
        unsigned PMPIP                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIP                  :1;
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
#define _IPR1_SSP1IP_POSN                                   0x3
#define _IPR1_SSP1IP_POSITION                               0x3
#define _IPR1_SSP1IP_SIZE                                   0x1
#define _IPR1_SSP1IP_LENGTH                                 0x1
#define _IPR1_SSP1IP_MASK                                   0x8
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
#define _IPR1_PMPIP_POSN                                    0x7
#define _IPR1_PMPIP_POSITION                                0x7
#define _IPR1_PMPIP_SIZE                                    0x1
#define _IPR1_PMPIP_LENGTH                                  0x1
#define _IPR1_PMPIP_MASK                                    0x80
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
#define _IPR1_PSPIP_POSN                                    0x7
#define _IPR1_PSPIP_POSITION                                0x7
#define _IPR1_PSPIP_SIZE                                    0x1
#define _IPR1_PSPIP_LENGTH                                  0x1
#define _IPR1_PSPIP_MASK                                    0x80

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
        unsigned TMR3IE                 :1;
        unsigned LVDIE                  :1;
        unsigned BCL1IE                 :1;
        unsigned                        :1;
        unsigned CM1IE                  :1;
        unsigned CM2IE                  :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIE                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
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
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_CM1IE_POSN                                    0x5
#define _PIE2_CM1IE_POSITION                                0x5
#define _PIE2_CM1IE_SIZE                                    0x1
#define _PIE2_CM1IE_LENGTH                                  0x1
#define _PIE2_CM1IE_MASK                                    0x20
#define _PIE2_CM2IE_POSN                                    0x6
#define _PIE2_CM2IE_POSITION                                0x6
#define _PIE2_CM2IE_SIZE                                    0x1
#define _PIE2_CM2IE_LENGTH                                  0x1
#define _PIE2_CM2IE_MASK                                    0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
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
        unsigned TMR3IF                 :1;
        unsigned LVDIF                  :1;
        unsigned BCL1IF                 :1;
        unsigned                        :1;
        unsigned CM1IF                  :1;
        unsigned CM2IF                  :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIF                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
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
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_CM1IF_POSN                                    0x5
#define _PIR2_CM1IF_POSITION                                0x5
#define _PIR2_CM1IF_SIZE                                    0x1
#define _PIR2_CM1IF_LENGTH                                  0x1
#define _PIR2_CM1IF_MASK                                    0x20
#define _PIR2_CM2IF_POSN                                    0x6
#define _PIR2_CM2IF_POSITION                                0x6
#define _PIR2_CM2IF_SIZE                                    0x1
#define _PIR2_CM2IF_LENGTH                                  0x1
#define _PIR2_CM2IF_MASK                                    0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
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
        unsigned TMR3IP                 :1;
        unsigned LVDIP                  :1;
        unsigned BCL1IP                 :1;
        unsigned                        :1;
        unsigned CM1IP                  :1;
        unsigned CM2IP                  :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned BCLIP                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIP                   :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_CCP2IP_POSN                                   0x0
#define _IPR2_CCP2IP_POSITION                               0x0
#define _IPR2_CCP2IP_SIZE                                   0x1
#define _IPR2_CCP2IP_LENGTH                                 0x1
#define _IPR2_CCP2IP_MASK                                   0x1
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
#define _IPR2_BCL1IP_POSN                                   0x3
#define _IPR2_BCL1IP_POSITION                               0x3
#define _IPR2_BCL1IP_SIZE                                   0x1
#define _IPR2_BCL1IP_LENGTH                                 0x1
#define _IPR2_BCL1IP_MASK                                   0x8
#define _IPR2_CM1IP_POSN                                    0x5
#define _IPR2_CM1IP_POSITION                                0x5
#define _IPR2_CM1IP_SIZE                                    0x1
#define _IPR2_CM1IP_LENGTH                                  0x1
#define _IPR2_CM1IP_MASK                                    0x20
#define _IPR2_CM2IP_POSN                                    0x6
#define _IPR2_CM2IP_POSITION                                0x6
#define _IPR2_CM2IP_SIZE                                    0x1
#define _IPR2_CM2IP_LENGTH                                  0x1
#define _IPR2_CM2IP_MASK                                    0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
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
        unsigned TMR3GIE                :1;
        unsigned CTMUIE                 :1;
        unsigned TMR4IE                 :1;
        unsigned TX2IE                  :1;
        unsigned RC2IE                  :1;
        unsigned BCL2IE                 :1;
        unsigned SSP2IE                 :1;
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
#define _PIE3_TMR3GIE_POSN                                  0x1
#define _PIE3_TMR3GIE_POSITION                              0x1
#define _PIE3_TMR3GIE_SIZE                                  0x1
#define _PIE3_TMR3GIE_LENGTH                                0x1
#define _PIE3_TMR3GIE_MASK                                  0x2
#define _PIE3_CTMUIE_POSN                                   0x2
#define _PIE3_CTMUIE_POSITION                               0x2
#define _PIE3_CTMUIE_SIZE                                   0x1
#define _PIE3_CTMUIE_LENGTH                                 0x1
#define _PIE3_CTMUIE_MASK                                   0x4
#define _PIE3_TMR4IE_POSN                                   0x3
#define _PIE3_TMR4IE_POSITION                               0x3
#define _PIE3_TMR4IE_SIZE                                   0x1
#define _PIE3_TMR4IE_LENGTH                                 0x1
#define _PIE3_TMR4IE_MASK                                   0x8
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
#define _PIE3_BCL2IE_POSN                                   0x6
#define _PIE3_BCL2IE_POSITION                               0x6
#define _PIE3_BCL2IE_SIZE                                   0x1
#define _PIE3_BCL2IE_LENGTH                                 0x1
#define _PIE3_BCL2IE_MASK                                   0x40
#define _PIE3_SSP2IE_POSN                                   0x7
#define _PIE3_SSP2IE_POSITION                               0x7
#define _PIE3_SSP2IE_SIZE                                   0x1
#define _PIE3_SSP2IE_LENGTH                                 0x1
#define _PIE3_SSP2IE_MASK                                   0x80
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
        unsigned TMR3GIF                :1;
        unsigned CTMUIF                 :1;
        unsigned TMR4IF                 :1;
        unsigned TX2IF                  :1;
        unsigned RC2IF                  :1;
        unsigned BCL2IF                 :1;
        unsigned SSP2IF                 :1;
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
#define _PIR3_TMR3GIF_POSN                                  0x1
#define _PIR3_TMR3GIF_POSITION                              0x1
#define _PIR3_TMR3GIF_SIZE                                  0x1
#define _PIR3_TMR3GIF_LENGTH                                0x1
#define _PIR3_TMR3GIF_MASK                                  0x2
#define _PIR3_CTMUIF_POSN                                   0x2
#define _PIR3_CTMUIF_POSITION                               0x2
#define _PIR3_CTMUIF_SIZE                                   0x1
#define _PIR3_CTMUIF_LENGTH                                 0x1
#define _PIR3_CTMUIF_MASK                                   0x4
#define _PIR3_TMR4IF_POSN                                   0x3
#define _PIR3_TMR4IF_POSITION                               0x3
#define _PIR3_TMR4IF_SIZE                                   0x1
#define _PIR3_TMR4IF_LENGTH                                 0x1
#define _PIR3_TMR4IF_MASK                                   0x8
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
#define _PIR3_BCL2IF_POSN                                   0x6
#define _PIR3_BCL2IF_POSITION                               0x6
#define _PIR3_BCL2IF_SIZE                                   0x1
#define _PIR3_BCL2IF_LENGTH                                 0x1
#define _PIR3_BCL2IF_MASK                                   0x40
#define _PIR3_SSP2IF_POSN                                   0x7
#define _PIR3_SSP2IF_POSITION                               0x7
#define _PIR3_SSP2IF_SIZE                                   0x1
#define _PIR3_SSP2IF_LENGTH                                 0x1
#define _PIR3_SSP2IF_MASK                                   0x80
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
        unsigned TMR3GIP                :1;
        unsigned CTMUIP                 :1;
        unsigned TMR4IP                 :1;
        unsigned TX2IP                  :1;
        unsigned RC2IP                  :1;
        unsigned BCL2IP                 :1;
        unsigned SSP2IP                 :1;
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
#define _IPR3_TMR3GIP_POSN                                  0x1
#define _IPR3_TMR3GIP_POSITION                              0x1
#define _IPR3_TMR3GIP_SIZE                                  0x1
#define _IPR3_TMR3GIP_LENGTH                                0x1
#define _IPR3_TMR3GIP_MASK                                  0x2
#define _IPR3_CTMUIP_POSN                                   0x2
#define _IPR3_CTMUIP_POSITION                               0x2
#define _IPR3_CTMUIP_SIZE                                   0x1
#define _IPR3_CTMUIP_LENGTH                                 0x1
#define _IPR3_CTMUIP_MASK                                   0x4
#define _IPR3_TMR4IP_POSN                                   0x3
#define _IPR3_TMR4IP_POSITION                               0x3
#define _IPR3_TMR4IP_SIZE                                   0x1
#define _IPR3_TMR4IP_LENGTH                                 0x1
#define _IPR3_TMR4IP_MASK                                   0x8
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
#define _IPR3_BCL2IP_POSN                                   0x6
#define _IPR3_BCL2IP_POSITION                               0x6
#define _IPR3_BCL2IP_SIZE                                   0x1
#define _IPR3_BCL2IP_LENGTH                                 0x1
#define _IPR3_BCL2IP_MASK                                   0x40
#define _IPR3_SSP2IP_POSN                                   0x7
#define _IPR3_SSP2IP_POSITION                               0x7
#define _IPR3_SSP2IP_SIZE                                   0x1
#define _IPR3_SSP2IP_LENGTH                                 0x1
#define _IPR3_SSP2IP_MASK                                   0x80
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

// Register: TXSTA2
#define TXSTA2 TXSTA2
extern volatile unsigned char           TXSTA2              __at(0xFA8);
#ifndef _LIB_BUILD
asm("TXSTA2 equ 0FA8h");
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
extern volatile TXSTA2bits_t TXSTA2bits __at(0xFA8);
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
#define _TXSTA2_SENDB_POSN                                  0x3
#define _TXSTA2_SENDB_POSITION                              0x3
#define _TXSTA2_SENDB_SIZE                                  0x1
#define _TXSTA2_SENDB_LENGTH                                0x1
#define _TXSTA2_SENDB_MASK                                  0x8
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
extern volatile unsigned char           TXREG2              __at(0xFA9);
#ifndef _LIB_BUILD
asm("TXREG2 equ 0FA9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG2                 :8;
    };
} TXREG2bits_t;
extern volatile TXREG2bits_t TXREG2bits __at(0xFA9);
// bitfield macros
#define _TXREG2_TXREG2_POSN                                 0x0
#define _TXREG2_TXREG2_POSITION                             0x0
#define _TXREG2_TXREG2_SIZE                                 0x8
#define _TXREG2_TXREG2_LENGTH                               0x8
#define _TXREG2_TXREG2_MASK                                 0xFF

// Register: RCREG2
#define RCREG2 RCREG2
extern volatile unsigned char           RCREG2              __at(0xFAA);
#ifndef _LIB_BUILD
asm("RCREG2 equ 0FAAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG2                 :8;
    };
} RCREG2bits_t;
extern volatile RCREG2bits_t RCREG2bits __at(0xFAA);
// bitfield macros
#define _RCREG2_RCREG2_POSN                                 0x0
#define _RCREG2_RCREG2_POSITION                             0x0
#define _RCREG2_RCREG2_SIZE                                 0x8
#define _RCREG2_RCREG2_LENGTH                               0x8
#define _RCREG2_RCREG2_MASK                                 0xFF

// Register: SPBRG2
#define SPBRG2 SPBRG2
extern volatile unsigned char           SPBRG2              __at(0xFAB);
#ifndef _LIB_BUILD
asm("SPBRG2 equ 0FABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRG2                 :8;
    };
} SPBRG2bits_t;
extern volatile SPBRG2bits_t SPBRG2bits __at(0xFAB);
// bitfield macros
#define _SPBRG2_SPBRG2_POSN                                 0x0
#define _SPBRG2_SPBRG2_POSITION                             0x0
#define _SPBRG2_SPBRG2_SIZE                                 0x8
#define _SPBRG2_SPBRG2_LENGTH                               0x8
#define _SPBRG2_SPBRG2_MASK                                 0xFF

// Register: RCSTA1
#define RCSTA1 RCSTA1
extern volatile unsigned char           RCSTA1              __at(0xFAC);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FACh");
#endif
// aliases
extern volatile unsigned char           RCSTA               __at(0xFAC);
#ifndef _LIB_BUILD
asm("RCSTA equ 0FACh");
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
extern volatile RCSTA1bits_t RCSTA1bits __at(0xFAC);
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
extern volatile RCSTAbits_t RCSTAbits __at(0xFAC);
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
extern volatile unsigned char           TXSTA1              __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXSTA               __at(0xFAD);
#ifndef _LIB_BUILD
asm("TXSTA equ 0FADh");
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
extern volatile TXSTA1bits_t TXSTA1bits __at(0xFAD);
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
extern volatile TXSTAbits_t TXSTAbits __at(0xFAD);
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
extern volatile unsigned char           TXREG1              __at(0xFAE);
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           TXREG               __at(0xFAE);
#ifndef _LIB_BUILD
asm("TXREG equ 0FAEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG1                 :8;
    };
} TXREG1bits_t;
extern volatile TXREG1bits_t TXREG1bits __at(0xFAE);
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
extern volatile TXREGbits_t TXREGbits __at(0xFAE);
// bitfield macros
#define _TXREG_TXREG1_POSN                                  0x0
#define _TXREG_TXREG1_POSITION                              0x0
#define _TXREG_TXREG1_SIZE                                  0x8
#define _TXREG_TXREG1_LENGTH                                0x8
#define _TXREG_TXREG1_MASK                                  0xFF

// Register: RCREG1
#define RCREG1 RCREG1
extern volatile unsigned char           RCREG1              __at(0xFAF);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0xFAF);
#ifndef _LIB_BUILD
asm("RCREG equ 0FAFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG1                 :8;
    };
} RCREG1bits_t;
extern volatile RCREG1bits_t RCREG1bits __at(0xFAF);
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
extern volatile RCREGbits_t RCREGbits __at(0xFAF);
// bitfield macros
#define _RCREG_RCREG1_POSN                                  0x0
#define _RCREG_RCREG1_POSITION                              0x0
#define _RCREG_RCREG1_SIZE                                  0x8
#define _RCREG_RCREG1_LENGTH                                0x8
#define _RCREG_RCREG1_MASK                                  0xFF

// Register: SPBRG1
#define SPBRG1 SPBRG1
extern volatile unsigned char           SPBRG1              __at(0xFB0);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FB0h");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0xFB0);
#ifndef _LIB_BUILD
asm("SPBRG equ 0FB0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRG1                 :8;
    };
} SPBRG1bits_t;
extern volatile SPBRG1bits_t SPBRG1bits __at(0xFB0);
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
extern volatile SPBRGbits_t SPBRGbits __at(0xFB0);
// bitfield macros
#define _SPBRG_SPBRG1_POSN                                  0x0
#define _SPBRG_SPBRG1_POSITION                              0x0
#define _SPBRG_SPBRG1_SIZE                                  0x8
#define _SPBRG_SPBRG1_LENGTH                                0x8
#define _SPBRG_SPBRG1_MASK                                  0xFF

// Register: CTMUICON
#define CTMUICON CTMUICON
extern volatile unsigned char           CTMUICON            __at(0xFB1);
#ifndef _LIB_BUILD
asm("CTMUICON equ 0FB1h");
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
extern volatile CTMUICONbits_t CTMUICONbits __at(0xFB1);
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
extern volatile unsigned char           CTMUCONL            __at(0xFB2);
#ifndef _LIB_BUILD
asm("CTMUCONL equ 0FB2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EDG1STAT               :1;
        unsigned EDG2STAT               :1;
        unsigned EDG1SEL                :2;
        unsigned EDG1POL                :1;
        unsigned EDG2SEL                :2;
        unsigned EDG2POL                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EDG1SEL0               :1;
        unsigned EDG1SEL1               :1;
        unsigned                        :1;
        unsigned EDG2SEL0               :1;
        unsigned EDG2SEL1               :1;
    };
} CTMUCONLbits_t;
extern volatile CTMUCONLbits_t CTMUCONLbits __at(0xFB2);
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
#define _CTMUCONL_EDG1SEL_POSN                              0x2
#define _CTMUCONL_EDG1SEL_POSITION                          0x2
#define _CTMUCONL_EDG1SEL_SIZE                              0x2
#define _CTMUCONL_EDG1SEL_LENGTH                            0x2
#define _CTMUCONL_EDG1SEL_MASK                              0xC
#define _CTMUCONL_EDG1POL_POSN                              0x4
#define _CTMUCONL_EDG1POL_POSITION                          0x4
#define _CTMUCONL_EDG1POL_SIZE                              0x1
#define _CTMUCONL_EDG1POL_LENGTH                            0x1
#define _CTMUCONL_EDG1POL_MASK                              0x10
#define _CTMUCONL_EDG2SEL_POSN                              0x5
#define _CTMUCONL_EDG2SEL_POSITION                          0x5
#define _CTMUCONL_EDG2SEL_SIZE                              0x2
#define _CTMUCONL_EDG2SEL_LENGTH                            0x2
#define _CTMUCONL_EDG2SEL_MASK                              0x60
#define _CTMUCONL_EDG2POL_POSN                              0x7
#define _CTMUCONL_EDG2POL_POSITION                          0x7
#define _CTMUCONL_EDG2POL_SIZE                              0x1
#define _CTMUCONL_EDG2POL_LENGTH                            0x1
#define _CTMUCONL_EDG2POL_MASK                              0x80
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

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
extern volatile unsigned char           CTMUCONH            __at(0xFB3);
#ifndef _LIB_BUILD
asm("CTMUCONH equ 0FB3h");
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
extern volatile CTMUCONHbits_t CTMUCONHbits __at(0xFB3);
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

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xFB4);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0FB4h");
#endif
// aliases
extern volatile unsigned char           ECCP2CON            __at(0xFB4);
#ifndef _LIB_BUILD
asm("ECCP2CON equ 0FB4h");
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
    struct {
        unsigned                        :4;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xFB4);
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
// alias bitfield definitions
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
    struct {
        unsigned                        :4;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} ECCP2CONbits_t;
extern volatile ECCP2CONbits_t ECCP2CONbits __at(0xFB4);
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
#define _ECCP2CON_P2M_POSN                                  0x6
#define _ECCP2CON_P2M_POSITION                              0x6
#define _ECCP2CON_P2M_SIZE                                  0x2
#define _ECCP2CON_P2M_LENGTH                                0x2
#define _ECCP2CON_P2M_MASK                                  0xC0
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
#define _ECCP2CON_P2M0_POSN                                 0x6
#define _ECCP2CON_P2M0_POSITION                             0x6
#define _ECCP2CON_P2M0_SIZE                                 0x1
#define _ECCP2CON_P2M0_LENGTH                               0x1
#define _ECCP2CON_P2M0_MASK                                 0x40
#define _ECCP2CON_P2M1_POSN                                 0x7
#define _ECCP2CON_P2M1_POSITION                             0x7
#define _ECCP2CON_P2M1_SIZE                                 0x1
#define _ECCP2CON_P2M1_LENGTH                               0x1
#define _ECCP2CON_P2M1_MASK                                 0x80
#define _ECCP2CON_CCP2Y_POSN                                0x4
#define _ECCP2CON_CCP2Y_POSITION                            0x4
#define _ECCP2CON_CCP2Y_SIZE                                0x1
#define _ECCP2CON_CCP2Y_LENGTH                              0x1
#define _ECCP2CON_CCP2Y_MASK                                0x10
#define _ECCP2CON_CCP2X_POSN                                0x5
#define _ECCP2CON_CCP2X_POSITION                            0x5
#define _ECCP2CON_CCP2X_SIZE                                0x1
#define _ECCP2CON_CCP2X_LENGTH                              0x1
#define _ECCP2CON_CCP2X_MASK                                0x20

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xFB5);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0FB5h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xFB5);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0xFB5);
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xFB6);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0xFB6);
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

// Register: ECCP2DEL
#define ECCP2DEL ECCP2DEL
extern volatile unsigned char           ECCP2DEL            __at(0xFB7);
#ifndef _LIB_BUILD
asm("ECCP2DEL equ 0FB7h");
#endif
// aliases
extern volatile unsigned char           PWM2CON             __at(0xFB7);
#ifndef _LIB_BUILD
asm("PWM2CON equ 0FB7h");
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
    };
} ECCP2DELbits_t;
extern volatile ECCP2DELbits_t ECCP2DELbits __at(0xFB7);
// bitfield macros
#define _ECCP2DEL_P2DC_POSN                                 0x0
#define _ECCP2DEL_P2DC_POSITION                             0x0
#define _ECCP2DEL_P2DC_SIZE                                 0x7
#define _ECCP2DEL_P2DC_LENGTH                               0x7
#define _ECCP2DEL_P2DC_MASK                                 0x7F
#define _ECCP2DEL_P2RSEN_POSN                               0x7
#define _ECCP2DEL_P2RSEN_POSITION                           0x7
#define _ECCP2DEL_P2RSEN_SIZE                               0x1
#define _ECCP2DEL_P2RSEN_LENGTH                             0x1
#define _ECCP2DEL_P2RSEN_MASK                               0x80
#define _ECCP2DEL_P2DC0_POSN                                0x0
#define _ECCP2DEL_P2DC0_POSITION                            0x0
#define _ECCP2DEL_P2DC0_SIZE                                0x1
#define _ECCP2DEL_P2DC0_LENGTH                              0x1
#define _ECCP2DEL_P2DC0_MASK                                0x1
#define _ECCP2DEL_P2DC1_POSN                                0x1
#define _ECCP2DEL_P2DC1_POSITION                            0x1
#define _ECCP2DEL_P2DC1_SIZE                                0x1
#define _ECCP2DEL_P2DC1_LENGTH                              0x1
#define _ECCP2DEL_P2DC1_MASK                                0x2
#define _ECCP2DEL_P2DC2_POSN                                0x2
#define _ECCP2DEL_P2DC2_POSITION                            0x2
#define _ECCP2DEL_P2DC2_SIZE                                0x1
#define _ECCP2DEL_P2DC2_LENGTH                              0x1
#define _ECCP2DEL_P2DC2_MASK                                0x4
#define _ECCP2DEL_P2DC3_POSN                                0x3
#define _ECCP2DEL_P2DC3_POSITION                            0x3
#define _ECCP2DEL_P2DC3_SIZE                                0x1
#define _ECCP2DEL_P2DC3_LENGTH                              0x1
#define _ECCP2DEL_P2DC3_MASK                                0x8
#define _ECCP2DEL_P2DC4_POSN                                0x4
#define _ECCP2DEL_P2DC4_POSITION                            0x4
#define _ECCP2DEL_P2DC4_SIZE                                0x1
#define _ECCP2DEL_P2DC4_LENGTH                              0x1
#define _ECCP2DEL_P2DC4_MASK                                0x10
#define _ECCP2DEL_P2DC5_POSN                                0x5
#define _ECCP2DEL_P2DC5_POSITION                            0x5
#define _ECCP2DEL_P2DC5_SIZE                                0x1
#define _ECCP2DEL_P2DC5_LENGTH                              0x1
#define _ECCP2DEL_P2DC5_MASK                                0x20
#define _ECCP2DEL_P2DC6_POSN                                0x6
#define _ECCP2DEL_P2DC6_POSITION                            0x6
#define _ECCP2DEL_P2DC6_SIZE                                0x1
#define _ECCP2DEL_P2DC6_LENGTH                              0x1
#define _ECCP2DEL_P2DC6_MASK                                0x40
// alias bitfield definitions
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
    };
} PWM2CONbits_t;
extern volatile PWM2CONbits_t PWM2CONbits __at(0xFB7);
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

// Register: ECCP2AS
#define ECCP2AS ECCP2AS
extern volatile unsigned char           ECCP2AS             __at(0xFB8);
#ifndef _LIB_BUILD
asm("ECCP2AS equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSS2BD                 :2;
        unsigned PSS2AC                 :2;
        unsigned ECCP2AS                :3;
        unsigned ECCP2ASE               :1;
    };
    struct {
        unsigned PSS2BD0                :1;
        unsigned PSS2BD1                :1;
        unsigned PSS2AC0                :1;
        unsigned PSS2AC1                :1;
        unsigned ECCP2AS0               :1;
        unsigned ECCP2AS1               :1;
        unsigned ECCP2AS2               :1;
    };
} ECCP2ASbits_t;
extern volatile ECCP2ASbits_t ECCP2ASbits __at(0xFB8);
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
#define _ECCP2AS_ECCP2AS_POSN                               0x4
#define _ECCP2AS_ECCP2AS_POSITION                           0x4
#define _ECCP2AS_ECCP2AS_SIZE                               0x3
#define _ECCP2AS_ECCP2AS_LENGTH                             0x3
#define _ECCP2AS_ECCP2AS_MASK                               0x70
#define _ECCP2AS_ECCP2ASE_POSN                              0x7
#define _ECCP2AS_ECCP2ASE_POSITION                          0x7
#define _ECCP2AS_ECCP2ASE_SIZE                              0x1
#define _ECCP2AS_ECCP2ASE_LENGTH                            0x1
#define _ECCP2AS_ECCP2ASE_MASK                              0x80
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
#define _ECCP2AS_ECCP2AS0_POSN                              0x4
#define _ECCP2AS_ECCP2AS0_POSITION                          0x4
#define _ECCP2AS_ECCP2AS0_SIZE                              0x1
#define _ECCP2AS_ECCP2AS0_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS0_MASK                              0x10
#define _ECCP2AS_ECCP2AS1_POSN                              0x5
#define _ECCP2AS_ECCP2AS1_POSITION                          0x5
#define _ECCP2AS_ECCP2AS1_SIZE                              0x1
#define _ECCP2AS_ECCP2AS1_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS1_MASK                              0x20
#define _ECCP2AS_ECCP2AS2_POSN                              0x6
#define _ECCP2AS_ECCP2AS2_POSITION                          0x6
#define _ECCP2AS_ECCP2AS2_SIZE                              0x1
#define _ECCP2AS_ECCP2AS2_LENGTH                            0x1
#define _ECCP2AS_ECCP2AS2_MASK                              0x40

// Register: PSTR2CON
#define PSTR2CON PSTR2CON
extern volatile unsigned char           PSTR2CON            __at(0xFB9);
#ifndef _LIB_BUILD
asm("PSTR2CON equ 0FB9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned STRSYNC                :1;
        unsigned                        :1;
        unsigned CMPL0                  :1;
        unsigned CMPL1                  :1;
    };
    struct {
        unsigned P2DC0                  :1;
        unsigned P2DC1                  :1;
        unsigned P2DC2                  :1;
        unsigned P2DC3                  :1;
        unsigned P2DC4                  :1;
        unsigned P2DC5                  :1;
        unsigned P2DC6                  :1;
    };
    struct {
        unsigned P2DC02                 :1;
        unsigned P2DC12                 :1;
        unsigned P2DC22                 :1;
        unsigned P2DC32                 :1;
        unsigned P2DC42                 :1;
        unsigned                        :1;
        unsigned CMPL02                 :1;
        unsigned CMPL12                 :1;
    };
    struct {
        unsigned P2DC0CON               :1;
        unsigned P2DC1CON               :1;
        unsigned P2DC2CON               :1;
        unsigned P2DC3CON               :1;
        unsigned P2DC4CON               :1;
        unsigned                        :1;
        unsigned P2DC62                 :1;
    };
    struct {
        unsigned STRA2                  :1;
        unsigned STRB2                  :1;
        unsigned STRC2                  :1;
        unsigned STRD2                  :1;
        unsigned STRSYNC2               :1;
        unsigned                        :1;
        unsigned P2DC6CON               :1;
    };
    struct {
        unsigned                        :5;
        unsigned P2DC52                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned P2DC5CON               :1;
    };
} PSTR2CONbits_t;
extern volatile PSTR2CONbits_t PSTR2CONbits __at(0xFB9);
// bitfield macros
#define _PSTR2CON_STRA_POSN                                 0x0
#define _PSTR2CON_STRA_POSITION                             0x0
#define _PSTR2CON_STRA_SIZE                                 0x1
#define _PSTR2CON_STRA_LENGTH                               0x1
#define _PSTR2CON_STRA_MASK                                 0x1
#define _PSTR2CON_STRB_POSN                                 0x1
#define _PSTR2CON_STRB_POSITION                             0x1
#define _PSTR2CON_STRB_SIZE                                 0x1
#define _PSTR2CON_STRB_LENGTH                               0x1
#define _PSTR2CON_STRB_MASK                                 0x2
#define _PSTR2CON_STRC_POSN                                 0x2
#define _PSTR2CON_STRC_POSITION                             0x2
#define _PSTR2CON_STRC_SIZE                                 0x1
#define _PSTR2CON_STRC_LENGTH                               0x1
#define _PSTR2CON_STRC_MASK                                 0x4
#define _PSTR2CON_STRD_POSN                                 0x3
#define _PSTR2CON_STRD_POSITION                             0x3
#define _PSTR2CON_STRD_SIZE                                 0x1
#define _PSTR2CON_STRD_LENGTH                               0x1
#define _PSTR2CON_STRD_MASK                                 0x8
#define _PSTR2CON_STRSYNC_POSN                              0x4
#define _PSTR2CON_STRSYNC_POSITION                          0x4
#define _PSTR2CON_STRSYNC_SIZE                              0x1
#define _PSTR2CON_STRSYNC_LENGTH                            0x1
#define _PSTR2CON_STRSYNC_MASK                              0x10
#define _PSTR2CON_CMPL0_POSN                                0x6
#define _PSTR2CON_CMPL0_POSITION                            0x6
#define _PSTR2CON_CMPL0_SIZE                                0x1
#define _PSTR2CON_CMPL0_LENGTH                              0x1
#define _PSTR2CON_CMPL0_MASK                                0x40
#define _PSTR2CON_CMPL1_POSN                                0x7
#define _PSTR2CON_CMPL1_POSITION                            0x7
#define _PSTR2CON_CMPL1_SIZE                                0x1
#define _PSTR2CON_CMPL1_LENGTH                              0x1
#define _PSTR2CON_CMPL1_MASK                                0x80
#define _PSTR2CON_P2DC0_POSN                                0x0
#define _PSTR2CON_P2DC0_POSITION                            0x0
#define _PSTR2CON_P2DC0_SIZE                                0x1
#define _PSTR2CON_P2DC0_LENGTH                              0x1
#define _PSTR2CON_P2DC0_MASK                                0x1
#define _PSTR2CON_P2DC1_POSN                                0x1
#define _PSTR2CON_P2DC1_POSITION                            0x1
#define _PSTR2CON_P2DC1_SIZE                                0x1
#define _PSTR2CON_P2DC1_LENGTH                              0x1
#define _PSTR2CON_P2DC1_MASK                                0x2
#define _PSTR2CON_P2DC2_POSN                                0x2
#define _PSTR2CON_P2DC2_POSITION                            0x2
#define _PSTR2CON_P2DC2_SIZE                                0x1
#define _PSTR2CON_P2DC2_LENGTH                              0x1
#define _PSTR2CON_P2DC2_MASK                                0x4
#define _PSTR2CON_P2DC3_POSN                                0x3
#define _PSTR2CON_P2DC3_POSITION                            0x3
#define _PSTR2CON_P2DC3_SIZE                                0x1
#define _PSTR2CON_P2DC3_LENGTH                              0x1
#define _PSTR2CON_P2DC3_MASK                                0x8
#define _PSTR2CON_P2DC4_POSN                                0x4
#define _PSTR2CON_P2DC4_POSITION                            0x4
#define _PSTR2CON_P2DC4_SIZE                                0x1
#define _PSTR2CON_P2DC4_LENGTH                              0x1
#define _PSTR2CON_P2DC4_MASK                                0x10
#define _PSTR2CON_P2DC5_POSN                                0x5
#define _PSTR2CON_P2DC5_POSITION                            0x5
#define _PSTR2CON_P2DC5_SIZE                                0x1
#define _PSTR2CON_P2DC5_LENGTH                              0x1
#define _PSTR2CON_P2DC5_MASK                                0x20
#define _PSTR2CON_P2DC6_POSN                                0x6
#define _PSTR2CON_P2DC6_POSITION                            0x6
#define _PSTR2CON_P2DC6_SIZE                                0x1
#define _PSTR2CON_P2DC6_LENGTH                              0x1
#define _PSTR2CON_P2DC6_MASK                                0x40
#define _PSTR2CON_P2DC02_POSN                               0x0
#define _PSTR2CON_P2DC02_POSITION                           0x0
#define _PSTR2CON_P2DC02_SIZE                               0x1
#define _PSTR2CON_P2DC02_LENGTH                             0x1
#define _PSTR2CON_P2DC02_MASK                               0x1
#define _PSTR2CON_P2DC12_POSN                               0x1
#define _PSTR2CON_P2DC12_POSITION                           0x1
#define _PSTR2CON_P2DC12_SIZE                               0x1
#define _PSTR2CON_P2DC12_LENGTH                             0x1
#define _PSTR2CON_P2DC12_MASK                               0x2
#define _PSTR2CON_P2DC22_POSN                               0x2
#define _PSTR2CON_P2DC22_POSITION                           0x2
#define _PSTR2CON_P2DC22_SIZE                               0x1
#define _PSTR2CON_P2DC22_LENGTH                             0x1
#define _PSTR2CON_P2DC22_MASK                               0x4
#define _PSTR2CON_P2DC32_POSN                               0x3
#define _PSTR2CON_P2DC32_POSITION                           0x3
#define _PSTR2CON_P2DC32_SIZE                               0x1
#define _PSTR2CON_P2DC32_LENGTH                             0x1
#define _PSTR2CON_P2DC32_MASK                               0x8
#define _PSTR2CON_P2DC42_POSN                               0x4
#define _PSTR2CON_P2DC42_POSITION                           0x4
#define _PSTR2CON_P2DC42_SIZE                               0x1
#define _PSTR2CON_P2DC42_LENGTH                             0x1
#define _PSTR2CON_P2DC42_MASK                               0x10
#define _PSTR2CON_CMPL02_POSN                               0x6
#define _PSTR2CON_CMPL02_POSITION                           0x6
#define _PSTR2CON_CMPL02_SIZE                               0x1
#define _PSTR2CON_CMPL02_LENGTH                             0x1
#define _PSTR2CON_CMPL02_MASK                               0x40
#define _PSTR2CON_CMPL12_POSN                               0x7
#define _PSTR2CON_CMPL12_POSITION                           0x7
#define _PSTR2CON_CMPL12_SIZE                               0x1
#define _PSTR2CON_CMPL12_LENGTH                             0x1
#define _PSTR2CON_CMPL12_MASK                               0x80
#define _PSTR2CON_P2DC0CON_POSN                             0x0
#define _PSTR2CON_P2DC0CON_POSITION                         0x0
#define _PSTR2CON_P2DC0CON_SIZE                             0x1
#define _PSTR2CON_P2DC0CON_LENGTH                           0x1
#define _PSTR2CON_P2DC0CON_MASK                             0x1
#define _PSTR2CON_P2DC1CON_POSN                             0x1
#define _PSTR2CON_P2DC1CON_POSITION                         0x1
#define _PSTR2CON_P2DC1CON_SIZE                             0x1
#define _PSTR2CON_P2DC1CON_LENGTH                           0x1
#define _PSTR2CON_P2DC1CON_MASK                             0x2
#define _PSTR2CON_P2DC2CON_POSN                             0x2
#define _PSTR2CON_P2DC2CON_POSITION                         0x2
#define _PSTR2CON_P2DC2CON_SIZE                             0x1
#define _PSTR2CON_P2DC2CON_LENGTH                           0x1
#define _PSTR2CON_P2DC2CON_MASK                             0x4
#define _PSTR2CON_P2DC3CON_POSN                             0x3
#define _PSTR2CON_P2DC3CON_POSITION                         0x3
#define _PSTR2CON_P2DC3CON_SIZE                             0x1
#define _PSTR2CON_P2DC3CON_LENGTH                           0x1
#define _PSTR2CON_P2DC3CON_MASK                             0x8
#define _PSTR2CON_P2DC4CON_POSN                             0x4
#define _PSTR2CON_P2DC4CON_POSITION                         0x4
#define _PSTR2CON_P2DC4CON_SIZE                             0x1
#define _PSTR2CON_P2DC4CON_LENGTH                           0x1
#define _PSTR2CON_P2DC4CON_MASK                             0x10
#define _PSTR2CON_P2DC62_POSN                               0x6
#define _PSTR2CON_P2DC62_POSITION                           0x6
#define _PSTR2CON_P2DC62_SIZE                               0x1
#define _PSTR2CON_P2DC62_LENGTH                             0x1
#define _PSTR2CON_P2DC62_MASK                               0x40
#define _PSTR2CON_STRA2_POSN                                0x0
#define _PSTR2CON_STRA2_POSITION                            0x0
#define _PSTR2CON_STRA2_SIZE                                0x1
#define _PSTR2CON_STRA2_LENGTH                              0x1
#define _PSTR2CON_STRA2_MASK                                0x1
#define _PSTR2CON_STRB2_POSN                                0x1
#define _PSTR2CON_STRB2_POSITION                            0x1
#define _PSTR2CON_STRB2_SIZE                                0x1
#define _PSTR2CON_STRB2_LENGTH                              0x1
#define _PSTR2CON_STRB2_MASK                                0x2
#define _PSTR2CON_STRC2_POSN                                0x2
#define _PSTR2CON_STRC2_POSITION                            0x2
#define _PSTR2CON_STRC2_SIZE                                0x1
#define _PSTR2CON_STRC2_LENGTH                              0x1
#define _PSTR2CON_STRC2_MASK                                0x4
#define _PSTR2CON_STRD2_POSN                                0x3
#define _PSTR2CON_STRD2_POSITION                            0x3
#define _PSTR2CON_STRD2_SIZE                                0x1
#define _PSTR2CON_STRD2_LENGTH                              0x1
#define _PSTR2CON_STRD2_MASK                                0x8
#define _PSTR2CON_STRSYNC2_POSN                             0x4
#define _PSTR2CON_STRSYNC2_POSITION                         0x4
#define _PSTR2CON_STRSYNC2_SIZE                             0x1
#define _PSTR2CON_STRSYNC2_LENGTH                           0x1
#define _PSTR2CON_STRSYNC2_MASK                             0x10
#define _PSTR2CON_P2DC6CON_POSN                             0x6
#define _PSTR2CON_P2DC6CON_POSITION                         0x6
#define _PSTR2CON_P2DC6CON_SIZE                             0x1
#define _PSTR2CON_P2DC6CON_LENGTH                           0x1
#define _PSTR2CON_P2DC6CON_MASK                             0x40
#define _PSTR2CON_P2DC52_POSN                               0x5
#define _PSTR2CON_P2DC52_POSITION                           0x5
#define _PSTR2CON_P2DC52_SIZE                               0x1
#define _PSTR2CON_P2DC52_LENGTH                             0x1
#define _PSTR2CON_P2DC52_MASK                               0x20
#define _PSTR2CON_P2DC5CON_POSN                             0x5
#define _PSTR2CON_P2DC5CON_POSITION                         0x5
#define _PSTR2CON_P2DC5CON_SIZE                             0x1
#define _PSTR2CON_P2DC5CON_LENGTH                           0x1
#define _PSTR2CON_P2DC5CON_MASK                             0x20

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xFBA);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBAh");
#endif
// aliases
extern volatile unsigned char           ECCP1CON            __at(0xFBA);
#ifndef _LIB_BUILD
asm("ECCP1CON equ 0FBAh");
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
extern volatile CCP1CONbits_t CCP1CONbits __at(0xFBA);
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
// alias bitfield definitions
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
} ECCP1CONbits_t;
extern volatile ECCP1CONbits_t ECCP1CONbits __at(0xFBA);
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
#define _ECCP1CON_P1M_POSN                                  0x6
#define _ECCP1CON_P1M_POSITION                              0x6
#define _ECCP1CON_P1M_SIZE                                  0x2
#define _ECCP1CON_P1M_LENGTH                                0x2
#define _ECCP1CON_P1M_MASK                                  0xC0
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
#define _ECCP1CON_P1M0_POSN                                 0x6
#define _ECCP1CON_P1M0_POSITION                             0x6
#define _ECCP1CON_P1M0_SIZE                                 0x1
#define _ECCP1CON_P1M0_LENGTH                               0x1
#define _ECCP1CON_P1M0_MASK                                 0x40
#define _ECCP1CON_P1M1_POSN                                 0x7
#define _ECCP1CON_P1M1_POSITION                             0x7
#define _ECCP1CON_P1M1_SIZE                                 0x1
#define _ECCP1CON_P1M1_LENGTH                               0x1
#define _ECCP1CON_P1M1_MASK                                 0x80
#define _ECCP1CON_CCP1Y_POSN                                0x4
#define _ECCP1CON_CCP1Y_POSITION                            0x4
#define _ECCP1CON_CCP1Y_SIZE                                0x1
#define _ECCP1CON_CCP1Y_LENGTH                              0x1
#define _ECCP1CON_CCP1Y_MASK                                0x10
#define _ECCP1CON_CCP1X_POSN                                0x5
#define _ECCP1CON_CCP1X_POSITION                            0x5
#define _ECCP1CON_CCP1X_SIZE                                0x1
#define _ECCP1CON_CCP1X_LENGTH                              0x1
#define _ECCP1CON_CCP1X_MASK                                0x20

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBBh");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0xFBB);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0xFBB);
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xFBC);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0xFBC);
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

// Register: ECCP1DEL
#define ECCP1DEL ECCP1DEL
extern volatile unsigned char           ECCP1DEL            __at(0xFBD);
#ifndef _LIB_BUILD
asm("ECCP1DEL equ 0FBDh");
#endif
// aliases
extern volatile unsigned char           PWM1CON             __at(0xFBD);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0FBDh");
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
    };
} ECCP1DELbits_t;
extern volatile ECCP1DELbits_t ECCP1DELbits __at(0xFBD);
// bitfield macros
#define _ECCP1DEL_P1DC_POSN                                 0x0
#define _ECCP1DEL_P1DC_POSITION                             0x0
#define _ECCP1DEL_P1DC_SIZE                                 0x7
#define _ECCP1DEL_P1DC_LENGTH                               0x7
#define _ECCP1DEL_P1DC_MASK                                 0x7F
#define _ECCP1DEL_P1RSEN_POSN                               0x7
#define _ECCP1DEL_P1RSEN_POSITION                           0x7
#define _ECCP1DEL_P1RSEN_SIZE                               0x1
#define _ECCP1DEL_P1RSEN_LENGTH                             0x1
#define _ECCP1DEL_P1RSEN_MASK                               0x80
#define _ECCP1DEL_P1DC0_POSN                                0x0
#define _ECCP1DEL_P1DC0_POSITION                            0x0
#define _ECCP1DEL_P1DC0_SIZE                                0x1
#define _ECCP1DEL_P1DC0_LENGTH                              0x1
#define _ECCP1DEL_P1DC0_MASK                                0x1
#define _ECCP1DEL_P1DC1_POSN                                0x1
#define _ECCP1DEL_P1DC1_POSITION                            0x1
#define _ECCP1DEL_P1DC1_SIZE                                0x1
#define _ECCP1DEL_P1DC1_LENGTH                              0x1
#define _ECCP1DEL_P1DC1_MASK                                0x2
#define _ECCP1DEL_P1DC2_POSN                                0x2
#define _ECCP1DEL_P1DC2_POSITION                            0x2
#define _ECCP1DEL_P1DC2_SIZE                                0x1
#define _ECCP1DEL_P1DC2_LENGTH                              0x1
#define _ECCP1DEL_P1DC2_MASK                                0x4
#define _ECCP1DEL_P1DC3_POSN                                0x3
#define _ECCP1DEL_P1DC3_POSITION                            0x3
#define _ECCP1DEL_P1DC3_SIZE                                0x1
#define _ECCP1DEL_P1DC3_LENGTH                              0x1
#define _ECCP1DEL_P1DC3_MASK                                0x8
#define _ECCP1DEL_P1DC4_POSN                                0x4
#define _ECCP1DEL_P1DC4_POSITION                            0x4
#define _ECCP1DEL_P1DC4_SIZE                                0x1
#define _ECCP1DEL_P1DC4_LENGTH                              0x1
#define _ECCP1DEL_P1DC4_MASK                                0x10
#define _ECCP1DEL_P1DC5_POSN                                0x5
#define _ECCP1DEL_P1DC5_POSITION                            0x5
#define _ECCP1DEL_P1DC5_SIZE                                0x1
#define _ECCP1DEL_P1DC5_LENGTH                              0x1
#define _ECCP1DEL_P1DC5_MASK                                0x20
#define _ECCP1DEL_P1DC6_POSN                                0x6
#define _ECCP1DEL_P1DC6_POSITION                            0x6
#define _ECCP1DEL_P1DC6_SIZE                                0x1
#define _ECCP1DEL_P1DC6_LENGTH                              0x1
#define _ECCP1DEL_P1DC6_MASK                                0x40
// alias bitfield definitions
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
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0xFBD);
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

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
extern volatile unsigned char           ECCP1AS             __at(0xFBE);
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FBEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSS1BD                 :2;
        unsigned PSS1AC                 :2;
        unsigned ECCP1AS                :3;
        unsigned ECCP1ASE               :1;
    };
    struct {
        unsigned PSS1BD0                :1;
        unsigned PSS1BD1                :1;
        unsigned PSS1AC0                :1;
        unsigned PSS1AC1                :1;
        unsigned ECCP1AS0               :1;
        unsigned ECCP1AS1               :1;
        unsigned ECCP1AS2               :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits __at(0xFBE);
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
#define _ECCP1AS_ECCP1AS_POSN                               0x4
#define _ECCP1AS_ECCP1AS_POSITION                           0x4
#define _ECCP1AS_ECCP1AS_SIZE                               0x3
#define _ECCP1AS_ECCP1AS_LENGTH                             0x3
#define _ECCP1AS_ECCP1AS_MASK                               0x70
#define _ECCP1AS_ECCP1ASE_POSN                              0x7
#define _ECCP1AS_ECCP1ASE_POSITION                          0x7
#define _ECCP1AS_ECCP1ASE_SIZE                              0x1
#define _ECCP1AS_ECCP1ASE_LENGTH                            0x1
#define _ECCP1AS_ECCP1ASE_MASK                              0x80
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
#define _ECCP1AS_ECCP1AS0_POSN                              0x4
#define _ECCP1AS_ECCP1AS0_POSITION                          0x4
#define _ECCP1AS_ECCP1AS0_SIZE                              0x1
#define _ECCP1AS_ECCP1AS0_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS0_MASK                              0x10
#define _ECCP1AS_ECCP1AS1_POSN                              0x5
#define _ECCP1AS_ECCP1AS1_POSITION                          0x5
#define _ECCP1AS_ECCP1AS1_SIZE                              0x1
#define _ECCP1AS_ECCP1AS1_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS1_MASK                              0x20
#define _ECCP1AS_ECCP1AS2_POSN                              0x6
#define _ECCP1AS_ECCP1AS2_POSITION                          0x6
#define _ECCP1AS_ECCP1AS2_SIZE                              0x1
#define _ECCP1AS_ECCP1AS2_LENGTH                            0x1
#define _ECCP1AS_ECCP1AS2_MASK                              0x40

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
extern volatile unsigned char           PSTR1CON            __at(0xFBF);
#ifndef _LIB_BUILD
asm("PSTR1CON equ 0FBFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned STRSYNC                :1;
        unsigned                        :1;
        unsigned CMPL0                  :1;
        unsigned CMPL1                  :1;
    };
} PSTR1CONbits_t;
extern volatile PSTR1CONbits_t PSTR1CONbits __at(0xFBF);
// bitfield macros
#define _PSTR1CON_STRA_POSN                                 0x0
#define _PSTR1CON_STRA_POSITION                             0x0
#define _PSTR1CON_STRA_SIZE                                 0x1
#define _PSTR1CON_STRA_LENGTH                               0x1
#define _PSTR1CON_STRA_MASK                                 0x1
#define _PSTR1CON_STRB_POSN                                 0x1
#define _PSTR1CON_STRB_POSITION                             0x1
#define _PSTR1CON_STRB_SIZE                                 0x1
#define _PSTR1CON_STRB_LENGTH                               0x1
#define _PSTR1CON_STRB_MASK                                 0x2
#define _PSTR1CON_STRC_POSN                                 0x2
#define _PSTR1CON_STRC_POSITION                             0x2
#define _PSTR1CON_STRC_SIZE                                 0x1
#define _PSTR1CON_STRC_LENGTH                               0x1
#define _PSTR1CON_STRC_MASK                                 0x4
#define _PSTR1CON_STRD_POSN                                 0x3
#define _PSTR1CON_STRD_POSITION                             0x3
#define _PSTR1CON_STRD_SIZE                                 0x1
#define _PSTR1CON_STRD_LENGTH                               0x1
#define _PSTR1CON_STRD_MASK                                 0x8
#define _PSTR1CON_STRSYNC_POSN                              0x4
#define _PSTR1CON_STRSYNC_POSITION                          0x4
#define _PSTR1CON_STRSYNC_SIZE                              0x1
#define _PSTR1CON_STRSYNC_LENGTH                            0x1
#define _PSTR1CON_STRSYNC_MASK                              0x10
#define _PSTR1CON_CMPL0_POSN                                0x6
#define _PSTR1CON_CMPL0_POSITION                            0x6
#define _PSTR1CON_CMPL0_SIZE                                0x1
#define _PSTR1CON_CMPL0_LENGTH                              0x1
#define _PSTR1CON_CMPL0_MASK                                0x40
#define _PSTR1CON_CMPL1_POSN                                0x7
#define _PSTR1CON_CMPL1_POSITION                            0x7
#define _PSTR1CON_CMPL1_SIZE                                0x1
#define _PSTR1CON_CMPL1_LENGTH                              0x1
#define _PSTR1CON_CMPL1_MASK                                0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0xFC0);
#ifndef _LIB_BUILD
asm("WDTCON equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned ULPSINK                :1;
        unsigned ULPEN                  :1;
        unsigned DS                     :1;
        unsigned                        :1;
        unsigned ULPLVL                 :1;
        unsigned LVDSTAT                :1;
        unsigned REGSLP                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0xFC0);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_ULPSINK_POSN                                0x1
#define _WDTCON_ULPSINK_POSITION                            0x1
#define _WDTCON_ULPSINK_SIZE                                0x1
#define _WDTCON_ULPSINK_LENGTH                              0x1
#define _WDTCON_ULPSINK_MASK                                0x2
#define _WDTCON_ULPEN_POSN                                  0x2
#define _WDTCON_ULPEN_POSITION                              0x2
#define _WDTCON_ULPEN_SIZE                                  0x1
#define _WDTCON_ULPEN_LENGTH                                0x1
#define _WDTCON_ULPEN_MASK                                  0x4
#define _WDTCON_DS_POSN                                     0x3
#define _WDTCON_DS_POSITION                                 0x3
#define _WDTCON_DS_SIZE                                     0x1
#define _WDTCON_DS_LENGTH                                   0x1
#define _WDTCON_DS_MASK                                     0x8
#define _WDTCON_ULPLVL_POSN                                 0x5
#define _WDTCON_ULPLVL_POSITION                             0x5
#define _WDTCON_ULPLVL_SIZE                                 0x1
#define _WDTCON_ULPLVL_LENGTH                               0x1
#define _WDTCON_ULPLVL_MASK                                 0x20
#define _WDTCON_LVDSTAT_POSN                                0x6
#define _WDTCON_LVDSTAT_POSITION                            0x6
#define _WDTCON_LVDSTAT_SIZE                                0x1
#define _WDTCON_LVDSTAT_LENGTH                              0x1
#define _WDTCON_LVDSTAT_MASK                                0x40
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0xFC1);
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned ADCAL                  :1;
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
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
        unsigned VCFG01                 :1;
        unsigned VCFG11                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_ADCS_POSN                                   0x0
#define _ADCON1_ADCS_POSITION                               0x0
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x7
#define _ADCON1_ACQT_POSN                                   0x3
#define _ADCON1_ACQT_POSITION                               0x3
#define _ADCON1_ACQT_SIZE                                   0x3
#define _ADCON1_ACQT_LENGTH                                 0x3
#define _ADCON1_ACQT_MASK                                   0x38
#define _ADCON1_ADCAL_POSN                                  0x6
#define _ADCON1_ADCAL_POSITION                              0x6
#define _ADCON1_ADCAL_SIZE                                  0x1
#define _ADCON1_ADCAL_LENGTH                                0x1
#define _ADCON1_ADCAL_MASK                                  0x40
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80
#define _ADCON1_ADCS0_POSN                                  0x0
#define _ADCON1_ADCS0_POSITION                              0x0
#define _ADCON1_ADCS0_SIZE                                  0x1
#define _ADCON1_ADCS0_LENGTH                                0x1
#define _ADCON1_ADCS0_MASK                                  0x1
#define _ADCON1_ADCS1_POSN                                  0x1
#define _ADCON1_ADCS1_POSITION                              0x1
#define _ADCON1_ADCS1_SIZE                                  0x1
#define _ADCON1_ADCS1_LENGTH                                0x1
#define _ADCON1_ADCS1_MASK                                  0x2
#define _ADCON1_ADCS2_POSN                                  0x2
#define _ADCON1_ADCS2_POSITION                              0x2
#define _ADCON1_ADCS2_SIZE                                  0x1
#define _ADCON1_ADCS2_LENGTH                                0x1
#define _ADCON1_ADCS2_MASK                                  0x4
#define _ADCON1_ACQT0_POSN                                  0x3
#define _ADCON1_ACQT0_POSITION                              0x3
#define _ADCON1_ACQT0_SIZE                                  0x1
#define _ADCON1_ACQT0_LENGTH                                0x1
#define _ADCON1_ACQT0_MASK                                  0x8
#define _ADCON1_ACQT1_POSN                                  0x4
#define _ADCON1_ACQT1_POSITION                              0x4
#define _ADCON1_ACQT1_SIZE                                  0x1
#define _ADCON1_ACQT1_LENGTH                                0x1
#define _ADCON1_ACQT1_MASK                                  0x10
#define _ADCON1_ACQT2_POSN                                  0x5
#define _ADCON1_ACQT2_POSITION                              0x5
#define _ADCON1_ACQT2_SIZE                                  0x1
#define _ADCON1_ACQT2_LENGTH                                0x1
#define _ADCON1_ACQT2_MASK                                  0x20
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
        unsigned VCFG                   :2;
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
        unsigned                        :5;
        unsigned ADCAL                  :1;
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
#define _ADCON0_VCFG_POSN                                   0x6
#define _ADCON0_VCFG_POSITION                               0x6
#define _ADCON0_VCFG_SIZE                                   0x2
#define _ADCON0_VCFG_LENGTH                                 0x2
#define _ADCON0_VCFG_MASK                                   0xC0
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
#define _ADCON0_ADCAL_POSN                                  0x7
#define _ADCON0_ADCAL_POSITION                              0x7
#define _ADCON0_ADCAL_SIZE                                  0x1
#define _ADCON0_ADCAL_LENGTH                                0x1
#define _ADCON0_ADCAL_MASK                                  0x80

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
extern volatile unsigned char           SSP1MSK             __at(0xFC8);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0FC8h");
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
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0xFC8);
// bitfield macros
#define _SSP1MSK_SSPADD_POSN                                0x0
#define _SSP1MSK_SSPADD_POSITION                            0x0
#define _SSP1MSK_SSPADD_SIZE                                0x8
#define _SSP1MSK_SSPADD_LENGTH                              0x8
#define _SSP1MSK_SSPADD_MASK                                0xFF
#define _SSP1MSK_MSK0_POSN                                  0x0
#define _SSP1MSK_MSK0_POSITION                              0x0
#define _SSP1MSK_MSK0_SIZE                                  0x1
#define _SSP1MSK_MSK0_LENGTH                                0x1
#define _SSP1MSK_MSK0_MASK                                  0x1
#define _SSP1MSK_MSK1_POSN                                  0x1
#define _SSP1MSK_MSK1_POSITION                              0x1
#define _SSP1MSK_MSK1_SIZE                                  0x1
#define _SSP1MSK_MSK1_LENGTH                                0x1
#define _SSP1MSK_MSK1_MASK                                  0x2
#define _SSP1MSK_MSK2_POSN                                  0x2
#define _SSP1MSK_MSK2_POSITION                              0x2
#define _SSP1MSK_MSK2_SIZE                                  0x1
#define _SSP1MSK_MSK2_LENGTH                                0x1
#define _SSP1MSK_MSK2_MASK                                  0x4
#define _SSP1MSK_MSK3_POSN                                  0x3
#define _SSP1MSK_MSK3_POSITION                              0x3
#define _SSP1MSK_MSK3_SIZE                                  0x1
#define _SSP1MSK_MSK3_LENGTH                                0x1
#define _SSP1MSK_MSK3_MASK                                  0x8
#define _SSP1MSK_MSK4_POSN                                  0x4
#define _SSP1MSK_MSK4_POSITION                              0x4
#define _SSP1MSK_MSK4_SIZE                                  0x1
#define _SSP1MSK_MSK4_LENGTH                                0x1
#define _SSP1MSK_MSK4_MASK                                  0x10
#define _SSP1MSK_MSK5_POSN                                  0x5
#define _SSP1MSK_MSK5_POSITION                              0x5
#define _SSP1MSK_MSK5_SIZE                                  0x1
#define _SSP1MSK_MSK5_LENGTH                                0x1
#define _SSP1MSK_MSK5_MASK                                  0x20
#define _SSP1MSK_MSK6_POSN                                  0x6
#define _SSP1MSK_MSK6_POSITION                              0x6
#define _SSP1MSK_MSK6_SIZE                                  0x1
#define _SSP1MSK_MSK6_LENGTH                                0x1
#define _SSP1MSK_MSK6_MASK                                  0x40
#define _SSP1MSK_MSK7_POSN                                  0x7
#define _SSP1MSK_MSK7_POSITION                              0x7
#define _SSP1MSK_MSK7_SIZE                                  0x1
#define _SSP1MSK_MSK7_LENGTH                                0x1
#define _SSP1MSK_MSK7_MASK                                  0x80
#define _SSP1MSK_MSK01_POSN                                 0x0
#define _SSP1MSK_MSK01_POSITION                             0x0
#define _SSP1MSK_MSK01_SIZE                                 0x1
#define _SSP1MSK_MSK01_LENGTH                               0x1
#define _SSP1MSK_MSK01_MASK                                 0x1
#define _SSP1MSK_MSK11_POSN                                 0x1
#define _SSP1MSK_MSK11_POSITION                             0x1
#define _SSP1MSK_MSK11_SIZE                                 0x1
#define _SSP1MSK_MSK11_LENGTH                               0x1
#define _SSP1MSK_MSK11_MASK                                 0x2
#define _SSP1MSK_MSK21_POSN                                 0x2
#define _SSP1MSK_MSK21_POSITION                             0x2
#define _SSP1MSK_MSK21_SIZE                                 0x1
#define _SSP1MSK_MSK21_LENGTH                               0x1
#define _SSP1MSK_MSK21_MASK                                 0x4
#define _SSP1MSK_MSK31_POSN                                 0x3
#define _SSP1MSK_MSK31_POSITION                             0x3
#define _SSP1MSK_MSK31_SIZE                                 0x1
#define _SSP1MSK_MSK31_LENGTH                               0x1
#define _SSP1MSK_MSK31_MASK                                 0x8
#define _SSP1MSK_MSK41_POSN                                 0x4
#define _SSP1MSK_MSK41_POSITION                             0x4
#define _SSP1MSK_MSK41_SIZE                                 0x1
#define _SSP1MSK_MSK41_LENGTH                               0x1
#define _SSP1MSK_MSK41_MASK                                 0x10
#define _SSP1MSK_MSK51_POSN                                 0x5
#define _SSP1MSK_MSK51_POSITION                             0x5
#define _SSP1MSK_MSK51_SIZE                                 0x1
#define _SSP1MSK_MSK51_LENGTH                               0x1
#define _SSP1MSK_MSK51_MASK                                 0x20
#define _SSP1MSK_MSK61_POSN                                 0x6
#define _SSP1MSK_MSK61_POSITION                             0x6
#define _SSP1MSK_MSK61_SIZE                                 0x1
#define _SSP1MSK_MSK61_LENGTH                               0x1
#define _SSP1MSK_MSK61_MASK                                 0x40
#define _SSP1MSK_MSK71_POSN                                 0x7
#define _SSP1MSK_MSK71_POSITION                             0x7
#define _SSP1MSK_MSK71_SIZE                                 0x1
#define _SSP1MSK_MSK71_LENGTH                               0x1
#define _SSP1MSK_MSK71_MASK                                 0x80

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
        unsigned TMR1ON                 :1;
        unsigned RD16                   :1;
        unsigned T1SYNC                 :1;
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
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
        unsigned                        :3;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0xFCD);
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_RD16_POSN                                    0x1
#define _T1CON_RD16_POSITION                                0x1
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x2
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
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

// Register: CM2CON
#define CM2CON CM2CON
extern volatile unsigned char           CM2CON              __at(0xFD1);
#ifndef _LIB_BUILD
asm("CM2CON equ 0FD1h");
#endif
// aliases
extern volatile unsigned char           CM2CON1             __at(0xFD1);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCH                    :2;
        unsigned CREF                   :1;
        unsigned EVPOL                  :2;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
        unsigned                        :1;
        unsigned EVPOL0                 :1;
        unsigned EVPOL1                 :1;
    };
    struct {
        unsigned CCH02                  :1;
        unsigned CCH12                  :1;
        unsigned CREF2                  :1;
        unsigned EVPOL02                :1;
        unsigned EVPOL12                :1;
        unsigned CPOL2                  :1;
        unsigned COE2                   :1;
        unsigned CON2                   :1;
    };
} CM2CONbits_t;
extern volatile CM2CONbits_t CM2CONbits __at(0xFD1);
// bitfield macros
#define _CM2CON_CCH_POSN                                    0x0
#define _CM2CON_CCH_POSITION                                0x0
#define _CM2CON_CCH_SIZE                                    0x2
#define _CM2CON_CCH_LENGTH                                  0x2
#define _CM2CON_CCH_MASK                                    0x3
#define _CM2CON_CREF_POSN                                   0x2
#define _CM2CON_CREF_POSITION                               0x2
#define _CM2CON_CREF_SIZE                                   0x1
#define _CM2CON_CREF_LENGTH                                 0x1
#define _CM2CON_CREF_MASK                                   0x4
#define _CM2CON_EVPOL_POSN                                  0x3
#define _CM2CON_EVPOL_POSITION                              0x3
#define _CM2CON_EVPOL_SIZE                                  0x2
#define _CM2CON_EVPOL_LENGTH                                0x2
#define _CM2CON_EVPOL_MASK                                  0x18
#define _CM2CON_CPOL_POSN                                   0x5
#define _CM2CON_CPOL_POSITION                               0x5
#define _CM2CON_CPOL_SIZE                                   0x1
#define _CM2CON_CPOL_LENGTH                                 0x1
#define _CM2CON_CPOL_MASK                                   0x20
#define _CM2CON_COE_POSN                                    0x6
#define _CM2CON_COE_POSITION                                0x6
#define _CM2CON_COE_SIZE                                    0x1
#define _CM2CON_COE_LENGTH                                  0x1
#define _CM2CON_COE_MASK                                    0x40
#define _CM2CON_CON_POSN                                    0x7
#define _CM2CON_CON_POSITION                                0x7
#define _CM2CON_CON_SIZE                                    0x1
#define _CM2CON_CON_LENGTH                                  0x1
#define _CM2CON_CON_MASK                                    0x80
#define _CM2CON_CCH0_POSN                                   0x0
#define _CM2CON_CCH0_POSITION                               0x0
#define _CM2CON_CCH0_SIZE                                   0x1
#define _CM2CON_CCH0_LENGTH                                 0x1
#define _CM2CON_CCH0_MASK                                   0x1
#define _CM2CON_CCH1_POSN                                   0x1
#define _CM2CON_CCH1_POSITION                               0x1
#define _CM2CON_CCH1_SIZE                                   0x1
#define _CM2CON_CCH1_LENGTH                                 0x1
#define _CM2CON_CCH1_MASK                                   0x2
#define _CM2CON_EVPOL0_POSN                                 0x3
#define _CM2CON_EVPOL0_POSITION                             0x3
#define _CM2CON_EVPOL0_SIZE                                 0x1
#define _CM2CON_EVPOL0_LENGTH                               0x1
#define _CM2CON_EVPOL0_MASK                                 0x8
#define _CM2CON_EVPOL1_POSN                                 0x4
#define _CM2CON_EVPOL1_POSITION                             0x4
#define _CM2CON_EVPOL1_SIZE                                 0x1
#define _CM2CON_EVPOL1_LENGTH                               0x1
#define _CM2CON_EVPOL1_MASK                                 0x10
#define _CM2CON_CCH02_POSN                                  0x0
#define _CM2CON_CCH02_POSITION                              0x0
#define _CM2CON_CCH02_SIZE                                  0x1
#define _CM2CON_CCH02_LENGTH                                0x1
#define _CM2CON_CCH02_MASK                                  0x1
#define _CM2CON_CCH12_POSN                                  0x1
#define _CM2CON_CCH12_POSITION                              0x1
#define _CM2CON_CCH12_SIZE                                  0x1
#define _CM2CON_CCH12_LENGTH                                0x1
#define _CM2CON_CCH12_MASK                                  0x2
#define _CM2CON_CREF2_POSN                                  0x2
#define _CM2CON_CREF2_POSITION                              0x2
#define _CM2CON_CREF2_SIZE                                  0x1
#define _CM2CON_CREF2_LENGTH                                0x1
#define _CM2CON_CREF2_MASK                                  0x4
#define _CM2CON_EVPOL02_POSN                                0x3
#define _CM2CON_EVPOL02_POSITION                            0x3
#define _CM2CON_EVPOL02_SIZE                                0x1
#define _CM2CON_EVPOL02_LENGTH                              0x1
#define _CM2CON_EVPOL02_MASK                                0x8
#define _CM2CON_EVPOL12_POSN                                0x4
#define _CM2CON_EVPOL12_POSITION                            0x4
#define _CM2CON_EVPOL12_SIZE                                0x1
#define _CM2CON_EVPOL12_LENGTH                              0x1
#define _CM2CON_EVPOL12_MASK                                0x10
#define _CM2CON_CPOL2_POSN                                  0x5
#define _CM2CON_CPOL2_POSITION                              0x5
#define _CM2CON_CPOL2_SIZE                                  0x1
#define _CM2CON_CPOL2_LENGTH                                0x1
#define _CM2CON_CPOL2_MASK                                  0x20
#define _CM2CON_COE2_POSN                                   0x6
#define _CM2CON_COE2_POSITION                               0x6
#define _CM2CON_COE2_SIZE                                   0x1
#define _CM2CON_COE2_LENGTH                                 0x1
#define _CM2CON_COE2_MASK                                   0x40
#define _CM2CON_CON2_POSN                                   0x7
#define _CM2CON_CON2_POSITION                               0x7
#define _CM2CON_CON2_SIZE                                   0x1
#define _CM2CON_CON2_LENGTH                                 0x1
#define _CM2CON_CON2_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCH                    :2;
        unsigned CREF                   :1;
        unsigned EVPOL                  :2;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
        unsigned                        :1;
        unsigned EVPOL0                 :1;
        unsigned EVPOL1                 :1;
    };
    struct {
        unsigned CCH02                  :1;
        unsigned CCH12                  :1;
        unsigned CREF2                  :1;
        unsigned EVPOL02                :1;
        unsigned EVPOL12                :1;
        unsigned CPOL2                  :1;
        unsigned COE2                   :1;
        unsigned CON2                   :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0xFD1);
// bitfield macros
#define _CM2CON1_CCH_POSN                                   0x0
#define _CM2CON1_CCH_POSITION                               0x0
#define _CM2CON1_CCH_SIZE                                   0x2
#define _CM2CON1_CCH_LENGTH                                 0x2
#define _CM2CON1_CCH_MASK                                   0x3
#define _CM2CON1_CREF_POSN                                  0x2
#define _CM2CON1_CREF_POSITION                              0x2
#define _CM2CON1_CREF_SIZE                                  0x1
#define _CM2CON1_CREF_LENGTH                                0x1
#define _CM2CON1_CREF_MASK                                  0x4
#define _CM2CON1_EVPOL_POSN                                 0x3
#define _CM2CON1_EVPOL_POSITION                             0x3
#define _CM2CON1_EVPOL_SIZE                                 0x2
#define _CM2CON1_EVPOL_LENGTH                               0x2
#define _CM2CON1_EVPOL_MASK                                 0x18
#define _CM2CON1_CPOL_POSN                                  0x5
#define _CM2CON1_CPOL_POSITION                              0x5
#define _CM2CON1_CPOL_SIZE                                  0x1
#define _CM2CON1_CPOL_LENGTH                                0x1
#define _CM2CON1_CPOL_MASK                                  0x20
#define _CM2CON1_COE_POSN                                   0x6
#define _CM2CON1_COE_POSITION                               0x6
#define _CM2CON1_COE_SIZE                                   0x1
#define _CM2CON1_COE_LENGTH                                 0x1
#define _CM2CON1_COE_MASK                                   0x40
#define _CM2CON1_CON_POSN                                   0x7
#define _CM2CON1_CON_POSITION                               0x7
#define _CM2CON1_CON_SIZE                                   0x1
#define _CM2CON1_CON_LENGTH                                 0x1
#define _CM2CON1_CON_MASK                                   0x80
#define _CM2CON1_CCH0_POSN                                  0x0
#define _CM2CON1_CCH0_POSITION                              0x0
#define _CM2CON1_CCH0_SIZE                                  0x1
#define _CM2CON1_CCH0_LENGTH                                0x1
#define _CM2CON1_CCH0_MASK                                  0x1
#define _CM2CON1_CCH1_POSN                                  0x1
#define _CM2CON1_CCH1_POSITION                              0x1
#define _CM2CON1_CCH1_SIZE                                  0x1
#define _CM2CON1_CCH1_LENGTH                                0x1
#define _CM2CON1_CCH1_MASK                                  0x2
#define _CM2CON1_EVPOL0_POSN                                0x3
#define _CM2CON1_EVPOL0_POSITION                            0x3
#define _CM2CON1_EVPOL0_SIZE                                0x1
#define _CM2CON1_EVPOL0_LENGTH                              0x1
#define _CM2CON1_EVPOL0_MASK                                0x8
#define _CM2CON1_EVPOL1_POSN                                0x4
#define _CM2CON1_EVPOL1_POSITION                            0x4
#define _CM2CON1_EVPOL1_SIZE                                0x1
#define _CM2CON1_EVPOL1_LENGTH                              0x1
#define _CM2CON1_EVPOL1_MASK                                0x10
#define _CM2CON1_CCH02_POSN                                 0x0
#define _CM2CON1_CCH02_POSITION                             0x0
#define _CM2CON1_CCH02_SIZE                                 0x1
#define _CM2CON1_CCH02_LENGTH                               0x1
#define _CM2CON1_CCH02_MASK                                 0x1
#define _CM2CON1_CCH12_POSN                                 0x1
#define _CM2CON1_CCH12_POSITION                             0x1
#define _CM2CON1_CCH12_SIZE                                 0x1
#define _CM2CON1_CCH12_LENGTH                               0x1
#define _CM2CON1_CCH12_MASK                                 0x2
#define _CM2CON1_CREF2_POSN                                 0x2
#define _CM2CON1_CREF2_POSITION                             0x2
#define _CM2CON1_CREF2_SIZE                                 0x1
#define _CM2CON1_CREF2_LENGTH                               0x1
#define _CM2CON1_CREF2_MASK                                 0x4
#define _CM2CON1_EVPOL02_POSN                               0x3
#define _CM2CON1_EVPOL02_POSITION                           0x3
#define _CM2CON1_EVPOL02_SIZE                               0x1
#define _CM2CON1_EVPOL02_LENGTH                             0x1
#define _CM2CON1_EVPOL02_MASK                               0x8
#define _CM2CON1_EVPOL12_POSN                               0x4
#define _CM2CON1_EVPOL12_POSITION                           0x4
#define _CM2CON1_EVPOL12_SIZE                               0x1
#define _CM2CON1_EVPOL12_LENGTH                             0x1
#define _CM2CON1_EVPOL12_MASK                               0x10
#define _CM2CON1_CPOL2_POSN                                 0x5
#define _CM2CON1_CPOL2_POSITION                             0x5
#define _CM2CON1_CPOL2_SIZE                                 0x1
#define _CM2CON1_CPOL2_LENGTH                               0x1
#define _CM2CON1_CPOL2_MASK                                 0x20
#define _CM2CON1_COE2_POSN                                  0x6
#define _CM2CON1_COE2_POSITION                              0x6
#define _CM2CON1_COE2_SIZE                                  0x1
#define _CM2CON1_COE2_LENGTH                                0x1
#define _CM2CON1_COE2_MASK                                  0x40
#define _CM2CON1_CON2_POSN                                  0x7
#define _CM2CON1_CON2_POSITION                              0x7
#define _CM2CON1_CON2_SIZE                                  0x1
#define _CM2CON1_CON2_LENGTH                                0x1
#define _CM2CON1_CON2_MASK                                  0x80

// Register: CM1CON
#define CM1CON CM1CON
extern volatile unsigned char           CM1CON              __at(0xFD2);
#ifndef _LIB_BUILD
asm("CM1CON equ 0FD2h");
#endif
// aliases
extern volatile unsigned char           CM1CON1             __at(0xFD2);
#ifndef _LIB_BUILD
asm("CM1CON1 equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCH                    :2;
        unsigned CREF                   :1;
        unsigned EVPOL                  :2;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
        unsigned                        :1;
        unsigned EVPOL0                 :1;
        unsigned EVPOL1                 :1;
    };
    struct {
        unsigned C1CH0                  :1;
        unsigned C1CH1                  :1;
        unsigned CREF1                  :1;
        unsigned EVPOL01                :1;
        unsigned EVPOL11                :1;
        unsigned CPOL1                  :1;
        unsigned COE1                   :1;
        unsigned CON1                   :1;
    };
    struct {
        unsigned CCH01                  :1;
        unsigned CCH11                  :1;
    };
} CM1CONbits_t;
extern volatile CM1CONbits_t CM1CONbits __at(0xFD2);
// bitfield macros
#define _CM1CON_CCH_POSN                                    0x0
#define _CM1CON_CCH_POSITION                                0x0
#define _CM1CON_CCH_SIZE                                    0x2
#define _CM1CON_CCH_LENGTH                                  0x2
#define _CM1CON_CCH_MASK                                    0x3
#define _CM1CON_CREF_POSN                                   0x2
#define _CM1CON_CREF_POSITION                               0x2
#define _CM1CON_CREF_SIZE                                   0x1
#define _CM1CON_CREF_LENGTH                                 0x1
#define _CM1CON_CREF_MASK                                   0x4
#define _CM1CON_EVPOL_POSN                                  0x3
#define _CM1CON_EVPOL_POSITION                              0x3
#define _CM1CON_EVPOL_SIZE                                  0x2
#define _CM1CON_EVPOL_LENGTH                                0x2
#define _CM1CON_EVPOL_MASK                                  0x18
#define _CM1CON_CPOL_POSN                                   0x5
#define _CM1CON_CPOL_POSITION                               0x5
#define _CM1CON_CPOL_SIZE                                   0x1
#define _CM1CON_CPOL_LENGTH                                 0x1
#define _CM1CON_CPOL_MASK                                   0x20
#define _CM1CON_COE_POSN                                    0x6
#define _CM1CON_COE_POSITION                                0x6
#define _CM1CON_COE_SIZE                                    0x1
#define _CM1CON_COE_LENGTH                                  0x1
#define _CM1CON_COE_MASK                                    0x40
#define _CM1CON_CON_POSN                                    0x7
#define _CM1CON_CON_POSITION                                0x7
#define _CM1CON_CON_SIZE                                    0x1
#define _CM1CON_CON_LENGTH                                  0x1
#define _CM1CON_CON_MASK                                    0x80
#define _CM1CON_CCH0_POSN                                   0x0
#define _CM1CON_CCH0_POSITION                               0x0
#define _CM1CON_CCH0_SIZE                                   0x1
#define _CM1CON_CCH0_LENGTH                                 0x1
#define _CM1CON_CCH0_MASK                                   0x1
#define _CM1CON_CCH1_POSN                                   0x1
#define _CM1CON_CCH1_POSITION                               0x1
#define _CM1CON_CCH1_SIZE                                   0x1
#define _CM1CON_CCH1_LENGTH                                 0x1
#define _CM1CON_CCH1_MASK                                   0x2
#define _CM1CON_EVPOL0_POSN                                 0x3
#define _CM1CON_EVPOL0_POSITION                             0x3
#define _CM1CON_EVPOL0_SIZE                                 0x1
#define _CM1CON_EVPOL0_LENGTH                               0x1
#define _CM1CON_EVPOL0_MASK                                 0x8
#define _CM1CON_EVPOL1_POSN                                 0x4
#define _CM1CON_EVPOL1_POSITION                             0x4
#define _CM1CON_EVPOL1_SIZE                                 0x1
#define _CM1CON_EVPOL1_LENGTH                               0x1
#define _CM1CON_EVPOL1_MASK                                 0x10
#define _CM1CON_C1CH0_POSN                                  0x0
#define _CM1CON_C1CH0_POSITION                              0x0
#define _CM1CON_C1CH0_SIZE                                  0x1
#define _CM1CON_C1CH0_LENGTH                                0x1
#define _CM1CON_C1CH0_MASK                                  0x1
#define _CM1CON_C1CH1_POSN                                  0x1
#define _CM1CON_C1CH1_POSITION                              0x1
#define _CM1CON_C1CH1_SIZE                                  0x1
#define _CM1CON_C1CH1_LENGTH                                0x1
#define _CM1CON_C1CH1_MASK                                  0x2
#define _CM1CON_CREF1_POSN                                  0x2
#define _CM1CON_CREF1_POSITION                              0x2
#define _CM1CON_CREF1_SIZE                                  0x1
#define _CM1CON_CREF1_LENGTH                                0x1
#define _CM1CON_CREF1_MASK                                  0x4
#define _CM1CON_EVPOL01_POSN                                0x3
#define _CM1CON_EVPOL01_POSITION                            0x3
#define _CM1CON_EVPOL01_SIZE                                0x1
#define _CM1CON_EVPOL01_LENGTH                              0x1
#define _CM1CON_EVPOL01_MASK                                0x8
#define _CM1CON_EVPOL11_POSN                                0x4
#define _CM1CON_EVPOL11_POSITION                            0x4
#define _CM1CON_EVPOL11_SIZE                                0x1
#define _CM1CON_EVPOL11_LENGTH                              0x1
#define _CM1CON_EVPOL11_MASK                                0x10
#define _CM1CON_CPOL1_POSN                                  0x5
#define _CM1CON_CPOL1_POSITION                              0x5
#define _CM1CON_CPOL1_SIZE                                  0x1
#define _CM1CON_CPOL1_LENGTH                                0x1
#define _CM1CON_CPOL1_MASK                                  0x20
#define _CM1CON_COE1_POSN                                   0x6
#define _CM1CON_COE1_POSITION                               0x6
#define _CM1CON_COE1_SIZE                                   0x1
#define _CM1CON_COE1_LENGTH                                 0x1
#define _CM1CON_COE1_MASK                                   0x40
#define _CM1CON_CON1_POSN                                   0x7
#define _CM1CON_CON1_POSITION                               0x7
#define _CM1CON_CON1_SIZE                                   0x1
#define _CM1CON_CON1_LENGTH                                 0x1
#define _CM1CON_CON1_MASK                                   0x80
#define _CM1CON_CCH01_POSN                                  0x0
#define _CM1CON_CCH01_POSITION                              0x0
#define _CM1CON_CCH01_SIZE                                  0x1
#define _CM1CON_CCH01_LENGTH                                0x1
#define _CM1CON_CCH01_MASK                                  0x1
#define _CM1CON_CCH11_POSN                                  0x1
#define _CM1CON_CCH11_POSITION                              0x1
#define _CM1CON_CCH11_SIZE                                  0x1
#define _CM1CON_CCH11_LENGTH                                0x1
#define _CM1CON_CCH11_MASK                                  0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCH                    :2;
        unsigned CREF                   :1;
        unsigned EVPOL                  :2;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
        unsigned                        :1;
        unsigned EVPOL0                 :1;
        unsigned EVPOL1                 :1;
    };
    struct {
        unsigned C1CH0                  :1;
        unsigned C1CH1                  :1;
        unsigned CREF1                  :1;
        unsigned EVPOL01                :1;
        unsigned EVPOL11                :1;
        unsigned CPOL1                  :1;
        unsigned COE1                   :1;
        unsigned CON1                   :1;
    };
    struct {
        unsigned CCH01                  :1;
        unsigned CCH11                  :1;
    };
} CM1CON1bits_t;
extern volatile CM1CON1bits_t CM1CON1bits __at(0xFD2);
// bitfield macros
#define _CM1CON1_CCH_POSN                                   0x0
#define _CM1CON1_CCH_POSITION                               0x0
#define _CM1CON1_CCH_SIZE                                   0x2
#define _CM1CON1_CCH_LENGTH                                 0x2
#define _CM1CON1_CCH_MASK                                   0x3
#define _CM1CON1_CREF_POSN                                  0x2
#define _CM1CON1_CREF_POSITION                              0x2
#define _CM1CON1_CREF_SIZE                                  0x1
#define _CM1CON1_CREF_LENGTH                                0x1
#define _CM1CON1_CREF_MASK                                  0x4
#define _CM1CON1_EVPOL_POSN                                 0x3
#define _CM1CON1_EVPOL_POSITION                             0x3
#define _CM1CON1_EVPOL_SIZE                                 0x2
#define _CM1CON1_EVPOL_LENGTH                               0x2
#define _CM1CON1_EVPOL_MASK                                 0x18
#define _CM1CON1_CPOL_POSN                                  0x5
#define _CM1CON1_CPOL_POSITION                              0x5
#define _CM1CON1_CPOL_SIZE                                  0x1
#define _CM1CON1_CPOL_LENGTH                                0x1
#define _CM1CON1_CPOL_MASK                                  0x20
#define _CM1CON1_COE_POSN                                   0x6
#define _CM1CON1_COE_POSITION                               0x6
#define _CM1CON1_COE_SIZE                                   0x1
#define _CM1CON1_COE_LENGTH                                 0x1
#define _CM1CON1_COE_MASK                                   0x40
#define _CM1CON1_CON_POSN                                   0x7
#define _CM1CON1_CON_POSITION                               0x7
#define _CM1CON1_CON_SIZE                                   0x1
#define _CM1CON1_CON_LENGTH                                 0x1
#define _CM1CON1_CON_MASK                                   0x80
#define _CM1CON1_CCH0_POSN                                  0x0
#define _CM1CON1_CCH0_POSITION                              0x0
#define _CM1CON1_CCH0_SIZE                                  0x1
#define _CM1CON1_CCH0_LENGTH                                0x1
#define _CM1CON1_CCH0_MASK                                  0x1
#define _CM1CON1_CCH1_POSN                                  0x1
#define _CM1CON1_CCH1_POSITION                              0x1
#define _CM1CON1_CCH1_SIZE                                  0x1
#define _CM1CON1_CCH1_LENGTH                                0x1
#define _CM1CON1_CCH1_MASK                                  0x2
#define _CM1CON1_EVPOL0_POSN                                0x3
#define _CM1CON1_EVPOL0_POSITION                            0x3
#define _CM1CON1_EVPOL0_SIZE                                0x1
#define _CM1CON1_EVPOL0_LENGTH                              0x1
#define _CM1CON1_EVPOL0_MASK                                0x8
#define _CM1CON1_EVPOL1_POSN                                0x4
#define _CM1CON1_EVPOL1_POSITION                            0x4
#define _CM1CON1_EVPOL1_SIZE                                0x1
#define _CM1CON1_EVPOL1_LENGTH                              0x1
#define _CM1CON1_EVPOL1_MASK                                0x10
#define _CM1CON1_C1CH0_POSN                                 0x0
#define _CM1CON1_C1CH0_POSITION                             0x0
#define _CM1CON1_C1CH0_SIZE                                 0x1
#define _CM1CON1_C1CH0_LENGTH                               0x1
#define _CM1CON1_C1CH0_MASK                                 0x1
#define _CM1CON1_C1CH1_POSN                                 0x1
#define _CM1CON1_C1CH1_POSITION                             0x1
#define _CM1CON1_C1CH1_SIZE                                 0x1
#define _CM1CON1_C1CH1_LENGTH                               0x1
#define _CM1CON1_C1CH1_MASK                                 0x2
#define _CM1CON1_CREF1_POSN                                 0x2
#define _CM1CON1_CREF1_POSITION                             0x2
#define _CM1CON1_CREF1_SIZE                                 0x1
#define _CM1CON1_CREF1_LENGTH                               0x1
#define _CM1CON1_CREF1_MASK                                 0x4
#define _CM1CON1_EVPOL01_POSN                               0x3
#define _CM1CON1_EVPOL01_POSITION                           0x3
#define _CM1CON1_EVPOL01_SIZE                               0x1
#define _CM1CON1_EVPOL01_LENGTH                             0x1
#define _CM1CON1_EVPOL01_MASK                               0x8
#define _CM1CON1_EVPOL11_POSN                               0x4
#define _CM1CON1_EVPOL11_POSITION                           0x4
#define _CM1CON1_EVPOL11_SIZE                               0x1
#define _CM1CON1_EVPOL11_LENGTH                             0x1
#define _CM1CON1_EVPOL11_MASK                               0x10
#define _CM1CON1_CPOL1_POSN                                 0x5
#define _CM1CON1_CPOL1_POSITION                             0x5
#define _CM1CON1_CPOL1_SIZE                                 0x1
#define _CM1CON1_CPOL1_LENGTH                               0x1
#define _CM1CON1_CPOL1_MASK                                 0x20
#define _CM1CON1_COE1_POSN                                  0x6
#define _CM1CON1_COE1_POSITION                              0x6
#define _CM1CON1_COE1_SIZE                                  0x1
#define _CM1CON1_COE1_LENGTH                                0x1
#define _CM1CON1_COE1_MASK                                  0x40
#define _CM1CON1_CON1_POSN                                  0x7
#define _CM1CON1_CON1_POSITION                              0x7
#define _CM1CON1_CON1_SIZE                                  0x1
#define _CM1CON1_CON1_LENGTH                                0x1
#define _CM1CON1_CON1_MASK                                  0x80
#define _CM1CON1_CCH01_POSN                                 0x0
#define _CM1CON1_CCH01_POSITION                             0x0
#define _CM1CON1_CCH01_SIZE                                 0x1
#define _CM1CON1_CCH01_LENGTH                               0x1
#define _CM1CON1_CCH01_MASK                                 0x1
#define _CM1CON1_CCH11_POSN                                 0x1
#define _CM1CON1_CCH11_POSITION                             0x1
#define _CM1CON1_CCH11_SIZE                                 0x1
#define _CM1CON1_CCH11_LENGTH                               0x1
#define _CM1CON1_CCH11_MASK                                 0x2

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
        unsigned                        :1;
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
extern volatile __bit _DEPRECATED       ABDEN               __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDEN1>
extern volatile __bit                   ABDEN1              __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 ABDEN1_bit          _BIT_ACCESS(BAUDCON1,0)
// BAUDCON2<ABDEN2>
extern volatile __bit                   ABDEN2              __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 ABDEN2_bit          _BIT_ACCESS(BAUDCON2,0)
// BAUDCON1<ABDOVF>
extern volatile __bit _DEPRECATED       ABDOVF              __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON1,7)
// BAUDCON1<ABDOVF1>
extern volatile __bit                   ABDOVF1             __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ABDOVF1_bit         _BIT_ACCESS(BAUDCON1,7)
// BAUDCON2<ABDOVF2>
extern volatile __bit                   ABDOVF2             __at(0x7BE7);	// @ (0xF7C * 8 + 7)
#define                                 ABDOVF2_bit         _BIT_ACCESS(BAUDCON2,7)
// SSP1CON2<ACKDT>
extern volatile __bit _DEPRECATED       ACKDT               __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKDT1>
extern volatile __bit                   ACKDT1              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT1_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP2CON2<ACKDT2>
extern volatile __bit                   ACKDT2              __at(0x7B8D);	// @ (0xF71 * 8 + 5)
#define                                 ACKDT2_bit          _BIT_ACCESS(SSP2CON2,5)
// SSP1CON2<ACKEN>
extern volatile __bit _DEPRECATED       ACKEN               __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKEN1>
extern volatile __bit                   ACKEN1              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN1_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP2CON2<ACKEN2>
extern volatile __bit                   ACKEN2              __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 ACKEN2_bit          _BIT_ACCESS(SSP2CON2,4)
// SSP1CON2<ACKSTAT>
extern volatile __bit _DEPRECATED       ACKSTAT             __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSP1CON2,6)
// SSP1CON2<ACKSTAT1>
extern volatile __bit                   ACKSTAT1            __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT1_bit        _BIT_ACCESS(SSP1CON2,6)
// SSP2CON2<ACKSTAT2>
extern volatile __bit                   ACKSTAT2            __at(0x7B8E);	// @ (0xF71 * 8 + 6)
#define                                 ACKSTAT2_bit        _BIT_ACCESS(SSP2CON2,6)
// ADCON1<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON1,3)
// ADCON1<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCAL>
extern volatile __bit _DEPRECATED       ADCAL               __at(0x7E0E);	// @ (0xFC1 * 8 + 6)
#define                                 ADCAL_bit           _BIT_ACCESS(ADCON1,6)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,2)
// RCSTA1<ADDEN>
extern volatile __bit _DEPRECATED       ADDEN               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA1,3)
// RCSTA1<ADDEN1>
extern volatile __bit                   ADDEN1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 ADDEN1_bit          _BIT_ACCESS(RCSTA1,3)
// RCSTA2<ADDEN2>
extern volatile __bit                   ADDEN2              __at(0x7CE3);	// @ (0xF9C * 8 + 3)
#define                                 ADDEN2_bit          _BIT_ACCESS(RCSTA2,3)
// RCSTA1<ADEN>
extern volatile __bit                   ADEN                __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 ADEN_bit            _BIT_ACCESS(RCSTA1,3)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0x7E0F);	// @ (0xFC1 * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,7)
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
extern volatile __bit _DEPRECATED       ADMSK1              __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK1_bit          _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<ADMSK11>
extern volatile __bit                   ADMSK11             __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 ADMSK11_bit         _BIT_ACCESS(SSP1CON2,1)
// SSP2CON2<ADMSK12>
extern volatile __bit                   ADMSK12             __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 ADMSK12_bit         _BIT_ACCESS(SSP2CON2,1)
// SSP1CON2<ADMSK2>
extern volatile __bit _DEPRECATED       ADMSK2              __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK2_bit          _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<ADMSK21>
extern volatile __bit                   ADMSK21             __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 ADMSK21_bit         _BIT_ACCESS(SSP1CON2,2)
// SSP2CON2<ADMSK22>
extern volatile __bit                   ADMSK22             __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 ADMSK22_bit         _BIT_ACCESS(SSP2CON2,2)
// SSP1CON2<ADMSK3>
extern volatile __bit _DEPRECATED       ADMSK3              __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK3_bit          _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<ADMSK31>
extern volatile __bit                   ADMSK31             __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 ADMSK31_bit         _BIT_ACCESS(SSP1CON2,3)
// SSP2CON2<ADMSK32>
extern volatile __bit                   ADMSK32             __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 ADMSK32_bit         _BIT_ACCESS(SSP2CON2,3)
// SSP1CON2<ADMSK4>
extern volatile __bit _DEPRECATED       ADMSK4              __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK4_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ADMSK41>
extern volatile __bit                   ADMSK41             __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ADMSK41_bit         _BIT_ACCESS(SSP1CON2,4)
// SSP2CON2<ADMSK42>
extern volatile __bit                   ADMSK42             __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 ADMSK42_bit         _BIT_ACCESS(SSP2CON2,4)
// SSP1CON2<ADMSK5>
extern volatile __bit _DEPRECATED       ADMSK5              __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK5_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ADMSK51>
extern volatile __bit                   ADMSK51             __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ADMSK51_bit         _BIT_ACCESS(SSP1CON2,5)
// SSP2CON2<ADMSK52>
extern volatile __bit                   ADMSK52             __at(0x7B8D);	// @ (0xF71 * 8 + 5)
#define                                 ADMSK52_bit         _BIT_ACCESS(SSP2CON2,5)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x7E10);	// @ (0xFC2 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// PMCONH<ADRMUX0>
extern volatile __bit                   ADRMUX0             __at(0x7AFB);	// @ (0xF5F * 8 + 3)
#define                                 ADRMUX0_bit         _BIT_ACCESS(PMCONH,3)
// PMCONH<ADRMUX1>
extern volatile __bit                   ADRMUX1             __at(0x7AFC);	// @ (0xF5F * 8 + 4)
#define                                 ADRMUX1_bit         _BIT_ACCESS(PMCONH,4)
// PMCONL<ALP>
extern volatile __bit                   ALP                 __at(0x7AF5);	// @ (0xF5E * 8 + 5)
#define                                 ALP_bit             _BIT_ACCESS(PMCONL,5)
// ALRMCFG<ALRMEN>
extern volatile __bit                   ALRMEN              __at(0x7C8F);	// @ (0xF91 * 8 + 7)
#define                                 ALRMEN_bit          _BIT_ACCESS(ALRMCFG,7)
// ALRMCFG<ALRMPTR0>
extern volatile __bit                   ALRMPTR0            __at(0x7C88);	// @ (0xF91 * 8 + 0)
#define                                 ALRMPTR0_bit        _BIT_ACCESS(ALRMCFG,0)
// ALRMCFG<ALRMPTR1>
extern volatile __bit                   ALRMPTR1            __at(0x7C89);	// @ (0xF91 * 8 + 1)
#define                                 ALRMPTR1_bit        _BIT_ACCESS(ALRMCFG,1)
// ALRMCFG<AMASK0>
extern volatile __bit                   AMASK0              __at(0x7C8A);	// @ (0xF91 * 8 + 2)
#define                                 AMASK0_bit          _BIT_ACCESS(ALRMCFG,2)
// ALRMCFG<AMASK1>
extern volatile __bit                   AMASK1              __at(0x7C8B);	// @ (0xF91 * 8 + 3)
#define                                 AMASK1_bit          _BIT_ACCESS(ALRMCFG,3)
// ALRMCFG<AMASK2>
extern volatile __bit                   AMASK2              __at(0x7C8C);	// @ (0xF91 * 8 + 4)
#define                                 AMASK2_bit          _BIT_ACCESS(ALRMCFG,4)
// ALRMCFG<AMASK3>
extern volatile __bit                   AMASK3              __at(0x7C8D);	// @ (0xF91 * 8 + 5)
#define                                 AMASK3_bit          _BIT_ACCESS(ALRMCFG,5)
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTB<AN10>
extern volatile __bit                   AN10                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 AN10_bit            _BIT_ACCESS(PORTB,1)
// PORTC<AN11>
extern volatile __bit                   AN11                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 AN11_bit            _BIT_ACCESS(PORTC,2)
// PORTB<AN12>
extern volatile __bit                   AN12                __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 AN12_bit            _BIT_ACCESS(PORTB,0)
// PORTA<AN2>
extern volatile __bit                   AN2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 AN2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<AN4>
extern volatile __bit                   AN4                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// PORTE<AN5>
extern volatile __bit                   AN5                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 AN5_bit             _BIT_ACCESS(PORTE,0)
// PORTE<AN6>
extern volatile __bit                   AN6                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 AN6_bit             _BIT_ACCESS(PORTE,1)
// PORTE<AN7>
extern volatile __bit                   AN7                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 AN7_bit             _BIT_ACCESS(PORTE,2)
// PORTB<AN8>
extern volatile __bit                   AN8                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 AN8_bit             _BIT_ACCESS(PORTB,2)
// PORTB<AN9>
extern volatile __bit                   AN9                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 AN9_bit             _BIT_ACCESS(PORTB,3)
// ALRMRPT<ARPT0>
extern volatile __bit                   ARPT0               __at(0x7C80);	// @ (0xF90 * 8 + 0)
#define                                 ARPT0_bit           _BIT_ACCESS(ALRMRPT,0)
// ALRMRPT<ARPT1>
extern volatile __bit                   ARPT1               __at(0x7C81);	// @ (0xF90 * 8 + 1)
#define                                 ARPT1_bit           _BIT_ACCESS(ALRMRPT,1)
// ALRMRPT<ARPT2>
extern volatile __bit                   ARPT2               __at(0x7C82);	// @ (0xF90 * 8 + 2)
#define                                 ARPT2_bit           _BIT_ACCESS(ALRMRPT,2)
// ALRMRPT<ARPT3>
extern volatile __bit                   ARPT3               __at(0x7C83);	// @ (0xF90 * 8 + 3)
#define                                 ARPT3_bit           _BIT_ACCESS(ALRMRPT,3)
// ALRMRPT<ARPT4>
extern volatile __bit                   ARPT4               __at(0x7C84);	// @ (0xF90 * 8 + 4)
#define                                 ARPT4_bit           _BIT_ACCESS(ALRMRPT,4)
// ALRMRPT<ARPT5>
extern volatile __bit                   ARPT5               __at(0x7C85);	// @ (0xF90 * 8 + 5)
#define                                 ARPT5_bit           _BIT_ACCESS(ALRMRPT,5)
// ALRMRPT<ARPT6>
extern volatile __bit                   ARPT6               __at(0x7C86);	// @ (0xF90 * 8 + 6)
#define                                 ARPT6_bit           _BIT_ACCESS(ALRMRPT,6)
// ALRMRPT<ARPT7>
extern volatile __bit                   ARPT7               __at(0x7C87);	// @ (0xF90 * 8 + 7)
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
// PIE3<BCL2IE>
extern volatile __bit                   BCL2IE              __at(0x7D1E);	// @ (0xFA3 * 8 + 6)
#define                                 BCL2IE_bit          _BIT_ACCESS(PIE3,6)
// PIR3<BCL2IF>
extern volatile __bit                   BCL2IF              __at(0x7D26);	// @ (0xFA4 * 8 + 6)
#define                                 BCL2IF_bit          _BIT_ACCESS(PIR3,6)
// IPR3<BCL2IP>
extern volatile __bit                   BCL2IP              __at(0x7D2E);	// @ (0xFA5 * 8 + 6)
#define                                 BCL2IP_bit          _BIT_ACCESS(IPR3,6)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// IPR2<BCLIP>
extern volatile __bit                   BCLIP               __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCLIP_bit           _BIT_ACCESS(IPR2,3)
// PMCONL<BEP>
extern volatile __bit                   BEP                 __at(0x7AF2);	// @ (0xF5E * 8 + 2)
#define                                 BEP_bit             _BIT_ACCESS(PMCONL,2)
// SSP1STAT<BF>
extern volatile __bit _DEPRECATED       BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSP1STAT,0)
// SSP1STAT<BF1>
extern volatile __bit                   BF1                 __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF1_bit             _BIT_ACCESS(SSP1STAT,0)
// SSP2STAT<BF2>
extern volatile __bit                   BF2                 __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 BF2_bit             _BIT_ACCESS(SSP2STAT,0)
// HLVDCON<BGVST>
extern volatile __bit                   BGVST               __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 BGVST_bit           _BIT_ACCESS(HLVDCON,6)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// BAUDCON1<BRG16>
extern volatile __bit _DEPRECATED       BRG16               __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON1,3)
// BAUDCON1<BRG161>
extern volatile __bit                   BRG161              __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 BRG161_bit          _BIT_ACCESS(BAUDCON1,3)
// BAUDCON2<BRG162>
extern volatile __bit                   BRG162              __at(0x7BE3);	// @ (0xF7C * 8 + 3)
#define                                 BRG162_bit          _BIT_ACCESS(BAUDCON2,3)
// TXSTA1<BRGH>
extern volatile __bit _DEPRECATED       BRGH                __at(0x7D6A);	// @ (0xFAD * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA1,2)
// TXSTA1<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D6A);	// @ (0xFAD * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA1,2)
// TXSTA2<BRGH2>
extern volatile __bit                   BRGH2               __at(0x7D42);	// @ (0xFA8 * 8 + 2)
#define                                 BRGH2_bit           _BIT_ACCESS(TXSTA2,2)
// PMMODEH<BUSY>
extern volatile __bit                   BUSY                __at(0x7AEF);	// @ (0xF5D * 8 + 7)
#define                                 BUSY_bit            _BIT_ACCESS(PMMODEH,7)
// CM1CON<C1CH0>
extern volatile __bit                   C1CH0               __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 C1CH0_bit           _BIT_ACCESS(CM1CON,0)
// CM1CON<C1CH1>
extern volatile __bit                   C1CH1               __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 C1CH1_bit           _BIT_ACCESS(CM1CON,1)
// PORTA<C1INA>
extern volatile __bit                   C1INA               __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 C1INA_bit           _BIT_ACCESS(PORTA,0)
// PORTA<C1INB>
extern volatile __bit                   C1INB               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 C1INB_bit           _BIT_ACCESS(PORTA,3)
// PORTA<C2INA>
extern volatile __bit                   C2INA               __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 C2INA_bit           _BIT_ACCESS(PORTA,1)
// PORTA<C2INB>
extern volatile __bit                   C2INB               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 C2INB_bit           _BIT_ACCESS(PORTA,2)
// RTCCAL<CAL0>
extern volatile __bit                   CAL0                __at(0x79F0);	// @ (0xF3E * 8 + 0)
#define                                 CAL0_bit            _BIT_ACCESS(RTCCAL,0)
// RTCCAL<CAL1>
extern volatile __bit                   CAL1                __at(0x79F1);	// @ (0xF3E * 8 + 1)
#define                                 CAL1_bit            _BIT_ACCESS(RTCCAL,1)
// RTCCAL<CAL2>
extern volatile __bit                   CAL2                __at(0x79F2);	// @ (0xF3E * 8 + 2)
#define                                 CAL2_bit            _BIT_ACCESS(RTCCAL,2)
// RTCCAL<CAL3>
extern volatile __bit                   CAL3                __at(0x79F3);	// @ (0xF3E * 8 + 3)
#define                                 CAL3_bit            _BIT_ACCESS(RTCCAL,3)
// RTCCAL<CAL4>
extern volatile __bit                   CAL4                __at(0x79F4);	// @ (0xF3E * 8 + 4)
#define                                 CAL4_bit            _BIT_ACCESS(RTCCAL,4)
// RTCCAL<CAL5>
extern volatile __bit                   CAL5                __at(0x79F5);	// @ (0xF3E * 8 + 5)
#define                                 CAL5_bit            _BIT_ACCESS(RTCCAL,5)
// RTCCAL<CAL6>
extern volatile __bit                   CAL6                __at(0x79F6);	// @ (0xF3E * 8 + 6)
#define                                 CAL6_bit            _BIT_ACCESS(RTCCAL,6)
// RTCCAL<CAL7>
extern volatile __bit                   CAL7                __at(0x79F7);	// @ (0xF3E * 8 + 7)
#define                                 CAL7_bit            _BIT_ACCESS(RTCCAL,7)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CM1CON<CCH0>
extern volatile __bit _DEPRECATED       CCH0                __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 CCH0_bit            _BIT_ACCESS(CM1CON,0)
// CM1CON<CCH01>
extern volatile __bit                   CCH01               __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 CCH01_bit           _BIT_ACCESS(CM1CON,0)
// CM2CON<CCH02>
extern volatile __bit                   CCH02               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 CCH02_bit           _BIT_ACCESS(CM2CON,0)
// CM1CON<CCH1>
extern volatile __bit _DEPRECATED       CCH1                __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 CCH1_bit            _BIT_ACCESS(CM1CON,1)
// CM1CON<CCH11>
extern volatile __bit                   CCH11               __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 CCH11_bit           _BIT_ACCESS(CM1CON,1)
// CM2CON<CCH12>
extern volatile __bit                   CCH12               __at(0x7E89);	// @ (0xFD1 * 8 + 1)
#define                                 CCH12_bit           _BIT_ACCESS(CM2CON,1)
// PORTE<CCP10>
extern volatile __bit                   CCP10               __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CCP10_bit           _BIT_ACCESS(PORTE,2)
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
extern volatile __bit                   CCP1M0              __at(0x7DD0);	// @ (0xFBA * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0x7DD1);	// @ (0xFBA * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0x7DD2);	// @ (0xFBA * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0x7DD3);	// @ (0xFBA * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1X>
extern volatile __bit                   CCP1X               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 CCP1X_bit           _BIT_ACCESS(CCP1CON,5)
// CCP1CON<CCP1Y>
extern volatile __bit                   CCP1Y               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 CCP1Y_bit           _BIT_ACCESS(CCP1CON,4)
// PORTC<CCP2>
extern volatile __bit                   CCP2                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 CCP2_bit            _BIT_ACCESS(PORTC,1)
// PORTE<CCP2E>
extern volatile __bit                   CCP2E               __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 CCP2E_bit           _BIT_ACCESS(PORTE,7)
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
extern volatile __bit                   CCP2M0              __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2X>
extern volatile __bit                   CCP2X               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 CCP2X_bit           _BIT_ACCESS(CCP2CON,5)
// CCP2CON<CCP2Y>
extern volatile __bit                   CCP2Y               __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 CCP2Y_bit           _BIT_ACCESS(CCP2CON,4)
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        _BIT_ACCESS(PORTB,3)
// PORTE<CCP6E>
extern volatile __bit                   CCP6E               __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 CCP6E_bit           _BIT_ACCESS(PORTE,6)
// ALRMCFG<CHIME>
extern volatile __bit                   CHIME               __at(0x7C8E);	// @ (0xF91 * 8 + 6)
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
// PORTC<CK1>
extern volatile __bit                   CK1                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK1_bit             _BIT_ACCESS(PORTC,6)
// SSP1STAT<CKE>
extern volatile __bit _DEPRECATED       CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSP1STAT,6)
// SSP1STAT<CKE1>
extern volatile __bit                   CKE1                __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE1_bit            _BIT_ACCESS(SSP1STAT,6)
// SSP2STAT<CKE2>
extern volatile __bit                   CKE2                __at(0x7B9E);	// @ (0xF73 * 8 + 6)
#define                                 CKE2_bit            _BIT_ACCESS(SSP2STAT,6)
// SSP1CON1<CKP>
extern volatile __bit _DEPRECATED       CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSP1CON1,4)
// SSP1CON1<CKP1>
extern volatile __bit                   CKP1                __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP1_bit            _BIT_ACCESS(SSP1CON1,4)
// SSP2CON1<CKP2>
extern volatile __bit                   CKP2                __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 CKP2_bit            _BIT_ACCESS(SSP2CON1,4)
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
// PIE2<CM1IE>
extern volatile __bit                   CM1IE               __at(0x7D05);	// @ (0xFA0 * 8 + 5)
#define                                 CM1IE_bit           _BIT_ACCESS(PIE2,5)
// PIR2<CM1IF>
extern volatile __bit                   CM1IF               __at(0x7D0D);	// @ (0xFA1 * 8 + 5)
#define                                 CM1IF_bit           _BIT_ACCESS(PIR2,5)
// IPR2<CM1IP>
extern volatile __bit                   CM1IP               __at(0x7D15);	// @ (0xFA2 * 8 + 5)
#define                                 CM1IP_bit           _BIT_ACCESS(IPR2,5)
// PIE2<CM2IE>
extern volatile __bit                   CM2IE               __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CM2IE_bit           _BIT_ACCESS(PIE2,6)
// PIR2<CM2IF>
extern volatile __bit                   CM2IF               __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CM2IF_bit           _BIT_ACCESS(PIR2,6)
// IPR2<CM2IP>
extern volatile __bit                   CM2IP               __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CM2IP_bit           _BIT_ACCESS(IPR2,6)
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            _BIT_ACCESS(IPR2,6)
// PSTR1CON<CMPL0>
extern volatile __bit _DEPRECATED       CMPL0               __at(0x7DFE);	// @ (0xFBF * 8 + 6)
#define                                 CMPL0_bit           _BIT_ACCESS(PSTR1CON,6)
// PSTR2CON<CMPL02>
extern volatile __bit                   CMPL02              __at(0x7DCE);	// @ (0xFB9 * 8 + 6)
#define                                 CMPL02_bit          _BIT_ACCESS(PSTR2CON,6)
// PSTR1CON<CMPL1>
extern volatile __bit _DEPRECATED       CMPL1               __at(0x7DFF);	// @ (0xFBF * 8 + 7)
#define                                 CMPL1_bit           _BIT_ACCESS(PSTR1CON,7)
// PSTR2CON<CMPL12>
extern volatile __bit                   CMPL12              __at(0x7DCF);	// @ (0xFB9 * 8 + 7)
#define                                 CMPL12_bit          _BIT_ACCESS(PSTR2CON,7)
// CM1CON<COE>
extern volatile __bit _DEPRECATED       COE                 __at(0x7E96);	// @ (0xFD2 * 8 + 6)
#define                                 COE_bit             _BIT_ACCESS(CM1CON,6)
// CM1CON<COE1>
extern volatile __bit                   COE1                __at(0x7E96);	// @ (0xFD2 * 8 + 6)
#define                                 COE1_bit            _BIT_ACCESS(CM1CON,6)
// CM2CON<COE2>
extern volatile __bit                   COE2                __at(0x7E8E);	// @ (0xFD1 * 8 + 6)
#define                                 COE2_bit            _BIT_ACCESS(CM2CON,6)
// CM1CON<CON>
extern volatile __bit _DEPRECATED       CON                 __at(0x7E97);	// @ (0xFD2 * 8 + 7)
#define                                 CON_bit             _BIT_ACCESS(CM1CON,7)
// CM1CON<CON1>
extern volatile __bit                   CON1                __at(0x7E97);	// @ (0xFD2 * 8 + 7)
#define                                 CON1_bit            _BIT_ACCESS(CM1CON,7)
// CM2CON<CON2>
extern volatile __bit                   CON2                __at(0x7E8F);	// @ (0xFD1 * 8 + 7)
#define                                 CON2_bit            _BIT_ACCESS(CM2CON,7)
// CMSTAT<COUT1>
extern volatile __bit                   COUT1               __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 COUT1_bit           _BIT_ACCESS(CMSTAT,0)
// CMSTAT<COUT2>
extern volatile __bit                   COUT2               __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 COUT2_bit           _BIT_ACCESS(CMSTAT,1)
// CM1CON<CPOL>
extern volatile __bit _DEPRECATED       CPOL                __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 CPOL_bit            _BIT_ACCESS(CM1CON,5)
// CM1CON<CPOL1>
extern volatile __bit                   CPOL1               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 CPOL1_bit           _BIT_ACCESS(CM1CON,5)
// CM2CON<CPOL2>
extern volatile __bit                   CPOL2               __at(0x7E8D);	// @ (0xFD1 * 8 + 5)
#define                                 CPOL2_bit           _BIT_ACCESS(CM2CON,5)
// CM1CON<CREF>
extern volatile __bit _DEPRECATED       CREF                __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 CREF_bit            _BIT_ACCESS(CM1CON,2)
// CM1CON<CREF1>
extern volatile __bit                   CREF1               __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 CREF1_bit           _BIT_ACCESS(CM1CON,2)
// CM2CON<CREF2>
extern volatile __bit                   CREF2               __at(0x7E8A);	// @ (0xFD1 * 8 + 2)
#define                                 CREF2_bit           _BIT_ACCESS(CM2CON,2)
// RCSTA1<CREN>
extern volatile __bit _DEPRECATED       CREN                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA1,4)
// RCSTA1<CREN1>
extern volatile __bit                   CREN1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 CREN1_bit           _BIT_ACCESS(RCSTA1,4)
// RCSTA2<CREN2>
extern volatile __bit                   CREN2               __at(0x7CE4);	// @ (0xF9C * 8 + 4)
#define                                 CREN2_bit           _BIT_ACCESS(RCSTA2,4)
// PORTE<CS>
extern volatile __bit                   CS                  __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CS_bit              _BIT_ACCESS(PORTE,2)
// PMADDRH<CS1>
extern volatile __bit                   CS1                 __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 CS1_bit             _BIT_ACCESS(PMADDRH,6)
// PMCONL<CS1P>
extern volatile __bit                   CS1P                __at(0x7AF3);	// @ (0xF5E * 8 + 3)
#define                                 CS1P_bit            _BIT_ACCESS(PMCONL,3)
// PMCONL<CS2P>
extern volatile __bit                   CS2P                __at(0x7AF4);	// @ (0xF5E * 8 + 4)
#define                                 CS2P_bit            _BIT_ACCESS(PMCONL,4)
// PMCONL<CSF0>
extern volatile __bit                   CSF0                __at(0x7AF6);	// @ (0xF5E * 8 + 6)
#define                                 CSF0_bit            _BIT_ACCESS(PMCONL,6)
// PMCONL<CSF1>
extern volatile __bit                   CSF1                __at(0x7AF7);	// @ (0xF5E * 8 + 7)
#define                                 CSF1_bit            _BIT_ACCESS(PMCONL,7)
// TXSTA1<CSRC>
extern volatile __bit _DEPRECATED       CSRC                __at(0x7D6F);	// @ (0xFAD * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA1,7)
// TXSTA1<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D6F);	// @ (0xFAD * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA1,7)
// TXSTA2<CSRC2>
extern volatile __bit                   CSRC2               __at(0x7D47);	// @ (0xFA8 * 8 + 7)
#define                                 CSRC2_bit           _BIT_ACCESS(TXSTA2,7)
// PORTB<CTEDG1>
extern volatile __bit                   CTEDG1              __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 CTEDG1_bit          _BIT_ACCESS(PORTB,2)
// PORTB<CTEDG2>
extern volatile __bit                   CTEDG2              __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CTEDG2_bit          _BIT_ACCESS(PORTB,3)
// CTMUCONH<CTMUEN>
extern volatile __bit                   CTMUEN              __at(0x7D9F);	// @ (0xFB3 * 8 + 7)
#define                                 CTMUEN_bit          _BIT_ACCESS(CTMUCONH,7)
// PIE3<CTMUIE>
extern volatile __bit                   CTMUIE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 CTMUIE_bit          _BIT_ACCESS(PIE3,2)
// PIR3<CTMUIF>
extern volatile __bit                   CTMUIF              __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 CTMUIF_bit          _BIT_ACCESS(PIR3,2)
// IPR3<CTMUIP>
extern volatile __bit                   CTMUIP              __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 CTMUIP_bit          _BIT_ACCESS(IPR3,2)
// CTMUCONH<CTMUSIDL>
extern volatile __bit                   CTMUSIDL            __at(0x7D9D);	// @ (0xFB3 * 8 + 5)
#define                                 CTMUSIDL_bit        _BIT_ACCESS(CTMUCONH,5)
// PORTC<CTPLS>
extern volatile __bit                   CTPLS               __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CTPLS_bit           _BIT_ACCESS(PORTC,2)
// CTMUCONH<CTTRIG>
extern volatile __bit                   CTTRIG              __at(0x7D98);	// @ (0xFB3 * 8 + 0)
#define                                 CTTRIG_bit          _BIT_ACCESS(CTMUCONH,0)
// CVRCON<CVR0>
extern volatile __bit                   CVR0                __at(0x7A98);	// @ (0xF53 * 8 + 0)
#define                                 CVR0_bit            _BIT_ACCESS(CVRCON,0)
// CVRCON<CVR1>
extern volatile __bit                   CVR1                __at(0x7A99);	// @ (0xF53 * 8 + 1)
#define                                 CVR1_bit            _BIT_ACCESS(CVRCON,1)
// CVRCON<CVR2>
extern volatile __bit                   CVR2                __at(0x7A9A);	// @ (0xF53 * 8 + 2)
#define                                 CVR2_bit            _BIT_ACCESS(CVRCON,2)
// CVRCON<CVR3>
extern volatile __bit                   CVR3                __at(0x7A9B);	// @ (0xF53 * 8 + 3)
#define                                 CVR3_bit            _BIT_ACCESS(CVRCON,3)
// PORTA<CVREF_MINUS>
extern volatile __bit                   CVREF_MINUS         __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 CVREF_MINUS_bit     _BIT_ACCESS(PORTA,2)
// CVRCON<CVREN>
extern volatile __bit                   CVREN               __at(0x7A9F);	// @ (0xF53 * 8 + 7)
#define                                 CVREN_bit           _BIT_ACCESS(CVRCON,7)
// CVRCON<CVROE>
extern volatile __bit                   CVROE               __at(0x7A9E);	// @ (0xF53 * 8 + 6)
#define                                 CVROE_bit           _BIT_ACCESS(CVRCON,6)
// CVRCON<CVROEN>
extern volatile __bit                   CVROEN              __at(0x7A9E);	// @ (0xF53 * 8 + 6)
#define                                 CVROEN_bit          _BIT_ACCESS(CVRCON,6)
// CVRCON<CVRR>
extern volatile __bit                   CVRR                __at(0x7A9D);	// @ (0xF53 * 8 + 5)
#define                                 CVRR_bit            _BIT_ACCESS(CVRCON,5)
// CVRCON<CVRSS>
extern volatile __bit                   CVRSS               __at(0x7A9C);	// @ (0xF53 * 8 + 4)
#define                                 CVRSS_bit           _BIT_ACCESS(CVRCON,4)
// SSP1STAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DA1>
extern volatile __bit                   DA1                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA1_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<DA2>
extern volatile __bit                   DA2                 __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 DA2_bit             _BIT_ACCESS(SSP2STAT,5)
// SSP1STAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<DATA_ADDRESS2>
extern volatile __bit                   DATA_ADDRESS2       __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 DATA_ADDRESS2_bit   _BIT_ACCESS(SSP2STAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// DMACON2<DLYCYC0>
extern volatile __bit                   DLYCYC0             __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 DLYCYC0_bit         _BIT_ACCESS(DMACON2,4)
// DMACON2<DLYCYC1>
extern volatile __bit                   DLYCYC1             __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 DLYCYC1_bit         _BIT_ACCESS(DMACON2,5)
// DMACON2<DLYCYC2>
extern volatile __bit                   DLYCYC2             __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 DLYCYC2_bit         _BIT_ACCESS(DMACON2,6)
// DMACON2<DLYCYC3>
extern volatile __bit                   DLYCYC3             __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 DLYCYC3_bit         _BIT_ACCESS(DMACON2,7)
// DMACON1<DLYINTEN>
extern volatile __bit                   DLYINTEN            __at(0x7C41);	// @ (0xF88 * 8 + 1)
#define                                 DLYINTEN_bit        _BIT_ACCESS(DMACON1,1)
// DMACON1<DMAEN>
extern volatile __bit                   DMAEN               __at(0x7C40);	// @ (0xF88 * 8 + 0)
#define                                 DMAEN_bit           _BIT_ACCESS(DMACON1,0)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// WDTCON<DS>
extern volatile __bit                   DS                  __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 DS_bit              _BIT_ACCESS(WDTCON,3)
// DSCONL<DSBOR>
extern volatile __bit                   DSBOR               __at(0x7A61);	// @ (0xF4C * 8 + 1)
#define                                 DSBOR_bit           _BIT_ACCESS(DSCONL,1)
// DSCONH<DSEN>
extern volatile __bit                   DSEN                __at(0x7A6F);	// @ (0xF4D * 8 + 7)
#define                                 DSEN_bit            _BIT_ACCESS(DSCONH,7)
// DSWAKEL<DSFLT>
extern volatile __bit                   DSFLT               __at(0x7A57);	// @ (0xF4A * 8 + 7)
#define                                 DSFLT_bit           _BIT_ACCESS(DSWAKEL,7)
// DSWAKEH<DSINT0>
extern volatile __bit                   DSINT0              __at(0x7A58);	// @ (0xF4B * 8 + 0)
#define                                 DSINT0_bit          _BIT_ACCESS(DSWAKEH,0)
// DSWAKEL<DSMCLR>
extern volatile __bit                   DSMCLR              __at(0x7A52);	// @ (0xF4A * 8 + 2)
#define                                 DSMCLR_bit          _BIT_ACCESS(DSWAKEL,2)
// DSWAKEL<DSPOR>
extern volatile __bit                   DSPOR               __at(0x7A50);	// @ (0xF4A * 8 + 0)
#define                                 DSPOR_bit           _BIT_ACCESS(DSWAKEL,0)
// DSWAKEL<DSRTC>
extern volatile __bit                   DSRTC               __at(0x7A53);	// @ (0xF4A * 8 + 3)
#define                                 DSRTC_bit           _BIT_ACCESS(DSWAKEL,3)
// DSWAKEL<DSULP>
extern volatile __bit                   DSULP               __at(0x7A55);	// @ (0xF4A * 8 + 5)
#define                                 DSULP_bit           _BIT_ACCESS(DSWAKEL,5)
// DSCONH<DSULPEN>
extern volatile __bit                   DSULPEN             __at(0x7A69);	// @ (0xF4D * 8 + 1)
#define                                 DSULPEN_bit         _BIT_ACCESS(DSCONH,1)
// DSWAKEL<DSWDT>
extern volatile __bit                   DSWDT               __at(0x7A54);	// @ (0xF4A * 8 + 4)
#define                                 DSWDT_bit           _BIT_ACCESS(DSWAKEL,4)
// PORTC<DT1>
extern volatile __bit                   DT1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT1_bit             _BIT_ACCESS(PORTC,7)
// BAUDCON1<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<DTRXP1>
extern volatile __bit                   DTRXP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 DTRXP1_bit          _BIT_ACCESS(BAUDCON1,5)
// BAUDCON2<DTRXP2>
extern volatile __bit                   DTRXP2              __at(0x7BE5);	// @ (0xF7C * 8 + 5)
#define                                 DTRXP2_bit          _BIT_ACCESS(BAUDCON2,5)
// DMACON1<DUPLEX0>
extern volatile __bit                   DUPLEX0             __at(0x7C42);	// @ (0xF88 * 8 + 2)
#define                                 DUPLEX0_bit         _BIT_ACCESS(DMACON1,2)
// DMACON1<DUPLEX1>
extern volatile __bit                   DUPLEX1             __at(0x7C43);	// @ (0xF88 * 8 + 3)
#define                                 DUPLEX1_bit         _BIT_ACCESS(DMACON1,3)
// SSP1STAT<D_A>
extern volatile __bit                   D_A                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<D_A2>
extern volatile __bit                   D_A2                __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 D_A2_bit            _BIT_ACCESS(SSP2STAT,5)
// SSP2STAT<D_NOT_A2>
extern volatile __bit                   D_NOT_A2            __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 D_NOT_A2_bit        _BIT_ACCESS(SSP2STAT,5)
// SSP1STAT<D_nA>
extern volatile __bit _DEPRECATED       D_nA                __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<D_nA2>
extern volatile __bit                   D_nA2               __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 D_nA2_bit           _BIT_ACCESS(SSP2STAT,5)
// PR2<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 EBDIS_bit           _BIT_ACCESS(PR2,7)
// ECCP1AS<ECCP1AS0>
extern volatile __bit                   ECCP1AS0            __at(0x7DF4);	// @ (0xFBE * 8 + 4)
#define                                 ECCP1AS0_bit        _BIT_ACCESS(ECCP1AS,4)
// ECCP1AS<ECCP1AS1>
extern volatile __bit                   ECCP1AS1            __at(0x7DF5);	// @ (0xFBE * 8 + 5)
#define                                 ECCP1AS1_bit        _BIT_ACCESS(ECCP1AS,5)
// ECCP1AS<ECCP1AS2>
extern volatile __bit                   ECCP1AS2            __at(0x7DF6);	// @ (0xFBE * 8 + 6)
#define                                 ECCP1AS2_bit        _BIT_ACCESS(ECCP1AS,6)
// ECCP1AS<ECCP1ASE>
extern volatile __bit                   ECCP1ASE            __at(0x7DF7);	// @ (0xFBE * 8 + 7)
#define                                 ECCP1ASE_bit        _BIT_ACCESS(ECCP1AS,7)
// ODCON1<ECCP1OD>
extern volatile __bit                   ECCP1OD             __at(0x7A10);	// @ (0xF42 * 8 + 0)
#define                                 ECCP1OD_bit         _BIT_ACCESS(ODCON1,0)
// ECCP2AS<ECCP2AS0>
extern volatile __bit                   ECCP2AS0            __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 ECCP2AS0_bit        _BIT_ACCESS(ECCP2AS,4)
// ECCP2AS<ECCP2AS1>
extern volatile __bit                   ECCP2AS1            __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 ECCP2AS1_bit        _BIT_ACCESS(ECCP2AS,5)
// ECCP2AS<ECCP2AS2>
extern volatile __bit                   ECCP2AS2            __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 ECCP2AS2_bit        _BIT_ACCESS(ECCP2AS,6)
// ECCP2AS<ECCP2ASE>
extern volatile __bit                   ECCP2ASE            __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
#define                                 ECCP2ASE_bit        _BIT_ACCESS(ECCP2AS,7)
// ODCON1<ECCP2OD>
extern volatile __bit                   ECCP2OD             __at(0x7A11);	// @ (0xF42 * 8 + 1)
#define                                 ECCP2OD_bit         _BIT_ACCESS(ODCON1,1)
// CTMUCONL<EDG1POL>
extern volatile __bit                   EDG1POL             __at(0x7D94);	// @ (0xFB2 * 8 + 4)
#define                                 EDG1POL_bit         _BIT_ACCESS(CTMUCONL,4)
// CTMUCONL<EDG1SEL0>
extern volatile __bit                   EDG1SEL0            __at(0x7D92);	// @ (0xFB2 * 8 + 2)
#define                                 EDG1SEL0_bit        _BIT_ACCESS(CTMUCONL,2)
// CTMUCONL<EDG1SEL1>
extern volatile __bit                   EDG1SEL1            __at(0x7D93);	// @ (0xFB2 * 8 + 3)
#define                                 EDG1SEL1_bit        _BIT_ACCESS(CTMUCONL,3)
// CTMUCONL<EDG1STAT>
extern volatile __bit                   EDG1STAT            __at(0x7D90);	// @ (0xFB2 * 8 + 0)
#define                                 EDG1STAT_bit        _BIT_ACCESS(CTMUCONL,0)
// CTMUCONL<EDG2POL>
extern volatile __bit                   EDG2POL             __at(0x7D97);	// @ (0xFB2 * 8 + 7)
#define                                 EDG2POL_bit         _BIT_ACCESS(CTMUCONL,7)
// CTMUCONL<EDG2SEL0>
extern volatile __bit                   EDG2SEL0            __at(0x7D95);	// @ (0xFB2 * 8 + 5)
#define                                 EDG2SEL0_bit        _BIT_ACCESS(CTMUCONL,5)
// CTMUCONL<EDG2SEL1>
extern volatile __bit                   EDG2SEL1            __at(0x7D96);	// @ (0xFB2 * 8 + 6)
#define                                 EDG2SEL1_bit        _BIT_ACCESS(CTMUCONL,6)
// CTMUCONL<EDG2STAT>
extern volatile __bit                   EDG2STAT            __at(0x7D91);	// @ (0xFB2 * 8 + 1)
#define                                 EDG2STAT_bit        _BIT_ACCESS(CTMUCONL,1)
// CTMUCONH<EDGEN>
extern volatile __bit                   EDGEN               __at(0x7D9B);	// @ (0xFB3 * 8 + 3)
#define                                 EDGEN_bit           _BIT_ACCESS(CTMUCONH,3)
// CTMUCONH<EDGSEQEN>
extern volatile __bit                   EDGSEQEN            __at(0x7D9A);	// @ (0xFB3 * 8 + 2)
#define                                 EDGSEQEN_bit        _BIT_ACCESS(CTMUCONH,2)
// CM1CON<EVPOL0>
extern volatile __bit _DEPRECATED       EVPOL0              __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 EVPOL0_bit          _BIT_ACCESS(CM1CON,3)
// CM1CON<EVPOL01>
extern volatile __bit                   EVPOL01             __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 EVPOL01_bit         _BIT_ACCESS(CM1CON,3)
// CM2CON<EVPOL02>
extern volatile __bit                   EVPOL02             __at(0x7E8B);	// @ (0xFD1 * 8 + 3)
#define                                 EVPOL02_bit         _BIT_ACCESS(CM2CON,3)
// CM1CON<EVPOL1>
extern volatile __bit _DEPRECATED       EVPOL1              __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 EVPOL1_bit          _BIT_ACCESS(CM1CON,4)
// CM1CON<EVPOL11>
extern volatile __bit                   EVPOL11             __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 EVPOL11_bit         _BIT_ACCESS(CM1CON,4)
// CM2CON<EVPOL12>
extern volatile __bit                   EVPOL12             __at(0x7E8C);	// @ (0xFD1 * 8 + 4)
#define                                 EVPOL12_bit         _BIT_ACCESS(CM2CON,4)
// RCSTA1<FERR>
extern volatile __bit _DEPRECATED       FERR                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA1,2)
// RCSTA1<FERR1>
extern volatile __bit                   FERR1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 FERR1_bit           _BIT_ACCESS(RCSTA1,2)
// RCSTA2<FERR2>
extern volatile __bit                   FERR2               __at(0x7CE2);	// @ (0xF9C * 8 + 2)
#define                                 FERR2_bit           _BIT_ACCESS(RCSTA2,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// SSP1CON2<GCEN>
extern volatile __bit _DEPRECATED       GCEN                __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSP1CON2,7)
// SSP1CON2<GCEN1>
extern volatile __bit                   GCEN1               __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN1_bit           _BIT_ACCESS(SSP1CON2,7)
// SSP2CON2<GCEN2>
extern volatile __bit                   GCEN2               __at(0x7B8F);	// @ (0xF71 * 8 + 7)
#define                                 GCEN2_bit           _BIT_ACCESS(SSP2CON2,7)
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
extern volatile __bit                   HALFSEC             __at(0x79FB);	// @ (0xF3F * 8 + 3)
#define                                 HALFSEC_bit         _BIT_ACCESS(RTCCFG,3)
// HLVDCON<HLVDEN>
extern volatile __bit                   HLVDEN              __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 HLVDEN_bit          _BIT_ACCESS(HLVDCON,4)
// PORTA<HLVDIN>
extern volatile __bit                   HLVDIN              __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 HLVDIN_bit          _BIT_ACCESS(PORTA,5)
// HLVDCON<HLVDL0>
extern volatile __bit                   HLVDL0              __at(0x7C28);	// @ (0xF85 * 8 + 0)
#define                                 HLVDL0_bit          _BIT_ACCESS(HLVDCON,0)
// HLVDCON<HLVDL1>
extern volatile __bit                   HLVDL1              __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 HLVDL1_bit          _BIT_ACCESS(HLVDCON,1)
// HLVDCON<HLVDL2>
extern volatile __bit                   HLVDL2              __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 HLVDL2_bit          _BIT_ACCESS(HLVDCON,2)
// HLVDCON<HLVDL3>
extern volatile __bit                   HLVDL3              __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 HLVDL3_bit          _BIT_ACCESS(HLVDCON,3)
// SSP1STAT<I2C_DAT>
extern volatile __bit                   I2C_DAT             __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 I2C_DAT_bit         _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<I2C_DAT2>
extern volatile __bit                   I2C_DAT2            __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 I2C_DAT2_bit        _BIT_ACCESS(SSP2STAT,5)
// SSP1STAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 I2C_READ_bit        _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<I2C_READ2>
extern volatile __bit                   I2C_READ2           __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 I2C_READ2_bit       _BIT_ACCESS(SSP2STAT,2)
// SSP1STAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 I2C_START_bit       _BIT_ACCESS(SSP1STAT,3)
// SSP2STAT<I2C_START2>
extern volatile __bit                   I2C_START2          __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 I2C_START2_bit      _BIT_ACCESS(SSP2STAT,3)
// SSP1STAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 I2C_STOP_bit        _BIT_ACCESS(SSP1STAT,4)
// SSP2STAT<I2C_STOP2>
extern volatile __bit                   I2C_STOP2           __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 I2C_STOP2_bit       _BIT_ACCESS(SSP2STAT,4)
// PMSTATH<IB0F>
extern volatile __bit                   IB0F                __at(0x7AA8);	// @ (0xF55 * 8 + 0)
#define                                 IB0F_bit            _BIT_ACCESS(PMSTATH,0)
// PMSTATH<IB1F>
extern volatile __bit                   IB1F                __at(0x7AA9);	// @ (0xF55 * 8 + 1)
#define                                 IB1F_bit            _BIT_ACCESS(PMSTATH,1)
// PMSTATH<IB2F>
extern volatile __bit                   IB2F                __at(0x7AAA);	// @ (0xF55 * 8 + 2)
#define                                 IB2F_bit            _BIT_ACCESS(PMSTATH,2)
// PMSTATH<IB3F>
extern volatile __bit                   IB3F                __at(0x7AAB);	// @ (0xF55 * 8 + 3)
#define                                 IB3F_bit            _BIT_ACCESS(PMSTATH,3)
// PMSTATH<IBF>
extern volatile __bit                   IBF                 __at(0x7AAF);	// @ (0xF55 * 8 + 7)
#define                                 IBF_bit             _BIT_ACCESS(PMSTATH,7)
// PMSTATH<IBOV>
extern volatile __bit                   IBOV                __at(0x7AAE);	// @ (0xF55 * 8 + 6)
#define                                 IBOV_bit            _BIT_ACCESS(PMSTATH,6)
// CTMUCONH<IDISSEN>
extern volatile __bit                   IDISSEN             __at(0x7D99);	// @ (0xFB3 * 8 + 1)
#define                                 IDISSEN_bit         _BIT_ACCESS(CTMUCONH,1)
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(OSCCON,7)
// PMMODEH<INCM0>
extern volatile __bit                   INCM0               __at(0x7AEB);	// @ (0xF5D * 8 + 3)
#define                                 INCM0_bit           _BIT_ACCESS(PMMODEH,3)
// PMMODEH<INCM1>
extern volatile __bit                   INCM1               __at(0x7AEC);	// @ (0xF5D * 8 + 4)
#define                                 INCM1_bit           _BIT_ACCESS(PMMODEH,4)
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
// DMACON2<INTLVL0>
extern volatile __bit                   INTLVL0             __at(0x7C30);	// @ (0xF86 * 8 + 0)
#define                                 INTLVL0_bit         _BIT_ACCESS(DMACON2,0)
// DMACON2<INTLVL1>
extern volatile __bit                   INTLVL1             __at(0x7C31);	// @ (0xF86 * 8 + 1)
#define                                 INTLVL1_bit         _BIT_ACCESS(DMACON2,1)
// DMACON2<INTLVL2>
extern volatile __bit                   INTLVL2             __at(0x7C32);	// @ (0xF86 * 8 + 2)
#define                                 INTLVL2_bit         _BIT_ACCESS(DMACON2,2)
// DMACON2<INTLVL3>
extern volatile __bit                   INTLVL3             __at(0x7C33);	// @ (0xF86 * 8 + 3)
#define                                 INTLVL3_bit         _BIT_ACCESS(DMACON2,3)
// OSCTUNE<INTSRC>
extern volatile __bit                   INTSRC              __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 INTSRC_bit          _BIT_ACCESS(OSCTUNE,7)
// PPSCON<IOLOCK>
extern volatile __bit                   IOLOCK              __at(0x77F8);	// @ (0xEFF * 8 + 0)
#define                                 IOLOCK_bit          _BIT_ACCESS(PPSCON,0)
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
extern volatile __bit                   IRNG0               __at(0x7D88);	// @ (0xFB1 * 8 + 0)
#define                                 IRNG0_bit           _BIT_ACCESS(CTMUICON,0)
// CTMUICON<IRNG1>
extern volatile __bit                   IRNG1               __at(0x7D89);	// @ (0xFB1 * 8 + 1)
#define                                 IRNG1_bit           _BIT_ACCESS(CTMUICON,1)
// PMMODEH<IRQM0>
extern volatile __bit                   IRQM0               __at(0x7AED);	// @ (0xF5D * 8 + 5)
#define                                 IRQM0_bit           _BIT_ACCESS(PMMODEH,5)
// PMMODEH<IRQM1>
extern volatile __bit                   IRQM1               __at(0x7AEE);	// @ (0xF5D * 8 + 6)
#define                                 IRQM1_bit           _BIT_ACCESS(PMMODEH,6)
// HLVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(HLVDCON,5)
// CTMUICON<ITRIM0>
extern volatile __bit                   ITRIM0              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 ITRIM0_bit          _BIT_ACCESS(CTMUICON,2)
// CTMUICON<ITRIM1>
extern volatile __bit                   ITRIM1              __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 ITRIM1_bit          _BIT_ACCESS(CTMUICON,3)
// CTMUICON<ITRIM2>
extern volatile __bit                   ITRIM2              __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 ITRIM2_bit          _BIT_ACCESS(CTMUICON,4)
// CTMUICON<ITRIM3>
extern volatile __bit                   ITRIM3              __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 ITRIM3_bit          _BIT_ACCESS(CTMUICON,5)
// CTMUICON<ITRIM4>
extern volatile __bit                   ITRIM4              __at(0x7D8E);	// @ (0xFB1 * 8 + 6)
#define                                 ITRIM4_bit          _BIT_ACCESS(CTMUICON,6)
// CTMUICON<ITRIM5>
extern volatile __bit                   ITRIM5              __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
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
// LATE<LATE2>
extern volatile __bit                   LATE2               __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LATE2_bit           _BIT_ACCESS(LATE,2)
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
// LATE<LE2>
extern volatile __bit                   LE2                 __at(0x7C6A);	// @ (0xF8D * 8 + 2)
#define                                 LE2_bit             _BIT_ACCESS(LATE,2)
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
// WDTCON<LVDSTAT>
extern volatile __bit                   LVDSTAT             __at(0x7E06);	// @ (0xFC0 * 8 + 6)
#define                                 LVDSTAT_bit         _BIT_ACCESS(WDTCON,6)
// PMMODEH<MODE0>
extern volatile __bit                   MODE0               __at(0x7AE8);	// @ (0xF5D * 8 + 0)
#define                                 MODE0_bit           _BIT_ACCESS(PMMODEH,0)
// PMMODEH<MODE1>
extern volatile __bit                   MODE1               __at(0x7AE9);	// @ (0xF5D * 8 + 1)
#define                                 MODE1_bit           _BIT_ACCESS(PMMODEH,1)
// PMMODEH<MODE16>
extern volatile __bit                   MODE16              __at(0x7AEA);	// @ (0xF5D * 8 + 2)
#define                                 MODE16_bit          _BIT_ACCESS(PMMODEH,2)
// SSP1ADD<MSK0>
extern volatile __bit _DEPRECATED       MSK0                __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK01>
extern volatile __bit                   MSK01               __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK01_bit           _BIT_ACCESS(SSP1ADD,0)
// SSP2ADD<MSK02>
extern volatile __bit                   MSK02               __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 MSK02_bit           _BIT_ACCESS(SSP2ADD,0)
// SSP1ADD<MSK1>
extern volatile __bit _DEPRECATED       MSK1                __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK11>
extern volatile __bit                   MSK11               __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK11_bit           _BIT_ACCESS(SSP1ADD,1)
// SSP2ADD<MSK12>
extern volatile __bit                   MSK12               __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 MSK12_bit           _BIT_ACCESS(SSP2ADD,1)
// SSP1ADD<MSK2>
extern volatile __bit _DEPRECATED       MSK2                __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK21>
extern volatile __bit                   MSK21               __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK21_bit           _BIT_ACCESS(SSP1ADD,2)
// SSP2ADD<MSK22>
extern volatile __bit                   MSK22               __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 MSK22_bit           _BIT_ACCESS(SSP2ADD,2)
// SSP1ADD<MSK3>
extern volatile __bit _DEPRECATED       MSK3                __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK31>
extern volatile __bit                   MSK31               __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK31_bit           _BIT_ACCESS(SSP1ADD,3)
// SSP2ADD<MSK32>
extern volatile __bit                   MSK32               __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 MSK32_bit           _BIT_ACCESS(SSP2ADD,3)
// SSP1ADD<MSK4>
extern volatile __bit _DEPRECATED       MSK4                __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK41>
extern volatile __bit                   MSK41               __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK41_bit           _BIT_ACCESS(SSP1ADD,4)
// SSP2ADD<MSK42>
extern volatile __bit                   MSK42               __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 MSK42_bit           _BIT_ACCESS(SSP2ADD,4)
// SSP1ADD<MSK5>
extern volatile __bit _DEPRECATED       MSK5                __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK51>
extern volatile __bit                   MSK51               __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK51_bit           _BIT_ACCESS(SSP1ADD,5)
// SSP2ADD<MSK52>
extern volatile __bit                   MSK52               __at(0x7BA5);	// @ (0xF74 * 8 + 5)
#define                                 MSK52_bit           _BIT_ACCESS(SSP2ADD,5)
// SSP1ADD<MSK6>
extern volatile __bit _DEPRECATED       MSK6                __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK61>
extern volatile __bit                   MSK61               __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK61_bit           _BIT_ACCESS(SSP1ADD,6)
// SSP2ADD<MSK62>
extern volatile __bit                   MSK62               __at(0x7BA6);	// @ (0xF74 * 8 + 6)
#define                                 MSK62_bit           _BIT_ACCESS(SSP2ADD,6)
// SSP1ADD<MSK7>
extern volatile __bit _DEPRECATED       MSK7                __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSP1ADD,7)
// SSP1ADD<MSK71>
extern volatile __bit                   MSK71               __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK71_bit           _BIT_ACCESS(SSP1ADD,7)
// SSP2ADD<MSK72>
extern volatile __bit                   MSK72               __at(0x7BA7);	// @ (0xF74 * 8 + 7)
#define                                 MSK72_bit           _BIT_ACCESS(SSP2ADD,7)
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        _BIT_ACCESS(STATUS,4)
// SSP1STAT<NOT_A>
extern volatile __bit                   NOT_A               __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_A_bit           _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<NOT_A2>
extern volatile __bit                   NOT_A2              __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 NOT_A2_bit          _BIT_ACCESS(SSP2STAT,5)
// SSP1STAT<NOT_ADDRESS>
extern volatile __bit                   NOT_ADDRESS         __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 NOT_ADDRESS_bit     _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<NOT_ADDRESS2>
extern volatile __bit                   NOT_ADDRESS2        __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 NOT_ADDRESS2_bit    _BIT_ACCESS(SSP2STAT,5)
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
// RCSTA1<NOT_RC8>
extern volatile __bit                   NOT_RC8             __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 NOT_RC8_bit         _BIT_ACCESS(RCSTA1,6)
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// PORTA<NOT_SS1>
extern volatile __bit                   NOT_SS1             __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 NOT_SS1_bit         _BIT_ACCESS(PORTA,5)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// TXSTA1<NOT_TX8>
extern volatile __bit                   NOT_TX8             __at(0x7D6E);	// @ (0xFAD * 8 + 6)
#define                                 NOT_TX8_bit         _BIT_ACCESS(TXSTA1,6)
// SSP1STAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<NOT_W2>
extern volatile __bit                   NOT_W2              __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 NOT_W2_bit          _BIT_ACCESS(SSP2STAT,2)
// SSP1STAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<NOT_WRITE2>
extern volatile __bit                   NOT_WRITE2          __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 NOT_WRITE2_bit      _BIT_ACCESS(SSP2STAT,2)
// PMSTATL<OB0E>
extern volatile __bit                   OB0E                __at(0x7AA0);	// @ (0xF54 * 8 + 0)
#define                                 OB0E_bit            _BIT_ACCESS(PMSTATL,0)
// PMSTATL<OB1E>
extern volatile __bit                   OB1E                __at(0x7AA1);	// @ (0xF54 * 8 + 1)
#define                                 OB1E_bit            _BIT_ACCESS(PMSTATL,1)
// PMSTATL<OB2E>
extern volatile __bit                   OB2E                __at(0x7AA2);	// @ (0xF54 * 8 + 2)
#define                                 OB2E_bit            _BIT_ACCESS(PMSTATL,2)
// PMSTATL<OB3E>
extern volatile __bit                   OB3E                __at(0x7AA3);	// @ (0xF54 * 8 + 3)
#define                                 OB3E_bit            _BIT_ACCESS(PMSTATL,3)
// PMSTATL<OBE>
extern volatile __bit                   OBE                 __at(0x7AA7);	// @ (0xF54 * 8 + 7)
#define                                 OBE_bit             _BIT_ACCESS(PMSTATL,7)
// PMSTATL<OBUF>
extern volatile __bit                   OBUF                __at(0x7AA6);	// @ (0xF54 * 8 + 6)
#define                                 OBUF_bit            _BIT_ACCESS(PMSTATL,6)
// RCSTA1<OERR>
extern volatile __bit _DEPRECATED       OERR                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA1,1)
// RCSTA1<OERR1>
extern volatile __bit                   OERR1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 OERR1_bit           _BIT_ACCESS(RCSTA1,1)
// RCSTA2<OERR2>
extern volatile __bit                   OERR2               __at(0x7CE1);	// @ (0xF9C * 8 + 1)
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
// ECCP1DEL<P1DC0>
extern volatile __bit                   P1DC0               __at(0x7DE8);	// @ (0xFBD * 8 + 0)
#define                                 P1DC0_bit           _BIT_ACCESS(ECCP1DEL,0)
// ECCP1DEL<P1DC1>
extern volatile __bit                   P1DC1               __at(0x7DE9);	// @ (0xFBD * 8 + 1)
#define                                 P1DC1_bit           _BIT_ACCESS(ECCP1DEL,1)
// ECCP1DEL<P1DC2>
extern volatile __bit                   P1DC2               __at(0x7DEA);	// @ (0xFBD * 8 + 2)
#define                                 P1DC2_bit           _BIT_ACCESS(ECCP1DEL,2)
// ECCP1DEL<P1DC3>
extern volatile __bit                   P1DC3               __at(0x7DEB);	// @ (0xFBD * 8 + 3)
#define                                 P1DC3_bit           _BIT_ACCESS(ECCP1DEL,3)
// ECCP1DEL<P1DC4>
extern volatile __bit                   P1DC4               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 P1DC4_bit           _BIT_ACCESS(ECCP1DEL,4)
// ECCP1DEL<P1DC5>
extern volatile __bit                   P1DC5               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 P1DC5_bit           _BIT_ACCESS(ECCP1DEL,5)
// ECCP1DEL<P1DC6>
extern volatile __bit                   P1DC6               __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 P1DC6_bit           _BIT_ACCESS(ECCP1DEL,6)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x7DD6);	// @ (0xFBA * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x7DD7);	// @ (0xFBA * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// ECCP1DEL<P1RSEN>
extern volatile __bit                   P1RSEN              __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 P1RSEN_bit          _BIT_ACCESS(ECCP1DEL,7)
// SSP2STAT<P2>
extern volatile __bit                   P2                  __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 P2_bit              _BIT_ACCESS(SSP2STAT,4)
// ECCP2DEL<P2DC0>
extern volatile __bit _DEPRECATED       P2DC0               __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 P2DC0_bit           _BIT_ACCESS(ECCP2DEL,0)
// PSTR2CON<P2DC02>
extern volatile __bit                   P2DC02              __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 P2DC02_bit          _BIT_ACCESS(PSTR2CON,0)
// PSTR2CON<P2DC0CON>
extern volatile __bit                   P2DC0CON            __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 P2DC0CON_bit        _BIT_ACCESS(PSTR2CON,0)
// ECCP2DEL<P2DC1>
extern volatile __bit _DEPRECATED       P2DC1               __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 P2DC1_bit           _BIT_ACCESS(ECCP2DEL,1)
// PSTR2CON<P2DC12>
extern volatile __bit                   P2DC12              __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 P2DC12_bit          _BIT_ACCESS(PSTR2CON,1)
// PSTR2CON<P2DC1CON>
extern volatile __bit                   P2DC1CON            __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 P2DC1CON_bit        _BIT_ACCESS(PSTR2CON,1)
// ECCP2DEL<P2DC2>
extern volatile __bit _DEPRECATED       P2DC2               __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 P2DC2_bit           _BIT_ACCESS(ECCP2DEL,2)
// PSTR2CON<P2DC22>
extern volatile __bit                   P2DC22              __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 P2DC22_bit          _BIT_ACCESS(PSTR2CON,2)
// PSTR2CON<P2DC2CON>
extern volatile __bit                   P2DC2CON            __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 P2DC2CON_bit        _BIT_ACCESS(PSTR2CON,2)
// ECCP2DEL<P2DC3>
extern volatile __bit _DEPRECATED       P2DC3               __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 P2DC3_bit           _BIT_ACCESS(ECCP2DEL,3)
// PSTR2CON<P2DC32>
extern volatile __bit                   P2DC32              __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 P2DC32_bit          _BIT_ACCESS(PSTR2CON,3)
// PSTR2CON<P2DC3CON>
extern volatile __bit                   P2DC3CON            __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 P2DC3CON_bit        _BIT_ACCESS(PSTR2CON,3)
// ECCP2DEL<P2DC4>
extern volatile __bit _DEPRECATED       P2DC4               __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 P2DC4_bit           _BIT_ACCESS(ECCP2DEL,4)
// PSTR2CON<P2DC42>
extern volatile __bit                   P2DC42              __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 P2DC42_bit          _BIT_ACCESS(PSTR2CON,4)
// PSTR2CON<P2DC4CON>
extern volatile __bit                   P2DC4CON            __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 P2DC4CON_bit        _BIT_ACCESS(PSTR2CON,4)
// ECCP2DEL<P2DC5>
extern volatile __bit _DEPRECATED       P2DC5               __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 P2DC5_bit           _BIT_ACCESS(ECCP2DEL,5)
// PSTR2CON<P2DC52>
extern volatile __bit                   P2DC52              __at(0x7DCD);	// @ (0xFB9 * 8 + 5)
#define                                 P2DC52_bit          _BIT_ACCESS(PSTR2CON,5)
// PSTR2CON<P2DC5CON>
extern volatile __bit                   P2DC5CON            __at(0x7DCD);	// @ (0xFB9 * 8 + 5)
#define                                 P2DC5CON_bit        _BIT_ACCESS(PSTR2CON,5)
// ECCP2DEL<P2DC6>
extern volatile __bit _DEPRECATED       P2DC6               __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 P2DC6_bit           _BIT_ACCESS(ECCP2DEL,6)
// PSTR2CON<P2DC62>
extern volatile __bit                   P2DC62              __at(0x7DCE);	// @ (0xFB9 * 8 + 6)
#define                                 P2DC62_bit          _BIT_ACCESS(PSTR2CON,6)
// PSTR2CON<P2DC6CON>
extern volatile __bit                   P2DC6CON            __at(0x7DCE);	// @ (0xFB9 * 8 + 6)
#define                                 P2DC6CON_bit        _BIT_ACCESS(PSTR2CON,6)
// CCP2CON<P2M0>
extern volatile __bit                   P2M0                __at(0x7DA6);	// @ (0xFB4 * 8 + 6)
#define                                 P2M0_bit            _BIT_ACCESS(CCP2CON,6)
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x7DA7);	// @ (0xFB4 * 8 + 7)
#define                                 P2M1_bit            _BIT_ACCESS(CCP2CON,7)
// ECCP2DEL<P2RSEN>
extern volatile __bit                   P2RSEN              __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 P2RSEN_bit          _BIT_ACCESS(ECCP2DEL,7)
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
// PORTE<PB2>
extern volatile __bit                   PB2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 PB2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<PC2>
extern volatile __bit                   PC2                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 PC2_bit             _BIT_ACCESS(PORTE,1)
// ANCON0<PCFG0>
extern volatile __bit                   PCFG0               __at(0x7A40);	// @ (0xF48 * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ANCON0,0)
// ANCON0<PCFG1>
extern volatile __bit                   PCFG1               __at(0x7A41);	// @ (0xF48 * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ANCON0,1)
// ANCON1<PCFG10>
extern volatile __bit                   PCFG10              __at(0x7A4A);	// @ (0xF49 * 8 + 2)
#define                                 PCFG10_bit          _BIT_ACCESS(ANCON1,2)
// ANCON1<PCFG11>
extern volatile __bit                   PCFG11              __at(0x7A4B);	// @ (0xF49 * 8 + 3)
#define                                 PCFG11_bit          _BIT_ACCESS(ANCON1,3)
// ANCON1<PCFG12>
extern volatile __bit                   PCFG12              __at(0x7A4C);	// @ (0xF49 * 8 + 4)
#define                                 PCFG12_bit          _BIT_ACCESS(ANCON1,4)
// ANCON1<PCFG14>
extern volatile __bit                   PCFG14              __at(0x7A4E);	// @ (0xF49 * 8 + 6)
#define                                 PCFG14_bit          _BIT_ACCESS(ANCON1,6)
// ANCON1<PCFG15>
extern volatile __bit                   PCFG15              __at(0x7A4F);	// @ (0xF49 * 8 + 7)
#define                                 PCFG15_bit          _BIT_ACCESS(ANCON1,7)
// ANCON0<PCFG2>
extern volatile __bit                   PCFG2               __at(0x7A42);	// @ (0xF48 * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ANCON0,2)
// ANCON0<PCFG3>
extern volatile __bit                   PCFG3               __at(0x7A43);	// @ (0xF48 * 8 + 3)
#define                                 PCFG3_bit           _BIT_ACCESS(ANCON0,3)
// ANCON0<PCFG4>
extern volatile __bit                   PCFG4               __at(0x7A44);	// @ (0xF48 * 8 + 4)
#define                                 PCFG4_bit           _BIT_ACCESS(ANCON0,4)
// ANCON0<PCFG5>
extern volatile __bit                   PCFG5               __at(0x7A45);	// @ (0xF48 * 8 + 5)
#define                                 PCFG5_bit           _BIT_ACCESS(ANCON0,5)
// ANCON0<PCFG6>
extern volatile __bit                   PCFG6               __at(0x7A46);	// @ (0xF48 * 8 + 6)
#define                                 PCFG6_bit           _BIT_ACCESS(ANCON0,6)
// ANCON0<PCFG7>
extern volatile __bit                   PCFG7               __at(0x7A47);	// @ (0xF48 * 8 + 7)
#define                                 PCFG7_bit           _BIT_ACCESS(ANCON0,7)
// ANCON1<PCFG8>
extern volatile __bit                   PCFG8               __at(0x7A48);	// @ (0xF49 * 8 + 0)
#define                                 PCFG8_bit           _BIT_ACCESS(ANCON1,0)
// ANCON1<PCFG9>
extern volatile __bit                   PCFG9               __at(0x7A49);	// @ (0xF49 * 8 + 1)
#define                                 PCFG9_bit           _BIT_ACCESS(ANCON1,1)
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
extern volatile __bit _DEPRECATED       PEN                 __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<PEN1>
extern volatile __bit                   PEN1                __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN1_bit            _BIT_ACCESS(SSP1CON2,2)
// SSP2CON2<PEN2>
extern volatile __bit                   PEN2                __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 PEN2_bit            _BIT_ACCESS(SSP2CON2,2)
// PORTB<PGC>
extern volatile __bit                   PGC                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 PGC_bit             _BIT_ACCESS(PORTB,6)
// PORTB<PGD>
extern volatile __bit                   PGD                 __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 PGD_bit             _BIT_ACCESS(PORTB,7)
// OSCTUNE<PLLEN>
extern volatile __bit                   PLLEN               __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 PLLEN_bit           _BIT_ACCESS(OSCTUNE,6)
// PORTB<PMA0>
extern volatile __bit                   PMA0                __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 PMA0_bit            _BIT_ACCESS(PORTB,5)
// PORTB<PMA1>
extern volatile __bit                   PMA1                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 PMA1_bit            _BIT_ACCESS(PORTB,4)
// PORTB<PMA2>
extern volatile __bit                   PMA2                __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 PMA2_bit            _BIT_ACCESS(PORTB,3)
// PORTB<PMA3>
extern volatile __bit                   PMA3                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 PMA3_bit            _BIT_ACCESS(PORTB,2)
// PORTC<PMA4>
extern volatile __bit                   PMA4                __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 PMA4_bit            _BIT_ACCESS(PORTC,7)
// PORTC<PMA5>
extern volatile __bit                   PMA5                __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 PMA5_bit            _BIT_ACCESS(PORTC,6)
// PORTA<PMA6>
extern volatile __bit                   PMA6                __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 PMA6_bit            _BIT_ACCESS(PORTA,0)
// PORTA<PMA7>
extern volatile __bit                   PMA7                __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 PMA7_bit            _BIT_ACCESS(PORTA,1)
// PORTD<PMD0>
extern volatile __bit                   PMD0                __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 PMD0_bit            _BIT_ACCESS(PORTD,0)
// PORTD<PMD1>
extern volatile __bit                   PMD1                __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 PMD1_bit            _BIT_ACCESS(PORTD,1)
// PORTD<PMD2>
extern volatile __bit                   PMD2                __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 PMD2_bit            _BIT_ACCESS(PORTD,2)
// PORTD<PMD3>
extern volatile __bit                   PMD3                __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 PMD3_bit            _BIT_ACCESS(PORTD,3)
// PORTD<PMD4>
extern volatile __bit                   PMD4                __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 PMD4_bit            _BIT_ACCESS(PORTD,4)
// PORTD<PMD5>
extern volatile __bit                   PMD5                __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 PMD5_bit            _BIT_ACCESS(PORTD,5)
// PORTD<PMD6>
extern volatile __bit                   PMD6                __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 PMD6_bit            _BIT_ACCESS(PORTD,6)
// PORTD<PMD7>
extern volatile __bit                   PMD7                __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 PMD7_bit            _BIT_ACCESS(PORTD,7)
// PORTB<PMPBE>
extern volatile __bit                   PMPBE               __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 PMPBE_bit           _BIT_ACCESS(PORTB,1)
// PORTE<PMPCS>
extern volatile __bit                   PMPCS               __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 PMPCS_bit           _BIT_ACCESS(PORTE,2)
// PMCONH<PMPEN>
extern volatile __bit                   PMPEN               __at(0x7AFF);	// @ (0xF5F * 8 + 7)
#define                                 PMPEN_bit           _BIT_ACCESS(PMCONH,7)
// PIE1<PMPIE>
extern volatile __bit                   PMPIE               __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 PMPIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<PMPIF>
extern volatile __bit                   PMPIF               __at(0x7CF7);	// @ (0xF9E * 8 + 7)
#define                                 PMPIF_bit           _BIT_ACCESS(PIR1,7)
// IPR1<PMPIP>
extern volatile __bit                   PMPIP               __at(0x7CFF);	// @ (0xF9F * 8 + 7)
#define                                 PMPIP_bit           _BIT_ACCESS(IPR1,7)
// PORTE<PMPRD>
extern volatile __bit                   PMPRD               __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 PMPRD_bit           _BIT_ACCESS(PORTE,0)
// PADCFG1<PMPTTL>
extern volatile __bit                   PMPTTL              __at(0x79E0);	// @ (0xF3C * 8 + 0)
#define                                 PMPTTL_bit          _BIT_ACCESS(PADCFG1,0)
// PORTE<PMPWR>
extern volatile __bit                   PMPWR               __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 PMPWR_bit           _BIT_ACCESS(PORTE,1)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// PMCONH<PSIDL>
extern volatile __bit                   PSIDL               __at(0x7AFD);	// @ (0xF5F * 8 + 5)
#define                                 PSIDL_bit           _BIT_ACCESS(PMCONH,5)
// PIE1<PSPIE>
extern volatile __bit                   PSPIE               __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 PSPIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<PSPIF>
extern volatile __bit                   PSPIF               __at(0x7CF7);	// @ (0xF9E * 8 + 7)
#define                                 PSPIF_bit           _BIT_ACCESS(PIR1,7)
// IPR1<PSPIP>
extern volatile __bit                   PSPIP               __at(0x7CFF);	// @ (0xF9F * 8 + 7)
#define                                 PSPIP_bit           _BIT_ACCESS(IPR1,7)
// ECCP1AS<PSS1AC0>
extern volatile __bit                   PSS1AC0             __at(0x7DF2);	// @ (0xFBE * 8 + 2)
#define                                 PSS1AC0_bit         _BIT_ACCESS(ECCP1AS,2)
// ECCP1AS<PSS1AC1>
extern volatile __bit                   PSS1AC1             __at(0x7DF3);	// @ (0xFBE * 8 + 3)
#define                                 PSS1AC1_bit         _BIT_ACCESS(ECCP1AS,3)
// ECCP1AS<PSS1BD0>
extern volatile __bit                   PSS1BD0             __at(0x7DF0);	// @ (0xFBE * 8 + 0)
#define                                 PSS1BD0_bit         _BIT_ACCESS(ECCP1AS,0)
// ECCP1AS<PSS1BD1>
extern volatile __bit                   PSS1BD1             __at(0x7DF1);	// @ (0xFBE * 8 + 1)
#define                                 PSS1BD1_bit         _BIT_ACCESS(ECCP1AS,1)
// ECCP2AS<PSS2AC0>
extern volatile __bit                   PSS2AC0             __at(0x7DC2);	// @ (0xFB8 * 8 + 2)
#define                                 PSS2AC0_bit         _BIT_ACCESS(ECCP2AS,2)
// ECCP2AS<PSS2AC1>
extern volatile __bit                   PSS2AC1             __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 PSS2AC1_bit         _BIT_ACCESS(ECCP2AS,3)
// ECCP2AS<PSS2BD0>
extern volatile __bit                   PSS2BD0             __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 PSS2BD0_bit         _BIT_ACCESS(ECCP2AS,0)
// ECCP2AS<PSS2BD1>
extern volatile __bit                   PSS2BD1             __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 PSS2BD1_bit         _BIT_ACCESS(ECCP2AS,1)
// PMCONH<PTBEEN>
extern volatile __bit                   PTBEEN              __at(0x7AFA);	// @ (0xF5F * 8 + 2)
#define                                 PTBEEN_bit          _BIT_ACCESS(PMCONH,2)
// PMEL<PTEN0>
extern volatile __bit                   PTEN0               __at(0x7AB0);	// @ (0xF56 * 8 + 0)
#define                                 PTEN0_bit           _BIT_ACCESS(PMEL,0)
// PMEL<PTEN1>
extern volatile __bit                   PTEN1               __at(0x7AB1);	// @ (0xF56 * 8 + 1)
#define                                 PTEN1_bit           _BIT_ACCESS(PMEL,1)
// PMEH<PTEN10>
extern volatile __bit                   PTEN10              __at(0x7ABA);	// @ (0xF57 * 8 + 2)
#define                                 PTEN10_bit          _BIT_ACCESS(PMEH,2)
// PMEH<PTEN11>
extern volatile __bit                   PTEN11              __at(0x7ABB);	// @ (0xF57 * 8 + 3)
#define                                 PTEN11_bit          _BIT_ACCESS(PMEH,3)
// PMEH<PTEN12>
extern volatile __bit                   PTEN12              __at(0x7ABC);	// @ (0xF57 * 8 + 4)
#define                                 PTEN12_bit          _BIT_ACCESS(PMEH,4)
// PMEH<PTEN13>
extern volatile __bit                   PTEN13              __at(0x7ABD);	// @ (0xF57 * 8 + 5)
#define                                 PTEN13_bit          _BIT_ACCESS(PMEH,5)
// PMEH<PTEN14>
extern volatile __bit                   PTEN14              __at(0x7ABE);	// @ (0xF57 * 8 + 6)
#define                                 PTEN14_bit          _BIT_ACCESS(PMEH,6)
// PMEH<PTEN15>
extern volatile __bit                   PTEN15              __at(0x7ABF);	// @ (0xF57 * 8 + 7)
#define                                 PTEN15_bit          _BIT_ACCESS(PMEH,7)
// PMEL<PTEN2>
extern volatile __bit                   PTEN2               __at(0x7AB2);	// @ (0xF56 * 8 + 2)
#define                                 PTEN2_bit           _BIT_ACCESS(PMEL,2)
// PMEL<PTEN3>
extern volatile __bit                   PTEN3               __at(0x7AB3);	// @ (0xF56 * 8 + 3)
#define                                 PTEN3_bit           _BIT_ACCESS(PMEL,3)
// PMEL<PTEN4>
extern volatile __bit                   PTEN4               __at(0x7AB4);	// @ (0xF56 * 8 + 4)
#define                                 PTEN4_bit           _BIT_ACCESS(PMEL,4)
// PMEL<PTEN5>
extern volatile __bit                   PTEN5               __at(0x7AB5);	// @ (0xF56 * 8 + 5)
#define                                 PTEN5_bit           _BIT_ACCESS(PMEL,5)
// PMEL<PTEN6>
extern volatile __bit                   PTEN6               __at(0x7AB6);	// @ (0xF56 * 8 + 6)
#define                                 PTEN6_bit           _BIT_ACCESS(PMEL,6)
// PMEL<PTEN7>
extern volatile __bit                   PTEN7               __at(0x7AB7);	// @ (0xF56 * 8 + 7)
#define                                 PTEN7_bit           _BIT_ACCESS(PMEL,7)
// PMEH<PTEN8>
extern volatile __bit                   PTEN8               __at(0x7AB8);	// @ (0xF57 * 8 + 0)
#define                                 PTEN8_bit           _BIT_ACCESS(PMEH,0)
// PMEH<PTEN9>
extern volatile __bit                   PTEN9               __at(0x7AB9);	// @ (0xF57 * 8 + 1)
#define                                 PTEN9_bit           _BIT_ACCESS(PMEH,1)
// PMCONH<PTRDEN>
extern volatile __bit                   PTRDEN              __at(0x7AF8);	// @ (0xF5F * 8 + 0)
#define                                 PTRDEN_bit          _BIT_ACCESS(PMCONH,0)
// PMCONH<PTWREN>
extern volatile __bit                   PTWREN              __at(0x7AF9);	// @ (0xF5F * 8 + 1)
#define                                 PTWREN_bit          _BIT_ACCESS(PMCONH,1)
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
// RCSTA1<RC8_9>
extern volatile __bit                   RC8_9               __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA1,6)
// RCSTA2<RC8_92>
extern volatile __bit                   RC8_92              __at(0x7CE6);	// @ (0xF9C * 8 + 6)
#define                                 RC8_92_bit          _BIT_ACCESS(RCSTA2,6)
// RCSTA1<RC9>
extern volatile __bit                   RC9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA1,6)
// RCSTA2<RC92>
extern volatile __bit                   RC92                __at(0x7CE6);	// @ (0xF9C * 8 + 6)
#define                                 RC92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA1<RCD8>
extern volatile __bit                   RCD8                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA1,0)
// RCSTA2<RCD82>
extern volatile __bit                   RCD82               __at(0x7CE0);	// @ (0xF9C * 8 + 0)
#define                                 RCD82_bit           _BIT_ACCESS(RCSTA2,0)
// SSP1CON2<RCEN>
extern volatile __bit _DEPRECATED       RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN1_bit           _BIT_ACCESS(SSP1CON2,3)
// SSP2CON2<RCEN2>
extern volatile __bit                   RCEN2               __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 RCEN2_bit           _BIT_ACCESS(SSP2CON2,3)
// BAUDCON1<RCIDL>
extern volatile __bit _DEPRECATED       RCIDL               __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCIDL1>
extern volatile __bit                   RCIDL1              __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 RCIDL1_bit          _BIT_ACCESS(BAUDCON1,6)
// BAUDCON2<RCIDL2>
extern volatile __bit                   RCIDL2              __at(0x7BE6);	// @ (0xF7C * 8 + 6)
#define                                 RCIDL2_bit          _BIT_ACCESS(BAUDCON2,6)
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
// BAUDCON2<RCMT2>
extern volatile __bit                   RCMT2               __at(0x7BE6);	// @ (0xF7C * 8 + 6)
#define                                 RCMT2_bit           _BIT_ACCESS(BAUDCON2,6)
// PORTA<RCV>
extern volatile __bit                   RCV                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RCV_bit             _BIT_ACCESS(PORTA,5)
// PORTD<RD0>
extern volatile __bit                   RD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit                   RD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// T1CON<RD16>
extern volatile __bit _DEPRECATED       RD16                __at(0x7E69);	// @ (0xFCD * 8 + 1)
#define                                 RD16_bit            _BIT_ACCESS(T1CON,1)
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7BCF);	// @ (0xF79 * 8 + 7)
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
// PORTE<RDPU>
extern volatile __bit                   RDPU                __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 RDPU_bit            _BIT_ACCESS(PORTE,7)
// PMCONL<RDSP>
extern volatile __bit                   RDSP                __at(0x7AF0);	// @ (0xF5E * 8 + 0)
#define                                 RDSP_bit            _BIT_ACCESS(PMCONL,0)
// PORTE<RE0>
extern volatile __bit                   RE0                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit                   RE1                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit                   RE2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<RE6>
extern volatile __bit                   RE6                 __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 RE6_bit             _BIT_ACCESS(PORTE,6)
// PORTE<RE7>
extern volatile __bit                   RE7                 __at(0x7C27);	// @ (0xF84 * 8 + 7)
#define                                 RE7_bit             _BIT_ACCESS(PORTE,7)
// SSP1STAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<READ_WRITE2>
extern volatile __bit                   READ_WRITE2         __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 READ_WRITE2_bit     _BIT_ACCESS(SSP2STAT,2)
// PORTB<REFO>
extern volatile __bit                   REFO                __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 REFO_bit            _BIT_ACCESS(PORTB,2)
// WDTCON<REGSLP>
extern volatile __bit                   REGSLP              __at(0x7E07);	// @ (0xFC0 * 8 + 7)
#define                                 REGSLP_bit          _BIT_ACCESS(WDTCON,7)
// DSCONL<RELEASE>
extern volatile __bit                   RELEASE             __at(0x7A60);	// @ (0xF4C * 8 + 0)
#define                                 RELEASE_bit         _BIT_ACCESS(DSCONL,0)
// PORTE<REPU>
extern volatile __bit                   REPU                __at(0x7C26);	// @ (0xF84 * 8 + 6)
#define                                 REPU_bit            _BIT_ACCESS(PORTE,6)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTA<RJPU>
extern volatile __bit                   RJPU                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RJPU_bit            _BIT_ACCESS(PORTA,7)
// REFOCON<RODIV0>
extern volatile __bit                   RODIV0              __at(0x79E8);	// @ (0xF3D * 8 + 0)
#define                                 RODIV0_bit          _BIT_ACCESS(REFOCON,0)
// REFOCON<RODIV1>
extern volatile __bit                   RODIV1              __at(0x79E9);	// @ (0xF3D * 8 + 1)
#define                                 RODIV1_bit          _BIT_ACCESS(REFOCON,1)
// REFOCON<RODIV2>
extern volatile __bit                   RODIV2              __at(0x79EA);	// @ (0xF3D * 8 + 2)
#define                                 RODIV2_bit          _BIT_ACCESS(REFOCON,2)
// REFOCON<RODIV3>
extern volatile __bit                   RODIV3              __at(0x79EB);	// @ (0xF3D * 8 + 3)
#define                                 RODIV3_bit          _BIT_ACCESS(REFOCON,3)
// REFOCON<ROON>
extern volatile __bit                   ROON                __at(0x79EF);	// @ (0xF3D * 8 + 7)
#define                                 ROON_bit            _BIT_ACCESS(REFOCON,7)
// REFOCON<ROSEL>
extern volatile __bit                   ROSEL               __at(0x79EC);	// @ (0xF3D * 8 + 4)
#define                                 ROSEL_bit           _BIT_ACCESS(REFOCON,4)
// REFOCON<ROSSLP>
extern volatile __bit                   ROSSLP              __at(0x79ED);	// @ (0xF3D * 8 + 5)
#define                                 ROSSLP_bit          _BIT_ACCESS(REFOCON,5)
// PORTA<RP0>
extern volatile __bit                   RP0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RP0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RP1>
extern volatile __bit                   RP1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RP1_bit             _BIT_ACCESS(PORTA,1)
// PORTB<RP10>
extern volatile __bit                   RP10                __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 RP10_bit            _BIT_ACCESS(PORTB,7)
// PORTC<RP11>
extern volatile __bit                   RP11                __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 RP11_bit            _BIT_ACCESS(PORTC,0)
// PORTC<RP12>
extern volatile __bit                   RP12                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 RP12_bit            _BIT_ACCESS(PORTC,1)
// PORTC<RP13>
extern volatile __bit                   RP13                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 RP13_bit            _BIT_ACCESS(PORTC,2)
// PORTC<RP14>
extern volatile __bit                   RP14                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 RP14_bit            _BIT_ACCESS(PORTC,3)
// PORTC<RP15>
extern volatile __bit                   RP15                __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RP15_bit            _BIT_ACCESS(PORTC,4)
// PORTC<RP16>
extern volatile __bit                   RP16                __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RP16_bit            _BIT_ACCESS(PORTC,5)
// PORTC<RP17>
extern volatile __bit                   RP17                __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 RP17_bit            _BIT_ACCESS(PORTC,6)
// PORTC<RP18>
extern volatile __bit                   RP18                __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RP18_bit            _BIT_ACCESS(PORTC,7)
// PORTD<RP19>
extern volatile __bit                   RP19                __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 RP19_bit            _BIT_ACCESS(PORTD,2)
// PORTA<RP2>
extern volatile __bit                   RP2                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RP2_bit             _BIT_ACCESS(PORTA,5)
// PORTD<RP20>
extern volatile __bit                   RP20                __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 RP20_bit            _BIT_ACCESS(PORTD,3)
// PORTD<RP21>
extern volatile __bit                   RP21                __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 RP21_bit            _BIT_ACCESS(PORTD,4)
// PORTD<RP22>
extern volatile __bit                   RP22                __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 RP22_bit            _BIT_ACCESS(PORTD,5)
// PORTD<RP23>
extern volatile __bit                   RP23                __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 RP23_bit            _BIT_ACCESS(PORTD,6)
// PORTD<RP24>
extern volatile __bit                   RP24                __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 RP24_bit            _BIT_ACCESS(PORTD,7)
// PORTB<RP3>
extern volatile __bit                   RP3                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RP3_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RP4>
extern volatile __bit                   RP4                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RP4_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RP5>
extern volatile __bit                   RP5                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RP5_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RP6>
extern volatile __bit                   RP6                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RP6_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RP7>
extern volatile __bit                   RP7                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 RP7_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RP8>
extern volatile __bit                   RP8                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RP8_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RP9>
extern volatile __bit                   RP9                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 RP9_bit             _BIT_ACCESS(PORTB,6)
// SSP1CON2<RSEN>
extern volatile __bit _DEPRECATED       RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN1_bit           _BIT_ACCESS(SSP1CON2,1)
// SSP2CON2<RSEN2>
extern volatile __bit                   RSEN2               __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 RSEN2_bit           _BIT_ACCESS(SSP2CON2,1)
// PORTB<RTCC>
extern volatile __bit                   RTCC                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RTCC_bit            _BIT_ACCESS(PORTB,1)
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
extern volatile __bit                   RTCEN               __at(0x79FF);	// @ (0xF3F * 8 + 7)
#define                                 RTCEN_bit           _BIT_ACCESS(RTCCFG,7)
// RTCCFG<RTCOE>
extern volatile __bit                   RTCOE               __at(0x79FA);	// @ (0xF3F * 8 + 2)
#define                                 RTCOE_bit           _BIT_ACCESS(RTCCFG,2)
// RTCCFG<RTCPTR0>
extern volatile __bit                   RTCPTR0             __at(0x79F8);	// @ (0xF3F * 8 + 0)
#define                                 RTCPTR0_bit         _BIT_ACCESS(RTCCFG,0)
// RTCCFG<RTCPTR1>
extern volatile __bit                   RTCPTR1             __at(0x79F9);	// @ (0xF3F * 8 + 1)
#define                                 RTCPTR1_bit         _BIT_ACCESS(RTCCFG,1)
// RTCCFG<RTCSYNC>
extern volatile __bit                   RTCSYNC             __at(0x79FC);	// @ (0xF3F * 8 + 4)
#define                                 RTCSYNC_bit         _BIT_ACCESS(RTCCFG,4)
// DSCONH<RTCWDIS>
extern volatile __bit                   RTCWDIS             __at(0x7A68);	// @ (0xF4D * 8 + 0)
#define                                 RTCWDIS_bit         _BIT_ACCESS(DSCONH,0)
// RTCCFG<RTCWREN>
extern volatile __bit                   RTCWREN             __at(0x79FD);	// @ (0xF3F * 8 + 5)
#define                                 RTCWREN_bit         _BIT_ACCESS(RTCCFG,5)
// PADCFG1<RTSECSEL0>
extern volatile __bit                   RTSECSEL0           __at(0x79E1);	// @ (0xF3C * 8 + 1)
#define                                 RTSECSEL0_bit       _BIT_ACCESS(PADCFG1,1)
// PADCFG1<RTSECSEL1>
extern volatile __bit                   RTSECSEL1           __at(0x79E2);	// @ (0xF3C * 8 + 2)
#define                                 RTSECSEL1_bit       _BIT_ACCESS(PADCFG1,2)
// SSP1STAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<RW1>
extern volatile __bit                   RW1                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW1_bit             _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<RW2>
extern volatile __bit                   RW2                 __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 RW2_bit             _BIT_ACCESS(SSP2STAT,2)
// PORTC<RX1>
extern volatile __bit                   RX1                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX1_bit             _BIT_ACCESS(PORTC,7)
// RCSTA1<RX9>
extern volatile __bit _DEPRECATED       RX9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA1,6)
// RCSTA1<RX91>
extern volatile __bit                   RX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 RX91_bit            _BIT_ACCESS(RCSTA1,6)
// RCSTA2<RX92>
extern volatile __bit                   RX92                __at(0x7CE6);	// @ (0xF9C * 8 + 6)
#define                                 RX92_bit            _BIT_ACCESS(RCSTA2,6)
// RCSTA1<RX9D>
extern volatile __bit _DEPRECATED       RX9D                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA1,0)
// RCSTA1<RX9D1>
extern volatile __bit                   RX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 RX9D1_bit           _BIT_ACCESS(RCSTA1,0)
// RCSTA2<RX9D2>
extern volatile __bit                   RX9D2               __at(0x7CE0);	// @ (0xF9C * 8 + 0)
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
extern volatile __bit _DEPRECATED       RXDTP               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP1>
extern volatile __bit                   RXDTP1              __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 RXDTP1_bit          _BIT_ACCESS(BAUDCON1,5)
// BAUDCON2<RXDTP2>
extern volatile __bit                   RXDTP2              __at(0x7BE5);	// @ (0xF7C * 8 + 5)
#define                                 RXDTP2_bit          _BIT_ACCESS(BAUDCON2,5)
// DMACON1<RXINC>
extern volatile __bit                   RXINC               __at(0x7C44);	// @ (0xF88 * 8 + 4)
#define                                 RXINC_bit           _BIT_ACCESS(DMACON1,4)
// SSP2STAT<R_NOT_W2>
extern volatile __bit                   R_NOT_W2            __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 R_NOT_W2_bit        _BIT_ACCESS(SSP2STAT,2)
// SSP1STAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<R_W2>
extern volatile __bit                   R_W2                __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 R_W2_bit            _BIT_ACCESS(SSP2STAT,2)
// SSP1STAT<R_nW>
extern volatile __bit _DEPRECATED       R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<R_nW2>
extern volatile __bit                   R_nW2               __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 R_nW2_bit           _BIT_ACCESS(SSP2STAT,2)
// SSP2STAT<S2>
extern volatile __bit                   S2                  __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 S2_bit              _BIT_ACCESS(SSP2STAT,3)
// PORTC<SCK1>
extern volatile __bit                   SCK1                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCK1_bit            _BIT_ACCESS(PORTC,3)
// BAUDCON1<SCKP>
extern volatile __bit                   SCKP                __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<SCKP1>
extern volatile __bit                   SCKP1               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 SCKP1_bit           _BIT_ACCESS(BAUDCON1,4)
// BAUDCON2<SCKP2>
extern volatile __bit                   SCKP2               __at(0x7BE4);	// @ (0xF7C * 8 + 4)
#define                                 SCKP2_bit           _BIT_ACCESS(BAUDCON2,4)
// PORTC<SCL1>
extern volatile __bit                   SCL1                __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 SCL1_bit            _BIT_ACCESS(PORTC,3)
// PORTD<SCL2>
extern volatile __bit                   SCL2                __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 SCL2_bit            _BIT_ACCESS(PORTD,0)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// PORTD<SDA2>
extern volatile __bit                   SDA2                __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 SDA2_bit            _BIT_ACCESS(PORTD,1)
// PORTC<SDI1>
extern volatile __bit                   SDI1                __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SDI1_bit            _BIT_ACCESS(PORTC,4)
// PORTC<SDO1>
extern volatile __bit                   SDO1                __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 SDO1_bit            _BIT_ACCESS(PORTC,5)
// SSP1CON2<SEN>
extern volatile __bit _DEPRECATED       SEN                 __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSP1CON2,0)
// SSP1CON2<SEN1>
extern volatile __bit                   SEN1                __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN1_bit            _BIT_ACCESS(SSP1CON2,0)
// SSP2CON2<SEN2>
extern volatile __bit                   SEN2                __at(0x7B88);	// @ (0xF71 * 8 + 0)
#define                                 SEN2_bit            _BIT_ACCESS(SSP2CON2,0)
// TXSTA1<SENDB>
extern volatile __bit _DEPRECATED       SENDB               __at(0x7D6B);	// @ (0xFAD * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA1,3)
// TXSTA1<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D6B);	// @ (0xFAD * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA1,3)
// TXSTA2<SENDB2>
extern volatile __bit                   SENDB2              __at(0x7D43);	// @ (0xFA8 * 8 + 3)
#define                                 SENDB2_bit          _BIT_ACCESS(TXSTA2,3)
// SSP1STAT<SMP>
extern volatile __bit _DEPRECATED       SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// SSP1STAT<SMP1>
extern volatile __bit                   SMP1                __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP1_bit            _BIT_ACCESS(SSP1STAT,7)
// SSP2STAT<SMP2>
extern volatile __bit                   SMP2                __at(0x7B9F);	// @ (0xF73 * 8 + 7)
#define                                 SMP2_bit            _BIT_ACCESS(SSP2STAT,7)
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(T1CON,3)
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
// RCSTA1<SPEN>
extern volatile __bit _DEPRECATED       SPEN                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA1,7)
// RCSTA1<SPEN1>
extern volatile __bit                   SPEN1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 SPEN1_bit           _BIT_ACCESS(RCSTA1,7)
// RCSTA2<SPEN2>
extern volatile __bit                   SPEN2               __at(0x7CE7);	// @ (0xF9C * 8 + 7)
#define                                 SPEN2_bit           _BIT_ACCESS(RCSTA2,7)
// ODCON3<SPI1OD>
extern volatile __bit                   SPI1OD              __at(0x7A00);	// @ (0xF40 * 8 + 0)
#define                                 SPI1OD_bit          _BIT_ACCESS(ODCON3,0)
// ODCON3<SPI2OD>
extern volatile __bit                   SPI2OD              __at(0x7A01);	// @ (0xF40 * 8 + 1)
#define                                 SPI2OD_bit          _BIT_ACCESS(ODCON3,1)
// RCSTA1<SREN>
extern volatile __bit _DEPRECATED       SREN                __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA1,5)
// RCSTA1<SREN1>
extern volatile __bit                   SREN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 SREN1_bit           _BIT_ACCESS(RCSTA1,5)
// RCSTA2<SREN2>
extern volatile __bit                   SREN2               __at(0x7CE5);	// @ (0xF9C * 8 + 5)
#define                                 SREN2_bit           _BIT_ACCESS(RCSTA2,5)
// RCSTA1<SRENA>
extern volatile __bit                   SRENA               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA1,5)
// PORTD<SS2>
extern volatile __bit                   SS2                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 SS2_bit             _BIT_ACCESS(PORTD,7)
// DMACON1<SSCON0>
extern volatile __bit                   SSCON0              __at(0x7C46);	// @ (0xF88 * 8 + 6)
#define                                 SSCON0_bit          _BIT_ACCESS(DMACON1,6)
// DMACON1<SSCON1>
extern volatile __bit                   SSCON1              __at(0x7C47);	// @ (0xF88 * 8 + 7)
#define                                 SSCON1_bit          _BIT_ACCESS(DMACON1,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// IPR1<SSP1IP>
extern volatile __bit                   SSP1IP              __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSP1IP_bit          _BIT_ACCESS(IPR1,3)
// PIE3<SSP2IE>
extern volatile __bit                   SSP2IE              __at(0x7D1F);	// @ (0xFA3 * 8 + 7)
#define                                 SSP2IE_bit          _BIT_ACCESS(PIE3,7)
// PIR3<SSP2IF>
extern volatile __bit                   SSP2IF              __at(0x7D27);	// @ (0xFA4 * 8 + 7)
#define                                 SSP2IF_bit          _BIT_ACCESS(PIR3,7)
// IPR3<SSP2IP>
extern volatile __bit                   SSP2IP              __at(0x7D2F);	// @ (0xFA5 * 8 + 7)
#define                                 SSP2IP_bit          _BIT_ACCESS(IPR3,7)
// SSP1CON1<SSPEN>
extern volatile __bit _DEPRECATED       SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPEN1>
extern volatile __bit                   SSPEN1              __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN1_bit          _BIT_ACCESS(SSP1CON1,5)
// SSP2CON1<SSPEN2>
extern volatile __bit                   SSPEN2              __at(0x7B95);	// @ (0xF72 * 8 + 5)
#define                                 SSPEN2_bit          _BIT_ACCESS(SSP2CON1,5)
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
extern volatile __bit _DEPRECATED       SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSPM01>
extern volatile __bit                   SSPM01              __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM01_bit          _BIT_ACCESS(SSP1CON1,0)
// SSP2CON1<SSPM02>
extern volatile __bit                   SSPM02              __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 SSPM02_bit          _BIT_ACCESS(SSP2CON1,0)
// SSP1CON1<SSPM1>
extern volatile __bit _DEPRECATED       SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM11_bit          _BIT_ACCESS(SSP1CON1,1)
// SSP2CON1<SSPM12>
extern volatile __bit                   SSPM12              __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 SSPM12_bit          _BIT_ACCESS(SSP2CON1,1)
// SSP1CON1<SSPM2>
extern volatile __bit _DEPRECATED       SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM21_bit          _BIT_ACCESS(SSP1CON1,2)
// SSP2CON1<SSPM22>
extern volatile __bit                   SSPM22              __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 SSPM22_bit          _BIT_ACCESS(SSP2CON1,2)
// SSP1CON1<SSPM3>
extern volatile __bit _DEPRECATED       SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM31_bit          _BIT_ACCESS(SSP1CON1,3)
// SSP2CON1<SSPM32>
extern volatile __bit                   SSPM32              __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 SSPM32_bit          _BIT_ACCESS(SSP2CON1,3)
// SSP1CON1<SSPOV>
extern volatile __bit _DEPRECATED       SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// SSP1CON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV1_bit          _BIT_ACCESS(SSP1CON1,6)
// SSP2CON1<SSPOV2>
extern volatile __bit                   SSPOV2              __at(0x7B96);	// @ (0xF72 * 8 + 6)
#define                                 SSPOV2_bit          _BIT_ACCESS(SSP2CON1,6)
// SSP1STAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<START1>
extern volatile __bit                   START1              __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START1_bit          _BIT_ACCESS(SSP1STAT,3)
// SSP2STAT<START2>
extern volatile __bit                   START2              __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 START2_bit          _BIT_ACCESS(SSP2STAT,3)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// SSP1STAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSP1STAT,4)
// SSP1STAT<STOP1>
extern volatile __bit                   STOP1               __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP1_bit           _BIT_ACCESS(SSP1STAT,4)
// SSP2STAT<STOP2>
extern volatile __bit                   STOP2               __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 STOP2_bit           _BIT_ACCESS(SSP2STAT,4)
// PSTR1CON<STRA>
extern volatile __bit _DEPRECATED       STRA                __at(0x7DF8);	// @ (0xFBF * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(PSTR1CON,0)
// PSTR2CON<STRA2>
extern volatile __bit                   STRA2               __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 STRA2_bit           _BIT_ACCESS(PSTR2CON,0)
// PSTR1CON<STRB>
extern volatile __bit _DEPRECATED       STRB                __at(0x7DF9);	// @ (0xFBF * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(PSTR1CON,1)
// PSTR2CON<STRB2>
extern volatile __bit                   STRB2               __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 STRB2_bit           _BIT_ACCESS(PSTR2CON,1)
// PSTR1CON<STRC>
extern volatile __bit _DEPRECATED       STRC                __at(0x7DFA);	// @ (0xFBF * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(PSTR1CON,2)
// PSTR2CON<STRC2>
extern volatile __bit                   STRC2               __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 STRC2_bit           _BIT_ACCESS(PSTR2CON,2)
// PSTR1CON<STRD>
extern volatile __bit _DEPRECATED       STRD                __at(0x7DFB);	// @ (0xFBF * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(PSTR1CON,3)
// PSTR2CON<STRD2>
extern volatile __bit                   STRD2               __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 STRD2_bit           _BIT_ACCESS(PSTR2CON,3)
// PSTR1CON<STRSYNC>
extern volatile __bit _DEPRECATED       STRSYNC             __at(0x7DFC);	// @ (0xFBF * 8 + 4)
#define                                 STRSYNC_bit         _BIT_ACCESS(PSTR1CON,4)
// PSTR2CON<STRSYNC2>
extern volatile __bit                   STRSYNC2            __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 STRSYNC2_bit        _BIT_ACCESS(PSTR2CON,4)
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA1<SYNC>
extern volatile __bit _DEPRECATED       SYNC                __at(0x7D6C);	// @ (0xFAD * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA1,4)
// TXSTA1<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D6C);	// @ (0xFAD * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA1,4)
// TXSTA2<SYNC2>
extern volatile __bit                   SYNC2               __at(0x7D44);	// @ (0xFA8 * 8 + 4)
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
// PORTC<T1CKI>
extern volatile __bit                   T1CKI               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T1CKI_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1GCON<T1DONE>
extern volatile __bit                   T1DONE              __at(0x7CD3);	// @ (0xF9A * 8 + 3)
#define                                 T1DONE_bit          _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0x7CD3);	// @ (0xF9A * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_T1DONE>
extern volatile __bit                   T1GGO_T1DONE        __at(0x7CD3);	// @ (0xF9A * 8 + 3)
#define                                 T1GGO_T1DONE_bit    _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x7CD6);	// @ (0xF9A * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x7CD4);	// @ (0xF9A * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x7CD0);	// @ (0xF9A * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x7CD1);	// @ (0xF9A * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x7CD5);	// @ (0xF9A * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x7CD2);	// @ (0xF9A * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
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
// TCLKCON<T1RUN>
extern volatile __bit                   T1RUN               __at(0x7A94);	// @ (0xF52 * 8 + 4)
#define                                 T1RUN_bit           _BIT_ACCESS(TCLKCON,4)
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
// TCLKCON<T3CCP1>
extern volatile __bit                   T3CCP1              __at(0x7A90);	// @ (0xF52 * 8 + 0)
#define                                 T3CCP1_bit          _BIT_ACCESS(TCLKCON,0)
// TCLKCON<T3CCP2>
extern volatile __bit                   T3CCP2              __at(0x7A91);	// @ (0xF52 * 8 + 1)
#define                                 T3CCP2_bit          _BIT_ACCESS(TCLKCON,1)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// T3GCON<T3DONE>
extern volatile __bit                   T3DONE              __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 T3DONE_bit          _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO>
extern volatile __bit                   T3GGO               __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 T3GGO_bit           _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO_T3DONE>
extern volatile __bit                   T3GGO_T3DONE        __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 T3GGO_T3DONE_bit    _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GPOL>
extern volatile __bit                   T3GPOL              __at(0x7CBE);	// @ (0xF97 * 8 + 6)
#define                                 T3GPOL_bit          _BIT_ACCESS(T3GCON,6)
// T3GCON<T3GSPM>
extern volatile __bit                   T3GSPM              __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 T3GSPM_bit          _BIT_ACCESS(T3GCON,4)
// T3GCON<T3GSS0>
extern volatile __bit                   T3GSS0              __at(0x7CB8);	// @ (0xF97 * 8 + 0)
#define                                 T3GSS0_bit          _BIT_ACCESS(T3GCON,0)
// T3GCON<T3GSS1>
extern volatile __bit                   T3GSS1              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 T3GSS1_bit          _BIT_ACCESS(T3GCON,1)
// T3GCON<T3GTM>
extern volatile __bit                   T3GTM               __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 T3GTM_bit           _BIT_ACCESS(T3GCON,5)
// T3GCON<T3GVAL>
extern volatile __bit                   T3GVAL              __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 T3GVAL_bit          _BIT_ACCESS(T3GCON,2)
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 T3RD16_bit          _BIT_ACCESS(T3CON,7)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
// T4CON<T4CKPS0>
extern volatile __bit                   T4CKPS0             __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 T4CKPS0_bit         _BIT_ACCESS(T4CON,0)
// T4CON<T4CKPS1>
extern volatile __bit                   T4CKPS1             __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 T4CKPS1_bit         _BIT_ACCESS(T4CON,1)
// T4CON<T4OUTPS0>
extern volatile __bit                   T4OUTPS0            __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 T4OUTPS0_bit        _BIT_ACCESS(T4CON,3)
// T4CON<T4OUTPS1>
extern volatile __bit                   T4OUTPS1            __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 T4OUTPS1_bit        _BIT_ACCESS(T4CON,4)
// T4CON<T4OUTPS2>
extern volatile __bit                   T4OUTPS2            __at(0x7BB5);	// @ (0xF76 * 8 + 5)
#define                                 T4OUTPS2_bit        _BIT_ACCESS(T4CON,5)
// T4CON<T4OUTPS3>
extern volatile __bit                   T4OUTPS3            __at(0x7BB6);	// @ (0xF76 * 8 + 6)
#define                                 T4OUTPS3_bit        _BIT_ACCESS(T4CON,6)
// CTMUCONH<TGEN>
extern volatile __bit                   TGEN                __at(0x7D9C);	// @ (0xFB3 * 8 + 4)
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
// T1CON<TMR1CS0>
extern volatile __bit                   TMR1CS0             __at(0x7E6E);	// @ (0xFCD * 8 + 6)
#define                                 TMR1CS0_bit         _BIT_ACCESS(T1CON,6)
// T1CON<TMR1CS1>
extern volatile __bit                   TMR1CS1             __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 TMR1CS1_bit         _BIT_ACCESS(T1CON,7)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x7CD7);	// @ (0xF9A * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
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
// T3CON<TMR3CS0>
extern volatile __bit                   TMR3CS0             __at(0x7BCE);	// @ (0xF79 * 8 + 6)
#define                                 TMR3CS0_bit         _BIT_ACCESS(T3CON,6)
// T3CON<TMR3CS1>
extern volatile __bit                   TMR3CS1             __at(0x7BCF);	// @ (0xF79 * 8 + 7)
#define                                 TMR3CS1_bit         _BIT_ACCESS(T3CON,7)
// T3GCON<TMR3GE>
extern volatile __bit                   TMR3GE              __at(0x7CBF);	// @ (0xF97 * 8 + 7)
#define                                 TMR3GE_bit          _BIT_ACCESS(T3GCON,7)
// PIE3<TMR3GIE>
extern volatile __bit                   TMR3GIE             __at(0x7D19);	// @ (0xFA3 * 8 + 1)
#define                                 TMR3GIE_bit         _BIT_ACCESS(PIE3,1)
// PIR3<TMR3GIF>
extern volatile __bit                   TMR3GIF             __at(0x7D21);	// @ (0xFA4 * 8 + 1)
#define                                 TMR3GIF_bit         _BIT_ACCESS(PIR3,1)
// IPR3<TMR3GIP>
extern volatile __bit                   TMR3GIP             __at(0x7D29);	// @ (0xFA5 * 8 + 1)
#define                                 TMR3GIP_bit         _BIT_ACCESS(IPR3,1)
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
extern volatile __bit                   TMR3ON              __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// PIE3<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE3,3)
// PIR3<TMR4IF>
extern volatile __bit                   TMR4IF              __at(0x7D23);	// @ (0xFA4 * 8 + 3)
#define                                 TMR4IF_bit          _BIT_ACCESS(PIR3,3)
// IPR3<TMR4IP>
extern volatile __bit                   TMR4IP              __at(0x7D2B);	// @ (0xFA5 * 8 + 3)
#define                                 TMR4IP_bit          _BIT_ACCESS(IPR3,3)
// T4CON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 TMR4ON_bit          _BIT_ACCESS(T4CON,2)
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              _BIT_ACCESS(RCON,3)
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
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x7CB2);	// @ (0xF96 * 8 + 2)
#define                                 TRISE2_bit          _BIT_ACCESS(TRISE,2)
// TXSTA1<TRMT>
extern volatile __bit _DEPRECATED       TRMT                __at(0x7D69);	// @ (0xFAD * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA1,1)
// TXSTA1<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D69);	// @ (0xFAD * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA1,1)
// TXSTA2<TRMT2>
extern volatile __bit                   TRMT2               __at(0x7D41);	// @ (0xFA8 * 8 + 1)
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
// PIE3<TX2IE>
extern volatile __bit                   TX2IE               __at(0x7D1C);	// @ (0xFA3 * 8 + 4)
#define                                 TX2IE_bit           _BIT_ACCESS(PIE3,4)
// PIR3<TX2IF>
extern volatile __bit                   TX2IF               __at(0x7D24);	// @ (0xFA4 * 8 + 4)
#define                                 TX2IF_bit           _BIT_ACCESS(PIR3,4)
// IPR3<TX2IP>
extern volatile __bit                   TX2IP               __at(0x7D2C);	// @ (0xFA5 * 8 + 4)
#define                                 TX2IP_bit           _BIT_ACCESS(IPR3,4)
// TXSTA1<TX8_9>
extern volatile __bit                   TX8_9               __at(0x7D6E);	// @ (0xFAD * 8 + 6)
#define                                 TX8_9_bit           _BIT_ACCESS(TXSTA1,6)
// TXSTA2<TX8_92>
extern volatile __bit                   TX8_92              __at(0x7D46);	// @ (0xFA8 * 8 + 6)
#define                                 TX8_92_bit          _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX9>
extern volatile __bit _DEPRECATED       TX9                 __at(0x7D6E);	// @ (0xFAD * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA1,6)
// TXSTA1<TX91>
extern volatile __bit                   TX91                __at(0x7D6E);	// @ (0xFAD * 8 + 6)
#define                                 TX91_bit            _BIT_ACCESS(TXSTA1,6)
// TXSTA2<TX92>
extern volatile __bit                   TX92                __at(0x7D46);	// @ (0xFA8 * 8 + 6)
#define                                 TX92_bit            _BIT_ACCESS(TXSTA2,6)
// TXSTA1<TX9D>
extern volatile __bit _DEPRECATED       TX9D                __at(0x7D68);	// @ (0xFAD * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA1,0)
// TXSTA1<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D68);	// @ (0xFAD * 8 + 0)
#define                                 TX9D1_bit           _BIT_ACCESS(TXSTA1,0)
// TXSTA2<TX9D2>
extern volatile __bit                   TX9D2               __at(0x7D40);	// @ (0xFA8 * 8 + 0)
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
extern volatile __bit _DEPRECATED       TXCKP               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<TXCKP1>
extern volatile __bit                   TXCKP1              __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 TXCKP1_bit          _BIT_ACCESS(BAUDCON1,4)
// BAUDCON2<TXCKP2>
extern volatile __bit                   TXCKP2              __at(0x7BE4);	// @ (0xF7C * 8 + 4)
#define                                 TXCKP2_bit          _BIT_ACCESS(BAUDCON2,4)
// TXSTA1<TXD8>
extern volatile __bit                   TXD8                __at(0x7D68);	// @ (0xFAD * 8 + 0)
#define                                 TXD8_bit            _BIT_ACCESS(TXSTA1,0)
// TXSTA2<TXD82>
extern volatile __bit                   TXD82               __at(0x7D40);	// @ (0xFA8 * 8 + 0)
#define                                 TXD82_bit           _BIT_ACCESS(TXSTA2,0)
// TXSTA1<TXEN>
extern volatile __bit _DEPRECATED       TXEN                __at(0x7D6D);	// @ (0xFAD * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA1,5)
// TXSTA1<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D6D);	// @ (0xFAD * 8 + 5)
#define                                 TXEN1_bit           _BIT_ACCESS(TXSTA1,5)
// TXSTA2<TXEN2>
extern volatile __bit                   TXEN2               __at(0x7D45);	// @ (0xFA8 * 8 + 5)
#define                                 TXEN2_bit           _BIT_ACCESS(TXSTA2,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// DMACON1<TXINC>
extern volatile __bit                   TXINC               __at(0x7C45);	// @ (0xF88 * 8 + 5)
#define                                 TXINC_bit           _BIT_ACCESS(DMACON1,5)
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            _BIT_ACCESS(IPR1,4)
// ODCON2<U1OD>
extern volatile __bit                   U1OD                __at(0x7A08);	// @ (0xF41 * 8 + 0)
#define                                 U1OD_bit            _BIT_ACCESS(ODCON2,0)
// ODCON2<U2OD>
extern volatile __bit                   U2OD                __at(0x7A09);	// @ (0xF41 * 8 + 1)
#define                                 U2OD_bit            _BIT_ACCESS(ODCON2,1)
// SSP1STAT<UA>
extern volatile __bit _DEPRECATED       UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// SSP1STAT<UA1>
extern volatile __bit                   UA1                 __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA1_bit             _BIT_ACCESS(SSP1STAT,1)
// SSP2STAT<UA2>
extern volatile __bit                   UA2                 __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 UA2_bit             _BIT_ACCESS(SSP2STAT,1)
// WDTCON<ULPEN>
extern volatile __bit                   ULPEN               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ULPEN_bit           _BIT_ACCESS(WDTCON,2)
// WDTCON<ULPLVL>
extern volatile __bit                   ULPLVL              __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ULPLVL_bit          _BIT_ACCESS(WDTCON,5)
// WDTCON<ULPSINK>
extern volatile __bit                   ULPSINK             __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ULPSINK_bit         _BIT_ACCESS(WDTCON,1)
// DSCONL<ULPWDIS>
extern volatile __bit                   ULPWDIS             __at(0x7A62);	// @ (0xF4C * 8 + 2)
#define                                 ULPWDIS_bit         _BIT_ACCESS(DSCONL,2)
// PORTA<ULPWU>
extern volatile __bit                   ULPWU               __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWU_bit           _BIT_ACCESS(PORTA,0)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// ANCON1<VBG2EN>
extern volatile __bit                   VBG2EN              __at(0x7A4E);	// @ (0xF49 * 8 + 6)
#define                                 VBG2EN_bit          _BIT_ACCESS(ANCON1,6)
// ANCON1<VBGEN>
extern volatile __bit                   VBGEN               __at(0x7A4F);	// @ (0xF49 * 8 + 7)
#define                                 VBGEN_bit           _BIT_ACCESS(ANCON1,7)
// ADCON0<VCFG0>
extern volatile __bit                   VCFG0               __at(0x7E16);	// @ (0xFC2 * 8 + 6)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          _BIT_ACCESS(ADCON1,4)
// ADCON0<VCFG1>
extern volatile __bit                   VCFG1               __at(0x7E17);	// @ (0xFC2 * 8 + 7)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON0,7)
// ADCON1<VCFG11>
extern volatile __bit                   VCFG11              __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG11_bit          _BIT_ACCESS(ADCON1,5)
// HLVDCON<VDIRMAG>
extern volatile __bit                   VDIRMAG             __at(0x7C2F);	// @ (0xF85 * 8 + 7)
#define                                 VDIRMAG_bit         _BIT_ACCESS(HLVDCON,7)
// PORTA<VREF_MINUS>
extern volatile __bit                   VREF_MINUS          __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREF_MINUS_bit      _BIT_ACCESS(PORTA,2)
// PORTA<VREF_PLUS>
extern volatile __bit                   VREF_PLUS           __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREF_PLUS_bit       _BIT_ACCESS(PORTA,3)
// BAUDCON1<W4E>
extern volatile __bit                   W4E                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON1,1)
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(PR2,4)
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(PR2,5)
// PMMODEL<WAITB0>
extern volatile __bit _DEPRECATED       WAITB0              __at(0x7AE6);	// @ (0xF5C * 8 + 6)
#define                                 WAITB0_bit          _BIT_ACCESS(PMMODEL,6)
// PMMODEL<WAITB1>
extern volatile __bit _DEPRECATED       WAITB1              __at(0x7AE7);	// @ (0xF5C * 8 + 7)
#define                                 WAITB1_bit          _BIT_ACCESS(PMMODEL,7)
// PMMODEL<WAITE0>
extern volatile __bit _DEPRECATED       WAITE0              __at(0x7AE0);	// @ (0xF5C * 8 + 0)
#define                                 WAITE0_bit          _BIT_ACCESS(PMMODEL,0)
// PMMODEL<WAITE1>
extern volatile __bit _DEPRECATED       WAITE1              __at(0x7AE1);	// @ (0xF5C * 8 + 1)
#define                                 WAITE1_bit          _BIT_ACCESS(PMMODEL,1)
// PMMODEL<WAITM0>
extern volatile __bit _DEPRECATED       WAITM0              __at(0x7AE2);	// @ (0xF5C * 8 + 2)
#define                                 WAITM0_bit          _BIT_ACCESS(PMMODEL,2)
// PMMODEL<WAITM1>
extern volatile __bit _DEPRECATED       WAITM1              __at(0x7AE3);	// @ (0xF5C * 8 + 3)
#define                                 WAITM1_bit          _BIT_ACCESS(PMMODEL,3)
// PMMODEL<WAITM2>
extern volatile __bit _DEPRECATED       WAITM2              __at(0x7AE4);	// @ (0xF5C * 8 + 4)
#define                                 WAITM2_bit          _BIT_ACCESS(PMMODEL,4)
// PMMODEL<WAITM3>
extern volatile __bit _DEPRECATED       WAITM3              __at(0x7AE5);	// @ (0xF5C * 8 + 5)
#define                                 WAITM3_bit          _BIT_ACCESS(PMMODEL,5)
// SSP1CON1<WCOL>
extern volatile __bit _DEPRECATED       WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// SSP1CON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL1_bit           _BIT_ACCESS(SSP1CON1,7)
// SSP2CON1<WCOL2>
extern volatile __bit                   WCOL2               __at(0x7B97);	// @ (0xF72 * 8 + 7)
#define                                 WCOL2_bit           _BIT_ACCESS(SSP2CON1,7)
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
// PMCONL<WRSP>
extern volatile __bit                   WRSP                __at(0x7AF1);	// @ (0xF5E * 8 + 1)
#define                                 WRSP_bit            _BIT_ACCESS(PMCONL,1)
// BAUDCON1<WUE>
extern volatile __bit _DEPRECATED       WUE                 __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON1,1)
// BAUDCON1<WUE1>
extern volatile __bit                   WUE1                __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 WUE1_bit            _BIT_ACCESS(BAUDCON1,1)
// BAUDCON2<WUE2>
extern volatile __bit                   WUE2                __at(0x7BE1);	// @ (0xF7C * 8 + 1)
#define                                 WUE2_bit            _BIT_ACCESS(BAUDCON2,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSP1STAT<nA>
extern volatile __bit                   nA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<nA2>
extern volatile __bit                   nA2                 __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 nA2_bit             _BIT_ACCESS(SSP2STAT,5)
// SSP1STAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSP1STAT,5)
// SSP2STAT<nADDRESS2>
extern volatile __bit                   nADDRESS2           __at(0x7B9D);	// @ (0xF73 * 8 + 5)
#define                                 nADDRESS2_bit       _BIT_ACCESS(SSP2STAT,5)
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
extern volatile __bit                   nRC8                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 nRC8_bit            _BIT_ACCESS(RCSTA1,6)
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// PORTA<nSS1>
extern volatile __bit                   nSS1                __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 nSS1_bit            _BIT_ACCESS(PORTA,5)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// TXSTA1<nTX8>
extern volatile __bit                   nTX8                __at(0x7D6E);	// @ (0xFAD * 8 + 6)
#define                                 nTX8_bit            _BIT_ACCESS(TXSTA1,6)
// SSP1STAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<nW2>
extern volatile __bit                   nW2                 __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 nW2_bit             _BIT_ACCESS(SSP2STAT,2)
// SSP1STAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSP1STAT,2)
// SSP2STAT<nWRITE2>
extern volatile __bit                   nWRITE2             __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 nWRITE2_bit         _BIT_ACCESS(SSP2STAT,2)

#endif // _PIC18LF46J11_H_
