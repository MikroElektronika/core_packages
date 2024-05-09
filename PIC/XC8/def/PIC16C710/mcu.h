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

#ifndef _PIC16C710_H_
#define _PIC16C710_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16C710
 */
#ifndef _XC_H_
#warning Header file pic16c710.h included directly. Use #include <xc.h> instead.
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

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x008);
#ifndef _LIB_BUILD
asm("ADCON0 equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned ADIF                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :2;
        unsigned                        :1;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :2;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned                        :1;
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
extern volatile ADCON0bits_t ADCON0bits __at(0x008);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_ADIF_POSN                                   0x1
#define _ADCON0_ADIF_POSITION                               0x1
#define _ADCON0_ADIF_SIZE                                   0x1
#define _ADCON0_ADIF_LENGTH                                 0x1
#define _ADCON0_ADIF_MASK                                   0x2
#define _ADCON0_GO_nDONE_POSN                               0x2
#define _ADCON0_GO_nDONE_POSITION                           0x2
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x4
#define _ADCON0_CHS_POSN                                    0x3
#define _ADCON0_CHS_POSITION                                0x3
#define _ADCON0_CHS_SIZE                                    0x2
#define _ADCON0_CHS_LENGTH                                  0x2
#define _ADCON0_CHS_MASK                                    0x18
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

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x009);
#ifndef _LIB_BUILD
asm("ADRES equ 09h");
#endif

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
        unsigned ADIE                   :1;
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
#define _INTCON_ADIE_POSN                                   0x6
#define _INTCON_ADIE_POSITION                               0x6
#define _INTCON_ADIE_SIZE                                   0x1
#define _INTCON_ADIE_LENGTH                                 0x1
#define _INTCON_ADIE_MASK                                   0x40
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
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
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

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x087);
#ifndef _LIB_BUILD
asm("PCON equ 087h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
    };
    struct {
        unsigned nBO                    :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x087);
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
#define _PCON_nBO_POSN                                      0x0
#define _PCON_nBO_POSITION                                  0x0
#define _PCON_nBO_SIZE                                      0x1
#define _PCON_nBO_LENGTH                                    0x1
#define _PCON_nBO_MASK                                      0x1

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x088);
#ifndef _LIB_BUILD
asm("ADCON1 equ 088h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x088);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x2
#define _ADCON1_PCFG_LENGTH                                 0x2
#define _ADCON1_PCFG_MASK                                   0x3
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
extern volatile __bit                   ADCS0               __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
// INTCON<ADIE>
extern volatile __bit                   ADIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(INTCON,6)
// ADCON0<ADIF>
extern volatile __bit                   ADIF                __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 ADIF_bit            _BIT_ACCESS(ADCON0,1)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,4)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,2)
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
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// OPTION_REG<PS0>
extern volatile __bit                   PS0                 __at(0x408);	// @ (0x81 * 8 + 0)
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   PS1                 __at(0x409);	// @ (0x81 * 8 + 1)
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)
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
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
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
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
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
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBO>
extern volatile __bit                   nBO                 __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 nBO_bit             _BIT_ACCESS(PCON,0)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,2)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRBPU>
extern volatile __bit                   nRBPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(OPTION_REG,7)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16C710_H_
