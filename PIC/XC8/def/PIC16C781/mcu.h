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

#ifndef _PIC16C781_H_
#define _PIC16C781_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16C781
 */
#ifndef _XC_H_
#warning Header file pic16c781.h included directly. Use #include <xc.h> instead.
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
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
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
        unsigned                        :3;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned ADIF                   :1;
        unsigned LVDIF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_C1IF_POSN                                     0x4
#define _PIR1_C1IF_POSITION                                 0x4
#define _PIR1_C1IF_SIZE                                     0x1
#define _PIR1_C1IF_LENGTH                                   0x1
#define _PIR1_C1IF_MASK                                     0x10
#define _PIR1_C2IF_POSN                                     0x5
#define _PIR1_C2IF_POSITION                                 0x5
#define _PIR1_C2IF_SIZE                                     0x1
#define _PIR1_C2IF_LENGTH                                   0x1
#define _PIR1_C2IF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_LVDIF_POSN                                    0x7
#define _PIR1_LVDIF_POSITION                                0x7
#define _PIR1_LVDIF_SIZE                                    0x1
#define _PIR1_LVDIF_LENGTH                                  0x1
#define _PIR1_LVDIF_MASK                                    0x80

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
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
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

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRES equ 01Eh");
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
        unsigned CHS3                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :3;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :2;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
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
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_CHS3_POSN                                   0x1
#define _ADCON0_CHS3_POSITION                               0x1
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x2
#define _ADCON0_GO_nDONE_POSN                               0x2
#define _ADCON0_GO_nDONE_POSITION                           0x2
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x4
#define _ADCON0_CHS_POSN                                    0x3
#define _ADCON0_CHS_POSITION                                0x3
#define _ADCON0_CHS_SIZE                                    0x3
#define _ADCON0_CHS_LENGTH                                  0x3
#define _ADCON0_CHS_MASK                                    0x38
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
#define _ADCON0_CHS2_POSN                                   0x5
#define _ADCON0_CHS2_POSITION                               0x5
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x20
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
        unsigned                        :3;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned ADIE                   :1;
        unsigned LVDIE                  :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_C1IE_POSN                                     0x4
#define _PIE1_C1IE_POSITION                                 0x4
#define _PIE1_C1IE_SIZE                                     0x1
#define _PIE1_C1IE_LENGTH                                   0x1
#define _PIE1_C1IE_MASK                                     0x10
#define _PIE1_C2IE_POSN                                     0x5
#define _PIE1_C2IE_POSITION                                 0x5
#define _PIE1_C2IE_SIZE                                     0x1
#define _PIE1_C2IE_LENGTH                                   0x1
#define _PIE1_C2IE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_LVDIE_POSN                                    0x7
#define _PIE1_LVDIE_POSITION                                0x7
#define _PIE1_LVDIE_SIZE                                    0x1
#define _PIE1_LVDIE_LENGTH                                  0x1
#define _PIE1_LVDIE_MASK                                    0x80

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
        unsigned                        :1;
        unsigned OSCF                   :1;
        unsigned WDTON                  :1;
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
#define _PCON_OSCF_POSN                                     0x3
#define _PCON_OSCF_POSITION                                 0x3
#define _PCON_OSCF_SIZE                                     0x1
#define _PCON_OSCF_LENGTH                                   0x1
#define _PCON_OSCF_MASK                                     0x8
#define _PCON_WDTON_POSN                                    0x4
#define _PCON_WDTON_POSITION                                0x4
#define _PCON_WDTON_SIZE                                    0x1
#define _PCON_WDTON_LENGTH                                  0x1
#define _PCON_WDTON_MASK                                    0x10
#define _PCON_nBO_POSN                                      0x0
#define _PCON_nBO_POSITION                                  0x0
#define _PCON_nBO_SIZE                                      0x1
#define _PCON_nBO_LENGTH                                    0x1
#define _PCON_nBO_MASK                                      0x1

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x095);
#ifndef _LIB_BUILD
asm("WPUB equ 095h");
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
extern volatile WPUBbits_t WPUBbits __at(0x095);
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
extern volatile unsigned char           IOCB                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCB equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCB0                  :1;
        unsigned IOCB1                  :1;
        unsigned IOCB2                  :1;
        unsigned IOCB3                  :1;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __at(0x096);
// bitfield macros
#define _IOCB_IOCB0_POSN                                    0x0
#define _IOCB_IOCB0_POSITION                                0x0
#define _IOCB_IOCB0_SIZE                                    0x1
#define _IOCB_IOCB0_LENGTH                                  0x1
#define _IOCB_IOCB0_MASK                                    0x1
#define _IOCB_IOCB1_POSN                                    0x1
#define _IOCB_IOCB1_POSITION                                0x1
#define _IOCB_IOCB1_SIZE                                    0x1
#define _IOCB_IOCB1_LENGTH                                  0x1
#define _IOCB_IOCB1_MASK                                    0x2
#define _IOCB_IOCB2_POSN                                    0x2
#define _IOCB_IOCB2_POSITION                                0x2
#define _IOCB_IOCB2_SIZE                                    0x1
#define _IOCB_IOCB2_LENGTH                                  0x1
#define _IOCB_IOCB2_MASK                                    0x4
#define _IOCB_IOCB3_POSN                                    0x3
#define _IOCB_IOCB3_POSITION                                0x3
#define _IOCB_IOCB3_SIZE                                    0x1
#define _IOCB_IOCB3_LENGTH                                  0x1
#define _IOCB_IOCB3_MASK                                    0x8
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

// Register: REFCON
#define REFCON REFCON
extern volatile unsigned char           REFCON              __at(0x09B);
#ifndef _LIB_BUILD
asm("REFCON equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned VROE                   :1;
        unsigned VREN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFOE                 :1;
        unsigned VREFEN                 :1;
    };
} REFCONbits_t;
extern volatile REFCONbits_t REFCONbits __at(0x09B);
// bitfield macros
#define _REFCON_VROE_POSN                                   0x2
#define _REFCON_VROE_POSITION                               0x2
#define _REFCON_VROE_SIZE                                   0x1
#define _REFCON_VROE_LENGTH                                 0x1
#define _REFCON_VROE_MASK                                   0x4
#define _REFCON_VREN_POSN                                   0x3
#define _REFCON_VREN_POSITION                               0x3
#define _REFCON_VREN_SIZE                                   0x1
#define _REFCON_VREN_LENGTH                                 0x1
#define _REFCON_VREN_MASK                                   0x8
#define _REFCON_VREFOE_POSN                                 0x2
#define _REFCON_VREFOE_POSITION                             0x2
#define _REFCON_VREFOE_SIZE                                 0x1
#define _REFCON_VREFOE_LENGTH                               0x1
#define _REFCON_VREFOE_MASK                                 0x4
#define _REFCON_VREFEN_POSN                                 0x3
#define _REFCON_VREFEN_POSITION                             0x3
#define _REFCON_VREFEN_SIZE                                 0x1
#define _REFCON_VREFEN_LENGTH                               0x1
#define _REFCON_VREFEN_MASK                                 0x8

// Register: LVDCON
#define LVDCON LVDCON
extern volatile unsigned char           LVDCON              __at(0x09C);
#ifndef _LIB_BUILD
asm("LVDCON equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LV                     :4;
        unsigned LVDEN                  :1;
        unsigned BGST                   :1;
    };
    struct {
        unsigned LV0                    :1;
        unsigned LV1                    :1;
        unsigned LV2                    :1;
        unsigned LV3                    :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits __at(0x09C);
// bitfield macros
#define _LVDCON_LV_POSN                                     0x0
#define _LVDCON_LV_POSITION                                 0x0
#define _LVDCON_LV_SIZE                                     0x4
#define _LVDCON_LV_LENGTH                                   0x4
#define _LVDCON_LV_MASK                                     0xF
#define _LVDCON_LVDEN_POSN                                  0x4
#define _LVDCON_LVDEN_POSITION                              0x4
#define _LVDCON_LVDEN_SIZE                                  0x1
#define _LVDCON_LVDEN_LENGTH                                0x1
#define _LVDCON_LVDEN_MASK                                  0x10
#define _LVDCON_BGST_POSN                                   0x5
#define _LVDCON_BGST_POSITION                               0x5
#define _LVDCON_BGST_SIZE                                   0x1
#define _LVDCON_BGST_LENGTH                                 0x1
#define _LVDCON_BGST_MASK                                   0x20
#define _LVDCON_LV0_POSN                                    0x0
#define _LVDCON_LV0_POSITION                                0x0
#define _LVDCON_LV0_SIZE                                    0x1
#define _LVDCON_LV0_LENGTH                                  0x1
#define _LVDCON_LV0_MASK                                    0x1
#define _LVDCON_LV1_POSN                                    0x1
#define _LVDCON_LV1_POSITION                                0x1
#define _LVDCON_LV1_SIZE                                    0x1
#define _LVDCON_LV1_LENGTH                                  0x1
#define _LVDCON_LV1_MASK                                    0x2
#define _LVDCON_LV2_POSN                                    0x2
#define _LVDCON_LV2_POSITION                                0x2
#define _LVDCON_LV2_SIZE                                    0x1
#define _LVDCON_LV2_LENGTH                                  0x1
#define _LVDCON_LV2_MASK                                    0x4
#define _LVDCON_LV3_POSN                                    0x3
#define _LVDCON_LV3_POSITION                                0x3
#define _LVDCON_LV3_SIZE                                    0x1
#define _LVDCON_LV3_LENGTH                                  0x1
#define _LVDCON_LV3_MASK                                    0x8

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x09D);
#ifndef _LIB_BUILD
asm("ANSEL equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x09D);
// bitfield macros
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
        unsigned VCFG                   :2;
    };
    struct {
        unsigned                        :4;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
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

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x10C);
#ifndef _LIB_BUILD
asm("PMDATL equ 010Ch");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x10D);
#ifndef _LIB_BUILD
asm("PMADRL equ 010Dh");
#endif

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x10E);
#ifndef _LIB_BUILD
asm("PMDATH equ 010Eh");
#endif

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x10F);
#ifndef _LIB_BUILD
asm("PMADRH equ 010Fh");
#endif

// Register: CALCON
#define CALCON CALCON
extern volatile unsigned char           CALCON              __at(0x110);
#ifndef _LIB_BUILD
asm("CALCON equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned CALREF                 :1;
        unsigned CALERR                 :1;
        unsigned CAL                    :1;
    };
} CALCONbits_t;
extern volatile CALCONbits_t CALCONbits __at(0x110);
// bitfield macros
#define _CALCON_CALREF_POSN                                 0x5
#define _CALCON_CALREF_POSITION                             0x5
#define _CALCON_CALREF_SIZE                                 0x1
#define _CALCON_CALREF_LENGTH                               0x1
#define _CALCON_CALREF_MASK                                 0x20
#define _CALCON_CALERR_POSN                                 0x6
#define _CALCON_CALERR_POSITION                             0x6
#define _CALCON_CALERR_SIZE                                 0x1
#define _CALCON_CALERR_LENGTH                               0x1
#define _CALCON_CALERR_MASK                                 0x40
#define _CALCON_CAL_POSN                                    0x7
#define _CALCON_CAL_POSITION                                0x7
#define _CALCON_CAL_SIZE                                    0x1
#define _CALCON_CAL_LENGTH                                  0x1
#define _CALCON_CAL_MASK                                    0x80

// Register: PSMCCON0
#define PSMCCON0 PSMCCON0
extern volatile unsigned char           PSMCCON0            __at(0x111);
#ifndef _LIB_BUILD
asm("PSMCCON0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DC                     :2;
        unsigned MAXDC                  :2;
        unsigned MINDC                  :2;
        unsigned SMCCL                  :2;
    };
    struct {
        unsigned DC0                    :1;
        unsigned DC1                    :1;
        unsigned MAXDC0                 :1;
        unsigned MAXDC1                 :1;
        unsigned MINDC0                 :1;
        unsigned MINDC1                 :1;
        unsigned SMCCL0                 :1;
        unsigned SMCCL1                 :1;
    };
} PSMCCON0bits_t;
extern volatile PSMCCON0bits_t PSMCCON0bits __at(0x111);
// bitfield macros
#define _PSMCCON0_DC_POSN                                   0x0
#define _PSMCCON0_DC_POSITION                               0x0
#define _PSMCCON0_DC_SIZE                                   0x2
#define _PSMCCON0_DC_LENGTH                                 0x2
#define _PSMCCON0_DC_MASK                                   0x3
#define _PSMCCON0_MAXDC_POSN                                0x2
#define _PSMCCON0_MAXDC_POSITION                            0x2
#define _PSMCCON0_MAXDC_SIZE                                0x2
#define _PSMCCON0_MAXDC_LENGTH                              0x2
#define _PSMCCON0_MAXDC_MASK                                0xC
#define _PSMCCON0_MINDC_POSN                                0x4
#define _PSMCCON0_MINDC_POSITION                            0x4
#define _PSMCCON0_MINDC_SIZE                                0x2
#define _PSMCCON0_MINDC_LENGTH                              0x2
#define _PSMCCON0_MINDC_MASK                                0x30
#define _PSMCCON0_SMCCL_POSN                                0x6
#define _PSMCCON0_SMCCL_POSITION                            0x6
#define _PSMCCON0_SMCCL_SIZE                                0x2
#define _PSMCCON0_SMCCL_LENGTH                              0x2
#define _PSMCCON0_SMCCL_MASK                                0xC0
#define _PSMCCON0_DC0_POSN                                  0x0
#define _PSMCCON0_DC0_POSITION                              0x0
#define _PSMCCON0_DC0_SIZE                                  0x1
#define _PSMCCON0_DC0_LENGTH                                0x1
#define _PSMCCON0_DC0_MASK                                  0x1
#define _PSMCCON0_DC1_POSN                                  0x1
#define _PSMCCON0_DC1_POSITION                              0x1
#define _PSMCCON0_DC1_SIZE                                  0x1
#define _PSMCCON0_DC1_LENGTH                                0x1
#define _PSMCCON0_DC1_MASK                                  0x2
#define _PSMCCON0_MAXDC0_POSN                               0x2
#define _PSMCCON0_MAXDC0_POSITION                           0x2
#define _PSMCCON0_MAXDC0_SIZE                               0x1
#define _PSMCCON0_MAXDC0_LENGTH                             0x1
#define _PSMCCON0_MAXDC0_MASK                               0x4
#define _PSMCCON0_MAXDC1_POSN                               0x3
#define _PSMCCON0_MAXDC1_POSITION                           0x3
#define _PSMCCON0_MAXDC1_SIZE                               0x1
#define _PSMCCON0_MAXDC1_LENGTH                             0x1
#define _PSMCCON0_MAXDC1_MASK                               0x8
#define _PSMCCON0_MINDC0_POSN                               0x4
#define _PSMCCON0_MINDC0_POSITION                           0x4
#define _PSMCCON0_MINDC0_SIZE                               0x1
#define _PSMCCON0_MINDC0_LENGTH                             0x1
#define _PSMCCON0_MINDC0_MASK                               0x10
#define _PSMCCON0_MINDC1_POSN                               0x5
#define _PSMCCON0_MINDC1_POSITION                           0x5
#define _PSMCCON0_MINDC1_SIZE                               0x1
#define _PSMCCON0_MINDC1_LENGTH                             0x1
#define _PSMCCON0_MINDC1_MASK                               0x20
#define _PSMCCON0_SMCCL0_POSN                               0x6
#define _PSMCCON0_SMCCL0_POSITION                           0x6
#define _PSMCCON0_SMCCL0_SIZE                               0x1
#define _PSMCCON0_SMCCL0_LENGTH                             0x1
#define _PSMCCON0_SMCCL0_MASK                               0x40
#define _PSMCCON0_SMCCL1_POSN                               0x7
#define _PSMCCON0_SMCCL1_POSITION                           0x7
#define _PSMCCON0_SMCCL1_SIZE                               0x1
#define _PSMCCON0_SMCCL1_LENGTH                             0x1
#define _PSMCCON0_SMCCL1_MASK                               0x80

// Register: PSMCCON1
#define PSMCCON1 PSMCCON1
extern volatile unsigned char           PSMCCON1            __at(0x112);
#ifndef _LIB_BUILD
asm("PSMCCON1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SMCCS                  :1;
        unsigned PWM_nPSM               :1;
        unsigned SMCOM                  :1;
        unsigned SCEN                   :1;
        unsigned                        :1;
        unsigned S1BPOL                 :1;
        unsigned S1APOL                 :1;
        unsigned SMCON                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned PWM                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PSM                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned nPSM                   :1;
    };
} PSMCCON1bits_t;
extern volatile PSMCCON1bits_t PSMCCON1bits __at(0x112);
// bitfield macros
#define _PSMCCON1_SMCCS_POSN                                0x0
#define _PSMCCON1_SMCCS_POSITION                            0x0
#define _PSMCCON1_SMCCS_SIZE                                0x1
#define _PSMCCON1_SMCCS_LENGTH                              0x1
#define _PSMCCON1_SMCCS_MASK                                0x1
#define _PSMCCON1_PWM_nPSM_POSN                             0x1
#define _PSMCCON1_PWM_nPSM_POSITION                         0x1
#define _PSMCCON1_PWM_nPSM_SIZE                             0x1
#define _PSMCCON1_PWM_nPSM_LENGTH                           0x1
#define _PSMCCON1_PWM_nPSM_MASK                             0x2
#define _PSMCCON1_SMCOM_POSN                                0x2
#define _PSMCCON1_SMCOM_POSITION                            0x2
#define _PSMCCON1_SMCOM_SIZE                                0x1
#define _PSMCCON1_SMCOM_LENGTH                              0x1
#define _PSMCCON1_SMCOM_MASK                                0x4
#define _PSMCCON1_SCEN_POSN                                 0x3
#define _PSMCCON1_SCEN_POSITION                             0x3
#define _PSMCCON1_SCEN_SIZE                                 0x1
#define _PSMCCON1_SCEN_LENGTH                               0x1
#define _PSMCCON1_SCEN_MASK                                 0x8
#define _PSMCCON1_S1BPOL_POSN                               0x5
#define _PSMCCON1_S1BPOL_POSITION                           0x5
#define _PSMCCON1_S1BPOL_SIZE                               0x1
#define _PSMCCON1_S1BPOL_LENGTH                             0x1
#define _PSMCCON1_S1BPOL_MASK                               0x20
#define _PSMCCON1_S1APOL_POSN                               0x6
#define _PSMCCON1_S1APOL_POSITION                           0x6
#define _PSMCCON1_S1APOL_SIZE                               0x1
#define _PSMCCON1_S1APOL_LENGTH                             0x1
#define _PSMCCON1_S1APOL_MASK                               0x40
#define _PSMCCON1_SMCON_POSN                                0x7
#define _PSMCCON1_SMCON_POSITION                            0x7
#define _PSMCCON1_SMCON_SIZE                                0x1
#define _PSMCCON1_SMCON_LENGTH                              0x1
#define _PSMCCON1_SMCON_MASK                                0x80
#define _PSMCCON1_PWM_POSN                                  0x1
#define _PSMCCON1_PWM_POSITION                              0x1
#define _PSMCCON1_PWM_SIZE                                  0x1
#define _PSMCCON1_PWM_LENGTH                                0x1
#define _PSMCCON1_PWM_MASK                                  0x2
#define _PSMCCON1_PSM_POSN                                  0x1
#define _PSMCCON1_PSM_POSITION                              0x1
#define _PSMCCON1_PSM_SIZE                                  0x1
#define _PSMCCON1_PSM_LENGTH                                0x1
#define _PSMCCON1_PSM_MASK                                  0x2
#define _PSMCCON1_nPSM_POSN                                 0x1
#define _PSMCCON1_nPSM_POSITION                             0x1
#define _PSMCCON1_nPSM_SIZE                                 0x1
#define _PSMCCON1_nPSM_LENGTH                               0x1
#define _PSMCCON1_nPSM_MASK                                 0x2

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x119);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0119h");
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
extern volatile CM1CON0bits_t CM1CON0bits __at(0x119);
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

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x11A);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 011Ah");
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
extern volatile CM2CON0bits_t CM2CON0bits __at(0x11A);
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
extern volatile unsigned char           CM2CON1             __at(0x11B);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned                        :5;
        unsigned MC2OUT                 :1;
        unsigned MC1OUT                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x11B);
// bitfield macros
#define _CM2CON1_C2SYNC_POSN                                0x0
#define _CM2CON1_C2SYNC_POSITION                            0x0
#define _CM2CON1_C2SYNC_SIZE                                0x1
#define _CM2CON1_C2SYNC_LENGTH                              0x1
#define _CM2CON1_C2SYNC_MASK                                0x1
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

// Register: OPACON
#define OPACON OPACON
extern volatile unsigned char           OPACON              __at(0x11C);
#ifndef _LIB_BUILD
asm("OPACON equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GBWP                   :1;
        unsigned                        :5;
        unsigned CMPEN                  :1;
        unsigned OPAON                  :1;
    };
} OPACONbits_t;
extern volatile OPACONbits_t OPACONbits __at(0x11C);
// bitfield macros
#define _OPACON_GBWP_POSN                                   0x0
#define _OPACON_GBWP_POSITION                               0x0
#define _OPACON_GBWP_SIZE                                   0x1
#define _OPACON_GBWP_LENGTH                                 0x1
#define _OPACON_GBWP_MASK                                   0x1
#define _OPACON_CMPEN_POSN                                  0x6
#define _OPACON_CMPEN_POSITION                              0x6
#define _OPACON_CMPEN_SIZE                                  0x1
#define _OPACON_CMPEN_LENGTH                                0x1
#define _OPACON_CMPEN_MASK                                  0x40
#define _OPACON_OPAON_POSN                                  0x7
#define _OPACON_OPAON_POSITION                              0x7
#define _OPACON_OPAON_SIZE                                  0x1
#define _OPACON_OPAON_LENGTH                                0x1
#define _OPACON_OPAON_MASK                                  0x80

// Register: DAC
#define DAC DAC
extern volatile unsigned char           DAC                 __at(0x11E);
#ifndef _LIB_BUILD
asm("DAC equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DA0                    :1;
        unsigned DA1                    :1;
        unsigned DA2                    :1;
        unsigned DA3                    :1;
        unsigned DA4                    :1;
        unsigned DA5                    :1;
        unsigned DA6                    :1;
        unsigned DA7                    :1;
    };
} DACbits_t;
extern volatile DACbits_t DACbits __at(0x11E);
// bitfield macros
#define _DAC_DA0_POSN                                       0x0
#define _DAC_DA0_POSITION                                   0x0
#define _DAC_DA0_SIZE                                       0x1
#define _DAC_DA0_LENGTH                                     0x1
#define _DAC_DA0_MASK                                       0x1
#define _DAC_DA1_POSN                                       0x1
#define _DAC_DA1_POSITION                                   0x1
#define _DAC_DA1_SIZE                                       0x1
#define _DAC_DA1_LENGTH                                     0x1
#define _DAC_DA1_MASK                                       0x2
#define _DAC_DA2_POSN                                       0x2
#define _DAC_DA2_POSITION                                   0x2
#define _DAC_DA2_SIZE                                       0x1
#define _DAC_DA2_LENGTH                                     0x1
#define _DAC_DA2_MASK                                       0x4
#define _DAC_DA3_POSN                                       0x3
#define _DAC_DA3_POSITION                                   0x3
#define _DAC_DA3_SIZE                                       0x1
#define _DAC_DA3_LENGTH                                     0x1
#define _DAC_DA3_MASK                                       0x8
#define _DAC_DA4_POSN                                       0x4
#define _DAC_DA4_POSITION                                   0x4
#define _DAC_DA4_SIZE                                       0x1
#define _DAC_DA4_LENGTH                                     0x1
#define _DAC_DA4_MASK                                       0x10
#define _DAC_DA5_POSN                                       0x5
#define _DAC_DA5_POSITION                                   0x5
#define _DAC_DA5_SIZE                                       0x1
#define _DAC_DA5_LENGTH                                     0x1
#define _DAC_DA5_MASK                                       0x20
#define _DAC_DA6_POSN                                       0x6
#define _DAC_DA6_POSITION                                   0x6
#define _DAC_DA6_SIZE                                       0x1
#define _DAC_DA6_LENGTH                                     0x1
#define _DAC_DA6_MASK                                       0x40
#define _DAC_DA7_POSN                                       0x7
#define _DAC_DA7_POSITION                                   0x7
#define _DAC_DA7_SIZE                                       0x1
#define _DAC_DA7_LENGTH                                     0x1
#define _DAC_DA7_MASK                                       0x80

// Register: DACON0
#define DACON0 DACON0
extern volatile unsigned char           DACON0              __at(0x11F);
#ifndef _LIB_BUILD
asm("DACON0 equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DARS                   :2;
        unsigned                        :4;
        unsigned DAOE                   :1;
        unsigned DAON                   :1;
    };
    struct {
        unsigned DARS0                  :1;
        unsigned DARS1                  :1;
    };
} DACON0bits_t;
extern volatile DACON0bits_t DACON0bits __at(0x11F);
// bitfield macros
#define _DACON0_DARS_POSN                                   0x0
#define _DACON0_DARS_POSITION                               0x0
#define _DACON0_DARS_SIZE                                   0x2
#define _DACON0_DARS_LENGTH                                 0x2
#define _DACON0_DARS_MASK                                   0x3
#define _DACON0_DAOE_POSN                                   0x6
#define _DACON0_DAOE_POSITION                               0x6
#define _DACON0_DAOE_SIZE                                   0x1
#define _DACON0_DAOE_LENGTH                                 0x1
#define _DACON0_DAOE_MASK                                   0x40
#define _DACON0_DAON_POSN                                   0x7
#define _DACON0_DAON_POSITION                               0x7
#define _DACON0_DAON_SIZE                                   0x1
#define _DACON0_DAON_LENGTH                                 0x1
#define _DACON0_DAON_MASK                                   0x80
#define _DACON0_DARS0_POSN                                  0x0
#define _DACON0_DARS0_POSITION                              0x0
#define _DACON0_DARS0_SIZE                                  0x1
#define _DACON0_DARS0_LENGTH                                0x1
#define _DACON0_DARS0_MASK                                  0x1
#define _DACON0_DARS1_POSN                                  0x1
#define _DACON0_DARS1_POSITION                              0x1
#define _DACON0_DARS1_SIZE                                  0x1
#define _DACON0_DARS1_LENGTH                                0x1
#define _DACON0_DARS1_MASK                                  0x2

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x18C);
#ifndef _LIB_BUILD
asm("PMCON1 equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x18C);
// bitfield macros
#define _PMCON1_RD_POSN                                     0x0
#define _PMCON1_RD_POSITION                                 0x0
#define _PMCON1_RD_SIZE                                     0x1
#define _PMCON1_RD_LENGTH                                   0x1
#define _PMCON1_RD_MASK                                     0x1

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
extern volatile __bit                   ADCS0               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ANSEL<ANS0>
extern volatile __bit                   ANS0                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL,0)
// ANSEL<ANS1>
extern volatile __bit                   ANS1                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL,1)
// ANSEL<ANS2>
extern volatile __bit                   ANS2                __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL,2)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// ANSEL<ANS4>
extern volatile __bit                   ANS4                __at(0x4EC);	// @ (0x9D * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL,4)
// ANSEL<ANS5>
extern volatile __bit                   ANS5                __at(0x4ED);	// @ (0x9D * 8 + 5)
#define                                 ANS5_bit            _BIT_ACCESS(ANSEL,5)
// ANSEL<ANS6>
extern volatile __bit                   ANS6                __at(0x4EE);	// @ (0x9D * 8 + 6)
#define                                 ANS6_bit            _BIT_ACCESS(ANSEL,6)
// ANSEL<ANS7>
extern volatile __bit                   ANS7                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 ANS7_bit            _BIT_ACCESS(ANSEL,7)
// LVDCON<BGST>
extern volatile __bit                   BGST                __at(0x4E5);	// @ (0x9C * 8 + 5)
#define                                 BGST_bit            _BIT_ACCESS(LVDCON,5)
// CM1CON0<C1CH0>
extern volatile __bit                   C1CH0               __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 C1CH0_bit           _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1CH1>
extern volatile __bit                   C1CH1               __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 C1CH1_bit           _BIT_ACCESS(CM1CON0,1)
// PIE1<C1IE>
extern volatile __bit                   C1IE                __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 C1IE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<C1IF>
extern volatile __bit                   C1IF                __at(0x64);	// @ (0xC * 8 + 4)
#define                                 C1IF_bit            _BIT_ACCESS(PIR1,4)
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x8CF);	// @ (0x119 * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1R>
extern volatile __bit                   C1R                 __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 C1R_bit             _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,3)
// CM2CON0<C2CH0>
extern volatile __bit                   C2CH0               __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 C2CH0_bit           _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2CH1>
extern volatile __bit                   C2CH1               __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 C2CH1_bit           _BIT_ACCESS(CM2CON0,1)
// PIE1<C2IE>
extern volatile __bit                   C2IE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 C2IE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<C2IF>
extern volatile __bit                   C2IF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 C2IF_bit            _BIT_ACCESS(PIR1,5)
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x8D5);	// @ (0x11A * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2R>
extern volatile __bit                   C2R                 __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 C2R_bit             _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,3)
// CM2CON1<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x8D8);	// @ (0x11B * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON1,0)
// CALCON<CAL>
extern volatile __bit                   CAL                 __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 CAL_bit             _BIT_ACCESS(CALCON,7)
// CALCON<CALERR>
extern volatile __bit                   CALERR              __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 CALERR_bit          _BIT_ACCESS(CALCON,6)
// CALCON<CALREF>
extern volatile __bit                   CALREF              __at(0x885);	// @ (0x110 * 8 + 5)
#define                                 CALREF_bit          _BIT_ACCESS(CALCON,5)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,5)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,1)
// OPACON<CMPEN>
extern volatile __bit                   CMPEN               __at(0x8E6);	// @ (0x11C * 8 + 6)
#define                                 CMPEN_bit           _BIT_ACCESS(OPACON,6)
// DAC<DA0>
extern volatile __bit                   DA0                 __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 DA0_bit             _BIT_ACCESS(DAC,0)
// DAC<DA1>
extern volatile __bit                   DA1                 __at(0x8F1);	// @ (0x11E * 8 + 1)
#define                                 DA1_bit             _BIT_ACCESS(DAC,1)
// DAC<DA2>
extern volatile __bit                   DA2                 __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 DA2_bit             _BIT_ACCESS(DAC,2)
// DAC<DA3>
extern volatile __bit                   DA3                 __at(0x8F3);	// @ (0x11E * 8 + 3)
#define                                 DA3_bit             _BIT_ACCESS(DAC,3)
// DAC<DA4>
extern volatile __bit                   DA4                 __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 DA4_bit             _BIT_ACCESS(DAC,4)
// DAC<DA5>
extern volatile __bit                   DA5                 __at(0x8F5);	// @ (0x11E * 8 + 5)
#define                                 DA5_bit             _BIT_ACCESS(DAC,5)
// DAC<DA6>
extern volatile __bit                   DA6                 __at(0x8F6);	// @ (0x11E * 8 + 6)
#define                                 DA6_bit             _BIT_ACCESS(DAC,6)
// DAC<DA7>
extern volatile __bit                   DA7                 __at(0x8F7);	// @ (0x11E * 8 + 7)
#define                                 DA7_bit             _BIT_ACCESS(DAC,7)
// DACON0<DAOE>
extern volatile __bit                   DAOE                __at(0x8FE);	// @ (0x11F * 8 + 6)
#define                                 DAOE_bit            _BIT_ACCESS(DACON0,6)
// DACON0<DAON>
extern volatile __bit                   DAON                __at(0x8FF);	// @ (0x11F * 8 + 7)
#define                                 DAON_bit            _BIT_ACCESS(DACON0,7)
// DACON0<DARS0>
extern volatile __bit                   DARS0               __at(0x8F8);	// @ (0x11F * 8 + 0)
#define                                 DARS0_bit           _BIT_ACCESS(DACON0,0)
// DACON0<DARS1>
extern volatile __bit                   DARS1               __at(0x8F9);	// @ (0x11F * 8 + 1)
#define                                 DARS1_bit           _BIT_ACCESS(DACON0,1)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// PSMCCON0<DC0>
extern volatile __bit                   DC0                 __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 DC0_bit             _BIT_ACCESS(PSMCCON0,0)
// PSMCCON0<DC1>
extern volatile __bit                   DC1                 __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 DC1_bit             _BIT_ACCESS(PSMCCON0,1)
// OPACON<GBWP>
extern volatile __bit                   GBWP                __at(0x8E0);	// @ (0x11C * 8 + 0)
#define                                 GBWP_bit            _BIT_ACCESS(OPACON,0)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xFA);	// @ (0x1F * 8 + 2)
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
// IOCB<IOCB0>
extern volatile __bit                   IOCB0               __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOCB0_bit           _BIT_ACCESS(IOCB,0)
// IOCB<IOCB1>
extern volatile __bit                   IOCB1               __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOCB1_bit           _BIT_ACCESS(IOCB,1)
// IOCB<IOCB2>
extern volatile __bit                   IOCB2               __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOCB2_bit           _BIT_ACCESS(IOCB,2)
// IOCB<IOCB3>
extern volatile __bit                   IOCB3               __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOCB3_bit           _BIT_ACCESS(IOCB,3)
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
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// LVDCON<LV0>
extern volatile __bit                   LV0                 __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 LV0_bit             _BIT_ACCESS(LVDCON,0)
// LVDCON<LV1>
extern volatile __bit                   LV1                 __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 LV1_bit             _BIT_ACCESS(LVDCON,1)
// LVDCON<LV2>
extern volatile __bit                   LV2                 __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 LV2_bit             _BIT_ACCESS(LVDCON,2)
// LVDCON<LV3>
extern volatile __bit                   LV3                 __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 LV3_bit             _BIT_ACCESS(LVDCON,3)
// LVDCON<LVDEN>
extern volatile __bit                   LVDEN               __at(0x4E4);	// @ (0x9C * 8 + 4)
#define                                 LVDEN_bit           _BIT_ACCESS(LVDCON,4)
// PIE1<LVDIE>
extern volatile __bit                   LVDIE               __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<LVDIF>
extern volatile __bit                   LVDIF               __at(0x67);	// @ (0xC * 8 + 7)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR1,7)
// PSMCCON0<MAXDC0>
extern volatile __bit                   MAXDC0              __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 MAXDC0_bit          _BIT_ACCESS(PSMCCON0,2)
// PSMCCON0<MAXDC1>
extern volatile __bit                   MAXDC1              __at(0x88B);	// @ (0x111 * 8 + 3)
#define                                 MAXDC1_bit          _BIT_ACCESS(PSMCCON0,3)
// CM2CON1<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8DF);	// @ (0x11B * 8 + 7)
#define                                 MC1OUT_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<MC2OUT>
extern volatile __bit                   MC2OUT              __at(0x8DE);	// @ (0x11B * 8 + 6)
#define                                 MC2OUT_bit          _BIT_ACCESS(CM2CON1,6)
// PSMCCON0<MINDC0>
extern volatile __bit                   MINDC0              __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 MINDC0_bit          _BIT_ACCESS(PSMCCON0,4)
// PSMCCON0<MINDC1>
extern volatile __bit                   MINDC1              __at(0x88D);	// @ (0x111 * 8 + 5)
#define                                 MINDC1_bit          _BIT_ACCESS(PSMCCON0,5)
// OPACON<OPAON>
extern volatile __bit                   OPAON               __at(0x8E7);	// @ (0x11C * 8 + 7)
#define                                 OPAON_bit           _BIT_ACCESS(OPACON,7)
// PCON<OSCF>
extern volatile __bit                   OSCF                __at(0x473);	// @ (0x8E * 8 + 3)
#define                                 OSCF_bit            _BIT_ACCESS(PCON,3)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
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
// PSMCCON1<PSM>
extern volatile __bit                   PSM                 __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 PSM_bit             _BIT_ACCESS(PSMCCON1,1)
// PSMCCON1<PWM>
extern volatile __bit                   PWM                 __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 PWM_bit             _BIT_ACCESS(PSMCCON1,1)
// PSMCCON1<PWM_nPSM>
extern volatile __bit                   PWM_nPSM            __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 PWM_nPSM_bit        _BIT_ACCESS(PSMCCON1,1)
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
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// PSMCCON1<S1APOL>
extern volatile __bit                   S1APOL              __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 S1APOL_bit          _BIT_ACCESS(PSMCCON1,6)
// PSMCCON1<S1BPOL>
extern volatile __bit                   S1BPOL              __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 S1BPOL_bit          _BIT_ACCESS(PSMCCON1,5)
// PSMCCON1<SCEN>
extern volatile __bit                   SCEN                __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 SCEN_bit            _BIT_ACCESS(PSMCCON1,3)
// PSMCCON0<SMCCL0>
extern volatile __bit                   SMCCL0              __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 SMCCL0_bit          _BIT_ACCESS(PSMCCON0,6)
// PSMCCON0<SMCCL1>
extern volatile __bit                   SMCCL1              __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 SMCCL1_bit          _BIT_ACCESS(PSMCCON0,7)
// PSMCCON1<SMCCS>
extern volatile __bit                   SMCCS               __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 SMCCS_bit           _BIT_ACCESS(PSMCCON1,0)
// PSMCCON1<SMCOM>
extern volatile __bit                   SMCOM               __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 SMCOM_bit           _BIT_ACCESS(PSMCCON1,2)
// PSMCCON1<SMCON>
extern volatile __bit                   SMCON               __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 SMCON_bit           _BIT_ACCESS(PSMCCON1,7)
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
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
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
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,5)
// REFCON<VREFEN>
extern volatile __bit                   VREFEN              __at(0x4DB);	// @ (0x9B * 8 + 3)
#define                                 VREFEN_bit          _BIT_ACCESS(REFCON,3)
// REFCON<VREFOE>
extern volatile __bit                   VREFOE              __at(0x4DA);	// @ (0x9B * 8 + 2)
#define                                 VREFOE_bit          _BIT_ACCESS(REFCON,2)
// REFCON<VREN>
extern volatile __bit                   VREN                __at(0x4DB);	// @ (0x9B * 8 + 3)
#define                                 VREN_bit            _BIT_ACCESS(REFCON,3)
// REFCON<VROE>
extern volatile __bit                   VROE                __at(0x4DA);	// @ (0x9B * 8 + 2)
#define                                 VROE_bit            _BIT_ACCESS(REFCON,2)
// PCON<WDTON>
extern volatile __bit                   WDTON               __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 WDTON_bit           _BIT_ACCESS(PCON,4)
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
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBO>
extern volatile __bit                   nBO                 __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBO_bit             _BIT_ACCESS(PCON,0)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,2)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// PSMCCON1<nPSM>
extern volatile __bit                   nPSM                __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 nPSM_bit            _BIT_ACCESS(PSMCCON1,1)
// OPTION_REG<nRBPU>
extern volatile __bit                   nRBPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(OPTION_REG,7)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16C781_H_
