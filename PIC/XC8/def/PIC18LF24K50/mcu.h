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

#ifndef _PIC18LF24K50_H_
#define _PIC18LF24K50_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18LF24K50
 */
#ifndef _XC_H_
#warning Header file pic18lf24k50.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: SRCON1
#define SRCON1 SRCON1
extern volatile unsigned char           SRCON1              __at(0xF57);
#ifndef _LIB_BUILD
asm("SRCON1 equ 0F57h");
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
extern volatile SRCON1bits_t SRCON1bits __at(0xF57);
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

// Register: SRCON0
#define SRCON0 SRCON0
extern volatile unsigned char           SRCON0              __at(0xF58);
#ifndef _LIB_BUILD
asm("SRCON0 equ 0F58h");
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
extern volatile SRCON0bits_t SRCON0bits __at(0xF58);
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

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
extern volatile unsigned char           CCPTMRS             __at(0xF59);
#ifndef _LIB_BUILD
asm("CCPTMRS equ 0F59h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1TSEL                 :1;
        unsigned                        :2;
        unsigned C2TSEL                 :1;
    };
} CCPTMRSbits_t;
extern volatile CCPTMRSbits_t CCPTMRSbits __at(0xF59);
// bitfield macros
#define _CCPTMRS_C1TSEL_POSN                                0x0
#define _CCPTMRS_C1TSEL_POSITION                            0x0
#define _CCPTMRS_C1TSEL_SIZE                                0x1
#define _CCPTMRS_C1TSEL_LENGTH                              0x1
#define _CCPTMRS_C1TSEL_MASK                                0x1
#define _CCPTMRS_C2TSEL_POSN                                0x3
#define _CCPTMRS_C2TSEL_POSITION                            0x3
#define _CCPTMRS_C2TSEL_SIZE                                0x1
#define _CCPTMRS_C2TSEL_LENGTH                              0x1
#define _CCPTMRS_C2TSEL_MASK                                0x8

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0xF5B);
#ifndef _LIB_BUILD
asm("ANSELA equ 0F5Bh");
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
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0xF5B);
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

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0xF5C);
#ifndef _LIB_BUILD
asm("ANSELB equ 0F5Ch");
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
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0xF5C);
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

// Register: ANSELC
#define ANSELC ANSELC
extern volatile unsigned char           ANSELC              __at(0xF5D);
#ifndef _LIB_BUILD
asm("ANSELC equ 0F5Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned ANSC2                  :1;
        unsigned                        :3;
        unsigned ANSC6                  :1;
        unsigned ANSC7                  :1;
    };
} ANSELCbits_t;
extern volatile ANSELCbits_t ANSELCbits __at(0xF5D);
// bitfield macros
#define _ANSELC_ANSC2_POSN                                  0x2
#define _ANSELC_ANSC2_POSITION                              0x2
#define _ANSELC_ANSC2_SIZE                                  0x1
#define _ANSELC_ANSC2_LENGTH                                0x1
#define _ANSELC_ANSC2_MASK                                  0x4
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

// Register: UCON
#define UCON UCON
extern volatile unsigned char           UCON                __at(0xF60);
#ifndef _LIB_BUILD
asm("UCON equ 0F60h");
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
extern volatile UCONbits_t UCONbits __at(0xF60);
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

// Register: USTAT
#define USTAT USTAT
extern volatile unsigned char           USTAT               __at(0xF61);
#ifndef _LIB_BUILD
asm("USTAT equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned PPBI                   :1;
        unsigned DIR                    :1;
        unsigned ENDP                   :4;
    };
    struct {
        unsigned                        :3;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
        unsigned ENDP2                  :1;
        unsigned ENDP3                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits __at(0xF61);
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
#define _USTAT_ENDP_POSN                                    0x3
#define _USTAT_ENDP_POSITION                                0x3
#define _USTAT_ENDP_SIZE                                    0x4
#define _USTAT_ENDP_LENGTH                                  0x4
#define _USTAT_ENDP_MASK                                    0x78
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

// Register: UCFG
#define UCFG UCFG
extern volatile unsigned char           UCFG                __at(0xF62);
#ifndef _LIB_BUILD
asm("UCFG equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPB                    :2;
        unsigned FSEN                   :1;
        unsigned UTRDIS                 :1;
        unsigned UPUEN                  :1;
        unsigned                        :1;
        unsigned UOEMON                 :1;
        unsigned UTEYE                  :1;
    };
    struct {
        unsigned PPB0                   :1;
        unsigned PPB1                   :1;
    };
    struct {
        unsigned UPP0                   :1;
        unsigned UPP1                   :1;
    };
} UCFGbits_t;
extern volatile UCFGbits_t UCFGbits __at(0xF62);
// bitfield macros
#define _UCFG_PPB_POSN                                      0x0
#define _UCFG_PPB_POSITION                                  0x0
#define _UCFG_PPB_SIZE                                      0x2
#define _UCFG_PPB_LENGTH                                    0x2
#define _UCFG_PPB_MASK                                      0x3
#define _UCFG_FSEN_POSN                                     0x2
#define _UCFG_FSEN_POSITION                                 0x2
#define _UCFG_FSEN_SIZE                                     0x1
#define _UCFG_FSEN_LENGTH                                   0x1
#define _UCFG_FSEN_MASK                                     0x4
#define _UCFG_UTRDIS_POSN                                   0x3
#define _UCFG_UTRDIS_POSITION                               0x3
#define _UCFG_UTRDIS_SIZE                                   0x1
#define _UCFG_UTRDIS_LENGTH                                 0x1
#define _UCFG_UTRDIS_MASK                                   0x8
#define _UCFG_UPUEN_POSN                                    0x4
#define _UCFG_UPUEN_POSITION                                0x4
#define _UCFG_UPUEN_SIZE                                    0x1
#define _UCFG_UPUEN_LENGTH                                  0x1
#define _UCFG_UPUEN_MASK                                    0x10
#define _UCFG_UOEMON_POSN                                   0x6
#define _UCFG_UOEMON_POSITION                               0x6
#define _UCFG_UOEMON_SIZE                                   0x1
#define _UCFG_UOEMON_LENGTH                                 0x1
#define _UCFG_UOEMON_MASK                                   0x40
#define _UCFG_UTEYE_POSN                                    0x7
#define _UCFG_UTEYE_POSITION                                0x7
#define _UCFG_UTEYE_SIZE                                    0x1
#define _UCFG_UTEYE_LENGTH                                  0x1
#define _UCFG_UTEYE_MASK                                    0x80
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

// Register: UADDR
#define UADDR UADDR
extern volatile unsigned char           UADDR               __at(0xF63);
#ifndef _LIB_BUILD
asm("UADDR equ 0F63h");
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
extern volatile UADDRbits_t UADDRbits __at(0xF63);
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

// Register: UIE
#define UIE UIE
extern volatile unsigned char           UIE                 __at(0xF64);
#ifndef _LIB_BUILD
asm("UIE equ 0F64h");
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
extern volatile UIEbits_t UIEbits __at(0xF64);
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

// Register: UIR
#define UIR UIR
extern volatile unsigned char           UIR                 __at(0xF65);
#ifndef _LIB_BUILD
asm("UIR equ 0F65h");
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
extern volatile UIRbits_t UIRbits __at(0xF65);
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

// Register: UEIE
#define UEIE UEIE
extern volatile unsigned char           UEIE                __at(0xF66);
#ifndef _LIB_BUILD
asm("UEIE equ 0F66h");
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
extern volatile UEIEbits_t UEIEbits __at(0xF66);
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

// Register: UEIR
#define UEIR UEIR
extern volatile unsigned char           UEIR                __at(0xF67);
#ifndef _LIB_BUILD
asm("UEIR equ 0F67h");
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
extern volatile UEIRbits_t UEIRbits __at(0xF67);
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

// Register: UFRM
#define UFRM UFRM
extern volatile unsigned short          UFRM                __at(0xF68);
#ifndef _LIB_BUILD
asm("UFRM equ 0F68h");
#endif

// Register: UFRML
#define UFRML UFRML
extern volatile unsigned char           UFRML               __at(0xF68);
#ifndef _LIB_BUILD
asm("UFRML equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM                    :8;
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
    struct {
        unsigned FRML                   :8;
    };
} UFRMLbits_t;
extern volatile UFRMLbits_t UFRMLbits __at(0xF68);
// bitfield macros
#define _UFRML_FRM_POSN                                     0x0
#define _UFRML_FRM_POSITION                                 0x0
#define _UFRML_FRM_SIZE                                     0x8
#define _UFRML_FRM_LENGTH                                   0x8
#define _UFRML_FRM_MASK                                     0xFF
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
#define _UFRML_FRML_POSN                                    0x0
#define _UFRML_FRML_POSITION                                0x0
#define _UFRML_FRML_SIZE                                    0x8
#define _UFRML_FRML_LENGTH                                  0x8
#define _UFRML_FRML_MASK                                    0xFF

// Register: UFRMH
#define UFRMH UFRMH
extern volatile unsigned char           UFRMH               __at(0xF69);
#ifndef _LIB_BUILD
asm("UFRMH equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM                    :3;
    };
    struct {
        unsigned FRM8                   :1;
        unsigned FRM9                   :1;
        unsigned FRM10                  :1;
    };
} UFRMHbits_t;
extern volatile UFRMHbits_t UFRMHbits __at(0xF69);
// bitfield macros
#define _UFRMH_FRM_POSN                                     0x0
#define _UFRMH_FRM_POSITION                                 0x0
#define _UFRMH_FRM_SIZE                                     0x3
#define _UFRMH_FRM_LENGTH                                   0x3
#define _UFRMH_FRM_MASK                                     0x7
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

// Register: UEP0
#define UEP0 UEP0
extern volatile unsigned char           UEP0                __at(0xF6A);
#ifndef _LIB_BUILD
asm("UEP0 equ 0F6Ah");
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
extern volatile UEP0bits_t UEP0bits __at(0xF6A);
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
extern volatile unsigned char           UEP1                __at(0xF6B);
#ifndef _LIB_BUILD
asm("UEP1 equ 0F6Bh");
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
extern volatile UEP1bits_t UEP1bits __at(0xF6B);
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
extern volatile unsigned char           UEP2                __at(0xF6C);
#ifndef _LIB_BUILD
asm("UEP2 equ 0F6Ch");
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
extern volatile UEP2bits_t UEP2bits __at(0xF6C);
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
extern volatile unsigned char           UEP3                __at(0xF6D);
#ifndef _LIB_BUILD
asm("UEP3 equ 0F6Dh");
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
extern volatile UEP3bits_t UEP3bits __at(0xF6D);
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
extern volatile unsigned char           UEP4                __at(0xF6E);
#ifndef _LIB_BUILD
asm("UEP4 equ 0F6Eh");
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
extern volatile UEP4bits_t UEP4bits __at(0xF6E);
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
extern volatile unsigned char           UEP5                __at(0xF6F);
#ifndef _LIB_BUILD
asm("UEP5 equ 0F6Fh");
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
extern volatile UEP5bits_t UEP5bits __at(0xF6F);
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
extern volatile unsigned char           UEP6                __at(0xF70);
#ifndef _LIB_BUILD
asm("UEP6 equ 0F70h");
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
extern volatile UEP6bits_t UEP6bits __at(0xF70);
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
extern volatile unsigned char           UEP7                __at(0xF71);
#ifndef _LIB_BUILD
asm("UEP7 equ 0F71h");
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
extern volatile UEP7bits_t UEP7bits __at(0xF71);
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

// Register: UEP8
#define UEP8 UEP8
extern volatile unsigned char           UEP8                __at(0xF72);
#ifndef _LIB_BUILD
asm("UEP8 equ 0F72h");
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
        unsigned EPSTALL8               :1;
        unsigned EPINEN8                :1;
        unsigned EPOUTEN8               :1;
        unsigned EPCONDIS8              :1;
        unsigned EPHSHK8                :1;
    };
} UEP8bits_t;
extern volatile UEP8bits_t UEP8bits __at(0xF72);
// bitfield macros
#define _UEP8_EPSTALL_POSN                                  0x0
#define _UEP8_EPSTALL_POSITION                              0x0
#define _UEP8_EPSTALL_SIZE                                  0x1
#define _UEP8_EPSTALL_LENGTH                                0x1
#define _UEP8_EPSTALL_MASK                                  0x1
#define _UEP8_EPINEN_POSN                                   0x1
#define _UEP8_EPINEN_POSITION                               0x1
#define _UEP8_EPINEN_SIZE                                   0x1
#define _UEP8_EPINEN_LENGTH                                 0x1
#define _UEP8_EPINEN_MASK                                   0x2
#define _UEP8_EPOUTEN_POSN                                  0x2
#define _UEP8_EPOUTEN_POSITION                              0x2
#define _UEP8_EPOUTEN_SIZE                                  0x1
#define _UEP8_EPOUTEN_LENGTH                                0x1
#define _UEP8_EPOUTEN_MASK                                  0x4
#define _UEP8_EPCONDIS_POSN                                 0x3
#define _UEP8_EPCONDIS_POSITION                             0x3
#define _UEP8_EPCONDIS_SIZE                                 0x1
#define _UEP8_EPCONDIS_LENGTH                               0x1
#define _UEP8_EPCONDIS_MASK                                 0x8
#define _UEP8_EPHSHK_POSN                                   0x4
#define _UEP8_EPHSHK_POSITION                               0x4
#define _UEP8_EPHSHK_SIZE                                   0x1
#define _UEP8_EPHSHK_LENGTH                                 0x1
#define _UEP8_EPHSHK_MASK                                   0x10
#define _UEP8_EPSTALL8_POSN                                 0x0
#define _UEP8_EPSTALL8_POSITION                             0x0
#define _UEP8_EPSTALL8_SIZE                                 0x1
#define _UEP8_EPSTALL8_LENGTH                               0x1
#define _UEP8_EPSTALL8_MASK                                 0x1
#define _UEP8_EPINEN8_POSN                                  0x1
#define _UEP8_EPINEN8_POSITION                              0x1
#define _UEP8_EPINEN8_SIZE                                  0x1
#define _UEP8_EPINEN8_LENGTH                                0x1
#define _UEP8_EPINEN8_MASK                                  0x2
#define _UEP8_EPOUTEN8_POSN                                 0x2
#define _UEP8_EPOUTEN8_POSITION                             0x2
#define _UEP8_EPOUTEN8_SIZE                                 0x1
#define _UEP8_EPOUTEN8_LENGTH                               0x1
#define _UEP8_EPOUTEN8_MASK                                 0x4
#define _UEP8_EPCONDIS8_POSN                                0x3
#define _UEP8_EPCONDIS8_POSITION                            0x3
#define _UEP8_EPCONDIS8_SIZE                                0x1
#define _UEP8_EPCONDIS8_LENGTH                              0x1
#define _UEP8_EPCONDIS8_MASK                                0x8
#define _UEP8_EPHSHK8_POSN                                  0x4
#define _UEP8_EPHSHK8_POSITION                              0x4
#define _UEP8_EPHSHK8_SIZE                                  0x1
#define _UEP8_EPHSHK8_LENGTH                                0x1
#define _UEP8_EPHSHK8_MASK                                  0x10

// Register: UEP9
#define UEP9 UEP9
extern volatile unsigned char           UEP9                __at(0xF73);
#ifndef _LIB_BUILD
asm("UEP9 equ 0F73h");
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
        unsigned EPSTALL9               :1;
        unsigned EPINEN9                :1;
        unsigned EPOUTEN9               :1;
        unsigned EPCONDIS9              :1;
        unsigned EPHSHK9                :1;
    };
} UEP9bits_t;
extern volatile UEP9bits_t UEP9bits __at(0xF73);
// bitfield macros
#define _UEP9_EPSTALL_POSN                                  0x0
#define _UEP9_EPSTALL_POSITION                              0x0
#define _UEP9_EPSTALL_SIZE                                  0x1
#define _UEP9_EPSTALL_LENGTH                                0x1
#define _UEP9_EPSTALL_MASK                                  0x1
#define _UEP9_EPINEN_POSN                                   0x1
#define _UEP9_EPINEN_POSITION                               0x1
#define _UEP9_EPINEN_SIZE                                   0x1
#define _UEP9_EPINEN_LENGTH                                 0x1
#define _UEP9_EPINEN_MASK                                   0x2
#define _UEP9_EPOUTEN_POSN                                  0x2
#define _UEP9_EPOUTEN_POSITION                              0x2
#define _UEP9_EPOUTEN_SIZE                                  0x1
#define _UEP9_EPOUTEN_LENGTH                                0x1
#define _UEP9_EPOUTEN_MASK                                  0x4
#define _UEP9_EPCONDIS_POSN                                 0x3
#define _UEP9_EPCONDIS_POSITION                             0x3
#define _UEP9_EPCONDIS_SIZE                                 0x1
#define _UEP9_EPCONDIS_LENGTH                               0x1
#define _UEP9_EPCONDIS_MASK                                 0x8
#define _UEP9_EPHSHK_POSN                                   0x4
#define _UEP9_EPHSHK_POSITION                               0x4
#define _UEP9_EPHSHK_SIZE                                   0x1
#define _UEP9_EPHSHK_LENGTH                                 0x1
#define _UEP9_EPHSHK_MASK                                   0x10
#define _UEP9_EPSTALL9_POSN                                 0x0
#define _UEP9_EPSTALL9_POSITION                             0x0
#define _UEP9_EPSTALL9_SIZE                                 0x1
#define _UEP9_EPSTALL9_LENGTH                               0x1
#define _UEP9_EPSTALL9_MASK                                 0x1
#define _UEP9_EPINEN9_POSN                                  0x1
#define _UEP9_EPINEN9_POSITION                              0x1
#define _UEP9_EPINEN9_SIZE                                  0x1
#define _UEP9_EPINEN9_LENGTH                                0x1
#define _UEP9_EPINEN9_MASK                                  0x2
#define _UEP9_EPOUTEN9_POSN                                 0x2
#define _UEP9_EPOUTEN9_POSITION                             0x2
#define _UEP9_EPOUTEN9_SIZE                                 0x1
#define _UEP9_EPOUTEN9_LENGTH                               0x1
#define _UEP9_EPOUTEN9_MASK                                 0x4
#define _UEP9_EPCONDIS9_POSN                                0x3
#define _UEP9_EPCONDIS9_POSITION                            0x3
#define _UEP9_EPCONDIS9_SIZE                                0x1
#define _UEP9_EPCONDIS9_LENGTH                              0x1
#define _UEP9_EPCONDIS9_MASK                                0x8
#define _UEP9_EPHSHK9_POSN                                  0x4
#define _UEP9_EPHSHK9_POSITION                              0x4
#define _UEP9_EPHSHK9_SIZE                                  0x1
#define _UEP9_EPHSHK9_LENGTH                                0x1
#define _UEP9_EPHSHK9_MASK                                  0x10

// Register: UEP10
#define UEP10 UEP10
extern volatile unsigned char           UEP10               __at(0xF74);
#ifndef _LIB_BUILD
asm("UEP10 equ 0F74h");
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
        unsigned EPSTALL10              :1;
        unsigned EPINEN10               :1;
        unsigned EPOUTEN10              :1;
        unsigned EPCONDIS10             :1;
        unsigned EPHSHK10               :1;
    };
} UEP10bits_t;
extern volatile UEP10bits_t UEP10bits __at(0xF74);
// bitfield macros
#define _UEP10_EPSTALL_POSN                                 0x0
#define _UEP10_EPSTALL_POSITION                             0x0
#define _UEP10_EPSTALL_SIZE                                 0x1
#define _UEP10_EPSTALL_LENGTH                               0x1
#define _UEP10_EPSTALL_MASK                                 0x1
#define _UEP10_EPINEN_POSN                                  0x1
#define _UEP10_EPINEN_POSITION                              0x1
#define _UEP10_EPINEN_SIZE                                  0x1
#define _UEP10_EPINEN_LENGTH                                0x1
#define _UEP10_EPINEN_MASK                                  0x2
#define _UEP10_EPOUTEN_POSN                                 0x2
#define _UEP10_EPOUTEN_POSITION                             0x2
#define _UEP10_EPOUTEN_SIZE                                 0x1
#define _UEP10_EPOUTEN_LENGTH                               0x1
#define _UEP10_EPOUTEN_MASK                                 0x4
#define _UEP10_EPCONDIS_POSN                                0x3
#define _UEP10_EPCONDIS_POSITION                            0x3
#define _UEP10_EPCONDIS_SIZE                                0x1
#define _UEP10_EPCONDIS_LENGTH                              0x1
#define _UEP10_EPCONDIS_MASK                                0x8
#define _UEP10_EPHSHK_POSN                                  0x4
#define _UEP10_EPHSHK_POSITION                              0x4
#define _UEP10_EPHSHK_SIZE                                  0x1
#define _UEP10_EPHSHK_LENGTH                                0x1
#define _UEP10_EPHSHK_MASK                                  0x10
#define _UEP10_EPSTALL10_POSN                               0x0
#define _UEP10_EPSTALL10_POSITION                           0x0
#define _UEP10_EPSTALL10_SIZE                               0x1
#define _UEP10_EPSTALL10_LENGTH                             0x1
#define _UEP10_EPSTALL10_MASK                               0x1
#define _UEP10_EPINEN10_POSN                                0x1
#define _UEP10_EPINEN10_POSITION                            0x1
#define _UEP10_EPINEN10_SIZE                                0x1
#define _UEP10_EPINEN10_LENGTH                              0x1
#define _UEP10_EPINEN10_MASK                                0x2
#define _UEP10_EPOUTEN10_POSN                               0x2
#define _UEP10_EPOUTEN10_POSITION                           0x2
#define _UEP10_EPOUTEN10_SIZE                               0x1
#define _UEP10_EPOUTEN10_LENGTH                             0x1
#define _UEP10_EPOUTEN10_MASK                               0x4
#define _UEP10_EPCONDIS10_POSN                              0x3
#define _UEP10_EPCONDIS10_POSITION                          0x3
#define _UEP10_EPCONDIS10_SIZE                              0x1
#define _UEP10_EPCONDIS10_LENGTH                            0x1
#define _UEP10_EPCONDIS10_MASK                              0x8
#define _UEP10_EPHSHK10_POSN                                0x4
#define _UEP10_EPHSHK10_POSITION                            0x4
#define _UEP10_EPHSHK10_SIZE                                0x1
#define _UEP10_EPHSHK10_LENGTH                              0x1
#define _UEP10_EPHSHK10_MASK                                0x10

// Register: UEP11
#define UEP11 UEP11
extern volatile unsigned char           UEP11               __at(0xF75);
#ifndef _LIB_BUILD
asm("UEP11 equ 0F75h");
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
        unsigned EPSTALL11              :1;
        unsigned EPINEN11               :1;
        unsigned EPOUTEN11              :1;
        unsigned EPCONDIS11             :1;
        unsigned EPHSHK11               :1;
    };
} UEP11bits_t;
extern volatile UEP11bits_t UEP11bits __at(0xF75);
// bitfield macros
#define _UEP11_EPSTALL_POSN                                 0x0
#define _UEP11_EPSTALL_POSITION                             0x0
#define _UEP11_EPSTALL_SIZE                                 0x1
#define _UEP11_EPSTALL_LENGTH                               0x1
#define _UEP11_EPSTALL_MASK                                 0x1
#define _UEP11_EPINEN_POSN                                  0x1
#define _UEP11_EPINEN_POSITION                              0x1
#define _UEP11_EPINEN_SIZE                                  0x1
#define _UEP11_EPINEN_LENGTH                                0x1
#define _UEP11_EPINEN_MASK                                  0x2
#define _UEP11_EPOUTEN_POSN                                 0x2
#define _UEP11_EPOUTEN_POSITION                             0x2
#define _UEP11_EPOUTEN_SIZE                                 0x1
#define _UEP11_EPOUTEN_LENGTH                               0x1
#define _UEP11_EPOUTEN_MASK                                 0x4
#define _UEP11_EPCONDIS_POSN                                0x3
#define _UEP11_EPCONDIS_POSITION                            0x3
#define _UEP11_EPCONDIS_SIZE                                0x1
#define _UEP11_EPCONDIS_LENGTH                              0x1
#define _UEP11_EPCONDIS_MASK                                0x8
#define _UEP11_EPHSHK_POSN                                  0x4
#define _UEP11_EPHSHK_POSITION                              0x4
#define _UEP11_EPHSHK_SIZE                                  0x1
#define _UEP11_EPHSHK_LENGTH                                0x1
#define _UEP11_EPHSHK_MASK                                  0x10
#define _UEP11_EPSTALL11_POSN                               0x0
#define _UEP11_EPSTALL11_POSITION                           0x0
#define _UEP11_EPSTALL11_SIZE                               0x1
#define _UEP11_EPSTALL11_LENGTH                             0x1
#define _UEP11_EPSTALL11_MASK                               0x1
#define _UEP11_EPINEN11_POSN                                0x1
#define _UEP11_EPINEN11_POSITION                            0x1
#define _UEP11_EPINEN11_SIZE                                0x1
#define _UEP11_EPINEN11_LENGTH                              0x1
#define _UEP11_EPINEN11_MASK                                0x2
#define _UEP11_EPOUTEN11_POSN                               0x2
#define _UEP11_EPOUTEN11_POSITION                           0x2
#define _UEP11_EPOUTEN11_SIZE                               0x1
#define _UEP11_EPOUTEN11_LENGTH                             0x1
#define _UEP11_EPOUTEN11_MASK                               0x4
#define _UEP11_EPCONDIS11_POSN                              0x3
#define _UEP11_EPCONDIS11_POSITION                          0x3
#define _UEP11_EPCONDIS11_SIZE                              0x1
#define _UEP11_EPCONDIS11_LENGTH                            0x1
#define _UEP11_EPCONDIS11_MASK                              0x8
#define _UEP11_EPHSHK11_POSN                                0x4
#define _UEP11_EPHSHK11_POSITION                            0x4
#define _UEP11_EPHSHK11_SIZE                                0x1
#define _UEP11_EPHSHK11_LENGTH                              0x1
#define _UEP11_EPHSHK11_MASK                                0x10

// Register: UEP12
#define UEP12 UEP12
extern volatile unsigned char           UEP12               __at(0xF76);
#ifndef _LIB_BUILD
asm("UEP12 equ 0F76h");
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
        unsigned EPSTALL12              :1;
        unsigned EPINEN12               :1;
        unsigned EPOUTEN12              :1;
        unsigned EPCONDIS12             :1;
        unsigned EPHSHK12               :1;
    };
} UEP12bits_t;
extern volatile UEP12bits_t UEP12bits __at(0xF76);
// bitfield macros
#define _UEP12_EPSTALL_POSN                                 0x0
#define _UEP12_EPSTALL_POSITION                             0x0
#define _UEP12_EPSTALL_SIZE                                 0x1
#define _UEP12_EPSTALL_LENGTH                               0x1
#define _UEP12_EPSTALL_MASK                                 0x1
#define _UEP12_EPINEN_POSN                                  0x1
#define _UEP12_EPINEN_POSITION                              0x1
#define _UEP12_EPINEN_SIZE                                  0x1
#define _UEP12_EPINEN_LENGTH                                0x1
#define _UEP12_EPINEN_MASK                                  0x2
#define _UEP12_EPOUTEN_POSN                                 0x2
#define _UEP12_EPOUTEN_POSITION                             0x2
#define _UEP12_EPOUTEN_SIZE                                 0x1
#define _UEP12_EPOUTEN_LENGTH                               0x1
#define _UEP12_EPOUTEN_MASK                                 0x4
#define _UEP12_EPCONDIS_POSN                                0x3
#define _UEP12_EPCONDIS_POSITION                            0x3
#define _UEP12_EPCONDIS_SIZE                                0x1
#define _UEP12_EPCONDIS_LENGTH                              0x1
#define _UEP12_EPCONDIS_MASK                                0x8
#define _UEP12_EPHSHK_POSN                                  0x4
#define _UEP12_EPHSHK_POSITION                              0x4
#define _UEP12_EPHSHK_SIZE                                  0x1
#define _UEP12_EPHSHK_LENGTH                                0x1
#define _UEP12_EPHSHK_MASK                                  0x10
#define _UEP12_EPSTALL12_POSN                               0x0
#define _UEP12_EPSTALL12_POSITION                           0x0
#define _UEP12_EPSTALL12_SIZE                               0x1
#define _UEP12_EPSTALL12_LENGTH                             0x1
#define _UEP12_EPSTALL12_MASK                               0x1
#define _UEP12_EPINEN12_POSN                                0x1
#define _UEP12_EPINEN12_POSITION                            0x1
#define _UEP12_EPINEN12_SIZE                                0x1
#define _UEP12_EPINEN12_LENGTH                              0x1
#define _UEP12_EPINEN12_MASK                                0x2
#define _UEP12_EPOUTEN12_POSN                               0x2
#define _UEP12_EPOUTEN12_POSITION                           0x2
#define _UEP12_EPOUTEN12_SIZE                               0x1
#define _UEP12_EPOUTEN12_LENGTH                             0x1
#define _UEP12_EPOUTEN12_MASK                               0x4
#define _UEP12_EPCONDIS12_POSN                              0x3
#define _UEP12_EPCONDIS12_POSITION                          0x3
#define _UEP12_EPCONDIS12_SIZE                              0x1
#define _UEP12_EPCONDIS12_LENGTH                            0x1
#define _UEP12_EPCONDIS12_MASK                              0x8
#define _UEP12_EPHSHK12_POSN                                0x4
#define _UEP12_EPHSHK12_POSITION                            0x4
#define _UEP12_EPHSHK12_SIZE                                0x1
#define _UEP12_EPHSHK12_LENGTH                              0x1
#define _UEP12_EPHSHK12_MASK                                0x10

// Register: UEP13
#define UEP13 UEP13
extern volatile unsigned char           UEP13               __at(0xF77);
#ifndef _LIB_BUILD
asm("UEP13 equ 0F77h");
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
        unsigned EPSTALL13              :1;
        unsigned EPINEN13               :1;
        unsigned EPOUTEN13              :1;
        unsigned EPCONDIS13             :1;
        unsigned EPHSHK13               :1;
    };
} UEP13bits_t;
extern volatile UEP13bits_t UEP13bits __at(0xF77);
// bitfield macros
#define _UEP13_EPSTALL_POSN                                 0x0
#define _UEP13_EPSTALL_POSITION                             0x0
#define _UEP13_EPSTALL_SIZE                                 0x1
#define _UEP13_EPSTALL_LENGTH                               0x1
#define _UEP13_EPSTALL_MASK                                 0x1
#define _UEP13_EPINEN_POSN                                  0x1
#define _UEP13_EPINEN_POSITION                              0x1
#define _UEP13_EPINEN_SIZE                                  0x1
#define _UEP13_EPINEN_LENGTH                                0x1
#define _UEP13_EPINEN_MASK                                  0x2
#define _UEP13_EPOUTEN_POSN                                 0x2
#define _UEP13_EPOUTEN_POSITION                             0x2
#define _UEP13_EPOUTEN_SIZE                                 0x1
#define _UEP13_EPOUTEN_LENGTH                               0x1
#define _UEP13_EPOUTEN_MASK                                 0x4
#define _UEP13_EPCONDIS_POSN                                0x3
#define _UEP13_EPCONDIS_POSITION                            0x3
#define _UEP13_EPCONDIS_SIZE                                0x1
#define _UEP13_EPCONDIS_LENGTH                              0x1
#define _UEP13_EPCONDIS_MASK                                0x8
#define _UEP13_EPHSHK_POSN                                  0x4
#define _UEP13_EPHSHK_POSITION                              0x4
#define _UEP13_EPHSHK_SIZE                                  0x1
#define _UEP13_EPHSHK_LENGTH                                0x1
#define _UEP13_EPHSHK_MASK                                  0x10
#define _UEP13_EPSTALL13_POSN                               0x0
#define _UEP13_EPSTALL13_POSITION                           0x0
#define _UEP13_EPSTALL13_SIZE                               0x1
#define _UEP13_EPSTALL13_LENGTH                             0x1
#define _UEP13_EPSTALL13_MASK                               0x1
#define _UEP13_EPINEN13_POSN                                0x1
#define _UEP13_EPINEN13_POSITION                            0x1
#define _UEP13_EPINEN13_SIZE                                0x1
#define _UEP13_EPINEN13_LENGTH                              0x1
#define _UEP13_EPINEN13_MASK                                0x2
#define _UEP13_EPOUTEN13_POSN                               0x2
#define _UEP13_EPOUTEN13_POSITION                           0x2
#define _UEP13_EPOUTEN13_SIZE                               0x1
#define _UEP13_EPOUTEN13_LENGTH                             0x1
#define _UEP13_EPOUTEN13_MASK                               0x4
#define _UEP13_EPCONDIS13_POSN                              0x3
#define _UEP13_EPCONDIS13_POSITION                          0x3
#define _UEP13_EPCONDIS13_SIZE                              0x1
#define _UEP13_EPCONDIS13_LENGTH                            0x1
#define _UEP13_EPCONDIS13_MASK                              0x8
#define _UEP13_EPHSHK13_POSN                                0x4
#define _UEP13_EPHSHK13_POSITION                            0x4
#define _UEP13_EPHSHK13_SIZE                                0x1
#define _UEP13_EPHSHK13_LENGTH                              0x1
#define _UEP13_EPHSHK13_MASK                                0x10

// Register: UEP14
#define UEP14 UEP14
extern volatile unsigned char           UEP14               __at(0xF78);
#ifndef _LIB_BUILD
asm("UEP14 equ 0F78h");
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
        unsigned EPSTALL14              :1;
        unsigned EPINEN14               :1;
        unsigned EPOUTEN14              :1;
        unsigned EPCONDIS14             :1;
        unsigned EPHSHK14               :1;
    };
} UEP14bits_t;
extern volatile UEP14bits_t UEP14bits __at(0xF78);
// bitfield macros
#define _UEP14_EPSTALL_POSN                                 0x0
#define _UEP14_EPSTALL_POSITION                             0x0
#define _UEP14_EPSTALL_SIZE                                 0x1
#define _UEP14_EPSTALL_LENGTH                               0x1
#define _UEP14_EPSTALL_MASK                                 0x1
#define _UEP14_EPINEN_POSN                                  0x1
#define _UEP14_EPINEN_POSITION                              0x1
#define _UEP14_EPINEN_SIZE                                  0x1
#define _UEP14_EPINEN_LENGTH                                0x1
#define _UEP14_EPINEN_MASK                                  0x2
#define _UEP14_EPOUTEN_POSN                                 0x2
#define _UEP14_EPOUTEN_POSITION                             0x2
#define _UEP14_EPOUTEN_SIZE                                 0x1
#define _UEP14_EPOUTEN_LENGTH                               0x1
#define _UEP14_EPOUTEN_MASK                                 0x4
#define _UEP14_EPCONDIS_POSN                                0x3
#define _UEP14_EPCONDIS_POSITION                            0x3
#define _UEP14_EPCONDIS_SIZE                                0x1
#define _UEP14_EPCONDIS_LENGTH                              0x1
#define _UEP14_EPCONDIS_MASK                                0x8
#define _UEP14_EPHSHK_POSN                                  0x4
#define _UEP14_EPHSHK_POSITION                              0x4
#define _UEP14_EPHSHK_SIZE                                  0x1
#define _UEP14_EPHSHK_LENGTH                                0x1
#define _UEP14_EPHSHK_MASK                                  0x10
#define _UEP14_EPSTALL14_POSN                               0x0
#define _UEP14_EPSTALL14_POSITION                           0x0
#define _UEP14_EPSTALL14_SIZE                               0x1
#define _UEP14_EPSTALL14_LENGTH                             0x1
#define _UEP14_EPSTALL14_MASK                               0x1
#define _UEP14_EPINEN14_POSN                                0x1
#define _UEP14_EPINEN14_POSITION                            0x1
#define _UEP14_EPINEN14_SIZE                                0x1
#define _UEP14_EPINEN14_LENGTH                              0x1
#define _UEP14_EPINEN14_MASK                                0x2
#define _UEP14_EPOUTEN14_POSN                               0x2
#define _UEP14_EPOUTEN14_POSITION                           0x2
#define _UEP14_EPOUTEN14_SIZE                               0x1
#define _UEP14_EPOUTEN14_LENGTH                             0x1
#define _UEP14_EPOUTEN14_MASK                               0x4
#define _UEP14_EPCONDIS14_POSN                              0x3
#define _UEP14_EPCONDIS14_POSITION                          0x3
#define _UEP14_EPCONDIS14_SIZE                              0x1
#define _UEP14_EPCONDIS14_LENGTH                            0x1
#define _UEP14_EPCONDIS14_MASK                              0x8
#define _UEP14_EPHSHK14_POSN                                0x4
#define _UEP14_EPHSHK14_POSITION                            0x4
#define _UEP14_EPHSHK14_SIZE                                0x1
#define _UEP14_EPHSHK14_LENGTH                              0x1
#define _UEP14_EPHSHK14_MASK                                0x10

// Register: UEP15
#define UEP15 UEP15
extern volatile unsigned char           UEP15               __at(0xF79);
#ifndef _LIB_BUILD
asm("UEP15 equ 0F79h");
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
        unsigned EPSTALL15              :1;
        unsigned EPINEN15               :1;
        unsigned EPOUTEN15              :1;
        unsigned EPCONDIS15             :1;
        unsigned EPHSHK15               :1;
    };
} UEP15bits_t;
extern volatile UEP15bits_t UEP15bits __at(0xF79);
// bitfield macros
#define _UEP15_EPSTALL_POSN                                 0x0
#define _UEP15_EPSTALL_POSITION                             0x0
#define _UEP15_EPSTALL_SIZE                                 0x1
#define _UEP15_EPSTALL_LENGTH                               0x1
#define _UEP15_EPSTALL_MASK                                 0x1
#define _UEP15_EPINEN_POSN                                  0x1
#define _UEP15_EPINEN_POSITION                              0x1
#define _UEP15_EPINEN_SIZE                                  0x1
#define _UEP15_EPINEN_LENGTH                                0x1
#define _UEP15_EPINEN_MASK                                  0x2
#define _UEP15_EPOUTEN_POSN                                 0x2
#define _UEP15_EPOUTEN_POSITION                             0x2
#define _UEP15_EPOUTEN_SIZE                                 0x1
#define _UEP15_EPOUTEN_LENGTH                               0x1
#define _UEP15_EPOUTEN_MASK                                 0x4
#define _UEP15_EPCONDIS_POSN                                0x3
#define _UEP15_EPCONDIS_POSITION                            0x3
#define _UEP15_EPCONDIS_SIZE                                0x1
#define _UEP15_EPCONDIS_LENGTH                              0x1
#define _UEP15_EPCONDIS_MASK                                0x8
#define _UEP15_EPHSHK_POSN                                  0x4
#define _UEP15_EPHSHK_POSITION                              0x4
#define _UEP15_EPHSHK_SIZE                                  0x1
#define _UEP15_EPHSHK_LENGTH                                0x1
#define _UEP15_EPHSHK_MASK                                  0x10
#define _UEP15_EPSTALL15_POSN                               0x0
#define _UEP15_EPSTALL15_POSITION                           0x0
#define _UEP15_EPSTALL15_SIZE                               0x1
#define _UEP15_EPSTALL15_LENGTH                             0x1
#define _UEP15_EPSTALL15_MASK                               0x1
#define _UEP15_EPINEN15_POSN                                0x1
#define _UEP15_EPINEN15_POSITION                            0x1
#define _UEP15_EPINEN15_SIZE                                0x1
#define _UEP15_EPINEN15_LENGTH                              0x1
#define _UEP15_EPINEN15_MASK                                0x2
#define _UEP15_EPOUTEN15_POSN                               0x2
#define _UEP15_EPOUTEN15_POSITION                           0x2
#define _UEP15_EPOUTEN15_SIZE                               0x1
#define _UEP15_EPOUTEN15_LENGTH                             0x1
#define _UEP15_EPOUTEN15_MASK                               0x4
#define _UEP15_EPCONDIS15_POSN                              0x3
#define _UEP15_EPCONDIS15_POSITION                          0x3
#define _UEP15_EPCONDIS15_SIZE                              0x1
#define _UEP15_EPCONDIS15_LENGTH                            0x1
#define _UEP15_EPCONDIS15_MASK                              0x8
#define _UEP15_EPHSHK15_POSN                                0x4
#define _UEP15_EPHSHK15_POSITION                            0x4
#define _UEP15_EPHSHK15_SIZE                                0x1
#define _UEP15_EPHSHK15_LENGTH                              0x1
#define _UEP15_EPHSHK15_MASK                                0x10

// Register: SLRCON
#define SLRCON SLRCON
extern volatile unsigned char           SLRCON              __at(0xF7A);
#ifndef _LIB_BUILD
asm("SLRCON equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA                   :1;
        unsigned SLRB                   :1;
        unsigned SLRC                   :1;
    };
} SLRCONbits_t;
extern volatile SLRCONbits_t SLRCONbits __at(0xF7A);
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

// Register: VREFCON2
#define VREFCON2 VREFCON2
extern volatile unsigned char           VREFCON2            __at(0xF7B);
#ifndef _LIB_BUILD
asm("VREFCON2 equ 0F7Bh");
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
} VREFCON2bits_t;
extern volatile VREFCON2bits_t VREFCON2bits __at(0xF7B);
// bitfield macros
#define _VREFCON2_DACR_POSN                                 0x0
#define _VREFCON2_DACR_POSITION                             0x0
#define _VREFCON2_DACR_SIZE                                 0x5
#define _VREFCON2_DACR_LENGTH                               0x5
#define _VREFCON2_DACR_MASK                                 0x1F
#define _VREFCON2_DACR0_POSN                                0x0
#define _VREFCON2_DACR0_POSITION                            0x0
#define _VREFCON2_DACR0_SIZE                                0x1
#define _VREFCON2_DACR0_LENGTH                              0x1
#define _VREFCON2_DACR0_MASK                                0x1
#define _VREFCON2_DACR1_POSN                                0x1
#define _VREFCON2_DACR1_POSITION                            0x1
#define _VREFCON2_DACR1_SIZE                                0x1
#define _VREFCON2_DACR1_LENGTH                              0x1
#define _VREFCON2_DACR1_MASK                                0x2
#define _VREFCON2_DACR2_POSN                                0x2
#define _VREFCON2_DACR2_POSITION                            0x2
#define _VREFCON2_DACR2_SIZE                                0x1
#define _VREFCON2_DACR2_LENGTH                              0x1
#define _VREFCON2_DACR2_MASK                                0x4
#define _VREFCON2_DACR3_POSN                                0x3
#define _VREFCON2_DACR3_POSITION                            0x3
#define _VREFCON2_DACR3_SIZE                                0x1
#define _VREFCON2_DACR3_LENGTH                              0x1
#define _VREFCON2_DACR3_MASK                                0x8
#define _VREFCON2_DACR4_POSN                                0x4
#define _VREFCON2_DACR4_POSITION                            0x4
#define _VREFCON2_DACR4_SIZE                                0x1
#define _VREFCON2_DACR4_LENGTH                              0x1
#define _VREFCON2_DACR4_MASK                                0x10

// Register: VREFCON1
#define VREFCON1 VREFCON1
extern volatile unsigned char           VREFCON1            __at(0xF7C);
#ifndef _LIB_BUILD
asm("VREFCON1 equ 0F7Ch");
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
} VREFCON1bits_t;
extern volatile VREFCON1bits_t VREFCON1bits __at(0xF7C);
// bitfield macros
#define _VREFCON1_DACNSS_POSN                               0x0
#define _VREFCON1_DACNSS_POSITION                           0x0
#define _VREFCON1_DACNSS_SIZE                               0x1
#define _VREFCON1_DACNSS_LENGTH                             0x1
#define _VREFCON1_DACNSS_MASK                               0x1
#define _VREFCON1_DACPSS_POSN                               0x2
#define _VREFCON1_DACPSS_POSITION                           0x2
#define _VREFCON1_DACPSS_SIZE                               0x2
#define _VREFCON1_DACPSS_LENGTH                             0x2
#define _VREFCON1_DACPSS_MASK                               0xC
#define _VREFCON1_DACOE_POSN                                0x5
#define _VREFCON1_DACOE_POSITION                            0x5
#define _VREFCON1_DACOE_SIZE                                0x1
#define _VREFCON1_DACOE_LENGTH                              0x1
#define _VREFCON1_DACOE_MASK                                0x20
#define _VREFCON1_DACLPS_POSN                               0x6
#define _VREFCON1_DACLPS_POSITION                           0x6
#define _VREFCON1_DACLPS_SIZE                               0x1
#define _VREFCON1_DACLPS_LENGTH                             0x1
#define _VREFCON1_DACLPS_MASK                               0x40
#define _VREFCON1_DACEN_POSN                                0x7
#define _VREFCON1_DACEN_POSITION                            0x7
#define _VREFCON1_DACEN_SIZE                                0x1
#define _VREFCON1_DACEN_LENGTH                              0x1
#define _VREFCON1_DACEN_MASK                                0x80
#define _VREFCON1_DACPSS0_POSN                              0x2
#define _VREFCON1_DACPSS0_POSITION                          0x2
#define _VREFCON1_DACPSS0_SIZE                              0x1
#define _VREFCON1_DACPSS0_LENGTH                            0x1
#define _VREFCON1_DACPSS0_MASK                              0x4
#define _VREFCON1_DACPSS1_POSN                              0x3
#define _VREFCON1_DACPSS1_POSITION                          0x3
#define _VREFCON1_DACPSS1_SIZE                              0x1
#define _VREFCON1_DACPSS1_LENGTH                            0x1
#define _VREFCON1_DACPSS1_MASK                              0x8

// Register: VREFCON0
#define VREFCON0 VREFCON0
extern volatile unsigned char           VREFCON0            __at(0xF7D);
#ifndef _LIB_BUILD
asm("VREFCON0 equ 0F7Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRS                   :2;
        unsigned FVRST                  :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned FVRS0                  :1;
        unsigned FVRS1                  :1;
    };
} VREFCON0bits_t;
extern volatile VREFCON0bits_t VREFCON0bits __at(0xF7D);
// bitfield macros
#define _VREFCON0_TSRNG_POSN                                0x2
#define _VREFCON0_TSRNG_POSITION                            0x2
#define _VREFCON0_TSRNG_SIZE                                0x1
#define _VREFCON0_TSRNG_LENGTH                              0x1
#define _VREFCON0_TSRNG_MASK                                0x4
#define _VREFCON0_TSEN_POSN                                 0x3
#define _VREFCON0_TSEN_POSITION                             0x3
#define _VREFCON0_TSEN_SIZE                                 0x1
#define _VREFCON0_TSEN_LENGTH                               0x1
#define _VREFCON0_TSEN_MASK                                 0x8
#define _VREFCON0_FVRS_POSN                                 0x4
#define _VREFCON0_FVRS_POSITION                             0x4
#define _VREFCON0_FVRS_SIZE                                 0x2
#define _VREFCON0_FVRS_LENGTH                               0x2
#define _VREFCON0_FVRS_MASK                                 0x30
#define _VREFCON0_FVRST_POSN                                0x6
#define _VREFCON0_FVRST_POSITION                            0x6
#define _VREFCON0_FVRST_SIZE                                0x1
#define _VREFCON0_FVRST_LENGTH                              0x1
#define _VREFCON0_FVRST_MASK                                0x40
#define _VREFCON0_FVREN_POSN                                0x7
#define _VREFCON0_FVREN_POSITION                            0x7
#define _VREFCON0_FVREN_SIZE                                0x1
#define _VREFCON0_FVREN_LENGTH                              0x1
#define _VREFCON0_FVREN_MASK                                0x80
#define _VREFCON0_FVRS0_POSN                                0x4
#define _VREFCON0_FVRS0_POSITION                            0x4
#define _VREFCON0_FVRS0_SIZE                                0x1
#define _VREFCON0_FVRS0_LENGTH                              0x1
#define _VREFCON0_FVRS0_MASK                                0x10
#define _VREFCON0_FVRS1_POSN                                0x5
#define _VREFCON0_FVRS1_POSITION                            0x5
#define _VREFCON0_FVRS1_SIZE                                0x1
#define _VREFCON0_FVRS1_LENGTH                              0x1
#define _VREFCON0_FVRS1_MASK                                0x20

// Register: PMD0
#define PMD0 PMD0
extern volatile unsigned char           PMD0                __at(0xF7E);
#ifndef _LIB_BUILD
asm("PMD0 equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1MD                 :1;
        unsigned TMR2MD                 :1;
        unsigned TMR3MD                 :1;
        unsigned                        :1;
        unsigned ACTMD                  :1;
        unsigned USBMD                  :1;
        unsigned UARTMD                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned STMD                   :1;
        unsigned                        :1;
        unsigned UART1MD                :1;
    };
    struct {
        unsigned                        :1;
        unsigned SPI1MD                 :1;
        unsigned SPI2MD                 :1;
    };
} PMD0bits_t;
extern volatile PMD0bits_t PMD0bits __at(0xF7E);
// bitfield macros
#define _PMD0_TMR1MD_POSN                                   0x0
#define _PMD0_TMR1MD_POSITION                               0x0
#define _PMD0_TMR1MD_SIZE                                   0x1
#define _PMD0_TMR1MD_LENGTH                                 0x1
#define _PMD0_TMR1MD_MASK                                   0x1
#define _PMD0_TMR2MD_POSN                                   0x1
#define _PMD0_TMR2MD_POSITION                               0x1
#define _PMD0_TMR2MD_SIZE                                   0x1
#define _PMD0_TMR2MD_LENGTH                                 0x1
#define _PMD0_TMR2MD_MASK                                   0x2
#define _PMD0_TMR3MD_POSN                                   0x2
#define _PMD0_TMR3MD_POSITION                               0x2
#define _PMD0_TMR3MD_SIZE                                   0x1
#define _PMD0_TMR3MD_LENGTH                                 0x1
#define _PMD0_TMR3MD_MASK                                   0x4
#define _PMD0_ACTMD_POSN                                    0x4
#define _PMD0_ACTMD_POSITION                                0x4
#define _PMD0_ACTMD_SIZE                                    0x1
#define _PMD0_ACTMD_LENGTH                                  0x1
#define _PMD0_ACTMD_MASK                                    0x10
#define _PMD0_USBMD_POSN                                    0x5
#define _PMD0_USBMD_POSITION                                0x5
#define _PMD0_USBMD_SIZE                                    0x1
#define _PMD0_USBMD_LENGTH                                  0x1
#define _PMD0_USBMD_MASK                                    0x20
#define _PMD0_UARTMD_POSN                                   0x6
#define _PMD0_UARTMD_POSITION                               0x6
#define _PMD0_UARTMD_SIZE                                   0x1
#define _PMD0_UARTMD_LENGTH                                 0x1
#define _PMD0_UARTMD_MASK                                   0x40
#define _PMD0_STMD_POSN                                     0x4
#define _PMD0_STMD_POSITION                                 0x4
#define _PMD0_STMD_SIZE                                     0x1
#define _PMD0_STMD_LENGTH                                   0x1
#define _PMD0_STMD_MASK                                     0x10
#define _PMD0_UART1MD_POSN                                  0x6
#define _PMD0_UART1MD_POSITION                              0x6
#define _PMD0_UART1MD_SIZE                                  0x1
#define _PMD0_UART1MD_LENGTH                                0x1
#define _PMD0_UART1MD_MASK                                  0x40
#define _PMD0_SPI1MD_POSN                                   0x1
#define _PMD0_SPI1MD_POSITION                               0x1
#define _PMD0_SPI1MD_SIZE                                   0x1
#define _PMD0_SPI1MD_LENGTH                                 0x1
#define _PMD0_SPI1MD_MASK                                   0x2
#define _PMD0_SPI2MD_POSN                                   0x2
#define _PMD0_SPI2MD_POSITION                               0x2
#define _PMD0_SPI2MD_SIZE                                   0x1
#define _PMD0_SPI2MD_LENGTH                                 0x1
#define _PMD0_SPI2MD_MASK                                   0x4

// Register: PMD1
#define PMD1 PMD1
extern volatile unsigned char           PMD1                __at(0xF7F);
#ifndef _LIB_BUILD
asm("PMD1 equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1MD                 :1;
        unsigned CCP2MD                 :1;
        unsigned ADCMD                  :1;
        unsigned CMP1MD                 :1;
        unsigned CMP2MD                 :1;
        unsigned CTMUMD                 :1;
        unsigned MSSPMD                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned SSP1MD                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned MSSP1MD                :1;
    };
    struct {
        unsigned EMBMD                  :1;
    };
} PMD1bits_t;
extern volatile PMD1bits_t PMD1bits __at(0xF7F);
// bitfield macros
#define _PMD1_CCP1MD_POSN                                   0x0
#define _PMD1_CCP1MD_POSITION                               0x0
#define _PMD1_CCP1MD_SIZE                                   0x1
#define _PMD1_CCP1MD_LENGTH                                 0x1
#define _PMD1_CCP1MD_MASK                                   0x1
#define _PMD1_CCP2MD_POSN                                   0x1
#define _PMD1_CCP2MD_POSITION                               0x1
#define _PMD1_CCP2MD_SIZE                                   0x1
#define _PMD1_CCP2MD_LENGTH                                 0x1
#define _PMD1_CCP2MD_MASK                                   0x2
#define _PMD1_ADCMD_POSN                                    0x2
#define _PMD1_ADCMD_POSITION                                0x2
#define _PMD1_ADCMD_SIZE                                    0x1
#define _PMD1_ADCMD_LENGTH                                  0x1
#define _PMD1_ADCMD_MASK                                    0x4
#define _PMD1_CMP1MD_POSN                                   0x3
#define _PMD1_CMP1MD_POSITION                               0x3
#define _PMD1_CMP1MD_SIZE                                   0x1
#define _PMD1_CMP1MD_LENGTH                                 0x1
#define _PMD1_CMP1MD_MASK                                   0x8
#define _PMD1_CMP2MD_POSN                                   0x4
#define _PMD1_CMP2MD_POSITION                               0x4
#define _PMD1_CMP2MD_SIZE                                   0x1
#define _PMD1_CMP2MD_LENGTH                                 0x1
#define _PMD1_CMP2MD_MASK                                   0x10
#define _PMD1_CTMUMD_POSN                                   0x5
#define _PMD1_CTMUMD_POSITION                               0x5
#define _PMD1_CTMUMD_SIZE                                   0x1
#define _PMD1_CTMUMD_LENGTH                                 0x1
#define _PMD1_CTMUMD_MASK                                   0x20
#define _PMD1_MSSPMD_POSN                                   0x6
#define _PMD1_MSSPMD_POSITION                               0x6
#define _PMD1_MSSPMD_SIZE                                   0x1
#define _PMD1_MSSPMD_LENGTH                                 0x1
#define _PMD1_MSSPMD_MASK                                   0x40
#define _PMD1_SSP1MD_POSN                                   0x6
#define _PMD1_SSP1MD_POSITION                               0x6
#define _PMD1_SSP1MD_SIZE                                   0x1
#define _PMD1_SSP1MD_LENGTH                                 0x1
#define _PMD1_SSP1MD_MASK                                   0x40
#define _PMD1_MSSP1MD_POSN                                  0x6
#define _PMD1_MSSP1MD_POSITION                              0x6
#define _PMD1_MSSP1MD_SIZE                                  0x1
#define _PMD1_MSSP1MD_LENGTH                                0x1
#define _PMD1_MSSP1MD_MASK                                  0x40
#define _PMD1_EMBMD_POSN                                    0x0
#define _PMD1_EMBMD_POSITION                                0x0
#define _PMD1_EMBMD_SIZE                                    0x1
#define _PMD1_EMBMD_LENGTH                                  0x1
#define _PMD1_EMBMD_MASK                                    0x1

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
        unsigned T0CKI                  :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned                        :1;
        unsigned LVDIN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned HLVDIN                 :1;
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
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
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
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
#define _PORTA_HLVDIN_POSN                                  0x5
#define _PORTA_HLVDIN_POSITION                              0x5
#define _PORTA_HLVDIN_SIZE                                  0x1
#define _PORTA_HLVDIN_LENGTH                                0x1
#define _PORTA_HLVDIN_MASK                                  0x20
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
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned                        :2;
        unsigned PGM                    :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
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
#define _PORTB_PGM_POSN                                     0x5
#define _PORTB_PGM_POSITION                                 0x5
#define _PORTB_PGM_SIZE                                     0x1
#define _PORTB_PGM_LENGTH                                   0x1
#define _PORTB_PGM_MASK                                     0x20
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
        unsigned                        :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned CCP1                   :1;
        unsigned                        :3;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned                        :1;
        unsigned P1A                    :1;
        unsigned                        :3;
        unsigned CK                     :1;
        unsigned DT                     :1;
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
#define _PORTC_P1A_POSN                                     0x2
#define _PORTC_P1A_POSITION                                 0x2
#define _PORTC_P1A_SIZE                                     0x1
#define _PORTC_P1A_LENGTH                                   0x1
#define _PORTC_P1A_MASK                                     0x4
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

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0xF85);
#ifndef _LIB_BUILD
asm("WPUB equ 0F85h");
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
extern volatile WPUBbits_t WPUBbits __at(0xF85);
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
extern volatile unsigned char           IOCB                __at(0xF86);
#ifndef _LIB_BUILD
asm("IOCB equ 0F86h");
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
extern volatile IOCBbits_t IOCBbits __at(0xF86);
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

// Register: IOCC
#define IOCC IOCC
extern volatile unsigned char           IOCC                __at(0xF87);
#ifndef _LIB_BUILD
asm("IOCC equ 0F87h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCC0                  :1;
        unsigned IOCC1                  :1;
        unsigned IOCC2                  :1;
        unsigned                        :1;
        unsigned IOCC4                  :1;
        unsigned IOCC5                  :1;
        unsigned IOCC6                  :1;
        unsigned IOCC7                  :1;
    };
} IOCCbits_t;
extern volatile IOCCbits_t IOCCbits __at(0xF87);
// bitfield macros
#define _IOCC_IOCC0_POSN                                    0x0
#define _IOCC_IOCC0_POSITION                                0x0
#define _IOCC_IOCC0_SIZE                                    0x1
#define _IOCC_IOCC0_LENGTH                                  0x1
#define _IOCC_IOCC0_MASK                                    0x1
#define _IOCC_IOCC1_POSN                                    0x1
#define _IOCC_IOCC1_POSITION                                0x1
#define _IOCC_IOCC1_SIZE                                    0x1
#define _IOCC_IOCC1_LENGTH                                  0x1
#define _IOCC_IOCC1_MASK                                    0x2
#define _IOCC_IOCC2_POSN                                    0x2
#define _IOCC_IOCC2_POSITION                                0x2
#define _IOCC_IOCC2_SIZE                                    0x1
#define _IOCC_IOCC2_LENGTH                                  0x1
#define _IOCC_IOCC2_MASK                                    0x4
#define _IOCC_IOCC4_POSN                                    0x4
#define _IOCC_IOCC4_POSITION                                0x4
#define _IOCC_IOCC4_SIZE                                    0x1
#define _IOCC_IOCC4_LENGTH                                  0x1
#define _IOCC_IOCC4_MASK                                    0x10
#define _IOCC_IOCC5_POSN                                    0x5
#define _IOCC_IOCC5_POSITION                                0x5
#define _IOCC_IOCC5_SIZE                                    0x1
#define _IOCC_IOCC5_LENGTH                                  0x1
#define _IOCC_IOCC5_MASK                                    0x20
#define _IOCC_IOCC6_POSN                                    0x6
#define _IOCC_IOCC6_POSITION                                0x6
#define _IOCC_IOCC6_SIZE                                    0x1
#define _IOCC_IOCC6_LENGTH                                  0x1
#define _IOCC_IOCC6_MASK                                    0x40
#define _IOCC_IOCC7_POSN                                    0x7
#define _IOCC_IOCC7_POSITION                                0x7
#define _IOCC_IOCC7_SIZE                                    0x1
#define _IOCC_IOCC7_LENGTH                                  0x1
#define _IOCC_IOCC7_MASK                                    0x80

// Register: CTMUICON
#define CTMUICON CTMUICON
extern volatile unsigned char           CTMUICON            __at(0xF88);
#ifndef _LIB_BUILD
asm("CTMUICON equ 0F88h");
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
extern volatile CTMUICONbits_t CTMUICONbits __at(0xF88);
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
        unsigned                        :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
        unsigned LC1                    :1;
        unsigned LC2                    :1;
        unsigned                        :1;
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

// Register: CTMUCONL
#define CTMUCONL CTMUCONL
extern volatile unsigned char           CTMUCONL            __at(0xF8E);
#ifndef _LIB_BUILD
asm("CTMUCONL equ 0F8Eh");
#endif
// aliases
extern volatile unsigned char           CTMUCON1            __at(0xF8E);
#ifndef _LIB_BUILD
asm("CTMUCON1 equ 0F8Eh");
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
extern volatile CTMUCONLbits_t CTMUCONLbits __at(0xF8E);
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
// alias bitfield definitions
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
} CTMUCON1bits_t;
extern volatile CTMUCON1bits_t CTMUCON1bits __at(0xF8E);
// bitfield macros
#define _CTMUCON1_EDG1STAT_POSN                             0x0
#define _CTMUCON1_EDG1STAT_POSITION                         0x0
#define _CTMUCON1_EDG1STAT_SIZE                             0x1
#define _CTMUCON1_EDG1STAT_LENGTH                           0x1
#define _CTMUCON1_EDG1STAT_MASK                             0x1
#define _CTMUCON1_EDG2STAT_POSN                             0x1
#define _CTMUCON1_EDG2STAT_POSITION                         0x1
#define _CTMUCON1_EDG2STAT_SIZE                             0x1
#define _CTMUCON1_EDG2STAT_LENGTH                           0x1
#define _CTMUCON1_EDG2STAT_MASK                             0x2
#define _CTMUCON1_EDG1SEL_POSN                              0x2
#define _CTMUCON1_EDG1SEL_POSITION                          0x2
#define _CTMUCON1_EDG1SEL_SIZE                              0x2
#define _CTMUCON1_EDG1SEL_LENGTH                            0x2
#define _CTMUCON1_EDG1SEL_MASK                              0xC
#define _CTMUCON1_EDG1POL_POSN                              0x4
#define _CTMUCON1_EDG1POL_POSITION                          0x4
#define _CTMUCON1_EDG1POL_SIZE                              0x1
#define _CTMUCON1_EDG1POL_LENGTH                            0x1
#define _CTMUCON1_EDG1POL_MASK                              0x10
#define _CTMUCON1_EDG2SEL_POSN                              0x5
#define _CTMUCON1_EDG2SEL_POSITION                          0x5
#define _CTMUCON1_EDG2SEL_SIZE                              0x2
#define _CTMUCON1_EDG2SEL_LENGTH                            0x2
#define _CTMUCON1_EDG2SEL_MASK                              0x60
#define _CTMUCON1_EDG2POL_POSN                              0x7
#define _CTMUCON1_EDG2POL_POSITION                          0x7
#define _CTMUCON1_EDG2POL_SIZE                              0x1
#define _CTMUCON1_EDG2POL_LENGTH                            0x1
#define _CTMUCON1_EDG2POL_MASK                              0x80
#define _CTMUCON1_EDG1SEL0_POSN                             0x2
#define _CTMUCON1_EDG1SEL0_POSITION                         0x2
#define _CTMUCON1_EDG1SEL0_SIZE                             0x1
#define _CTMUCON1_EDG1SEL0_LENGTH                           0x1
#define _CTMUCON1_EDG1SEL0_MASK                             0x4
#define _CTMUCON1_EDG1SEL1_POSN                             0x3
#define _CTMUCON1_EDG1SEL1_POSITION                         0x3
#define _CTMUCON1_EDG1SEL1_SIZE                             0x1
#define _CTMUCON1_EDG1SEL1_LENGTH                           0x1
#define _CTMUCON1_EDG1SEL1_MASK                             0x8
#define _CTMUCON1_EDG2SEL0_POSN                             0x5
#define _CTMUCON1_EDG2SEL0_POSITION                         0x5
#define _CTMUCON1_EDG2SEL0_SIZE                             0x1
#define _CTMUCON1_EDG2SEL0_LENGTH                           0x1
#define _CTMUCON1_EDG2SEL0_MASK                             0x20
#define _CTMUCON1_EDG2SEL1_POSN                             0x6
#define _CTMUCON1_EDG2SEL1_POSITION                         0x6
#define _CTMUCON1_EDG2SEL1_SIZE                             0x1
#define _CTMUCON1_EDG2SEL1_LENGTH                           0x1
#define _CTMUCON1_EDG2SEL1_MASK                             0x40

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
extern volatile unsigned char           CTMUCONH            __at(0xF8F);
#ifndef _LIB_BUILD
asm("CTMUCONH equ 0F8Fh");
#endif
// aliases
extern volatile unsigned char           CTMUCON0            __at(0xF8F);
#ifndef _LIB_BUILD
asm("CTMUCON0 equ 0F8Fh");
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
    struct {
        unsigned TRIGEN                 :1;
        unsigned                        :4;
        unsigned SIDL                   :1;
        unsigned                        :1;
        unsigned ON                     :1;
    };
} CTMUCONHbits_t;
extern volatile CTMUCONHbits_t CTMUCONHbits __at(0xF8F);
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
#define _CTMUCONH_TRIGEN_POSN                               0x0
#define _CTMUCONH_TRIGEN_POSITION                           0x0
#define _CTMUCONH_TRIGEN_SIZE                               0x1
#define _CTMUCONH_TRIGEN_LENGTH                             0x1
#define _CTMUCONH_TRIGEN_MASK                               0x1
#define _CTMUCONH_SIDL_POSN                                 0x5
#define _CTMUCONH_SIDL_POSITION                             0x5
#define _CTMUCONH_SIDL_SIZE                                 0x1
#define _CTMUCONH_SIDL_LENGTH                               0x1
#define _CTMUCONH_SIDL_MASK                                 0x20
#define _CTMUCONH_ON_POSN                                   0x7
#define _CTMUCONH_ON_POSITION                               0x7
#define _CTMUCONH_ON_SIZE                                   0x1
#define _CTMUCONH_ON_LENGTH                                 0x1
#define _CTMUCONH_ON_MASK                                   0x80
// alias bitfield definitions
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
    struct {
        unsigned TRIGEN                 :1;
        unsigned                        :4;
        unsigned SIDL                   :1;
        unsigned                        :1;
        unsigned ON                     :1;
    };
} CTMUCON0bits_t;
extern volatile CTMUCON0bits_t CTMUCON0bits __at(0xF8F);
// bitfield macros
#define _CTMUCON0_CTTRIG_POSN                               0x0
#define _CTMUCON0_CTTRIG_POSITION                           0x0
#define _CTMUCON0_CTTRIG_SIZE                               0x1
#define _CTMUCON0_CTTRIG_LENGTH                             0x1
#define _CTMUCON0_CTTRIG_MASK                               0x1
#define _CTMUCON0_IDISSEN_POSN                              0x1
#define _CTMUCON0_IDISSEN_POSITION                          0x1
#define _CTMUCON0_IDISSEN_SIZE                              0x1
#define _CTMUCON0_IDISSEN_LENGTH                            0x1
#define _CTMUCON0_IDISSEN_MASK                              0x2
#define _CTMUCON0_EDGSEQEN_POSN                             0x2
#define _CTMUCON0_EDGSEQEN_POSITION                         0x2
#define _CTMUCON0_EDGSEQEN_SIZE                             0x1
#define _CTMUCON0_EDGSEQEN_LENGTH                           0x1
#define _CTMUCON0_EDGSEQEN_MASK                             0x4
#define _CTMUCON0_EDGEN_POSN                                0x3
#define _CTMUCON0_EDGEN_POSITION                            0x3
#define _CTMUCON0_EDGEN_SIZE                                0x1
#define _CTMUCON0_EDGEN_LENGTH                              0x1
#define _CTMUCON0_EDGEN_MASK                                0x8
#define _CTMUCON0_TGEN_POSN                                 0x4
#define _CTMUCON0_TGEN_POSITION                             0x4
#define _CTMUCON0_TGEN_SIZE                                 0x1
#define _CTMUCON0_TGEN_LENGTH                               0x1
#define _CTMUCON0_TGEN_MASK                                 0x10
#define _CTMUCON0_CTMUSIDL_POSN                             0x5
#define _CTMUCON0_CTMUSIDL_POSITION                         0x5
#define _CTMUCON0_CTMUSIDL_SIZE                             0x1
#define _CTMUCON0_CTMUSIDL_LENGTH                           0x1
#define _CTMUCON0_CTMUSIDL_MASK                             0x20
#define _CTMUCON0_CTMUEN_POSN                               0x7
#define _CTMUCON0_CTMUEN_POSITION                           0x7
#define _CTMUCON0_CTMUEN_SIZE                               0x1
#define _CTMUCON0_CTMUEN_LENGTH                             0x1
#define _CTMUCON0_CTMUEN_MASK                               0x80
#define _CTMUCON0_TRIGEN_POSN                               0x0
#define _CTMUCON0_TRIGEN_POSITION                           0x0
#define _CTMUCON0_TRIGEN_SIZE                               0x1
#define _CTMUCON0_TRIGEN_LENGTH                             0x1
#define _CTMUCON0_TRIGEN_MASK                               0x1
#define _CTMUCON0_SIDL_POSN                                 0x5
#define _CTMUCON0_SIDL_POSITION                             0x5
#define _CTMUCON0_SIDL_SIZE                                 0x1
#define _CTMUCON0_SIDL_LENGTH                               0x1
#define _CTMUCON0_SIDL_MASK                                 0x20
#define _CTMUCON0_ON_POSN                                   0x7
#define _CTMUCON0_ON_POSITION                               0x7
#define _CTMUCON0_ON_SIZE                                   0x1
#define _CTMUCON0_ON_LENGTH                                 0x1
#define _CTMUCON0_ON_MASK                                   0x80

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0xF90);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0F90h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0xF90);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0F90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0xF90);
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0xF91);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0F91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0xF91);
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

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
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
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
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
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
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
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
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
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
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20
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
        unsigned                        :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :3;
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
        unsigned                        :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :3;
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

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0xF97);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0F97h");
#endif
// aliases
extern volatile unsigned char           ECCP2CON            __at(0xF97);
#ifndef _LIB_BUILD
asm("ECCP2CON equ 0F97h");
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
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0xF97);
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
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
} ECCP2CONbits_t;
extern volatile ECCP2CONbits_t ECCP2CONbits __at(0xF97);
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0xF98);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0F98h");
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
        unsigned CREF                   :1;
        unsigned                        :1;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned COUT1                  :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH                    :2;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0xF98);
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
#define _CM1CON0_CREF_POSN                                  0x2
#define _CM1CON0_CREF_POSITION                              0x2
#define _CM1CON0_CREF_SIZE                                  0x1
#define _CM1CON0_CREF_LENGTH                                0x1
#define _CM1CON0_CREF_MASK                                  0x4
#define _CM1CON0_CPOL_POSN                                  0x4
#define _CM1CON0_CPOL_POSITION                              0x4
#define _CM1CON0_CPOL_SIZE                                  0x1
#define _CM1CON0_CPOL_LENGTH                                0x1
#define _CM1CON0_CPOL_MASK                                  0x10
#define _CM1CON0_COE_POSN                                   0x5
#define _CM1CON0_COE_POSITION                               0x5
#define _CM1CON0_COE_SIZE                                   0x1
#define _CM1CON0_COE_LENGTH                                 0x1
#define _CM1CON0_COE_MASK                                   0x20
#define _CM1CON0_COUT1_POSN                                 0x6
#define _CM1CON0_COUT1_POSITION                             0x6
#define _CM1CON0_COUT1_SIZE                                 0x1
#define _CM1CON0_COUT1_LENGTH                               0x1
#define _CM1CON0_COUT1_MASK                                 0x40
#define _CM1CON0_CON_POSN                                   0x7
#define _CM1CON0_CON_POSITION                               0x7
#define _CM1CON0_CON_SIZE                                   0x1
#define _CM1CON0_CON_LENGTH                                 0x1
#define _CM1CON0_CON_MASK                                   0x80
#define _CM1CON0_CCH_POSN                                   0x0
#define _CM1CON0_CCH_POSITION                               0x0
#define _CM1CON0_CCH_SIZE                                   0x2
#define _CM1CON0_CCH_LENGTH                                 0x2
#define _CM1CON0_CCH_MASK                                   0x3
#define _CM1CON0_CCH0_POSN                                  0x0
#define _CM1CON0_CCH0_POSITION                              0x0
#define _CM1CON0_CCH0_SIZE                                  0x1
#define _CM1CON0_CCH0_LENGTH                                0x1
#define _CM1CON0_CCH0_MASK                                  0x1
#define _CM1CON0_CCH1_POSN                                  0x1
#define _CM1CON0_CCH1_POSITION                              0x1
#define _CM1CON0_CCH1_SIZE                                  0x1
#define _CM1CON0_CCH1_LENGTH                                0x1
#define _CM1CON0_CCH1_MASK                                  0x2

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0xF99);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0F99h");
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
        unsigned CREF                   :1;
        unsigned                        :1;
        unsigned CPOL                   :1;
        unsigned COE                    :1;
        unsigned COUT2                  :1;
        unsigned CON                    :1;
    };
    struct {
        unsigned CCH                    :2;
    };
    struct {
        unsigned CCH0                   :1;
        unsigned CCH1                   :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0xF99);
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
#define _CM2CON0_CREF_POSN                                  0x2
#define _CM2CON0_CREF_POSITION                              0x2
#define _CM2CON0_CREF_SIZE                                  0x1
#define _CM2CON0_CREF_LENGTH                                0x1
#define _CM2CON0_CREF_MASK                                  0x4
#define _CM2CON0_CPOL_POSN                                  0x4
#define _CM2CON0_CPOL_POSITION                              0x4
#define _CM2CON0_CPOL_SIZE                                  0x1
#define _CM2CON0_CPOL_LENGTH                                0x1
#define _CM2CON0_CPOL_MASK                                  0x10
#define _CM2CON0_COE_POSN                                   0x5
#define _CM2CON0_COE_POSITION                               0x5
#define _CM2CON0_COE_SIZE                                   0x1
#define _CM2CON0_COE_LENGTH                                 0x1
#define _CM2CON0_COE_MASK                                   0x20
#define _CM2CON0_COUT2_POSN                                 0x6
#define _CM2CON0_COUT2_POSITION                             0x6
#define _CM2CON0_COUT2_SIZE                                 0x1
#define _CM2CON0_COUT2_LENGTH                               0x1
#define _CM2CON0_COUT2_MASK                                 0x40
#define _CM2CON0_CON_POSN                                   0x7
#define _CM2CON0_CON_POSITION                               0x7
#define _CM2CON0_CON_SIZE                                   0x1
#define _CM2CON0_CON_LENGTH                                 0x1
#define _CM2CON0_CON_MASK                                   0x80
#define _CM2CON0_CCH_POSN                                   0x0
#define _CM2CON0_CCH_POSITION                               0x0
#define _CM2CON0_CCH_SIZE                                   0x2
#define _CM2CON0_CCH_LENGTH                                 0x2
#define _CM2CON0_CCH_MASK                                   0x3
#define _CM2CON0_CCH0_POSN                                  0x0
#define _CM2CON0_CCH0_POSITION                              0x0
#define _CM2CON0_CCH0_SIZE                                  0x1
#define _CM2CON0_CCH0_LENGTH                                0x1
#define _CM2CON0_CCH0_MASK                                  0x1
#define _CM2CON0_CCH1_POSN                                  0x1
#define _CM2CON0_CCH1_POSITION                              0x1
#define _CM2CON0_CCH1_SIZE                                  0x1
#define _CM2CON0_CCH1_LENGTH                                0x1
#define _CM2CON0_CCH1_MASK                                  0x2

// Register: CM2CON1
#define CM2CON1 CM2CON1
extern volatile unsigned char           CM2CON1             __at(0xF9A);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0F9Ah");
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
extern volatile CM2CON1bits_t CM2CON1bits __at(0xF9A);
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0xF9B);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :7;
        unsigned SPLLMULT               :1;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
        unsigned TUN6                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0xF9B);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x7
#define _OSCTUNE_TUN_LENGTH                                 0x7
#define _OSCTUNE_TUN_MASK                                   0x7F
#define _OSCTUNE_SPLLMULT_POSN                              0x7
#define _OSCTUNE_SPLLMULT_POSITION                          0x7
#define _OSCTUNE_SPLLMULT_SIZE                              0x1
#define _OSCTUNE_SPLLMULT_LENGTH                            0x1
#define _OSCTUNE_SPLLMULT_MASK                              0x80
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
#define _OSCTUNE_TUN6_POSN                                  0x6
#define _OSCTUNE_TUN6_POSITION                              0x6
#define _OSCTUNE_TUN6_SIZE                                  0x1
#define _OSCTUNE_TUN6_LENGTH                                0x1
#define _OSCTUNE_TUN6_MASK                                  0x40

// Register: HLVDCON
#define HLVDCON HLVDCON
extern volatile unsigned char           HLVDCON             __at(0xF9C);
#ifndef _LIB_BUILD
asm("HLVDCON equ 0F9Ch");
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
extern volatile HLVDCONbits_t HLVDCONbits __at(0xF9C);
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
        unsigned ACTIE                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IE                 :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned                        :1;
        unsigned STIE                   :1;
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
#define _PIE1_ACTIE_POSN                                    0x7
#define _PIE1_ACTIE_POSITION                                0x7
#define _PIE1_ACTIE_SIZE                                    0x1
#define _PIE1_ACTIE_LENGTH                                  0x1
#define _PIE1_ACTIE_MASK                                    0x80
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
#define _PIE1_STIE_POSN                                     0x7
#define _PIE1_STIE_POSITION                                 0x7
#define _PIE1_STIE_SIZE                                     0x1
#define _PIE1_STIE_LENGTH                                   0x1
#define _PIE1_STIE_MASK                                     0x80
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
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned ACTIF                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IF                 :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned                        :1;
        unsigned STIF                   :1;
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
#define _PIR1_ACTIF_POSN                                    0x7
#define _PIR1_ACTIF_POSITION                                0x7
#define _PIR1_ACTIF_SIZE                                    0x1
#define _PIR1_ACTIF_LENGTH                                  0x1
#define _PIR1_ACTIF_MASK                                    0x80
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
#define _PIR1_STIF_POSN                                     0x7
#define _PIR1_STIF_POSITION                                 0x7
#define _PIR1_STIF_SIZE                                     0x1
#define _PIR1_STIF_LENGTH                                   0x1
#define _PIR1_STIF_MASK                                     0x80
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
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
        unsigned ADIP                   :1;
        unsigned ACTIP                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SSP1IP                 :1;
        unsigned TX1IP                  :1;
        unsigned RC1IP                  :1;
        unsigned                        :1;
        unsigned STIP                   :1;
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
#define _IPR1_ACTIP_POSN                                    0x7
#define _IPR1_ACTIP_POSITION                                0x7
#define _IPR1_ACTIP_SIZE                                    0x1
#define _IPR1_ACTIP_LENGTH                                  0x1
#define _IPR1_ACTIP_MASK                                    0x80
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
#define _IPR1_STIP_POSN                                     0x7
#define _IPR1_STIP_POSITION                                 0x7
#define _IPR1_STIP_SIZE                                     0x1
#define _IPR1_STIP_LENGTH                                   0x1
#define _IPR1_STIP_MASK                                     0x80
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
        unsigned HLVDIE                 :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned C2IE                   :1;
        unsigned C1IE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIE                  :1;
        unsigned BCL1IE                 :1;
        unsigned                        :1;
        unsigned CM2IE                  :1;
        unsigned CM1IE                  :1;
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
#define _PIE2_HLVDIE_POSN                                   0x2
#define _PIE2_HLVDIE_POSITION                               0x2
#define _PIE2_HLVDIE_SIZE                                   0x1
#define _PIE2_HLVDIE_LENGTH                                 0x1
#define _PIE2_HLVDIE_MASK                                   0x4
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
#define _PIE2_CM2IE_POSN                                    0x5
#define _PIE2_CM2IE_POSITION                                0x5
#define _PIE2_CM2IE_SIZE                                    0x1
#define _PIE2_CM2IE_LENGTH                                  0x1
#define _PIE2_CM2IE_MASK                                    0x20
#define _PIE2_CM1IE_POSN                                    0x6
#define _PIE2_CM1IE_POSITION                                0x6
#define _PIE2_CM1IE_SIZE                                    0x1
#define _PIE2_CM1IE_LENGTH                                  0x1
#define _PIE2_CM1IE_MASK                                    0x40
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
        unsigned HLVDIF                 :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned C2IF                   :1;
        unsigned C1IF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIF                  :1;
        unsigned BCL1IF                 :1;
        unsigned                        :1;
        unsigned CM2IF                  :1;
        unsigned CM1IF                  :1;
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
#define _PIR2_HLVDIF_POSN                                   0x2
#define _PIR2_HLVDIF_POSITION                               0x2
#define _PIR2_HLVDIF_SIZE                                   0x1
#define _PIR2_HLVDIF_LENGTH                                 0x1
#define _PIR2_HLVDIF_MASK                                   0x4
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
#define _PIR2_CM2IF_POSN                                    0x5
#define _PIR2_CM2IF_POSITION                                0x5
#define _PIR2_CM2IF_SIZE                                    0x1
#define _PIR2_CM2IF_LENGTH                                  0x1
#define _PIR2_CM2IF_MASK                                    0x20
#define _PIR2_CM1IF_POSN                                    0x6
#define _PIR2_CM1IF_POSITION                                0x6
#define _PIR2_CM1IF_SIZE                                    0x1
#define _PIR2_CM1IF_LENGTH                                  0x1
#define _PIR2_CM1IF_MASK                                    0x40
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
        unsigned HLVDIP                 :1;
        unsigned BCLIP                  :1;
        unsigned EEIP                   :1;
        unsigned C2IP                   :1;
        unsigned C1IP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIP                  :1;
        unsigned BCL1IP                 :1;
        unsigned                        :1;
        unsigned CM2IP                  :1;
        unsigned CM1IP                  :1;
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
#define _IPR2_HLVDIP_POSN                                   0x2
#define _IPR2_HLVDIP_POSITION                               0x2
#define _IPR2_HLVDIP_SIZE                                   0x1
#define _IPR2_HLVDIP_LENGTH                                 0x1
#define _IPR2_HLVDIP_MASK                                   0x4
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
#define _IPR2_CM2IP_POSN                                    0x5
#define _IPR2_CM2IP_POSITION                                0x5
#define _IPR2_CM2IP_SIZE                                    0x1
#define _IPR2_CM2IP_LENGTH                                  0x1
#define _IPR2_CM2IP_MASK                                    0x20
#define _IPR2_CM1IP_POSN                                    0x6
#define _IPR2_CM1IP_POSITION                                0x6
#define _IPR2_CM1IP_SIZE                                    0x1
#define _IPR2_CM1IP_LENGTH                                  0x1
#define _IPR2_CM1IP_MASK                                    0x40
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
        unsigned TMR1GIE                :1;
        unsigned TMR3GIE                :1;
        unsigned USBIE                  :1;
        unsigned CTMUIE                 :1;
    };
    struct {
        unsigned RXB0IE                 :1;
        unsigned RXB1IE                 :1;
        unsigned TXB0IE                 :1;
        unsigned TXB1IE                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0xFA3);
// bitfield macros
#define _PIE3_TMR1GIE_POSN                                  0x0
#define _PIE3_TMR1GIE_POSITION                              0x0
#define _PIE3_TMR1GIE_SIZE                                  0x1
#define _PIE3_TMR1GIE_LENGTH                                0x1
#define _PIE3_TMR1GIE_MASK                                  0x1
#define _PIE3_TMR3GIE_POSN                                  0x1
#define _PIE3_TMR3GIE_POSITION                              0x1
#define _PIE3_TMR3GIE_SIZE                                  0x1
#define _PIE3_TMR3GIE_LENGTH                                0x1
#define _PIE3_TMR3GIE_MASK                                  0x2
#define _PIE3_USBIE_POSN                                    0x2
#define _PIE3_USBIE_POSITION                                0x2
#define _PIE3_USBIE_SIZE                                    0x1
#define _PIE3_USBIE_LENGTH                                  0x1
#define _PIE3_USBIE_MASK                                    0x4
#define _PIE3_CTMUIE_POSN                                   0x3
#define _PIE3_CTMUIE_POSITION                               0x3
#define _PIE3_CTMUIE_SIZE                                   0x1
#define _PIE3_CTMUIE_LENGTH                                 0x1
#define _PIE3_CTMUIE_MASK                                   0x8
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
#define _PIE3_RXBNIE_POSN                                   0x1
#define _PIE3_RXBNIE_POSITION                               0x1
#define _PIE3_RXBNIE_SIZE                                   0x1
#define _PIE3_RXBNIE_LENGTH                                 0x1
#define _PIE3_RXBNIE_MASK                                   0x2

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0xFA4);
#ifndef _LIB_BUILD
asm("PIR3 equ 0FA4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1GIF                :1;
        unsigned TMR3GIF                :1;
        unsigned USBIF                  :1;
        unsigned CTMUIF                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIF                 :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0xFA4);
// bitfield macros
#define _PIR3_TMR1GIF_POSN                                  0x0
#define _PIR3_TMR1GIF_POSITION                              0x0
#define _PIR3_TMR1GIF_SIZE                                  0x1
#define _PIR3_TMR1GIF_LENGTH                                0x1
#define _PIR3_TMR1GIF_MASK                                  0x1
#define _PIR3_TMR3GIF_POSN                                  0x1
#define _PIR3_TMR3GIF_POSITION                              0x1
#define _PIR3_TMR3GIF_SIZE                                  0x1
#define _PIR3_TMR3GIF_LENGTH                                0x1
#define _PIR3_TMR3GIF_MASK                                  0x2
#define _PIR3_USBIF_POSN                                    0x2
#define _PIR3_USBIF_POSITION                                0x2
#define _PIR3_USBIF_SIZE                                    0x1
#define _PIR3_USBIF_LENGTH                                  0x1
#define _PIR3_USBIF_MASK                                    0x4
#define _PIR3_CTMUIF_POSN                                   0x3
#define _PIR3_CTMUIF_POSITION                               0x3
#define _PIR3_CTMUIF_SIZE                                   0x1
#define _PIR3_CTMUIF_LENGTH                                 0x1
#define _PIR3_CTMUIF_MASK                                   0x8
#define _PIR3_RXBNIF_POSN                                   0x1
#define _PIR3_RXBNIF_POSITION                               0x1
#define _PIR3_RXBNIF_SIZE                                   0x1
#define _PIR3_RXBNIF_LENGTH                                 0x1
#define _PIR3_RXBNIF_MASK                                   0x2

// Register: IPR3
#define IPR3 IPR3
extern volatile unsigned char           IPR3                __at(0xFA5);
#ifndef _LIB_BUILD
asm("IPR3 equ 0FA5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1GIP                :1;
        unsigned TMR3GIP                :1;
        unsigned USBIP                  :1;
        unsigned CTMUIP                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned RXBNIP                 :1;
    };
} IPR3bits_t;
extern volatile IPR3bits_t IPR3bits __at(0xFA5);
// bitfield macros
#define _IPR3_TMR1GIP_POSN                                  0x0
#define _IPR3_TMR1GIP_POSITION                              0x0
#define _IPR3_TMR1GIP_SIZE                                  0x1
#define _IPR3_TMR1GIP_LENGTH                                0x1
#define _IPR3_TMR1GIP_MASK                                  0x1
#define _IPR3_TMR3GIP_POSN                                  0x1
#define _IPR3_TMR3GIP_POSITION                              0x1
#define _IPR3_TMR3GIP_SIZE                                  0x1
#define _IPR3_TMR3GIP_LENGTH                                0x1
#define _IPR3_TMR3GIP_MASK                                  0x2
#define _IPR3_USBIP_POSN                                    0x2
#define _IPR3_USBIP_POSITION                                0x2
#define _IPR3_USBIP_SIZE                                    0x1
#define _IPR3_USBIP_LENGTH                                  0x1
#define _IPR3_USBIP_MASK                                    0x4
#define _IPR3_CTMUIP_POSN                                   0x3
#define _IPR3_CTMUIP_POSITION                               0x3
#define _IPR3_CTMUIP_SIZE                                   0x1
#define _IPR3_CTMUIP_LENGTH                                 0x1
#define _IPR3_CTMUIP_MASK                                   0x8
#define _IPR3_RXBNIP_POSN                                   0x1
#define _IPR3_RXBNIP_POSITION                               0x1
#define _IPR3_RXBNIP_SIZE                                   0x1
#define _IPR3_RXBNIP_LENGTH                                 0x1
#define _IPR3_RXBNIP_MASK                                   0x2

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
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
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
#define _RCSTA1_ADEN_POSN                                   0x3
#define _RCSTA1_ADEN_POSITION                               0x3
#define _RCSTA1_ADEN_SIZE                                   0x1
#define _RCSTA1_ADEN_LENGTH                                 0x1
#define _RCSTA1_ADEN_MASK                                   0x8
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1
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
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
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
#define _RCSTA_ADEN_POSN                                    0x3
#define _RCSTA_ADEN_POSITION                                0x3
#define _RCSTA_ADEN_SIZE                                    0x1
#define _RCSTA_ADEN_LENGTH                                  0x1
#define _RCSTA_ADEN_MASK                                    0x8
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
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
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
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
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
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
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
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
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
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
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80
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
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20

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
    struct {
        unsigned BRG0                   :1;
        unsigned BRG1                   :1;
        unsigned BRG2                   :1;
        unsigned BRG3                   :1;
        unsigned BRG4                   :1;
        unsigned BRG5                   :1;
        unsigned BRG6                   :1;
        unsigned BRG7                   :1;
    };
} SPBRG1bits_t;
extern volatile SPBRG1bits_t SPBRG1bits __at(0xFAF);
// bitfield macros
#define _SPBRG1_SPBRG1_POSN                                 0x0
#define _SPBRG1_SPBRG1_POSITION                             0x0
#define _SPBRG1_SPBRG1_SIZE                                 0x8
#define _SPBRG1_SPBRG1_LENGTH                               0x8
#define _SPBRG1_SPBRG1_MASK                                 0xFF
#define _SPBRG1_BRG0_POSN                                   0x0
#define _SPBRG1_BRG0_POSITION                               0x0
#define _SPBRG1_BRG0_SIZE                                   0x1
#define _SPBRG1_BRG0_LENGTH                                 0x1
#define _SPBRG1_BRG0_MASK                                   0x1
#define _SPBRG1_BRG1_POSN                                   0x1
#define _SPBRG1_BRG1_POSITION                               0x1
#define _SPBRG1_BRG1_SIZE                                   0x1
#define _SPBRG1_BRG1_LENGTH                                 0x1
#define _SPBRG1_BRG1_MASK                                   0x2
#define _SPBRG1_BRG2_POSN                                   0x2
#define _SPBRG1_BRG2_POSITION                               0x2
#define _SPBRG1_BRG2_SIZE                                   0x1
#define _SPBRG1_BRG2_LENGTH                                 0x1
#define _SPBRG1_BRG2_MASK                                   0x4
#define _SPBRG1_BRG3_POSN                                   0x3
#define _SPBRG1_BRG3_POSITION                               0x3
#define _SPBRG1_BRG3_SIZE                                   0x1
#define _SPBRG1_BRG3_LENGTH                                 0x1
#define _SPBRG1_BRG3_MASK                                   0x8
#define _SPBRG1_BRG4_POSN                                   0x4
#define _SPBRG1_BRG4_POSITION                               0x4
#define _SPBRG1_BRG4_SIZE                                   0x1
#define _SPBRG1_BRG4_LENGTH                                 0x1
#define _SPBRG1_BRG4_MASK                                   0x10
#define _SPBRG1_BRG5_POSN                                   0x5
#define _SPBRG1_BRG5_POSITION                               0x5
#define _SPBRG1_BRG5_SIZE                                   0x1
#define _SPBRG1_BRG5_LENGTH                                 0x1
#define _SPBRG1_BRG5_MASK                                   0x20
#define _SPBRG1_BRG6_POSN                                   0x6
#define _SPBRG1_BRG6_POSITION                               0x6
#define _SPBRG1_BRG6_SIZE                                   0x1
#define _SPBRG1_BRG6_LENGTH                                 0x1
#define _SPBRG1_BRG6_MASK                                   0x40
#define _SPBRG1_BRG7_POSN                                   0x7
#define _SPBRG1_BRG7_POSITION                               0x7
#define _SPBRG1_BRG7_SIZE                                   0x1
#define _SPBRG1_BRG7_LENGTH                                 0x1
#define _SPBRG1_BRG7_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRG1                 :8;
    };
    struct {
        unsigned BRG0                   :1;
        unsigned BRG1                   :1;
        unsigned BRG2                   :1;
        unsigned BRG3                   :1;
        unsigned BRG4                   :1;
        unsigned BRG5                   :1;
        unsigned BRG6                   :1;
        unsigned BRG7                   :1;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0xFAF);
// bitfield macros
#define _SPBRG_SPBRG1_POSN                                  0x0
#define _SPBRG_SPBRG1_POSITION                              0x0
#define _SPBRG_SPBRG1_SIZE                                  0x8
#define _SPBRG_SPBRG1_LENGTH                                0x8
#define _SPBRG_SPBRG1_MASK                                  0xFF
#define _SPBRG_BRG0_POSN                                    0x0
#define _SPBRG_BRG0_POSITION                                0x0
#define _SPBRG_BRG0_SIZE                                    0x1
#define _SPBRG_BRG0_LENGTH                                  0x1
#define _SPBRG_BRG0_MASK                                    0x1
#define _SPBRG_BRG1_POSN                                    0x1
#define _SPBRG_BRG1_POSITION                                0x1
#define _SPBRG_BRG1_SIZE                                    0x1
#define _SPBRG_BRG1_LENGTH                                  0x1
#define _SPBRG_BRG1_MASK                                    0x2
#define _SPBRG_BRG2_POSN                                    0x2
#define _SPBRG_BRG2_POSITION                                0x2
#define _SPBRG_BRG2_SIZE                                    0x1
#define _SPBRG_BRG2_LENGTH                                  0x1
#define _SPBRG_BRG2_MASK                                    0x4
#define _SPBRG_BRG3_POSN                                    0x3
#define _SPBRG_BRG3_POSITION                                0x3
#define _SPBRG_BRG3_SIZE                                    0x1
#define _SPBRG_BRG3_LENGTH                                  0x1
#define _SPBRG_BRG3_MASK                                    0x8
#define _SPBRG_BRG4_POSN                                    0x4
#define _SPBRG_BRG4_POSITION                                0x4
#define _SPBRG_BRG4_SIZE                                    0x1
#define _SPBRG_BRG4_LENGTH                                  0x1
#define _SPBRG_BRG4_MASK                                    0x10
#define _SPBRG_BRG5_POSN                                    0x5
#define _SPBRG_BRG5_POSITION                                0x5
#define _SPBRG_BRG5_SIZE                                    0x1
#define _SPBRG_BRG5_LENGTH                                  0x1
#define _SPBRG_BRG5_MASK                                    0x20
#define _SPBRG_BRG6_POSN                                    0x6
#define _SPBRG_BRG6_POSITION                                0x6
#define _SPBRG_BRG6_SIZE                                    0x1
#define _SPBRG_BRG6_LENGTH                                  0x1
#define _SPBRG_BRG6_MASK                                    0x40
#define _SPBRG_BRG7_POSN                                    0x7
#define _SPBRG_BRG7_POSITION                                0x7
#define _SPBRG_BRG7_SIZE                                    0x1
#define _SPBRG_BRG7_LENGTH                                  0x1
#define _SPBRG_BRG7_MASK                                    0x80

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
extern volatile unsigned char           SPBRGH1             __at(0xFB0);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 0FB0h");
#endif
// aliases
extern volatile unsigned char           SPBRGH              __at(0xFB0);
#ifndef _LIB_BUILD
asm("SPBRGH equ 0FB0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH1                :8;
    };
    struct {
        unsigned BRG8                   :1;
        unsigned BRG9                   :1;
        unsigned BRG10                  :1;
        unsigned BRG11                  :1;
        unsigned BRG12                  :1;
        unsigned BRG13                  :1;
        unsigned BRG14                  :1;
        unsigned BRG15                  :1;
    };
} SPBRGH1bits_t;
extern volatile SPBRGH1bits_t SPBRGH1bits __at(0xFB0);
// bitfield macros
#define _SPBRGH1_SPBRGH1_POSN                               0x0
#define _SPBRGH1_SPBRGH1_POSITION                           0x0
#define _SPBRGH1_SPBRGH1_SIZE                               0x8
#define _SPBRGH1_SPBRGH1_LENGTH                             0x8
#define _SPBRGH1_SPBRGH1_MASK                               0xFF
#define _SPBRGH1_BRG8_POSN                                  0x0
#define _SPBRGH1_BRG8_POSITION                              0x0
#define _SPBRGH1_BRG8_SIZE                                  0x1
#define _SPBRGH1_BRG8_LENGTH                                0x1
#define _SPBRGH1_BRG8_MASK                                  0x1
#define _SPBRGH1_BRG9_POSN                                  0x1
#define _SPBRGH1_BRG9_POSITION                              0x1
#define _SPBRGH1_BRG9_SIZE                                  0x1
#define _SPBRGH1_BRG9_LENGTH                                0x1
#define _SPBRGH1_BRG9_MASK                                  0x2
#define _SPBRGH1_BRG10_POSN                                 0x2
#define _SPBRGH1_BRG10_POSITION                             0x2
#define _SPBRGH1_BRG10_SIZE                                 0x1
#define _SPBRGH1_BRG10_LENGTH                               0x1
#define _SPBRGH1_BRG10_MASK                                 0x4
#define _SPBRGH1_BRG11_POSN                                 0x3
#define _SPBRGH1_BRG11_POSITION                             0x3
#define _SPBRGH1_BRG11_SIZE                                 0x1
#define _SPBRGH1_BRG11_LENGTH                               0x1
#define _SPBRGH1_BRG11_MASK                                 0x8
#define _SPBRGH1_BRG12_POSN                                 0x4
#define _SPBRGH1_BRG12_POSITION                             0x4
#define _SPBRGH1_BRG12_SIZE                                 0x1
#define _SPBRGH1_BRG12_LENGTH                               0x1
#define _SPBRGH1_BRG12_MASK                                 0x10
#define _SPBRGH1_BRG13_POSN                                 0x5
#define _SPBRGH1_BRG13_POSITION                             0x5
#define _SPBRGH1_BRG13_SIZE                                 0x1
#define _SPBRGH1_BRG13_LENGTH                               0x1
#define _SPBRGH1_BRG13_MASK                                 0x20
#define _SPBRGH1_BRG14_POSN                                 0x6
#define _SPBRGH1_BRG14_POSITION                             0x6
#define _SPBRGH1_BRG14_SIZE                                 0x1
#define _SPBRGH1_BRG14_LENGTH                               0x1
#define _SPBRGH1_BRG14_MASK                                 0x40
#define _SPBRGH1_BRG15_POSN                                 0x7
#define _SPBRGH1_BRG15_POSITION                             0x7
#define _SPBRGH1_BRG15_SIZE                                 0x1
#define _SPBRGH1_BRG15_LENGTH                               0x1
#define _SPBRGH1_BRG15_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH1                :8;
    };
    struct {
        unsigned BRG8                   :1;
        unsigned BRG9                   :1;
        unsigned BRG10                  :1;
        unsigned BRG11                  :1;
        unsigned BRG12                  :1;
        unsigned BRG13                  :1;
        unsigned BRG14                  :1;
        unsigned BRG15                  :1;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0xFB0);
// bitfield macros
#define _SPBRGH_SPBRGH1_POSN                                0x0
#define _SPBRGH_SPBRGH1_POSITION                            0x0
#define _SPBRGH_SPBRGH1_SIZE                                0x8
#define _SPBRGH_SPBRGH1_LENGTH                              0x8
#define _SPBRGH_SPBRGH1_MASK                                0xFF
#define _SPBRGH_BRG8_POSN                                   0x0
#define _SPBRGH_BRG8_POSITION                               0x0
#define _SPBRGH_BRG8_SIZE                                   0x1
#define _SPBRGH_BRG8_LENGTH                                 0x1
#define _SPBRGH_BRG8_MASK                                   0x1
#define _SPBRGH_BRG9_POSN                                   0x1
#define _SPBRGH_BRG9_POSITION                               0x1
#define _SPBRGH_BRG9_SIZE                                   0x1
#define _SPBRGH_BRG9_LENGTH                                 0x1
#define _SPBRGH_BRG9_MASK                                   0x2
#define _SPBRGH_BRG10_POSN                                  0x2
#define _SPBRGH_BRG10_POSITION                              0x2
#define _SPBRGH_BRG10_SIZE                                  0x1
#define _SPBRGH_BRG10_LENGTH                                0x1
#define _SPBRGH_BRG10_MASK                                  0x4
#define _SPBRGH_BRG11_POSN                                  0x3
#define _SPBRGH_BRG11_POSITION                              0x3
#define _SPBRGH_BRG11_SIZE                                  0x1
#define _SPBRGH_BRG11_LENGTH                                0x1
#define _SPBRGH_BRG11_MASK                                  0x8
#define _SPBRGH_BRG12_POSN                                  0x4
#define _SPBRGH_BRG12_POSITION                              0x4
#define _SPBRGH_BRG12_SIZE                                  0x1
#define _SPBRGH_BRG12_LENGTH                                0x1
#define _SPBRGH_BRG12_MASK                                  0x10
#define _SPBRGH_BRG13_POSN                                  0x5
#define _SPBRGH_BRG13_POSITION                              0x5
#define _SPBRGH_BRG13_SIZE                                  0x1
#define _SPBRGH_BRG13_LENGTH                                0x1
#define _SPBRGH_BRG13_MASK                                  0x20
#define _SPBRGH_BRG14_POSN                                  0x6
#define _SPBRGH_BRG14_POSITION                              0x6
#define _SPBRGH_BRG14_SIZE                                  0x1
#define _SPBRGH_BRG14_LENGTH                                0x1
#define _SPBRGH_BRG14_MASK                                  0x40
#define _SPBRGH_BRG15_POSN                                  0x7
#define _SPBRGH_BRG15_POSITION                              0x7
#define _SPBRGH_BRG15_SIZE                                  0x1
#define _SPBRGH_BRG15_LENGTH                                0x1
#define _SPBRGH_BRG15_MASK                                  0x80

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
        unsigned RD16                   :1;
        unsigned nT3SYNC                :1;
        unsigned SOSCEN                 :1;
        unsigned T3CKPS                 :2;
        unsigned TMR3CS                 :2;
    };
    struct {
        unsigned                        :1;
        unsigned T3RD16                 :1;
        unsigned T3SYNC                 :1;
        unsigned T3SOSCEN               :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
        unsigned TMR3CS0                :1;
        unsigned TMR3CS1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3OSCEN                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
        unsigned                        :3;
        unsigned RD163                  :1;
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
#define _T3CON_RD16_POSN                                    0x1
#define _T3CON_RD16_POSITION                                0x1
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_SOSCEN_POSN                                  0x3
#define _T3CON_SOSCEN_POSITION                              0x3
#define _T3CON_SOSCEN_SIZE                                  0x1
#define _T3CON_SOSCEN_LENGTH                                0x1
#define _T3CON_SOSCEN_MASK                                  0x8
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
#define _T3CON_T3RD16_POSN                                  0x1
#define _T3CON_T3RD16_POSITION                              0x1
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x2
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
#define _T3CON_T3SOSCEN_POSN                                0x3
#define _T3CON_T3SOSCEN_POSITION                            0x3
#define _T3CON_T3SOSCEN_SIZE                                0x1
#define _T3CON_T3SOSCEN_LENGTH                              0x1
#define _T3CON_T3SOSCEN_MASK                                0x8
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
#define _T3CON_T3OSCEN_POSN                                 0x3
#define _T3CON_T3OSCEN_POSITION                             0x3
#define _T3CON_T3OSCEN_SIZE                                 0x1
#define _T3CON_T3OSCEN_LENGTH                               0x1
#define _T3CON_T3OSCEN_MASK                                 0x8
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

// Register: T3GCON
#define T3GCON T3GCON
extern volatile unsigned char           T3GCON              __at(0xFB4);
#ifndef _LIB_BUILD
asm("T3GCON equ 0FB4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned T3GGO_NOT_T3DONE       :1;
    };
    struct {
        unsigned T3GSS                  :2;
        unsigned T3GVAL                 :1;
        unsigned T3GGO_nT3DONE          :1;
        unsigned T3GSPM                 :1;
        unsigned T3GTM                  :1;
        unsigned T3GPOL                 :1;
        unsigned TMR3GE                 :1;
    };
    struct {
        unsigned T3GSS0                 :1;
        unsigned T3GSS1                 :1;
        unsigned                        :1;
        unsigned T3GGO                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_T3DONE             :1;
    };
    struct {
        unsigned                        :3;
        unsigned nT3DONE                :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3DONE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3GGO_NOT_DONE         :1;
    };
    struct {
        unsigned                        :3;
        unsigned T3GGO_nDONE            :1;
    };
} T3GCONbits_t;
extern volatile T3GCONbits_t T3GCONbits __at(0xFB4);
// bitfield macros
#define _T3GCON_T3GGO_NOT_T3DONE_POSN                       0x3
#define _T3GCON_T3GGO_NOT_T3DONE_POSITION                   0x3
#define _T3GCON_T3GGO_NOT_T3DONE_SIZE                       0x1
#define _T3GCON_T3GGO_NOT_T3DONE_LENGTH                     0x1
#define _T3GCON_T3GGO_NOT_T3DONE_MASK                       0x8
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
#define _T3GCON_T3GGO_nT3DONE_POSN                          0x3
#define _T3GCON_T3GGO_nT3DONE_POSITION                      0x3
#define _T3GCON_T3GGO_nT3DONE_SIZE                          0x1
#define _T3GCON_T3GGO_nT3DONE_LENGTH                        0x1
#define _T3GCON_T3GGO_nT3DONE_MASK                          0x8
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
#define _T3GCON_T3GGO_POSN                                  0x3
#define _T3GCON_T3GGO_POSITION                              0x3
#define _T3GCON_T3GGO_SIZE                                  0x1
#define _T3GCON_T3GGO_LENGTH                                0x1
#define _T3GCON_T3GGO_MASK                                  0x8
#define _T3GCON_NOT_T3DONE_POSN                             0x3
#define _T3GCON_NOT_T3DONE_POSITION                         0x3
#define _T3GCON_NOT_T3DONE_SIZE                             0x1
#define _T3GCON_NOT_T3DONE_LENGTH                           0x1
#define _T3GCON_NOT_T3DONE_MASK                             0x8
#define _T3GCON_nT3DONE_POSN                                0x3
#define _T3GCON_nT3DONE_POSITION                            0x3
#define _T3GCON_nT3DONE_SIZE                                0x1
#define _T3GCON_nT3DONE_LENGTH                              0x1
#define _T3GCON_nT3DONE_MASK                                0x8
#define _T3GCON_T3DONE_POSN                                 0x3
#define _T3GCON_T3DONE_POSITION                             0x3
#define _T3GCON_T3DONE_SIZE                                 0x1
#define _T3GCON_T3DONE_LENGTH                               0x1
#define _T3GCON_T3DONE_MASK                                 0x8
#define _T3GCON_T3GGO_NOT_DONE_POSN                         0x3
#define _T3GCON_T3GGO_NOT_DONE_POSITION                     0x3
#define _T3GCON_T3GGO_NOT_DONE_SIZE                         0x1
#define _T3GCON_T3GGO_NOT_DONE_LENGTH                       0x1
#define _T3GCON_T3GGO_NOT_DONE_MASK                         0x8
#define _T3GCON_T3GGO_nDONE_POSN                            0x3
#define _T3GCON_T3GGO_nDONE_POSITION                        0x3
#define _T3GCON_T3GGO_nDONE_SIZE                            0x1
#define _T3GCON_T3GGO_nDONE_LENGTH                          0x1
#define _T3GCON_T3GGO_nDONE_MASK                            0x8

// Register: ACTCON
#define ACTCON ACTCON
extern volatile unsigned char           ACTCON              __at(0xFB5);
#ifndef _LIB_BUILD
asm("ACTCON equ 0FB5h");
#endif
// aliases
extern volatile unsigned char           STCON               __at(0xFB5);
#ifndef _LIB_BUILD
asm("STCON equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ACTORS                 :1;
        unsigned                        :1;
        unsigned ACTLOCK                :1;
        unsigned ACTSRC                 :1;
        unsigned                        :1;
        unsigned ACTUD                  :1;
        unsigned ACTEN                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned STOR                   :1;
        unsigned                        :1;
        unsigned STLOCK                 :1;
        unsigned STSRC                  :1;
        unsigned                        :1;
        unsigned STUD                   :1;
        unsigned STEN                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned ACTOR                  :1;
        unsigned                        :4;
        unsigned ACTD                   :1;
        unsigned ACTSEL                 :1;
    };
} ACTCONbits_t;
extern volatile ACTCONbits_t ACTCONbits __at(0xFB5);
// bitfield macros
#define _ACTCON_ACTORS_POSN                                 0x1
#define _ACTCON_ACTORS_POSITION                             0x1
#define _ACTCON_ACTORS_SIZE                                 0x1
#define _ACTCON_ACTORS_LENGTH                               0x1
#define _ACTCON_ACTORS_MASK                                 0x2
#define _ACTCON_ACTLOCK_POSN                                0x3
#define _ACTCON_ACTLOCK_POSITION                            0x3
#define _ACTCON_ACTLOCK_SIZE                                0x1
#define _ACTCON_ACTLOCK_LENGTH                              0x1
#define _ACTCON_ACTLOCK_MASK                                0x8
#define _ACTCON_ACTSRC_POSN                                 0x4
#define _ACTCON_ACTSRC_POSITION                             0x4
#define _ACTCON_ACTSRC_SIZE                                 0x1
#define _ACTCON_ACTSRC_LENGTH                               0x1
#define _ACTCON_ACTSRC_MASK                                 0x10
#define _ACTCON_ACTUD_POSN                                  0x6
#define _ACTCON_ACTUD_POSITION                              0x6
#define _ACTCON_ACTUD_SIZE                                  0x1
#define _ACTCON_ACTUD_LENGTH                                0x1
#define _ACTCON_ACTUD_MASK                                  0x40
#define _ACTCON_ACTEN_POSN                                  0x7
#define _ACTCON_ACTEN_POSITION                              0x7
#define _ACTCON_ACTEN_SIZE                                  0x1
#define _ACTCON_ACTEN_LENGTH                                0x1
#define _ACTCON_ACTEN_MASK                                  0x80
#define _ACTCON_STOR_POSN                                   0x1
#define _ACTCON_STOR_POSITION                               0x1
#define _ACTCON_STOR_SIZE                                   0x1
#define _ACTCON_STOR_LENGTH                                 0x1
#define _ACTCON_STOR_MASK                                   0x2
#define _ACTCON_STLOCK_POSN                                 0x3
#define _ACTCON_STLOCK_POSITION                             0x3
#define _ACTCON_STLOCK_SIZE                                 0x1
#define _ACTCON_STLOCK_LENGTH                               0x1
#define _ACTCON_STLOCK_MASK                                 0x8
#define _ACTCON_STSRC_POSN                                  0x4
#define _ACTCON_STSRC_POSITION                              0x4
#define _ACTCON_STSRC_SIZE                                  0x1
#define _ACTCON_STSRC_LENGTH                                0x1
#define _ACTCON_STSRC_MASK                                  0x10
#define _ACTCON_STUD_POSN                                   0x6
#define _ACTCON_STUD_POSITION                               0x6
#define _ACTCON_STUD_SIZE                                   0x1
#define _ACTCON_STUD_LENGTH                                 0x1
#define _ACTCON_STUD_MASK                                   0x40
#define _ACTCON_STEN_POSN                                   0x7
#define _ACTCON_STEN_POSITION                               0x7
#define _ACTCON_STEN_SIZE                                   0x1
#define _ACTCON_STEN_LENGTH                                 0x1
#define _ACTCON_STEN_MASK                                   0x80
#define _ACTCON_ACTOR_POSN                                  0x1
#define _ACTCON_ACTOR_POSITION                              0x1
#define _ACTCON_ACTOR_SIZE                                  0x1
#define _ACTCON_ACTOR_LENGTH                                0x1
#define _ACTCON_ACTOR_MASK                                  0x2
#define _ACTCON_ACTD_POSN                                   0x6
#define _ACTCON_ACTD_POSITION                               0x6
#define _ACTCON_ACTD_SIZE                                   0x1
#define _ACTCON_ACTD_LENGTH                                 0x1
#define _ACTCON_ACTD_MASK                                   0x40
#define _ACTCON_ACTSEL_POSN                                 0x7
#define _ACTCON_ACTSEL_POSITION                             0x7
#define _ACTCON_ACTSEL_SIZE                                 0x1
#define _ACTCON_ACTSEL_LENGTH                               0x1
#define _ACTCON_ACTSEL_MASK                                 0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ACTORS                 :1;
        unsigned                        :1;
        unsigned ACTLOCK                :1;
        unsigned ACTSRC                 :1;
        unsigned                        :1;
        unsigned ACTUD                  :1;
        unsigned ACTEN                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned STOR                   :1;
        unsigned                        :1;
        unsigned STLOCK                 :1;
        unsigned STSRC                  :1;
        unsigned                        :1;
        unsigned STUD                   :1;
        unsigned STEN                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned ACTOR                  :1;
        unsigned                        :4;
        unsigned ACTD                   :1;
        unsigned ACTSEL                 :1;
    };
} STCONbits_t;
extern volatile STCONbits_t STCONbits __at(0xFB5);
// bitfield macros
#define _STCON_ACTORS_POSN                                  0x1
#define _STCON_ACTORS_POSITION                              0x1
#define _STCON_ACTORS_SIZE                                  0x1
#define _STCON_ACTORS_LENGTH                                0x1
#define _STCON_ACTORS_MASK                                  0x2
#define _STCON_ACTLOCK_POSN                                 0x3
#define _STCON_ACTLOCK_POSITION                             0x3
#define _STCON_ACTLOCK_SIZE                                 0x1
#define _STCON_ACTLOCK_LENGTH                               0x1
#define _STCON_ACTLOCK_MASK                                 0x8
#define _STCON_ACTSRC_POSN                                  0x4
#define _STCON_ACTSRC_POSITION                              0x4
#define _STCON_ACTSRC_SIZE                                  0x1
#define _STCON_ACTSRC_LENGTH                                0x1
#define _STCON_ACTSRC_MASK                                  0x10
#define _STCON_ACTUD_POSN                                   0x6
#define _STCON_ACTUD_POSITION                               0x6
#define _STCON_ACTUD_SIZE                                   0x1
#define _STCON_ACTUD_LENGTH                                 0x1
#define _STCON_ACTUD_MASK                                   0x40
#define _STCON_ACTEN_POSN                                   0x7
#define _STCON_ACTEN_POSITION                               0x7
#define _STCON_ACTEN_SIZE                                   0x1
#define _STCON_ACTEN_LENGTH                                 0x1
#define _STCON_ACTEN_MASK                                   0x80
#define _STCON_STOR_POSN                                    0x1
#define _STCON_STOR_POSITION                                0x1
#define _STCON_STOR_SIZE                                    0x1
#define _STCON_STOR_LENGTH                                  0x1
#define _STCON_STOR_MASK                                    0x2
#define _STCON_STLOCK_POSN                                  0x3
#define _STCON_STLOCK_POSITION                              0x3
#define _STCON_STLOCK_SIZE                                  0x1
#define _STCON_STLOCK_LENGTH                                0x1
#define _STCON_STLOCK_MASK                                  0x8
#define _STCON_STSRC_POSN                                   0x4
#define _STCON_STSRC_POSITION                               0x4
#define _STCON_STSRC_SIZE                                   0x1
#define _STCON_STSRC_LENGTH                                 0x1
#define _STCON_STSRC_MASK                                   0x10
#define _STCON_STUD_POSN                                    0x6
#define _STCON_STUD_POSITION                                0x6
#define _STCON_STUD_SIZE                                    0x1
#define _STCON_STUD_LENGTH                                  0x1
#define _STCON_STUD_MASK                                    0x40
#define _STCON_STEN_POSN                                    0x7
#define _STCON_STEN_POSITION                                0x7
#define _STCON_STEN_SIZE                                    0x1
#define _STCON_STEN_LENGTH                                  0x1
#define _STCON_STEN_MASK                                    0x80
#define _STCON_ACTOR_POSN                                   0x1
#define _STCON_ACTOR_POSITION                               0x1
#define _STCON_ACTOR_SIZE                                   0x1
#define _STCON_ACTOR_LENGTH                                 0x1
#define _STCON_ACTOR_MASK                                   0x2
#define _STCON_ACTD_POSN                                    0x6
#define _STCON_ACTD_POSITION                                0x6
#define _STCON_ACTD_SIZE                                    0x1
#define _STCON_ACTD_LENGTH                                  0x1
#define _STCON_ACTD_MASK                                    0x40
#define _STCON_ACTSEL_POSN                                  0x7
#define _STCON_ACTSEL_POSITION                              0x7
#define _STCON_ACTSEL_SIZE                                  0x1
#define _STCON_ACTSEL_LENGTH                                0x1
#define _STCON_ACTSEL_MASK                                  0x80

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
extern volatile unsigned char           ECCP1AS             __at(0xFB6);
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
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
        unsigned CCP1ASE                :1;
    };
    struct {
        unsigned P1SSBD                 :2;
        unsigned P1SSAC                 :2;
        unsigned CCP1AS                 :3;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits __at(0xFB6);
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
#define _ECCP1AS_CCP1ASE_POSN                               0x7
#define _ECCP1AS_CCP1ASE_POSITION                           0x7
#define _ECCP1AS_CCP1ASE_SIZE                               0x1
#define _ECCP1AS_CCP1ASE_LENGTH                             0x1
#define _ECCP1AS_CCP1ASE_MASK                               0x80
#define _ECCP1AS_P1SSBD_POSN                                0x0
#define _ECCP1AS_P1SSBD_POSITION                            0x0
#define _ECCP1AS_P1SSBD_SIZE                                0x2
#define _ECCP1AS_P1SSBD_LENGTH                              0x2
#define _ECCP1AS_P1SSBD_MASK                                0x3
#define _ECCP1AS_P1SSAC_POSN                                0x2
#define _ECCP1AS_P1SSAC_POSITION                            0x2
#define _ECCP1AS_P1SSAC_SIZE                                0x2
#define _ECCP1AS_P1SSAC_LENGTH                              0x2
#define _ECCP1AS_P1SSAC_MASK                                0xC
#define _ECCP1AS_CCP1AS_POSN                                0x4
#define _ECCP1AS_CCP1AS_POSITION                            0x4
#define _ECCP1AS_CCP1AS_SIZE                                0x3
#define _ECCP1AS_CCP1AS_LENGTH                              0x3
#define _ECCP1AS_CCP1AS_MASK                                0x70
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

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0xFB7);
#ifndef _LIB_BUILD
asm("PWM1CON equ 0FB7h");
#endif
// aliases
extern volatile unsigned char           ECCP1DEL            __at(0xFB7);
#ifndef _LIB_BUILD
asm("ECCP1DEL equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1DC                   :7;
        unsigned P1RSEN                 :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
        unsigned PR1SEN                 :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0xFB7);
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
#define _PWM1CON_PR1SEN_POSN                                0x7
#define _PWM1CON_PR1SEN_POSITION                            0x7
#define _PWM1CON_PR1SEN_SIZE                                0x1
#define _PWM1CON_PR1SEN_LENGTH                              0x1
#define _PWM1CON_PR1SEN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned P1DC                   :7;
        unsigned P1RSEN                 :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
        unsigned PR1SEN                 :1;
    };
} ECCP1DELbits_t;
extern volatile ECCP1DELbits_t ECCP1DELbits __at(0xFB7);
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
#define _ECCP1DEL_PDC0_POSN                                 0x0
#define _ECCP1DEL_PDC0_POSITION                             0x0
#define _ECCP1DEL_PDC0_SIZE                                 0x1
#define _ECCP1DEL_PDC0_LENGTH                               0x1
#define _ECCP1DEL_PDC0_MASK                                 0x1
#define _ECCP1DEL_PDC1_POSN                                 0x1
#define _ECCP1DEL_PDC1_POSITION                             0x1
#define _ECCP1DEL_PDC1_SIZE                                 0x1
#define _ECCP1DEL_PDC1_LENGTH                               0x1
#define _ECCP1DEL_PDC1_MASK                                 0x2
#define _ECCP1DEL_PDC2_POSN                                 0x2
#define _ECCP1DEL_PDC2_POSITION                             0x2
#define _ECCP1DEL_PDC2_SIZE                                 0x1
#define _ECCP1DEL_PDC2_LENGTH                               0x1
#define _ECCP1DEL_PDC2_MASK                                 0x4
#define _ECCP1DEL_PDC3_POSN                                 0x3
#define _ECCP1DEL_PDC3_POSITION                             0x3
#define _ECCP1DEL_PDC3_SIZE                                 0x1
#define _ECCP1DEL_PDC3_LENGTH                               0x1
#define _ECCP1DEL_PDC3_MASK                                 0x8
#define _ECCP1DEL_PDC4_POSN                                 0x4
#define _ECCP1DEL_PDC4_POSITION                             0x4
#define _ECCP1DEL_PDC4_SIZE                                 0x1
#define _ECCP1DEL_PDC4_LENGTH                               0x1
#define _ECCP1DEL_PDC4_MASK                                 0x10
#define _ECCP1DEL_PDC5_POSN                                 0x5
#define _ECCP1DEL_PDC5_POSITION                             0x5
#define _ECCP1DEL_PDC5_SIZE                                 0x1
#define _ECCP1DEL_PDC5_LENGTH                               0x1
#define _ECCP1DEL_PDC5_MASK                                 0x20
#define _ECCP1DEL_PDC6_POSN                                 0x6
#define _ECCP1DEL_PDC6_POSITION                             0x6
#define _ECCP1DEL_PDC6_SIZE                                 0x1
#define _ECCP1DEL_PDC6_LENGTH                               0x1
#define _ECCP1DEL_PDC6_MASK                                 0x40
#define _ECCP1DEL_PR1SEN_POSN                               0x7
#define _ECCP1DEL_PR1SEN_POSITION                           0x7
#define _ECCP1DEL_PR1SEN_SIZE                               0x1
#define _ECCP1DEL_PR1SEN_LENGTH                             0x1
#define _ECCP1DEL_PR1SEN_MASK                               0x80

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
extern volatile unsigned char           BAUDCON1            __at(0xFB8);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 0FB8h");
#endif
// aliases
extern volatile unsigned char           BAUDCON             __at(0xFB8);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FB8h");
#endif
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
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0xFB8);
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
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_RCMT_POSN                                 0x6
#define _BAUDCON1_RCMT_POSITION                             0x6
#define _BAUDCON1_RCMT_SIZE                                 0x1
#define _BAUDCON1_RCMT_LENGTH                               0x1
#define _BAUDCON1_RCMT_MASK                                 0x40
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
#define _BAUDCON1_SCKP1_POSN                                0x4
#define _BAUDCON1_SCKP1_POSITION                            0x4
#define _BAUDCON1_SCKP1_SIZE                                0x1
#define _BAUDCON1_SCKP1_LENGTH                              0x1
#define _BAUDCON1_SCKP1_MASK                                0x10
#define _BAUDCON1_DTRXP1_POSN                               0x5
#define _BAUDCON1_DTRXP1_POSITION                           0x5
#define _BAUDCON1_DTRXP1_SIZE                               0x1
#define _BAUDCON1_DTRXP1_LENGTH                             0x1
#define _BAUDCON1_DTRXP1_MASK                               0x20
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
#define _BAUDCON1_TXCKP1_POSN                               0x4
#define _BAUDCON1_TXCKP1_POSITION                           0x4
#define _BAUDCON1_TXCKP1_SIZE                               0x1
#define _BAUDCON1_TXCKP1_LENGTH                             0x1
#define _BAUDCON1_TXCKP1_MASK                               0x10
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
        unsigned                        :4;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
#define _BAUDCON_SCKP1_POSN                                 0x4
#define _BAUDCON_SCKP1_POSITION                             0x4
#define _BAUDCON_SCKP1_SIZE                                 0x1
#define _BAUDCON_SCKP1_LENGTH                               0x1
#define _BAUDCON_SCKP1_MASK                                 0x10
#define _BAUDCON_DTRXP1_POSN                                0x5
#define _BAUDCON_DTRXP1_POSITION                            0x5
#define _BAUDCON_DTRXP1_SIZE                                0x1
#define _BAUDCON_DTRXP1_LENGTH                              0x1
#define _BAUDCON_DTRXP1_MASK                                0x20
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
#define _BAUDCON_TXCKP1_POSN                                0x4
#define _BAUDCON_TXCKP1_POSITION                            0x4
#define _BAUDCON_TXCKP1_SIZE                                0x1
#define _BAUDCON_TXCKP1_LENGTH                              0x1
#define _BAUDCON_TXCKP1_MASK                                0x10
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
        unsigned                        :4;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned ABDEN1                 :1;
        unsigned WUE1                   :1;
        unsigned                        :1;
        unsigned BRG161                 :1;
        unsigned SCKP1                  :1;
        unsigned DTRXP1                 :1;
        unsigned RCIDL1                 :1;
        unsigned ABDOVF1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned TXCKP1                 :1;
        unsigned RXDTP1                 :1;
        unsigned RCMT1                  :1;
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
#define _BAUDCTL_SCKP1_POSN                                 0x4
#define _BAUDCTL_SCKP1_POSITION                             0x4
#define _BAUDCTL_SCKP1_SIZE                                 0x1
#define _BAUDCTL_SCKP1_LENGTH                               0x1
#define _BAUDCTL_SCKP1_MASK                                 0x10
#define _BAUDCTL_DTRXP1_POSN                                0x5
#define _BAUDCTL_DTRXP1_POSITION                            0x5
#define _BAUDCTL_DTRXP1_SIZE                                0x1
#define _BAUDCTL_DTRXP1_LENGTH                              0x1
#define _BAUDCTL_DTRXP1_MASK                                0x20
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
#define _BAUDCTL_TXCKP1_POSN                                0x4
#define _BAUDCTL_TXCKP1_POSITION                            0x4
#define _BAUDCTL_TXCKP1_SIZE                                0x1
#define _BAUDCTL_TXCKP1_LENGTH                              0x1
#define _BAUDCTL_TXCKP1_MASK                                0x10
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

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
extern volatile unsigned char           PSTR1CON            __at(0xFB9);
#ifndef _LIB_BUILD
asm("PSTR1CON equ 0FB9h");
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
    struct {
        unsigned STR1A                  :1;
        unsigned STR1B                  :1;
        unsigned STR1C                  :1;
        unsigned STR1D                  :1;
        unsigned STR1SYNC               :1;
    };
} PSTR1CONbits_t;
extern volatile PSTR1CONbits_t PSTR1CONbits __at(0xFB9);
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

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0xFBA);
#ifndef _LIB_BUILD
asm("T2CON equ 0FBAh");
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
extern volatile T2CONbits_t T2CONbits __at(0xFBA);
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
extern volatile unsigned char           PR2                 __at(0xFBB);
#ifndef _LIB_BUILD
asm("PR2 equ 0FBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0xFBB);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0xFBC);
#ifndef _LIB_BUILD
asm("TMR2 equ 0FBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0xFBC);
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0xFBD);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
#endif
// aliases
extern volatile unsigned char           ECCP1CON            __at(0xFBD);
#ifndef _LIB_BUILD
asm("ECCP1CON equ 0FBDh");
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
extern volatile ECCP1CONbits_t ECCP1CONbits __at(0xFBD);
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
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0xFBE);
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0xFBF);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0xFBF);
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

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
        unsigned NVCFG                  :2;
        unsigned PVCFG                  :2;
        unsigned                        :3;
        unsigned TRIGSEL                :1;
    };
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
#define _ADCON1_NVCFG_POSN                                  0x0
#define _ADCON1_NVCFG_POSITION                              0x0
#define _ADCON1_NVCFG_SIZE                                  0x2
#define _ADCON1_NVCFG_LENGTH                                0x2
#define _ADCON1_NVCFG_MASK                                  0x3
#define _ADCON1_PVCFG_POSN                                  0x2
#define _ADCON1_PVCFG_POSITION                              0x2
#define _ADCON1_PVCFG_SIZE                                  0x2
#define _ADCON1_PVCFG_LENGTH                                0x2
#define _ADCON1_PVCFG_MASK                                  0xC
#define _ADCON1_TRIGSEL_POSN                                0x7
#define _ADCON1_TRIGSEL_POSITION                            0x7
#define _ADCON1_TRIGSEL_SIZE                                0x1
#define _ADCON1_TRIGSEL_LENGTH                              0x1
#define _ADCON1_TRIGSEL_MASK                                0x80
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
        unsigned CHS                    :5;
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
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
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
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0x7C
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
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2

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
        unsigned SEN1                   :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
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
#define _SSP1CON2_SEN1_POSN                                 0x0
#define _SSP1CON2_SEN1_POSITION                             0x0
#define _SSP1CON2_SEN1_SIZE                                 0x1
#define _SSP1CON2_SEN1_LENGTH                               0x1
#define _SSP1CON2_SEN1_MASK                                 0x1
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
        unsigned SEN1                   :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
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
#define _SSPCON2_SEN1_POSN                                  0x0
#define _SSPCON2_SEN1_POSITION                              0x0
#define _SSPCON2_SEN1_SIZE                                  0x1
#define _SSPCON2_SEN1_LENGTH                                0x1
#define _SSPCON2_SEN1_MASK                                  0x1
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
extern volatile unsigned char           SSPCON              __at(0xFC6);
#ifndef _LIB_BUILD
asm("SSPCON equ 0FC6h");
#endif
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
#define _SSPCON_SSPM01_POSN                                 0x0
#define _SSPCON_SSPM01_POSITION                             0x0
#define _SSPCON_SSPM01_SIZE                                 0x1
#define _SSPCON_SSPM01_LENGTH                               0x1
#define _SSPCON_SSPM01_MASK                                 0x1
#define _SSPCON_SSPM11_POSN                                 0x1
#define _SSPCON_SSPM11_POSITION                             0x1
#define _SSPCON_SSPM11_SIZE                                 0x1
#define _SSPCON_SSPM11_LENGTH                               0x1
#define _SSPCON_SSPM11_MASK                                 0x2
#define _SSPCON_SSPM21_POSN                                 0x2
#define _SSPCON_SSPM21_POSITION                             0x2
#define _SSPCON_SSPM21_SIZE                                 0x1
#define _SSPCON_SSPM21_LENGTH                               0x1
#define _SSPCON_SSPM21_MASK                                 0x4
#define _SSPCON_SSPM31_POSN                                 0x3
#define _SSPCON_SSPM31_POSITION                             0x3
#define _SSPCON_SSPM31_SIZE                                 0x1
#define _SSPCON_SSPM31_LENGTH                               0x1
#define _SSPCON_SSPM31_MASK                                 0x8
#define _SSPCON_CKP1_POSN                                   0x4
#define _SSPCON_CKP1_POSITION                               0x4
#define _SSPCON_CKP1_SIZE                                   0x1
#define _SSPCON_CKP1_LENGTH                                 0x1
#define _SSPCON_CKP1_MASK                                   0x10
#define _SSPCON_SSPEN1_POSN                                 0x5
#define _SSPCON_SSPEN1_POSITION                             0x5
#define _SSPCON_SSPEN1_SIZE                                 0x1
#define _SSPCON_SSPEN1_LENGTH                               0x1
#define _SSPCON_SSPEN1_MASK                                 0x20
#define _SSPCON_SSPOV1_POSN                                 0x6
#define _SSPCON_SSPOV1_POSITION                             0x6
#define _SSPCON_SSPOV1_SIZE                                 0x1
#define _SSPCON_SSPOV1_LENGTH                               0x1
#define _SSPCON_SSPOV1_MASK                                 0x40
#define _SSPCON_WCOL1_POSN                                  0x7
#define _SSPCON_WCOL1_POSITION                              0x7
#define _SSPCON_WCOL1_SIZE                                  0x1
#define _SSPCON_WCOL1_LENGTH                                0x1
#define _SSPCON_WCOL1_MASK                                  0x80
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
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned D                      :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned I2C_DAT                :1;
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
#define _SSP1STAT_D_POSN                                    0x5
#define _SSP1STAT_D_POSITION                                0x5
#define _SSP1STAT_D_SIZE                                    0x1
#define _SSP1STAT_D_LENGTH                                  0x1
#define _SSP1STAT_D_MASK                                    0x20
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
#define _SSP1STAT_R_POSN                                    0x2
#define _SSP1STAT_R_POSITION                                0x2
#define _SSP1STAT_R_SIZE                                    0x1
#define _SSP1STAT_R_LENGTH                                  0x1
#define _SSP1STAT_R_MASK                                    0x4
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
#define _SSP1STAT_READ_WRITE_POSN                           0x2
#define _SSP1STAT_READ_WRITE_POSITION                       0x2
#define _SSP1STAT_READ_WRITE_SIZE                           0x1
#define _SSP1STAT_READ_WRITE_LENGTH                         0x1
#define _SSP1STAT_READ_WRITE_MASK                           0x4
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
#define _SSP1STAT_RW_POSN                                   0x2
#define _SSP1STAT_RW_POSITION                               0x2
#define _SSP1STAT_RW_SIZE                                   0x1
#define _SSP1STAT_RW_LENGTH                                 0x1
#define _SSP1STAT_RW_MASK                                   0x4
#define _SSP1STAT_DATA_ADDRESS_POSN                         0x5
#define _SSP1STAT_DATA_ADDRESS_POSITION                     0x5
#define _SSP1STAT_DATA_ADDRESS_SIZE                         0x1
#define _SSP1STAT_DATA_ADDRESS_LENGTH                       0x1
#define _SSP1STAT_DATA_ADDRESS_MASK                         0x20
#define _SSP1STAT_RW1_POSN                                  0x2
#define _SSP1STAT_RW1_POSITION                              0x2
#define _SSP1STAT_RW1_SIZE                                  0x1
#define _SSP1STAT_RW1_LENGTH                                0x1
#define _SSP1STAT_RW1_MASK                                  0x4
#define _SSP1STAT_D_A_POSN                                  0x5
#define _SSP1STAT_D_A_POSITION                              0x5
#define _SSP1STAT_D_A_SIZE                                  0x1
#define _SSP1STAT_D_A_LENGTH                                0x1
#define _SSP1STAT_D_A_MASK                                  0x20
#define _SSP1STAT_R_W_POSN                                  0x2
#define _SSP1STAT_R_W_POSITION                              0x2
#define _SSP1STAT_R_W_SIZE                                  0x1
#define _SSP1STAT_R_W_LENGTH                                0x1
#define _SSP1STAT_R_W_MASK                                  0x4
#define _SSP1STAT_I2C_DAT_POSN                              0x5
#define _SSP1STAT_I2C_DAT_POSITION                          0x5
#define _SSP1STAT_I2C_DAT_SIZE                              0x1
#define _SSP1STAT_I2C_DAT_LENGTH                            0x1
#define _SSP1STAT_I2C_DAT_MASK                              0x20
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
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned D                      :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned I2C_DAT                :1;
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
#define _SSPSTAT_D_POSN                                     0x5
#define _SSPSTAT_D_POSITION                                 0x5
#define _SSPSTAT_D_SIZE                                     0x1
#define _SSPSTAT_D_LENGTH                                   0x1
#define _SSPSTAT_D_MASK                                     0x20
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
#define _SSPSTAT_R_POSN                                     0x2
#define _SSPSTAT_R_POSITION                                 0x2
#define _SSPSTAT_R_SIZE                                     0x1
#define _SSPSTAT_R_LENGTH                                   0x1
#define _SSPSTAT_R_MASK                                     0x4
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
#define _SSPSTAT_READ_WRITE_POSN                            0x2
#define _SSPSTAT_READ_WRITE_POSITION                        0x2
#define _SSPSTAT_READ_WRITE_SIZE                            0x1
#define _SSPSTAT_READ_WRITE_LENGTH                          0x1
#define _SSPSTAT_READ_WRITE_MASK                            0x4
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
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_DATA_ADDRESS_POSN                          0x5
#define _SSPSTAT_DATA_ADDRESS_POSITION                      0x5
#define _SSPSTAT_DATA_ADDRESS_SIZE                          0x1
#define _SSPSTAT_DATA_ADDRESS_LENGTH                        0x1
#define _SSPSTAT_DATA_ADDRESS_MASK                          0x20
#define _SSPSTAT_RW1_POSN                                   0x2
#define _SSPSTAT_RW1_POSITION                               0x2
#define _SSPSTAT_RW1_SIZE                                   0x1
#define _SSPSTAT_RW1_LENGTH                                 0x1
#define _SSPSTAT_RW1_MASK                                   0x4
#define _SSPSTAT_D_A_POSN                                   0x5
#define _SSPSTAT_D_A_POSITION                               0x5
#define _SSPSTAT_D_A_SIZE                                   0x1
#define _SSPSTAT_D_A_LENGTH                                 0x1
#define _SSPSTAT_D_A_MASK                                   0x20
#define _SSPSTAT_R_W_POSN                                   0x2
#define _SSPSTAT_R_W_POSITION                               0x2
#define _SSPSTAT_R_W_SIZE                                   0x1
#define _SSPSTAT_R_W_LENGTH                                 0x1
#define _SSPSTAT_R_W_MASK                                   0x4
#define _SSPSTAT_I2C_DAT_POSN                               0x5
#define _SSPSTAT_I2C_DAT_POSITION                           0x5
#define _SSPSTAT_I2C_DAT_SIZE                               0x1
#define _SSPSTAT_I2C_DAT_LENGTH                             0x1
#define _SSPSTAT_I2C_DAT_MASK                               0x20
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
        unsigned SSP1ADD                :8;
    };
    struct {
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
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
#define _SSP1ADD_SSP1ADD_POSN                               0x0
#define _SSP1ADD_SSP1ADD_POSITION                           0x0
#define _SSP1ADD_SSP1ADD_SIZE                               0x8
#define _SSP1ADD_SSP1ADD_LENGTH                             0x8
#define _SSP1ADD_SSP1ADD_MASK                               0xFF
#define _SSP1ADD_SSP1ADD0_POSN                              0x0
#define _SSP1ADD_SSP1ADD0_POSITION                          0x0
#define _SSP1ADD_SSP1ADD0_SIZE                              0x1
#define _SSP1ADD_SSP1ADD0_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD0_MASK                              0x1
#define _SSP1ADD_SSP1ADD1_POSN                              0x1
#define _SSP1ADD_SSP1ADD1_POSITION                          0x1
#define _SSP1ADD_SSP1ADD1_SIZE                              0x1
#define _SSP1ADD_SSP1ADD1_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD1_MASK                              0x2
#define _SSP1ADD_SSP1ADD2_POSN                              0x2
#define _SSP1ADD_SSP1ADD2_POSITION                          0x2
#define _SSP1ADD_SSP1ADD2_SIZE                              0x1
#define _SSP1ADD_SSP1ADD2_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD2_MASK                              0x4
#define _SSP1ADD_SSP1ADD3_POSN                              0x3
#define _SSP1ADD_SSP1ADD3_POSITION                          0x3
#define _SSP1ADD_SSP1ADD3_SIZE                              0x1
#define _SSP1ADD_SSP1ADD3_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD3_MASK                              0x8
#define _SSP1ADD_SSP1ADD4_POSN                              0x4
#define _SSP1ADD_SSP1ADD4_POSITION                          0x4
#define _SSP1ADD_SSP1ADD4_SIZE                              0x1
#define _SSP1ADD_SSP1ADD4_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD4_MASK                              0x10
#define _SSP1ADD_SSP1ADD5_POSN                              0x5
#define _SSP1ADD_SSP1ADD5_POSITION                          0x5
#define _SSP1ADD_SSP1ADD5_SIZE                              0x1
#define _SSP1ADD_SSP1ADD5_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD5_MASK                              0x20
#define _SSP1ADD_SSP1ADD6_POSN                              0x6
#define _SSP1ADD_SSP1ADD6_POSITION                          0x6
#define _SSP1ADD_SSP1ADD6_SIZE                              0x1
#define _SSP1ADD_SSP1ADD6_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD6_MASK                              0x40
#define _SSP1ADD_SSP1ADD7_POSN                              0x7
#define _SSP1ADD_SSP1ADD7_POSITION                          0x7
#define _SSP1ADD_SSP1ADD7_SIZE                              0x1
#define _SSP1ADD_SSP1ADD7_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD7_MASK                              0x80
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
        unsigned SSP1ADD                :8;
    };
    struct {
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
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
#define _SSPADD_SSP1ADD_POSN                                0x0
#define _SSPADD_SSP1ADD_POSITION                            0x0
#define _SSPADD_SSP1ADD_SIZE                                0x8
#define _SSPADD_SSP1ADD_LENGTH                              0x8
#define _SSPADD_SSP1ADD_MASK                                0xFF
#define _SSPADD_SSP1ADD0_POSN                               0x0
#define _SSPADD_SSP1ADD0_POSITION                           0x0
#define _SSPADD_SSP1ADD0_SIZE                               0x1
#define _SSPADD_SSP1ADD0_LENGTH                             0x1
#define _SSPADD_SSP1ADD0_MASK                               0x1
#define _SSPADD_SSP1ADD1_POSN                               0x1
#define _SSPADD_SSP1ADD1_POSITION                           0x1
#define _SSPADD_SSP1ADD1_SIZE                               0x1
#define _SSPADD_SSP1ADD1_LENGTH                             0x1
#define _SSPADD_SSP1ADD1_MASK                               0x2
#define _SSPADD_SSP1ADD2_POSN                               0x2
#define _SSPADD_SSP1ADD2_POSITION                           0x2
#define _SSPADD_SSP1ADD2_SIZE                               0x1
#define _SSPADD_SSP1ADD2_LENGTH                             0x1
#define _SSPADD_SSP1ADD2_MASK                               0x4
#define _SSPADD_SSP1ADD3_POSN                               0x3
#define _SSPADD_SSP1ADD3_POSITION                           0x3
#define _SSPADD_SSP1ADD3_SIZE                               0x1
#define _SSPADD_SSP1ADD3_LENGTH                             0x1
#define _SSPADD_SSP1ADD3_MASK                               0x8
#define _SSPADD_SSP1ADD4_POSN                               0x4
#define _SSPADD_SSP1ADD4_POSITION                           0x4
#define _SSPADD_SSP1ADD4_SIZE                               0x1
#define _SSPADD_SSP1ADD4_LENGTH                             0x1
#define _SSPADD_SSP1ADD4_MASK                               0x10
#define _SSPADD_SSP1ADD5_POSN                               0x5
#define _SSPADD_SSP1ADD5_POSITION                           0x5
#define _SSPADD_SSP1ADD5_SIZE                               0x1
#define _SSPADD_SSP1ADD5_LENGTH                             0x1
#define _SSPADD_SSP1ADD5_MASK                               0x20
#define _SSPADD_SSP1ADD6_POSN                               0x6
#define _SSPADD_SSP1ADD6_POSITION                           0x6
#define _SSPADD_SSP1ADD6_SIZE                               0x1
#define _SSPADD_SSP1ADD6_LENGTH                             0x1
#define _SSPADD_SSP1ADD6_MASK                               0x40
#define _SSPADD_SSP1ADD7_POSN                               0x7
#define _SSPADD_SSP1ADD7_POSITION                           0x7
#define _SSPADD_SSP1ADD7_SIZE                               0x1
#define _SSPADD_SSP1ADD7_LENGTH                             0x1
#define _SSPADD_SSP1ADD7_MASK                               0x80
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
        unsigned SSP1BUF                :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0xFC9);
// bitfield macros
#define _SSP1BUF_SSP1BUF_POSN                               0x0
#define _SSP1BUF_SSP1BUF_POSITION                           0x0
#define _SSP1BUF_SSP1BUF_SIZE                               0x8
#define _SSP1BUF_SSP1BUF_LENGTH                             0x8
#define _SSP1BUF_SSP1BUF_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1BUF                :8;
    };
} SSPBUFbits_t;
extern volatile SSPBUFbits_t SSPBUFbits __at(0xFC9);
// bitfield macros
#define _SSPBUF_SSP1BUF_POSN                                0x0
#define _SSPBUF_SSP1BUF_POSITION                            0x0
#define _SSPBUF_SSP1BUF_SIZE                                0x8
#define _SSPBUF_SSP1BUF_LENGTH                              0x8
#define _SSPBUF_SSP1BUF_MASK                                0xFF

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
extern volatile unsigned char           SSP1MSK             __at(0xFCA);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0FCAh");
#endif
// aliases
extern volatile unsigned char           SSPMSK              __at(0xFCA);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0FCAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP1MSK                :8;
    };
    struct {
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0xFCA);
// bitfield macros
#define _SSP1MSK_SSP1MSK_POSN                               0x0
#define _SSP1MSK_SSP1MSK_POSITION                           0x0
#define _SSP1MSK_SSP1MSK_SIZE                               0x8
#define _SSP1MSK_SSP1MSK_LENGTH                             0x8
#define _SSP1MSK_SSP1MSK_MASK                               0xFF
#define _SSP1MSK_SSP1MSK0_POSN                              0x0
#define _SSP1MSK_SSP1MSK0_POSITION                          0x0
#define _SSP1MSK_SSP1MSK0_SIZE                              0x1
#define _SSP1MSK_SSP1MSK0_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK0_MASK                              0x1
#define _SSP1MSK_SSP1MSK1_POSN                              0x1
#define _SSP1MSK_SSP1MSK1_POSITION                          0x1
#define _SSP1MSK_SSP1MSK1_SIZE                              0x1
#define _SSP1MSK_SSP1MSK1_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK1_MASK                              0x2
#define _SSP1MSK_SSP1MSK2_POSN                              0x2
#define _SSP1MSK_SSP1MSK2_POSITION                          0x2
#define _SSP1MSK_SSP1MSK2_SIZE                              0x1
#define _SSP1MSK_SSP1MSK2_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK2_MASK                              0x4
#define _SSP1MSK_SSP1MSK3_POSN                              0x3
#define _SSP1MSK_SSP1MSK3_POSITION                          0x3
#define _SSP1MSK_SSP1MSK3_SIZE                              0x1
#define _SSP1MSK_SSP1MSK3_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK3_MASK                              0x8
#define _SSP1MSK_SSP1MSK4_POSN                              0x4
#define _SSP1MSK_SSP1MSK4_POSITION                          0x4
#define _SSP1MSK_SSP1MSK4_SIZE                              0x1
#define _SSP1MSK_SSP1MSK4_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK4_MASK                              0x10
#define _SSP1MSK_SSP1MSK5_POSN                              0x5
#define _SSP1MSK_SSP1MSK5_POSITION                          0x5
#define _SSP1MSK_SSP1MSK5_SIZE                              0x1
#define _SSP1MSK_SSP1MSK5_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK5_MASK                              0x20
#define _SSP1MSK_SSP1MSK6_POSN                              0x6
#define _SSP1MSK_SSP1MSK6_POSITION                          0x6
#define _SSP1MSK_SSP1MSK6_SIZE                              0x1
#define _SSP1MSK_SSP1MSK6_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK6_MASK                              0x40
#define _SSP1MSK_SSP1MSK7_POSN                              0x7
#define _SSP1MSK_SSP1MSK7_POSITION                          0x7
#define _SSP1MSK_SSP1MSK7_SIZE                              0x1
#define _SSP1MSK_SSP1MSK7_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK7_MASK                              0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1MSK                :8;
    };
    struct {
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0xFCA);
// bitfield macros
#define _SSPMSK_SSP1MSK_POSN                                0x0
#define _SSPMSK_SSP1MSK_POSITION                            0x0
#define _SSPMSK_SSP1MSK_SIZE                                0x8
#define _SSPMSK_SSP1MSK_LENGTH                              0x8
#define _SSPMSK_SSP1MSK_MASK                                0xFF
#define _SSPMSK_SSP1MSK0_POSN                               0x0
#define _SSPMSK_SSP1MSK0_POSITION                           0x0
#define _SSPMSK_SSP1MSK0_SIZE                               0x1
#define _SSPMSK_SSP1MSK0_LENGTH                             0x1
#define _SSPMSK_SSP1MSK0_MASK                               0x1
#define _SSPMSK_SSP1MSK1_POSN                               0x1
#define _SSPMSK_SSP1MSK1_POSITION                           0x1
#define _SSPMSK_SSP1MSK1_SIZE                               0x1
#define _SSPMSK_SSP1MSK1_LENGTH                             0x1
#define _SSPMSK_SSP1MSK1_MASK                               0x2
#define _SSPMSK_SSP1MSK2_POSN                               0x2
#define _SSPMSK_SSP1MSK2_POSITION                           0x2
#define _SSPMSK_SSP1MSK2_SIZE                               0x1
#define _SSPMSK_SSP1MSK2_LENGTH                             0x1
#define _SSPMSK_SSP1MSK2_MASK                               0x4
#define _SSPMSK_SSP1MSK3_POSN                               0x3
#define _SSPMSK_SSP1MSK3_POSITION                           0x3
#define _SSPMSK_SSP1MSK3_SIZE                               0x1
#define _SSPMSK_SSP1MSK3_LENGTH                             0x1
#define _SSPMSK_SSP1MSK3_MASK                               0x8
#define _SSPMSK_SSP1MSK4_POSN                               0x4
#define _SSPMSK_SSP1MSK4_POSITION                           0x4
#define _SSPMSK_SSP1MSK4_SIZE                               0x1
#define _SSPMSK_SSP1MSK4_LENGTH                             0x1
#define _SSPMSK_SSP1MSK4_MASK                               0x10
#define _SSPMSK_SSP1MSK5_POSN                               0x5
#define _SSPMSK_SSP1MSK5_POSITION                           0x5
#define _SSPMSK_SSP1MSK5_SIZE                               0x1
#define _SSPMSK_SSP1MSK5_LENGTH                             0x1
#define _SSPMSK_SSP1MSK5_MASK                               0x20
#define _SSPMSK_SSP1MSK6_POSN                               0x6
#define _SSPMSK_SSP1MSK6_POSITION                           0x6
#define _SSPMSK_SSP1MSK6_SIZE                               0x1
#define _SSPMSK_SSP1MSK6_LENGTH                             0x1
#define _SSPMSK_SSP1MSK6_MASK                               0x40
#define _SSPMSK_SSP1MSK7_POSN                               0x7
#define _SSPMSK_SSP1MSK7_POSITION                           0x7
#define _SSPMSK_SSP1MSK7_SIZE                               0x1
#define _SSPMSK_SSP1MSK7_LENGTH                             0x1
#define _SSPMSK_SSP1MSK7_MASK                               0x80

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
extern volatile unsigned char           SSP1CON3            __at(0xFCB);
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           SSPCON3             __at(0xFCB);
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0FCBh");
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
extern volatile SSP1CON3bits_t SSP1CON3bits __at(0xFCB);
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
extern volatile SSPCON3bits_t SSPCON3bits __at(0xFCB);
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

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0xFCC);
#ifndef _LIB_BUILD
asm("T1GCON equ 0FCCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned T1GGO_NOT_T1DONE       :1;
    };
    struct {
        unsigned T1GSS                  :2;
        unsigned T1GVAL                 :1;
        unsigned T1GGO_nT1DONE          :1;
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
    struct {
        unsigned                        :3;
        unsigned NOT_T1DONE             :1;
    };
    struct {
        unsigned                        :3;
        unsigned nT1DONE                :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1DONE                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1GGO_NOT_DONE         :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1GGO_nDONE            :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0xFCC);
// bitfield macros
#define _T1GCON_T1GGO_NOT_T1DONE_POSN                       0x3
#define _T1GCON_T1GGO_NOT_T1DONE_POSITION                   0x3
#define _T1GCON_T1GGO_NOT_T1DONE_SIZE                       0x1
#define _T1GCON_T1GGO_NOT_T1DONE_LENGTH                     0x1
#define _T1GCON_T1GGO_NOT_T1DONE_MASK                       0x8
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
#define _T1GCON_T1GGO_nT1DONE_POSN                          0x3
#define _T1GCON_T1GGO_nT1DONE_POSITION                      0x3
#define _T1GCON_T1GGO_nT1DONE_SIZE                          0x1
#define _T1GCON_T1GGO_nT1DONE_LENGTH                        0x1
#define _T1GCON_T1GGO_nT1DONE_MASK                          0x8
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
#define _T1GCON_NOT_T1DONE_POSN                             0x3
#define _T1GCON_NOT_T1DONE_POSITION                         0x3
#define _T1GCON_NOT_T1DONE_SIZE                             0x1
#define _T1GCON_NOT_T1DONE_LENGTH                           0x1
#define _T1GCON_NOT_T1DONE_MASK                             0x8
#define _T1GCON_nT1DONE_POSN                                0x3
#define _T1GCON_nT1DONE_POSITION                            0x3
#define _T1GCON_nT1DONE_SIZE                                0x1
#define _T1GCON_nT1DONE_LENGTH                              0x1
#define _T1GCON_nT1DONE_MASK                                0x8
#define _T1GCON_T1DONE_POSN                                 0x3
#define _T1GCON_T1DONE_POSITION                             0x3
#define _T1GCON_T1DONE_SIZE                                 0x1
#define _T1GCON_T1DONE_LENGTH                               0x1
#define _T1GCON_T1DONE_MASK                                 0x8
#define _T1GCON_T1GGO_NOT_DONE_POSN                         0x3
#define _T1GCON_T1GGO_NOT_DONE_POSITION                     0x3
#define _T1GCON_T1GGO_NOT_DONE_SIZE                         0x1
#define _T1GCON_T1GGO_NOT_DONE_LENGTH                       0x1
#define _T1GCON_T1GGO_NOT_DONE_MASK                         0x8
#define _T1GCON_T1GGO_nDONE_POSN                            0x3
#define _T1GCON_T1GGO_nDONE_POSITION                        0x3
#define _T1GCON_T1GGO_nDONE_SIZE                            0x1
#define _T1GCON_T1GGO_nDONE_LENGTH                          0x1
#define _T1GCON_T1GGO_nDONE_MASK                            0x8

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
        unsigned RD16                   :1;
        unsigned nT1SYNC                :1;
        unsigned SOSCEN                 :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
    struct {
        unsigned                        :1;
        unsigned T1RD16                 :1;
        unsigned T1SYNC                 :1;
        unsigned T1SOSCEN               :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMR1CS0                :1;
        unsigned TMR1CS1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned T1OSCEN                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN1                :1;
        unsigned                        :3;
        unsigned RD161                  :1;
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
#define _T1CON_RD16_POSN                                    0x1
#define _T1CON_RD16_POSITION                                0x1
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x2
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
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
#define _T1CON_T1RD16_POSN                                  0x1
#define _T1CON_T1RD16_POSITION                              0x1
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x2
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
#define _T1CON_T1SOSCEN_POSN                                0x3
#define _T1CON_T1SOSCEN_POSITION                            0x3
#define _T1CON_T1SOSCEN_SIZE                                0x1
#define _T1CON_T1SOSCEN_LENGTH                              0x1
#define _T1CON_T1SOSCEN_MASK                                0x8
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
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_SOSCEN1_POSN                                 0x3
#define _T1CON_SOSCEN1_POSITION                             0x3
#define _T1CON_SOSCEN1_SIZE                                 0x1
#define _T1CON_SOSCEN1_LENGTH                               0x1
#define _T1CON_SOSCEN1_MASK                                 0x8
#define _T1CON_RD161_POSN                                   0x7
#define _T1CON_RD161_POSITION                               0x7
#define _T1CON_RD161_SIZE                                   0x1
#define _T1CON_RD161_LENGTH                                 0x1
#define _T1CON_RD161_MASK                                   0x80

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
        unsigned HFIOFR                 :1;
        unsigned PRISD                  :1;
        unsigned SOSCGO                 :1;
        unsigned PLLEN                  :1;
        unsigned INTSRC                 :1;
        unsigned SOSCRUN                :1;
        unsigned PLLRDY                 :1;
    };
} OSCCON2bits_t;
extern volatile OSCCON2bits_t OSCCON2bits __at(0xFD2);
// bitfield macros
#define _OSCCON2_LFIOFS_POSN                                0x0
#define _OSCCON2_LFIOFS_POSITION                            0x0
#define _OSCCON2_LFIOFS_SIZE                                0x1
#define _OSCCON2_LFIOFS_LENGTH                              0x1
#define _OSCCON2_LFIOFS_MASK                                0x1
#define _OSCCON2_HFIOFR_POSN                                0x1
#define _OSCCON2_HFIOFR_POSITION                            0x1
#define _OSCCON2_HFIOFR_SIZE                                0x1
#define _OSCCON2_HFIOFR_LENGTH                              0x1
#define _OSCCON2_HFIOFR_MASK                                0x2
#define _OSCCON2_PRISD_POSN                                 0x2
#define _OSCCON2_PRISD_POSITION                             0x2
#define _OSCCON2_PRISD_SIZE                                 0x1
#define _OSCCON2_PRISD_LENGTH                               0x1
#define _OSCCON2_PRISD_MASK                                 0x4
#define _OSCCON2_SOSCGO_POSN                                0x3
#define _OSCCON2_SOSCGO_POSITION                            0x3
#define _OSCCON2_SOSCGO_SIZE                                0x1
#define _OSCCON2_SOSCGO_LENGTH                              0x1
#define _OSCCON2_SOSCGO_MASK                                0x8
#define _OSCCON2_PLLEN_POSN                                 0x4
#define _OSCCON2_PLLEN_POSITION                             0x4
#define _OSCCON2_PLLEN_SIZE                                 0x1
#define _OSCCON2_PLLEN_LENGTH                               0x1
#define _OSCCON2_PLLEN_MASK                                 0x10
#define _OSCCON2_INTSRC_POSN                                0x5
#define _OSCCON2_INTSRC_POSITION                            0x5
#define _OSCCON2_INTSRC_SIZE                                0x1
#define _OSCCON2_INTSRC_LENGTH                              0x1
#define _OSCCON2_INTSRC_MASK                                0x20
#define _OSCCON2_SOSCRUN_POSN                               0x6
#define _OSCCON2_SOSCRUN_POSITION                           0x6
#define _OSCCON2_SOSCRUN_SIZE                               0x1
#define _OSCCON2_SOSCRUN_LENGTH                             0x1
#define _OSCCON2_SOSCRUN_MASK                               0x40
#define _OSCCON2_PLLRDY_POSN                                0x7
#define _OSCCON2_PLLRDY_POSITION                            0x7
#define _OSCCON2_PLLRDY_SIZE                                0x1
#define _OSCCON2_PLLRDY_LENGTH                              0x1
#define _OSCCON2_PLLRDY_MASK                                0x80

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
        unsigned HFIOFS                 :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned FLTS                   :1;
        unsigned                        :1;
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
#define _OSCCON_HFIOFS_POSN                                 0x2
#define _OSCCON_HFIOFS_POSITION                             0x2
#define _OSCCON_HFIOFS_SIZE                                 0x1
#define _OSCCON_HFIOFS_LENGTH                               0x1
#define _OSCCON_HFIOFS_MASK                                 0x4
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
#define _OSCCON_FLTS_POSN                                   0x2
#define _OSCCON_FLTS_POSITION                               0x2
#define _OSCCON_FLTS_SIZE                                   0x1
#define _OSCCON_FLTS_LENGTH                                 0x1
#define _OSCCON_FLTS_MASK                                   0x4
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
        unsigned IOCIP                  :1;
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
#define _INTCON2_IOCIP_POSN                                 0x0
#define _INTCON2_IOCIP_POSITION                             0x0
#define _INTCON2_IOCIP_SIZE                                 0x1
#define _INTCON2_IOCIP_LENGTH                               0x1
#define _INTCON2_IOCIP_MASK                                 0x1
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
        unsigned IOCIF                  :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned IOCIE                  :1;
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
#define _INTCON_IOCIF_POSN                                  0x0
#define _INTCON_IOCIF_POSITION                              0x0
#define _INTCON_IOCIF_SIZE                                  0x1
#define _INTCON_IOCIF_LENGTH                                0x1
#define _INTCON_IOCIF_MASK                                  0x1
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
#define _INTCON_IOCIE_POSN                                  0x3
#define _INTCON_IOCIE_POSITION                              0x3
#define _INTCON_IOCIE_SIZE                                  0x1
#define _INTCON_IOCIE_LENGTH                                0x1
#define _INTCON_IOCIE_MASK                                  0x8
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
extern volatile __bit                   ABDEN               __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDEN1>
extern volatile __bit                   ABDEN1              __at(0x7DC0);	// @ (0xFB8 * 8 + 0)
#define                                 ABDEN1_bit          _BIT_ACCESS(BAUDCON1,0)
// BAUDCON1<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON1,7)
// BAUDCON1<ABDOVF1>
extern volatile __bit                   ABDOVF1             __at(0x7DC7);	// @ (0xFB8 * 8 + 7)
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
// SSP1CON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSP1CON3,7)
// ADCON2<ACQT0>
extern volatile __bit                   ACQT0               __at(0x7E03);	// @ (0xFC0 * 8 + 3)
#define                                 ACQT0_bit           _BIT_ACCESS(ADCON2,3)
// ADCON2<ACQT1>
extern volatile __bit                   ACQT1               __at(0x7E04);	// @ (0xFC0 * 8 + 4)
#define                                 ACQT1_bit           _BIT_ACCESS(ADCON2,4)
// ADCON2<ACQT2>
extern volatile __bit                   ACQT2               __at(0x7E05);	// @ (0xFC0 * 8 + 5)
#define                                 ACQT2_bit           _BIT_ACCESS(ADCON2,5)
// ACTCON<ACTD>
extern volatile __bit                   ACTD                __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 ACTD_bit            _BIT_ACCESS(ACTCON,6)
// ACTCON<ACTEN>
extern volatile __bit                   ACTEN               __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 ACTEN_bit           _BIT_ACCESS(ACTCON,7)
// PIE1<ACTIE>
extern volatile __bit                   ACTIE               __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 ACTIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<ACTIF>
extern volatile __bit                   ACTIF               __at(0x7CF7);	// @ (0xF9E * 8 + 7)
#define                                 ACTIF_bit           _BIT_ACCESS(PIR1,7)
// IPR1<ACTIP>
extern volatile __bit                   ACTIP               __at(0x7CFF);	// @ (0xF9F * 8 + 7)
#define                                 ACTIP_bit           _BIT_ACCESS(IPR1,7)
// ACTCON<ACTLOCK>
extern volatile __bit                   ACTLOCK             __at(0x7DAB);	// @ (0xFB5 * 8 + 3)
#define                                 ACTLOCK_bit         _BIT_ACCESS(ACTCON,3)
// PMD0<ACTMD>
extern volatile __bit                   ACTMD               __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 ACTMD_bit           _BIT_ACCESS(PMD0,4)
// ACTCON<ACTOR>
extern volatile __bit                   ACTOR               __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 ACTOR_bit           _BIT_ACCESS(ACTCON,1)
// ACTCON<ACTORS>
extern volatile __bit                   ACTORS              __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 ACTORS_bit          _BIT_ACCESS(ACTCON,1)
// ACTCON<ACTSEL>
extern volatile __bit                   ACTSEL              __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 ACTSEL_bit          _BIT_ACCESS(ACTCON,7)
// ACTCON<ACTSRC>
extern volatile __bit                   ACTSRC              __at(0x7DAC);	// @ (0xFB5 * 8 + 4)
#define                                 ACTSRC_bit          _BIT_ACCESS(ACTCON,4)
// ACTCON<ACTUD>
extern volatile __bit                   ACTUD               __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 ACTUD_bit           _BIT_ACCESS(ACTCON,6)
// UIE<ACTVIE>
extern volatile __bit                   ACTVIE              __at(0x7B22);	// @ (0xF64 * 8 + 2)
#define                                 ACTVIE_bit          _BIT_ACCESS(UIE,2)
// UIR<ACTVIF>
extern volatile __bit                   ACTVIF              __at(0x7B2A);	// @ (0xF65 * 8 + 2)
#define                                 ACTVIF_bit          _BIT_ACCESS(UIR,2)
// PMD1<ADCMD>
extern volatile __bit                   ADCMD               __at(0x7BFA);	// @ (0xF7F * 8 + 2)
#define                                 ADCMD_bit           _BIT_ACCESS(PMD1,2)
// ADCON2<ADCS0>
extern volatile __bit                   ADCS0               __at(0x7E00);	// @ (0xFC0 * 8 + 0)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON2,0)
// ADCON2<ADCS1>
extern volatile __bit                   ADCS1               __at(0x7E01);	// @ (0xFC0 * 8 + 1)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON2,1)
// ADCON2<ADCS2>
extern volatile __bit                   ADCS2               __at(0x7E02);	// @ (0xFC0 * 8 + 2)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON2,2)
// RCSTA1<ADDEN>
extern volatile __bit                   ADDEN               __at(0x7D5B);	// @ (0xFAB * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA1,3)
// UADDR<ADDR0>
extern volatile __bit                   ADDR0               __at(0x7B18);	// @ (0xF63 * 8 + 0)
#define                                 ADDR0_bit           _BIT_ACCESS(UADDR,0)
// UADDR<ADDR1>
extern volatile __bit                   ADDR1               __at(0x7B19);	// @ (0xF63 * 8 + 1)
#define                                 ADDR1_bit           _BIT_ACCESS(UADDR,1)
// UADDR<ADDR2>
extern volatile __bit                   ADDR2               __at(0x7B1A);	// @ (0xF63 * 8 + 2)
#define                                 ADDR2_bit           _BIT_ACCESS(UADDR,2)
// UADDR<ADDR3>
extern volatile __bit                   ADDR3               __at(0x7B1B);	// @ (0xF63 * 8 + 3)
#define                                 ADDR3_bit           _BIT_ACCESS(UADDR,3)
// UADDR<ADDR4>
extern volatile __bit                   ADDR4               __at(0x7B1C);	// @ (0xF63 * 8 + 4)
#define                                 ADDR4_bit           _BIT_ACCESS(UADDR,4)
// UADDR<ADDR5>
extern volatile __bit                   ADDR5               __at(0x7B1D);	// @ (0xF63 * 8 + 5)
#define                                 ADDR5_bit           _BIT_ACCESS(UADDR,5)
// UADDR<ADDR6>
extern volatile __bit                   ADDR6               __at(0x7B1E);	// @ (0xF63 * 8 + 6)
#define                                 ADDR6_bit           _BIT_ACCESS(UADDR,6)
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
// SSP1CON3<AHEN>
extern volatile __bit                   AHEN                __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSP1CON3,1)
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
extern volatile __bit                   AN4                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 AN4_bit             _BIT_ACCESS(PORTA,5)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0x7AD8);	// @ (0xF5B * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0x7AD9);	// @ (0xF5B * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0x7ADA);	// @ (0xF5B * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA3>
extern volatile __bit                   ANSA3               __at(0x7ADB);	// @ (0xF5B * 8 + 3)
#define                                 ANSA3_bit           _BIT_ACCESS(ANSELA,3)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0x7ADD);	// @ (0xF5B * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// ANSELB<ANSB0>
extern volatile __bit                   ANSB0               __at(0x7AE0);	// @ (0xF5C * 8 + 0)
#define                                 ANSB0_bit           _BIT_ACCESS(ANSELB,0)
// ANSELB<ANSB1>
extern volatile __bit                   ANSB1               __at(0x7AE1);	// @ (0xF5C * 8 + 1)
#define                                 ANSB1_bit           _BIT_ACCESS(ANSELB,1)
// ANSELB<ANSB2>
extern volatile __bit                   ANSB2               __at(0x7AE2);	// @ (0xF5C * 8 + 2)
#define                                 ANSB2_bit           _BIT_ACCESS(ANSELB,2)
// ANSELB<ANSB3>
extern volatile __bit                   ANSB3               __at(0x7AE3);	// @ (0xF5C * 8 + 3)
#define                                 ANSB3_bit           _BIT_ACCESS(ANSELB,3)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0x7AE4);	// @ (0xF5C * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0x7AE5);	// @ (0xF5C * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
// ANSELC<ANSC2>
extern volatile __bit                   ANSC2               __at(0x7AEA);	// @ (0xF5D * 8 + 2)
#define                                 ANSC2_bit           _BIT_ACCESS(ANSELC,2)
// ANSELC<ANSC6>
extern volatile __bit                   ANSC6               __at(0x7AEE);	// @ (0xF5D * 8 + 6)
#define                                 ANSC6_bit           _BIT_ACCESS(ANSELC,6)
// ANSELC<ANSC7>
extern volatile __bit                   ANSC7               __at(0x7AEF);	// @ (0xF5D * 8 + 7)
#define                                 ANSC7_bit           _BIT_ACCESS(ANSELC,7)
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
// HLVDCON<BGVST>
extern volatile __bit                   BGVST               __at(0x7CE6);	// @ (0xF9C * 8 + 6)
#define                                 BGVST_bit           _BIT_ACCESS(HLVDCON,6)
// SSP1CON3<BOEN>
extern volatile __bit                   BOEN                __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSP1CON3,4)
// RCON<BOR>
extern volatile __bit                   BOR                 __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 BOR_bit             _BIT_ACCESS(RCON,0)
// SPBRG1<BRG0>
extern volatile __bit                   BRG0                __at(0x7D78);	// @ (0xFAF * 8 + 0)
#define                                 BRG0_bit            _BIT_ACCESS(SPBRG1,0)
// SPBRG1<BRG1>
extern volatile __bit                   BRG1                __at(0x7D79);	// @ (0xFAF * 8 + 1)
#define                                 BRG1_bit            _BIT_ACCESS(SPBRG1,1)
// SPBRGH1<BRG10>
extern volatile __bit                   BRG10               __at(0x7D82);	// @ (0xFB0 * 8 + 2)
#define                                 BRG10_bit           _BIT_ACCESS(SPBRGH1,2)
// SPBRGH1<BRG11>
extern volatile __bit                   BRG11               __at(0x7D83);	// @ (0xFB0 * 8 + 3)
#define                                 BRG11_bit           _BIT_ACCESS(SPBRGH1,3)
// SPBRGH1<BRG12>
extern volatile __bit                   BRG12               __at(0x7D84);	// @ (0xFB0 * 8 + 4)
#define                                 BRG12_bit           _BIT_ACCESS(SPBRGH1,4)
// SPBRGH1<BRG13>
extern volatile __bit                   BRG13               __at(0x7D85);	// @ (0xFB0 * 8 + 5)
#define                                 BRG13_bit           _BIT_ACCESS(SPBRGH1,5)
// SPBRGH1<BRG14>
extern volatile __bit                   BRG14               __at(0x7D86);	// @ (0xFB0 * 8 + 6)
#define                                 BRG14_bit           _BIT_ACCESS(SPBRGH1,6)
// SPBRGH1<BRG15>
extern volatile __bit                   BRG15               __at(0x7D87);	// @ (0xFB0 * 8 + 7)
#define                                 BRG15_bit           _BIT_ACCESS(SPBRGH1,7)
// BAUDCON1<BRG16>
extern volatile __bit                   BRG16               __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON1,3)
// BAUDCON1<BRG161>
extern volatile __bit                   BRG161              __at(0x7DC3);	// @ (0xFB8 * 8 + 3)
#define                                 BRG161_bit          _BIT_ACCESS(BAUDCON1,3)
// SPBRG1<BRG2>
extern volatile __bit                   BRG2                __at(0x7D7A);	// @ (0xFAF * 8 + 2)
#define                                 BRG2_bit            _BIT_ACCESS(SPBRG1,2)
// SPBRG1<BRG3>
extern volatile __bit                   BRG3                __at(0x7D7B);	// @ (0xFAF * 8 + 3)
#define                                 BRG3_bit            _BIT_ACCESS(SPBRG1,3)
// SPBRG1<BRG4>
extern volatile __bit                   BRG4                __at(0x7D7C);	// @ (0xFAF * 8 + 4)
#define                                 BRG4_bit            _BIT_ACCESS(SPBRG1,4)
// SPBRG1<BRG5>
extern volatile __bit                   BRG5                __at(0x7D7D);	// @ (0xFAF * 8 + 5)
#define                                 BRG5_bit            _BIT_ACCESS(SPBRG1,5)
// SPBRG1<BRG6>
extern volatile __bit                   BRG6                __at(0x7D7E);	// @ (0xFAF * 8 + 6)
#define                                 BRG6_bit            _BIT_ACCESS(SPBRG1,6)
// SPBRG1<BRG7>
extern volatile __bit                   BRG7                __at(0x7D7F);	// @ (0xFAF * 8 + 7)
#define                                 BRG7_bit            _BIT_ACCESS(SPBRG1,7)
// SPBRGH1<BRG8>
extern volatile __bit                   BRG8                __at(0x7D80);	// @ (0xFB0 * 8 + 0)
#define                                 BRG8_bit            _BIT_ACCESS(SPBRGH1,0)
// SPBRGH1<BRG9>
extern volatile __bit                   BRG9                __at(0x7D81);	// @ (0xFB0 * 8 + 1)
#define                                 BRG9_bit            _BIT_ACCESS(SPBRGH1,1)
// TXSTA1<BRGH>
extern volatile __bit                   BRGH                __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA1,2)
// TXSTA1<BRGH1>
extern volatile __bit                   BRGH1               __at(0x7D62);	// @ (0xFAC * 8 + 2)
#define                                 BRGH1_bit           _BIT_ACCESS(TXSTA1,2)
// UEIE<BTOEE>
extern volatile __bit                   BTOEE               __at(0x7B34);	// @ (0xF66 * 8 + 4)
#define                                 BTOEE_bit           _BIT_ACCESS(UEIE,4)
// UEIR<BTOEF>
extern volatile __bit                   BTOEF               __at(0x7B3C);	// @ (0xF67 * 8 + 4)
#define                                 BTOEF_bit           _BIT_ACCESS(UEIR,4)
// UEIE<BTSEE>
extern volatile __bit                   BTSEE               __at(0x7B37);	// @ (0xF66 * 8 + 7)
#define                                 BTSEE_bit           _BIT_ACCESS(UEIE,7)
// UEIR<BTSEF>
extern volatile __bit                   BTSEF               __at(0x7B3F);	// @ (0xF67 * 8 + 7)
#define                                 BTSEF_bit           _BIT_ACCESS(UEIR,7)
// CM1CON0<C1CH0>
extern volatile __bit                   C1CH0               __at(0x7CC0);	// @ (0xF98 * 8 + 0)
#define                                 C1CH0_bit           _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1CH1>
extern volatile __bit                   C1CH1               __at(0x7CC1);	// @ (0xF98 * 8 + 1)
#define                                 C1CH1_bit           _BIT_ACCESS(CM1CON0,1)
// CM2CON1<C1HYS>
extern volatile __bit                   C1HYS               __at(0x7CD3);	// @ (0xF9A * 8 + 3)
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
extern volatile __bit                   C1OE                __at(0x7CC5);	// @ (0xF98 * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x7CC7);	// @ (0xF98 * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x7CC6);	// @ (0xF98 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x7CC4);	// @ (0xF98 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1R>
extern volatile __bit                   C1R                 __at(0x7CC2);	// @ (0xF98 * 8 + 2)
#define                                 C1R_bit             _BIT_ACCESS(CM1CON0,2)
// CM2CON1<C1RSEL>
extern volatile __bit                   C1RSEL              __at(0x7CD5);	// @ (0xF9A * 8 + 5)
#define                                 C1RSEL_bit          _BIT_ACCESS(CM2CON1,5)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x7CC3);	// @ (0xF98 * 8 + 3)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,3)
// CM2CON1<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x7CD1);	// @ (0xF9A * 8 + 1)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM2CON1,1)
// CCPTMRS<C1TSEL>
extern volatile __bit                   C1TSEL              __at(0x7AC8);	// @ (0xF59 * 8 + 0)
#define                                 C1TSEL_bit          _BIT_ACCESS(CCPTMRS,0)
// CM2CON0<C2CH0>
extern volatile __bit                   C2CH0               __at(0x7CC8);	// @ (0xF99 * 8 + 0)
#define                                 C2CH0_bit           _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2CH1>
extern volatile __bit                   C2CH1               __at(0x7CC9);	// @ (0xF99 * 8 + 1)
#define                                 C2CH1_bit           _BIT_ACCESS(CM2CON0,1)
// CM2CON1<C2HYS>
extern volatile __bit                   C2HYS               __at(0x7CD2);	// @ (0xF9A * 8 + 2)
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
extern volatile __bit                   C2OE                __at(0x7CCD);	// @ (0xF99 * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x7CCF);	// @ (0xF99 * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x7CCC);	// @ (0xF99 * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2R>
extern volatile __bit                   C2R                 __at(0x7CCA);	// @ (0xF99 * 8 + 2)
#define                                 C2R_bit             _BIT_ACCESS(CM2CON0,2)
// CM2CON1<C2RSEL>
extern volatile __bit                   C2RSEL              __at(0x7CD4);	// @ (0xF9A * 8 + 4)
#define                                 C2RSEL_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x7CCB);	// @ (0xF99 * 8 + 3)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,3)
// CM2CON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x7CD0);	// @ (0xF9A * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON1,0)
// CCPTMRS<C2TSEL>
extern volatile __bit                   C2TSEL              __at(0x7ACB);	// @ (0xF59 * 8 + 3)
#define                                 C2TSEL_bit          _BIT_ACCESS(CCPTMRS,3)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
// ECCP1AS<CCP1ASE>
extern volatile __bit                   CCP1ASE             __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 CCP1ASE_bit         _BIT_ACCESS(ECCP1AS,7)
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
// PMD1<CCP1MD>
extern volatile __bit                   CCP1MD              __at(0x7BF8);	// @ (0xF7F * 8 + 0)
#define                                 CCP1MD_bit          _BIT_ACCESS(PMD1,0)
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
extern volatile __bit                   CCP2M0              __at(0x7CB8);	// @ (0xF97 * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0x7CB9);	// @ (0xF97 * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0x7CBA);	// @ (0xF97 * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0x7CBB);	// @ (0xF97 * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// PMD1<CCP2MD>
extern volatile __bit                   CCP2MD              __at(0x7BF9);	// @ (0xF7F * 8 + 1)
#define                                 CCP2MD_bit          _BIT_ACCESS(PMD1,1)
// CCP2CON<CCP2X>
extern volatile __bit                   CCP2X               __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 CCP2X_bit           _BIT_ACCESS(CCP2CON,5)
// CCP2CON<CCP2Y>
extern volatile __bit                   CCP2Y               __at(0x7CBC);	// @ (0xF97 * 8 + 4)
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
// BAUDCON1<CKTXP>
extern volatile __bit                   CKTXP               __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 CKTXP_bit           _BIT_ACCESS(BAUDCON1,4)
// PIE2<CM1IE>
extern volatile __bit                   CM1IE               __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CM1IE_bit           _BIT_ACCESS(PIE2,6)
// PIR2<CM1IF>
extern volatile __bit                   CM1IF               __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CM1IF_bit           _BIT_ACCESS(PIR2,6)
// IPR2<CM1IP>
extern volatile __bit                   CM1IP               __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CM1IP_bit           _BIT_ACCESS(IPR2,6)
// PIE2<CM2IE>
extern volatile __bit                   CM2IE               __at(0x7D05);	// @ (0xFA0 * 8 + 5)
#define                                 CM2IE_bit           _BIT_ACCESS(PIE2,5)
// PIR2<CM2IF>
extern volatile __bit                   CM2IF               __at(0x7D0D);	// @ (0xFA1 * 8 + 5)
#define                                 CM2IF_bit           _BIT_ACCESS(PIR2,5)
// IPR2<CM2IP>
extern volatile __bit                   CM2IP               __at(0x7D15);	// @ (0xFA2 * 8 + 5)
#define                                 CM2IP_bit           _BIT_ACCESS(IPR2,5)
// PIE2<CMIE>
extern volatile __bit                   CMIE                __at(0x7D06);	// @ (0xFA0 * 8 + 6)
#define                                 CMIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<CMIF>
extern volatile __bit                   CMIF                __at(0x7D0E);	// @ (0xFA1 * 8 + 6)
#define                                 CMIF_bit            _BIT_ACCESS(PIR2,6)
// IPR2<CMIP>
extern volatile __bit                   CMIP                __at(0x7D16);	// @ (0xFA2 * 8 + 6)
#define                                 CMIP_bit            _BIT_ACCESS(IPR2,6)
// PMD1<CMP1MD>
extern volatile __bit                   CMP1MD              __at(0x7BFB);	// @ (0xF7F * 8 + 3)
#define                                 CMP1MD_bit          _BIT_ACCESS(PMD1,3)
// PMD1<CMP2MD>
extern volatile __bit                   CMP2MD              __at(0x7BFC);	// @ (0xF7F * 8 + 4)
#define                                 CMP2MD_bit          _BIT_ACCESS(PMD1,4)
// CM1CON0<COUT1>
extern volatile __bit                   COUT1               __at(0x7CC6);	// @ (0xF98 * 8 + 6)
#define                                 COUT1_bit           _BIT_ACCESS(CM1CON0,6)
// CM2CON0<COUT2>
extern volatile __bit                   COUT2               __at(0x7CCE);	// @ (0xF99 * 8 + 6)
#define                                 COUT2_bit           _BIT_ACCESS(CM2CON0,6)
// UEIE<CRC16EE>
extern volatile __bit                   CRC16EE             __at(0x7B32);	// @ (0xF66 * 8 + 2)
#define                                 CRC16EE_bit         _BIT_ACCESS(UEIE,2)
// UEIR<CRC16EF>
extern volatile __bit                   CRC16EF             __at(0x7B3A);	// @ (0xF67 * 8 + 2)
#define                                 CRC16EF_bit         _BIT_ACCESS(UEIR,2)
// UEIE<CRC5EE>
extern volatile __bit                   CRC5EE              __at(0x7B31);	// @ (0xF66 * 8 + 1)
#define                                 CRC5EE_bit          _BIT_ACCESS(UEIE,1)
// UEIR<CRC5EF>
extern volatile __bit                   CRC5EF              __at(0x7B39);	// @ (0xF67 * 8 + 1)
#define                                 CRC5EF_bit          _BIT_ACCESS(UEIR,1)
// RCSTA1<CREN>
extern volatile __bit                   CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA1,4)
// TXSTA1<CSRC>
extern volatile __bit                   CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA1,7)
// TXSTA1<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA1,7)
// CTMUCONH<CTMUEN>
extern volatile __bit                   CTMUEN              __at(0x7C7F);	// @ (0xF8F * 8 + 7)
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
// PMD1<CTMUMD>
extern volatile __bit                   CTMUMD              __at(0x7BFD);	// @ (0xF7F * 8 + 5)
#define                                 CTMUMD_bit          _BIT_ACCESS(PMD1,5)
// CTMUCONH<CTMUSIDL>
extern volatile __bit                   CTMUSIDL            __at(0x7C7D);	// @ (0xF8F * 8 + 5)
#define                                 CTMUSIDL_bit        _BIT_ACCESS(CTMUCONH,5)
// CTMUCONH<CTTRIG>
extern volatile __bit                   CTTRIG              __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 CTTRIG_bit          _BIT_ACCESS(CTMUCONH,0)
// SSP1STAT<DA>
extern volatile __bit                   DA                  __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DA1>
extern volatile __bit                   DA1                 __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DA1_bit             _BIT_ACCESS(SSP1STAT,5)
// VREFCON1<DACEN>
extern volatile __bit                   DACEN               __at(0x7BE7);	// @ (0xF7C * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(VREFCON1,7)
// VREFCON1<DACLPS>
extern volatile __bit                   DACLPS              __at(0x7BE6);	// @ (0xF7C * 8 + 6)
#define                                 DACLPS_bit          _BIT_ACCESS(VREFCON1,6)
// VREFCON1<DACNSS>
extern volatile __bit                   DACNSS              __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 DACNSS_bit          _BIT_ACCESS(VREFCON1,0)
// VREFCON1<DACOE>
extern volatile __bit                   DACOE               __at(0x7BE5);	// @ (0xF7C * 8 + 5)
#define                                 DACOE_bit           _BIT_ACCESS(VREFCON1,5)
// VREFCON1<DACPSS0>
extern volatile __bit                   DACPSS0             __at(0x7BE2);	// @ (0xF7C * 8 + 2)
#define                                 DACPSS0_bit         _BIT_ACCESS(VREFCON1,2)
// VREFCON1<DACPSS1>
extern volatile __bit                   DACPSS1             __at(0x7BE3);	// @ (0xF7C * 8 + 3)
#define                                 DACPSS1_bit         _BIT_ACCESS(VREFCON1,3)
// VREFCON2<DACR0>
extern volatile __bit                   DACR0               __at(0x7BD8);	// @ (0xF7B * 8 + 0)
#define                                 DACR0_bit           _BIT_ACCESS(VREFCON2,0)
// VREFCON2<DACR1>
extern volatile __bit                   DACR1               __at(0x7BD9);	// @ (0xF7B * 8 + 1)
#define                                 DACR1_bit           _BIT_ACCESS(VREFCON2,1)
// VREFCON2<DACR2>
extern volatile __bit                   DACR2               __at(0x7BDA);	// @ (0xF7B * 8 + 2)
#define                                 DACR2_bit           _BIT_ACCESS(VREFCON2,2)
// VREFCON2<DACR3>
extern volatile __bit                   DACR3               __at(0x7BDB);	// @ (0xF7B * 8 + 3)
#define                                 DACR3_bit           _BIT_ACCESS(VREFCON2,3)
// VREFCON2<DACR4>
extern volatile __bit                   DACR4               __at(0x7BDC);	// @ (0xF7B * 8 + 4)
#define                                 DACR4_bit           _BIT_ACCESS(VREFCON2,4)
// SSP1STAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0x7E3D);	// @ (0xFC7 * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSP1STAT,5)
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
extern volatile __bit                   DC2B0               __at(0x7CBC);	// @ (0xF97 * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0x7CBD);	// @ (0xF97 * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// UEIE<DFN8EE>
extern volatile __bit                   DFN8EE              __at(0x7B33);	// @ (0xF66 * 8 + 3)
#define                                 DFN8EE_bit          _BIT_ACCESS(UEIE,3)
// UEIR<DFN8EF>
extern volatile __bit                   DFN8EF              __at(0x7B3B);	// @ (0xF67 * 8 + 3)
#define                                 DFN8EF_bit          _BIT_ACCESS(UEIR,3)
// SSP1CON3<DHEN>
extern volatile __bit                   DHEN                __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSP1CON3,0)
// USTAT<DIR>
extern volatile __bit                   DIR                 __at(0x7B0A);	// @ (0xF61 * 8 + 2)
#define                                 DIR_bit             _BIT_ACCESS(USTAT,2)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// PORTC<DT>
extern volatile __bit                   DT                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT_bit              _BIT_ACCESS(PORTC,7)
// BAUDCON1<DTRXP>
extern volatile __bit                   DTRXP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 DTRXP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<DTRXP1>
extern volatile __bit                   DTRXP1              __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
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
// ECCP1AS<ECCP1AS0>
extern volatile __bit                   ECCP1AS0            __at(0x7DB4);	// @ (0xFB6 * 8 + 4)
#define                                 ECCP1AS0_bit        _BIT_ACCESS(ECCP1AS,4)
// ECCP1AS<ECCP1AS1>
extern volatile __bit                   ECCP1AS1            __at(0x7DB5);	// @ (0xFB6 * 8 + 5)
#define                                 ECCP1AS1_bit        _BIT_ACCESS(ECCP1AS,5)
// ECCP1AS<ECCP1AS2>
extern volatile __bit                   ECCP1AS2            __at(0x7DB6);	// @ (0xFB6 * 8 + 6)
#define                                 ECCP1AS2_bit        _BIT_ACCESS(ECCP1AS,6)
// ECCP1AS<ECCP1ASE>
extern volatile __bit                   ECCP1ASE            __at(0x7DB7);	// @ (0xFB6 * 8 + 7)
#define                                 ECCP1ASE_bit        _BIT_ACCESS(ECCP1AS,7)
// CTMUCONL<EDG1POL>
extern volatile __bit                   EDG1POL             __at(0x7C74);	// @ (0xF8E * 8 + 4)
#define                                 EDG1POL_bit         _BIT_ACCESS(CTMUCONL,4)
// CTMUCONL<EDG1SEL0>
extern volatile __bit                   EDG1SEL0            __at(0x7C72);	// @ (0xF8E * 8 + 2)
#define                                 EDG1SEL0_bit        _BIT_ACCESS(CTMUCONL,2)
// CTMUCONL<EDG1SEL1>
extern volatile __bit                   EDG1SEL1            __at(0x7C73);	// @ (0xF8E * 8 + 3)
#define                                 EDG1SEL1_bit        _BIT_ACCESS(CTMUCONL,3)
// CTMUCONL<EDG1STAT>
extern volatile __bit                   EDG1STAT            __at(0x7C70);	// @ (0xF8E * 8 + 0)
#define                                 EDG1STAT_bit        _BIT_ACCESS(CTMUCONL,0)
// CTMUCONL<EDG2POL>
extern volatile __bit                   EDG2POL             __at(0x7C77);	// @ (0xF8E * 8 + 7)
#define                                 EDG2POL_bit         _BIT_ACCESS(CTMUCONL,7)
// CTMUCONL<EDG2SEL0>
extern volatile __bit                   EDG2SEL0            __at(0x7C75);	// @ (0xF8E * 8 + 5)
#define                                 EDG2SEL0_bit        _BIT_ACCESS(CTMUCONL,5)
// CTMUCONL<EDG2SEL1>
extern volatile __bit                   EDG2SEL1            __at(0x7C76);	// @ (0xF8E * 8 + 6)
#define                                 EDG2SEL1_bit        _BIT_ACCESS(CTMUCONL,6)
// CTMUCONL<EDG2STAT>
extern volatile __bit                   EDG2STAT            __at(0x7C71);	// @ (0xF8E * 8 + 1)
#define                                 EDG2STAT_bit        _BIT_ACCESS(CTMUCONL,1)
// CTMUCONH<EDGEN>
extern volatile __bit                   EDGEN               __at(0x7C7B);	// @ (0xF8F * 8 + 3)
#define                                 EDGEN_bit           _BIT_ACCESS(CTMUCONH,3)
// CTMUCONH<EDGSEQEN>
extern volatile __bit                   EDGSEQEN            __at(0x7C7A);	// @ (0xF8F * 8 + 2)
#define                                 EDGSEQEN_bit        _BIT_ACCESS(CTMUCONH,2)
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
// PMD1<EMBMD>
extern volatile __bit                   EMBMD               __at(0x7BF8);	// @ (0xF7F * 8 + 0)
#define                                 EMBMD_bit           _BIT_ACCESS(PMD1,0)
// USTAT<ENDP0>
extern volatile __bit                   ENDP0               __at(0x7B0B);	// @ (0xF61 * 8 + 3)
#define                                 ENDP0_bit           _BIT_ACCESS(USTAT,3)
// USTAT<ENDP1>
extern volatile __bit                   ENDP1               __at(0x7B0C);	// @ (0xF61 * 8 + 4)
#define                                 ENDP1_bit           _BIT_ACCESS(USTAT,4)
// USTAT<ENDP2>
extern volatile __bit                   ENDP2               __at(0x7B0D);	// @ (0xF61 * 8 + 5)
#define                                 ENDP2_bit           _BIT_ACCESS(USTAT,5)
// USTAT<ENDP3>
extern volatile __bit                   ENDP3               __at(0x7B0E);	// @ (0xF61 * 8 + 6)
#define                                 ENDP3_bit           _BIT_ACCESS(USTAT,6)
// UEP0<EP0CONDIS>
extern volatile __bit                   EP0CONDIS           __at(0x7B53);	// @ (0xF6A * 8 + 3)
#define                                 EP0CONDIS_bit       _BIT_ACCESS(UEP0,3)
// UEP0<EP0HSHK>
extern volatile __bit                   EP0HSHK             __at(0x7B54);	// @ (0xF6A * 8 + 4)
#define                                 EP0HSHK_bit         _BIT_ACCESS(UEP0,4)
// UEP0<EP0INEN>
extern volatile __bit                   EP0INEN             __at(0x7B51);	// @ (0xF6A * 8 + 1)
#define                                 EP0INEN_bit         _BIT_ACCESS(UEP0,1)
// UEP0<EP0OUTEN>
extern volatile __bit                   EP0OUTEN            __at(0x7B52);	// @ (0xF6A * 8 + 2)
#define                                 EP0OUTEN_bit        _BIT_ACCESS(UEP0,2)
// UEP0<EP0STALL>
extern volatile __bit                   EP0STALL            __at(0x7B50);	// @ (0xF6A * 8 + 0)
#define                                 EP0STALL_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EP1CONDIS>
extern volatile __bit                   EP1CONDIS           __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 EP1CONDIS_bit       _BIT_ACCESS(UEP1,3)
// UEP1<EP1HSHK>
extern volatile __bit                   EP1HSHK             __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 EP1HSHK_bit         _BIT_ACCESS(UEP1,4)
// UEP1<EP1INEN>
extern volatile __bit                   EP1INEN             __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 EP1INEN_bit         _BIT_ACCESS(UEP1,1)
// UEP1<EP1OUTEN>
extern volatile __bit                   EP1OUTEN            __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 EP1OUTEN_bit        _BIT_ACCESS(UEP1,2)
// UEP1<EP1STALL>
extern volatile __bit                   EP1STALL            __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 EP1STALL_bit        _BIT_ACCESS(UEP1,0)
// UEP2<EP2CONDIS>
extern volatile __bit                   EP2CONDIS           __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 EP2CONDIS_bit       _BIT_ACCESS(UEP2,3)
// UEP2<EP2HSHK>
extern volatile __bit                   EP2HSHK             __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 EP2HSHK_bit         _BIT_ACCESS(UEP2,4)
// UEP2<EP2INEN>
extern volatile __bit                   EP2INEN             __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 EP2INEN_bit         _BIT_ACCESS(UEP2,1)
// UEP2<EP2OUTEN>
extern volatile __bit                   EP2OUTEN            __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 EP2OUTEN_bit        _BIT_ACCESS(UEP2,2)
// UEP2<EP2STALL>
extern volatile __bit                   EP2STALL            __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 EP2STALL_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EP3CONDIS>
extern volatile __bit                   EP3CONDIS           __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 EP3CONDIS_bit       _BIT_ACCESS(UEP3,3)
// UEP3<EP3HSHK>
extern volatile __bit                   EP3HSHK             __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 EP3HSHK_bit         _BIT_ACCESS(UEP3,4)
// UEP3<EP3INEN>
extern volatile __bit                   EP3INEN             __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 EP3INEN_bit         _BIT_ACCESS(UEP3,1)
// UEP3<EP3OUTEN>
extern volatile __bit                   EP3OUTEN            __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 EP3OUTEN_bit        _BIT_ACCESS(UEP3,2)
// UEP3<EP3STALL>
extern volatile __bit                   EP3STALL            __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 EP3STALL_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EP4CONDIS>
extern volatile __bit                   EP4CONDIS           __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 EP4CONDIS_bit       _BIT_ACCESS(UEP4,3)
// UEP4<EP4HSHK>
extern volatile __bit                   EP4HSHK             __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 EP4HSHK_bit         _BIT_ACCESS(UEP4,4)
// UEP4<EP4INEN>
extern volatile __bit                   EP4INEN             __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 EP4INEN_bit         _BIT_ACCESS(UEP4,1)
// UEP4<EP4OUTEN>
extern volatile __bit                   EP4OUTEN            __at(0x7B72);	// @ (0xF6E * 8 + 2)
#define                                 EP4OUTEN_bit        _BIT_ACCESS(UEP4,2)
// UEP4<EP4STALL>
extern volatile __bit                   EP4STALL            __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 EP4STALL_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EP5CONDIS>
extern volatile __bit                   EP5CONDIS           __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 EP5CONDIS_bit       _BIT_ACCESS(UEP5,3)
// UEP5<EP5HSHK>
extern volatile __bit                   EP5HSHK             __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 EP5HSHK_bit         _BIT_ACCESS(UEP5,4)
// UEP5<EP5INEN>
extern volatile __bit                   EP5INEN             __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 EP5INEN_bit         _BIT_ACCESS(UEP5,1)
// UEP5<EP5OUTEN>
extern volatile __bit                   EP5OUTEN            __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 EP5OUTEN_bit        _BIT_ACCESS(UEP5,2)
// UEP5<EP5STALL>
extern volatile __bit                   EP5STALL            __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 EP5STALL_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EP6CONDIS>
extern volatile __bit                   EP6CONDIS           __at(0x7B83);	// @ (0xF70 * 8 + 3)
#define                                 EP6CONDIS_bit       _BIT_ACCESS(UEP6,3)
// UEP6<EP6HSHK>
extern volatile __bit                   EP6HSHK             __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 EP6HSHK_bit         _BIT_ACCESS(UEP6,4)
// UEP6<EP6INEN>
extern volatile __bit                   EP6INEN             __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 EP6INEN_bit         _BIT_ACCESS(UEP6,1)
// UEP6<EP6OUTEN>
extern volatile __bit                   EP6OUTEN            __at(0x7B82);	// @ (0xF70 * 8 + 2)
#define                                 EP6OUTEN_bit        _BIT_ACCESS(UEP6,2)
// UEP6<EP6STALL>
extern volatile __bit                   EP6STALL            __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 EP6STALL_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EP7CONDIS>
extern volatile __bit                   EP7CONDIS           __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 EP7CONDIS_bit       _BIT_ACCESS(UEP7,3)
// UEP7<EP7HSHK>
extern volatile __bit                   EP7HSHK             __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 EP7HSHK_bit         _BIT_ACCESS(UEP7,4)
// UEP7<EP7INEN>
extern volatile __bit                   EP7INEN             __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 EP7INEN_bit         _BIT_ACCESS(UEP7,1)
// UEP7<EP7OUTEN>
extern volatile __bit                   EP7OUTEN            __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 EP7OUTEN_bit        _BIT_ACCESS(UEP7,2)
// UEP7<EP7STALL>
extern volatile __bit                   EP7STALL            __at(0x7B88);	// @ (0xF71 * 8 + 0)
#define                                 EP7STALL_bit        _BIT_ACCESS(UEP7,0)
// UEP0<EPCONDIS0>
extern volatile __bit                   EPCONDIS0           __at(0x7B53);	// @ (0xF6A * 8 + 3)
#define                                 EPCONDIS0_bit       _BIT_ACCESS(UEP0,3)
// UEP1<EPCONDIS1>
extern volatile __bit                   EPCONDIS1           __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 EPCONDIS1_bit       _BIT_ACCESS(UEP1,3)
// UEP10<EPCONDIS10>
extern volatile __bit                   EPCONDIS10          __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 EPCONDIS10_bit      _BIT_ACCESS(UEP10,3)
// UEP11<EPCONDIS11>
extern volatile __bit                   EPCONDIS11          __at(0x7BAB);	// @ (0xF75 * 8 + 3)
#define                                 EPCONDIS11_bit      _BIT_ACCESS(UEP11,3)
// UEP12<EPCONDIS12>
extern volatile __bit                   EPCONDIS12          __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 EPCONDIS12_bit      _BIT_ACCESS(UEP12,3)
// UEP13<EPCONDIS13>
extern volatile __bit                   EPCONDIS13          __at(0x7BBB);	// @ (0xF77 * 8 + 3)
#define                                 EPCONDIS13_bit      _BIT_ACCESS(UEP13,3)
// UEP14<EPCONDIS14>
extern volatile __bit                   EPCONDIS14          __at(0x7BC3);	// @ (0xF78 * 8 + 3)
#define                                 EPCONDIS14_bit      _BIT_ACCESS(UEP14,3)
// UEP15<EPCONDIS15>
extern volatile __bit                   EPCONDIS15          __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 EPCONDIS15_bit      _BIT_ACCESS(UEP15,3)
// UEP2<EPCONDIS2>
extern volatile __bit                   EPCONDIS2           __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 EPCONDIS2_bit       _BIT_ACCESS(UEP2,3)
// UEP3<EPCONDIS3>
extern volatile __bit                   EPCONDIS3           __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 EPCONDIS3_bit       _BIT_ACCESS(UEP3,3)
// UEP4<EPCONDIS4>
extern volatile __bit                   EPCONDIS4           __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 EPCONDIS4_bit       _BIT_ACCESS(UEP4,3)
// UEP5<EPCONDIS5>
extern volatile __bit                   EPCONDIS5           __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 EPCONDIS5_bit       _BIT_ACCESS(UEP5,3)
// UEP6<EPCONDIS6>
extern volatile __bit                   EPCONDIS6           __at(0x7B83);	// @ (0xF70 * 8 + 3)
#define                                 EPCONDIS6_bit       _BIT_ACCESS(UEP6,3)
// UEP7<EPCONDIS7>
extern volatile __bit                   EPCONDIS7           __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 EPCONDIS7_bit       _BIT_ACCESS(UEP7,3)
// UEP8<EPCONDIS8>
extern volatile __bit                   EPCONDIS8           __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 EPCONDIS8_bit       _BIT_ACCESS(UEP8,3)
// UEP9<EPCONDIS9>
extern volatile __bit                   EPCONDIS9           __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 EPCONDIS9_bit       _BIT_ACCESS(UEP9,3)
// UEP0<EPHSHK0>
extern volatile __bit                   EPHSHK0             __at(0x7B54);	// @ (0xF6A * 8 + 4)
#define                                 EPHSHK0_bit         _BIT_ACCESS(UEP0,4)
// UEP1<EPHSHK1>
extern volatile __bit                   EPHSHK1             __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 EPHSHK1_bit         _BIT_ACCESS(UEP1,4)
// UEP10<EPHSHK10>
extern volatile __bit                   EPHSHK10            __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 EPHSHK10_bit        _BIT_ACCESS(UEP10,4)
// UEP11<EPHSHK11>
extern volatile __bit                   EPHSHK11            __at(0x7BAC);	// @ (0xF75 * 8 + 4)
#define                                 EPHSHK11_bit        _BIT_ACCESS(UEP11,4)
// UEP12<EPHSHK12>
extern volatile __bit                   EPHSHK12            __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 EPHSHK12_bit        _BIT_ACCESS(UEP12,4)
// UEP13<EPHSHK13>
extern volatile __bit                   EPHSHK13            __at(0x7BBC);	// @ (0xF77 * 8 + 4)
#define                                 EPHSHK13_bit        _BIT_ACCESS(UEP13,4)
// UEP14<EPHSHK14>
extern volatile __bit                   EPHSHK14            __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 EPHSHK14_bit        _BIT_ACCESS(UEP14,4)
// UEP15<EPHSHK15>
extern volatile __bit                   EPHSHK15            __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 EPHSHK15_bit        _BIT_ACCESS(UEP15,4)
// UEP2<EPHSHK2>
extern volatile __bit                   EPHSHK2             __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 EPHSHK2_bit         _BIT_ACCESS(UEP2,4)
// UEP3<EPHSHK3>
extern volatile __bit                   EPHSHK3             __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 EPHSHK3_bit         _BIT_ACCESS(UEP3,4)
// UEP4<EPHSHK4>
extern volatile __bit                   EPHSHK4             __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 EPHSHK4_bit         _BIT_ACCESS(UEP4,4)
// UEP5<EPHSHK5>
extern volatile __bit                   EPHSHK5             __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 EPHSHK5_bit         _BIT_ACCESS(UEP5,4)
// UEP6<EPHSHK6>
extern volatile __bit                   EPHSHK6             __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 EPHSHK6_bit         _BIT_ACCESS(UEP6,4)
// UEP7<EPHSHK7>
extern volatile __bit                   EPHSHK7             __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 EPHSHK7_bit         _BIT_ACCESS(UEP7,4)
// UEP8<EPHSHK8>
extern volatile __bit                   EPHSHK8             __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 EPHSHK8_bit         _BIT_ACCESS(UEP8,4)
// UEP9<EPHSHK9>
extern volatile __bit                   EPHSHK9             __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 EPHSHK9_bit         _BIT_ACCESS(UEP9,4)
// UEP0<EPINEN0>
extern volatile __bit                   EPINEN0             __at(0x7B51);	// @ (0xF6A * 8 + 1)
#define                                 EPINEN0_bit         _BIT_ACCESS(UEP0,1)
// UEP1<EPINEN1>
extern volatile __bit                   EPINEN1             __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 EPINEN1_bit         _BIT_ACCESS(UEP1,1)
// UEP10<EPINEN10>
extern volatile __bit                   EPINEN10            __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 EPINEN10_bit        _BIT_ACCESS(UEP10,1)
// UEP11<EPINEN11>
extern volatile __bit                   EPINEN11            __at(0x7BA9);	// @ (0xF75 * 8 + 1)
#define                                 EPINEN11_bit        _BIT_ACCESS(UEP11,1)
// UEP12<EPINEN12>
extern volatile __bit                   EPINEN12            __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 EPINEN12_bit        _BIT_ACCESS(UEP12,1)
// UEP13<EPINEN13>
extern volatile __bit                   EPINEN13            __at(0x7BB9);	// @ (0xF77 * 8 + 1)
#define                                 EPINEN13_bit        _BIT_ACCESS(UEP13,1)
// UEP14<EPINEN14>
extern volatile __bit                   EPINEN14            __at(0x7BC1);	// @ (0xF78 * 8 + 1)
#define                                 EPINEN14_bit        _BIT_ACCESS(UEP14,1)
// UEP15<EPINEN15>
extern volatile __bit                   EPINEN15            __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 EPINEN15_bit        _BIT_ACCESS(UEP15,1)
// UEP2<EPINEN2>
extern volatile __bit                   EPINEN2             __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 EPINEN2_bit         _BIT_ACCESS(UEP2,1)
// UEP3<EPINEN3>
extern volatile __bit                   EPINEN3             __at(0x7B69);	// @ (0xF6D * 8 + 1)
#define                                 EPINEN3_bit         _BIT_ACCESS(UEP3,1)
// UEP4<EPINEN4>
extern volatile __bit                   EPINEN4             __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 EPINEN4_bit         _BIT_ACCESS(UEP4,1)
// UEP5<EPINEN5>
extern volatile __bit                   EPINEN5             __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 EPINEN5_bit         _BIT_ACCESS(UEP5,1)
// UEP6<EPINEN6>
extern volatile __bit                   EPINEN6             __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 EPINEN6_bit         _BIT_ACCESS(UEP6,1)
// UEP7<EPINEN7>
extern volatile __bit                   EPINEN7             __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 EPINEN7_bit         _BIT_ACCESS(UEP7,1)
// UEP8<EPINEN8>
extern volatile __bit                   EPINEN8             __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 EPINEN8_bit         _BIT_ACCESS(UEP8,1)
// UEP9<EPINEN9>
extern volatile __bit                   EPINEN9             __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 EPINEN9_bit         _BIT_ACCESS(UEP9,1)
// UEP0<EPOUTEN0>
extern volatile __bit                   EPOUTEN0            __at(0x7B52);	// @ (0xF6A * 8 + 2)
#define                                 EPOUTEN0_bit        _BIT_ACCESS(UEP0,2)
// UEP1<EPOUTEN1>
extern volatile __bit                   EPOUTEN1            __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 EPOUTEN1_bit        _BIT_ACCESS(UEP1,2)
// UEP10<EPOUTEN10>
extern volatile __bit                   EPOUTEN10           __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 EPOUTEN10_bit       _BIT_ACCESS(UEP10,2)
// UEP11<EPOUTEN11>
extern volatile __bit                   EPOUTEN11           __at(0x7BAA);	// @ (0xF75 * 8 + 2)
#define                                 EPOUTEN11_bit       _BIT_ACCESS(UEP11,2)
// UEP12<EPOUTEN12>
extern volatile __bit                   EPOUTEN12           __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 EPOUTEN12_bit       _BIT_ACCESS(UEP12,2)
// UEP13<EPOUTEN13>
extern volatile __bit                   EPOUTEN13           __at(0x7BBA);	// @ (0xF77 * 8 + 2)
#define                                 EPOUTEN13_bit       _BIT_ACCESS(UEP13,2)
// UEP14<EPOUTEN14>
extern volatile __bit                   EPOUTEN14           __at(0x7BC2);	// @ (0xF78 * 8 + 2)
#define                                 EPOUTEN14_bit       _BIT_ACCESS(UEP14,2)
// UEP15<EPOUTEN15>
extern volatile __bit                   EPOUTEN15           __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 EPOUTEN15_bit       _BIT_ACCESS(UEP15,2)
// UEP2<EPOUTEN2>
extern volatile __bit                   EPOUTEN2            __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 EPOUTEN2_bit        _BIT_ACCESS(UEP2,2)
// UEP3<EPOUTEN3>
extern volatile __bit                   EPOUTEN3            __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 EPOUTEN3_bit        _BIT_ACCESS(UEP3,2)
// UEP4<EPOUTEN4>
extern volatile __bit                   EPOUTEN4            __at(0x7B72);	// @ (0xF6E * 8 + 2)
#define                                 EPOUTEN4_bit        _BIT_ACCESS(UEP4,2)
// UEP5<EPOUTEN5>
extern volatile __bit                   EPOUTEN5            __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 EPOUTEN5_bit        _BIT_ACCESS(UEP5,2)
// UEP6<EPOUTEN6>
extern volatile __bit                   EPOUTEN6            __at(0x7B82);	// @ (0xF70 * 8 + 2)
#define                                 EPOUTEN6_bit        _BIT_ACCESS(UEP6,2)
// UEP7<EPOUTEN7>
extern volatile __bit                   EPOUTEN7            __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 EPOUTEN7_bit        _BIT_ACCESS(UEP7,2)
// UEP8<EPOUTEN8>
extern volatile __bit                   EPOUTEN8            __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 EPOUTEN8_bit        _BIT_ACCESS(UEP8,2)
// UEP9<EPOUTEN9>
extern volatile __bit                   EPOUTEN9            __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 EPOUTEN9_bit        _BIT_ACCESS(UEP9,2)
// UEP0<EPSTALL0>
extern volatile __bit                   EPSTALL0            __at(0x7B50);	// @ (0xF6A * 8 + 0)
#define                                 EPSTALL0_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EPSTALL1>
extern volatile __bit                   EPSTALL1            __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 EPSTALL1_bit        _BIT_ACCESS(UEP1,0)
// UEP10<EPSTALL10>
extern volatile __bit                   EPSTALL10           __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 EPSTALL10_bit       _BIT_ACCESS(UEP10,0)
// UEP11<EPSTALL11>
extern volatile __bit                   EPSTALL11           __at(0x7BA8);	// @ (0xF75 * 8 + 0)
#define                                 EPSTALL11_bit       _BIT_ACCESS(UEP11,0)
// UEP12<EPSTALL12>
extern volatile __bit                   EPSTALL12           __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 EPSTALL12_bit       _BIT_ACCESS(UEP12,0)
// UEP13<EPSTALL13>
extern volatile __bit                   EPSTALL13           __at(0x7BB8);	// @ (0xF77 * 8 + 0)
#define                                 EPSTALL13_bit       _BIT_ACCESS(UEP13,0)
// UEP14<EPSTALL14>
extern volatile __bit                   EPSTALL14           __at(0x7BC0);	// @ (0xF78 * 8 + 0)
#define                                 EPSTALL14_bit       _BIT_ACCESS(UEP14,0)
// UEP15<EPSTALL15>
extern volatile __bit                   EPSTALL15           __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 EPSTALL15_bit       _BIT_ACCESS(UEP15,0)
// UEP2<EPSTALL2>
extern volatile __bit                   EPSTALL2            __at(0x7B60);	// @ (0xF6C * 8 + 0)
#define                                 EPSTALL2_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EPSTALL3>
extern volatile __bit                   EPSTALL3            __at(0x7B68);	// @ (0xF6D * 8 + 0)
#define                                 EPSTALL3_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EPSTALL4>
extern volatile __bit                   EPSTALL4            __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 EPSTALL4_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EPSTALL5>
extern volatile __bit                   EPSTALL5            __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 EPSTALL5_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EPSTALL6>
extern volatile __bit                   EPSTALL6            __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 EPSTALL6_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EPSTALL7>
extern volatile __bit                   EPSTALL7            __at(0x7B88);	// @ (0xF71 * 8 + 0)
#define                                 EPSTALL7_bit        _BIT_ACCESS(UEP7,0)
// UEP8<EPSTALL8>
extern volatile __bit                   EPSTALL8            __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 EPSTALL8_bit        _BIT_ACCESS(UEP8,0)
// UEP9<EPSTALL9>
extern volatile __bit                   EPSTALL9            __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 EPSTALL9_bit        _BIT_ACCESS(UEP9,0)
// RCSTA1<FERR>
extern volatile __bit                   FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA1,2)
// OSCCON<FLTS>
extern volatile __bit                   FLTS                __at(0x7E9A);	// @ (0xFD3 * 8 + 2)
#define                                 FLTS_bit            _BIT_ACCESS(OSCCON,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// UFRML<FRM0>
extern volatile __bit                   FRM0                __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 FRM0_bit            _BIT_ACCESS(UFRML,0)
// UFRML<FRM1>
extern volatile __bit                   FRM1                __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 FRM1_bit            _BIT_ACCESS(UFRML,1)
// UFRMH<FRM10>
extern volatile __bit                   FRM10               __at(0x7B4A);	// @ (0xF69 * 8 + 2)
#define                                 FRM10_bit           _BIT_ACCESS(UFRMH,2)
// UFRML<FRM2>
extern volatile __bit                   FRM2                __at(0x7B42);	// @ (0xF68 * 8 + 2)
#define                                 FRM2_bit            _BIT_ACCESS(UFRML,2)
// UFRML<FRM3>
extern volatile __bit                   FRM3                __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 FRM3_bit            _BIT_ACCESS(UFRML,3)
// UFRML<FRM4>
extern volatile __bit                   FRM4                __at(0x7B44);	// @ (0xF68 * 8 + 4)
#define                                 FRM4_bit            _BIT_ACCESS(UFRML,4)
// UFRML<FRM5>
extern volatile __bit                   FRM5                __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 FRM5_bit            _BIT_ACCESS(UFRML,5)
// UFRML<FRM6>
extern volatile __bit                   FRM6                __at(0x7B46);	// @ (0xF68 * 8 + 6)
#define                                 FRM6_bit            _BIT_ACCESS(UFRML,6)
// UFRML<FRM7>
extern volatile __bit                   FRM7                __at(0x7B47);	// @ (0xF68 * 8 + 7)
#define                                 FRM7_bit            _BIT_ACCESS(UFRML,7)
// UFRMH<FRM8>
extern volatile __bit                   FRM8                __at(0x7B48);	// @ (0xF69 * 8 + 0)
#define                                 FRM8_bit            _BIT_ACCESS(UFRMH,0)
// UFRMH<FRM9>
extern volatile __bit                   FRM9                __at(0x7B49);	// @ (0xF69 * 8 + 1)
#define                                 FRM9_bit            _BIT_ACCESS(UFRMH,1)
// UCFG<FSEN>
extern volatile __bit                   FSEN                __at(0x7B12);	// @ (0xF62 * 8 + 2)
#define                                 FSEN_bit            _BIT_ACCESS(UCFG,2)
// VREFCON0<FVREN>
extern volatile __bit                   FVREN               __at(0x7BEF);	// @ (0xF7D * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(VREFCON0,7)
// VREFCON0<FVRS0>
extern volatile __bit                   FVRS0               __at(0x7BEC);	// @ (0xF7D * 8 + 4)
#define                                 FVRS0_bit           _BIT_ACCESS(VREFCON0,4)
// VREFCON0<FVRS1>
extern volatile __bit                   FVRS1               __at(0x7BED);	// @ (0xF7D * 8 + 5)
#define                                 FVRS1_bit           _BIT_ACCESS(VREFCON0,5)
// VREFCON0<FVRST>
extern volatile __bit                   FVRST               __at(0x7BEE);	// @ (0xF7D * 8 + 6)
#define                                 FVRST_bit           _BIT_ACCESS(VREFCON0,6)
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
// OSCCON2<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCCON2,1)
// OSCCON<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x7E9A);	// @ (0xFD3 * 8 + 2)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCCON,2)
// HLVDCON<HLVDEN>
extern volatile __bit                   HLVDEN              __at(0x7CE4);	// @ (0xF9C * 8 + 4)
#define                                 HLVDEN_bit          _BIT_ACCESS(HLVDCON,4)
// PIE2<HLVDIE>
extern volatile __bit                   HLVDIE              __at(0x7D02);	// @ (0xFA0 * 8 + 2)
#define                                 HLVDIE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<HLVDIF>
extern volatile __bit                   HLVDIF              __at(0x7D0A);	// @ (0xFA1 * 8 + 2)
#define                                 HLVDIF_bit          _BIT_ACCESS(PIR2,2)
// PORTA<HLVDIN>
extern volatile __bit                   HLVDIN              __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 HLVDIN_bit          _BIT_ACCESS(PORTA,5)
// IPR2<HLVDIP>
extern volatile __bit                   HLVDIP              __at(0x7D12);	// @ (0xFA2 * 8 + 2)
#define                                 HLVDIP_bit          _BIT_ACCESS(IPR2,2)
// HLVDCON<HLVDL0>
extern volatile __bit                   HLVDL0              __at(0x7CE0);	// @ (0xF9C * 8 + 0)
#define                                 HLVDL0_bit          _BIT_ACCESS(HLVDCON,0)
// HLVDCON<HLVDL1>
extern volatile __bit                   HLVDL1              __at(0x7CE1);	// @ (0xF9C * 8 + 1)
#define                                 HLVDL1_bit          _BIT_ACCESS(HLVDCON,1)
// HLVDCON<HLVDL2>
extern volatile __bit                   HLVDL2              __at(0x7CE2);	// @ (0xF9C * 8 + 2)
#define                                 HLVDL2_bit          _BIT_ACCESS(HLVDCON,2)
// HLVDCON<HLVDL3>
extern volatile __bit                   HLVDL3              __at(0x7CE3);	// @ (0xF9C * 8 + 3)
#define                                 HLVDL3_bit          _BIT_ACCESS(HLVDCON,3)
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
extern volatile __bit                   IDISSEN             __at(0x7C79);	// @ (0xF8F * 8 + 1)
#define                                 IDISSEN_bit         _BIT_ACCESS(CTMUCONH,1)
// UIE<IDLEIE>
extern volatile __bit                   IDLEIE              __at(0x7B24);	// @ (0xF64 * 8 + 4)
#define                                 IDLEIE_bit          _BIT_ACCESS(UIE,4)
// UIR<IDLEIF>
extern volatile __bit                   IDLEIF              __at(0x7B2C);	// @ (0xF65 * 8 + 4)
#define                                 IDLEIF_bit          _BIT_ACCESS(UIR,4)
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
// INTCON2<INTEDG0>
extern volatile __bit                   INTEDG0             __at(0x7F8E);	// @ (0xFF1 * 8 + 6)
#define                                 INTEDG0_bit         _BIT_ACCESS(INTCON2,6)
// INTCON2<INTEDG1>
extern volatile __bit                   INTEDG1             __at(0x7F8D);	// @ (0xFF1 * 8 + 5)
#define                                 INTEDG1_bit         _BIT_ACCESS(INTCON2,5)
// INTCON2<INTEDG2>
extern volatile __bit                   INTEDG2             __at(0x7F8C);	// @ (0xFF1 * 8 + 4)
#define                                 INTEDG2_bit         _BIT_ACCESS(INTCON2,4)
// OSCCON2<INTSRC>
extern volatile __bit                   INTSRC              __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 INTSRC_bit          _BIT_ACCESS(OSCCON2,5)
// IOCB<IOCB4>
extern volatile __bit                   IOCB4               __at(0x7C34);	// @ (0xF86 * 8 + 4)
#define                                 IOCB4_bit           _BIT_ACCESS(IOCB,4)
// IOCB<IOCB5>
extern volatile __bit                   IOCB5               __at(0x7C35);	// @ (0xF86 * 8 + 5)
#define                                 IOCB5_bit           _BIT_ACCESS(IOCB,5)
// IOCB<IOCB6>
extern volatile __bit                   IOCB6               __at(0x7C36);	// @ (0xF86 * 8 + 6)
#define                                 IOCB6_bit           _BIT_ACCESS(IOCB,6)
// IOCB<IOCB7>
extern volatile __bit                   IOCB7               __at(0x7C37);	// @ (0xF86 * 8 + 7)
#define                                 IOCB7_bit           _BIT_ACCESS(IOCB,7)
// IOCC<IOCC0>
extern volatile __bit                   IOCC0               __at(0x7C38);	// @ (0xF87 * 8 + 0)
#define                                 IOCC0_bit           _BIT_ACCESS(IOCC,0)
// IOCC<IOCC1>
extern volatile __bit                   IOCC1               __at(0x7C39);	// @ (0xF87 * 8 + 1)
#define                                 IOCC1_bit           _BIT_ACCESS(IOCC,1)
// IOCC<IOCC2>
extern volatile __bit                   IOCC2               __at(0x7C3A);	// @ (0xF87 * 8 + 2)
#define                                 IOCC2_bit           _BIT_ACCESS(IOCC,2)
// IOCC<IOCC4>
extern volatile __bit                   IOCC4               __at(0x7C3C);	// @ (0xF87 * 8 + 4)
#define                                 IOCC4_bit           _BIT_ACCESS(IOCC,4)
// IOCC<IOCC5>
extern volatile __bit                   IOCC5               __at(0x7C3D);	// @ (0xF87 * 8 + 5)
#define                                 IOCC5_bit           _BIT_ACCESS(IOCC,5)
// IOCC<IOCC6>
extern volatile __bit                   IOCC6               __at(0x7C3E);	// @ (0xF87 * 8 + 6)
#define                                 IOCC6_bit           _BIT_ACCESS(IOCC,6)
// IOCC<IOCC7>
extern volatile __bit                   IOCC7               __at(0x7C3F);	// @ (0xF87 * 8 + 7)
#define                                 IOCC7_bit           _BIT_ACCESS(IOCC,7)
// INTCON<IOCIE>
extern volatile __bit                   IOCIE               __at(0x7F93);	// @ (0xFF2 * 8 + 3)
#define                                 IOCIE_bit           _BIT_ACCESS(INTCON,3)
// INTCON<IOCIF>
extern volatile __bit                   IOCIF               __at(0x7F90);	// @ (0xFF2 * 8 + 0)
#define                                 IOCIF_bit           _BIT_ACCESS(INTCON,0)
// INTCON2<IOCIP>
extern volatile __bit                   IOCIP               __at(0x7F88);	// @ (0xFF1 * 8 + 0)
#define                                 IOCIP_bit           _BIT_ACCESS(INTCON2,0)
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
extern volatile __bit                   IRNG0               __at(0x7C40);	// @ (0xF88 * 8 + 0)
#define                                 IRNG0_bit           _BIT_ACCESS(CTMUICON,0)
// CTMUICON<IRNG1>
extern volatile __bit                   IRNG1               __at(0x7C41);	// @ (0xF88 * 8 + 1)
#define                                 IRNG1_bit           _BIT_ACCESS(CTMUICON,1)
// HLVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x7CE5);	// @ (0xF9C * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(HLVDCON,5)
// CTMUICON<ITRIM0>
extern volatile __bit                   ITRIM0              __at(0x7C42);	// @ (0xF88 * 8 + 2)
#define                                 ITRIM0_bit          _BIT_ACCESS(CTMUICON,2)
// CTMUICON<ITRIM1>
extern volatile __bit                   ITRIM1              __at(0x7C43);	// @ (0xF88 * 8 + 3)
#define                                 ITRIM1_bit          _BIT_ACCESS(CTMUICON,3)
// CTMUICON<ITRIM2>
extern volatile __bit                   ITRIM2              __at(0x7C44);	// @ (0xF88 * 8 + 4)
#define                                 ITRIM2_bit          _BIT_ACCESS(CTMUICON,4)
// CTMUICON<ITRIM3>
extern volatile __bit                   ITRIM3              __at(0x7C45);	// @ (0xF88 * 8 + 5)
#define                                 ITRIM3_bit          _BIT_ACCESS(CTMUICON,5)
// CTMUICON<ITRIM4>
extern volatile __bit                   ITRIM4              __at(0x7C46);	// @ (0xF88 * 8 + 6)
#define                                 ITRIM4_bit          _BIT_ACCESS(CTMUICON,6)
// CTMUICON<ITRIM5>
extern volatile __bit                   ITRIM5              __at(0x7C47);	// @ (0xF88 * 8 + 7)
#define                                 ITRIM5_bit          _BIT_ACCESS(CTMUICON,7)
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
// CM2CON1<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x7CD7);	// @ (0xF9A * 8 + 7)
#define                                 MC1OUT_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x7CD6);	// @ (0xF9A * 8 + 6)
#define                                 MC2OUT_bit          _BIT_ACCESS(CM2CON1,6)
// SSP1ADD<MSK0>
extern volatile __bit                   MSK0                __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK01>
extern volatile __bit                   MSK01               __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 MSK01_bit           _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK1>
extern volatile __bit                   MSK1                __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK11>
extern volatile __bit                   MSK11               __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 MSK11_bit           _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK2>
extern volatile __bit                   MSK2                __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK21>
extern volatile __bit                   MSK21               __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 MSK21_bit           _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK3>
extern volatile __bit                   MSK3                __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK31>
extern volatile __bit                   MSK31               __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 MSK31_bit           _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK4>
extern volatile __bit                   MSK4                __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK41>
extern volatile __bit                   MSK41               __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 MSK41_bit           _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK5>
extern volatile __bit                   MSK5                __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK51>
extern volatile __bit                   MSK51               __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 MSK51_bit           _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK6>
extern volatile __bit                   MSK6                __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK61>
extern volatile __bit                   MSK61               __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 MSK61_bit           _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK7>
extern volatile __bit                   MSK7                __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSP1ADD,7)
// SSP1ADD<MSK71>
extern volatile __bit                   MSK71               __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 MSK71_bit           _BIT_ACCESS(SSP1ADD,7)
// PMD1<MSSP1MD>
extern volatile __bit                   MSSP1MD             __at(0x7BFE);	// @ (0xF7F * 8 + 6)
#define                                 MSSP1MD_bit         _BIT_ACCESS(PMD1,6)
// PMD1<MSSPMD>
extern volatile __bit                   MSSPMD              __at(0x7BFE);	// @ (0xF7F * 8 + 6)
#define                                 MSSPMD_bit          _BIT_ACCESS(PMD1,6)
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
// RCON<NOT_RI>
extern volatile __bit                   NOT_RI              __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 NOT_RI_bit          _BIT_ACCESS(RCON,4)
// T1GCON<NOT_T1DONE>
extern volatile __bit                   NOT_T1DONE          __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 NOT_T1DONE_bit      _BIT_ACCESS(T1GCON,3)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// T3GCON<NOT_T3DONE>
extern volatile __bit                   NOT_T3DONE          __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 NOT_T3DONE_bit      _BIT_ACCESS(T3GCON,3)
// T3CON<NOT_T3SYNC>
extern volatile __bit                   NOT_T3SYNC          __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 NOT_T3SYNC_bit      _BIT_ACCESS(T3CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// SSP1STAT<NOT_W>
extern volatile __bit                   NOT_W               __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_W_bit           _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<NOT_WRITE>
extern volatile __bit                   NOT_WRITE           __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 NOT_WRITE_bit       _BIT_ACCESS(SSP1STAT,2)
// ADCON1<NVCFG0>
extern volatile __bit                   NVCFG0              __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 NVCFG0_bit          _BIT_ACCESS(ADCON1,0)
// ADCON1<NVCFG1>
extern volatile __bit                   NVCFG1              __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 NVCFG1_bit          _BIT_ACCESS(ADCON1,1)
// RCSTA1<OERR>
extern volatile __bit                   OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA1,1)
// CTMUCONH<ON>
extern volatile __bit                   ON                  __at(0x7C7F);	// @ (0xF8F * 8 + 7)
#define                                 ON_bit              _BIT_ACCESS(CTMUCONH,7)
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
// PORTC<P1A>
extern volatile __bit                   P1A                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 P1A_bit             _BIT_ACCESS(PORTC,2)
// CCP1CON<P1M0>
extern volatile __bit                   P1M0                __at(0x7DEE);	// @ (0xFBD * 8 + 6)
#define                                 P1M0_bit            _BIT_ACCESS(CCP1CON,6)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x7DEF);	// @ (0xFBD * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// PWM1CON<P1RSEN>
extern volatile __bit                   P1RSEN              __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 P1RSEN_bit          _BIT_ACCESS(PWM1CON,7)
// PORTC<PA1>
extern volatile __bit                   PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            _BIT_ACCESS(PORTE,3)
// SSP1CON3<PCIE>
extern volatile __bit                   PCIE                __at(0x7E5E);	// @ (0xFCB * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSP1CON3,6)
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
// PORTB<PGM>
extern volatile __bit                   PGM                 __at(0x7C0D);	// @ (0xF81 * 8 + 5)
#define                                 PGM_bit             _BIT_ACCESS(PORTB,5)
// UEIE<PIDEE>
extern volatile __bit                   PIDEE               __at(0x7B30);	// @ (0xF66 * 8 + 0)
#define                                 PIDEE_bit           _BIT_ACCESS(UEIE,0)
// UEIR<PIDEF>
extern volatile __bit                   PIDEF               __at(0x7B38);	// @ (0xF67 * 8 + 0)
#define                                 PIDEF_bit           _BIT_ACCESS(UEIR,0)
// UCON<PKTDIS>
extern volatile __bit                   PKTDIS              __at(0x7B04);	// @ (0xF60 * 8 + 4)
#define                                 PKTDIS_bit          _BIT_ACCESS(UCON,4)
// OSCCON2<PLLEN>
extern volatile __bit                   PLLEN               __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 PLLEN_bit           _BIT_ACCESS(OSCCON2,4)
// OSCCON2<PLLRDY>
extern volatile __bit                   PLLRDY              __at(0x7E97);	// @ (0xFD2 * 8 + 7)
#define                                 PLLRDY_bit          _BIT_ACCESS(OSCCON2,7)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// UCFG<PPB0>
extern volatile __bit                   PPB0                __at(0x7B10);	// @ (0xF62 * 8 + 0)
#define                                 PPB0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<PPB1>
extern volatile __bit                   PPB1                __at(0x7B11);	// @ (0xF62 * 8 + 1)
#define                                 PPB1_bit            _BIT_ACCESS(UCFG,1)
// USTAT<PPBI>
extern volatile __bit                   PPBI                __at(0x7B09);	// @ (0xF61 * 8 + 1)
#define                                 PPBI_bit            _BIT_ACCESS(USTAT,1)
// UCON<PPBRST>
extern volatile __bit                   PPBRST              __at(0x7B06);	// @ (0xF60 * 8 + 6)
#define                                 PPBRST_bit          _BIT_ACCESS(UCON,6)
// PWM1CON<PR1SEN>
extern volatile __bit                   PR1SEN              __at(0x7DBF);	// @ (0xFB7 * 8 + 7)
#define                                 PR1SEN_bit          _BIT_ACCESS(PWM1CON,7)
// OSCCON2<PRISD>
extern volatile __bit                   PRISD               __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 PRISD_bit           _BIT_ACCESS(OSCCON2,2)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
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
extern volatile __bit                   PSS1AC0             __at(0x7DB2);	// @ (0xFB6 * 8 + 2)
#define                                 PSS1AC0_bit         _BIT_ACCESS(ECCP1AS,2)
// ECCP1AS<PSS1AC1>
extern volatile __bit                   PSS1AC1             __at(0x7DB3);	// @ (0xFB6 * 8 + 3)
#define                                 PSS1AC1_bit         _BIT_ACCESS(ECCP1AS,3)
// ECCP1AS<PSS1BD0>
extern volatile __bit                   PSS1BD0             __at(0x7DB0);	// @ (0xFB6 * 8 + 0)
#define                                 PSS1BD0_bit         _BIT_ACCESS(ECCP1AS,0)
// ECCP1AS<PSS1BD1>
extern volatile __bit                   PSS1BD1             __at(0x7DB1);	// @ (0xFB6 * 8 + 1)
#define                                 PSS1BD1_bit         _BIT_ACCESS(ECCP1AS,1)
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
// INTCON2<RBPU>
extern volatile __bit                   RBPU                __at(0x7F8F);	// @ (0xFF1 * 8 + 7)
#define                                 RBPU_bit            _BIT_ACCESS(INTCON2,7)
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x7CED);	// @ (0xF9D * 8 + 5)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x7CF5);	// @ (0xF9E * 8 + 5)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,5)
// IPR1<RC1IP>
extern volatile __bit                   RC1IP               __at(0x7CFD);	// @ (0xF9F * 8 + 5)
#define                                 RC1IP_bit           _BIT_ACCESS(IPR1,5)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// RCSTA1<RC8_9>
extern volatile __bit                   RC8_9               __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA1,6)
// RCSTA1<RC9>
extern volatile __bit                   RC9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA1,6)
// RCSTA1<RCD8>
extern volatile __bit                   RCD8                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA1,0)
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0x7E2B);	// @ (0xFC5 * 8 + 3)
#define                                 RCEN1_bit           _BIT_ACCESS(SSP1CON2,3)
// BAUDCON1<RCIDL>
extern volatile __bit                   RCIDL               __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCIDL1>
extern volatile __bit                   RCIDL1              __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
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
extern volatile __bit                   RCMT                __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 RCMT_bit            _BIT_ACCESS(BAUDCON1,6)
// BAUDCON1<RCMT1>
extern volatile __bit                   RCMT1               __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 RCMT1_bit           _BIT_ACCESS(BAUDCON1,6)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0x7D30);	// @ (0xFA6 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// T1CON<RD161>
extern volatile __bit                   RD161               __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 RD161_bit           _BIT_ACCESS(T1CON,7)
// T3CON<RD163>
extern volatile __bit                   RD163               __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 RD163_bit           _BIT_ACCESS(T3CON,7)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// SSP1STAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSP1STAT,2)
// UCON<RESUME>
extern volatile __bit                   RESUME              __at(0x7B02);	// @ (0xF60 * 8 + 2)
#define                                 RESUME_bit          _BIT_ACCESS(UCON,2)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTA<RJPU>
extern volatile __bit                   RJPU                __at(0x7C07);	// @ (0xF80 * 8 + 7)
#define                                 RJPU_bit            _BIT_ACCESS(PORTA,7)
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0x7E29);	// @ (0xFC5 * 8 + 1)
#define                                 RSEN1_bit           _BIT_ACCESS(SSP1CON2,1)
// SSP1STAT<RW>
extern volatile __bit                   RW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<RW1>
extern volatile __bit                   RW1                 __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 RW1_bit             _BIT_ACCESS(SSP1STAT,2)
// PORTC<RX>
extern volatile __bit                   RX                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX_bit              _BIT_ACCESS(PORTC,7)
// RCSTA1<RX9>
extern volatile __bit                   RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA1,6)
// RCSTA1<RX9D>
extern volatile __bit                   RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA1,0)
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
extern volatile __bit                   RXCKP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 RXCKP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP>
extern volatile __bit                   RXDTP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON1,5)
// BAUDCON1<RXDTP1>
extern volatile __bit                   RXDTP1              __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
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
// SSP1CON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x7E5A);	// @ (0xFCB * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSP1CON3,2)
// RCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x7E86);	// @ (0xFD0 * 8 + 6)
#define                                 SBOREN_bit          _BIT_ACCESS(RCON,6)
// SSP1CON3<SCIE>
extern volatile __bit                   SCIE                __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSP1CON3,5)
// BAUDCON1<SCKP>
extern volatile __bit                   SCKP                __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<SCKP1>
extern volatile __bit                   SCKP1               __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SCKP1_bit           _BIT_ACCESS(BAUDCON1,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// SSP1CON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x7E5B);	// @ (0xFCB * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSP1CON3,3)
// UCON<SE0>
extern volatile __bit                   SE0                 __at(0x7B05);	// @ (0xF60 * 8 + 5)
#define                                 SE0_bit             _BIT_ACCESS(UCON,5)
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
// CTMUCONH<SIDL>
extern volatile __bit                   SIDL                __at(0x7C7D);	// @ (0xF8F * 8 + 5)
#define                                 SIDL_bit            _BIT_ACCESS(CTMUCONH,5)
// SLRCON<SLRA>
extern volatile __bit                   SLRA                __at(0x7BD0);	// @ (0xF7A * 8 + 0)
#define                                 SLRA_bit            _BIT_ACCESS(SLRCON,0)
// SLRCON<SLRB>
extern volatile __bit                   SLRB                __at(0x7BD1);	// @ (0xF7A * 8 + 1)
#define                                 SLRB_bit            _BIT_ACCESS(SLRCON,1)
// SLRCON<SLRC>
extern volatile __bit                   SLRC                __at(0x7BD2);	// @ (0xF7A * 8 + 2)
#define                                 SLRC_bit            _BIT_ACCESS(SLRCON,2)
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// SSP1STAT<SMP1>
extern volatile __bit                   SMP1                __at(0x7E3F);	// @ (0xFC7 * 8 + 7)
#define                                 SMP1_bit            _BIT_ACCESS(SSP1STAT,7)
// UIE<SOFIE>
extern volatile __bit                   SOFIE               __at(0x7B26);	// @ (0xF64 * 8 + 6)
#define                                 SOFIE_bit           _BIT_ACCESS(UIE,6)
// UIR<SOFIF>
extern volatile __bit                   SOFIF               __at(0x7B2E);	// @ (0xF65 * 8 + 6)
#define                                 SOFIF_bit           _BIT_ACCESS(UIR,6)
// T1CON<SOSCEN1>
extern volatile __bit                   SOSCEN1             __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN1_bit         _BIT_ACCESS(T1CON,3)
// T3CON<SOSCEN3>
extern volatile __bit                   SOSCEN3             __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 SOSCEN3_bit         _BIT_ACCESS(T3CON,3)
// OSCCON2<SOSCGO>
extern volatile __bit                   SOSCGO              __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 SOSCGO_bit          _BIT_ACCESS(OSCCON2,3)
// OSCCON2<SOSCRUN>
extern volatile __bit                   SOSCRUN             __at(0x7E96);	// @ (0xFD2 * 8 + 6)
#define                                 SOSCRUN_bit         _BIT_ACCESS(OSCCON2,6)
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
extern volatile __bit                   SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA1,7)
// PMD0<SPI1MD>
extern volatile __bit                   SPI1MD              __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 SPI1MD_bit          _BIT_ACCESS(PMD0,1)
// PMD0<SPI2MD>
extern volatile __bit                   SPI2MD              __at(0x7BF2);	// @ (0xF7E * 8 + 2)
#define                                 SPI2MD_bit          _BIT_ACCESS(PMD0,2)
// OSCTUNE<SPLLMULT>
extern volatile __bit                   SPLLMULT            __at(0x7CDF);	// @ (0xF9B * 8 + 7)
#define                                 SPLLMULT_bit        _BIT_ACCESS(OSCTUNE,7)
// SRCON0<SRCLK0>
extern volatile __bit                   SRCLK0              __at(0x7AC4);	// @ (0xF58 * 8 + 4)
#define                                 SRCLK0_bit          _BIT_ACCESS(SRCON0,4)
// SRCON0<SRCLK1>
extern volatile __bit                   SRCLK1              __at(0x7AC5);	// @ (0xF58 * 8 + 5)
#define                                 SRCLK1_bit          _BIT_ACCESS(SRCON0,5)
// SRCON0<SRCLK2>
extern volatile __bit                   SRCLK2              __at(0x7AC6);	// @ (0xF58 * 8 + 6)
#define                                 SRCLK2_bit          _BIT_ACCESS(SRCON0,6)
// RCSTA1<SREN>
extern volatile __bit                   SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA1,5)
// RCSTA1<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA1,5)
// SRCON0<SRLEN>
extern volatile __bit                   SRLEN               __at(0x7AC7);	// @ (0xF58 * 8 + 7)
#define                                 SRLEN_bit           _BIT_ACCESS(SRCON0,7)
// SRCON0<SRNQEN>
extern volatile __bit                   SRNQEN              __at(0x7AC2);	// @ (0xF58 * 8 + 2)
#define                                 SRNQEN_bit          _BIT_ACCESS(SRCON0,2)
// SRCON0<SRPR>
extern volatile __bit                   SRPR                __at(0x7AC0);	// @ (0xF58 * 8 + 0)
#define                                 SRPR_bit            _BIT_ACCESS(SRCON0,0)
// SRCON0<SRPS>
extern volatile __bit                   SRPS                __at(0x7AC1);	// @ (0xF58 * 8 + 1)
#define                                 SRPS_bit            _BIT_ACCESS(SRCON0,1)
// SRCON0<SRQEN>
extern volatile __bit                   SRQEN               __at(0x7AC3);	// @ (0xF58 * 8 + 3)
#define                                 SRQEN_bit           _BIT_ACCESS(SRCON0,3)
// SRCON1<SRRC1E>
extern volatile __bit                   SRRC1E              __at(0x7AB8);	// @ (0xF57 * 8 + 0)
#define                                 SRRC1E_bit          _BIT_ACCESS(SRCON1,0)
// SRCON1<SRRC2E>
extern volatile __bit                   SRRC2E              __at(0x7AB9);	// @ (0xF57 * 8 + 1)
#define                                 SRRC2E_bit          _BIT_ACCESS(SRCON1,1)
// SRCON1<SRRCKE>
extern volatile __bit                   SRRCKE              __at(0x7ABA);	// @ (0xF57 * 8 + 2)
#define                                 SRRCKE_bit          _BIT_ACCESS(SRCON1,2)
// SRCON1<SRRPE>
extern volatile __bit                   SRRPE               __at(0x7ABB);	// @ (0xF57 * 8 + 3)
#define                                 SRRPE_bit           _BIT_ACCESS(SRCON1,3)
// SRCON1<SRSC1E>
extern volatile __bit                   SRSC1E              __at(0x7ABC);	// @ (0xF57 * 8 + 4)
#define                                 SRSC1E_bit          _BIT_ACCESS(SRCON1,4)
// SRCON1<SRSC2E>
extern volatile __bit                   SRSC2E              __at(0x7ABD);	// @ (0xF57 * 8 + 5)
#define                                 SRSC2E_bit          _BIT_ACCESS(SRCON1,5)
// SRCON1<SRSCKE>
extern volatile __bit                   SRSCKE              __at(0x7ABE);	// @ (0xF57 * 8 + 6)
#define                                 SRSCKE_bit          _BIT_ACCESS(SRCON1,6)
// SRCON1<SRSPE>
extern volatile __bit                   SRSPE               __at(0x7ABF);	// @ (0xF57 * 8 + 7)
#define                                 SRSPE_bit           _BIT_ACCESS(SRCON1,7)
// SSP1ADD<SSP1ADD0>
extern volatile __bit                   SSP1ADD0            __at(0x7E40);	// @ (0xFC8 * 8 + 0)
#define                                 SSP1ADD0_bit        _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<SSP1ADD1>
extern volatile __bit                   SSP1ADD1            __at(0x7E41);	// @ (0xFC8 * 8 + 1)
#define                                 SSP1ADD1_bit        _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<SSP1ADD2>
extern volatile __bit                   SSP1ADD2            __at(0x7E42);	// @ (0xFC8 * 8 + 2)
#define                                 SSP1ADD2_bit        _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<SSP1ADD3>
extern volatile __bit                   SSP1ADD3            __at(0x7E43);	// @ (0xFC8 * 8 + 3)
#define                                 SSP1ADD3_bit        _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<SSP1ADD4>
extern volatile __bit                   SSP1ADD4            __at(0x7E44);	// @ (0xFC8 * 8 + 4)
#define                                 SSP1ADD4_bit        _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<SSP1ADD5>
extern volatile __bit                   SSP1ADD5            __at(0x7E45);	// @ (0xFC8 * 8 + 5)
#define                                 SSP1ADD5_bit        _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<SSP1ADD6>
extern volatile __bit                   SSP1ADD6            __at(0x7E46);	// @ (0xFC8 * 8 + 6)
#define                                 SSP1ADD6_bit        _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<SSP1ADD7>
extern volatile __bit                   SSP1ADD7            __at(0x7E47);	// @ (0xFC8 * 8 + 7)
#define                                 SSP1ADD7_bit        _BIT_ACCESS(SSP1ADD,7)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x7CEB);	// @ (0xF9D * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x7CF3);	// @ (0xF9E * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// IPR1<SSP1IP>
extern volatile __bit                   SSP1IP              __at(0x7CFB);	// @ (0xF9F * 8 + 3)
#define                                 SSP1IP_bit          _BIT_ACCESS(IPR1,3)
// PMD1<SSP1MD>
extern volatile __bit                   SSP1MD              __at(0x7BFE);	// @ (0xF7F * 8 + 6)
#define                                 SSP1MD_bit          _BIT_ACCESS(PMD1,6)
// SSP1MSK<SSP1MSK0>
extern volatile __bit                   SSP1MSK0            __at(0x7E50);	// @ (0xFCA * 8 + 0)
#define                                 SSP1MSK0_bit        _BIT_ACCESS(SSP1MSK,0)
// SSP1MSK<SSP1MSK1>
extern volatile __bit                   SSP1MSK1            __at(0x7E51);	// @ (0xFCA * 8 + 1)
#define                                 SSP1MSK1_bit        _BIT_ACCESS(SSP1MSK,1)
// SSP1MSK<SSP1MSK2>
extern volatile __bit                   SSP1MSK2            __at(0x7E52);	// @ (0xFCA * 8 + 2)
#define                                 SSP1MSK2_bit        _BIT_ACCESS(SSP1MSK,2)
// SSP1MSK<SSP1MSK3>
extern volatile __bit                   SSP1MSK3            __at(0x7E53);	// @ (0xFCA * 8 + 3)
#define                                 SSP1MSK3_bit        _BIT_ACCESS(SSP1MSK,3)
// SSP1MSK<SSP1MSK4>
extern volatile __bit                   SSP1MSK4            __at(0x7E54);	// @ (0xFCA * 8 + 4)
#define                                 SSP1MSK4_bit        _BIT_ACCESS(SSP1MSK,4)
// SSP1MSK<SSP1MSK5>
extern volatile __bit                   SSP1MSK5            __at(0x7E55);	// @ (0xFCA * 8 + 5)
#define                                 SSP1MSK5_bit        _BIT_ACCESS(SSP1MSK,5)
// SSP1MSK<SSP1MSK6>
extern volatile __bit                   SSP1MSK6            __at(0x7E56);	// @ (0xFCA * 8 + 6)
#define                                 SSP1MSK6_bit        _BIT_ACCESS(SSP1MSK,6)
// SSP1MSK<SSP1MSK7>
extern volatile __bit                   SSP1MSK7            __at(0x7E57);	// @ (0xFCA * 8 + 7)
#define                                 SSP1MSK7_bit        _BIT_ACCESS(SSP1MSK,7)
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
// SSP1CON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0x7E31);	// @ (0xFC6 * 8 + 1)
#define                                 SSPM11_bit          _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0x7E32);	// @ (0xFC6 * 8 + 2)
#define                                 SSPM21_bit          _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0x7E33);	// @ (0xFC6 * 8 + 3)
#define                                 SSPM31_bit          _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// SSP1CON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0x7E36);	// @ (0xFC6 * 8 + 6)
#define                                 SSPOV1_bit          _BIT_ACCESS(SSP1CON1,6)
// UIE<STALLIE>
extern volatile __bit                   STALLIE             __at(0x7B25);	// @ (0xF64 * 8 + 5)
#define                                 STALLIE_bit         _BIT_ACCESS(UIE,5)
// UIR<STALLIF>
extern volatile __bit                   STALLIF             __at(0x7B2D);	// @ (0xF65 * 8 + 5)
#define                                 STALLIF_bit         _BIT_ACCESS(UIR,5)
// SSP1STAT<START>
extern volatile __bit                   START               __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<START1>
extern volatile __bit                   START1              __at(0x7E3B);	// @ (0xFC7 * 8 + 3)
#define                                 START1_bit          _BIT_ACCESS(SSP1STAT,3)
// ACTCON<STEN>
extern volatile __bit                   STEN                __at(0x7DAF);	// @ (0xFB5 * 8 + 7)
#define                                 STEN_bit            _BIT_ACCESS(ACTCON,7)
// PIE1<STIE>
extern volatile __bit                   STIE                __at(0x7CEF);	// @ (0xF9D * 8 + 7)
#define                                 STIE_bit            _BIT_ACCESS(PIE1,7)
// PIR1<STIF>
extern volatile __bit                   STIF                __at(0x7CF7);	// @ (0xF9E * 8 + 7)
#define                                 STIF_bit            _BIT_ACCESS(PIR1,7)
// IPR1<STIP>
extern volatile __bit                   STIP                __at(0x7CFF);	// @ (0xF9F * 8 + 7)
#define                                 STIP_bit            _BIT_ACCESS(IPR1,7)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// ACTCON<STLOCK>
extern volatile __bit                   STLOCK              __at(0x7DAB);	// @ (0xFB5 * 8 + 3)
#define                                 STLOCK_bit          _BIT_ACCESS(ACTCON,3)
// PMD0<STMD>
extern volatile __bit                   STMD                __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 STMD_bit            _BIT_ACCESS(PMD0,4)
// SSP1STAT<STOP>
extern volatile __bit                   STOP                __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSP1STAT,4)
// SSP1STAT<STOP1>
extern volatile __bit                   STOP1               __at(0x7E3C);	// @ (0xFC7 * 8 + 4)
#define                                 STOP1_bit           _BIT_ACCESS(SSP1STAT,4)
// ACTCON<STOR>
extern volatile __bit                   STOR                __at(0x7DA9);	// @ (0xFB5 * 8 + 1)
#define                                 STOR_bit            _BIT_ACCESS(ACTCON,1)
// PSTR1CON<STR1A>
extern volatile __bit                   STR1A               __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 STR1A_bit           _BIT_ACCESS(PSTR1CON,0)
// PSTR1CON<STR1B>
extern volatile __bit                   STR1B               __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 STR1B_bit           _BIT_ACCESS(PSTR1CON,1)
// PSTR1CON<STR1C>
extern volatile __bit                   STR1C               __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 STR1C_bit           _BIT_ACCESS(PSTR1CON,2)
// PSTR1CON<STR1D>
extern volatile __bit                   STR1D               __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 STR1D_bit           _BIT_ACCESS(PSTR1CON,3)
// PSTR1CON<STR1SYNC>
extern volatile __bit                   STR1SYNC            __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 STR1SYNC_bit        _BIT_ACCESS(PSTR1CON,4)
// PSTR1CON<STRA>
extern volatile __bit                   STRA                __at(0x7DC8);	// @ (0xFB9 * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(PSTR1CON,0)
// PSTR1CON<STRB>
extern volatile __bit                   STRB                __at(0x7DC9);	// @ (0xFB9 * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(PSTR1CON,1)
// PSTR1CON<STRC>
extern volatile __bit                   STRC                __at(0x7DCA);	// @ (0xFB9 * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(PSTR1CON,2)
// PSTR1CON<STRD>
extern volatile __bit                   STRD                __at(0x7DCB);	// @ (0xFB9 * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(PSTR1CON,3)
// PSTR1CON<STRSYNC>
extern volatile __bit                   STRSYNC             __at(0x7DCC);	// @ (0xFB9 * 8 + 4)
#define                                 STRSYNC_bit         _BIT_ACCESS(PSTR1CON,4)
// ACTCON<STSRC>
extern volatile __bit                   STSRC               __at(0x7DAC);	// @ (0xFB5 * 8 + 4)
#define                                 STSRC_bit           _BIT_ACCESS(ACTCON,4)
// ACTCON<STUD>
extern volatile __bit                   STUD                __at(0x7DAE);	// @ (0xFB5 * 8 + 6)
#define                                 STUD_bit            _BIT_ACCESS(ACTCON,6)
// UCON<SUSPND>
extern volatile __bit                   SUSPND              __at(0x7B01);	// @ (0xF60 * 8 + 1)
#define                                 SUSPND_bit          _BIT_ACCESS(UCON,1)
// WDTCON<SWDTE>
extern volatile __bit                   SWDTE               __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTE_bit           _BIT_ACCESS(WDTCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x7E88);	// @ (0xFD1 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TXSTA1<SYNC>
extern volatile __bit                   SYNC                __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA1,4)
// TXSTA1<SYNC1>
extern volatile __bit                   SYNC1               __at(0x7D64);	// @ (0xFAC * 8 + 4)
#define                                 SYNC1_bit           _BIT_ACCESS(TXSTA1,4)
// T0CON<T08BIT>
extern volatile __bit                   T08BIT              __at(0x7EAE);	// @ (0xFD5 * 8 + 6)
#define                                 T08BIT_bit          _BIT_ACCESS(T0CON,6)
// PORTA<T0CKI>
extern volatile __bit                   T0CKI               __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 T0CKI_bit           _BIT_ACCESS(PORTA,4)
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
// T1GCON<T1DONE>
extern volatile __bit                   T1DONE              __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1DONE_bit          _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_NOT_DONE>
extern volatile __bit                   T1GGO_NOT_DONE      __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1GGO_NOT_DONE_bit  _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_NOT_T1DONE>
extern volatile __bit                   T1GGO_NOT_T1DONE    __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1GGO_NOT_T1DONE_bit _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_nDONE>
extern volatile __bit                   T1GGO_nDONE         __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1GGO_nDONE_bit     _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_nT1DONE>
extern volatile __bit                   T1GGO_nT1DONE       __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 T1GGO_nT1DONE_bit   _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x7E66);	// @ (0xFCC * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x7E64);	// @ (0xFCC * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x7E60);	// @ (0xFCC * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x7E61);	// @ (0xFCC * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x7E65);	// @ (0xFCC * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x7E62);	// @ (0xFCC * 8 + 2)
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
extern volatile __bit                   T1RD16              __at(0x7E69);	// @ (0xFCD * 8 + 1)
#define                                 T1RD16_bit          _BIT_ACCESS(T1CON,1)
// T1CON<T1SOSCEN>
extern volatile __bit                   T1SOSCEN            __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 T1SOSCEN_bit        _BIT_ACCESS(T1CON,3)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x7DD0);	// @ (0xFBA * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x7DD1);	// @ (0xFBA * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x7DD3);	// @ (0xFBA * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x7DD4);	// @ (0xFBA * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x7DD5);	// @ (0xFBA * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x7DD6);	// @ (0xFBA * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// T3CON<T3CKPS0>
extern volatile __bit                   T3CKPS0             __at(0x7D8C);	// @ (0xFB1 * 8 + 4)
#define                                 T3CKPS0_bit         _BIT_ACCESS(T3CON,4)
// T3CON<T3CKPS1>
extern volatile __bit                   T3CKPS1             __at(0x7D8D);	// @ (0xFB1 * 8 + 5)
#define                                 T3CKPS1_bit         _BIT_ACCESS(T3CON,5)
// T3GCON<T3DONE>
extern volatile __bit                   T3DONE              __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3DONE_bit          _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO>
extern volatile __bit                   T3GGO               __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3GGO_bit           _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO_NOT_DONE>
extern volatile __bit                   T3GGO_NOT_DONE      __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3GGO_NOT_DONE_bit  _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO_NOT_T3DONE>
extern volatile __bit                   T3GGO_NOT_T3DONE    __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3GGO_NOT_T3DONE_bit _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO_nDONE>
extern volatile __bit                   T3GGO_nDONE         __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3GGO_nDONE_bit     _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GGO_nT3DONE>
extern volatile __bit                   T3GGO_nT3DONE       __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 T3GGO_nT3DONE_bit   _BIT_ACCESS(T3GCON,3)
// T3GCON<T3GPOL>
extern volatile __bit                   T3GPOL              __at(0x7DA6);	// @ (0xFB4 * 8 + 6)
#define                                 T3GPOL_bit          _BIT_ACCESS(T3GCON,6)
// T3GCON<T3GSPM>
extern volatile __bit                   T3GSPM              __at(0x7DA4);	// @ (0xFB4 * 8 + 4)
#define                                 T3GSPM_bit          _BIT_ACCESS(T3GCON,4)
// T3GCON<T3GSS0>
extern volatile __bit                   T3GSS0              __at(0x7DA0);	// @ (0xFB4 * 8 + 0)
#define                                 T3GSS0_bit          _BIT_ACCESS(T3GCON,0)
// T3GCON<T3GSS1>
extern volatile __bit                   T3GSS1              __at(0x7DA1);	// @ (0xFB4 * 8 + 1)
#define                                 T3GSS1_bit          _BIT_ACCESS(T3GCON,1)
// T3GCON<T3GTM>
extern volatile __bit                   T3GTM               __at(0x7DA5);	// @ (0xFB4 * 8 + 5)
#define                                 T3GTM_bit           _BIT_ACCESS(T3GCON,5)
// T3GCON<T3GVAL>
extern volatile __bit                   T3GVAL              __at(0x7DA2);	// @ (0xFB4 * 8 + 2)
#define                                 T3GVAL_bit          _BIT_ACCESS(T3GCON,2)
// T3CON<T3OSCEN>
extern volatile __bit                   T3OSCEN             __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 T3OSCEN_bit         _BIT_ACCESS(T3CON,3)
// T3CON<T3RD16>
extern volatile __bit                   T3RD16              __at(0x7D89);	// @ (0xFB1 * 8 + 1)
#define                                 T3RD16_bit          _BIT_ACCESS(T3CON,1)
// T3CON<T3SOSCEN>
extern volatile __bit                   T3SOSCEN            __at(0x7D8B);	// @ (0xFB1 * 8 + 3)
#define                                 T3SOSCEN_bit        _BIT_ACCESS(T3CON,3)
// T3CON<T3SYNC>
extern volatile __bit                   T3SYNC              __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 T3SYNC_bit          _BIT_ACCESS(T3CON,2)
// CTMUCONH<TGEN>
extern volatile __bit                   TGEN                __at(0x7C7C);	// @ (0xF8F * 8 + 4)
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
extern volatile __bit                   TMR1GE              __at(0x7E67);	// @ (0xFCC * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE3<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x7D18);	// @ (0xFA3 * 8 + 0)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE3,0)
// PIR3<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x7D20);	// @ (0xFA4 * 8 + 0)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR3,0)
// IPR3<TMR1GIP>
extern volatile __bit                   TMR1GIP             __at(0x7D28);	// @ (0xFA5 * 8 + 0)
#define                                 TMR1GIP_bit         _BIT_ACCESS(IPR3,0)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x7CE8);	// @ (0xF9D * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x7CF0);	// @ (0xF9E * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// IPR1<TMR1IP>
extern volatile __bit                   TMR1IP              __at(0x7CF8);	// @ (0xF9F * 8 + 0)
#define                                 TMR1IP_bit          _BIT_ACCESS(IPR1,0)
// PMD0<TMR1MD>
extern volatile __bit                   TMR1MD              __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 TMR1MD_bit          _BIT_ACCESS(PMD0,0)
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
// PMD0<TMR2MD>
extern volatile __bit                   TMR2MD              __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 TMR2MD_bit          _BIT_ACCESS(PMD0,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x7DD2);	// @ (0xFBA * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T3CON<TMR3CS0>
extern volatile __bit                   TMR3CS0             __at(0x7D8E);	// @ (0xFB1 * 8 + 6)
#define                                 TMR3CS0_bit         _BIT_ACCESS(T3CON,6)
// T3CON<TMR3CS1>
extern volatile __bit                   TMR3CS1             __at(0x7D8F);	// @ (0xFB1 * 8 + 7)
#define                                 TMR3CS1_bit         _BIT_ACCESS(T3CON,7)
// T3GCON<TMR3GE>
extern volatile __bit                   TMR3GE              __at(0x7DA7);	// @ (0xFB4 * 8 + 7)
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
// PMD0<TMR3MD>
extern volatile __bit                   TMR3MD              __at(0x7BF2);	// @ (0xF7E * 8 + 2)
#define                                 TMR3MD_bit          _BIT_ACCESS(PMD0,2)
// T3CON<TMR3ON>
extern volatile __bit                   TMR3ON              __at(0x7D88);	// @ (0xFB1 * 8 + 0)
#define                                 TMR3ON_bit          _BIT_ACCESS(T3CON,0)
// RCON<TO>
extern volatile __bit                   TO                  __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 TO_bit              _BIT_ACCESS(RCON,3)
// CTMUCONH<TRIGEN>
extern volatile __bit                   TRIGEN              __at(0x7C78);	// @ (0xF8F * 8 + 0)
#define                                 TRIGEN_bit          _BIT_ACCESS(CTMUCONH,0)
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
// TXSTA1<TRMT>
extern volatile __bit                   TRMT                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA1,1)
// TXSTA1<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA1,1)
// UIE<TRNIE>
extern volatile __bit                   TRNIE               __at(0x7B23);	// @ (0xF64 * 8 + 3)
#define                                 TRNIE_bit           _BIT_ACCESS(UIE,3)
// UIR<TRNIF>
extern volatile __bit                   TRNIF               __at(0x7B2B);	// @ (0xF65 * 8 + 3)
#define                                 TRNIF_bit           _BIT_ACCESS(UIR,3)
// VREFCON0<TSEN>
extern volatile __bit                   TSEN                __at(0x7BEB);	// @ (0xF7D * 8 + 3)
#define                                 TSEN_bit            _BIT_ACCESS(VREFCON0,3)
// VREFCON0<TSRNG>
extern volatile __bit                   TSRNG               __at(0x7BEA);	// @ (0xF7D * 8 + 2)
#define                                 TSRNG_bit           _BIT_ACCESS(VREFCON0,2)
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
// OSCTUNE<TUN6>
extern volatile __bit                   TUN6                __at(0x7CDE);	// @ (0xF9B * 8 + 6)
#define                                 TUN6_bit            _BIT_ACCESS(OSCTUNE,6)
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
// TXSTA1<TX8_9>
extern volatile __bit                   TX8_9               __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX8_9_bit           _BIT_ACCESS(TXSTA1,6)
// TXSTA1<TX9>
extern volatile __bit                   TX9                 __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA1,6)
// TXSTA1<TX91>
extern volatile __bit                   TX91                __at(0x7D66);	// @ (0xFAC * 8 + 6)
#define                                 TX91_bit            _BIT_ACCESS(TXSTA1,6)
// TXSTA1<TX9D>
extern volatile __bit                   TX9D                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA1,0)
// TXSTA1<TX9D1>
extern volatile __bit                   TX9D1               __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TX9D1_bit           _BIT_ACCESS(TXSTA1,0)
// PIE3<TXB0IE>
extern volatile __bit                   TXB0IE              __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 TXB0IE_bit          _BIT_ACCESS(PIE3,2)
// PIE3<TXB1IE>
extern volatile __bit                   TXB1IE              __at(0x7D1B);	// @ (0xFA3 * 8 + 3)
#define                                 TXB1IE_bit          _BIT_ACCESS(PIE3,3)
// BAUDCON1<TXCKP>
extern volatile __bit                   TXCKP               __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON1,4)
// BAUDCON1<TXCKP1>
extern volatile __bit                   TXCKP1              __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 TXCKP1_bit          _BIT_ACCESS(BAUDCON1,4)
// TXSTA1<TXD8>
extern volatile __bit                   TXD8                __at(0x7D60);	// @ (0xFAC * 8 + 0)
#define                                 TXD8_bit            _BIT_ACCESS(TXSTA1,0)
// TXSTA1<TXEN>
extern volatile __bit                   TXEN                __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA1,5)
// TXSTA1<TXEN1>
extern volatile __bit                   TXEN1               __at(0x7D65);	// @ (0xFAC * 8 + 5)
#define                                 TXEN1_bit           _BIT_ACCESS(TXSTA1,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x7CEC);	// @ (0xF9D * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x7CF4);	// @ (0xF9E * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// IPR1<TXIP>
extern volatile __bit                   TXIP                __at(0x7CFC);	// @ (0xF9F * 8 + 4)
#define                                 TXIP_bit            _BIT_ACCESS(IPR1,4)
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// SSP1STAT<UA1>
extern volatile __bit                   UA1                 __at(0x7E39);	// @ (0xFC7 * 8 + 1)
#define                                 UA1_bit             _BIT_ACCESS(SSP1STAT,1)
// PMD0<UART1MD>
extern volatile __bit                   UART1MD             __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 UART1MD_bit         _BIT_ACCESS(PMD0,6)
// PMD0<UARTMD>
extern volatile __bit                   UARTMD              __at(0x7BF6);	// @ (0xF7E * 8 + 6)
#define                                 UARTMD_bit          _BIT_ACCESS(PMD0,6)
// UIE<UERRIE>
extern volatile __bit                   UERRIE              __at(0x7B21);	// @ (0xF64 * 8 + 1)
#define                                 UERRIE_bit          _BIT_ACCESS(UIE,1)
// UIR<UERRIF>
extern volatile __bit                   UERRIF              __at(0x7B29);	// @ (0xF65 * 8 + 1)
#define                                 UERRIF_bit          _BIT_ACCESS(UIR,1)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// UCFG<UOEMON>
extern volatile __bit                   UOEMON              __at(0x7B16);	// @ (0xF62 * 8 + 6)
#define                                 UOEMON_bit          _BIT_ACCESS(UCFG,6)
// UCFG<UPP0>
extern volatile __bit                   UPP0                __at(0x7B10);	// @ (0xF62 * 8 + 0)
#define                                 UPP0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<UPP1>
extern volatile __bit                   UPP1                __at(0x7B11);	// @ (0xF62 * 8 + 1)
#define                                 UPP1_bit            _BIT_ACCESS(UCFG,1)
// UCFG<UPUEN>
extern volatile __bit                   UPUEN               __at(0x7B14);	// @ (0xF62 * 8 + 4)
#define                                 UPUEN_bit           _BIT_ACCESS(UCFG,4)
// UIE<URSTIE>
extern volatile __bit                   URSTIE              __at(0x7B20);	// @ (0xF64 * 8 + 0)
#define                                 URSTIE_bit          _BIT_ACCESS(UIE,0)
// UIR<URSTIF>
extern volatile __bit                   URSTIF              __at(0x7B28);	// @ (0xF65 * 8 + 0)
#define                                 URSTIF_bit          _BIT_ACCESS(UIR,0)
// UCON<USBEN>
extern volatile __bit                   USBEN               __at(0x7B03);	// @ (0xF60 * 8 + 3)
#define                                 USBEN_bit           _BIT_ACCESS(UCON,3)
// PIE3<USBIE>
extern volatile __bit                   USBIE               __at(0x7D1A);	// @ (0xFA3 * 8 + 2)
#define                                 USBIE_bit           _BIT_ACCESS(PIE3,2)
// PIR3<USBIF>
extern volatile __bit                   USBIF               __at(0x7D22);	// @ (0xFA4 * 8 + 2)
#define                                 USBIF_bit           _BIT_ACCESS(PIR3,2)
// IPR3<USBIP>
extern volatile __bit                   USBIP               __at(0x7D2A);	// @ (0xFA5 * 8 + 2)
#define                                 USBIP_bit           _BIT_ACCESS(IPR3,2)
// PMD0<USBMD>
extern volatile __bit                   USBMD               __at(0x7BF5);	// @ (0xF7E * 8 + 5)
#define                                 USBMD_bit           _BIT_ACCESS(PMD0,5)
// UCFG<UTEYE>
extern volatile __bit                   UTEYE               __at(0x7B17);	// @ (0xF62 * 8 + 7)
#define                                 UTEYE_bit           _BIT_ACCESS(UCFG,7)
// UCFG<UTRDIS>
extern volatile __bit                   UTRDIS              __at(0x7B13);	// @ (0xF62 * 8 + 3)
#define                                 UTRDIS_bit          _BIT_ACCESS(UCFG,3)
// HLVDCON<VDIRMAG>
extern volatile __bit                   VDIRMAG             __at(0x7CE7);	// @ (0xF9C * 8 + 7)
#define                                 VDIRMAG_bit         _BIT_ACCESS(HLVDCON,7)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
// BAUDCON1<W4E>
extern volatile __bit                   W4E                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON1,1)
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// SSP1CON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0x7E37);	// @ (0xFC6 * 8 + 7)
#define                                 WCOL1_bit           _BIT_ACCESS(SSP1CON1,7)
// WPUB<WPUB0>
extern volatile __bit                   WPUB0               __at(0x7C28);	// @ (0xF85 * 8 + 0)
#define                                 WPUB0_bit           _BIT_ACCESS(WPUB,0)
// WPUB<WPUB1>
extern volatile __bit                   WPUB1               __at(0x7C29);	// @ (0xF85 * 8 + 1)
#define                                 WPUB1_bit           _BIT_ACCESS(WPUB,1)
// WPUB<WPUB2>
extern volatile __bit                   WPUB2               __at(0x7C2A);	// @ (0xF85 * 8 + 2)
#define                                 WPUB2_bit           _BIT_ACCESS(WPUB,2)
// WPUB<WPUB3>
extern volatile __bit                   WPUB3               __at(0x7C2B);	// @ (0xF85 * 8 + 3)
#define                                 WPUB3_bit           _BIT_ACCESS(WPUB,3)
// WPUB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x7C2C);	// @ (0xF85 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUB,4)
// WPUB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x7C2D);	// @ (0xF85 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUB,5)
// WPUB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x7C2E);	// @ (0xF85 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUB,6)
// WPUB<WPUB7>
extern volatile __bit                   WPUB7               __at(0x7C2F);	// @ (0xF85 * 8 + 7)
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
// BAUDCON1<WUE>
extern volatile __bit                   WUE                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON1,1)
// BAUDCON1<WUE1>
extern volatile __bit                   WUE1                __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
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
// RCON<nRI>
extern volatile __bit                   nRI                 __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 nRI_bit             _BIT_ACCESS(RCON,4)
// T1GCON<nT1DONE>
extern volatile __bit                   nT1DONE             __at(0x7E63);	// @ (0xFCC * 8 + 3)
#define                                 nT1DONE_bit         _BIT_ACCESS(T1GCON,3)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// T3GCON<nT3DONE>
extern volatile __bit                   nT3DONE             __at(0x7DA3);	// @ (0xFB4 * 8 + 3)
#define                                 nT3DONE_bit         _BIT_ACCESS(T3GCON,3)
// T3CON<nT3SYNC>
extern volatile __bit                   nT3SYNC             __at(0x7D8A);	// @ (0xFB1 * 8 + 2)
#define                                 nT3SYNC_bit         _BIT_ACCESS(T3CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// SSP1STAT<nW>
extern volatile __bit                   nW                  __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0x7E3A);	// @ (0xFC7 * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSP1STAT,2)

#endif // _PIC18LF24K50_H_
