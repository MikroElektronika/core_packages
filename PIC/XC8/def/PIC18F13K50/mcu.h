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

#ifndef _PIC18F13K50_H_
#define _PIC18F13K50_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F13K50
 */
#ifndef _XC_H_
#warning Header file pic18f13k50.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: UEP0
#define UEP0 UEP0
extern volatile unsigned char           UEP0                __at(0xF53);
#ifndef _LIB_BUILD
asm("UEP0 equ 0F53h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP0STALL               :1;
        unsigned EP0INEN                :1;
        unsigned EP0OUTEN               :1;
        unsigned EP0CONDIS              :1;
        unsigned EP0HSHK                :1;
    };
    struct {
        unsigned EPSTALL0               :1;
        unsigned EPINEN0                :1;
        unsigned EPOUTEN0               :1;
        unsigned EPCONDIS0              :1;
        unsigned EPHSHK0                :1;
    };
} UEP0bits_t;
extern volatile UEP0bits_t UEP0bits __at(0xF53);
// bitfield macros
#define _UEP0_EPSTALL_POSN                                  0x0
#define _UEP0_EPSTALL_POSITION                              0x0
#define _UEP0_EPSTALL_SIZE                                  0x1
#define _UEP0_EPSTALL_LENGTH                                0x1
#define _UEP0_EPSTALL_MASK                                  0x1
#define _UEP0_EPINEN_POSN                                   0x1
#define _UEP0_EPINEN_POSITION                               0x1
#define _UEP0_EPINEN_SIZE                                   0x1
#define _UEP0_EPINEN_LENGTH                                 0x1
#define _UEP0_EPINEN_MASK                                   0x2
#define _UEP0_EPOUTEN_POSN                                  0x2
#define _UEP0_EPOUTEN_POSITION                              0x2
#define _UEP0_EPOUTEN_SIZE                                  0x1
#define _UEP0_EPOUTEN_LENGTH                                0x1
#define _UEP0_EPOUTEN_MASK                                  0x4
#define _UEP0_EPCONDIS_POSN                                 0x3
#define _UEP0_EPCONDIS_POSITION                             0x3
#define _UEP0_EPCONDIS_SIZE                                 0x1
#define _UEP0_EPCONDIS_LENGTH                               0x1
#define _UEP0_EPCONDIS_MASK                                 0x8
#define _UEP0_EPHSHK_POSN                                   0x4
#define _UEP0_EPHSHK_POSITION                               0x4
#define _UEP0_EPHSHK_SIZE                                   0x1
#define _UEP0_EPHSHK_LENGTH                                 0x1
#define _UEP0_EPHSHK_MASK                                   0x10
#define _UEP0_EP0STALL_POSN                                 0x0
#define _UEP0_EP0STALL_POSITION                             0x0
#define _UEP0_EP0STALL_SIZE                                 0x1
#define _UEP0_EP0STALL_LENGTH                               0x1
#define _UEP0_EP0STALL_MASK                                 0x1
#define _UEP0_EP0INEN_POSN                                  0x1
#define _UEP0_EP0INEN_POSITION                              0x1
#define _UEP0_EP0INEN_SIZE                                  0x1
#define _UEP0_EP0INEN_LENGTH                                0x1
#define _UEP0_EP0INEN_MASK                                  0x2
#define _UEP0_EP0OUTEN_POSN                                 0x2
#define _UEP0_EP0OUTEN_POSITION                             0x2
#define _UEP0_EP0OUTEN_SIZE                                 0x1
#define _UEP0_EP0OUTEN_LENGTH                               0x1
#define _UEP0_EP0OUTEN_MASK                                 0x4
#define _UEP0_EP0CONDIS_POSN                                0x3
#define _UEP0_EP0CONDIS_POSITION                            0x3
#define _UEP0_EP0CONDIS_SIZE                                0x1
#define _UEP0_EP0CONDIS_LENGTH                              0x1
#define _UEP0_EP0CONDIS_MASK                                0x8
#define _UEP0_EP0HSHK_POSN                                  0x4
#define _UEP0_EP0HSHK_POSITION                              0x4
#define _UEP0_EP0HSHK_SIZE                                  0x1
#define _UEP0_EP0HSHK_LENGTH                                0x1
#define _UEP0_EP0HSHK_MASK                                  0x10
#define _UEP0_EPSTALL0_POSN                                 0x0
#define _UEP0_EPSTALL0_POSITION                             0x0
#define _UEP0_EPSTALL0_SIZE                                 0x1
#define _UEP0_EPSTALL0_LENGTH                               0x1
#define _UEP0_EPSTALL0_MASK                                 0x1
#define _UEP0_EPINEN0_POSN                                  0x1
#define _UEP0_EPINEN0_POSITION                              0x1
#define _UEP0_EPINEN0_SIZE                                  0x1
#define _UEP0_EPINEN0_LENGTH                                0x1
#define _UEP0_EPINEN0_MASK                                  0x2
#define _UEP0_EPOUTEN0_POSN                                 0x2
#define _UEP0_EPOUTEN0_POSITION                             0x2
#define _UEP0_EPOUTEN0_SIZE                                 0x1
#define _UEP0_EPOUTEN0_LENGTH                               0x1
#define _UEP0_EPOUTEN0_MASK                                 0x4
#define _UEP0_EPCONDIS0_POSN                                0x3
#define _UEP0_EPCONDIS0_POSITION                            0x3
#define _UEP0_EPCONDIS0_SIZE                                0x1
#define _UEP0_EPCONDIS0_LENGTH                              0x1
#define _UEP0_EPCONDIS0_MASK                                0x8
#define _UEP0_EPHSHK0_POSN                                  0x4
#define _UEP0_EPHSHK0_POSITION                              0x4
#define _UEP0_EPHSHK0_SIZE                                  0x1
#define _UEP0_EPHSHK0_LENGTH                                0x1
#define _UEP0_EPHSHK0_MASK                                  0x10

// Register: UEP1
#define UEP1 UEP1
extern volatile unsigned char           UEP1                __at(0xF54);
#ifndef _LIB_BUILD
asm("UEP1 equ 0F54h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP1STALL               :1;
        unsigned EP1INEN                :1;
        unsigned EP1OUTEN               :1;
        unsigned EP1CONDIS              :1;
        unsigned EP1HSHK                :1;
    };
    struct {
        unsigned EPSTALL1               :1;
        unsigned EPINEN1                :1;
        unsigned EPOUTEN1               :1;
        unsigned EPCONDIS1              :1;
        unsigned EPHSHK1                :1;
    };
} UEP1bits_t;
extern volatile UEP1bits_t UEP1bits __at(0xF54);
// bitfield macros
#define _UEP1_EPSTALL_POSN                                  0x0
#define _UEP1_EPSTALL_POSITION                              0x0
#define _UEP1_EPSTALL_SIZE                                  0x1
#define _UEP1_EPSTALL_LENGTH                                0x1
#define _UEP1_EPSTALL_MASK                                  0x1
#define _UEP1_EPINEN_POSN                                   0x1
#define _UEP1_EPINEN_POSITION                               0x1
#define _UEP1_EPINEN_SIZE                                   0x1
#define _UEP1_EPINEN_LENGTH                                 0x1
#define _UEP1_EPINEN_MASK                                   0x2
#define _UEP1_EPOUTEN_POSN                                  0x2
#define _UEP1_EPOUTEN_POSITION                              0x2
#define _UEP1_EPOUTEN_SIZE                                  0x1
#define _UEP1_EPOUTEN_LENGTH                                0x1
#define _UEP1_EPOUTEN_MASK                                  0x4
#define _UEP1_EPCONDIS_POSN                                 0x3
#define _UEP1_EPCONDIS_POSITION                             0x3
#define _UEP1_EPCONDIS_SIZE                                 0x1
#define _UEP1_EPCONDIS_LENGTH                               0x1
#define _UEP1_EPCONDIS_MASK                                 0x8
#define _UEP1_EPHSHK_POSN                                   0x4
#define _UEP1_EPHSHK_POSITION                               0x4
#define _UEP1_EPHSHK_SIZE                                   0x1
#define _UEP1_EPHSHK_LENGTH                                 0x1
#define _UEP1_EPHSHK_MASK                                   0x10
#define _UEP1_EP1STALL_POSN                                 0x0
#define _UEP1_EP1STALL_POSITION                             0x0
#define _UEP1_EP1STALL_SIZE                                 0x1
#define _UEP1_EP1STALL_LENGTH                               0x1
#define _UEP1_EP1STALL_MASK                                 0x1
#define _UEP1_EP1INEN_POSN                                  0x1
#define _UEP1_EP1INEN_POSITION                              0x1
#define _UEP1_EP1INEN_SIZE                                  0x1
#define _UEP1_EP1INEN_LENGTH                                0x1
#define _UEP1_EP1INEN_MASK                                  0x2
#define _UEP1_EP1OUTEN_POSN                                 0x2
#define _UEP1_EP1OUTEN_POSITION                             0x2
#define _UEP1_EP1OUTEN_SIZE                                 0x1
#define _UEP1_EP1OUTEN_LENGTH                               0x1
#define _UEP1_EP1OUTEN_MASK                                 0x4
#define _UEP1_EP1CONDIS_POSN                                0x3
#define _UEP1_EP1CONDIS_POSITION                            0x3
#define _UEP1_EP1CONDIS_SIZE                                0x1
#define _UEP1_EP1CONDIS_LENGTH                              0x1
#define _UEP1_EP1CONDIS_MASK                                0x8
#define _UEP1_EP1HSHK_POSN                                  0x4
#define _UEP1_EP1HSHK_POSITION                              0x4
#define _UEP1_EP1HSHK_SIZE                                  0x1
#define _UEP1_EP1HSHK_LENGTH                                0x1
#define _UEP1_EP1HSHK_MASK                                  0x10
#define _UEP1_EPSTALL1_POSN                                 0x0
#define _UEP1_EPSTALL1_POSITION                             0x0
#define _UEP1_EPSTALL1_SIZE                                 0x1
#define _UEP1_EPSTALL1_LENGTH                               0x1
#define _UEP1_EPSTALL1_MASK                                 0x1
#define _UEP1_EPINEN1_POSN                                  0x1
#define _UEP1_EPINEN1_POSITION                              0x1
#define _UEP1_EPINEN1_SIZE                                  0x1
#define _UEP1_EPINEN1_LENGTH                                0x1
#define _UEP1_EPINEN1_MASK                                  0x2
#define _UEP1_EPOUTEN1_POSN                                 0x2
#define _UEP1_EPOUTEN1_POSITION                             0x2
#define _UEP1_EPOUTEN1_SIZE                                 0x1
#define _UEP1_EPOUTEN1_LENGTH                               0x1
#define _UEP1_EPOUTEN1_MASK                                 0x4
#define _UEP1_EPCONDIS1_POSN                                0x3
#define _UEP1_EPCONDIS1_POSITION                            0x3
#define _UEP1_EPCONDIS1_SIZE                                0x1
#define _UEP1_EPCONDIS1_LENGTH                              0x1
#define _UEP1_EPCONDIS1_MASK                                0x8
#define _UEP1_EPHSHK1_POSN                                  0x4
#define _UEP1_EPHSHK1_POSITION                              0x4
#define _UEP1_EPHSHK1_SIZE                                  0x1
#define _UEP1_EPHSHK1_LENGTH                                0x1
#define _UEP1_EPHSHK1_MASK                                  0x10

// Register: UEP2
#define UEP2 UEP2
extern volatile unsigned char           UEP2                __at(0xF55);
#ifndef _LIB_BUILD
asm("UEP2 equ 0F55h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP2STALL               :1;
        unsigned EP2INEN                :1;
        unsigned EP2OUTEN               :1;
        unsigned EP2CONDIS              :1;
        unsigned EP2HSHK                :1;
    };
    struct {
        unsigned EPSTALL2               :1;
        unsigned EPINEN2                :1;
        unsigned EPOUTEN2               :1;
        unsigned EPCONDIS2              :1;
        unsigned EPHSHK2                :1;
    };
} UEP2bits_t;
extern volatile UEP2bits_t UEP2bits __at(0xF55);
// bitfield macros
#define _UEP2_EPSTALL_POSN                                  0x0
#define _UEP2_EPSTALL_POSITION                              0x0
#define _UEP2_EPSTALL_SIZE                                  0x1
#define _UEP2_EPSTALL_LENGTH                                0x1
#define _UEP2_EPSTALL_MASK                                  0x1
#define _UEP2_EPINEN_POSN                                   0x1
#define _UEP2_EPINEN_POSITION                               0x1
#define _UEP2_EPINEN_SIZE                                   0x1
#define _UEP2_EPINEN_LENGTH                                 0x1
#define _UEP2_EPINEN_MASK                                   0x2
#define _UEP2_EPOUTEN_POSN                                  0x2
#define _UEP2_EPOUTEN_POSITION                              0x2
#define _UEP2_EPOUTEN_SIZE                                  0x1
#define _UEP2_EPOUTEN_LENGTH                                0x1
#define _UEP2_EPOUTEN_MASK                                  0x4
#define _UEP2_EPCONDIS_POSN                                 0x3
#define _UEP2_EPCONDIS_POSITION                             0x3
#define _UEP2_EPCONDIS_SIZE                                 0x1
#define _UEP2_EPCONDIS_LENGTH                               0x1
#define _UEP2_EPCONDIS_MASK                                 0x8
#define _UEP2_EPHSHK_POSN                                   0x4
#define _UEP2_EPHSHK_POSITION                               0x4
#define _UEP2_EPHSHK_SIZE                                   0x1
#define _UEP2_EPHSHK_LENGTH                                 0x1
#define _UEP2_EPHSHK_MASK                                   0x10
#define _UEP2_EP2STALL_POSN                                 0x0
#define _UEP2_EP2STALL_POSITION                             0x0
#define _UEP2_EP2STALL_SIZE                                 0x1
#define _UEP2_EP2STALL_LENGTH                               0x1
#define _UEP2_EP2STALL_MASK                                 0x1
#define _UEP2_EP2INEN_POSN                                  0x1
#define _UEP2_EP2INEN_POSITION                              0x1
#define _UEP2_EP2INEN_SIZE                                  0x1
#define _UEP2_EP2INEN_LENGTH                                0x1
#define _UEP2_EP2INEN_MASK                                  0x2
#define _UEP2_EP2OUTEN_POSN                                 0x2
#define _UEP2_EP2OUTEN_POSITION                             0x2
#define _UEP2_EP2OUTEN_SIZE                                 0x1
#define _UEP2_EP2OUTEN_LENGTH                               0x1
#define _UEP2_EP2OUTEN_MASK                                 0x4
#define _UEP2_EP2CONDIS_POSN                                0x3
#define _UEP2_EP2CONDIS_POSITION                            0x3
#define _UEP2_EP2CONDIS_SIZE                                0x1
#define _UEP2_EP2CONDIS_LENGTH                              0x1
#define _UEP2_EP2CONDIS_MASK                                0x8
#define _UEP2_EP2HSHK_POSN                                  0x4
#define _UEP2_EP2HSHK_POSITION                              0x4
#define _UEP2_EP2HSHK_SIZE                                  0x1
#define _UEP2_EP2HSHK_LENGTH                                0x1
#define _UEP2_EP2HSHK_MASK                                  0x10
#define _UEP2_EPSTALL2_POSN                                 0x0
#define _UEP2_EPSTALL2_POSITION                             0x0
#define _UEP2_EPSTALL2_SIZE                                 0x1
#define _UEP2_EPSTALL2_LENGTH                               0x1
#define _UEP2_EPSTALL2_MASK                                 0x1
#define _UEP2_EPINEN2_POSN                                  0x1
#define _UEP2_EPINEN2_POSITION                              0x1
#define _UEP2_EPINEN2_SIZE                                  0x1
#define _UEP2_EPINEN2_LENGTH                                0x1
#define _UEP2_EPINEN2_MASK                                  0x2
#define _UEP2_EPOUTEN2_POSN                                 0x2
#define _UEP2_EPOUTEN2_POSITION                             0x2
#define _UEP2_EPOUTEN2_SIZE                                 0x1
#define _UEP2_EPOUTEN2_LENGTH                               0x1
#define _UEP2_EPOUTEN2_MASK                                 0x4
#define _UEP2_EPCONDIS2_POSN                                0x3
#define _UEP2_EPCONDIS2_POSITION                            0x3
#define _UEP2_EPCONDIS2_SIZE                                0x1
#define _UEP2_EPCONDIS2_LENGTH                              0x1
#define _UEP2_EPCONDIS2_MASK                                0x8
#define _UEP2_EPHSHK2_POSN                                  0x4
#define _UEP2_EPHSHK2_POSITION                              0x4
#define _UEP2_EPHSHK2_SIZE                                  0x1
#define _UEP2_EPHSHK2_LENGTH                                0x1
#define _UEP2_EPHSHK2_MASK                                  0x10

// Register: UEP3
#define UEP3 UEP3
extern volatile unsigned char           UEP3                __at(0xF56);
#ifndef _LIB_BUILD
asm("UEP3 equ 0F56h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP3STALL               :1;
        unsigned EP3INEN                :1;
        unsigned EP3OUTEN               :1;
        unsigned EP3CONDIS              :1;
        unsigned EP3HSHK                :1;
    };
    struct {
        unsigned EPSTALL3               :1;
        unsigned EPINEN3                :1;
        unsigned EPOUTEN3               :1;
        unsigned EPCONDIS3              :1;
        unsigned EPHSHK3                :1;
    };
} UEP3bits_t;
extern volatile UEP3bits_t UEP3bits __at(0xF56);
// bitfield macros
#define _UEP3_EPSTALL_POSN                                  0x0
#define _UEP3_EPSTALL_POSITION                              0x0
#define _UEP3_EPSTALL_SIZE                                  0x1
#define _UEP3_EPSTALL_LENGTH                                0x1
#define _UEP3_EPSTALL_MASK                                  0x1
#define _UEP3_EPINEN_POSN                                   0x1
#define _UEP3_EPINEN_POSITION                               0x1
#define _UEP3_EPINEN_SIZE                                   0x1
#define _UEP3_EPINEN_LENGTH                                 0x1
#define _UEP3_EPINEN_MASK                                   0x2
#define _UEP3_EPOUTEN_POSN                                  0x2
#define _UEP3_EPOUTEN_POSITION                              0x2
#define _UEP3_EPOUTEN_SIZE                                  0x1
#define _UEP3_EPOUTEN_LENGTH                                0x1
#define _UEP3_EPOUTEN_MASK                                  0x4
#define _UEP3_EPCONDIS_POSN                                 0x3
#define _UEP3_EPCONDIS_POSITION                             0x3
#define _UEP3_EPCONDIS_SIZE                                 0x1
#define _UEP3_EPCONDIS_LENGTH                               0x1
#define _UEP3_EPCONDIS_MASK                                 0x8
#define _UEP3_EPHSHK_POSN                                   0x4
#define _UEP3_EPHSHK_POSITION                               0x4
#define _UEP3_EPHSHK_SIZE                                   0x1
#define _UEP3_EPHSHK_LENGTH                                 0x1
#define _UEP3_EPHSHK_MASK                                   0x10
#define _UEP3_EP3STALL_POSN                                 0x0
#define _UEP3_EP3STALL_POSITION                             0x0
#define _UEP3_EP3STALL_SIZE                                 0x1
#define _UEP3_EP3STALL_LENGTH                               0x1
#define _UEP3_EP3STALL_MASK                                 0x1
#define _UEP3_EP3INEN_POSN                                  0x1
#define _UEP3_EP3INEN_POSITION                              0x1
#define _UEP3_EP3INEN_SIZE                                  0x1
#define _UEP3_EP3INEN_LENGTH                                0x1
#define _UEP3_EP3INEN_MASK                                  0x2
#define _UEP3_EP3OUTEN_POSN                                 0x2
#define _UEP3_EP3OUTEN_POSITION                             0x2
#define _UEP3_EP3OUTEN_SIZE                                 0x1
#define _UEP3_EP3OUTEN_LENGTH                               0x1
#define _UEP3_EP3OUTEN_MASK                                 0x4
#define _UEP3_EP3CONDIS_POSN                                0x3
#define _UEP3_EP3CONDIS_POSITION                            0x3
#define _UEP3_EP3CONDIS_SIZE                                0x1
#define _UEP3_EP3CONDIS_LENGTH                              0x1
#define _UEP3_EP3CONDIS_MASK                                0x8
#define _UEP3_EP3HSHK_POSN                                  0x4
#define _UEP3_EP3HSHK_POSITION                              0x4
#define _UEP3_EP3HSHK_SIZE                                  0x1
#define _UEP3_EP3HSHK_LENGTH                                0x1
#define _UEP3_EP3HSHK_MASK                                  0x10
#define _UEP3_EPSTALL3_POSN                                 0x0
#define _UEP3_EPSTALL3_POSITION                             0x0
#define _UEP3_EPSTALL3_SIZE                                 0x1
#define _UEP3_EPSTALL3_LENGTH                               0x1
#define _UEP3_EPSTALL3_MASK                                 0x1
#define _UEP3_EPINEN3_POSN                                  0x1
#define _UEP3_EPINEN3_POSITION                              0x1
#define _UEP3_EPINEN3_SIZE                                  0x1
#define _UEP3_EPINEN3_LENGTH                                0x1
#define _UEP3_EPINEN3_MASK                                  0x2
#define _UEP3_EPOUTEN3_POSN                                 0x2
#define _UEP3_EPOUTEN3_POSITION                             0x2
#define _UEP3_EPOUTEN3_SIZE                                 0x1
#define _UEP3_EPOUTEN3_LENGTH                               0x1
#define _UEP3_EPOUTEN3_MASK                                 0x4
#define _UEP3_EPCONDIS3_POSN                                0x3
#define _UEP3_EPCONDIS3_POSITION                            0x3
#define _UEP3_EPCONDIS3_SIZE                                0x1
#define _UEP3_EPCONDIS3_LENGTH                              0x1
#define _UEP3_EPCONDIS3_MASK                                0x8
#define _UEP3_EPHSHK3_POSN                                  0x4
#define _UEP3_EPHSHK3_POSITION                              0x4
#define _UEP3_EPHSHK3_SIZE                                  0x1
#define _UEP3_EPHSHK3_LENGTH                                0x1
#define _UEP3_EPHSHK3_MASK                                  0x10

// Register: UEP4
#define UEP4 UEP4
extern volatile unsigned char           UEP4                __at(0xF57);
#ifndef _LIB_BUILD
asm("UEP4 equ 0F57h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP4STALL               :1;
        unsigned EP4INEN                :1;
        unsigned EP4OUTEN               :1;
        unsigned EP4CONDIS              :1;
        unsigned EP4HSHK                :1;
    };
    struct {
        unsigned EPSTALL4               :1;
        unsigned EPINEN4                :1;
        unsigned EPOUTEN4               :1;
        unsigned EPCONDIS4              :1;
        unsigned EPHSHK4                :1;
    };
} UEP4bits_t;
extern volatile UEP4bits_t UEP4bits __at(0xF57);
// bitfield macros
#define _UEP4_EPSTALL_POSN                                  0x0
#define _UEP4_EPSTALL_POSITION                              0x0
#define _UEP4_EPSTALL_SIZE                                  0x1
#define _UEP4_EPSTALL_LENGTH                                0x1
#define _UEP4_EPSTALL_MASK                                  0x1
#define _UEP4_EPINEN_POSN                                   0x1
#define _UEP4_EPINEN_POSITION                               0x1
#define _UEP4_EPINEN_SIZE                                   0x1
#define _UEP4_EPINEN_LENGTH                                 0x1
#define _UEP4_EPINEN_MASK                                   0x2
#define _UEP4_EPOUTEN_POSN                                  0x2
#define _UEP4_EPOUTEN_POSITION                              0x2
#define _UEP4_EPOUTEN_SIZE                                  0x1
#define _UEP4_EPOUTEN_LENGTH                                0x1
#define _UEP4_EPOUTEN_MASK                                  0x4
#define _UEP4_EPCONDIS_POSN                                 0x3
#define _UEP4_EPCONDIS_POSITION                             0x3
#define _UEP4_EPCONDIS_SIZE                                 0x1
#define _UEP4_EPCONDIS_LENGTH                               0x1
#define _UEP4_EPCONDIS_MASK                                 0x8
#define _UEP4_EPHSHK_POSN                                   0x4
#define _UEP4_EPHSHK_POSITION                               0x4
#define _UEP4_EPHSHK_SIZE                                   0x1
#define _UEP4_EPHSHK_LENGTH                                 0x1
#define _UEP4_EPHSHK_MASK                                   0x10
#define _UEP4_EP4STALL_POSN                                 0x0
#define _UEP4_EP4STALL_POSITION                             0x0
#define _UEP4_EP4STALL_SIZE                                 0x1
#define _UEP4_EP4STALL_LENGTH                               0x1
#define _UEP4_EP4STALL_MASK                                 0x1
#define _UEP4_EP4INEN_POSN                                  0x1
#define _UEP4_EP4INEN_POSITION                              0x1
#define _UEP4_EP4INEN_SIZE                                  0x1
#define _UEP4_EP4INEN_LENGTH                                0x1
#define _UEP4_EP4INEN_MASK                                  0x2
#define _UEP4_EP4OUTEN_POSN                                 0x2
#define _UEP4_EP4OUTEN_POSITION                             0x2
#define _UEP4_EP4OUTEN_SIZE                                 0x1
#define _UEP4_EP4OUTEN_LENGTH                               0x1
#define _UEP4_EP4OUTEN_MASK                                 0x4
#define _UEP4_EP4CONDIS_POSN                                0x3
#define _UEP4_EP4CONDIS_POSITION                            0x3
#define _UEP4_EP4CONDIS_SIZE                                0x1
#define _UEP4_EP4CONDIS_LENGTH                              0x1
#define _UEP4_EP4CONDIS_MASK                                0x8
#define _UEP4_EP4HSHK_POSN                                  0x4
#define _UEP4_EP4HSHK_POSITION                              0x4
#define _UEP4_EP4HSHK_SIZE                                  0x1
#define _UEP4_EP4HSHK_LENGTH                                0x1
#define _UEP4_EP4HSHK_MASK                                  0x10
#define _UEP4_EPSTALL4_POSN                                 0x0
#define _UEP4_EPSTALL4_POSITION                             0x0
#define _UEP4_EPSTALL4_SIZE                                 0x1
#define _UEP4_EPSTALL4_LENGTH                               0x1
#define _UEP4_EPSTALL4_MASK                                 0x1
#define _UEP4_EPINEN4_POSN                                  0x1
#define _UEP4_EPINEN4_POSITION                              0x1
#define _UEP4_EPINEN4_SIZE                                  0x1
#define _UEP4_EPINEN4_LENGTH                                0x1
#define _UEP4_EPINEN4_MASK                                  0x2
#define _UEP4_EPOUTEN4_POSN                                 0x2
#define _UEP4_EPOUTEN4_POSITION                             0x2
#define _UEP4_EPOUTEN4_SIZE                                 0x1
#define _UEP4_EPOUTEN4_LENGTH                               0x1
#define _UEP4_EPOUTEN4_MASK                                 0x4
#define _UEP4_EPCONDIS4_POSN                                0x3
#define _UEP4_EPCONDIS4_POSITION                            0x3
#define _UEP4_EPCONDIS4_SIZE                                0x1
#define _UEP4_EPCONDIS4_LENGTH                              0x1
#define _UEP4_EPCONDIS4_MASK                                0x8
#define _UEP4_EPHSHK4_POSN                                  0x4
#define _UEP4_EPHSHK4_POSITION                              0x4
#define _UEP4_EPHSHK4_SIZE                                  0x1
#define _UEP4_EPHSHK4_LENGTH                                0x1
#define _UEP4_EPHSHK4_MASK                                  0x10

// Register: UEP5
#define UEP5 UEP5
extern volatile unsigned char           UEP5                __at(0xF58);
#ifndef _LIB_BUILD
asm("UEP5 equ 0F58h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP5STALL               :1;
        unsigned EP5INEN                :1;
        unsigned EP5OUTEN               :1;
        unsigned EP5CONDIS              :1;
        unsigned EP5HSHK                :1;
    };
    struct {
        unsigned EPSTALL5               :1;
        unsigned EPINEN5                :1;
        unsigned EPOUTEN5               :1;
        unsigned EPCONDIS5              :1;
        unsigned EPHSHK5                :1;
    };
} UEP5bits_t;
extern volatile UEP5bits_t UEP5bits __at(0xF58);
// bitfield macros
#define _UEP5_EPSTALL_POSN                                  0x0
#define _UEP5_EPSTALL_POSITION                              0x0
#define _UEP5_EPSTALL_SIZE                                  0x1
#define _UEP5_EPSTALL_LENGTH                                0x1
#define _UEP5_EPSTALL_MASK                                  0x1
#define _UEP5_EPINEN_POSN                                   0x1
#define _UEP5_EPINEN_POSITION                               0x1
#define _UEP5_EPINEN_SIZE                                   0x1
#define _UEP5_EPINEN_LENGTH                                 0x1
#define _UEP5_EPINEN_MASK                                   0x2
#define _UEP5_EPOUTEN_POSN                                  0x2
#define _UEP5_EPOUTEN_POSITION                              0x2
#define _UEP5_EPOUTEN_SIZE                                  0x1
#define _UEP5_EPOUTEN_LENGTH                                0x1
#define _UEP5_EPOUTEN_MASK                                  0x4
#define _UEP5_EPCONDIS_POSN                                 0x3
#define _UEP5_EPCONDIS_POSITION                             0x3
#define _UEP5_EPCONDIS_SIZE                                 0x1
#define _UEP5_EPCONDIS_LENGTH                               0x1
#define _UEP5_EPCONDIS_MASK                                 0x8
#define _UEP5_EPHSHK_POSN                                   0x4
#define _UEP5_EPHSHK_POSITION                               0x4
#define _UEP5_EPHSHK_SIZE                                   0x1
#define _UEP5_EPHSHK_LENGTH                                 0x1
#define _UEP5_EPHSHK_MASK                                   0x10
#define _UEP5_EP5STALL_POSN                                 0x0
#define _UEP5_EP5STALL_POSITION                             0x0
#define _UEP5_EP5STALL_SIZE                                 0x1
#define _UEP5_EP5STALL_LENGTH                               0x1
#define _UEP5_EP5STALL_MASK                                 0x1
#define _UEP5_EP5INEN_POSN                                  0x1
#define _UEP5_EP5INEN_POSITION                              0x1
#define _UEP5_EP5INEN_SIZE                                  0x1
#define _UEP5_EP5INEN_LENGTH                                0x1
#define _UEP5_EP5INEN_MASK                                  0x2
#define _UEP5_EP5OUTEN_POSN                                 0x2
#define _UEP5_EP5OUTEN_POSITION                             0x2
#define _UEP5_EP5OUTEN_SIZE                                 0x1
#define _UEP5_EP5OUTEN_LENGTH                               0x1
#define _UEP5_EP5OUTEN_MASK                                 0x4
#define _UEP5_EP5CONDIS_POSN                                0x3
#define _UEP5_EP5CONDIS_POSITION                            0x3
#define _UEP5_EP5CONDIS_SIZE                                0x1
#define _UEP5_EP5CONDIS_LENGTH                              0x1
#define _UEP5_EP5CONDIS_MASK                                0x8
#define _UEP5_EP5HSHK_POSN                                  0x4
#define _UEP5_EP5HSHK_POSITION                              0x4
#define _UEP5_EP5HSHK_SIZE                                  0x1
#define _UEP5_EP5HSHK_LENGTH                                0x1
#define _UEP5_EP5HSHK_MASK                                  0x10
#define _UEP5_EPSTALL5_POSN                                 0x0
#define _UEP5_EPSTALL5_POSITION                             0x0
#define _UEP5_EPSTALL5_SIZE                                 0x1
#define _UEP5_EPSTALL5_LENGTH                               0x1
#define _UEP5_EPSTALL5_MASK                                 0x1
#define _UEP5_EPINEN5_POSN                                  0x1
#define _UEP5_EPINEN5_POSITION                              0x1
#define _UEP5_EPINEN5_SIZE                                  0x1
#define _UEP5_EPINEN5_LENGTH                                0x1
#define _UEP5_EPINEN5_MASK                                  0x2
#define _UEP5_EPOUTEN5_POSN                                 0x2
#define _UEP5_EPOUTEN5_POSITION                             0x2
#define _UEP5_EPOUTEN5_SIZE                                 0x1
#define _UEP5_EPOUTEN5_LENGTH                               0x1
#define _UEP5_EPOUTEN5_MASK                                 0x4
#define _UEP5_EPCONDIS5_POSN                                0x3
#define _UEP5_EPCONDIS5_POSITION                            0x3
#define _UEP5_EPCONDIS5_SIZE                                0x1
#define _UEP5_EPCONDIS5_LENGTH                              0x1
#define _UEP5_EPCONDIS5_MASK                                0x8
#define _UEP5_EPHSHK5_POSN                                  0x4
#define _UEP5_EPHSHK5_POSITION                              0x4
#define _UEP5_EPHSHK5_SIZE                                  0x1
#define _UEP5_EPHSHK5_LENGTH                                0x1
#define _UEP5_EPHSHK5_MASK                                  0x10

// Register: UEP6
#define UEP6 UEP6
extern volatile unsigned char           UEP6                __at(0xF59);
#ifndef _LIB_BUILD
asm("UEP6 equ 0F59h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP6STALL               :1;
        unsigned EP6INEN                :1;
        unsigned EP6OUTEN               :1;
        unsigned EP6CONDIS              :1;
        unsigned EP6HSHK                :1;
    };
    struct {
        unsigned EPSTALL6               :1;
        unsigned EPINEN6                :1;
        unsigned EPOUTEN6               :1;
        unsigned EPCONDIS6              :1;
        unsigned EPHSHK6                :1;
    };
} UEP6bits_t;
extern volatile UEP6bits_t UEP6bits __at(0xF59);
// bitfield macros
#define _UEP6_EPSTALL_POSN                                  0x0
#define _UEP6_EPSTALL_POSITION                              0x0
#define _UEP6_EPSTALL_SIZE                                  0x1
#define _UEP6_EPSTALL_LENGTH                                0x1
#define _UEP6_EPSTALL_MASK                                  0x1
#define _UEP6_EPINEN_POSN                                   0x1
#define _UEP6_EPINEN_POSITION                               0x1
#define _UEP6_EPINEN_SIZE                                   0x1
#define _UEP6_EPINEN_LENGTH                                 0x1
#define _UEP6_EPINEN_MASK                                   0x2
#define _UEP6_EPOUTEN_POSN                                  0x2
#define _UEP6_EPOUTEN_POSITION                              0x2
#define _UEP6_EPOUTEN_SIZE                                  0x1
#define _UEP6_EPOUTEN_LENGTH                                0x1
#define _UEP6_EPOUTEN_MASK                                  0x4
#define _UEP6_EPCONDIS_POSN                                 0x3
#define _UEP6_EPCONDIS_POSITION                             0x3
#define _UEP6_EPCONDIS_SIZE                                 0x1
#define _UEP6_EPCONDIS_LENGTH                               0x1
#define _UEP6_EPCONDIS_MASK                                 0x8
#define _UEP6_EPHSHK_POSN                                   0x4
#define _UEP6_EPHSHK_POSITION                               0x4
#define _UEP6_EPHSHK_SIZE                                   0x1
#define _UEP6_EPHSHK_LENGTH                                 0x1
#define _UEP6_EPHSHK_MASK                                   0x10
#define _UEP6_EP6STALL_POSN                                 0x0
#define _UEP6_EP6STALL_POSITION                             0x0
#define _UEP6_EP6STALL_SIZE                                 0x1
#define _UEP6_EP6STALL_LENGTH                               0x1
#define _UEP6_EP6STALL_MASK                                 0x1
#define _UEP6_EP6INEN_POSN                                  0x1
#define _UEP6_EP6INEN_POSITION                              0x1
#define _UEP6_EP6INEN_SIZE                                  0x1
#define _UEP6_EP6INEN_LENGTH                                0x1
#define _UEP6_EP6INEN_MASK                                  0x2
#define _UEP6_EP6OUTEN_POSN                                 0x2
#define _UEP6_EP6OUTEN_POSITION                             0x2
#define _UEP6_EP6OUTEN_SIZE                                 0x1
#define _UEP6_EP6OUTEN_LENGTH                               0x1
#define _UEP6_EP6OUTEN_MASK                                 0x4
#define _UEP6_EP6CONDIS_POSN                                0x3
#define _UEP6_EP6CONDIS_POSITION                            0x3
#define _UEP6_EP6CONDIS_SIZE                                0x1
#define _UEP6_EP6CONDIS_LENGTH                              0x1
#define _UEP6_EP6CONDIS_MASK                                0x8
#define _UEP6_EP6HSHK_POSN                                  0x4
#define _UEP6_EP6HSHK_POSITION                              0x4
#define _UEP6_EP6HSHK_SIZE                                  0x1
#define _UEP6_EP6HSHK_LENGTH                                0x1
#define _UEP6_EP6HSHK_MASK                                  0x10
#define _UEP6_EPSTALL6_POSN                                 0x0
#define _UEP6_EPSTALL6_POSITION                             0x0
#define _UEP6_EPSTALL6_SIZE                                 0x1
#define _UEP6_EPSTALL6_LENGTH                               0x1
#define _UEP6_EPSTALL6_MASK                                 0x1
#define _UEP6_EPINEN6_POSN                                  0x1
#define _UEP6_EPINEN6_POSITION                              0x1
#define _UEP6_EPINEN6_SIZE                                  0x1
#define _UEP6_EPINEN6_LENGTH                                0x1
#define _UEP6_EPINEN6_MASK                                  0x2
#define _UEP6_EPOUTEN6_POSN                                 0x2
#define _UEP6_EPOUTEN6_POSITION                             0x2
#define _UEP6_EPOUTEN6_SIZE                                 0x1
#define _UEP6_EPOUTEN6_LENGTH                               0x1
#define _UEP6_EPOUTEN6_MASK                                 0x4
#define _UEP6_EPCONDIS6_POSN                                0x3
#define _UEP6_EPCONDIS6_POSITION                            0x3
#define _UEP6_EPCONDIS6_SIZE                                0x1
#define _UEP6_EPCONDIS6_LENGTH                              0x1
#define _UEP6_EPCONDIS6_MASK                                0x8
#define _UEP6_EPHSHK6_POSN                                  0x4
#define _UEP6_EPHSHK6_POSITION                              0x4
#define _UEP6_EPHSHK6_SIZE                                  0x1
#define _UEP6_EPHSHK6_LENGTH                                0x1
#define _UEP6_EPHSHK6_MASK                                  0x10

// Register: UEP7
#define UEP7 UEP7
extern volatile unsigned char           UEP7                __at(0xF5A);
#ifndef _LIB_BUILD
asm("UEP7 equ 0F5Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned EP7STALL               :1;
        unsigned EP7INEN                :1;
        unsigned EP7OUTEN               :1;
        unsigned EP7CONDIS              :1;
        unsigned EP7HSHK                :1;
    };
    struct {
        unsigned EPSTALL7               :1;
        unsigned EPINEN7                :1;
        unsigned EPOUTEN7               :1;
        unsigned EPCONDIS7              :1;
        unsigned EPHSHK7                :1;
    };
} UEP7bits_t;
extern volatile UEP7bits_t UEP7bits __at(0xF5A);
// bitfield macros
#define _UEP7_EPSTALL_POSN                                  0x0
#define _UEP7_EPSTALL_POSITION                              0x0
#define _UEP7_EPSTALL_SIZE                                  0x1
#define _UEP7_EPSTALL_LENGTH                                0x1
#define _UEP7_EPSTALL_MASK                                  0x1
#define _UEP7_EPINEN_POSN                                   0x1
#define _UEP7_EPINEN_POSITION                               0x1
#define _UEP7_EPINEN_SIZE                                   0x1
#define _UEP7_EPINEN_LENGTH                                 0x1
#define _UEP7_EPINEN_MASK                                   0x2
#define _UEP7_EPOUTEN_POSN                                  0x2
#define _UEP7_EPOUTEN_POSITION                              0x2
#define _UEP7_EPOUTEN_SIZE                                  0x1
#define _UEP7_EPOUTEN_LENGTH                                0x1
#define _UEP7_EPOUTEN_MASK                                  0x4
#define _UEP7_EPCONDIS_POSN                                 0x3
#define _UEP7_EPCONDIS_POSITION                             0x3
#define _UEP7_EPCONDIS_SIZE                                 0x1
#define _UEP7_EPCONDIS_LENGTH                               0x1
#define _UEP7_EPCONDIS_MASK                                 0x8
#define _UEP7_EPHSHK_POSN                                   0x4
#define _UEP7_EPHSHK_POSITION                               0x4
#define _UEP7_EPHSHK_SIZE                                   0x1
#define _UEP7_EPHSHK_LENGTH                                 0x1
#define _UEP7_EPHSHK_MASK                                   0x10
#define _UEP7_EP7STALL_POSN                                 0x0
#define _UEP7_EP7STALL_POSITION                             0x0
#define _UEP7_EP7STALL_SIZE                                 0x1
#define _UEP7_EP7STALL_LENGTH                               0x1
#define _UEP7_EP7STALL_MASK                                 0x1
#define _UEP7_EP7INEN_POSN                                  0x1
#define _UEP7_EP7INEN_POSITION                              0x1
#define _UEP7_EP7INEN_SIZE                                  0x1
#define _UEP7_EP7INEN_LENGTH                                0x1
#define _UEP7_EP7INEN_MASK                                  0x2
#define _UEP7_EP7OUTEN_POSN                                 0x2
#define _UEP7_EP7OUTEN_POSITION                             0x2
#define _UEP7_EP7OUTEN_SIZE                                 0x1
#define _UEP7_EP7OUTEN_LENGTH                               0x1
#define _UEP7_EP7OUTEN_MASK                                 0x4
#define _UEP7_EP7CONDIS_POSN                                0x3
#define _UEP7_EP7CONDIS_POSITION                            0x3
#define _UEP7_EP7CONDIS_SIZE                                0x1
#define _UEP7_EP7CONDIS_LENGTH                              0x1
#define _UEP7_EP7CONDIS_MASK                                0x8
#define _UEP7_EP7HSHK_POSN                                  0x4
#define _UEP7_EP7HSHK_POSITION                              0x4
#define _UEP7_EP7HSHK_SIZE                                  0x1
#define _UEP7_EP7HSHK_LENGTH                                0x1
#define _UEP7_EP7HSHK_MASK                                  0x10
#define _UEP7_EPSTALL7_POSN                                 0x0
#define _UEP7_EPSTALL7_POSITION                             0x0
#define _UEP7_EPSTALL7_SIZE                                 0x1
#define _UEP7_EPSTALL7_LENGTH                               0x1
#define _UEP7_EPSTALL7_MASK                                 0x1
#define _UEP7_EPINEN7_POSN                                  0x1
#define _UEP7_EPINEN7_POSITION                              0x1
#define _UEP7_EPINEN7_SIZE                                  0x1
#define _UEP7_EPINEN7_LENGTH                                0x1
#define _UEP7_EPINEN7_MASK                                  0x2
#define _UEP7_EPOUTEN7_POSN                                 0x2
#define _UEP7_EPOUTEN7_POSITION                             0x2
#define _UEP7_EPOUTEN7_SIZE                                 0x1
#define _UEP7_EPOUTEN7_LENGTH                               0x1
#define _UEP7_EPOUTEN7_MASK                                 0x4
#define _UEP7_EPCONDIS7_POSN                                0x3
#define _UEP7_EPCONDIS7_POSITION                            0x3
#define _UEP7_EPCONDIS7_SIZE                                0x1
#define _UEP7_EPCONDIS7_LENGTH                              0x1
#define _UEP7_EPCONDIS7_MASK                                0x8
#define _UEP7_EPHSHK7_POSN                                  0x4
#define _UEP7_EPHSHK7_POSITION                              0x4
#define _UEP7_EPHSHK7_SIZE                                  0x1
#define _UEP7_EPHSHK7_LENGTH                                0x1
#define _UEP7_EPHSHK7_MASK                                  0x10

// Register: UEIE
#define UEIE UEIE
extern volatile unsigned char           UEIE                __at(0xF5B);
#ifndef _LIB_BUILD
asm("UEIE equ 0F5Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEE                  :1;
        unsigned CRC5EE                 :1;
        unsigned CRC16EE                :1;
        unsigned DFN8EE                 :1;
        unsigned BTOEE                  :1;
        unsigned                        :2;
        unsigned BTSEE                  :1;
    };
} UEIEbits_t;
extern volatile UEIEbits_t UEIEbits __at(0xF5B);
// bitfield macros
#define _UEIE_PIDEE_POSN                                    0x0
#define _UEIE_PIDEE_POSITION                                0x0
#define _UEIE_PIDEE_SIZE                                    0x1
#define _UEIE_PIDEE_LENGTH                                  0x1
#define _UEIE_PIDEE_MASK                                    0x1
#define _UEIE_CRC5EE_POSN                                   0x1
#define _UEIE_CRC5EE_POSITION                               0x1
#define _UEIE_CRC5EE_SIZE                                   0x1
#define _UEIE_CRC5EE_LENGTH                                 0x1
#define _UEIE_CRC5EE_MASK                                   0x2
#define _UEIE_CRC16EE_POSN                                  0x2
#define _UEIE_CRC16EE_POSITION                              0x2
#define _UEIE_CRC16EE_SIZE                                  0x1
#define _UEIE_CRC16EE_LENGTH                                0x1
#define _UEIE_CRC16EE_MASK                                  0x4
#define _UEIE_DFN8EE_POSN                                   0x3
#define _UEIE_DFN8EE_POSITION                               0x3
#define _UEIE_DFN8EE_SIZE                                   0x1
#define _UEIE_DFN8EE_LENGTH                                 0x1
#define _UEIE_DFN8EE_MASK                                   0x8
#define _UEIE_BTOEE_POSN                                    0x4
#define _UEIE_BTOEE_POSITION                                0x4
#define _UEIE_BTOEE_SIZE                                    0x1
#define _UEIE_BTOEE_LENGTH                                  0x1
#define _UEIE_BTOEE_MASK                                    0x10
#define _UEIE_BTSEE_POSN                                    0x7
#define _UEIE_BTSEE_POSITION                                0x7
#define _UEIE_BTSEE_SIZE                                    0x1
#define _UEIE_BTSEE_LENGTH                                  0x1
#define _UEIE_BTSEE_MASK                                    0x80

// Register: UADDR
#define UADDR UADDR
extern volatile unsigned char           UADDR               __at(0xF5C);
#ifndef _LIB_BUILD
asm("UADDR equ 0F5Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDR                   :7;
    };
    struct {
        unsigned ADDR0                  :1;
        unsigned ADDR1                  :1;
        unsigned ADDR2                  :1;
        unsigned ADDR3                  :1;
        unsigned ADDR4                  :1;
        unsigned ADDR5                  :1;
        unsigned ADDR6                  :1;
    };
} UADDRbits_t;
extern volatile UADDRbits_t UADDRbits __at(0xF5C);
// bitfield macros
#define _UADDR_ADDR_POSN                                    0x0
#define _UADDR_ADDR_POSITION                                0x0
#define _UADDR_ADDR_SIZE                                    0x7
#define _UADDR_ADDR_LENGTH                                  0x7
#define _UADDR_ADDR_MASK                                    0x7F
#define _UADDR_ADDR0_POSN                                   0x0
#define _UADDR_ADDR0_POSITION                               0x0
#define _UADDR_ADDR0_SIZE                                   0x1
#define _UADDR_ADDR0_LENGTH                                 0x1
#define _UADDR_ADDR0_MASK                                   0x1
#define _UADDR_ADDR1_POSN                                   0x1
#define _UADDR_ADDR1_POSITION                               0x1
#define _UADDR_ADDR1_SIZE                                   0x1
#define _UADDR_ADDR1_LENGTH                                 0x1
#define _UADDR_ADDR1_MASK                                   0x2
#define _UADDR_ADDR2_POSN                                   0x2
#define _UADDR_ADDR2_POSITION                               0x2
#define _UADDR_ADDR2_SIZE                                   0x1
#define _UADDR_ADDR2_LENGTH                                 0x1
#define _UADDR_ADDR2_MASK                                   0x4
#define _UADDR_ADDR3_POSN                                   0x3
#define _UADDR_ADDR3_POSITION                               0x3
#define _UADDR_ADDR3_SIZE                                   0x1
#define _UADDR_ADDR3_LENGTH                                 0x1
#define _UADDR_ADDR3_MASK                                   0x8
#define _UADDR_ADDR4_POSN                                   0x4
#define _UADDR_ADDR4_POSITION                               0x4
#define _UADDR_ADDR4_SIZE                                   0x1
#define _UADDR_ADDR4_LENGTH                                 0x1
#define _UADDR_ADDR4_MASK                                   0x10
#define _UADDR_ADDR5_POSN                                   0x5
#define _UADDR_ADDR5_POSITION                               0x5
#define _UADDR_ADDR5_SIZE                                   0x1
#define _UADDR_ADDR5_LENGTH                                 0x1
#define _UADDR_ADDR5_MASK                                   0x20
#define _UADDR_ADDR6_POSN                                   0x6
#define _UADDR_ADDR6_POSITION                               0x6
#define _UADDR_ADDR6_SIZE                                   0x1
#define _UADDR_ADDR6_LENGTH                                 0x1
#define _UADDR_ADDR6_MASK                                   0x40

// Register: UFRML
#define UFRML UFRML
extern volatile unsigned char           UFRML               __at(0xF5D);
#ifndef _LIB_BUILD
asm("UFRML equ 0F5Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRML                   :8;
    };
    struct {
        unsigned FRM0                   :1;
        unsigned FRM1                   :1;
        unsigned FRM2                   :1;
        unsigned FRM3                   :1;
        unsigned FRM4                   :1;
        unsigned FRM5                   :1;
        unsigned FRM6                   :1;
        unsigned FRM7                   :1;
    };
} UFRMLbits_t;
extern volatile UFRMLbits_t UFRMLbits __at(0xF5D);
// bitfield macros
#define _UFRML_FRML_POSN                                    0x0
#define _UFRML_FRML_POSITION                                0x0
#define _UFRML_FRML_SIZE                                    0x8
#define _UFRML_FRML_LENGTH                                  0x8
#define _UFRML_FRML_MASK                                    0xFF
#define _UFRML_FRM0_POSN                                    0x0
#define _UFRML_FRM0_POSITION                                0x0
#define _UFRML_FRM0_SIZE                                    0x1
#define _UFRML_FRM0_LENGTH                                  0x1
#define _UFRML_FRM0_MASK                                    0x1
#define _UFRML_FRM1_POSN                                    0x1
#define _UFRML_FRM1_POSITION                                0x1
#define _UFRML_FRM1_SIZE                                    0x1
#define _UFRML_FRM1_LENGTH                                  0x1
#define _UFRML_FRM1_MASK                                    0x2
#define _UFRML_FRM2_POSN                                    0x2
#define _UFRML_FRM2_POSITION                                0x2
#define _UFRML_FRM2_SIZE                                    0x1
#define _UFRML_FRM2_LENGTH                                  0x1
#define _UFRML_FRM2_MASK                                    0x4
#define _UFRML_FRM3_POSN                                    0x3
#define _UFRML_FRM3_POSITION                                0x3
#define _UFRML_FRM3_SIZE                                    0x1
#define _UFRML_FRM3_LENGTH                                  0x1
#define _UFRML_FRM3_MASK                                    0x8
#define _UFRML_FRM4_POSN                                    0x4
#define _UFRML_FRM4_POSITION                                0x4
#define _UFRML_FRM4_SIZE                                    0x1
#define _UFRML_FRM4_LENGTH                                  0x1
#define _UFRML_FRM4_MASK                                    0x10
#define _UFRML_FRM5_POSN                                    0x5
#define _UFRML_FRM5_POSITION                                0x5
#define _UFRML_FRM5_SIZE                                    0x1
#define _UFRML_FRM5_LENGTH                                  0x1
#define _UFRML_FRM5_MASK                                    0x20
#define _UFRML_FRM6_POSN                                    0x6
#define _UFRML_FRM6_POSITION                                0x6
#define _UFRML_FRM6_SIZE                                    0x1
#define _UFRML_FRM6_LENGTH                                  0x1
#define _UFRML_FRM6_MASK                                    0x40
#define _UFRML_FRM7_POSN                                    0x7
#define _UFRML_FRM7_POSITION                                0x7
#define _UFRML_FRM7_SIZE                                    0x1
#define _UFRML_FRM7_LENGTH                                  0x1
#define _UFRML_FRM7_MASK                                    0x80

// Register: UFRMH
#define UFRMH UFRMH
extern volatile unsigned char           UFRMH               __at(0xF5E);
#ifndef _LIB_BUILD
asm("UFRMH equ 0F5Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRMH                   :3;
    };
    struct {
        unsigned FRM8                   :1;
        unsigned FRM9                   :1;
        unsigned FRM10                  :1;
    };
} UFRMHbits_t;
extern volatile UFRMHbits_t UFRMHbits __at(0xF5E);
// bitfield macros
#define _UFRMH_FRMH_POSN                                    0x0
#define _UFRMH_FRMH_POSITION                                0x0
#define _UFRMH_FRMH_SIZE                                    0x3
#define _UFRMH_FRMH_LENGTH                                  0x3
#define _UFRMH_FRMH_MASK                                    0x7
#define _UFRMH_FRM8_POSN                                    0x0
#define _UFRMH_FRM8_POSITION                                0x0
#define _UFRMH_FRM8_SIZE                                    0x1
#define _UFRMH_FRM8_LENGTH                                  0x1
#define _UFRMH_FRM8_MASK                                    0x1
#define _UFRMH_FRM9_POSN                                    0x1
#define _UFRMH_FRM9_POSITION                                0x1
#define _UFRMH_FRM9_SIZE                                    0x1
#define _UFRMH_FRM9_LENGTH                                  0x1
#define _UFRMH_FRM9_MASK                                    0x2
#define _UFRMH_FRM10_POSN                                   0x2
#define _UFRMH_FRM10_POSITION                               0x2
#define _UFRMH_FRM10_SIZE                                   0x1
#define _UFRMH_FRM10_LENGTH                                 0x1
#define _UFRMH_FRM10_MASK                                   0x4

// Register: UEIR
#define UEIR UEIR
extern volatile unsigned char           UEIR                __at(0xF5F);
#ifndef _LIB_BUILD
asm("UEIR equ 0F5Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEF                  :1;
        unsigned CRC5EF                 :1;
        unsigned CRC16EF                :1;
        unsigned DFN8EF                 :1;
        unsigned BTOEF                  :1;
        unsigned                        :2;
        unsigned BTSEF                  :1;
    };
} UEIRbits_t;
extern volatile UEIRbits_t UEIRbits __at(0xF5F);
// bitfield macros
#define _UEIR_PIDEF_POSN                                    0x0
#define _UEIR_PIDEF_POSITION                                0x0
#define _UEIR_PIDEF_SIZE                                    0x1
#define _UEIR_PIDEF_LENGTH                                  0x1
#define _UEIR_PIDEF_MASK                                    0x1
#define _UEIR_CRC5EF_POSN                                   0x1
#define _UEIR_CRC5EF_POSITION                               0x1
#define _UEIR_CRC5EF_SIZE                                   0x1
#define _UEIR_CRC5EF_LENGTH                                 0x1
#define _UEIR_CRC5EF_MASK                                   0x2
#define _UEIR_CRC16EF_POSN                                  0x2
#define _UEIR_CRC16EF_POSITION                              0x2
#define _UEIR_CRC16EF_SIZE                                  0x1
#define _UEIR_CRC16EF_LENGTH                                0x1
#define _UEIR_CRC16EF_MASK                                  0x4
#define _UEIR_DFN8EF_POSN                                   0x3
#define _UEIR_DFN8EF_POSITION                               0x3
#define _UEIR_DFN8EF_SIZE                                   0x1
#define _UEIR_DFN8EF_LENGTH                                 0x1
#define _UEIR_DFN8EF_MASK                                   0x8
#define _UEIR_BTOEF_POSN                                    0x4
#define _UEIR_BTOEF_POSITION                                0x4
#define _UEIR_BTOEF_SIZE                                    0x1
#define _UEIR_BTOEF_LENGTH                                  0x1
#define _UEIR_BTOEF_MASK                                    0x10
#define _UEIR_BTSEF_POSN                                    0x7
#define _UEIR_BTSEF_POSITION                                0x7
#define _UEIR_BTSEF_SIZE                                    0x1
#define _UEIR_BTSEF_LENGTH                                  0x1
#define _UEIR_BTSEF_MASK                                    0x80

// Register: UIE
#define UIE UIE
extern volatile unsigned char           UIE                 __at(0xF60);
#ifndef _LIB_BUILD
asm("UIE equ 0F60h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIE                 :1;
        unsigned UERRIE                 :1;
        unsigned ACTVIE                 :1;
        unsigned TRNIE                  :1;
        unsigned IDLEIE                 :1;
        unsigned STALLIE                :1;
        unsigned SOFIE                  :1;
    };
} UIEbits_t;
extern volatile UIEbits_t UIEbits __at(0xF60);
// bitfield macros
#define _UIE_URSTIE_POSN                                    0x0
#define _UIE_URSTIE_POSITION                                0x0
#define _UIE_URSTIE_SIZE                                    0x1
#define _UIE_URSTIE_LENGTH                                  0x1
#define _UIE_URSTIE_MASK                                    0x1
#define _UIE_UERRIE_POSN                                    0x1
#define _UIE_UERRIE_POSITION                                0x1
#define _UIE_UERRIE_SIZE                                    0x1
#define _UIE_UERRIE_LENGTH                                  0x1
#define _UIE_UERRIE_MASK                                    0x2
#define _UIE_ACTVIE_POSN                                    0x2
#define _UIE_ACTVIE_POSITION                                0x2
#define _UIE_ACTVIE_SIZE                                    0x1
#define _UIE_ACTVIE_LENGTH                                  0x1
#define _UIE_ACTVIE_MASK                                    0x4
#define _UIE_TRNIE_POSN                                     0x3
#define _UIE_TRNIE_POSITION                                 0x3
#define _UIE_TRNIE_SIZE                                     0x1
#define _UIE_TRNIE_LENGTH                                   0x1
#define _UIE_TRNIE_MASK                                     0x8
#define _UIE_IDLEIE_POSN                                    0x4
#define _UIE_IDLEIE_POSITION                                0x4
#define _UIE_IDLEIE_SIZE                                    0x1
#define _UIE_IDLEIE_LENGTH                                  0x1
#define _UIE_IDLEIE_MASK                                    0x10
#define _UIE_STALLIE_POSN                                   0x5
#define _UIE_STALLIE_POSITION                               0x5
#define _UIE_STALLIE_SIZE                                   0x1
#define _UIE_STALLIE_LENGTH                                 0x1
#define _UIE_STALLIE_MASK                                   0x20
#define _UIE_SOFIE_POSN                                     0x6
#define _UIE_SOFIE_POSITION                                 0x6
#define _UIE_SOFIE_SIZE                                     0x1
#define _UIE_SOFIE_LENGTH                                   0x1
#define _UIE_SOFIE_MASK                                     0x40

// Register: UCFG
#define UCFG UCFG
extern volatile unsigned char           UCFG                __at(0xF61);
#ifndef _LIB_BUILD
asm("UCFG equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPB0                   :1;
        unsigned PPB1                   :1;
        unsigned FSEN                   :1;
        unsigned                        :1;
        unsigned UPUEN                  :1;
        unsigned                        :2;
        unsigned UTEYE                  :1;
    };
    struct {
        unsigned UPP0                   :1;
        unsigned UPP1                   :1;
    };
} UCFGbits_t;
extern volatile UCFGbits_t UCFGbits __at(0xF61);
// bitfield macros
#define _UCFG_PPB0_POSN                                     0x0
#define _UCFG_PPB0_POSITION                                 0x0
#define _UCFG_PPB0_SIZE                                     0x1
#define _UCFG_PPB0_LENGTH                                   0x1
#define _UCFG_PPB0_MASK                                     0x1
#define _UCFG_PPB1_POSN                                     0x1
#define _UCFG_PPB1_POSITION                                 0x1
#define _UCFG_PPB1_SIZE                                     0x1
#define _UCFG_PPB1_LENGTH                                   0x1
#define _UCFG_PPB1_MASK                                     0x2
#define _UCFG_FSEN_POSN                                     0x2
#define _UCFG_FSEN_POSITION                                 0x2
#define _UCFG_FSEN_SIZE                                     0x1
#define _UCFG_FSEN_LENGTH                                   0x1
#define _UCFG_FSEN_MASK                                     0x4
#define _UCFG_UPUEN_POSN                                    0x4
#define _UCFG_UPUEN_POSITION                                0x4
#define _UCFG_UPUEN_SIZE                                    0x1
#define _UCFG_UPUEN_LENGTH                                  0x1
#define _UCFG_UPUEN_MASK                                    0x10
#define _UCFG_UTEYE_POSN                                    0x7
#define _UCFG_UTEYE_POSITION                                0x7
#define _UCFG_UTEYE_SIZE                                    0x1
#define _UCFG_UTEYE_LENGTH                                  0x1
#define _UCFG_UTEYE_MASK                                    0x80
#define _UCFG_UPP0_POSN                                     0x0
#define _UCFG_UPP0_POSITION                                 0x0
#define _UCFG_UPP0_SIZE                                     0x1
#define _UCFG_UPP0_LENGTH                                   0x1
#define _UCFG_UPP0_MASK                                     0x1
#define _UCFG_UPP1_POSN                                     0x1
#define _UCFG_UPP1_POSITION                                 0x1
#define _UCFG_UPP1_SIZE                                     0x1
#define _UCFG_UPP1_LENGTH                                   0x1
#define _UCFG_UPP1_MASK                                     0x2

// Register: UIR
#define UIR UIR
extern volatile unsigned char           UIR                 __at(0xF62);
#ifndef _LIB_BUILD
asm("UIR equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIF                 :1;
        unsigned UERRIF                 :1;
        unsigned ACTVIF                 :1;
        unsigned TRNIF                  :1;
        unsigned IDLEIF                 :1;
        unsigned STALLIF                :1;
        unsigned SOFIF                  :1;
    };
} UIRbits_t;
extern volatile UIRbits_t UIRbits __at(0xF62);
// bitfield macros
#define _UIR_URSTIF_POSN                                    0x0
#define _UIR_URSTIF_POSITION                                0x0
#define _UIR_URSTIF_SIZE                                    0x1
#define _UIR_URSTIF_LENGTH                                  0x1
#define _UIR_URSTIF_MASK                                    0x1
#define _UIR_UERRIF_POSN                                    0x1
#define _UIR_UERRIF_POSITION                                0x1
#define _UIR_UERRIF_SIZE                                    0x1
#define _UIR_UERRIF_LENGTH                                  0x1
#define _UIR_UERRIF_MASK                                    0x2
#define _UIR_ACTVIF_POSN                                    0x2
#define _UIR_ACTVIF_POSITION                                0x2
#define _UIR_ACTVIF_SIZE                                    0x1
#define _UIR_ACTVIF_LENGTH                                  0x1
#define _UIR_ACTVIF_MASK                                    0x4
#define _UIR_TRNIF_POSN                                     0x3
#define _UIR_TRNIF_POSITION                                 0x3
#define _UIR_TRNIF_SIZE                                     0x1
#define _UIR_TRNIF_LENGTH                                   0x1
#define _UIR_TRNIF_MASK                                     0x8
#define _UIR_IDLEIF_POSN                                    0x4
#define _UIR_IDLEIF_POSITION                                0x4
#define _UIR_IDLEIF_SIZE                                    0x1
#define _UIR_IDLEIF_LENGTH                                  0x1
#define _UIR_IDLEIF_MASK                                    0x10
#define _UIR_STALLIF_POSN                                   0x5
#define _UIR_STALLIF_POSITION                               0x5
#define _UIR_STALLIF_SIZE                                   0x1
#define _UIR_STALLIF_LENGTH                                 0x1
#define _UIR_STALLIF_MASK                                   0x20
#define _UIR_SOFIF_POSN                                     0x6
#define _UIR_SOFIF_POSITION                                 0x6
#define _UIR_SOFIF_SIZE                                     0x1
#define _UIR_SOFIF_LENGTH                                   0x1
#define _UIR_SOFIF_MASK                                     0x40

// Register: USTAT
#define USTAT USTAT
extern volatile unsigned char           USTAT               __at(0xF63);
#ifndef _LIB_BUILD
asm("USTAT equ 0F63h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned PPBI                   :1;
        unsigned DIR                    :1;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
        unsigned ENDP2                  :1;
        unsigned ENDP3                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits __at(0xF63);
// bitfield macros
#define _USTAT_PPBI_POSN                                    0x1
#define _USTAT_PPBI_POSITION                                0x1
#define _USTAT_PPBI_SIZE                                    0x1
#define _USTAT_PPBI_LENGTH                                  0x1
#define _USTAT_PPBI_MASK                                    0x2
#define _USTAT_DIR_POSN                                     0x2
#define _USTAT_DIR_POSITION                                 0x2
#define _USTAT_DIR_SIZE                                     0x1
#define _USTAT_DIR_LENGTH                                   0x1
#define _USTAT_DIR_MASK                                     0x4
#define _USTAT_ENDP0_POSN                                   0x3
#define _USTAT_ENDP0_POSITION                               0x3
#define _USTAT_ENDP0_SIZE                                   0x1
#define _USTAT_ENDP0_LENGTH                                 0x1
#define _USTAT_ENDP0_MASK                                   0x8
#define _USTAT_ENDP1_POSN                                   0x4
#define _USTAT_ENDP1_POSITION                               0x4
#define _USTAT_ENDP1_SIZE                                   0x1
#define _USTAT_ENDP1_LENGTH                                 0x1
#define _USTAT_ENDP1_MASK                                   0x10
#define _USTAT_ENDP2_POSN                                   0x5
#define _USTAT_ENDP2_POSITION                               0x5
#define _USTAT_ENDP2_SIZE                                   0x1
#define _USTAT_ENDP2_LENGTH                                 0x1
#define _USTAT_ENDP2_MASK                                   0x20
#define _USTAT_ENDP3_POSN                                   0x6
#define _USTAT_ENDP3_POSITION                               0x6
#define _USTAT_ENDP3_SIZE                                   0x1
#define _USTAT_ENDP3_LENGTH                                 0x1
#define _USTAT_ENDP3_MASK                                   0x40

// Register: UCON
#define UCON UCON
extern volatile unsigned char           UCON                __at(0xF64);
#ifndef _LIB_BUILD
asm("UCON equ 0F64h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SUSPND                 :1;
        unsigned RESUME                 :1;
        unsigned USBEN                  :1;
        unsigned PKTDIS                 :1;
        unsigned SE0                    :1;
        unsigned PPBRST                 :1;
    };
} UCONbits_t;
extern volatile UCONbits_t UCONbits __at(0xF64);
// bitfield macros
#define _UCON_SUSPND_POSN                                   0x1
#define _UCON_SUSPND_POSITION                               0x1
#define _UCON_SUSPND_SIZE                                   0x1
#define _UCON_SUSPND_LENGTH                                 0x1
#define _UCON_SUSPND_MASK                                   0x2
#define _UCON_RESUME_POSN                                   0x2
#define _UCON_RESUME_POSITION                               0x2
#define _UCON_RESUME_SIZE                                   0x1
#define _UCON_RESUME_LENGTH                                 0x1
#define _UCON_RESUME_MASK                                   0x4
#define _UCON_USBEN_POSN                                    0x3
#define _UCON_USBEN_POSITION                                0x3
#define _UCON_USBEN_SIZE                                    0x1
#define _UCON_USBEN_LENGTH                                  0x1
#define _UCON_USBEN_MASK                                    0x8
#define _UCON_PKTDIS_POSN                                   0x4
#define _UCON_PKTDIS_POSITION                               0x4
#define _UCON_PKTDIS_SIZE                                   0x1
#define _UCON_PKTDIS_LENGTH                                 0x1
#define _UCON_PKTDIS_MASK                                   0x10
#define _UCON_SE0_POSN                                      0x5
#define _UCON_SE0_POSITION                                  0x5
#define _UCON_SE0_SIZE                                      0x1
#define _UCON_SE0_LENGTH                                    0x1
#define _UCON_SE0_MASK                                      0x20
#define _UCON_PPBRST_POSN                                   0x6
#define _UCON_PPBRST_POSITION                               0x6
#define _UCON_PPBRST_SIZE                                   0x1
#define _UCON_PPBRST_LENGTH                                 0x1
#define _UCON_PPBRST_MASK                                   0x40

// Register: SRCON0
#define SRCON0 SRCON0
extern volatile unsigned char           SRCON0              __at(0xF68);
#ifndef _LIB_BUILD
asm("SRCON0 equ 0F68h");
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
extern volatile SRCON0bits_t SRCON0bits __at(0xF68);
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
extern volatile unsigned char           SRCON1              __at(0xF69);
#ifndef _LIB_BUILD
asm("SRCON1 equ 0F69h");
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
extern volatile SRCON1bits_t SRCON1bits __at(0xF69);
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

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0xF6B);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2CH                   :2;
        unsigned C2R                    :1;
        unsigned C2SP                   :1;
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
extern volatile CM2CON0bits_t CM2CON0bits __at(0xF6B);
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
#define _CM2CON0_C2SP_POSN                                  0x3
#define _CM2CON0_C2SP_POSITION                              0x3
#define _CM2CON0_C2SP_SIZE                                  0x1
#define _CM2CON0_C2SP_LENGTH                                0x1
#define _CM2CON0_C2SP_MASK                                  0x8
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
extern volatile unsigned char           CM2CON1             __at(0xF6C);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C1SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C1HYS                  :1;
        unsigned C2RSEL                 :1;
        unsigned C1RSEL                 :1;
        unsigned MC2OUT                 :1;
        unsigned MC1OUT                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0xF6C);
// bitfield macros
#define _CM2CON1_C2SYNC_POSN                                0x0
#define _CM2CON1_C2SYNC_POSITION                            0x0
#define _CM2CON1_C2SYNC_SIZE                                0x1
#define _CM2CON1_C2SYNC_LENGTH                              0x1
#define _CM2CON1_C2SYNC_MASK                                0x1
#define _CM2CON1_C1SYNC_POSN                                0x1
#define _CM2CON1_C1SYNC_POSITION                            0x1
#define _CM2CON1_C1SYNC_SIZE                                0x1
#define _CM2CON1_C1SYNC_LENGTH                              0x1
#define _CM2CON1_C1SYNC_MASK                                0x2
#define _CM2CON1_C2HYS_POSN                                 0x2
#define _CM2CON1_C2HYS_POSITION                             0x2
#define _CM2CON1_C2HYS_SIZE                                 0x1
#define _CM2CON1_C2HYS_LENGTH                               0x1
#define _CM2CON1_C2HYS_MASK                                 0x4
#define _CM2CON1_C1HYS_POSN                                 0x3
#define _CM2CON1_C1HYS_POSITION                             0x3
#define _CM2CON1_C1HYS_SIZE                                 0x1
#define _CM2CON1_C1HYS_LENGTH                               0x1
#define _CM2CON1_C1HYS_MASK                                 0x8
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0xF6D);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1CH                   :2;
        unsigned C1R                    :1;
        unsigned C1SP                   :1;
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
extern volatile CM1CON0bits_t CM1CON0bits __at(0xF6D);
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
#define _CM1CON0_C1SP_POSN                                  0x3
#define _CM1CON0_C1SP_POSITION                              0x3
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x8
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

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0xF6F);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0F6Fh");
#endif
// aliases
extern volatile unsigned char           SSPMASK             __at(0xF6F);
#ifndef _LIB_BUILD
asm("SSPMASK equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK                    :8;
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
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0xF6F);
// bitfield macros
#define _SSPMSK_MSK_POSN                                    0x0
#define _SSPMSK_MSK_POSITION                                0x0
#define _SSPMSK_MSK_SIZE                                    0x8
#define _SSPMSK_MSK_LENGTH                                  0x8
#define _SSPMSK_MSK_MASK                                    0xFF
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
        unsigned MSK                    :8;
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
} SSPMASKbits_t;
extern volatile SSPMASKbits_t SSPMASKbits __at(0xF6F);
// bitfield macros
#define _SSPMASK_MSK_POSN                                   0x0
#define _SSPMASK_MSK_POSITION                               0x0
#define _SSPMASK_MSK_SIZE                                   0x8
#define _SSPMASK_MSK_LENGTH                                 0x8
#define _SSPMASK_MSK_MASK                                   0xFF
#define _SSPMASK_MSK0_POSN                                  0x0
#define _SSPMASK_MSK0_POSITION                              0x0
#define _SSPMASK_MSK0_SIZE                                  0x1
#define _SSPMASK_MSK0_LENGTH                                0x1
#define _SSPMASK_MSK0_MASK                                  0x1
#define _SSPMASK_MSK1_POSN                                  0x1
#define _SSPMASK_MSK1_POSITION                              0x1
#define _SSPMASK_MSK1_SIZE                                  0x1
#define _SSPMASK_MSK1_LENGTH                                0x1
#define _SSPMASK_MSK1_MASK                                  0x2
#define _SSPMASK_MSK2_POSN                                  0x2
#define _SSPMASK_MSK2_POSITION                              0x2
#define _SSPMASK_MSK2_SIZE                                  0x1
#define _SSPMASK_MSK2_LENGTH                                0x1
#define _SSPMASK_MSK2_MASK                                  0x4
#define _SSPMASK_MSK3_POSN                                  0x3
#define _SSPMASK_MSK3_POSITION                              0x3
#define _SSPMASK_MSK3_SIZE                                  0x1
#define _SSPMASK_MSK3_LENGTH                                0x1
#define _SSPMASK_MSK3_MASK                                  0x8
#define _SSPMASK_MSK4_POSN                                  0x4
#define _SSPMASK_MSK4_POSITION                              0x4
#define _SSPMASK_MSK4_SIZE                                  0x1
#define _SSPMASK_MSK4_LENGTH                                0x1
#define _SSPMASK_MSK4_MASK                                  0x10
#define _SSPMASK_MSK5_POSN                                  0x5
#define _SSPMASK_MSK5_POSITION                              0x5
#define _SSPMASK_MSK5_SIZE                                  0x1
#define _SSPMASK_MSK5_LENGTH                                0x1
#define _SSPMASK_MSK5_MASK                                  0x20
#define _SSPMASK_MSK6_POSN                                  0x6
#define _SSPMASK_MSK6_POSITION                              0x6
#define _SSPMASK_MSK6_SIZE                                  0x1
#define _SSPMASK_MSK6_LENGTH                                0x1
#define _SSPMASK_MSK6_MASK                                  0x40
#define _SSPMASK_MSK7_POSN                                  0x7
#define _SSPMASK_MSK7_POSITION                              0x7
#define _SSPMASK_MSK7_SIZE                                  0x1
#define _SSPMASK_MSK7_LENGTH                                0x1
#define _SSPMASK_MSK7_MASK                                  0x80

// Register: SLRCON
#define SLRCON SLRCON
extern volatile unsigned char           SLRCON              __at(0xF76);
#ifndef _LIB_BUILD
asm("SLRCON equ 0F76h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA                   :1;
        unsigned SLRB                   :1;
        unsigned SLRC                   :1;
    };
} SLRCONbits_t;
extern volatile SLRCONbits_t SLRCONbits __at(0xF76);
// bitfield macros
#define _SLRCON_SLRA_POSN                                   0x0
#define _SLRCON_SLRA_POSITION                               0x0
#define _SLRCON_SLRA_SIZE                                   0x1
#define _SLRCON_SLRA_LENGTH                                 0x1
#define _SLRCON_SLRA_MASK                                   0x1
#define _SLRCON_SLRB_POSN                                   0x1
#define _SLRCON_SLRB_POSITION                               0x1
#define _SLRCON_SLRB_SIZE                                   0x1
#define _SLRCON_SLRB_LENGTH                                 0x1
#define _SLRCON_SLRB_MASK                                   0x2
#define _SLRCON_SLRC_POSN                                   0x2
#define _SLRCON_SLRC_POSITION                               0x2
#define _SLRCON_SLRC_SIZE                                   0x1
#define _SLRCON_SLRC_LENGTH                                 0x1
#define _SLRCON_SLRC_MASK                                   0x4

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0xF77);
#ifndef _LIB_BUILD
asm("WPUA equ 0F77h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0xF77);
// bitfield macros
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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0xF78);
#ifndef _LIB_BUILD
asm("WPUB equ 0F78h");
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
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0xF78);
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

// Register: IOCA
#define IOCA IOCA
extern volatile unsigned char           IOCA                __at(0xF79);
#ifndef _LIB_BUILD
asm("IOCA equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned                        :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
} IOCAbits_t;
extern volatile IOCAbits_t IOCAbits __at(0xF79);
// bitfield macros
#define _IOCA_IOCA0_POSN                                    0x0
#define _IOCA_IOCA0_POSITION                                0x0
#define _IOCA_IOCA0_SIZE                                    0x1
#define _IOCA_IOCA0_LENGTH                                  0x1
#define _IOCA_IOCA0_MASK                                    0x1
#define _IOCA_IOCA1_POSN                                    0x1
#define _IOCA_IOCA1_POSITION                                0x1
#define _IOCA_IOCA1_SIZE                                    0x1
#define _IOCA_IOCA1_LENGTH                                  0x1
#define _IOCA_IOCA1_MASK                                    0x2
#define _IOCA_IOCA3_POSN                                    0x3
#define _IOCA_IOCA3_POSITION                                0x3
#define _IOCA_IOCA3_SIZE                                    0x1
#define _IOCA_IOCA3_LENGTH                                  0x1
#define _IOCA_IOCA3_MASK                                    0x8
#define _IOCA_IOCA4_POSN                                    0x4
#define _IOCA_IOCA4_POSITION                                0x4
#define _IOCA_IOCA4_SIZE                                    0x1
#define _IOCA_IOCA4_LENGTH                                  0x1
#define _IOCA_IOCA4_MASK                                    0x10
#define _IOCA_IOCA5_POSN                                    0x5
#define _IOCA_IOCA5_POSITION                                0x5
#define _IOCA_IOCA5_SIZE                                    0x1
#define _IOCA_IOCA5_LENGTH                                  0x1
#define _IOCA_IOCA5_MASK                                    0x20

// Register: IOCB
#define IOCB IOCB
extern volatile unsigned char           IOCB                __at(0xF7A);
#ifndef _LIB_BUILD
asm("IOCB equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __at(0xF7A);
// bitfield macros
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

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0xF7E);
#ifndef _LIB_BUILD
asm("ANSEL equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0xF7E);
// bitfield macros
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
extern volatile unsigned char           ANSELH              __at(0xF7F);
#ifndef _LIB_BUILD
asm("ANSELH equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS8                   :1;
        unsigned ANS9                   :1;
        unsigned ANS10                  :1;
        unsigned ANS11                  :1;
    };
} ANSELHbits_t;
extern volatile ANSELHbits_t ANSELHbits __at(0xF7F);
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
        unsigned                        :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned AN3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CLKOUT                 :1;
        unsigned CLKIN                  :1;
    };
    struct {
        unsigned ULPWUIN                :1;
        unsigned                        :4;
        unsigned LVDIN                  :1;
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
#define _PORTA_AN3_POSN                                     0x4
#define _PORTA_AN3_POSITION                                 0x4
#define _PORTA_AN3_SIZE                                     0x1
#define _PORTA_AN3_LENGTH                                   0x1
#define _PORTA_AN3_MASK                                     0x10
#define _PORTA_OSC2_POSN                                    0x4
#define _PORTA_OSC2_POSITION                                0x4
#define _PORTA_OSC2_SIZE                                    0x1
#define _PORTA_OSC2_LENGTH                                  0x1
#define _PORTA_OSC2_MASK                                    0x10
#define _PORTA_OSC1_POSN                                    0x5
#define _PORTA_OSC1_POSITION                                0x5
#define _PORTA_OSC1_SIZE                                    0x1
#define _PORTA_OSC1_LENGTH                                  0x1
#define _PORTA_OSC1_MASK                                    0x20
#define _PORTA_CLKOUT_POSN                                  0x4
#define _PORTA_CLKOUT_POSITION                              0x4
#define _PORTA_CLKOUT_SIZE                                  0x1
#define _PORTA_CLKOUT_LENGTH                                0x1
#define _PORTA_CLKOUT_MASK                                  0x10
#define _PORTA_CLKIN_POSN                                   0x5
#define _PORTA_CLKIN_POSITION                               0x5
#define _PORTA_CLKIN_SIZE                                   0x1
#define _PORTA_CLKIN_LENGTH                                 0x1
#define _PORTA_CLKIN_MASK                                   0x20
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

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0xF81);
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
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
    struct {
        unsigned                        :4;
        unsigned SDI                    :1;
        unsigned RX                     :1;
        unsigned SCL                    :1;
        unsigned TX                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned SDA                    :1;
        unsigned DT                     :1;
        unsigned SCK                    :1;
        unsigned CK                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0xF81);
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
#define _PORTB_SDI_POSN                                     0x4
#define _PORTB_SDI_POSITION                                 0x4
#define _PORTB_SDI_SIZE                                     0x1
#define _PORTB_SDI_LENGTH                                   0x1
#define _PORTB_SDI_MASK                                     0x10
#define _PORTB_RX_POSN                                      0x5
#define _PORTB_RX_POSITION                                  0x5
#define _PORTB_RX_SIZE                                      0x1
#define _PORTB_RX_LENGTH                                    0x1
#define _PORTB_RX_MASK                                      0x20
#define _PORTB_SCL_POSN                                     0x6
#define _PORTB_SCL_POSITION                                 0x6
#define _PORTB_SCL_SIZE                                     0x1
#define _PORTB_SCL_LENGTH                                   0x1
#define _PORTB_SCL_MASK                                     0x40
#define _PORTB_TX_POSN                                      0x7
#define _PORTB_TX_POSITION                                  0x7
#define _PORTB_TX_SIZE                                      0x1
#define _PORTB_TX_LENGTH                                    0x1
#define _PORTB_TX_MASK                                      0x80
#define _PORTB_SDA_POSN                                     0x4
#define _PORTB_SDA_POSITION                                 0x4
#define _PORTB_SDA_SIZE                                     0x1
#define _PORTB_SDA_LENGTH                                   0x1
#define _PORTB_SDA_MASK                                     0x10
#define _PORTB_DT_POSN                                      0x5
#define _PORTB_DT_POSITION                                  0x5
#define _PORTB_DT_SIZE                                      0x1
#define _PORTB_DT_LENGTH                                    0x1
#define _PORTB_DT_MASK                                      0x20
#define _PORTB_SCK_POSN                                     0x6
#define _PORTB_SCK_POSITION                                 0x6
#define _PORTB_SCK_SIZE                                     0x1
#define _PORTB_SCK_LENGTH                                   0x1
#define _PORTB_SCK_MASK                                     0x40
#define _PORTB_CK_POSN                                      0x7
#define _PORTB_CK_POSITION                                  0x7
#define _PORTB_CK_SIZE                                      0x1
#define _PORTB_CK_LENGTH                                    0x1
#define _PORTB_CK_MASK                                      0x80
#define _PORTB_AN10_POSN                                    0x4
#define _PORTB_AN10_POSITION                                0x4
#define _PORTB_AN10_SIZE                                    0x1
#define _PORTB_AN10_LENGTH                                  0x1
#define _PORTB_AN10_MASK                                    0x10
#define _PORTB_AN11_POSN                                    0x5
#define _PORTB_AN11_POSITION                                0x5
#define _PORTB_AN11_SIZE                                    0x1
#define _PORTB_AN11_LENGTH                                  0x1
#define _PORTB_AN11_MASK                                    0x20

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
        unsigned AN4                    :1;
        unsigned AN5                    :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned                        :2;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_SS                 :1;
    };
    struct {
        unsigned C12INP                 :1;
        unsigned C12IN1M                :1;
        unsigned C12IN2M                :1;
        unsigned C12IN3M                :1;
        unsigned C12OUT                 :1;
        unsigned CCP1                   :1;
        unsigned nSS                    :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned PGM                    :1;
        unsigned SRQ                    :1;
        unsigned T0CKI                  :1;
        unsigned T13CKI                 :1;
        unsigned T1OSCO                 :1;
    };
    struct {
        unsigned VREFP                  :1;
        unsigned VREFM                  :1;
        unsigned CVREF                  :1;
        unsigned                        :3;
        unsigned T1OSCI                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned P1D                    :1;
        unsigned P1C                    :1;
        unsigned P1B                    :1;
        unsigned P1A                    :1;
        unsigned SS                     :1;
        unsigned SDO                    :1;
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
#define _PORTC_AN4_POSN                                     0x0
#define _PORTC_AN4_POSITION                                 0x0
#define _PORTC_AN4_SIZE                                     0x1
#define _PORTC_AN4_LENGTH                                   0x1
#define _PORTC_AN4_MASK                                     0x1
#define _PORTC_AN5_POSN                                     0x1
#define _PORTC_AN5_POSITION                                 0x1
#define _PORTC_AN5_SIZE                                     0x1
#define _PORTC_AN5_LENGTH                                   0x1
#define _PORTC_AN5_MASK                                     0x2
#define _PORTC_AN6_POSN                                     0x2
#define _PORTC_AN6_POSITION                                 0x2
#define _PORTC_AN6_SIZE                                     0x1
#define _PORTC_AN6_LENGTH                                   0x1
#define _PORTC_AN6_MASK                                     0x4
#define _PORTC_AN7_POSN                                     0x3
#define _PORTC_AN7_POSITION                                 0x3
#define _PORTC_AN7_SIZE                                     0x1
#define _PORTC_AN7_LENGTH                                   0x1
#define _PORTC_AN7_MASK                                     0x8
#define _PORTC_AN8_POSN                                     0x6
#define _PORTC_AN8_POSITION                                 0x6
#define _PORTC_AN8_SIZE                                     0x1
#define _PORTC_AN8_LENGTH                                   0x1
#define _PORTC_AN8_MASK                                     0x40
#define _PORTC_AN9_POSN                                     0x7
#define _PORTC_AN9_POSITION                                 0x7
#define _PORTC_AN9_SIZE                                     0x1
#define _PORTC_AN9_LENGTH                                   0x1
#define _PORTC_AN9_MASK                                     0x80
#define _PORTC_NOT_SS_POSN                                  0x6
#define _PORTC_NOT_SS_POSITION                              0x6
#define _PORTC_NOT_SS_SIZE                                  0x1
#define _PORTC_NOT_SS_LENGTH                                0x1
#define _PORTC_NOT_SS_MASK                                  0x40
#define _PORTC_C12INP_POSN                                  0x0
#define _PORTC_C12INP_POSITION                              0x0
#define _PORTC_C12INP_SIZE                                  0x1
#define _PORTC_C12INP_LENGTH                                0x1
#define _PORTC_C12INP_MASK                                  0x1
#define _PORTC_C12IN1M_POSN                                 0x1
#define _PORTC_C12IN1M_POSITION                             0x1
#define _PORTC_C12IN1M_SIZE                                 0x1
#define _PORTC_C12IN1M_LENGTH                               0x1
#define _PORTC_C12IN1M_MASK                                 0x2
#define _PORTC_C12IN2M_POSN                                 0x2
#define _PORTC_C12IN2M_POSITION                             0x2
#define _PORTC_C12IN2M_SIZE                                 0x1
#define _PORTC_C12IN2M_LENGTH                               0x1
#define _PORTC_C12IN2M_MASK                                 0x4
#define _PORTC_C12IN3M_POSN                                 0x3
#define _PORTC_C12IN3M_POSITION                             0x3
#define _PORTC_C12IN3M_SIZE                                 0x1
#define _PORTC_C12IN3M_LENGTH                               0x1
#define _PORTC_C12IN3M_MASK                                 0x8
#define _PORTC_C12OUT_POSN                                  0x4
#define _PORTC_C12OUT_POSITION                              0x4
#define _PORTC_C12OUT_SIZE                                  0x1
#define _PORTC_C12OUT_LENGTH                                0x1
#define _PORTC_C12OUT_MASK                                  0x10
#define _PORTC_CCP1_POSN                                    0x5
#define _PORTC_CCP1_POSITION                                0x5
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x20
#define _PORTC_nSS_POSN                                     0x6
#define _PORTC_nSS_POSITION                                 0x6
#define _PORTC_nSS_SIZE                                     0x1
#define _PORTC_nSS_LENGTH                                   0x1
#define _PORTC_nSS_MASK                                     0x40
#define _PORTC_INT0_POSN                                    0x0
#define _PORTC_INT0_POSITION                                0x0
#define _PORTC_INT0_SIZE                                    0x1
#define _PORTC_INT0_LENGTH                                  0x1
#define _PORTC_INT0_MASK                                    0x1
#define _PORTC_INT1_POSN                                    0x1
#define _PORTC_INT1_POSITION                                0x1
#define _PORTC_INT1_SIZE                                    0x1
#define _PORTC_INT1_LENGTH                                  0x1
#define _PORTC_INT1_MASK                                    0x2
#define _PORTC_INT2_POSN                                    0x2
#define _PORTC_INT2_POSITION                                0x2
#define _PORTC_INT2_SIZE                                    0x1
#define _PORTC_INT2_LENGTH                                  0x1
#define _PORTC_INT2_MASK                                    0x4
#define _PORTC_PGM_POSN                                     0x3
#define _PORTC_PGM_POSITION                                 0x3
#define _PORTC_PGM_SIZE                                     0x1
#define _PORTC_PGM_LENGTH                                   0x1
#define _PORTC_PGM_MASK                                     0x8
#define _PORTC_SRQ_POSN                                     0x4
#define _PORTC_SRQ_POSITION                                 0x4
#define _PORTC_SRQ_SIZE                                     0x1
#define _PORTC_SRQ_LENGTH                                   0x1
#define _PORTC_SRQ_MASK                                     0x10
#define _PORTC_T0CKI_POSN                                   0x5
#define _PORTC_T0CKI_POSITION                               0x5
#define _PORTC_T0CKI_SIZE                                   0x1
#define _PORTC_T0CKI_LENGTH                                 0x1
#define _PORTC_T0CKI_MASK                                   0x20
#define _PORTC_T13CKI_POSN                                  0x6
#define _PORTC_T13CKI_POSITION                              0x6
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x40
#define _PORTC_T1OSCO_POSN                                  0x7
#define _PORTC_T1OSCO_POSITION                              0x7
#define _PORTC_T1OSCO_SIZE                                  0x1
#define _PORTC_T1OSCO_LENGTH                                0x1
#define _PORTC_T1OSCO_MASK                                  0x80
#define _PORTC_VREFP_POSN                                   0x0
#define _PORTC_VREFP_POSITION                               0x0
#define _PORTC_VREFP_SIZE                                   0x1
#define _PORTC_VREFP_LENGTH                                 0x1
#define _PORTC_VREFP_MASK                                   0x1
#define _PORTC_VREFM_POSN                                   0x1
#define _PORTC_VREFM_POSITION                               0x1
#define _PORTC_VREFM_SIZE                                   0x1
#define _PORTC_VREFM_LENGTH                                 0x1
#define _PORTC_VREFM_MASK                                   0x2
#define _PORTC_CVREF_POSN                                   0x2
#define _PORTC_CVREF_POSITION                               0x2
#define _PORTC_CVREF_SIZE                                   0x1
#define _PORTC_CVREF_LENGTH                                 0x1
#define _PORTC_CVREF_MASK                                   0x4
#define _PORTC_T1OSCI_POSN                                  0x6
#define _PORTC_T1OSCI_POSITION                              0x6
#define _PORTC_T1OSCI_SIZE                                  0x1
#define _PORTC_T1OSCI_LENGTH                                0x1
#define _PORTC_T1OSCI_MASK                                  0x40
#define _PORTC_P1D_POSN                                     0x2
#define _PORTC_P1D_POSITION                                 0x2
#define _PORTC_P1D_SIZE                                     0x1
#define _PORTC_P1D_LENGTH                                   0x1
#define _PORTC_P1D_MASK                                     0x4
#define _PORTC_P1C_POSN                                     0x3
#define _PORTC_P1C_POSITION                                 0x3
#define _PORTC_P1C_SIZE                                     0x1
#define _PORTC_P1C_LENGTH                                   0x1
#define _PORTC_P1C_MASK                                     0x8
#define _PORTC_P1B_POSN                                     0x4
#define _PORTC_P1B_POSITION                                 0x4
#define _PORTC_P1B_SIZE                                     0x1
#define _PORTC_P1B_LENGTH                                   0x1
#define _PORTC_P1B_MASK                                     0x10
#define _PORTC_P1A_POSN                                     0x5
#define _PORTC_P1A_POSITION                                 0x5
#define _PORTC_P1A_SIZE                                     0x1
#define _PORTC_P1A_LENGTH                                   0x1
#define _PORTC_P1A_MASK                                     0x20
#define _PORTC_SS_POSN                                      0x6
#define _PORTC_SS_POSITION                                  0x6
#define _PORTC_SS_SIZE                                      0x1
#define _PORTC_SS_LENGTH                                    0x1
#define _PORTC_SS_MASK                                      0x40
#define _PORTC_SDO_POSN                                     0x7
#define _PORTC_SDO_POSITION                                 0x7
#define _PORTC_SDO_SIZE                                     0x1
#define _PORTC_SDO_LENGTH                                   0x1
#define _PORTC_SDO_MASK                                     0x80
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

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0xF89);
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned LA4                    :1;
        unsigned LA5                    :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0xF89);
// bitfield macros
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

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0xF8A);
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
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
    struct {
        unsigned                        :4;
        unsigned LB4                    :1;
        unsigned LB5                    :1;
        unsigned LB6                    :1;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0xF8A);
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
        unsigned                        :4;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0xF92);
// bitfield macros
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
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits __at(0xF92);
// bitfield macros
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20

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
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0xF93);
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
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits __at(0xF93);
// bitfield macros
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
        unsigned SPLLEN                 :1;
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
#define _OSCTUNE_SPLLEN_POSN                                0x6
#define _OSCTUNE_SPLLEN_POSITION                            0x6
#define _OSCTUNE_SPLLEN_SIZE                                0x1
#define _OSCTUNE_SPLLEN_LENGTH                              0x1
#define _OSCTUNE_SPLLEN_MASK                                0x40
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
        unsigned CCP1IE                 :1;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
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
        unsigned                        :1;
        unsigned TMR3IE                 :1;
        unsigned USBIE                  :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned C2IE                   :1;
        unsigned C1IE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_USBIE_POSN                                    0x2
#define _PIE2_USBIE_POSITION                                0x2
#define _PIE2_USBIE_SIZE                                    0x1
#define _PIE2_USBIE_LENGTH                                  0x1
#define _PIE2_USBIE_MASK                                    0x4
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
#define _PIE2_C2IE_POSN                                     0x5
#define _PIE2_C2IE_POSITION                                 0x5
#define _PIE2_C2IE_SIZE                                     0x1
#define _PIE2_C2IE_LENGTH                                   0x1
#define _PIE2_C2IE_MASK                                     0x20
#define _PIE2_C1IE_POSN                                     0x6
#define _PIE2_C1IE_POSITION                                 0x6
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
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
        unsigned                        :1;
        unsigned TMR3IF                 :1;
        unsigned USBIF                  :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned C2IF                   :1;
        unsigned C1IF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_USBIF_POSN                                    0x2
#define _PIR2_USBIF_POSITION                                0x2
#define _PIR2_USBIF_SIZE                                    0x1
#define _PIR2_USBIF_LENGTH                                  0x1
#define _PIR2_USBIF_MASK                                    0x4
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
#define _PIR2_C2IF_POSN                                     0x5
#define _PIR2_C2IF_POSITION                                 0x5
#define _PIR2_C2IF_SIZE                                     0x1
#define _PIR2_C2IF_LENGTH                                   0x1
#define _PIR2_C2IF_MASK                                     0x20
#define _PIR2_C1IF_POSN                                     0x6
#define _PIR2_C1IF_POSITION                                 0x6
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
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
        unsigned                        :1;
        unsigned TMR3IP                 :1;
        unsigned USBIP                  :1;
        unsigned BCLIP                  :1;
        unsigned EEIP                   :1;
        unsigned C2IP                   :1;
        unsigned C1IP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIP                   :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_USBIP_POSN                                    0x2
#define _IPR2_USBIP_POSITION                                0x2
#define _IPR2_USBIP_SIZE                                    0x1
#define _IPR2_USBIP_LENGTH                                  0x1
#define _IPR2_USBIP_MASK                                    0x4
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8
#define _IPR2_EEIP_POSN                                     0x4
#define _IPR2_EEIP_POSITION                                 0x4
#define _IPR2_EEIP_SIZE                                     0x1
#define _IPR2_EEIP_LENGTH                                   0x1
#define _IPR2_EEIP_MASK                                     0x10
#define _IPR2_C2IP_POSN                                     0x5
#define _IPR2_C2IP_POSITION                                 0x5
#define _IPR2_C2IP_SIZE                                     0x1
#define _IPR2_C2IP_LENGTH                                   0x1
#define _IPR2_C2IP_MASK                                     0x20
#define _IPR2_C1IP_POSN                                     0x6
#define _IPR2_C1IP_POSITION                                 0x6
#define _IPR2_C1IP_SIZE                                     0x1
#define _IPR2_C1IP_LENGTH                                   0x1
#define _IPR2_C1IP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40

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
// bitfield definitions
typedef union {
    struct {
        unsigned EEADR0                 :1;
        unsigned EEADR1                 :1;
        unsigned EEADR2                 :1;
        unsigned EEADR3                 :1;
        unsigned EEADR4                 :1;
        unsigned EEADR5                 :1;
        unsigned EEADR6                 :1;
        unsigned EEADR7                 :1;
    };
} EEADRbits_t;
extern volatile EEADRbits_t EEADRbits __at(0xFA9);
// bitfield macros
#define _EEADR_EEADR0_POSN                                  0x0
#define _EEADR_EEADR0_POSITION                              0x0
#define _EEADR_EEADR0_SIZE                                  0x1
#define _EEADR_EEADR0_LENGTH                                0x1
#define _EEADR_EEADR0_MASK                                  0x1
#define _EEADR_EEADR1_POSN                                  0x1
#define _EEADR_EEADR1_POSITION                              0x1
#define _EEADR_EEADR1_SIZE                                  0x1
#define _EEADR_EEADR1_LENGTH                                0x1
#define _EEADR_EEADR1_MASK                                  0x2
#define _EEADR_EEADR2_POSN                                  0x2
#define _EEADR_EEADR2_POSITION                              0x2
#define _EEADR_EEADR2_SIZE                                  0x1
#define _EEADR_EEADR2_LENGTH                                0x1
#define _EEADR_EEADR2_MASK                                  0x4
#define _EEADR_EEADR3_POSN                                  0x3
#define _EEADR_EEADR3_POSITION                              0x3
#define _EEADR_EEADR3_SIZE                                  0x1
#define _EEADR_EEADR3_LENGTH                                0x1
#define _EEADR_EEADR3_MASK                                  0x8
#define _EEADR_EEADR4_POSN                                  0x4
#define _EEADR_EEADR4_POSITION                              0x4
#define _EEADR_EEADR4_SIZE                                  0x1
#define _EEADR_EEADR4_LENGTH                                0x1
#define _EEADR_EEADR4_MASK                                  0x10
#define _EEADR_EEADR5_POSN                                  0x5
#define _EEADR_EEADR5_POSITION                              0x5
#define _EEADR_EEADR5_SIZE                                  0x1
#define _EEADR_EEADR5_LENGTH                                0x1
#define _EEADR_EEADR5_MASK                                  0x20
#define _EEADR_EEADR6_POSN                                  0x6
#define _EEADR_EEADR6_POSITION                              0x6
#define _EEADR_EEADR6_SIZE                                  0x1
#define _EEADR_EEADR6_LENGTH                                0x1
#define _EEADR_EEADR6_MASK                                  0x40
#define _EEADR_EEADR7_POSN                                  0x7
#define _EEADR_EEADR7_POSITION                              0x7
#define _EEADR_EEADR7_SIZE                                  0x1
#define _EEADR_EEADR7_LENGTH                                0x1
#define _EEADR_EEADR7_MASK                                  0x80

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
        unsigned                        :1;
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

// Register: TMR3H
#define TMR3H TMR3H
extern volatile unsigned char           TMR3H               __at(0xFB3);
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
extern volatile unsigned char           ECCP1AS             __at(0xFB6);
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
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
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits __at(0xFB6);
// bitfield macros
#define _ECCP1AS_PSSBD_POSN                                 0x0
#define _ECCP1AS_PSSBD_POSITION                             0x0
#define _ECCP1AS_PSSBD_SIZE                                 0x2
#define _ECCP1AS_PSSBD_LENGTH                               0x2
#define _ECCP1AS_PSSBD_MASK                                 0x3
#define _ECCP1AS_PSSAC_POSN                                 0x2
#define _ECCP1AS_PSSAC_POSITION                             0x2
#define _ECCP1AS_PSSAC_SIZE                                 0x2
#define _ECCP1AS_PSSAC_LENGTH                               0x2
#define _ECCP1AS_PSSAC_MASK                                 0xC
#define _ECCP1AS_ECCPAS_POSN                                0x4
#define _ECCP1AS_ECCPAS_POSITION                            0x4
#define _ECCP1AS_ECCPAS_SIZE                                0x3
#define _ECCP1AS_ECCPAS_LENGTH                              0x3
#define _ECCP1AS_ECCPAS_MASK                                0x70
#define _ECCP1AS_ECCPASE_POSN                               0x7
#define _ECCP1AS_ECCPASE_POSITION                           0x7
#define _ECCP1AS_ECCPASE_SIZE                               0x1
#define _ECCP1AS_ECCPASE_LENGTH                             0x1
#define _ECCP1AS_ECCPASE_MASK                               0x80
#define _ECCP1AS_PSSBD0_POSN                                0x0
#define _ECCP1AS_PSSBD0_POSITION                            0x0
#define _ECCP1AS_PSSBD0_SIZE                                0x1
#define _ECCP1AS_PSSBD0_LENGTH                              0x1
#define _ECCP1AS_PSSBD0_MASK                                0x1
#define _ECCP1AS_PSSBD1_POSN                                0x1
#define _ECCP1AS_PSSBD1_POSITION                            0x1
#define _ECCP1AS_PSSBD1_SIZE                                0x1
#define _ECCP1AS_PSSBD1_LENGTH                              0x1
#define _ECCP1AS_PSSBD1_MASK                                0x2
#define _ECCP1AS_PSSAC0_POSN                                0x2
#define _ECCP1AS_PSSAC0_POSITION                            0x2
#define _ECCP1AS_PSSAC0_SIZE                                0x1
#define _ECCP1AS_PSSAC0_LENGTH                              0x1
#define _ECCP1AS_PSSAC0_MASK                                0x4
#define _ECCP1AS_PSSAC1_POSN                                0x3
#define _ECCP1AS_PSSAC1_POSITION                            0x3
#define _ECCP1AS_PSSAC1_SIZE                                0x1
#define _ECCP1AS_PSSAC1_LENGTH                              0x1
#define _ECCP1AS_PSSAC1_MASK                                0x8
#define _ECCP1AS_ECCPAS0_POSN                               0x4
#define _ECCP1AS_ECCPAS0_POSITION                           0x4
#define _ECCP1AS_ECCPAS0_SIZE                               0x1
#define _ECCP1AS_ECCPAS0_LENGTH                             0x1
#define _ECCP1AS_ECCPAS0_MASK                               0x10
#define _ECCP1AS_ECCPAS1_POSN                               0x5
#define _ECCP1AS_ECCPAS1_POSITION                           0x5
#define _ECCP1AS_ECCPAS1_SIZE                               0x1
#define _ECCP1AS_ECCPAS1_LENGTH                             0x1
#define _ECCP1AS_ECCPAS1_MASK                               0x20
#define _ECCP1AS_ECCPAS2_POSN                               0x6
#define _ECCP1AS_ECCPAS2_POSITION                           0x6
#define _ECCP1AS_ECCPAS2_SIZE                               0x1
#define _ECCP1AS_ECCPAS2_LENGTH                             0x1
#define _ECCP1AS_ECCPAS2_MASK                               0x40

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0xFB7);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0FB7h");
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
extern volatile PWM1CONbits_t PWM1CONbits __at(0xFB7);
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

// Register: BAUDCON
#define BAUDCON BAUDCON
extern volatile unsigned char           BAUDCON             __at(0xFB8);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FB8h");
#endif
// aliases
extern volatile unsigned char           BAUDCTL             __at(0xFB8);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
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
extern volatile BAUDCONbits_t BAUDCONbits __at(0xFB8);
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
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
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
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0xFB8);
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

// Register: PSTRCON
#define PSTRCON PSTRCON
extern volatile unsigned char           PSTRCON             __at(0xFB9);
#ifndef _LIB_BUILD
asm("PSTRCON equ 0FB9h");
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
extern volatile PSTRCONbits_t PSTRCONbits __at(0xFB9);
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

// Register: REFCON0
#define REFCON0 REFCON0
extern volatile unsigned char           REFCON0             __at(0xFBA);
#ifndef _LIB_BUILD
asm("REFCON0 equ 0FBAh");
#endif
// aliases
extern volatile unsigned char           VREFCON0            __at(0xFBA);
#ifndef _LIB_BUILD
asm("VREFCON0 equ 0FBAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned                        :1;
        unsigned FVR1S0                 :1;
        unsigned FVR1S1                 :1;
        unsigned FVR1ST                 :1;
        unsigned FVR1EN                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned FVR1S                  :2;
    };
} REFCON0bits_t;
extern volatile REFCON0bits_t REFCON0bits __at(0xFBA);
// bitfield macros
#define _REFCON0_FVR1S0_POSN                                0x4
#define _REFCON0_FVR1S0_POSITION                            0x4
#define _REFCON0_FVR1S0_SIZE                                0x1
#define _REFCON0_FVR1S0_LENGTH                              0x1
#define _REFCON0_FVR1S0_MASK                                0x10
#define _REFCON0_FVR1S1_POSN                                0x5
#define _REFCON0_FVR1S1_POSITION                            0x5
#define _REFCON0_FVR1S1_SIZE                                0x1
#define _REFCON0_FVR1S1_LENGTH                              0x1
#define _REFCON0_FVR1S1_MASK                                0x20
#define _REFCON0_FVR1ST_POSN                                0x6
#define _REFCON0_FVR1ST_POSITION                            0x6
#define _REFCON0_FVR1ST_SIZE                                0x1
#define _REFCON0_FVR1ST_LENGTH                              0x1
#define _REFCON0_FVR1ST_MASK                                0x40
#define _REFCON0_FVR1EN_POSN                                0x7
#define _REFCON0_FVR1EN_POSITION                            0x7
#define _REFCON0_FVR1EN_SIZE                                0x1
#define _REFCON0_FVR1EN_LENGTH                              0x1
#define _REFCON0_FVR1EN_MASK                                0x80
#define _REFCON0_FVR1S_POSN                                 0x4
#define _REFCON0_FVR1S_POSITION                             0x4
#define _REFCON0_FVR1S_SIZE                                 0x2
#define _REFCON0_FVR1S_LENGTH                               0x2
#define _REFCON0_FVR1S_MASK                                 0x30
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned                        :1;
        unsigned FVR1S0                 :1;
        unsigned FVR1S1                 :1;
        unsigned FVR1ST                 :1;
        unsigned FVR1EN                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned FVR1S                  :2;
    };
} VREFCON0bits_t;
extern volatile VREFCON0bits_t VREFCON0bits __at(0xFBA);
// bitfield macros
#define _VREFCON0_FVR1S0_POSN                               0x4
#define _VREFCON0_FVR1S0_POSITION                           0x4
#define _VREFCON0_FVR1S0_SIZE                               0x1
#define _VREFCON0_FVR1S0_LENGTH                             0x1
#define _VREFCON0_FVR1S0_MASK                               0x10
#define _VREFCON0_FVR1S1_POSN                               0x5
#define _VREFCON0_FVR1S1_POSITION                           0x5
#define _VREFCON0_FVR1S1_SIZE                               0x1
#define _VREFCON0_FVR1S1_LENGTH                             0x1
#define _VREFCON0_FVR1S1_MASK                               0x20
#define _VREFCON0_FVR1ST_POSN                               0x6
#define _VREFCON0_FVR1ST_POSITION                           0x6
#define _VREFCON0_FVR1ST_SIZE                               0x1
#define _VREFCON0_FVR1ST_LENGTH                             0x1
#define _VREFCON0_FVR1ST_MASK                               0x40
#define _VREFCON0_FVR1EN_POSN                               0x7
#define _VREFCON0_FVR1EN_POSITION                           0x7
#define _VREFCON0_FVR1EN_SIZE                               0x1
#define _VREFCON0_FVR1EN_LENGTH                             0x1
#define _VREFCON0_FVR1EN_MASK                               0x80
#define _VREFCON0_FVR1S_POSN                                0x4
#define _VREFCON0_FVR1S_POSITION                            0x4
#define _VREFCON0_FVR1S_SIZE                                0x2
#define _VREFCON0_FVR1S_LENGTH                              0x2
#define _VREFCON0_FVR1S_MASK                                0x30

// Register: REFCON1
#define REFCON1 REFCON1
extern volatile unsigned char           REFCON1             __at(0xFBB);
#ifndef _LIB_BUILD
asm("REFCON1 equ 0FBBh");
#endif
// aliases
extern volatile unsigned char           VREFCON1            __at(0xFBB);
#ifndef _LIB_BUILD
asm("VREFCON1 equ 0FBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned D1NSS                  :1;
        unsigned                        :1;
        unsigned D1PSS                  :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned D1LPS                  :1;
        unsigned D1EN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
    struct {
        unsigned D1NSS0                 :1;
    };
} REFCON1bits_t;
extern volatile REFCON1bits_t REFCON1bits __at(0xFBB);
// bitfield macros
#define _REFCON1_D1NSS_POSN                                 0x0
#define _REFCON1_D1NSS_POSITION                             0x0
#define _REFCON1_D1NSS_SIZE                                 0x1
#define _REFCON1_D1NSS_LENGTH                               0x1
#define _REFCON1_D1NSS_MASK                                 0x1
#define _REFCON1_D1PSS_POSN                                 0x2
#define _REFCON1_D1PSS_POSITION                             0x2
#define _REFCON1_D1PSS_SIZE                                 0x2
#define _REFCON1_D1PSS_LENGTH                               0x2
#define _REFCON1_D1PSS_MASK                                 0xC
#define _REFCON1_DAC1OE_POSN                                0x5
#define _REFCON1_DAC1OE_POSITION                            0x5
#define _REFCON1_DAC1OE_SIZE                                0x1
#define _REFCON1_DAC1OE_LENGTH                              0x1
#define _REFCON1_DAC1OE_MASK                                0x20
#define _REFCON1_D1LPS_POSN                                 0x6
#define _REFCON1_D1LPS_POSITION                             0x6
#define _REFCON1_D1LPS_SIZE                                 0x1
#define _REFCON1_D1LPS_LENGTH                               0x1
#define _REFCON1_D1LPS_MASK                                 0x40
#define _REFCON1_D1EN_POSN                                  0x7
#define _REFCON1_D1EN_POSITION                              0x7
#define _REFCON1_D1EN_SIZE                                  0x1
#define _REFCON1_D1EN_LENGTH                                0x1
#define _REFCON1_D1EN_MASK                                  0x80
#define _REFCON1_D1PSS0_POSN                                0x2
#define _REFCON1_D1PSS0_POSITION                            0x2
#define _REFCON1_D1PSS0_SIZE                                0x1
#define _REFCON1_D1PSS0_LENGTH                              0x1
#define _REFCON1_D1PSS0_MASK                                0x4
#define _REFCON1_D1PSS1_POSN                                0x3
#define _REFCON1_D1PSS1_POSITION                            0x3
#define _REFCON1_D1PSS1_SIZE                                0x1
#define _REFCON1_D1PSS1_LENGTH                              0x1
#define _REFCON1_D1PSS1_MASK                                0x8
#define _REFCON1_D1NSS0_POSN                                0x0
#define _REFCON1_D1NSS0_POSITION                            0x0
#define _REFCON1_D1NSS0_SIZE                                0x1
#define _REFCON1_D1NSS0_LENGTH                              0x1
#define _REFCON1_D1NSS0_MASK                                0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned D1NSS                  :1;
        unsigned                        :1;
        unsigned D1PSS                  :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned D1LPS                  :1;
        unsigned D1EN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
    struct {
        unsigned D1NSS0                 :1;
    };
} VREFCON1bits_t;
extern volatile VREFCON1bits_t VREFCON1bits __at(0xFBB);
// bitfield macros
#define _VREFCON1_D1NSS_POSN                                0x0
#define _VREFCON1_D1NSS_POSITION                            0x0
#define _VREFCON1_D1NSS_SIZE                                0x1
#define _VREFCON1_D1NSS_LENGTH                              0x1
#define _VREFCON1_D1NSS_MASK                                0x1
#define _VREFCON1_D1PSS_POSN                                0x2
#define _VREFCON1_D1PSS_POSITION                            0x2
#define _VREFCON1_D1PSS_SIZE                                0x2
#define _VREFCON1_D1PSS_LENGTH                              0x2
#define _VREFCON1_D1PSS_MASK                                0xC
#define _VREFCON1_DAC1OE_POSN                               0x5
#define _VREFCON1_DAC1OE_POSITION                           0x5
#define _VREFCON1_DAC1OE_SIZE                               0x1
#define _VREFCON1_DAC1OE_LENGTH                             0x1
#define _VREFCON1_DAC1OE_MASK                               0x20
#define _VREFCON1_D1LPS_POSN                                0x6
#define _VREFCON1_D1LPS_POSITION                            0x6
#define _VREFCON1_D1LPS_SIZE                                0x1
#define _VREFCON1_D1LPS_LENGTH                              0x1
#define _VREFCON1_D1LPS_MASK                                0x40
#define _VREFCON1_D1EN_POSN                                 0x7
#define _VREFCON1_D1EN_POSITION                             0x7
#define _VREFCON1_D1EN_SIZE                                 0x1
#define _VREFCON1_D1EN_LENGTH                               0x1
#define _VREFCON1_D1EN_MASK                                 0x80
#define _VREFCON1_D1PSS0_POSN                               0x2
#define _VREFCON1_D1PSS0_POSITION                           0x2
#define _VREFCON1_D1PSS0_SIZE                               0x1
#define _VREFCON1_D1PSS0_LENGTH                             0x1
#define _VREFCON1_D1PSS0_MASK                               0x4
#define _VREFCON1_D1PSS1_POSN                               0x3
#define _VREFCON1_D1PSS1_POSITION                           0x3
#define _VREFCON1_D1PSS1_SIZE                               0x1
#define _VREFCON1_D1PSS1_LENGTH                             0x1
#define _VREFCON1_D1PSS1_MASK                               0x8
#define _VREFCON1_D1NSS0_POSN                               0x0
#define _VREFCON1_D1NSS0_POSITION                           0x0
#define _VREFCON1_D1NSS0_SIZE                               0x1
#define _VREFCON1_D1NSS0_LENGTH                             0x1
#define _VREFCON1_D1NSS0_MASK                               0x1

// Register: REFCON2
#define REFCON2 REFCON2
extern volatile unsigned char           REFCON2             __at(0xFBC);
#ifndef _LIB_BUILD
asm("REFCON2 equ 0FBCh");
#endif
// aliases
extern volatile unsigned char           VREFCON2            __at(0xFBC);
#ifndef _LIB_BUILD
asm("VREFCON2 equ 0FBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAC1R                  :5;
    };
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
    };
} REFCON2bits_t;
extern volatile REFCON2bits_t REFCON2bits __at(0xFBC);
// bitfield macros
#define _REFCON2_DAC1R_POSN                                 0x0
#define _REFCON2_DAC1R_POSITION                             0x0
#define _REFCON2_DAC1R_SIZE                                 0x5
#define _REFCON2_DAC1R_LENGTH                               0x5
#define _REFCON2_DAC1R_MASK                                 0x1F
#define _REFCON2_DAC1R0_POSN                                0x0
#define _REFCON2_DAC1R0_POSITION                            0x0
#define _REFCON2_DAC1R0_SIZE                                0x1
#define _REFCON2_DAC1R0_LENGTH                              0x1
#define _REFCON2_DAC1R0_MASK                                0x1
#define _REFCON2_DAC1R1_POSN                                0x1
#define _REFCON2_DAC1R1_POSITION                            0x1
#define _REFCON2_DAC1R1_SIZE                                0x1
#define _REFCON2_DAC1R1_LENGTH                              0x1
#define _REFCON2_DAC1R1_MASK                                0x2
#define _REFCON2_DAC1R2_POSN                                0x2
#define _REFCON2_DAC1R2_POSITION                            0x2
#define _REFCON2_DAC1R2_SIZE                                0x1
#define _REFCON2_DAC1R2_LENGTH                              0x1
#define _REFCON2_DAC1R2_MASK                                0x4
#define _REFCON2_DAC1R3_POSN                                0x3
#define _REFCON2_DAC1R3_POSITION                            0x3
#define _REFCON2_DAC1R3_SIZE                                0x1
#define _REFCON2_DAC1R3_LENGTH                              0x1
#define _REFCON2_DAC1R3_MASK                                0x8
#define _REFCON2_DAC1R4_POSN                                0x4
#define _REFCON2_DAC1R4_POSITION                            0x4
#define _REFCON2_DAC1R4_SIZE                                0x1
#define _REFCON2_DAC1R4_LENGTH                              0x1
#define _REFCON2_DAC1R4_MASK                                0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned DAC1R                  :5;
    };
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
    };
} VREFCON2bits_t;
extern volatile VREFCON2bits_t VREFCON2bits __at(0xFBC);
// bitfield macros
#define _VREFCON2_DAC1R_POSN                                0x0
#define _VREFCON2_DAC1R_POSITION                            0x0
#define _VREFCON2_DAC1R_SIZE                                0x5
#define _VREFCON2_DAC1R_LENGTH                              0x5
#define _VREFCON2_DAC1R_MASK                                0x1F
#define _VREFCON2_DAC1R0_POSN                               0x0
#define _VREFCON2_DAC1R0_POSITION                           0x0
#define _VREFCON2_DAC1R0_SIZE                               0x1
#define _VREFCON2_DAC1R0_LENGTH                             0x1
#define _VREFCON2_DAC1R0_MASK                               0x1
#define _VREFCON2_DAC1R1_POSN                               0x1
#define _VREFCON2_DAC1R1_POSITION                           0x1
#define _VREFCON2_DAC1R1_SIZE                               0x1
#define _VREFCON2_DAC1R1_LENGTH                             0x1
#define _VREFCON2_DAC1R1_MASK                               0x2
#define _VREFCON2_DAC1R2_POSN                               0x2
#define _VREFCON2_DAC1R2_POSITION                           0x2
#define _VREFCON2_DAC1R2_SIZE                               0x1
#define _VREFCON2_DAC1R2_LENGTH                             0x1
#define _VREFCON2_DAC1R2_MASK                               0x4
#define _VREFCON2_DAC1R3_POSN                               0x3
#define _VREFCON2_DAC1R3_POSITION                           0x3
#define _VREFCON2_DAC1R3_SIZE                               0x1
#define _VREFCON2_DAC1R3_LENGTH                             0x1
#define _VREFCON2_DAC1R3_MASK                               0x8
#define _VREFCON2_DAC1R4_POSN                               0x4
#define _VREFCON2_DAC1R4_POSITION                           0x4
#define _VREFCON2_DAC1R4_SIZE                               0x1
#define _VREFCON2_DAC1R4_LENGTH                             0x1
#define _VREFCON2_DAC1R4_MASK                               0x10

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
        unsigned NVCFG0                 :1;
        unsigned NVCFG1                 :1;
        unsigned PVCFG0                 :1;
        unsigned PVCFG1                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0xFC1);
// bitfield macros
#define _ADCON1_NVCFG0_POSN                                 0x0
#define _ADCON1_NVCFG0_POSITION                             0x0
#define _ADCON1_NVCFG0_SIZE                                 0x1
#define _ADCON1_NVCFG0_LENGTH                               0x1
#define _ADCON1_NVCFG0_MASK                                 0x1
#define _ADCON1_NVCFG1_POSN                                 0x1
#define _ADCON1_NVCFG1_POSITION                             0x1
#define _ADCON1_NVCFG1_SIZE                                 0x1
#define _ADCON1_NVCFG1_LENGTH                               0x1
#define _ADCON1_NVCFG1_MASK                                 0x2
#define _ADCON1_PVCFG0_POSN                                 0x2
#define _ADCON1_PVCFG0_POSITION                             0x2
#define _ADCON1_PVCFG0_SIZE                                 0x1
#define _ADCON1_PVCFG0_LENGTH                               0x1
#define _ADCON1_PVCFG0_MASK                                 0x4
#define _ADCON1_PVCFG1_POSN                                 0x3
#define _ADCON1_PVCFG1_POSITION                             0x3
#define _ADCON1_PVCFG1_SIZE                                 0x1
#define _ADCON1_PVCFG1_LENGTH                               0x1
#define _ADCON1_PVCFG1_MASK                                 0x8
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8

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
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
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
        unsigned GO_DONE                :1;
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
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
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
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
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

// Register: SSPCON1
#define SSPCON1 SSPCON1
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
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned W                      :1;
        unsigned                        :2;
        unsigned A                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
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
#define _SSPSTAT_W_POSN                                     0x2
#define _SSPSTAT_W_POSITION                                 0x2
#define _SSPSTAT_W_SIZE                                     0x1
#define _SSPSTAT_W_LENGTH                                   0x1
#define _SSPSTAT_W_MASK                                     0x4
#define _SSPSTAT_A_POSN                                     0x5
#define _SSPSTAT_A_POSITION                                 0x5
#define _SSPSTAT_A_SIZE                                     0x1
#define _SSPSTAT_A_LENGTH                                   0x1
#define _SSPSTAT_A_MASK                                     0x20
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
        unsigned                        :1;
        unsigned SBOREN                 :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
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
#define _RCON_SBOREN_POSN                                   0x6
#define _RCON_SBOREN_POSITION                               0x6
#define _RCON_SBOREN_SIZE                                   0x1
#define _RCON_SBOREN_LENGTH                                 0x1
#define _RCON_SBOREN_MASK                                   0x40
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
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: OSCCON2
#define OSCCON2 OSCCON2
extern volatile unsigned char           OSCCON2             __at(0xFD2);
#ifndef _LIB_BUILD
asm("OSCCON2 equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LFIOFS                 :1;
        unsigned HFIOFL                 :1;
        unsigned PRI_SD                 :1;
    };
} OSCCON2bits_t;
extern volatile OSCCON2bits_t OSCCON2bits __at(0xFD2);
// bitfield macros
#define _OSCCON2_LFIOFS_POSN                                0x0
#define _OSCCON2_LFIOFS_POSITION                            0x0
#define _OSCCON2_LFIOFS_SIZE                                0x1
#define _OSCCON2_LFIOFS_LENGTH                              0x1
#define _OSCCON2_LFIOFS_MASK                                0x1
#define _OSCCON2_HFIOFL_POSN                                0x1
#define _OSCCON2_HFIOFL_POSITION                            0x1
#define _OSCCON2_HFIOFL_SIZE                                0x1
#define _OSCCON2_HFIOFL_LENGTH                              0x1
#define _OSCCON2_HFIOFL_MASK                                0x2
#define _OSCCON2_PRI_SD_POSN                                0x2
#define _OSCCON2_PRI_SD_POSITION                            0x2
#define _OSCCON2_PRI_SD_SIZE                                0x1
#define _OSCCON2_PRI_SD_LENGTH                              0x1
#define _OSCCON2_PRI_SD_MASK                                0x4

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0xFD3);
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
    struct {
        unsigned SCS                    :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0xFD3);
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
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x1
#define _OSCCON_SCS_LENGTH                                  0x1
#define _OSCCON_SCS_MASK                                    0x1

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
// aliases
// extern volatile unsigned char           W                   __at(0xFE8);
#ifndef _LIB_BUILD
// asm("W equ 0FE8h");
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
        unsigned NOT_RABPU              :1;
    };
    struct {
        unsigned RABIP                  :1;
        unsigned                        :1;
        unsigned TMR0IP                 :1;
        unsigned                        :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRABPU                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned RABPU                  :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits __at(0xFF1);
// bitfield macros
#define _INTCON2_NOT_RABPU_POSN                             0x7
#define _INTCON2_NOT_RABPU_POSITION                         0x7
#define _INTCON2_NOT_RABPU_SIZE                             0x1
#define _INTCON2_NOT_RABPU_LENGTH                           0x1
#define _INTCON2_NOT_RABPU_MASK                             0x80
#define _INTCON2_RABIP_POSN                                 0x0
#define _INTCON2_RABIP_POSITION                             0x0
#define _INTCON2_RABIP_SIZE                                 0x1
#define _INTCON2_RABIP_LENGTH                               0x1
#define _INTCON2_RABIP_MASK                                 0x1
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
#define _INTCON2_nRABPU_POSN                                0x7
#define _INTCON2_nRABPU_POSITION                            0x7
#define _INTCON2_nRABPU_SIZE                                0x1
#define _INTCON2_nRABPU_LENGTH                              0x1
#define _INTCON2_nRABPU_MASK                                0x80
#define _INTCON2_RABPU_POSN                                 0x7
#define _INTCON2_RABPU_POSITION                             0x7
#define _INTCON2_RABPU_SIZE                                 0x1
#define _INTCON2_RABPU_LENGTH                               0x1
#define _INTCON2_RABPU_MASK                                 0x80

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0xFF2);
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RABIF                  :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RABIE                  :1;
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
#define _INTCON_RABIF_POSN                                  0x0
#define _INTCON_RABIF_POSITION                              0x0
#define _INTCON_RABIF_SIZE                                  0x1
#define _INTCON_RABIF_LENGTH                                0x1
#define _INTCON_RABIF_MASK                                  0x1
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
#define _INTCON_RABIE_POSN                                  0x3
#define _INTCON_RABIE_POSITION                              0x3
#define _INTCON_RABIE_SIZE                                  0x1
#define _INTCON_RABIE_LENGTH                                0x1
#define _INTCON_RABIE_MASK                                  0x8
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
extern volatile __bit                   ABDEN               __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
// SSPCON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x7E2D);	// @ (0xFC5 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x7E2C);	// @ (0xFC5 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x7E2E);	// @ (0xFC5 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSPCON2,6)
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON2,3)
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON2,4)
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON2,5)
// UIE<ACTVIE>
extern volatile __bit                   ACTVIE              __at(0x7B02);	// @ (0xF60 * 8 + 2)
#define                                 ACTVIE_bit          _BIT_ACCESS(UIE,2)
// UIR<ACTVIF>
extern volatile __bit                   ACTVIF              __at(0x7B12);	// @ (0xF62 * 8 + 2)
#define                                 ACTVIF_bit          _BIT_ACCESS(UIR,2)
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
// UADDR<ADDR0>
extern volatile __bit                   ADDR0               __at(0x7AE0);	// @ (0xF5C * 8 + 0)
#define                                 ADDR0_bit           _BIT_ACCESS(UADDR,0)
// UADDR<ADDR1>
extern volatile __bit                   ADDR1               __at(0x7AE1);	// @ (0xF5C * 8 + 1)
#define                                 ADDR1_bit           _BIT_ACCESS(UADDR,1)
// UADDR<ADDR2>
extern volatile __bit                   ADDR2               __at(0x7AE2);	// @ (0xF5C * 8 + 2)
#define                                 ADDR2_bit           _BIT_ACCESS(UADDR,2)
// UADDR<ADDR3>
extern volatile __bit                   ADDR3               __at(0x7AE3);	// @ (0xF5C * 8 + 3)
#define                                 ADDR3_bit           _BIT_ACCESS(UADDR,3)
// UADDR<ADDR4>
extern volatile __bit                   ADDR4               __at(0x7AE4);	// @ (0xF5C * 8 + 4)
#define                                 ADDR4_bit           _BIT_ACCESS(UADDR,4)
// UADDR<ADDR5>
extern volatile __bit                   ADDR5               __at(0x7AE5);	// @ (0xF5C * 8 + 5)
#define                                 ADDR5_bit           _BIT_ACCESS(UADDR,5)
// UADDR<ADDR6>
extern volatile __bit                   ADDR6               __at(0x7AE6);	// @ (0xF5C * 8 + 6)
#define                                 ADDR6_bit           _BIT_ACCESS(UADDR,6)
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
// PORTB<AN10>
extern volatile __bit                   AN10                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 AN10_bit            _BIT_ACCESS(PORTB,4)
// PORTB<AN11>
extern volatile __bit                   AN11                __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 AN11_bit            _BIT_ACCESS(PORTB,5)
// PORTA<AN3>
extern volatile __bit                   AN3                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 AN3_bit             _BIT_ACCESS(PORTA,4)
// PORTC<AN4>
extern volatile __bit                   AN4                 __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 AN4_bit             _BIT_ACCESS(PORTC,0)
// PORTC<AN5>
extern volatile __bit                   AN5                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 AN5_bit             _BIT_ACCESS(PORTC,1)
// PORTC<AN6>
extern volatile __bit                   AN6                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 AN6_bit             _BIT_ACCESS(PORTC,2)
// PORTC<AN7>
extern volatile __bit                   AN7                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 AN7_bit             _BIT_ACCESS(PORTC,3)
// PORTC<AN8>
extern volatile __bit                   AN8                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 AN8_bit             _BIT_ACCESS(PORTC,6)
// PORTC<AN9>
extern volatile __bit                   AN9                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 AN9_bit             _BIT_ACCESS(PORTC,7)
// ANSELH<ANS10>
extern volatile __bit                   ANS10               __at(0x7BFA);	// @ (0xF7F * 8 + 2)
#define                                 ANS10_bit           _BIT_ACCESS(ANSELH,2)
// ANSELH<ANS11>
extern volatile __bit                   ANS11               __at(0x7BFB);	// @ (0xF7F * 8 + 3)
#define                                 ANS11_bit           _BIT_ACCESS(ANSELH,3)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// ANSEL<ANS4>
extern volatile __bit                   ANS4                __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL,4)
// ANSEL<ANS5>
extern volatile __bit                   ANS5                __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 ANS5_bit            _BIT_ACCESS(ANSEL,5)
// ANSEL<ANS6>
extern volatile __bit                   ANS6                __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 ANS6_bit            _BIT_ACCESS(ANSEL,6)
// ANSEL<ANS7>
extern volatile __bit                   ANS7                __at(0x7BF7);	// @ (0xF7E * 8 + 7)
#define                                 ANS7_bit            _BIT_ACCESS(ANSEL,7)
// ANSELH<ANS8>
extern volatile __bit                   ANS8                __at(0x7BF8);	// @ (0xF7F * 8 + 0)
#define                                 ANS8_bit            _BIT_ACCESS(ANSELH,0)
// ANSELH<ANS9>
extern volatile __bit                   ANS9                __at(0x7BF9);	// @ (0xF7F * 8 + 1)
#define                                 ANS9_bit            _BIT_ACCESS(ANSELH,1)
// PIE2<BCLIE>
extern volatile __bit                   BCLIE               __at(0x7D03);	// @ (0xFA0 * 8 + 3)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE2,3)
// PIR2<BCLIF>
extern volatile __bit                   BCLIF               __at(0x7D0B);	// @ (0xFA1 * 8 + 3)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR2,3)
// IPR2<BCLIP>
extern volatile __bit                   BCLIP               __at(0x7D13);	// @ (0xFA2 * 8 + 3)
#define                                 BCLIP_bit           _BIT_ACCESS(IPR2,3)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x7E38);	// @ (0xFC7 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// BAUDCON<BRG16>
extern volatile __bit                   BRG16               __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON,3)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// TXSTA<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA,2)
// UEIE<BTOEE>
extern volatile __bit                   BTOEE               __at(0x7ADC);	// @ (0xF5B * 8 + 4)
#define                                 BTOEE_bit           _BIT_ACCESS(UEIE,4)
// UEIR<BTOEF>
extern volatile __bit                   BTOEF               __at(0x7AFC);	// @ (0xF5F * 8 + 4)
#define                                 BTOEF_bit           _BIT_ACCESS(UEIR,4)
// UEIE<BTSEE>
extern volatile __bit                   BTSEE               __at(0x7ADF);	// @ (0xF5B * 8 + 7)
#define                                 BTSEE_bit           _BIT_ACCESS(UEIE,7)
// UEIR<BTSEF>
extern volatile __bit                   BTSEF               __at(0x7AFF);	// @ (0xF5F * 8 + 7)
#define                                 BTSEF_bit           _BIT_ACCESS(UEIR,7)
// PORTC<C12IN1M>
extern volatile __bit                   C12IN1M             __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 C12IN1M_bit         _BIT_ACCESS(PORTC,1)
// PORTC<C12IN2M>
extern volatile __bit                   C12IN2M             __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 C12IN2M_bit         _BIT_ACCESS(PORTC,2)
// PORTC<C12IN3M>
extern volatile __bit                   C12IN3M             __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 C12IN3M_bit         _BIT_ACCESS(PORTC,3)
// PORTC<C12INP>
extern volatile __bit                   C12INP              __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 C12INP_bit          _BIT_ACCESS(PORTC,0)
// PORTC<C12OUT>
extern volatile __bit                   C12OUT              __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 C12OUT_bit          _BIT_ACCESS(PORTC,4)
// CM1CON0<C1CH0>
extern volatile __bit                   C1CH0               __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 C1CH0_bit           _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1CH1>
extern volatile __bit                   C1CH1               __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 C1CH1_bit           _BIT_ACCESS(CM1CON0,1)
// CM2CON1<C1HYS>
extern volatile __bit                   C1HYS               __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 C1HYS_bit           _BIT_ACCESS(CM2CON1,3)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<C1IP>
extern volatile __bit                   C1IP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 C1IP_bit            _BIT_ACCESS(IPR2,6)
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x7B6F);	// @ (0xF6D * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1R>
extern volatile __bit                   C1R                 __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 C1R_bit             _BIT_ACCESS(CM1CON0,2)
// CM2CON1<C1RSEL>
extern volatile __bit                   C1RSEL              __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 C1RSEL_bit          _BIT_ACCESS(CM2CON1,5)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,3)
// CM2CON1<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM2CON1,1)
// CM2CON0<C2CH0>
extern volatile __bit                   C2CH0               __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 C2CH0_bit           _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2CH1>
extern volatile __bit                   C2CH1               __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 C2CH1_bit           _BIT_ACCESS(CM2CON0,1)
// CM2CON1<C2HYS>
extern volatile __bit                   C2HYS               __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 C2HYS_bit           _BIT_ACCESS(CM2CON1,2)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x7D05);	// @ (0xFA0 * 8 + 5)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x7D0D);	// @ (0xFA1 * 8 + 5)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,5)
// IPR2<C2IP>
extern volatile __bit                   C2IP                __at(0x7D15);	// @ (0xFA2 * 8 + 5)
#define                                 C2IP_bit            _BIT_ACCESS(IPR2,5)
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x7B5D);	// @ (0xF6B * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x7B5F);	// @ (0xF6B * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x7B5E);	// @ (0xF6B * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2R>
extern volatile __bit                   C2R                 __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 C2R_bit             _BIT_ACCESS(CM2CON0,2)
// CM2CON1<C2RSEL>
extern volatile __bit                   C2RSEL              __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 C2RSEL_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,3)
// CM2CON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON1,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,5)
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
// PORTC<CCP2>
extern volatile __bit                   CCP2                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 CCP2_bit            _BIT_ACCESS(PORTC,1)
// EECON1<CFGS>
extern volatile __bit                   CFGS                __at(0x7D36);	// @ (0xFA6 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(EECON1,6)
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
// PORTB<CK>
extern volatile __bit                   CK                  __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 CK_bit              _BIT_ACCESS(PORTB,7)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x7E3E);	// @ (0xFC7 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x7E34);	// @ (0xFC6 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// BAUDCON<CKTXP>
extern volatile __bit                   CKTXP               __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 CKTXP_bit           _BIT_ACCESS(BAUDCON,4)
// PORTA<CLKIN>
extern volatile __bit                   CLKIN               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 CLKIN_bit           _BIT_ACCESS(PORTA,5)
// PORTA<CLKOUT>
extern volatile __bit                   CLKOUT              __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 CLKOUT_bit          _BIT_ACCESS(PORTA,4)
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            _BIT_ACCESS(IPR2,6)
// UEIE<CRC16EE>
extern volatile __bit                   CRC16EE             __at(0x7ADA);	// @ (0xF5B * 8 + 2)
#define                                 CRC16EE_bit         _BIT_ACCESS(UEIE,2)
// UEIR<CRC16EF>
extern volatile __bit                   CRC16EF             __at(0x7AFA);	// @ (0xF5F * 8 + 2)
#define                                 CRC16EF_bit         _BIT_ACCESS(UEIR,2)
// UEIE<CRC5EE>
extern volatile __bit                   CRC5EE              __at(0x7AD9);	// @ (0xF5B * 8 + 1)
#define                                 CRC5EE_bit          _BIT_ACCESS(UEIE,1)
// UEIR<CRC5EF>
extern volatile __bit                   CRC5EF              __at(0x7AF9);	// @ (0xF5F * 8 + 1)
#define                                 CRC5EF_bit          _BIT_ACCESS(UEIR,1)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// TXSTA<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA,7)
// PORTC<CVREF>
extern volatile __bit                   CVREF               __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CVREF_bit           _BIT_ACCESS(PORTC,2)
// REFCON1<D1EN>
extern volatile __bit                   D1EN                __at(0x7DDF);	// @ (0xFBB * 8 + 7)
#define                                 D1EN_bit            _BIT_ACCESS(REFCON1,7)
// REFCON1<D1LPS>
extern volatile __bit                   D1LPS               __at(0x7DDE);	// @ (0xFBB * 8 + 6)
#define                                 D1LPS_bit           _BIT_ACCESS(REFCON1,6)
// REFCON1<D1NSS>
extern volatile __bit                   D1NSS               __at(0x7DD8);	// @ (0xFBB * 8 + 0)
#define                                 D1NSS_bit           _BIT_ACCESS(REFCON1,0)
// REFCON1<D1NSS0>
extern volatile __bit                   D1NSS0              __at(0x7DD8);	// @ (0xFBB * 8 + 0)
#define                                 D1NSS0_bit          _BIT_ACCESS(REFCON1,0)
// REFCON1<D1PSS0>
extern volatile __bit                   D1PSS0              __at(0x7DDA);	// @ (0xFBB * 8 + 2)
#define                                 D1PSS0_bit          _BIT_ACCESS(REFCON1,2)
// REFCON1<D1PSS1>
extern volatile __bit                   D1PSS1              __at(0x7DDB);	// @ (0xFBB * 8 + 3)
#define                                 D1PSS1_bit          _BIT_ACCESS(REFCON1,3)
// SSPSTAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSPSTAT,5)
// REFCON1<DAC1OE>
extern volatile __bit                   DAC1OE              __at(0x7DDD);	// @ (0xFBB * 8 + 5)
#define                                 DAC1OE_bit          _BIT_ACCESS(REFCON1,5)
// REFCON2<DAC1R0>
extern volatile __bit                   DAC1R0              __at(0x7DE0);	// @ (0xFBC * 8 + 0)
#define                                 DAC1R0_bit          _BIT_ACCESS(REFCON2,0)
// REFCON2<DAC1R1>
extern volatile __bit                   DAC1R1              __at(0x7DE1);	// @ (0xFBC * 8 + 1)
#define                                 DAC1R1_bit          _BIT_ACCESS(REFCON2,1)
// REFCON2<DAC1R2>
extern volatile __bit                   DAC1R2              __at(0x7DE2);	// @ (0xFBC * 8 + 2)
#define                                 DAC1R2_bit          _BIT_ACCESS(REFCON2,2)
// REFCON2<DAC1R3>
extern volatile __bit                   DAC1R3              __at(0x7DE3);	// @ (0xFBC * 8 + 3)
#define                                 DAC1R3_bit          _BIT_ACCESS(REFCON2,3)
// REFCON2<DAC1R4>
extern volatile __bit                   DAC1R4              __at(0x7DE4);	// @ (0xFBC * 8 + 4)
#define                                 DAC1R4_bit          _BIT_ACCESS(REFCON2,4)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x7EC1);	// @ (0xFD8 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0x7DEC);	// @ (0xFBD * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0x7DED);	// @ (0xFBD * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// UEIE<DFN8EE>
extern volatile __bit                   DFN8EE              __at(0x7ADB);	// @ (0xF5B * 8 + 3)
#define                                 DFN8EE_bit          _BIT_ACCESS(UEIE,3)
// UEIR<DFN8EF>
extern volatile __bit                   DFN8EF              __at(0x7AFB);	// @ (0xF5F * 8 + 3)
#define                                 DFN8EF_bit          _BIT_ACCESS(UEIR,3)
// USTAT<DIR>
extern volatile __bit                   DIR                 __at(0x7B1A);	// @ (0xF63 * 8 + 2)
#define                                 DIR_bit             _BIT_ACCESS(USTAT,2)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// PORTB<DT>
extern volatile __bit                   DT                  __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 DT_bit              _BIT_ACCESS(PORTB,5)
// BAUDCON<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 DTRXP_bit           _BIT_ACCESS(BAUDCON,5)
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
#define                                 EBDIS_bit           _BIT_ACCESS(PR2,7)
// ECCP1AS<ECCPAS0>
extern volatile __bit                   ECCPAS0             __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 ECCPAS0_bit         _BIT_ACCESS(ECCP1AS,4)
// ECCP1AS<ECCPAS1>
extern volatile __bit                   ECCPAS1             __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 ECCPAS1_bit         _BIT_ACCESS(ECCP1AS,5)
// ECCP1AS<ECCPAS2>
extern volatile __bit                   ECCPAS2             __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 ECCPAS2_bit         _BIT_ACCESS(ECCP1AS,6)
// ECCP1AS<ECCPASE>
extern volatile __bit                   ECCPASE             __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 ECCPASE_bit         _BIT_ACCESS(ECCP1AS,7)
// EEADR<EEADR0>
extern volatile __bit                   EEADR0              __at(0x7D48);	// @ (0xFA9 * 8 + 0)
#define                                 EEADR0_bit          _BIT_ACCESS(EEADR,0)
// EEADR<EEADR1>
extern volatile __bit                   EEADR1              __at(0x7D49);	// @ (0xFA9 * 8 + 1)
#define                                 EEADR1_bit          _BIT_ACCESS(EEADR,1)
// EEADR<EEADR2>
extern volatile __bit                   EEADR2              __at(0x7D4A);	// @ (0xFA9 * 8 + 2)
#define                                 EEADR2_bit          _BIT_ACCESS(EEADR,2)
// EEADR<EEADR3>
extern volatile __bit                   EEADR3              __at(0x7D4B);	// @ (0xFA9 * 8 + 3)
#define                                 EEADR3_bit          _BIT_ACCESS(EEADR,3)
// EEADR<EEADR4>
extern volatile __bit                   EEADR4              __at(0x7D4C);	// @ (0xFA9 * 8 + 4)
#define                                 EEADR4_bit          _BIT_ACCESS(EEADR,4)
// EEADR<EEADR5>
extern volatile __bit                   EEADR5              __at(0x7D4D);	// @ (0xFA9 * 8 + 5)
#define                                 EEADR5_bit          _BIT_ACCESS(EEADR,5)
// EEADR<EEADR6>
extern volatile __bit                   EEADR6              __at(0x7D4E);	// @ (0xFA9 * 8 + 6)
#define                                 EEADR6_bit          _BIT_ACCESS(EEADR,6)
// EEADR<EEADR7>
extern volatile __bit                   EEADR7              __at(0x7D4F);	// @ (0xFA9 * 8 + 7)
#define                                 EEADR7_bit          _BIT_ACCESS(EEADR,7)
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
// USTAT<ENDP0>
extern volatile __bit                   ENDP0               __at(0x7B1B);	// @ (0xF63 * 8 + 3)
#define                                 ENDP0_bit           _BIT_ACCESS(USTAT,3)
// USTAT<ENDP1>
extern volatile __bit                   ENDP1               __at(0x7B1C);	// @ (0xF63 * 8 + 4)
#define                                 ENDP1_bit           _BIT_ACCESS(USTAT,4)
// USTAT<ENDP2>
extern volatile __bit                   ENDP2               __at(0x7B1D);	// @ (0xF63 * 8 + 5)
#define                                 ENDP2_bit           _BIT_ACCESS(USTAT,5)
// USTAT<ENDP3>
extern volatile __bit                   ENDP3               __at(0x7B1E);	// @ (0xF63 * 8 + 6)
#define                                 ENDP3_bit           _BIT_ACCESS(USTAT,6)
// UEP0<EP0CONDIS>
extern volatile __bit                   EP0CONDIS           __at(0x7A9B);	// @ (0xF53 * 8 + 3)
#define                                 EP0CONDIS_bit       _BIT_ACCESS(UEP0,3)
// UEP0<EP0HSHK>
extern volatile __bit                   EP0HSHK             __at(0x7A9C);	// @ (0xF53 * 8 + 4)
#define                                 EP0HSHK_bit         _BIT_ACCESS(UEP0,4)
// UEP0<EP0INEN>
extern volatile __bit                   EP0INEN             __at(0x7A99);	// @ (0xF53 * 8 + 1)
#define                                 EP0INEN_bit         _BIT_ACCESS(UEP0,1)
// UEP0<EP0OUTEN>
extern volatile __bit                   EP0OUTEN            __at(0x7A9A);	// @ (0xF53 * 8 + 2)
#define                                 EP0OUTEN_bit        _BIT_ACCESS(UEP0,2)
// UEP0<EP0STALL>
extern volatile __bit                   EP0STALL            __at(0x7A98);	// @ (0xF53 * 8 + 0)
#define                                 EP0STALL_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EP1CONDIS>
extern volatile __bit                   EP1CONDIS           __at(0x7AA3);	// @ (0xF54 * 8 + 3)
#define                                 EP1CONDIS_bit       _BIT_ACCESS(UEP1,3)
// UEP1<EP1HSHK>
extern volatile __bit                   EP1HSHK             __at(0x7AA4);	// @ (0xF54 * 8 + 4)
#define                                 EP1HSHK_bit         _BIT_ACCESS(UEP1,4)
// UEP1<EP1INEN>
extern volatile __bit                   EP1INEN             __at(0x7AA1);	// @ (0xF54 * 8 + 1)
#define                                 EP1INEN_bit         _BIT_ACCESS(UEP1,1)
// UEP1<EP1OUTEN>
extern volatile __bit                   EP1OUTEN            __at(0x7AA2);	// @ (0xF54 * 8 + 2)
#define                                 EP1OUTEN_bit        _BIT_ACCESS(UEP1,2)
// UEP1<EP1STALL>
extern volatile __bit                   EP1STALL            __at(0x7AA0);	// @ (0xF54 * 8 + 0)
#define                                 EP1STALL_bit        _BIT_ACCESS(UEP1,0)
// UEP2<EP2CONDIS>
extern volatile __bit                   EP2CONDIS           __at(0x7AAB);	// @ (0xF55 * 8 + 3)
#define                                 EP2CONDIS_bit       _BIT_ACCESS(UEP2,3)
// UEP2<EP2HSHK>
extern volatile __bit                   EP2HSHK             __at(0x7AAC);	// @ (0xF55 * 8 + 4)
#define                                 EP2HSHK_bit         _BIT_ACCESS(UEP2,4)
// UEP2<EP2INEN>
extern volatile __bit                   EP2INEN             __at(0x7AA9);	// @ (0xF55 * 8 + 1)
#define                                 EP2INEN_bit         _BIT_ACCESS(UEP2,1)
// UEP2<EP2OUTEN>
extern volatile __bit                   EP2OUTEN            __at(0x7AAA);	// @ (0xF55 * 8 + 2)
#define                                 EP2OUTEN_bit        _BIT_ACCESS(UEP2,2)
// UEP2<EP2STALL>
extern volatile __bit                   EP2STALL            __at(0x7AA8);	// @ (0xF55 * 8 + 0)
#define                                 EP2STALL_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EP3CONDIS>
extern volatile __bit                   EP3CONDIS           __at(0x7AB3);	// @ (0xF56 * 8 + 3)
#define                                 EP3CONDIS_bit       _BIT_ACCESS(UEP3,3)
// UEP3<EP3HSHK>
extern volatile __bit                   EP3HSHK             __at(0x7AB4);	// @ (0xF56 * 8 + 4)
#define                                 EP3HSHK_bit         _BIT_ACCESS(UEP3,4)
// UEP3<EP3INEN>
extern volatile __bit                   EP3INEN             __at(0x7AB1);	// @ (0xF56 * 8 + 1)
#define                                 EP3INEN_bit         _BIT_ACCESS(UEP3,1)
// UEP3<EP3OUTEN>
extern volatile __bit                   EP3OUTEN            __at(0x7AB2);	// @ (0xF56 * 8 + 2)
#define                                 EP3OUTEN_bit        _BIT_ACCESS(UEP3,2)
// UEP3<EP3STALL>
extern volatile __bit                   EP3STALL            __at(0x7AB0);	// @ (0xF56 * 8 + 0)
#define                                 EP3STALL_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EP4CONDIS>
extern volatile __bit                   EP4CONDIS           __at(0x7ABB);	// @ (0xF57 * 8 + 3)
#define                                 EP4CONDIS_bit       _BIT_ACCESS(UEP4,3)
// UEP4<EP4HSHK>
extern volatile __bit                   EP4HSHK             __at(0x7ABC);	// @ (0xF57 * 8 + 4)
#define                                 EP4HSHK_bit         _BIT_ACCESS(UEP4,4)
// UEP4<EP4INEN>
extern volatile __bit                   EP4INEN             __at(0x7AB9);	// @ (0xF57 * 8 + 1)
#define                                 EP4INEN_bit         _BIT_ACCESS(UEP4,1)
// UEP4<EP4OUTEN>
extern volatile __bit                   EP4OUTEN            __at(0x7ABA);	// @ (0xF57 * 8 + 2)
#define                                 EP4OUTEN_bit        _BIT_ACCESS(UEP4,2)
// UEP4<EP4STALL>
extern volatile __bit                   EP4STALL            __at(0x7AB8);	// @ (0xF57 * 8 + 0)
#define                                 EP4STALL_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EP5CONDIS>
extern volatile __bit                   EP5CONDIS           __at(0x7AC3);	// @ (0xF58 * 8 + 3)
#define                                 EP5CONDIS_bit       _BIT_ACCESS(UEP5,3)
// UEP5<EP5HSHK>
extern volatile __bit                   EP5HSHK             __at(0x7AC4);	// @ (0xF58 * 8 + 4)
#define                                 EP5HSHK_bit         _BIT_ACCESS(UEP5,4)
// UEP5<EP5INEN>
extern volatile __bit                   EP5INEN             __at(0x7AC1);	// @ (0xF58 * 8 + 1)
#define                                 EP5INEN_bit         _BIT_ACCESS(UEP5,1)
// UEP5<EP5OUTEN>
extern volatile __bit                   EP5OUTEN            __at(0x7AC2);	// @ (0xF58 * 8 + 2)
#define                                 EP5OUTEN_bit        _BIT_ACCESS(UEP5,2)
// UEP5<EP5STALL>
extern volatile __bit                   EP5STALL            __at(0x7AC0);	// @ (0xF58 * 8 + 0)
#define                                 EP5STALL_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EP6CONDIS>
extern volatile __bit                   EP6CONDIS           __at(0x7ACB);	// @ (0xF59 * 8 + 3)
#define                                 EP6CONDIS_bit       _BIT_ACCESS(UEP6,3)
// UEP6<EP6HSHK>
extern volatile __bit                   EP6HSHK             __at(0x7ACC);	// @ (0xF59 * 8 + 4)
#define                                 EP6HSHK_bit         _BIT_ACCESS(UEP6,4)
// UEP6<EP6INEN>
extern volatile __bit                   EP6INEN             __at(0x7AC9);	// @ (0xF59 * 8 + 1)
#define                                 EP6INEN_bit         _BIT_ACCESS(UEP6,1)
// UEP6<EP6OUTEN>
extern volatile __bit                   EP6OUTEN            __at(0x7ACA);	// @ (0xF59 * 8 + 2)
#define                                 EP6OUTEN_bit        _BIT_ACCESS(UEP6,2)
// UEP6<EP6STALL>
extern volatile __bit                   EP6STALL            __at(0x7AC8);	// @ (0xF59 * 8 + 0)
#define                                 EP6STALL_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EP7CONDIS>
extern volatile __bit                   EP7CONDIS           __at(0x7AD3);	// @ (0xF5A * 8 + 3)
#define                                 EP7CONDIS_bit       _BIT_ACCESS(UEP7,3)
// UEP7<EP7HSHK>
extern volatile __bit                   EP7HSHK             __at(0x7AD4);	// @ (0xF5A * 8 + 4)
#define                                 EP7HSHK_bit         _BIT_ACCESS(UEP7,4)
// UEP7<EP7INEN>
extern volatile __bit                   EP7INEN             __at(0x7AD1);	// @ (0xF5A * 8 + 1)
#define                                 EP7INEN_bit         _BIT_ACCESS(UEP7,1)
// UEP7<EP7OUTEN>
extern volatile __bit                   EP7OUTEN            __at(0x7AD2);	// @ (0xF5A * 8 + 2)
#define                                 EP7OUTEN_bit        _BIT_ACCESS(UEP7,2)
// UEP7<EP7STALL>
extern volatile __bit                   EP7STALL            __at(0x7AD0);	// @ (0xF5A * 8 + 0)
#define                                 EP7STALL_bit        _BIT_ACCESS(UEP7,0)
// UEP0<EPCONDIS0>
extern volatile __bit                   EPCONDIS0           __at(0x7A9B);	// @ (0xF53 * 8 + 3)
#define                                 EPCONDIS0_bit       _BIT_ACCESS(UEP0,3)
// UEP1<EPCONDIS1>
extern volatile __bit                   EPCONDIS1           __at(0x7AA3);	// @ (0xF54 * 8 + 3)
#define                                 EPCONDIS1_bit       _BIT_ACCESS(UEP1,3)
// UEP2<EPCONDIS2>
extern volatile __bit                   EPCONDIS2           __at(0x7AAB);	// @ (0xF55 * 8 + 3)
#define                                 EPCONDIS2_bit       _BIT_ACCESS(UEP2,3)
// UEP3<EPCONDIS3>
extern volatile __bit                   EPCONDIS3           __at(0x7AB3);	// @ (0xF56 * 8 + 3)
#define                                 EPCONDIS3_bit       _BIT_ACCESS(UEP3,3)
// UEP4<EPCONDIS4>
extern volatile __bit                   EPCONDIS4           __at(0x7ABB);	// @ (0xF57 * 8 + 3)
#define                                 EPCONDIS4_bit       _BIT_ACCESS(UEP4,3)
// UEP5<EPCONDIS5>
extern volatile __bit                   EPCONDIS5           __at(0x7AC3);	// @ (0xF58 * 8 + 3)
#define                                 EPCONDIS5_bit       _BIT_ACCESS(UEP5,3)
// UEP6<EPCONDIS6>
extern volatile __bit                   EPCONDIS6           __at(0x7ACB);	// @ (0xF59 * 8 + 3)
#define                                 EPCONDIS6_bit       _BIT_ACCESS(UEP6,3)
// UEP7<EPCONDIS7>
extern volatile __bit                   EPCONDIS7           __at(0x7AD3);	// @ (0xF5A * 8 + 3)
#define                                 EPCONDIS7_bit       _BIT_ACCESS(UEP7,3)
// UEP0<EPHSHK0>
extern volatile __bit                   EPHSHK0             __at(0x7A9C);	// @ (0xF53 * 8 + 4)
#define                                 EPHSHK0_bit         _BIT_ACCESS(UEP0,4)
// UEP1<EPHSHK1>
extern volatile __bit                   EPHSHK1             __at(0x7AA4);	// @ (0xF54 * 8 + 4)
#define                                 EPHSHK1_bit         _BIT_ACCESS(UEP1,4)
// UEP2<EPHSHK2>
extern volatile __bit                   EPHSHK2             __at(0x7AAC);	// @ (0xF55 * 8 + 4)
#define                                 EPHSHK2_bit         _BIT_ACCESS(UEP2,4)
// UEP3<EPHSHK3>
extern volatile __bit                   EPHSHK3             __at(0x7AB4);	// @ (0xF56 * 8 + 4)
#define                                 EPHSHK3_bit         _BIT_ACCESS(UEP3,4)
// UEP4<EPHSHK4>
extern volatile __bit                   EPHSHK4             __at(0x7ABC);	// @ (0xF57 * 8 + 4)
#define                                 EPHSHK4_bit         _BIT_ACCESS(UEP4,4)
// UEP5<EPHSHK5>
extern volatile __bit                   EPHSHK5             __at(0x7AC4);	// @ (0xF58 * 8 + 4)
#define                                 EPHSHK5_bit         _BIT_ACCESS(UEP5,4)
// UEP6<EPHSHK6>
extern volatile __bit                   EPHSHK6             __at(0x7ACC);	// @ (0xF59 * 8 + 4)
#define                                 EPHSHK6_bit         _BIT_ACCESS(UEP6,4)
// UEP7<EPHSHK7>
extern volatile __bit                   EPHSHK7             __at(0x7AD4);	// @ (0xF5A * 8 + 4)
#define                                 EPHSHK7_bit         _BIT_ACCESS(UEP7,4)
// UEP0<EPINEN0>
extern volatile __bit                   EPINEN0             __at(0x7A99);	// @ (0xF53 * 8 + 1)
#define                                 EPINEN0_bit         _BIT_ACCESS(UEP0,1)
// UEP1<EPINEN1>
extern volatile __bit                   EPINEN1             __at(0x7AA1);	// @ (0xF54 * 8 + 1)
#define                                 EPINEN1_bit         _BIT_ACCESS(UEP1,1)
// UEP2<EPINEN2>
extern volatile __bit                   EPINEN2             __at(0x7AA9);	// @ (0xF55 * 8 + 1)
#define                                 EPINEN2_bit         _BIT_ACCESS(UEP2,1)
// UEP3<EPINEN3>
extern volatile __bit                   EPINEN3             __at(0x7AB1);	// @ (0xF56 * 8 + 1)
#define                                 EPINEN3_bit         _BIT_ACCESS(UEP3,1)
// UEP4<EPINEN4>
extern volatile __bit                   EPINEN4             __at(0x7AB9);	// @ (0xF57 * 8 + 1)
#define                                 EPINEN4_bit         _BIT_ACCESS(UEP4,1)
// UEP5<EPINEN5>
extern volatile __bit                   EPINEN5             __at(0x7AC1);	// @ (0xF58 * 8 + 1)
#define                                 EPINEN5_bit         _BIT_ACCESS(UEP5,1)
// UEP6<EPINEN6>
extern volatile __bit                   EPINEN6             __at(0x7AC9);	// @ (0xF59 * 8 + 1)
#define                                 EPINEN6_bit         _BIT_ACCESS(UEP6,1)
// UEP7<EPINEN7>
extern volatile __bit                   EPINEN7             __at(0x7AD1);	// @ (0xF5A * 8 + 1)
#define                                 EPINEN7_bit         _BIT_ACCESS(UEP7,1)
// UEP0<EPOUTEN0>
extern volatile __bit                   EPOUTEN0            __at(0x7A9A);	// @ (0xF53 * 8 + 2)
#define                                 EPOUTEN0_bit        _BIT_ACCESS(UEP0,2)
// UEP1<EPOUTEN1>
extern volatile __bit                   EPOUTEN1            __at(0x7AA2);	// @ (0xF54 * 8 + 2)
#define                                 EPOUTEN1_bit        _BIT_ACCESS(UEP1,2)
// UEP2<EPOUTEN2>
extern volatile __bit                   EPOUTEN2            __at(0x7AAA);	// @ (0xF55 * 8 + 2)
#define                                 EPOUTEN2_bit        _BIT_ACCESS(UEP2,2)
// UEP3<EPOUTEN3>
extern volatile __bit                   EPOUTEN3            __at(0x7AB2);	// @ (0xF56 * 8 + 2)
#define                                 EPOUTEN3_bit        _BIT_ACCESS(UEP3,2)
// UEP4<EPOUTEN4>
extern volatile __bit                   EPOUTEN4            __at(0x7ABA);	// @ (0xF57 * 8 + 2)
#define                                 EPOUTEN4_bit        _BIT_ACCESS(UEP4,2)
// UEP5<EPOUTEN5>
extern volatile __bit                   EPOUTEN5            __at(0x7AC2);	// @ (0xF58 * 8 + 2)
#define                                 EPOUTEN5_bit        _BIT_ACCESS(UEP5,2)
// UEP6<EPOUTEN6>
extern volatile __bit                   EPOUTEN6            __at(0x7ACA);	// @ (0xF59 * 8 + 2)
#define                                 EPOUTEN6_bit        _BIT_ACCESS(UEP6,2)
// UEP7<EPOUTEN7>
extern volatile __bit                   EPOUTEN7            __at(0x7AD2);	// @ (0xF5A * 8 + 2)
#define                                 EPOUTEN7_bit        _BIT_ACCESS(UEP7,2)
// UEP0<EPSTALL0>
extern volatile __bit                   EPSTALL0            __at(0x7A98);	// @ (0xF53 * 8 + 0)
#define                                 EPSTALL0_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EPSTALL1>
extern volatile __bit                   EPSTALL1            __at(0x7AA0);	// @ (0xF54 * 8 + 0)
#define                                 EPSTALL1_bit        _BIT_ACCESS(UEP1,0)
// UEP2<EPSTALL2>
extern volatile __bit                   EPSTALL2            __at(0x7AA8);	// @ (0xF55 * 8 + 0)
#define                                 EPSTALL2_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EPSTALL3>
extern volatile __bit                   EPSTALL3            __at(0x7AB0);	// @ (0xF56 * 8 + 0)
#define                                 EPSTALL3_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EPSTALL4>
extern volatile __bit                   EPSTALL4            __at(0x7AB8);	// @ (0xF57 * 8 + 0)
#define                                 EPSTALL4_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EPSTALL5>
extern volatile __bit                   EPSTALL5            __at(0x7AC0);	// @ (0xF58 * 8 + 0)
#define                                 EPSTALL5_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EPSTALL6>
extern volatile __bit                   EPSTALL6            __at(0x7AC8);	// @ (0xF59 * 8 + 0)
#define                                 EPSTALL6_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EPSTALL7>
extern volatile __bit                   EPSTALL7            __at(0x7AD0);	// @ (0xF5A * 8 + 0)
#define                                 EPSTALL7_bit        _BIT_ACCESS(UEP7,0)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// UFRML<FRM0>
extern volatile __bit                   FRM0                __at(0x7AE8);	// @ (0xF5D * 8 + 0)
#define                                 FRM0_bit            _BIT_ACCESS(UFRML,0)
// UFRML<FRM1>
extern volatile __bit                   FRM1                __at(0x7AE9);	// @ (0xF5D * 8 + 1)
#define                                 FRM1_bit            _BIT_ACCESS(UFRML,1)
// UFRMH<FRM10>
extern volatile __bit                   FRM10               __at(0x7AF2);	// @ (0xF5E * 8 + 2)
#define                                 FRM10_bit           _BIT_ACCESS(UFRMH,2)
// UFRML<FRM2>
extern volatile __bit                   FRM2                __at(0x7AEA);	// @ (0xF5D * 8 + 2)
#define                                 FRM2_bit            _BIT_ACCESS(UFRML,2)
// UFRML<FRM3>
extern volatile __bit                   FRM3                __at(0x7AEB);	// @ (0xF5D * 8 + 3)
#define                                 FRM3_bit            _BIT_ACCESS(UFRML,3)
// UFRML<FRM4>
extern volatile __bit                   FRM4                __at(0x7AEC);	// @ (0xF5D * 8 + 4)
#define                                 FRM4_bit            _BIT_ACCESS(UFRML,4)
// UFRML<FRM5>
extern volatile __bit                   FRM5                __at(0x7AED);	// @ (0xF5D * 8 + 5)
#define                                 FRM5_bit            _BIT_ACCESS(UFRML,5)
// UFRML<FRM6>
extern volatile __bit                   FRM6                __at(0x7AEE);	// @ (0xF5D * 8 + 6)
#define                                 FRM6_bit            _BIT_ACCESS(UFRML,6)
// UFRML<FRM7>
extern volatile __bit                   FRM7                __at(0x7AEF);	// @ (0xF5D * 8 + 7)
#define                                 FRM7_bit            _BIT_ACCESS(UFRML,7)
// UFRMH<FRM8>
extern volatile __bit                   FRM8                __at(0x7AF0);	// @ (0xF5E * 8 + 0)
#define                                 FRM8_bit            _BIT_ACCESS(UFRMH,0)
// UFRMH<FRM9>
extern volatile __bit                   FRM9                __at(0x7AF1);	// @ (0xF5E * 8 + 1)
#define                                 FRM9_bit            _BIT_ACCESS(UFRMH,1)
// UCFG<FSEN>
extern volatile __bit                   FSEN                __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 FSEN_bit            _BIT_ACCESS(UCFG,2)
// REFCON0<FVR1EN>
extern volatile __bit                   FVR1EN              __at(0x7DD7);	// @ (0xFBA * 8 + 7)
#define                                 FVR1EN_bit          _BIT_ACCESS(REFCON0,7)
// REFCON0<FVR1S0>
extern volatile __bit                   FVR1S0              __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 FVR1S0_bit          _BIT_ACCESS(REFCON0,4)
// REFCON0<FVR1S1>
extern volatile __bit                   FVR1S1              __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 FVR1S1_bit          _BIT_ACCESS(REFCON0,5)
// REFCON0<FVR1ST>
extern volatile __bit                   FVR1ST              __at(0x7DD6);	// @ (0xFBA * 8 + 6)
#define                                 FVR1ST_bit          _BIT_ACCESS(REFCON0,6)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x7E2F);	// @ (0xFC5 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
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
// OSCCON2<HFIOFL>
extern volatile __bit                   HFIOFL              __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 HFIOFL_bit          _BIT_ACCESS(OSCCON2,1)
// UIE<IDLEIE>
extern volatile __bit                   IDLEIE              __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 IDLEIE_bit          _BIT_ACCESS(UIE,4)
// UIR<IDLEIF>
extern volatile __bit                   IDLEIF              __at(0x7B14);	// @ (0xF62 * 8 + 4)
#define                                 IDLEIF_bit          _BIT_ACCESS(UIR,4)
// OSCCON<IDLEN>
extern volatile __bit                   IDLEN               __at(0x7E9F);	// @ (0xFD3 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(OSCCON,7)
// PORTC<INT0>
extern volatile __bit                   INT0                __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 INT0_bit            _BIT_ACCESS(PORTC,0)
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
extern volatile __bit                   INT1                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 INT1_bit            _BIT_ACCESS(PORTC,1)
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
extern volatile __bit                   INT2                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 INT2_bit            _BIT_ACCESS(PORTC,2)
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
// OSCTUNE<INTSRC>
extern volatile __bit                   INTSRC              __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 INTSRC_bit          _BIT_ACCESS(OSCTUNE,7)
// IOCA<IOCA0>
extern volatile __bit                   IOCA0               __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 IOCA0_bit           _BIT_ACCESS(IOCA,0)
// IOCA<IOCA1>
extern volatile __bit                   IOCA1               __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 IOCA1_bit           _BIT_ACCESS(IOCA,1)
// IOCA<IOCA3>
extern volatile __bit                   IOCA3               __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 IOCA3_bit           _BIT_ACCESS(IOCA,3)
// IOCA<IOCA4>
extern volatile __bit                   IOCA4               __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 IOCA4_bit           _BIT_ACCESS(IOCA,4)
// IOCA<IOCA5>
extern volatile __bit                   IOCA5               __at(0x7BCD);	// @ (0xF79 * 8 + 5)
#define                                 IOCA5_bit           _BIT_ACCESS(IOCA,5)
// IOCB<IOCB4>
extern volatile __bit                   IOCB4               __at(0x7BD4);	// @ (0xF7A * 8 + 4)
#define                                 IOCB4_bit           _BIT_ACCESS(IOCB,4)
// IOCB<IOCB5>
extern volatile __bit                   IOCB5               __at(0x7BD5);	// @ (0xF7A * 8 + 5)
#define                                 IOCB5_bit           _BIT_ACCESS(IOCB,5)
// IOCB<IOCB6>
extern volatile __bit                   IOCB6               __at(0x7BD6);	// @ (0xF7A * 8 + 6)
#define                                 IOCB6_bit           _BIT_ACCESS(IOCB,6)
// IOCB<IOCB7>
extern volatile __bit                   IOCB7               __at(0x7BD7);	// @ (0xF7A * 8 + 7)
#define                                 IOCB7_bit           _BIT_ACCESS(IOCB,7)
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
// LATA<LA4>
extern volatile __bit                   LA4                 __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LA4_bit             _BIT_ACCESS(LATA,4)
// LATA<LA5>
extern volatile __bit                   LA5                 __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LA5_bit             _BIT_ACCESS(LATA,5)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
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
// OSCCON2<LFIOFS>
extern volatile __bit                   LFIOFS              __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 LFIOFS_bit          _BIT_ACCESS(OSCCON2,0)
// PORTA<LVDIN>
extern volatile __bit                   LVDIN               __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 LVDIN_bit           _BIT_ACCESS(PORTA,5)
// CM2CON1<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x7B67);	// @ (0xF6C * 8 + 7)
#define                                 MC1OUT_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 MC2OUT_bit          _BIT_ACCESS(CM2CON1,6)
// SSPMSK<MSK0>
extern volatile __bit                   MSK0                __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSPMSK,0)
// SSPMSK<MSK1>
extern volatile __bit                   MSK1                __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSPMSK,1)
// SSPMSK<MSK2>
extern volatile __bit                   MSK2                __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSPMSK,2)
// SSPMSK<MSK3>
extern volatile __bit                   MSK3                __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSPMSK,3)
// SSPMSK<MSK4>
extern volatile __bit                   MSK4                __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSPMSK,4)
// SSPMSK<MSK5>
extern volatile __bit                   MSK5                __at(0x7B7D);	// @ (0xF6F * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSPMSK,5)
// SSPMSK<MSK6>
extern volatile __bit                   MSK6                __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSPMSK,6)
// SSPMSK<MSK7>
extern volatile __bit                   MSK7                __at(0x7B7F);	// @ (0xF6F * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSPMSK,7)
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
// RCON<NOT_PD>
extern volatile __bit                   NOT_PD              __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 NOT_PD_bit          _BIT_ACCESS(RCON,2)
// RCON<NOT_POR>
extern volatile __bit                   NOT_POR             __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 NOT_POR_bit         _BIT_ACCESS(RCON,1)
// INTCON2<NOT_RABPU>
extern volatile __bit                   NOT_RABPU           __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 NOT_RABPU_bit       _BIT_ACCESS(INTCON2,7)
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// PORTC<NOT_SS>
extern volatile __bit                   NOT_SS              __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 NOT_SS_bit          _BIT_ACCESS(PORTC,6)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// T3CON<NOT_T3SYNC>
extern volatile __bit                   NOT_T3SYNC          __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 NOT_T3SYNC_bit      _BIT_ACCESS(T3CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// SSPSTAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSPSTAT,2)
// ADCON1<NVCFG0>
extern volatile __bit                   NVCFG0              __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 NVCFG0_bit          _BIT_ACCESS(ADCON1,0)
// ADCON1<NVCFG1>
extern volatile __bit                   NVCFG1              __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 NVCFG1_bit          _BIT_ACCESS(ADCON1,1)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// PORTA<OSC1>
extern volatile __bit                   OSC1                __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 OSC1_bit            _BIT_ACCESS(PORTA,5)
// PORTA<OSC2>
extern volatile __bit                   OSC2                __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 OSC2_bit            _BIT_ACCESS(PORTA,4)
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
// PORTC<P1A>
extern volatile __bit                   P1A                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 P1A_bit             _BIT_ACCESS(PORTC,5)
// PORTC<P1B>
extern volatile __bit                   P1B                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 P1B_bit             _BIT_ACCESS(PORTC,4)
// PORTC<P1C>
extern volatile __bit                   P1C                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 P1C_bit             _BIT_ACCESS(PORTC,3)
// PORTC<P1D>
extern volatile __bit                   P1D                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 P1D_bit             _BIT_ACCESS(PORTC,2)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// PORTC<PA1>
extern volatile __bit                   PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              _BIT_ACCESS(RCON,2)
// PWM1CON<PDC0>
extern volatile __bit                   PDC0                __at(0x7DB8);	// @ (0xFB7 * 8 + 0)
#define                                 PDC0_bit            _BIT_ACCESS(PWM1CON,0)
// PWM1CON<PDC1>
extern volatile __bit                   PDC1                __at(0x7DB9);	// @ (0xFB7 * 8 + 1)
#define                                 PDC1_bit            _BIT_ACCESS(PWM1CON,1)
// PWM1CON<PDC2>
extern volatile __bit                   PDC2                __at(0x7DBA);	// @ (0xFB7 * 8 + 2)
#define                                 PDC2_bit            _BIT_ACCESS(PWM1CON,2)
// PWM1CON<PDC3>
extern volatile __bit                   PDC3                __at(0x7DBB);	// @ (0xFB7 * 8 + 3)
#define                                 PDC3_bit            _BIT_ACCESS(PWM1CON,3)
// PWM1CON<PDC4>
extern volatile __bit                   PDC4                __at(0x7DBC);	// @ (0xFB7 * 8 + 4)
#define                                 PDC4_bit            _BIT_ACCESS(PWM1CON,4)
// PWM1CON<PDC5>
extern volatile __bit                   PDC5                __at(0x7DBD);	// @ (0xFB7 * 8 + 5)
#define                                 PDC5_bit            _BIT_ACCESS(PWM1CON,5)
// PWM1CON<PDC6>
extern volatile __bit                   PDC6                __at(0x7DBE);	// @ (0xFB7 * 8 + 6)
#define                                 PDC6_bit            _BIT_ACCESS(PWM1CON,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x7E2A);	// @ (0xFC5 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// PORTC<PGM>
extern volatile __bit                   PGM                 __at(0x7C13);	// @ (0xF82 * 8 + 3)
#define                                 PGM_bit             _BIT_ACCESS(PORTC,3)
// UEIE<PIDEE>
extern volatile __bit                   PIDEE               __at(0x7AD8);	// @ (0xF5B * 8 + 0)
#define                                 PIDEE_bit           _BIT_ACCESS(UEIE,0)
// UEIR<PIDEF>
extern volatile __bit                   PIDEF               __at(0x7AF8);	// @ (0xF5F * 8 + 0)
#define                                 PIDEF_bit           _BIT_ACCESS(UEIR,0)
// UCON<PKTDIS>
extern volatile __bit                   PKTDIS              __at(0x7B24);	// @ (0xF64 * 8 + 4)
#define                                 PKTDIS_bit          _BIT_ACCESS(UCON,4)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// UCFG<PPB0>
extern volatile __bit                   PPB0                __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 PPB0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<PPB1>
extern volatile __bit                   PPB1                __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 PPB1_bit            _BIT_ACCESS(UCFG,1)
// USTAT<PPBI>
extern volatile __bit                   PPBI                __at(0x7B19);	// @ (0xF63 * 8 + 1)
#define                                 PPBI_bit            _BIT_ACCESS(USTAT,1)
// UCON<PPBRST>
extern volatile __bit                   PPBRST              __at(0x7B26);	// @ (0xF64 * 8 + 6)
#define                                 PPBRST_bit          _BIT_ACCESS(UCON,6)
// OSCCON2<PRI_SD>
extern volatile __bit                   PRI_SD              __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 PRI_SD_bit          _BIT_ACCESS(OSCCON2,2)
// PWM1CON<PRSEN>
extern volatile __bit                   PRSEN               __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 PRSEN_bit           _BIT_ACCESS(PWM1CON,7)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// ECCP1AS<PSSAC0>
extern volatile __bit                   PSSAC0              __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 PSSAC0_bit          _BIT_ACCESS(ECCP1AS,2)
// ECCP1AS<PSSAC1>
extern volatile __bit                   PSSAC1              __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 PSSAC1_bit          _BIT_ACCESS(ECCP1AS,3)
// ECCP1AS<PSSBD0>
extern volatile __bit                   PSSBD0              __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 PSSBD0_bit          _BIT_ACCESS(ECCP1AS,0)
// ECCP1AS<PSSBD1>
extern volatile __bit                   PSSBD1              __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 PSSBD1_bit          _BIT_ACCESS(ECCP1AS,1)
// ADCON1<PVCFG0>
extern volatile __bit                   PVCFG0              __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 PVCFG0_bit          _BIT_ACCESS(ADCON1,2)
// ADCON1<PVCFG1>
extern volatile __bit                   PVCFG1              __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 PVCFG1_bit          _BIT_ACCESS(ADCON1,3)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit _DEPRECATED       RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit _DEPRECATED       RA5                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// INTCON<RABIE>
extern volatile __bit                   RABIE               __at(0x7F93);	// @ (0xFF2 * 8 + 3)
#define                                 RABIE_bit           _BIT_ACCESS(INTCON,3)
// INTCON<RABIF>
extern volatile __bit                   RABIF               __at(0x7F90);	// @ (0xFF2 * 8 + 0)
#define                                 RABIF_bit           _BIT_ACCESS(INTCON,0)
// INTCON2<RABIP>
extern volatile __bit                   RABIP               __at(0x7F88);	// @ (0xFF1 * 8 + 0)
#define                                 RABIP_bit           _BIT_ACCESS(INTCON2,0)
// INTCON2<RABPU>
extern volatile __bit                   RABPU               __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 RABPU_bit           _BIT_ACCESS(INTCON2,7)
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
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
// BAUDCON<RCIDL>
extern volatile __bit                   RCIDL               __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
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
// EECON1<RD>
extern volatile __bit                   RD                  __at(0x7D30);	// @ (0xFA6 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 RD163_bit           _BIT_ACCESS(T3CON,7)
// UCON<RESUME>
extern volatile __bit                   RESUME              __at(0x7B22);	// @ (0xF64 * 8 + 2)
#define                                 RESUME_bit          _BIT_ACCESS(UCON,2)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// SSPSTAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSPSTAT,2)
// PORTB<RX>
extern volatile __bit                   RX                  __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 RX_bit              _BIT_ACCESS(PORTB,5)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// BAUDCON<RXCKP>
extern volatile __bit                   RXCKP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 RXCKP_bit           _BIT_ACCESS(BAUDCON,5)
// SSPSTAT<R_NOT_W>
extern volatile __bit                   R_NOT_W             __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_NOT_W_bit         _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_W>
extern volatile __bit                   R_W                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// RCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x7E86);	// @ (0xFD0 * 8 + 6)
#define                                 SBOREN_bit          _BIT_ACCESS(RCON,6)
// PORTB<SCK>
extern volatile __bit                   SCK                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 SCK_bit             _BIT_ACCESS(PORTB,6)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// PORTB<SCL>
extern volatile __bit                   SCL                 __at(0x7C0E);	// @ (0xF81 * 8 + 6)
#define                                 SCL_bit             _BIT_ACCESS(PORTB,6)
// OSCCON<SCS>
extern volatile __bit                   SCS                 __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS_bit             _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// PORTB<SDA>
extern volatile __bit                   SDA                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 SDA_bit             _BIT_ACCESS(PORTB,4)
// PORTB<SDI>
extern volatile __bit                   SDI                 __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 SDI_bit             _BIT_ACCESS(PORTB,4)
// PORTC<SDO>
extern volatile __bit                   SDO                 __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 SDO_bit             _BIT_ACCESS(PORTC,7)
// UCON<SE0>
extern volatile __bit                   SE0                 __at(0x7B25);	// @ (0xF64 * 8 + 5)
#define                                 SE0_bit             _BIT_ACCESS(UCON,5)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x7E28);	// @ (0xFC5 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// TXSTA<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA,3)
// SLRCON<SLRA>
extern volatile __bit                   SLRA                __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 SLRA_bit            _BIT_ACCESS(SLRCON,0)
// SLRCON<SLRB>
extern volatile __bit                   SLRB                __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 SLRB_bit            _BIT_ACCESS(SLRCON,1)
// SLRCON<SLRC>
extern volatile __bit                   SLRC                __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 SLRC_bit            _BIT_ACCESS(SLRCON,2)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// UIE<SOFIE>
extern volatile __bit                   SOFIE               __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 SOFIE_bit           _BIT_ACCESS(UIE,6)
// UIR<SOFIF>
extern volatile __bit                   SOFIF               __at(0x7B16);	// @ (0xF62 * 8 + 6)
#define                                 SOFIF_bit           _BIT_ACCESS(UIR,6)
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
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// OSCTUNE<SPLLEN>
extern volatile __bit                   SPLLEN              __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 SPLLEN_bit          _BIT_ACCESS(OSCTUNE,6)
// SRCON0<SRCLK0>
extern volatile __bit                   SRCLK0              __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 SRCLK0_bit          _BIT_ACCESS(SRCON0,4)
// SRCON0<SRCLK1>
extern volatile __bit                   SRCLK1              __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 SRCLK1_bit          _BIT_ACCESS(SRCON0,5)
// SRCON0<SRCLK2>
extern volatile __bit                   SRCLK2              __at(0x7B46);	// @ (0xF68 * 8 + 6)
#define                                 SRCLK2_bit          _BIT_ACCESS(SRCON0,6)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// RCSTA<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA,5)
// SRCON0<SRLEN>
extern volatile __bit                   SRLEN               __at(0x7B47);	// @ (0xF68 * 8 + 7)
#define                                 SRLEN_bit           _BIT_ACCESS(SRCON0,7)
// SRCON0<SRNQEN>
extern volatile __bit                   SRNQEN              __at(0x7B42);	// @ (0xF68 * 8 + 2)
#define                                 SRNQEN_bit          _BIT_ACCESS(SRCON0,2)
// SRCON0<SRPR>
extern volatile __bit                   SRPR                __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 SRPR_bit            _BIT_ACCESS(SRCON0,0)
// SRCON0<SRPS>
extern volatile __bit                   SRPS                __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 SRPS_bit            _BIT_ACCESS(SRCON0,1)
// PORTC<SRQ>
extern volatile __bit                   SRQ                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 SRQ_bit             _BIT_ACCESS(PORTC,4)
// SRCON0<SRQEN>
extern volatile __bit                   SRQEN               __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 SRQEN_bit           _BIT_ACCESS(SRCON0,3)
// SRCON1<SRRC1E>
extern volatile __bit                   SRRC1E              __at(0x7B48);	// @ (0xF69 * 8 + 0)
#define                                 SRRC1E_bit          _BIT_ACCESS(SRCON1,0)
// SRCON1<SRRC2E>
extern volatile __bit                   SRRC2E              __at(0x7B49);	// @ (0xF69 * 8 + 1)
#define                                 SRRC2E_bit          _BIT_ACCESS(SRCON1,1)
// SRCON1<SRRCKE>
extern volatile __bit                   SRRCKE              __at(0x7B4A);	// @ (0xF69 * 8 + 2)
#define                                 SRRCKE_bit          _BIT_ACCESS(SRCON1,2)
// SRCON1<SRRPE>
extern volatile __bit                   SRRPE               __at(0x7B4B);	// @ (0xF69 * 8 + 3)
#define                                 SRRPE_bit           _BIT_ACCESS(SRCON1,3)
// SRCON1<SRSC1E>
extern volatile __bit                   SRSC1E              __at(0x7B4C);	// @ (0xF69 * 8 + 4)
#define                                 SRSC1E_bit          _BIT_ACCESS(SRCON1,4)
// SRCON1<SRSC2E>
extern volatile __bit                   SRSC2E              __at(0x7B4D);	// @ (0xF69 * 8 + 5)
#define                                 SRSC2E_bit          _BIT_ACCESS(SRCON1,5)
// SRCON1<SRSCKE>
extern volatile __bit                   SRSCKE              __at(0x7B4E);	// @ (0xF69 * 8 + 6)
#define                                 SRSCKE_bit          _BIT_ACCESS(SRCON1,6)
// SRCON1<SRSPE>
extern volatile __bit                   SRSPE               __at(0x7B4F);	// @ (0xF69 * 8 + 7)
#define                                 SRSPE_bit           _BIT_ACCESS(SRCON1,7)
// PORTC<SS>
extern volatile __bit                   SS                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 SS_bit              _BIT_ACCESS(PORTC,6)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x7E35);	// @ (0xFC6 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,3)
// IPR1<SSPIP>
extern volatile __bit                   SSPIP               __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSPIP_bit           _BIT_ACCESS(IPR1,3)
// SSPCON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x7E30);	// @ (0xFC6 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON1,0)
// SSPCON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON1,1)
// SSPCON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON1,2)
// SSPCON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON1,6)
// UIE<STALLIE>
extern volatile __bit                   STALLIE             __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 STALLIE_bit         _BIT_ACCESS(UIE,5)
// UIR<STALLIF>
extern volatile __bit                   STALLIF             __at(0x7B15);	// @ (0xF62 * 8 + 5)
#define                                 STALLIF_bit         _BIT_ACCESS(UIR,5)
// SSPSTAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSPSTAT,3)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// SSPSTAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSPSTAT,4)
// PSTRCON<STRA>
extern volatile __bit                   STRA                __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(PSTRCON,0)
// PSTRCON<STRB>
extern volatile __bit                   STRB                __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(PSTRCON,1)
// PSTRCON<STRC>
extern volatile __bit                   STRC                __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(PSTRCON,2)
// PSTRCON<STRD>
extern volatile __bit                   STRD                __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(PSTRCON,3)
// PSTRCON<STRSYNC>
extern volatile __bit                   STRSYNC             __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 STRSYNC_bit         _BIT_ACCESS(PSTRCON,4)
// UCON<SUSPND>
extern volatile __bit                   SUSPND              __at(0x7B21);	// @ (0xF64 * 8 + 1)
#define                                 SUSPND_bit          _BIT_ACCESS(UCON,1)
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// TXSTA<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA,4)
// T0CON<T08BIT>
extern volatile __bit                   T08BIT              __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T08BIT_bit          _BIT_ACCESS(T0CON,6)
// PORTC<T0CKI>
extern volatile __bit                   T0CKI               __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTC,5)
// T0CON<T0CS>
extern volatile __bit                   T0CS                __at(0x7EAD);	// @ (0xFD5 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(T0CON,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x7F95);	// @ (0xFF2 * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x7F92);	// @ (0xFF2 * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
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
extern volatile __bit                   T13CKI              __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 T13CKI_bit          _BIT_ACCESS(PORTC,6)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// PORTC<T1OSCI>
extern volatile __bit                   T1OSCI              __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 T1OSCI_bit          _BIT_ACCESS(PORTC,6)
// PORTC<T1OSCO>
extern volatile __bit                   T1OSCO              __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 T1OSCO_bit          _BIT_ACCESS(PORTC,7)
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
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 T3RD16_bit          _BIT_ACCESS(T3CON,7)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
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
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x7C94);	// @ (0xF92 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x7C95);	// @ (0xF92 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
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
// UIE<TRNIE>
extern volatile __bit                   TRNIE               __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 TRNIE_bit           _BIT_ACCESS(UIE,3)
// UIR<TRNIF>
extern volatile __bit                   TRNIF               __at(0x7B13);	// @ (0xF62 * 8 + 3)
#define                                 TRNIF_bit           _BIT_ACCESS(UIR,3)
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
// PORTB<TX>
extern volatile __bit                   TX                  __at(0x7C0F);	// @ (0xF81 * 8 + 7)
#define                                 TX_bit              _BIT_ACCESS(PORTB,7)
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
// UIE<UERRIE>
extern volatile __bit                   UERRIE              __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 UERRIE_bit          _BIT_ACCESS(UIE,1)
// UIR<UERRIF>
extern volatile __bit                   UERRIF              __at(0x7B11);	// @ (0xF62 * 8 + 1)
#define                                 UERRIF_bit          _BIT_ACCESS(UIR,1)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// UCFG<UPP0>
extern volatile __bit                   UPP0                __at(0x7B08);	// @ (0xF61 * 8 + 0)
#define                                 UPP0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<UPP1>
extern volatile __bit                   UPP1                __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 UPP1_bit            _BIT_ACCESS(UCFG,1)
// UCFG<UPUEN>
extern volatile __bit                   UPUEN               __at(0x7B0C);	// @ (0xF61 * 8 + 4)
#define                                 UPUEN_bit           _BIT_ACCESS(UCFG,4)
// UIE<URSTIE>
extern volatile __bit                   URSTIE              __at(0x7B00);	// @ (0xF60 * 8 + 0)
#define                                 URSTIE_bit          _BIT_ACCESS(UIE,0)
// UIR<URSTIF>
extern volatile __bit                   URSTIF              __at(0x7B10);	// @ (0xF62 * 8 + 0)
#define                                 URSTIF_bit          _BIT_ACCESS(UIR,0)
// UCON<USBEN>
extern volatile __bit                   USBEN               __at(0x7B23);	// @ (0xF64 * 8 + 3)
#define                                 USBEN_bit           _BIT_ACCESS(UCON,3)
// PIE2<USBIE>
extern volatile __bit                   USBIE               __at(0x7D02);	// @ (0xFA0 * 8 + 2)
#define                                 USBIE_bit           _BIT_ACCESS(PIE2,2)
// PIR2<USBIF>
extern volatile __bit                   USBIF               __at(0x7D0A);	// @ (0xFA1 * 8 + 2)
#define                                 USBIF_bit           _BIT_ACCESS(PIR2,2)
// IPR2<USBIP>
extern volatile __bit                   USBIP               __at(0x7D12);	// @ (0xFA2 * 8 + 2)
#define                                 USBIP_bit           _BIT_ACCESS(IPR2,2)
// UCFG<UTEYE>
extern volatile __bit                   UTEYE               __at(0x7B0F);	// @ (0xF61 * 8 + 7)
#define                                 UTEYE_bit           _BIT_ACCESS(UCFG,7)
// PORTC<VREFM>
extern volatile __bit                   VREFM               __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 VREFM_bit           _BIT_ACCESS(PORTC,1)
// PORTC<VREFP>
extern volatile __bit                   VREFP               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 VREFP_bit           _BIT_ACCESS(PORTC,0)
// BAUDCON<W4E>
extern volatile __bit                   W4E                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON,1)
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(PR2,4)
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(PR2,5)
// SSPCON1<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON1,7)
// PR2<WM0>
extern volatile __bit                   WM0                 __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 WM0_bit             _BIT_ACCESS(PR2,0)
// PR2<WM1>
extern volatile __bit                   WM1                 __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 WM1_bit             _BIT_ACCESS(PR2,1)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x7BBB);	// @ (0xF77 * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0x7BBC);	// @ (0xF77 * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPUA,4)
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x7BBD);	// @ (0xF77 * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUA,5)
// WPUB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUB,4)
// WPUB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x7BC5);	// @ (0xF78 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUB,5)
// WPUB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x7BC6);	// @ (0xF78 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUB,6)
// WPUB<WPUB7>
extern volatile __bit                   WPUB7               __at(0x7BC7);	// @ (0xF78 * 8 + 7)
#define                                 WPUB7_bit           _BIT_ACCESS(WPUB,7)
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
extern volatile __bit                   WUE                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
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
// RCON<nPD>
extern volatile __bit                   nPD                 __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 nPD_bit             _BIT_ACCESS(RCON,2)
// RCON<nPOR>
extern volatile __bit                   nPOR                __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(RCON,1)
// INTCON2<nRABPU>
extern volatile __bit                   nRABPU              __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 nRABPU_bit          _BIT_ACCESS(INTCON2,7)
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// PORTC<nSS>
extern volatile __bit                   nSS                 __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 nSS_bit             _BIT_ACCESS(PORTC,6)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 nT3SYNC_bit         _BIT_ACCESS(T3CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// SSPSTAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSPSTAT,2)
// SSPSTAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSPSTAT,2)

#endif // _PIC18F13K50_H_
