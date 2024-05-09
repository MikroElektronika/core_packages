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

#ifndef _PIC16F753_H_
#define _PIC16F753_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F753
 */
#ifndef _XC_H_
#warning Header file pic16f753.h included directly. Use #include <xc.h> instead.
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
        unsigned RP0                    :1;
        unsigned RP1                    :1;
        unsigned IRP                    :1;
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
#define _STATUS_IRP_POSN                                    0x7
#define _STATUS_IRP_POSITION                                0x7
#define _STATUS_IRP_SIZE                                    0x1
#define _STATUS_IRP_LENGTH                                  0x1
#define _STATUS_IRP_MASK                                    0x80
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

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTC equ 07h");
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
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x007);
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

// Register: IOCAF
#define IOCAF IOCAF
extern volatile unsigned char           IOCAF               __at(0x008);
#ifndef _LIB_BUILD
asm("IOCAF equ 08h");
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
} IOCAFbits_t;
extern volatile IOCAFbits_t IOCAFbits __at(0x008);
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

// Register: IOCCF
#define IOCCF IOCCF
extern volatile unsigned char           IOCCF               __at(0x009);
#ifndef _LIB_BUILD
asm("IOCCF equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCF0                 :1;
        unsigned IOCCF1                 :1;
        unsigned IOCCF2                 :1;
        unsigned IOCCF3                 :1;
        unsigned IOCCF4                 :1;
        unsigned IOCCF5                 :1;
    };
} IOCCFbits_t;
extern volatile IOCCFbits_t IOCCFbits __at(0x009);
// bitfield macros
#define _IOCCF_IOCCF0_POSN                                  0x0
#define _IOCCF_IOCCF0_POSITION                              0x0
#define _IOCCF_IOCCF0_SIZE                                  0x1
#define _IOCCF_IOCCF0_LENGTH                                0x1
#define _IOCCF_IOCCF0_MASK                                  0x1
#define _IOCCF_IOCCF1_POSN                                  0x1
#define _IOCCF_IOCCF1_POSITION                              0x1
#define _IOCCF_IOCCF1_SIZE                                  0x1
#define _IOCCF_IOCCF1_LENGTH                                0x1
#define _IOCCF_IOCCF1_MASK                                  0x2
#define _IOCCF_IOCCF2_POSN                                  0x2
#define _IOCCF_IOCCF2_POSITION                              0x2
#define _IOCCF_IOCCF2_SIZE                                  0x1
#define _IOCCF_IOCCF2_LENGTH                                0x1
#define _IOCCF_IOCCF2_MASK                                  0x4
#define _IOCCF_IOCCF3_POSN                                  0x3
#define _IOCCF_IOCCF3_POSITION                              0x3
#define _IOCCF_IOCCF3_SIZE                                  0x1
#define _IOCCF_IOCCF3_LENGTH                                0x1
#define _IOCCF_IOCCF3_MASK                                  0x8
#define _IOCCF_IOCCF4_POSN                                  0x4
#define _IOCCF_IOCCF4_POSITION                              0x4
#define _IOCCF_IOCCF4_SIZE                                  0x1
#define _IOCCF_IOCCF4_LENGTH                                0x1
#define _IOCCF_IOCCF4_MASK                                  0x10
#define _IOCCF_IOCCF5_POSN                                  0x5
#define _IOCCF_IOCCF5_POSITION                              0x5
#define _IOCCF_IOCCF5_SIZE                                  0x1
#define _IOCCF_IOCCF5_LENGTH                                0x1
#define _IOCCF_IOCCF5_MASK                                  0x20

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
        unsigned IOCIF                  :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned IOCIE                  :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
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
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
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
        unsigned TMR2IF                 :1;
        unsigned HLTMR1IF               :1;
        unsigned HLTMR2IF               :1;
        unsigned                        :2;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
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
#define _PIR1_HLTMR1IF_POSN                                 0x2
#define _PIR1_HLTMR1IF_POSITION                             0x2
#define _PIR1_HLTMR1IF_SIZE                                 0x1
#define _PIR1_HLTMR1IF_LENGTH                               0x1
#define _PIR1_HLTMR1IF_MASK                                 0x4
#define _PIR1_HLTMR2IF_POSN                                 0x3
#define _PIR1_HLTMR2IF_POSITION                             0x3
#define _PIR1_HLTMR2IF_SIZE                                 0x1
#define _PIR1_HLTMR2IF_LENGTH                               0x1
#define _PIR1_HLTMR2IF_MASK                                 0x8
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
extern volatile unsigned char           PIR2                __at(0x00D);
#ifndef _LIB_BUILD
asm("PIR2 equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1IF                 :1;
        unsigned                        :1;
        unsigned COG1IF                 :1;
        unsigned                        :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x00D);
// bitfield macros
#define _PIR2_CCP1IF_POSN                                   0x0
#define _PIR2_CCP1IF_POSITION                               0x0
#define _PIR2_CCP1IF_SIZE                                   0x1
#define _PIR2_CCP1IF_LENGTH                                 0x1
#define _PIR2_CCP1IF_MASK                                   0x1
#define _PIR2_COG1IF_POSN                                   0x2
#define _PIR2_COG1IF_POSITION                               0x2
#define _PIR2_COG1IF_SIZE                                   0x1
#define _PIR2_COG1IF_LENGTH                                 0x1
#define _PIR2_COG1IF_MASK                                   0x4
#define _PIR2_C1IF_POSN                                     0x4
#define _PIR2_C1IF_POSITION                                 0x4
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x10
#define _PIR2_C2IF_POSN                                     0x5
#define _PIR2_C2IF_POSITION                                 0x5
#define _PIR2_C2IF_SIZE                                     0x1
#define _PIR2_C2IF_LENGTH                                   0x1
#define _PIR2_C2IF_MASK                                     0x20

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR1 equ 0Fh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR1L equ 0Fh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x010);
#ifndef _LIB_BUILD
asm("TMR1H equ 010h");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x011);
#ifndef _LIB_BUILD
asm("T1CON equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned                        :1;
        unsigned nT1SYNC                :1;
        unsigned                        :1;
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
extern volatile T1CONbits_t T1CONbits __at(0x011);
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
extern volatile unsigned char           T1GCON              __at(0x012);
#ifndef _LIB_BUILD
asm("T1GCON equ 012h");
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
extern volatile T1GCONbits_t T1GCONbits __at(0x012);
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

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x013);
#ifndef _LIB_BUILD
asm("CCPR1 equ 013h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x013);
#ifndef _LIB_BUILD
asm("CCPR1L equ 013h");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x014);
#ifndef _LIB_BUILD
asm("CCPR1H equ 014h");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x015);
#ifndef _LIB_BUILD
asm("CCP1CON equ 015h");
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
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x015);
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

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0x01C);
#ifndef _LIB_BUILD
asm("ADRES equ 01Ch");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x01C);
#ifndef _LIB_BUILD
asm("ADRESL equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
extern volatile ADRESLbits_t ADRESLbits __at(0x01C);
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x01D);
#ifndef _LIB_BUILD
asm("ADRESH equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
extern volatile ADRESHbits_t ADRESHbits __at(0x01D);
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x01E);
#ifndef _LIB_BUILD
asm("ADCON0 equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01E);
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
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_ADFM_POSN                                   0x7
#define _ADCON0_ADFM_POSITION                               0x7
#define _ADCON0_ADFM_SIZE                                   0x1
#define _ADCON0_ADFM_LENGTH                                 0x1
#define _ADCON0_ADFM_MASK                                   0x80
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF1                :1;
        unsigned                        :3;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x01F);
// bitfield macros
#define _ADCON1_ADPREF1_POSN                                0x0
#define _ADCON1_ADPREF1_POSITION                            0x0
#define _ADCON1_ADPREF1_SIZE                                0x1
#define _ADCON1_ADPREF1_LENGTH                              0x1
#define _ADCON1_ADPREF1_MASK                                0x1
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
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
        unsigned nRAPU                  :1;
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
#define _OPTION_REG_nRAPU_POSN                              0x7
#define _OPTION_REG_nRAPU_POSITION                          0x7
#define _OPTION_REG_nRAPU_SIZE                              0x1
#define _OPTION_REG_nRAPU_LENGTH                            0x1
#define _OPTION_REG_nRAPU_MASK                              0x80
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

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0x087);
#ifndef _LIB_BUILD
asm("TRISC equ 087h");
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
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0x087);
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

// Register: IOCAP
#define IOCAP IOCAP
extern volatile unsigned char           IOCAP               __at(0x088);
#ifndef _LIB_BUILD
asm("IOCAP equ 088h");
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
} IOCAPbits_t;
extern volatile IOCAPbits_t IOCAPbits __at(0x088);
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

// Register: IOCCP
#define IOCCP IOCCP
extern volatile unsigned char           IOCCP               __at(0x089);
#ifndef _LIB_BUILD
asm("IOCCP equ 089h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCP0                 :1;
        unsigned IOCCP1                 :1;
        unsigned IOCCP2                 :1;
        unsigned IOCCP3                 :1;
        unsigned IOCCP4                 :1;
        unsigned IOCCP5                 :1;
    };
} IOCCPbits_t;
extern volatile IOCCPbits_t IOCCPbits __at(0x089);
// bitfield macros
#define _IOCCP_IOCCP0_POSN                                  0x0
#define _IOCCP_IOCCP0_POSITION                              0x0
#define _IOCCP_IOCCP0_SIZE                                  0x1
#define _IOCCP_IOCCP0_LENGTH                                0x1
#define _IOCCP_IOCCP0_MASK                                  0x1
#define _IOCCP_IOCCP1_POSN                                  0x1
#define _IOCCP_IOCCP1_POSITION                              0x1
#define _IOCCP_IOCCP1_SIZE                                  0x1
#define _IOCCP_IOCCP1_LENGTH                                0x1
#define _IOCCP_IOCCP1_MASK                                  0x2
#define _IOCCP_IOCCP2_POSN                                  0x2
#define _IOCCP_IOCCP2_POSITION                              0x2
#define _IOCCP_IOCCP2_SIZE                                  0x1
#define _IOCCP_IOCCP2_LENGTH                                0x1
#define _IOCCP_IOCCP2_MASK                                  0x4
#define _IOCCP_IOCCP3_POSN                                  0x3
#define _IOCCP_IOCCP3_POSITION                              0x3
#define _IOCCP_IOCCP3_SIZE                                  0x1
#define _IOCCP_IOCCP3_LENGTH                                0x1
#define _IOCCP_IOCCP3_MASK                                  0x8
#define _IOCCP_IOCCP4_POSN                                  0x4
#define _IOCCP_IOCCP4_POSITION                              0x4
#define _IOCCP_IOCCP4_SIZE                                  0x1
#define _IOCCP_IOCCP4_LENGTH                                0x1
#define _IOCCP_IOCCP4_MASK                                  0x10
#define _IOCCP_IOCCP5_POSN                                  0x5
#define _IOCCP_IOCCP5_POSITION                              0x5
#define _IOCCP_IOCCP5_SIZE                                  0x1
#define _IOCCP_IOCCP5_LENGTH                                0x1
#define _IOCCP_IOCCP5_MASK                                  0x20

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
        unsigned TMR2IE                 :1;
        unsigned HLTMR1IE               :1;
        unsigned HLTMR2IE               :1;
        unsigned                        :2;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
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
#define _PIE1_HLTMR1IE_POSN                                 0x2
#define _PIE1_HLTMR1IE_POSITION                             0x2
#define _PIE1_HLTMR1IE_SIZE                                 0x1
#define _PIE1_HLTMR1IE_LENGTH                               0x1
#define _PIE1_HLTMR1IE_MASK                                 0x4
#define _PIE1_HLTMR2IE_POSN                                 0x3
#define _PIE1_HLTMR2IE_POSITION                             0x3
#define _PIE1_HLTMR2IE_SIZE                                 0x1
#define _PIE1_HLTMR2IE_LENGTH                               0x1
#define _PIE1_HLTMR2IE_MASK                                 0x8
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
extern volatile unsigned char           PIE2                __at(0x08D);
#ifndef _LIB_BUILD
asm("PIE2 equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1IE                 :1;
        unsigned                        :1;
        unsigned COG1IE                 :1;
        unsigned                        :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x08D);
// bitfield macros
#define _PIE2_CCP1IE_POSN                                   0x0
#define _PIE2_CCP1IE_POSITION                               0x0
#define _PIE2_CCP1IE_SIZE                                   0x1
#define _PIE2_CCP1IE_LENGTH                                 0x1
#define _PIE2_CCP1IE_MASK                                   0x1
#define _PIE2_COG1IE_POSN                                   0x2
#define _PIE2_COG1IE_POSITION                               0x2
#define _PIE2_COG1IE_SIZE                                   0x1
#define _PIE2_COG1IE_LENGTH                                 0x1
#define _PIE2_COG1IE_MASK                                   0x4
#define _PIE2_C1IE_POSN                                     0x4
#define _PIE2_C1IE_POSITION                                 0x4
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x10
#define _PIE2_C2IE_POSN                                     0x5
#define _PIE2_C2IE_POSITION                                 0x5
#define _PIE2_C2IE_SIZE                                     0x1
#define _PIE2_C2IE_LENGTH                                   0x1
#define _PIE2_C2IE_MASK                                     0x20

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x08F);
#ifndef _LIB_BUILD
asm("OSCCON equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned LTS                    :1;
        unsigned HTS                    :1;
        unsigned                        :1;
        unsigned IRCF                   :2;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x08F);
// bitfield macros
#define _OSCCON_LTS_POSN                                    0x1
#define _OSCCON_LTS_POSITION                                0x1
#define _OSCCON_LTS_SIZE                                    0x1
#define _OSCCON_LTS_LENGTH                                  0x1
#define _OSCCON_LTS_MASK                                    0x2
#define _OSCCON_HTS_POSN                                    0x2
#define _OSCCON_HTS_POSITION                                0x2
#define _OSCCON_HTS_SIZE                                    0x1
#define _OSCCON_HTS_LENGTH                                  0x1
#define _OSCCON_HTS_MASK                                    0x4
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x2
#define _OSCCON_IRCF_LENGTH                                 0x2
#define _OSCCON_IRCF_MASK                                   0x30
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

// Register: FVR1CON0
#define FVR1CON0 FVR1CON0
extern volatile unsigned char           FVR1CON0            __at(0x090);
#ifndef _LIB_BUILD
asm("FVR1CON0 equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FVRBUFEN               :1;
        unsigned                        :2;
        unsigned FVRBUFSS0              :2;
        unsigned FVROE                  :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned FVRBUSS0               :1;
        unsigned FVRBUSS1               :1;
    };
} FVR1CON0bits_t;
extern volatile FVR1CON0bits_t FVR1CON0bits __at(0x090);
// bitfield macros
#define _FVR1CON0_FVRBUFEN_POSN                             0x0
#define _FVR1CON0_FVRBUFEN_POSITION                         0x0
#define _FVR1CON0_FVRBUFEN_SIZE                             0x1
#define _FVR1CON0_FVRBUFEN_LENGTH                           0x1
#define _FVR1CON0_FVRBUFEN_MASK                             0x1
#define _FVR1CON0_FVRBUFSS0_POSN                            0x3
#define _FVR1CON0_FVRBUFSS0_POSITION                        0x3
#define _FVR1CON0_FVRBUFSS0_SIZE                            0x2
#define _FVR1CON0_FVRBUFSS0_LENGTH                          0x2
#define _FVR1CON0_FVRBUFSS0_MASK                            0x18
#define _FVR1CON0_FVROE_POSN                                0x5
#define _FVR1CON0_FVROE_POSITION                            0x5
#define _FVR1CON0_FVROE_SIZE                                0x1
#define _FVR1CON0_FVROE_LENGTH                              0x1
#define _FVR1CON0_FVROE_MASK                                0x20
#define _FVR1CON0_FVRRDY_POSN                               0x6
#define _FVR1CON0_FVRRDY_POSITION                           0x6
#define _FVR1CON0_FVRRDY_SIZE                               0x1
#define _FVR1CON0_FVRRDY_LENGTH                             0x1
#define _FVR1CON0_FVRRDY_MASK                               0x40
#define _FVR1CON0_FVREN_POSN                                0x7
#define _FVR1CON0_FVREN_POSITION                            0x7
#define _FVR1CON0_FVREN_SIZE                                0x1
#define _FVR1CON0_FVREN_LENGTH                              0x1
#define _FVR1CON0_FVREN_MASK                                0x80
#define _FVR1CON0_FVRBUSS0_POSN                             0x3
#define _FVR1CON0_FVRBUSS0_POSITION                         0x3
#define _FVR1CON0_FVRBUSS0_SIZE                             0x1
#define _FVR1CON0_FVRBUSS0_LENGTH                           0x1
#define _FVR1CON0_FVRBUSS0_MASK                             0x8
#define _FVR1CON0_FVRBUSS1_POSN                             0x4
#define _FVR1CON0_FVRBUSS1_POSITION                         0x4
#define _FVR1CON0_FVRBUSS1_SIZE                             0x1
#define _FVR1CON0_FVRBUSS1_LENGTH                           0x1
#define _FVR1CON0_FVRBUSS1_MASK                             0x10

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
extern volatile unsigned char           DAC1CON0            __at(0x091);
#ifndef _LIB_BUILD
asm("DAC1CON0 equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned DACPSS                 :2;
        unsigned                        :1;
        unsigned DACOE                  :1;
        unsigned DACFM                  :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACPSS0                :1;
        unsigned DACPSS1                :1;
    };
} DAC1CON0bits_t;
extern volatile DAC1CON0bits_t DAC1CON0bits __at(0x091);
// bitfield macros
#define _DAC1CON0_DACPSS_POSN                               0x2
#define _DAC1CON0_DACPSS_POSITION                           0x2
#define _DAC1CON0_DACPSS_SIZE                               0x2
#define _DAC1CON0_DACPSS_LENGTH                             0x2
#define _DAC1CON0_DACPSS_MASK                               0xC
#define _DAC1CON0_DACOE_POSN                                0x5
#define _DAC1CON0_DACOE_POSITION                            0x5
#define _DAC1CON0_DACOE_SIZE                                0x1
#define _DAC1CON0_DACOE_LENGTH                              0x1
#define _DAC1CON0_DACOE_MASK                                0x20
#define _DAC1CON0_DACFM_POSN                                0x6
#define _DAC1CON0_DACFM_POSITION                            0x6
#define _DAC1CON0_DACFM_SIZE                                0x1
#define _DAC1CON0_DACFM_LENGTH                              0x1
#define _DAC1CON0_DACFM_MASK                                0x40
#define _DAC1CON0_DACEN_POSN                                0x7
#define _DAC1CON0_DACEN_POSITION                            0x7
#define _DAC1CON0_DACEN_SIZE                                0x1
#define _DAC1CON0_DACEN_LENGTH                              0x1
#define _DAC1CON0_DACEN_MASK                                0x80
#define _DAC1CON0_DACPSS0_POSN                              0x2
#define _DAC1CON0_DACPSS0_POSITION                          0x2
#define _DAC1CON0_DACPSS0_SIZE                              0x1
#define _DAC1CON0_DACPSS0_LENGTH                            0x1
#define _DAC1CON0_DACPSS0_MASK                              0x4
#define _DAC1CON0_DACPSS1_POSN                              0x3
#define _DAC1CON0_DACPSS1_POSITION                          0x3
#define _DAC1CON0_DACPSS1_SIZE                              0x1
#define _DAC1CON0_DACPSS1_LENGTH                            0x1
#define _DAC1CON0_DACPSS1_MASK                              0x8

// Register: DAC1REFL
#define DAC1REFL DAC1REFL
extern volatile unsigned char           DAC1REFL            __at(0x092);
#ifndef _LIB_BUILD
asm("DAC1REFL equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACR                   :8;
    };
} DAC1REFLbits_t;
extern volatile DAC1REFLbits_t DAC1REFLbits __at(0x092);
// bitfield macros
#define _DAC1REFL_DACR_POSN                                 0x0
#define _DAC1REFL_DACR_POSITION                             0x0
#define _DAC1REFL_DACR_SIZE                                 0x8
#define _DAC1REFL_DACR_LENGTH                               0x8
#define _DAC1REFL_DACR_MASK                                 0xFF

// Register: DAC1REFH
#define DAC1REFH DAC1REFH
extern volatile unsigned char           DAC1REFH            __at(0x093);
#ifndef _LIB_BUILD
asm("DAC1REFH equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACR                   :8;
    };
} DAC1REFHbits_t;
extern volatile DAC1REFHbits_t DAC1REFHbits __at(0x093);
// bitfield macros
#define _DAC1REFH_DACR_POSN                                 0x0
#define _DAC1REFH_DACR_POSITION                             0x0
#define _DAC1REFH_DACR_SIZE                                 0x8
#define _DAC1REFH_DACR_LENGTH                               0x8
#define _DAC1REFH_DACR_MASK                                 0xFF

// Register: OPA1CON
#define OPA1CON OPA1CON
extern volatile unsigned char           OPA1CON             __at(0x096);
#ifndef _LIB_BUILD
asm("OPA1CON equ 096h");
#endif
// aliases
extern volatile unsigned char           OPA1CON0            __at(0x096);
#ifndef _LIB_BUILD
asm("OPA1CON0 equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA1PCH                :2;
        unsigned OPA1NCH                :2;
        unsigned OPAUGM                 :1;
        unsigned                        :2;
        unsigned OPAEN                  :1;
    };
    struct {
        unsigned OPA1PCH0               :1;
        unsigned OPA1PCH1               :1;
        unsigned OPA1NCH0               :1;
        unsigned OPA1NCH1               :1;
    };
} OPA1CONbits_t;
extern volatile OPA1CONbits_t OPA1CONbits __at(0x096);
// bitfield macros
#define _OPA1CON_OPA1PCH_POSN                               0x0
#define _OPA1CON_OPA1PCH_POSITION                           0x0
#define _OPA1CON_OPA1PCH_SIZE                               0x2
#define _OPA1CON_OPA1PCH_LENGTH                             0x2
#define _OPA1CON_OPA1PCH_MASK                               0x3
#define _OPA1CON_OPA1NCH_POSN                               0x2
#define _OPA1CON_OPA1NCH_POSITION                           0x2
#define _OPA1CON_OPA1NCH_SIZE                               0x2
#define _OPA1CON_OPA1NCH_LENGTH                             0x2
#define _OPA1CON_OPA1NCH_MASK                               0xC
#define _OPA1CON_OPAUGM_POSN                                0x4
#define _OPA1CON_OPAUGM_POSITION                            0x4
#define _OPA1CON_OPAUGM_SIZE                                0x1
#define _OPA1CON_OPAUGM_LENGTH                              0x1
#define _OPA1CON_OPAUGM_MASK                                0x10
#define _OPA1CON_OPAEN_POSN                                 0x7
#define _OPA1CON_OPAEN_POSITION                             0x7
#define _OPA1CON_OPAEN_SIZE                                 0x1
#define _OPA1CON_OPAEN_LENGTH                               0x1
#define _OPA1CON_OPAEN_MASK                                 0x80
#define _OPA1CON_OPA1PCH0_POSN                              0x0
#define _OPA1CON_OPA1PCH0_POSITION                          0x0
#define _OPA1CON_OPA1PCH0_SIZE                              0x1
#define _OPA1CON_OPA1PCH0_LENGTH                            0x1
#define _OPA1CON_OPA1PCH0_MASK                              0x1
#define _OPA1CON_OPA1PCH1_POSN                              0x1
#define _OPA1CON_OPA1PCH1_POSITION                          0x1
#define _OPA1CON_OPA1PCH1_SIZE                              0x1
#define _OPA1CON_OPA1PCH1_LENGTH                            0x1
#define _OPA1CON_OPA1PCH1_MASK                              0x2
#define _OPA1CON_OPA1NCH0_POSN                              0x2
#define _OPA1CON_OPA1NCH0_POSITION                          0x2
#define _OPA1CON_OPA1NCH0_SIZE                              0x1
#define _OPA1CON_OPA1NCH0_LENGTH                            0x1
#define _OPA1CON_OPA1NCH0_MASK                              0x4
#define _OPA1CON_OPA1NCH1_POSN                              0x3
#define _OPA1CON_OPA1NCH1_POSITION                          0x3
#define _OPA1CON_OPA1NCH1_SIZE                              0x1
#define _OPA1CON_OPA1NCH1_LENGTH                            0x1
#define _OPA1CON_OPA1NCH1_MASK                              0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned OPA1PCH                :2;
        unsigned OPA1NCH                :2;
        unsigned OPAUGM                 :1;
        unsigned                        :2;
        unsigned OPAEN                  :1;
    };
    struct {
        unsigned OPA1PCH0               :1;
        unsigned OPA1PCH1               :1;
        unsigned OPA1NCH0               :1;
        unsigned OPA1NCH1               :1;
    };
} OPA1CON0bits_t;
extern volatile OPA1CON0bits_t OPA1CON0bits __at(0x096);
// bitfield macros
#define _OPA1CON0_OPA1PCH_POSN                              0x0
#define _OPA1CON0_OPA1PCH_POSITION                          0x0
#define _OPA1CON0_OPA1PCH_SIZE                              0x2
#define _OPA1CON0_OPA1PCH_LENGTH                            0x2
#define _OPA1CON0_OPA1PCH_MASK                              0x3
#define _OPA1CON0_OPA1NCH_POSN                              0x2
#define _OPA1CON0_OPA1NCH_POSITION                          0x2
#define _OPA1CON0_OPA1NCH_SIZE                              0x2
#define _OPA1CON0_OPA1NCH_LENGTH                            0x2
#define _OPA1CON0_OPA1NCH_MASK                              0xC
#define _OPA1CON0_OPAUGM_POSN                               0x4
#define _OPA1CON0_OPAUGM_POSITION                           0x4
#define _OPA1CON0_OPAUGM_SIZE                               0x1
#define _OPA1CON0_OPAUGM_LENGTH                             0x1
#define _OPA1CON0_OPAUGM_MASK                               0x10
#define _OPA1CON0_OPAEN_POSN                                0x7
#define _OPA1CON0_OPAEN_POSITION                            0x7
#define _OPA1CON0_OPAEN_SIZE                                0x1
#define _OPA1CON0_OPAEN_LENGTH                              0x1
#define _OPA1CON0_OPAEN_MASK                                0x80
#define _OPA1CON0_OPA1PCH0_POSN                             0x0
#define _OPA1CON0_OPA1PCH0_POSITION                         0x0
#define _OPA1CON0_OPA1PCH0_SIZE                             0x1
#define _OPA1CON0_OPA1PCH0_LENGTH                           0x1
#define _OPA1CON0_OPA1PCH0_MASK                             0x1
#define _OPA1CON0_OPA1PCH1_POSN                             0x1
#define _OPA1CON0_OPA1PCH1_POSITION                         0x1
#define _OPA1CON0_OPA1PCH1_SIZE                             0x1
#define _OPA1CON0_OPA1PCH1_LENGTH                           0x1
#define _OPA1CON0_OPA1PCH1_MASK                             0x2
#define _OPA1CON0_OPA1NCH0_POSN                             0x2
#define _OPA1CON0_OPA1NCH0_POSITION                         0x2
#define _OPA1CON0_OPA1NCH0_SIZE                             0x1
#define _OPA1CON0_OPA1NCH0_LENGTH                           0x1
#define _OPA1CON0_OPA1NCH0_MASK                             0x4
#define _OPA1CON0_OPA1NCH1_POSN                             0x3
#define _OPA1CON0_OPA1NCH1_POSITION                         0x3
#define _OPA1CON0_OPA1NCH1_SIZE                             0x1
#define _OPA1CON0_OPA1NCH1_LENGTH                           0x1
#define _OPA1CON0_OPA1NCH1_MASK                             0x8

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x09B);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 09Bh");
#endif
// aliases
extern volatile unsigned char           C2CON0              __at(0x09B);
#ifndef _LIB_BUILD
asm("C2CON0 equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C2SP                   :1;
        unsigned C2ZLF                  :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0x09B);
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
#define _CM2CON0_C2ZLF_POSN                                 0x3
#define _CM2CON0_C2ZLF_POSITION                             0x3
#define _CM2CON0_C2ZLF_SIZE                                 0x1
#define _CM2CON0_C2ZLF_LENGTH                               0x1
#define _CM2CON0_C2ZLF_MASK                                 0x8
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
// alias bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C2SP                   :1;
        unsigned C2ZLF                  :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
} C2CON0bits_t;
extern volatile C2CON0bits_t C2CON0bits __at(0x09B);
// bitfield macros
#define _C2CON0_C2SYNC_POSN                                 0x0
#define _C2CON0_C2SYNC_POSITION                             0x0
#define _C2CON0_C2SYNC_SIZE                                 0x1
#define _C2CON0_C2SYNC_LENGTH                               0x1
#define _C2CON0_C2SYNC_MASK                                 0x1
#define _C2CON0_C2HYS_POSN                                  0x1
#define _C2CON0_C2HYS_POSITION                              0x1
#define _C2CON0_C2HYS_SIZE                                  0x1
#define _C2CON0_C2HYS_LENGTH                                0x1
#define _C2CON0_C2HYS_MASK                                  0x2
#define _C2CON0_C2SP_POSN                                   0x2
#define _C2CON0_C2SP_POSITION                               0x2
#define _C2CON0_C2SP_SIZE                                   0x1
#define _C2CON0_C2SP_LENGTH                                 0x1
#define _C2CON0_C2SP_MASK                                   0x4
#define _C2CON0_C2ZLF_POSN                                  0x3
#define _C2CON0_C2ZLF_POSITION                              0x3
#define _C2CON0_C2ZLF_SIZE                                  0x1
#define _C2CON0_C2ZLF_LENGTH                                0x1
#define _C2CON0_C2ZLF_MASK                                  0x8
#define _C2CON0_C2POL_POSN                                  0x4
#define _C2CON0_C2POL_POSITION                              0x4
#define _C2CON0_C2POL_SIZE                                  0x1
#define _C2CON0_C2POL_LENGTH                                0x1
#define _C2CON0_C2POL_MASK                                  0x10
#define _C2CON0_C2OE_POSN                                   0x5
#define _C2CON0_C2OE_POSITION                               0x5
#define _C2CON0_C2OE_SIZE                                   0x1
#define _C2CON0_C2OE_LENGTH                                 0x1
#define _C2CON0_C2OE_MASK                                   0x20
#define _C2CON0_C2OUT_POSN                                  0x6
#define _C2CON0_C2OUT_POSITION                              0x6
#define _C2CON0_C2OUT_SIZE                                  0x1
#define _C2CON0_C2OUT_LENGTH                                0x1
#define _C2CON0_C2OUT_MASK                                  0x40
#define _C2CON0_C2ON_POSN                                   0x7
#define _C2CON0_C2ON_POSITION                               0x7
#define _C2CON0_C2ON_SIZE                                   0x1
#define _C2CON0_C2ON_LENGTH                                 0x1
#define _C2CON0_C2ON_MASK                                   0x80

// Register: CM2CON1
#define CM2CON1 CM2CON1
extern volatile unsigned char           CM2CON1             __at(0x09C);
#ifndef _LIB_BUILD
asm("CM2CON1 equ 09Ch");
#endif
// aliases
extern volatile unsigned char           C2CON1              __at(0x09C);
#ifndef _LIB_BUILD
asm("C2CON1 equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2NCH                  :3;
        unsigned C2PCH                  :3;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH0                 :1;
        unsigned C2NCH1                 :1;
        unsigned C2NCH2                 :1;
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
        unsigned C2PCH2                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __at(0x09C);
// bitfield macros
#define _CM2CON1_C2NCH_POSN                                 0x0
#define _CM2CON1_C2NCH_POSITION                             0x0
#define _CM2CON1_C2NCH_SIZE                                 0x3
#define _CM2CON1_C2NCH_LENGTH                               0x3
#define _CM2CON1_C2NCH_MASK                                 0x7
#define _CM2CON1_C2PCH_POSN                                 0x3
#define _CM2CON1_C2PCH_POSITION                             0x3
#define _CM2CON1_C2PCH_SIZE                                 0x3
#define _CM2CON1_C2PCH_LENGTH                               0x3
#define _CM2CON1_C2PCH_MASK                                 0x38
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
#define _CM2CON1_C2NCH2_POSN                                0x2
#define _CM2CON1_C2NCH2_POSITION                            0x2
#define _CM2CON1_C2NCH2_SIZE                                0x1
#define _CM2CON1_C2NCH2_LENGTH                              0x1
#define _CM2CON1_C2NCH2_MASK                                0x4
#define _CM2CON1_C2PCH0_POSN                                0x3
#define _CM2CON1_C2PCH0_POSITION                            0x3
#define _CM2CON1_C2PCH0_SIZE                                0x1
#define _CM2CON1_C2PCH0_LENGTH                              0x1
#define _CM2CON1_C2PCH0_MASK                                0x8
#define _CM2CON1_C2PCH1_POSN                                0x4
#define _CM2CON1_C2PCH1_POSITION                            0x4
#define _CM2CON1_C2PCH1_SIZE                                0x1
#define _CM2CON1_C2PCH1_LENGTH                              0x1
#define _CM2CON1_C2PCH1_MASK                                0x10
#define _CM2CON1_C2PCH2_POSN                                0x5
#define _CM2CON1_C2PCH2_POSITION                            0x5
#define _CM2CON1_C2PCH2_SIZE                                0x1
#define _CM2CON1_C2PCH2_LENGTH                              0x1
#define _CM2CON1_C2PCH2_MASK                                0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned C2NCH                  :3;
        unsigned C2PCH                  :3;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH0                 :1;
        unsigned C2NCH1                 :1;
        unsigned C2NCH2                 :1;
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
        unsigned C2PCH2                 :1;
    };
} C2CON1bits_t;
extern volatile C2CON1bits_t C2CON1bits __at(0x09C);
// bitfield macros
#define _C2CON1_C2NCH_POSN                                  0x0
#define _C2CON1_C2NCH_POSITION                              0x0
#define _C2CON1_C2NCH_SIZE                                  0x3
#define _C2CON1_C2NCH_LENGTH                                0x3
#define _C2CON1_C2NCH_MASK                                  0x7
#define _C2CON1_C2PCH_POSN                                  0x3
#define _C2CON1_C2PCH_POSITION                              0x3
#define _C2CON1_C2PCH_SIZE                                  0x3
#define _C2CON1_C2PCH_LENGTH                                0x3
#define _C2CON1_C2PCH_MASK                                  0x38
#define _C2CON1_C2INTN_POSN                                 0x6
#define _C2CON1_C2INTN_POSITION                             0x6
#define _C2CON1_C2INTN_SIZE                                 0x1
#define _C2CON1_C2INTN_LENGTH                               0x1
#define _C2CON1_C2INTN_MASK                                 0x40
#define _C2CON1_C2INTP_POSN                                 0x7
#define _C2CON1_C2INTP_POSITION                             0x7
#define _C2CON1_C2INTP_SIZE                                 0x1
#define _C2CON1_C2INTP_LENGTH                               0x1
#define _C2CON1_C2INTP_MASK                                 0x80
#define _C2CON1_C2NCH0_POSN                                 0x0
#define _C2CON1_C2NCH0_POSITION                             0x0
#define _C2CON1_C2NCH0_SIZE                                 0x1
#define _C2CON1_C2NCH0_LENGTH                               0x1
#define _C2CON1_C2NCH0_MASK                                 0x1
#define _C2CON1_C2NCH1_POSN                                 0x1
#define _C2CON1_C2NCH1_POSITION                             0x1
#define _C2CON1_C2NCH1_SIZE                                 0x1
#define _C2CON1_C2NCH1_LENGTH                               0x1
#define _C2CON1_C2NCH1_MASK                                 0x2
#define _C2CON1_C2NCH2_POSN                                 0x2
#define _C2CON1_C2NCH2_POSITION                             0x2
#define _C2CON1_C2NCH2_SIZE                                 0x1
#define _C2CON1_C2NCH2_LENGTH                               0x1
#define _C2CON1_C2NCH2_MASK                                 0x4
#define _C2CON1_C2PCH0_POSN                                 0x3
#define _C2CON1_C2PCH0_POSITION                             0x3
#define _C2CON1_C2PCH0_SIZE                                 0x1
#define _C2CON1_C2PCH0_LENGTH                               0x1
#define _C2CON1_C2PCH0_MASK                                 0x8
#define _C2CON1_C2PCH1_POSN                                 0x4
#define _C2CON1_C2PCH1_POSITION                             0x4
#define _C2CON1_C2PCH1_SIZE                                 0x1
#define _C2CON1_C2PCH1_LENGTH                               0x1
#define _C2CON1_C2PCH1_MASK                                 0x10
#define _C2CON1_C2PCH2_POSN                                 0x5
#define _C2CON1_C2PCH2_POSITION                             0x5
#define _C2CON1_C2PCH2_SIZE                                 0x1
#define _C2CON1_C2PCH2_LENGTH                               0x1
#define _C2CON1_C2PCH2_MASK                                 0x20

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x09D);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 09Dh");
#endif
// aliases
extern volatile unsigned char           C1CON0              __at(0x09D);
#ifndef _LIB_BUILD
asm("C1CON0 equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1SYNC                 :1;
        unsigned C1HYS                  :1;
        unsigned C1SP                   :1;
        unsigned C1ZLF                  :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x09D);
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
#define _CM1CON0_C1ZLF_POSN                                 0x3
#define _CM1CON0_C1ZLF_POSITION                             0x3
#define _CM1CON0_C1ZLF_SIZE                                 0x1
#define _CM1CON0_C1ZLF_LENGTH                               0x1
#define _CM1CON0_C1ZLF_MASK                                 0x8
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
// alias bitfield definitions
typedef union {
    struct {
        unsigned C1SYNC                 :1;
        unsigned C1HYS                  :1;
        unsigned C1SP                   :1;
        unsigned C1ZLF                  :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} C1CON0bits_t;
extern volatile C1CON0bits_t C1CON0bits __at(0x09D);
// bitfield macros
#define _C1CON0_C1SYNC_POSN                                 0x0
#define _C1CON0_C1SYNC_POSITION                             0x0
#define _C1CON0_C1SYNC_SIZE                                 0x1
#define _C1CON0_C1SYNC_LENGTH                               0x1
#define _C1CON0_C1SYNC_MASK                                 0x1
#define _C1CON0_C1HYS_POSN                                  0x1
#define _C1CON0_C1HYS_POSITION                              0x1
#define _C1CON0_C1HYS_SIZE                                  0x1
#define _C1CON0_C1HYS_LENGTH                                0x1
#define _C1CON0_C1HYS_MASK                                  0x2
#define _C1CON0_C1SP_POSN                                   0x2
#define _C1CON0_C1SP_POSITION                               0x2
#define _C1CON0_C1SP_SIZE                                   0x1
#define _C1CON0_C1SP_LENGTH                                 0x1
#define _C1CON0_C1SP_MASK                                   0x4
#define _C1CON0_C1ZLF_POSN                                  0x3
#define _C1CON0_C1ZLF_POSITION                              0x3
#define _C1CON0_C1ZLF_SIZE                                  0x1
#define _C1CON0_C1ZLF_LENGTH                                0x1
#define _C1CON0_C1ZLF_MASK                                  0x8
#define _C1CON0_C1POL_POSN                                  0x4
#define _C1CON0_C1POL_POSITION                              0x4
#define _C1CON0_C1POL_SIZE                                  0x1
#define _C1CON0_C1POL_LENGTH                                0x1
#define _C1CON0_C1POL_MASK                                  0x10
#define _C1CON0_C1OE_POSN                                   0x5
#define _C1CON0_C1OE_POSITION                               0x5
#define _C1CON0_C1OE_SIZE                                   0x1
#define _C1CON0_C1OE_LENGTH                                 0x1
#define _C1CON0_C1OE_MASK                                   0x20
#define _C1CON0_C1OUT_POSN                                  0x6
#define _C1CON0_C1OUT_POSITION                              0x6
#define _C1CON0_C1OUT_SIZE                                  0x1
#define _C1CON0_C1OUT_LENGTH                                0x1
#define _C1CON0_C1OUT_MASK                                  0x40
#define _C1CON0_C1ON_POSN                                   0x7
#define _C1CON0_C1ON_POSITION                               0x7
#define _C1CON0_C1ON_SIZE                                   0x1
#define _C1CON0_C1ON_LENGTH                                 0x1
#define _C1CON0_C1ON_MASK                                   0x80

// Register: CM1CON1
#define CM1CON1 CM1CON1
extern volatile unsigned char           CM1CON1             __at(0x09E);
#ifndef _LIB_BUILD
asm("CM1CON1 equ 09Eh");
#endif
// aliases
extern volatile unsigned char           C1CON1              __at(0x09E);
#ifndef _LIB_BUILD
asm("C1CON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1NCH                  :3;
        unsigned C1PCH                  :3;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1PCH2                 :1;
    };
} CM1CON1bits_t;
extern volatile CM1CON1bits_t CM1CON1bits __at(0x09E);
// bitfield macros
#define _CM1CON1_C1NCH_POSN                                 0x0
#define _CM1CON1_C1NCH_POSITION                             0x0
#define _CM1CON1_C1NCH_SIZE                                 0x3
#define _CM1CON1_C1NCH_LENGTH                               0x3
#define _CM1CON1_C1NCH_MASK                                 0x7
#define _CM1CON1_C1PCH_POSN                                 0x3
#define _CM1CON1_C1PCH_POSITION                             0x3
#define _CM1CON1_C1PCH_SIZE                                 0x3
#define _CM1CON1_C1PCH_LENGTH                               0x3
#define _CM1CON1_C1PCH_MASK                                 0x38
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
#define _CM1CON1_C1NCH2_POSN                                0x2
#define _CM1CON1_C1NCH2_POSITION                            0x2
#define _CM1CON1_C1NCH2_SIZE                                0x1
#define _CM1CON1_C1NCH2_LENGTH                              0x1
#define _CM1CON1_C1NCH2_MASK                                0x4
#define _CM1CON1_C1PCH0_POSN                                0x3
#define _CM1CON1_C1PCH0_POSITION                            0x3
#define _CM1CON1_C1PCH0_SIZE                                0x1
#define _CM1CON1_C1PCH0_LENGTH                              0x1
#define _CM1CON1_C1PCH0_MASK                                0x8
#define _CM1CON1_C1PCH1_POSN                                0x4
#define _CM1CON1_C1PCH1_POSITION                            0x4
#define _CM1CON1_C1PCH1_SIZE                                0x1
#define _CM1CON1_C1PCH1_LENGTH                              0x1
#define _CM1CON1_C1PCH1_MASK                                0x10
#define _CM1CON1_C1PCH2_POSN                                0x5
#define _CM1CON1_C1PCH2_POSITION                            0x5
#define _CM1CON1_C1PCH2_SIZE                                0x1
#define _CM1CON1_C1PCH2_LENGTH                              0x1
#define _CM1CON1_C1PCH2_MASK                                0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned C1NCH                  :3;
        unsigned C1PCH                  :3;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1PCH2                 :1;
    };
} C1CON1bits_t;
extern volatile C1CON1bits_t C1CON1bits __at(0x09E);
// bitfield macros
#define _C1CON1_C1NCH_POSN                                  0x0
#define _C1CON1_C1NCH_POSITION                              0x0
#define _C1CON1_C1NCH_SIZE                                  0x3
#define _C1CON1_C1NCH_LENGTH                                0x3
#define _C1CON1_C1NCH_MASK                                  0x7
#define _C1CON1_C1PCH_POSN                                  0x3
#define _C1CON1_C1PCH_POSITION                              0x3
#define _C1CON1_C1PCH_SIZE                                  0x3
#define _C1CON1_C1PCH_LENGTH                                0x3
#define _C1CON1_C1PCH_MASK                                  0x38
#define _C1CON1_C1INTN_POSN                                 0x6
#define _C1CON1_C1INTN_POSITION                             0x6
#define _C1CON1_C1INTN_SIZE                                 0x1
#define _C1CON1_C1INTN_LENGTH                               0x1
#define _C1CON1_C1INTN_MASK                                 0x40
#define _C1CON1_C1INTP_POSN                                 0x7
#define _C1CON1_C1INTP_POSITION                             0x7
#define _C1CON1_C1INTP_SIZE                                 0x1
#define _C1CON1_C1INTP_LENGTH                               0x1
#define _C1CON1_C1INTP_MASK                                 0x80
#define _C1CON1_C1NCH0_POSN                                 0x0
#define _C1CON1_C1NCH0_POSITION                             0x0
#define _C1CON1_C1NCH0_SIZE                                 0x1
#define _C1CON1_C1NCH0_LENGTH                               0x1
#define _C1CON1_C1NCH0_MASK                                 0x1
#define _C1CON1_C1NCH1_POSN                                 0x1
#define _C1CON1_C1NCH1_POSITION                             0x1
#define _C1CON1_C1NCH1_SIZE                                 0x1
#define _C1CON1_C1NCH1_LENGTH                               0x1
#define _C1CON1_C1NCH1_MASK                                 0x2
#define _C1CON1_C1NCH2_POSN                                 0x2
#define _C1CON1_C1NCH2_POSITION                             0x2
#define _C1CON1_C1NCH2_SIZE                                 0x1
#define _C1CON1_C1NCH2_LENGTH                               0x1
#define _C1CON1_C1NCH2_MASK                                 0x4
#define _C1CON1_C1PCH0_POSN                                 0x3
#define _C1CON1_C1PCH0_POSITION                             0x3
#define _C1CON1_C1PCH0_SIZE                                 0x1
#define _C1CON1_C1PCH0_LENGTH                               0x1
#define _C1CON1_C1PCH0_MASK                                 0x8
#define _C1CON1_C1PCH1_POSN                                 0x4
#define _C1CON1_C1PCH1_POSITION                             0x4
#define _C1CON1_C1PCH1_SIZE                                 0x1
#define _C1CON1_C1PCH1_LENGTH                               0x1
#define _C1CON1_C1PCH1_MASK                                 0x10
#define _C1CON1_C1PCH2_POSN                                 0x5
#define _C1CON1_C1PCH2_POSITION                             0x5
#define _C1CON1_C1PCH2_SIZE                                 0x1
#define _C1CON1_C1PCH2_LENGTH                               0x1
#define _C1CON1_C1PCH2_MASK                                 0x20

// Register: CMOUT
#define CMOUT CMOUT
extern volatile unsigned char           CMOUT               __at(0x09F);
#ifndef _LIB_BUILD
asm("CMOUT equ 09Fh");
#endif
// aliases
extern volatile unsigned char           MCOUT               __at(0x09F);
#ifndef _LIB_BUILD
asm("MCOUT equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MCOUT1                 :1;
        unsigned MCOUT2                 :1;
    };
} CMOUTbits_t;
extern volatile CMOUTbits_t CMOUTbits __at(0x09F);
// bitfield macros
#define _CMOUT_MCOUT1_POSN                                  0x0
#define _CMOUT_MCOUT1_POSITION                              0x0
#define _CMOUT_MCOUT1_SIZE                                  0x1
#define _CMOUT_MCOUT1_LENGTH                                0x1
#define _CMOUT_MCOUT1_MASK                                  0x1
#define _CMOUT_MCOUT2_POSN                                  0x1
#define _CMOUT_MCOUT2_POSITION                              0x1
#define _CMOUT_MCOUT2_SIZE                                  0x1
#define _CMOUT_MCOUT2_LENGTH                                0x1
#define _CMOUT_MCOUT2_MASK                                  0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned MCOUT1                 :1;
        unsigned MCOUT2                 :1;
    };
} MCOUTbits_t;
extern volatile MCOUTbits_t MCOUTbits __at(0x09F);
// bitfield macros
#define _MCOUT_MCOUT1_POSN                                  0x0
#define _MCOUT_MCOUT1_POSITION                              0x0
#define _MCOUT_MCOUT1_SIZE                                  0x1
#define _MCOUT_MCOUT1_LENGTH                                0x1
#define _MCOUT_MCOUT1_MASK                                  0x1
#define _MCOUT_MCOUT2_POSN                                  0x1
#define _MCOUT_MCOUT2_POSITION                              0x1
#define _MCOUT_MCOUT2_SIZE                                  0x1
#define _MCOUT_MCOUT2_LENGTH                                0x1
#define _MCOUT_MCOUT2_MASK                                  0x2

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x105);
#ifndef _LIB_BUILD
asm("LATA equ 0105h");
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
extern volatile LATAbits_t LATAbits __at(0x105);
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

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0x107);
#ifndef _LIB_BUILD
asm("LATC equ 0107h");
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
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0x107);
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

// Register: IOCAN
#define IOCAN IOCAN
extern volatile unsigned char           IOCAN               __at(0x108);
#ifndef _LIB_BUILD
asm("IOCAN equ 0108h");
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
} IOCANbits_t;
extern volatile IOCANbits_t IOCANbits __at(0x108);
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

// Register: IOCCN
#define IOCCN IOCCN
extern volatile unsigned char           IOCCN               __at(0x109);
#ifndef _LIB_BUILD
asm("IOCCN equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCN0                 :1;
        unsigned IOCCN1                 :1;
        unsigned IOCCN2                 :1;
        unsigned IOCCN3                 :1;
        unsigned IOCCN4                 :1;
        unsigned IOCCN5                 :1;
    };
} IOCCNbits_t;
extern volatile IOCCNbits_t IOCCNbits __at(0x109);
// bitfield macros
#define _IOCCN_IOCCN0_POSN                                  0x0
#define _IOCCN_IOCCN0_POSITION                              0x0
#define _IOCCN_IOCCN0_SIZE                                  0x1
#define _IOCCN_IOCCN0_LENGTH                                0x1
#define _IOCCN_IOCCN0_MASK                                  0x1
#define _IOCCN_IOCCN1_POSN                                  0x1
#define _IOCCN_IOCCN1_POSITION                              0x1
#define _IOCCN_IOCCN1_SIZE                                  0x1
#define _IOCCN_IOCCN1_LENGTH                                0x1
#define _IOCCN_IOCCN1_MASK                                  0x2
#define _IOCCN_IOCCN2_POSN                                  0x2
#define _IOCCN_IOCCN2_POSITION                              0x2
#define _IOCCN_IOCCN2_SIZE                                  0x1
#define _IOCCN_IOCCN2_LENGTH                                0x1
#define _IOCCN_IOCCN2_MASK                                  0x4
#define _IOCCN_IOCCN3_POSN                                  0x3
#define _IOCCN_IOCCN3_POSITION                              0x3
#define _IOCCN_IOCCN3_SIZE                                  0x1
#define _IOCCN_IOCCN3_LENGTH                                0x1
#define _IOCCN_IOCCN3_MASK                                  0x8
#define _IOCCN_IOCCN4_POSN                                  0x4
#define _IOCCN_IOCCN4_POSITION                              0x4
#define _IOCCN_IOCCN4_SIZE                                  0x1
#define _IOCCN_IOCCN4_LENGTH                                0x1
#define _IOCCN_IOCCN4_MASK                                  0x10
#define _IOCCN_IOCCN5_POSN                                  0x5
#define _IOCCN_IOCCN5_POSITION                              0x5
#define _IOCCN_IOCCN5_SIZE                                  0x1
#define _IOCCN_IOCCN5_LENGTH                                0x1
#define _IOCCN_IOCCN5_MASK                                  0x20

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x10C);
#ifndef _LIB_BUILD
asm("WPUA equ 010Ch");
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
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x10C);
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

// Register: WPUC
#define WPUC WPUC
extern volatile unsigned char           WPUC                __at(0x10D);
#ifndef _LIB_BUILD
asm("WPUC equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUC0                  :1;
        unsigned WPUC1                  :1;
        unsigned WPUC2                  :1;
        unsigned WPUC3                  :1;
        unsigned WPUC4                  :1;
        unsigned WPUC5                  :1;
    };
} WPUCbits_t;
extern volatile WPUCbits_t WPUCbits __at(0x10D);
// bitfield macros
#define _WPUC_WPUC0_POSN                                    0x0
#define _WPUC_WPUC0_POSITION                                0x0
#define _WPUC_WPUC0_SIZE                                    0x1
#define _WPUC_WPUC0_LENGTH                                  0x1
#define _WPUC_WPUC0_MASK                                    0x1
#define _WPUC_WPUC1_POSN                                    0x1
#define _WPUC_WPUC1_POSITION                                0x1
#define _WPUC_WPUC1_SIZE                                    0x1
#define _WPUC_WPUC1_LENGTH                                  0x1
#define _WPUC_WPUC1_MASK                                    0x2
#define _WPUC_WPUC2_POSN                                    0x2
#define _WPUC_WPUC2_POSITION                                0x2
#define _WPUC_WPUC2_SIZE                                    0x1
#define _WPUC_WPUC2_LENGTH                                  0x1
#define _WPUC_WPUC2_MASK                                    0x4
#define _WPUC_WPUC3_POSN                                    0x3
#define _WPUC_WPUC3_POSITION                                0x3
#define _WPUC_WPUC3_SIZE                                    0x1
#define _WPUC_WPUC3_LENGTH                                  0x1
#define _WPUC_WPUC3_MASK                                    0x8
#define _WPUC_WPUC4_POSN                                    0x4
#define _WPUC_WPUC4_POSITION                                0x4
#define _WPUC_WPUC4_SIZE                                    0x1
#define _WPUC_WPUC4_LENGTH                                  0x1
#define _WPUC_WPUC4_MASK                                    0x10
#define _WPUC_WPUC5_POSN                                    0x5
#define _WPUC_WPUC5_POSITION                                0x5
#define _WPUC_WPUC5_SIZE                                    0x1
#define _WPUC_WPUC5_LENGTH                                  0x1
#define _WPUC_WPUC5_MASK                                    0x20

// Register: SLRCONC
#define SLRCONC SLRCONC
extern volatile unsigned char           SLRCONC             __at(0x10E);
#ifndef _LIB_BUILD
asm("SLRCONC equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned SLRC4                  :1;
        unsigned SLRC5                  :1;
    };
} SLRCONCbits_t;
extern volatile SLRCONCbits_t SLRCONCbits __at(0x10E);
// bitfield macros
#define _SLRCONC_SLRC4_POSN                                 0x4
#define _SLRCONC_SLRC4_POSITION                             0x4
#define _SLRCONC_SLRC4_SIZE                                 0x1
#define _SLRCONC_SLRC4_LENGTH                               0x1
#define _SLRCONC_SLRC4_MASK                                 0x10
#define _SLRCONC_SLRC5_POSN                                 0x5
#define _SLRCONC_SLRC5_POSITION                             0x5
#define _SLRCONC_SLRC5_SIZE                                 0x1
#define _SLRCONC_SLRC5_LENGTH                               0x1
#define _SLRCONC_SLRC5_MASK                                 0x20

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x10F);
#ifndef _LIB_BUILD
asm("PCON equ 010Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x10F);
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

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x110);
#ifndef _LIB_BUILD
asm("TMR2 equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0x110);
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x111);
#ifndef _LIB_BUILD
asm("PR2 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x111);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x112);
#ifndef _LIB_BUILD
asm("T2CON equ 0112h");
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
extern volatile T2CONbits_t T2CONbits __at(0x112);
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

// Register: HLTMR1
#define HLTMR1 HLTMR1
extern volatile unsigned char           HLTMR1              __at(0x113);
#ifndef _LIB_BUILD
asm("HLTMR1 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLTMR1                 :8;
    };
} HLTMR1bits_t;
extern volatile HLTMR1bits_t HLTMR1bits __at(0x113);
// bitfield macros
#define _HLTMR1_HLTMR1_POSN                                 0x0
#define _HLTMR1_HLTMR1_POSITION                             0x0
#define _HLTMR1_HLTMR1_SIZE                                 0x8
#define _HLTMR1_HLTMR1_LENGTH                               0x8
#define _HLTMR1_HLTMR1_MASK                                 0xFF

// Register: HLTPR1
#define HLTPR1 HLTPR1
extern volatile unsigned char           HLTPR1              __at(0x114);
#ifndef _LIB_BUILD
asm("HLTPR1 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLTPR1                 :8;
    };
} HLTPR1bits_t;
extern volatile HLTPR1bits_t HLTPR1bits __at(0x114);
// bitfield macros
#define _HLTPR1_HLTPR1_POSN                                 0x0
#define _HLTPR1_HLTPR1_POSITION                             0x0
#define _HLTPR1_HLTPR1_SIZE                                 0x8
#define _HLTPR1_HLTPR1_LENGTH                               0x8
#define _HLTPR1_HLTPR1_MASK                                 0xFF

// Register: HLT1CON0
#define HLT1CON0 HLT1CON0
extern volatile unsigned char           HLT1CON0            __at(0x115);
#ifndef _LIB_BUILD
asm("HLT1CON0 equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned H1CKPS                 :2;
        unsigned H1ON                   :1;
        unsigned H1OUTPS                :4;
    };
    struct {
        unsigned H1CKPS0                :1;
        unsigned H1CKPS1                :1;
        unsigned                        :1;
        unsigned H1OUTPS0               :1;
        unsigned H1OUTPS1               :1;
        unsigned H1OUTPS2               :1;
        unsigned H1OUTPS3               :1;
    };
} HLT1CON0bits_t;
extern volatile HLT1CON0bits_t HLT1CON0bits __at(0x115);
// bitfield macros
#define _HLT1CON0_H1CKPS_POSN                               0x0
#define _HLT1CON0_H1CKPS_POSITION                           0x0
#define _HLT1CON0_H1CKPS_SIZE                               0x2
#define _HLT1CON0_H1CKPS_LENGTH                             0x2
#define _HLT1CON0_H1CKPS_MASK                               0x3
#define _HLT1CON0_H1ON_POSN                                 0x2
#define _HLT1CON0_H1ON_POSITION                             0x2
#define _HLT1CON0_H1ON_SIZE                                 0x1
#define _HLT1CON0_H1ON_LENGTH                               0x1
#define _HLT1CON0_H1ON_MASK                                 0x4
#define _HLT1CON0_H1OUTPS_POSN                              0x3
#define _HLT1CON0_H1OUTPS_POSITION                          0x3
#define _HLT1CON0_H1OUTPS_SIZE                              0x4
#define _HLT1CON0_H1OUTPS_LENGTH                            0x4
#define _HLT1CON0_H1OUTPS_MASK                              0x78
#define _HLT1CON0_H1CKPS0_POSN                              0x0
#define _HLT1CON0_H1CKPS0_POSITION                          0x0
#define _HLT1CON0_H1CKPS0_SIZE                              0x1
#define _HLT1CON0_H1CKPS0_LENGTH                            0x1
#define _HLT1CON0_H1CKPS0_MASK                              0x1
#define _HLT1CON0_H1CKPS1_POSN                              0x1
#define _HLT1CON0_H1CKPS1_POSITION                          0x1
#define _HLT1CON0_H1CKPS1_SIZE                              0x1
#define _HLT1CON0_H1CKPS1_LENGTH                            0x1
#define _HLT1CON0_H1CKPS1_MASK                              0x2
#define _HLT1CON0_H1OUTPS0_POSN                             0x3
#define _HLT1CON0_H1OUTPS0_POSITION                         0x3
#define _HLT1CON0_H1OUTPS0_SIZE                             0x1
#define _HLT1CON0_H1OUTPS0_LENGTH                           0x1
#define _HLT1CON0_H1OUTPS0_MASK                             0x8
#define _HLT1CON0_H1OUTPS1_POSN                             0x4
#define _HLT1CON0_H1OUTPS1_POSITION                         0x4
#define _HLT1CON0_H1OUTPS1_SIZE                             0x1
#define _HLT1CON0_H1OUTPS1_LENGTH                           0x1
#define _HLT1CON0_H1OUTPS1_MASK                             0x10
#define _HLT1CON0_H1OUTPS2_POSN                             0x5
#define _HLT1CON0_H1OUTPS2_POSITION                         0x5
#define _HLT1CON0_H1OUTPS2_SIZE                             0x1
#define _HLT1CON0_H1OUTPS2_LENGTH                           0x1
#define _HLT1CON0_H1OUTPS2_MASK                             0x20
#define _HLT1CON0_H1OUTPS3_POSN                             0x6
#define _HLT1CON0_H1OUTPS3_POSITION                         0x6
#define _HLT1CON0_H1OUTPS3_SIZE                             0x1
#define _HLT1CON0_H1OUTPS3_LENGTH                           0x1
#define _HLT1CON0_H1OUTPS3_MASK                             0x40

// Register: HLT1CON1
#define HLT1CON1 HLT1CON1
extern volatile unsigned char           HLT1CON1            __at(0x116);
#ifndef _LIB_BUILD
asm("HLT1CON1 equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned H1REREN                :1;
        unsigned H1FEREN                :1;
        unsigned H1ERS                  :3;
        unsigned                        :1;
        unsigned H1RES                  :1;
        unsigned H1FES                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned H1ERS0                 :1;
        unsigned H1ERS1                 :1;
        unsigned H1ERS2                 :1;
    };
} HLT1CON1bits_t;
extern volatile HLT1CON1bits_t HLT1CON1bits __at(0x116);
// bitfield macros
#define _HLT1CON1_H1REREN_POSN                              0x0
#define _HLT1CON1_H1REREN_POSITION                          0x0
#define _HLT1CON1_H1REREN_SIZE                              0x1
#define _HLT1CON1_H1REREN_LENGTH                            0x1
#define _HLT1CON1_H1REREN_MASK                              0x1
#define _HLT1CON1_H1FEREN_POSN                              0x1
#define _HLT1CON1_H1FEREN_POSITION                          0x1
#define _HLT1CON1_H1FEREN_SIZE                              0x1
#define _HLT1CON1_H1FEREN_LENGTH                            0x1
#define _HLT1CON1_H1FEREN_MASK                              0x2
#define _HLT1CON1_H1ERS_POSN                                0x2
#define _HLT1CON1_H1ERS_POSITION                            0x2
#define _HLT1CON1_H1ERS_SIZE                                0x3
#define _HLT1CON1_H1ERS_LENGTH                              0x3
#define _HLT1CON1_H1ERS_MASK                                0x1C
#define _HLT1CON1_H1RES_POSN                                0x6
#define _HLT1CON1_H1RES_POSITION                            0x6
#define _HLT1CON1_H1RES_SIZE                                0x1
#define _HLT1CON1_H1RES_LENGTH                              0x1
#define _HLT1CON1_H1RES_MASK                                0x40
#define _HLT1CON1_H1FES_POSN                                0x7
#define _HLT1CON1_H1FES_POSITION                            0x7
#define _HLT1CON1_H1FES_SIZE                                0x1
#define _HLT1CON1_H1FES_LENGTH                              0x1
#define _HLT1CON1_H1FES_MASK                                0x80
#define _HLT1CON1_H1ERS0_POSN                               0x2
#define _HLT1CON1_H1ERS0_POSITION                           0x2
#define _HLT1CON1_H1ERS0_SIZE                               0x1
#define _HLT1CON1_H1ERS0_LENGTH                             0x1
#define _HLT1CON1_H1ERS0_MASK                               0x4
#define _HLT1CON1_H1ERS1_POSN                               0x3
#define _HLT1CON1_H1ERS1_POSITION                           0x3
#define _HLT1CON1_H1ERS1_SIZE                               0x1
#define _HLT1CON1_H1ERS1_LENGTH                             0x1
#define _HLT1CON1_H1ERS1_MASK                               0x8
#define _HLT1CON1_H1ERS2_POSN                               0x4
#define _HLT1CON1_H1ERS2_POSITION                           0x4
#define _HLT1CON1_H1ERS2_SIZE                               0x1
#define _HLT1CON1_H1ERS2_LENGTH                             0x1
#define _HLT1CON1_H1ERS2_MASK                               0x10

// Register: HLTMR2
#define HLTMR2 HLTMR2
extern volatile unsigned char           HLTMR2              __at(0x117);
#ifndef _LIB_BUILD
asm("HLTMR2 equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLTMR2                 :8;
    };
} HLTMR2bits_t;
extern volatile HLTMR2bits_t HLTMR2bits __at(0x117);
// bitfield macros
#define _HLTMR2_HLTMR2_POSN                                 0x0
#define _HLTMR2_HLTMR2_POSITION                             0x0
#define _HLTMR2_HLTMR2_SIZE                                 0x8
#define _HLTMR2_HLTMR2_LENGTH                               0x8
#define _HLTMR2_HLTMR2_MASK                                 0xFF

// Register: HLTPR2
#define HLTPR2 HLTPR2
extern volatile unsigned char           HLTPR2              __at(0x118);
#ifndef _LIB_BUILD
asm("HLTPR2 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLTPR2                 :8;
    };
} HLTPR2bits_t;
extern volatile HLTPR2bits_t HLTPR2bits __at(0x118);
// bitfield macros
#define _HLTPR2_HLTPR2_POSN                                 0x0
#define _HLTPR2_HLTPR2_POSITION                             0x0
#define _HLTPR2_HLTPR2_SIZE                                 0x8
#define _HLTPR2_HLTPR2_LENGTH                               0x8
#define _HLTPR2_HLTPR2_MASK                                 0xFF

// Register: HLT2CON0
#define HLT2CON0 HLT2CON0
extern volatile unsigned char           HLT2CON0            __at(0x119);
#ifndef _LIB_BUILD
asm("HLT2CON0 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned H2CKPS                 :2;
        unsigned H2ON                   :1;
        unsigned H2OUTPS                :4;
    };
    struct {
        unsigned H2CKPS0                :1;
        unsigned H2CKPS1                :1;
        unsigned                        :1;
        unsigned H2OUTPS0               :1;
        unsigned H2OUTPS1               :1;
        unsigned H2OUTPS2               :1;
        unsigned H2OUTPS3               :1;
    };
} HLT2CON0bits_t;
extern volatile HLT2CON0bits_t HLT2CON0bits __at(0x119);
// bitfield macros
#define _HLT2CON0_H2CKPS_POSN                               0x0
#define _HLT2CON0_H2CKPS_POSITION                           0x0
#define _HLT2CON0_H2CKPS_SIZE                               0x2
#define _HLT2CON0_H2CKPS_LENGTH                             0x2
#define _HLT2CON0_H2CKPS_MASK                               0x3
#define _HLT2CON0_H2ON_POSN                                 0x2
#define _HLT2CON0_H2ON_POSITION                             0x2
#define _HLT2CON0_H2ON_SIZE                                 0x1
#define _HLT2CON0_H2ON_LENGTH                               0x1
#define _HLT2CON0_H2ON_MASK                                 0x4
#define _HLT2CON0_H2OUTPS_POSN                              0x3
#define _HLT2CON0_H2OUTPS_POSITION                          0x3
#define _HLT2CON0_H2OUTPS_SIZE                              0x4
#define _HLT2CON0_H2OUTPS_LENGTH                            0x4
#define _HLT2CON0_H2OUTPS_MASK                              0x78
#define _HLT2CON0_H2CKPS0_POSN                              0x0
#define _HLT2CON0_H2CKPS0_POSITION                          0x0
#define _HLT2CON0_H2CKPS0_SIZE                              0x1
#define _HLT2CON0_H2CKPS0_LENGTH                            0x1
#define _HLT2CON0_H2CKPS0_MASK                              0x1
#define _HLT2CON0_H2CKPS1_POSN                              0x1
#define _HLT2CON0_H2CKPS1_POSITION                          0x1
#define _HLT2CON0_H2CKPS1_SIZE                              0x1
#define _HLT2CON0_H2CKPS1_LENGTH                            0x1
#define _HLT2CON0_H2CKPS1_MASK                              0x2
#define _HLT2CON0_H2OUTPS0_POSN                             0x3
#define _HLT2CON0_H2OUTPS0_POSITION                         0x3
#define _HLT2CON0_H2OUTPS0_SIZE                             0x1
#define _HLT2CON0_H2OUTPS0_LENGTH                           0x1
#define _HLT2CON0_H2OUTPS0_MASK                             0x8
#define _HLT2CON0_H2OUTPS1_POSN                             0x4
#define _HLT2CON0_H2OUTPS1_POSITION                         0x4
#define _HLT2CON0_H2OUTPS1_SIZE                             0x1
#define _HLT2CON0_H2OUTPS1_LENGTH                           0x1
#define _HLT2CON0_H2OUTPS1_MASK                             0x10
#define _HLT2CON0_H2OUTPS2_POSN                             0x5
#define _HLT2CON0_H2OUTPS2_POSITION                         0x5
#define _HLT2CON0_H2OUTPS2_SIZE                             0x1
#define _HLT2CON0_H2OUTPS2_LENGTH                           0x1
#define _HLT2CON0_H2OUTPS2_MASK                             0x20
#define _HLT2CON0_H2OUTPS3_POSN                             0x6
#define _HLT2CON0_H2OUTPS3_POSITION                         0x6
#define _HLT2CON0_H2OUTPS3_SIZE                             0x1
#define _HLT2CON0_H2OUTPS3_LENGTH                           0x1
#define _HLT2CON0_H2OUTPS3_MASK                             0x40

// Register: HLT2CON1
#define HLT2CON1 HLT2CON1
extern volatile unsigned char           HLT2CON1            __at(0x11A);
#ifndef _LIB_BUILD
asm("HLT2CON1 equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned H2REREN                :1;
        unsigned H2FEREN                :1;
        unsigned H2ERS                  :3;
        unsigned                        :1;
        unsigned H2RES                  :1;
        unsigned H2FES                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned H2ERS0                 :1;
        unsigned H2ERS1                 :1;
        unsigned H2ERS2                 :1;
    };
} HLT2CON1bits_t;
extern volatile HLT2CON1bits_t HLT2CON1bits __at(0x11A);
// bitfield macros
#define _HLT2CON1_H2REREN_POSN                              0x0
#define _HLT2CON1_H2REREN_POSITION                          0x0
#define _HLT2CON1_H2REREN_SIZE                              0x1
#define _HLT2CON1_H2REREN_LENGTH                            0x1
#define _HLT2CON1_H2REREN_MASK                              0x1
#define _HLT2CON1_H2FEREN_POSN                              0x1
#define _HLT2CON1_H2FEREN_POSITION                          0x1
#define _HLT2CON1_H2FEREN_SIZE                              0x1
#define _HLT2CON1_H2FEREN_LENGTH                            0x1
#define _HLT2CON1_H2FEREN_MASK                              0x2
#define _HLT2CON1_H2ERS_POSN                                0x2
#define _HLT2CON1_H2ERS_POSITION                            0x2
#define _HLT2CON1_H2ERS_SIZE                                0x3
#define _HLT2CON1_H2ERS_LENGTH                              0x3
#define _HLT2CON1_H2ERS_MASK                                0x1C
#define _HLT2CON1_H2RES_POSN                                0x6
#define _HLT2CON1_H2RES_POSITION                            0x6
#define _HLT2CON1_H2RES_SIZE                                0x1
#define _HLT2CON1_H2RES_LENGTH                              0x1
#define _HLT2CON1_H2RES_MASK                                0x40
#define _HLT2CON1_H2FES_POSN                                0x7
#define _HLT2CON1_H2FES_POSITION                            0x7
#define _HLT2CON1_H2FES_SIZE                                0x1
#define _HLT2CON1_H2FES_LENGTH                              0x1
#define _HLT2CON1_H2FES_MASK                                0x80
#define _HLT2CON1_H2ERS0_POSN                               0x2
#define _HLT2CON1_H2ERS0_POSITION                           0x2
#define _HLT2CON1_H2ERS0_SIZE                               0x1
#define _HLT2CON1_H2ERS0_LENGTH                             0x1
#define _HLT2CON1_H2ERS0_MASK                               0x4
#define _HLT2CON1_H2ERS1_POSN                               0x3
#define _HLT2CON1_H2ERS1_POSITION                           0x3
#define _HLT2CON1_H2ERS1_SIZE                               0x1
#define _HLT2CON1_H2ERS1_LENGTH                             0x1
#define _HLT2CON1_H2ERS1_MASK                               0x8
#define _HLT2CON1_H2ERS2_POSN                               0x4
#define _HLT2CON1_H2ERS2_POSITION                           0x4
#define _HLT2CON1_H2ERS2_SIZE                               0x1
#define _HLT2CON1_H2ERS2_LENGTH                             0x1
#define _HLT2CON1_H2ERS2_MASK                               0x10

// Register: SLPC1CON0
#define SLPC1CON0 SLPC1CON0
extern volatile unsigned char           SLPC1CON0           __at(0x11E);
#ifndef _LIB_BUILD
asm("SLPC1CON0 equ 011Eh");
#endif
// aliases
extern volatile unsigned char           SLPCCON0            __at(0x11E);
#ifndef _LIB_BUILD
asm("SLPCCON0 equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SC1INS                 :1;
        unsigned                        :1;
        unsigned SC1TSS                 :2;
        unsigned SC1POL                 :1;
        unsigned SC1MRPE                :1;
        unsigned                        :1;
        unsigned SC1EN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned SCS1TSS0               :1;
        unsigned SCS1TSS1               :1;
    };
} SLPC1CON0bits_t;
extern volatile SLPC1CON0bits_t SLPC1CON0bits __at(0x11E);
// bitfield macros
#define _SLPC1CON0_SC1INS_POSN                              0x0
#define _SLPC1CON0_SC1INS_POSITION                          0x0
#define _SLPC1CON0_SC1INS_SIZE                              0x1
#define _SLPC1CON0_SC1INS_LENGTH                            0x1
#define _SLPC1CON0_SC1INS_MASK                              0x1
#define _SLPC1CON0_SC1TSS_POSN                              0x2
#define _SLPC1CON0_SC1TSS_POSITION                          0x2
#define _SLPC1CON0_SC1TSS_SIZE                              0x2
#define _SLPC1CON0_SC1TSS_LENGTH                            0x2
#define _SLPC1CON0_SC1TSS_MASK                              0xC
#define _SLPC1CON0_SC1POL_POSN                              0x4
#define _SLPC1CON0_SC1POL_POSITION                          0x4
#define _SLPC1CON0_SC1POL_SIZE                              0x1
#define _SLPC1CON0_SC1POL_LENGTH                            0x1
#define _SLPC1CON0_SC1POL_MASK                              0x10
#define _SLPC1CON0_SC1MRPE_POSN                             0x5
#define _SLPC1CON0_SC1MRPE_POSITION                         0x5
#define _SLPC1CON0_SC1MRPE_SIZE                             0x1
#define _SLPC1CON0_SC1MRPE_LENGTH                           0x1
#define _SLPC1CON0_SC1MRPE_MASK                             0x20
#define _SLPC1CON0_SC1EN_POSN                               0x7
#define _SLPC1CON0_SC1EN_POSITION                           0x7
#define _SLPC1CON0_SC1EN_SIZE                               0x1
#define _SLPC1CON0_SC1EN_LENGTH                             0x1
#define _SLPC1CON0_SC1EN_MASK                               0x80
#define _SLPC1CON0_SCS1TSS0_POSN                            0x2
#define _SLPC1CON0_SCS1TSS0_POSITION                        0x2
#define _SLPC1CON0_SCS1TSS0_SIZE                            0x1
#define _SLPC1CON0_SCS1TSS0_LENGTH                          0x1
#define _SLPC1CON0_SCS1TSS0_MASK                            0x4
#define _SLPC1CON0_SCS1TSS1_POSN                            0x3
#define _SLPC1CON0_SCS1TSS1_POSITION                        0x3
#define _SLPC1CON0_SCS1TSS1_SIZE                            0x1
#define _SLPC1CON0_SCS1TSS1_LENGTH                          0x1
#define _SLPC1CON0_SCS1TSS1_MASK                            0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned SC1INS                 :1;
        unsigned                        :1;
        unsigned SC1TSS                 :2;
        unsigned SC1POL                 :1;
        unsigned SC1MRPE                :1;
        unsigned                        :1;
        unsigned SC1EN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned SCS1TSS0               :1;
        unsigned SCS1TSS1               :1;
    };
} SLPCCON0bits_t;
extern volatile SLPCCON0bits_t SLPCCON0bits __at(0x11E);
// bitfield macros
#define _SLPCCON0_SC1INS_POSN                               0x0
#define _SLPCCON0_SC1INS_POSITION                           0x0
#define _SLPCCON0_SC1INS_SIZE                               0x1
#define _SLPCCON0_SC1INS_LENGTH                             0x1
#define _SLPCCON0_SC1INS_MASK                               0x1
#define _SLPCCON0_SC1TSS_POSN                               0x2
#define _SLPCCON0_SC1TSS_POSITION                           0x2
#define _SLPCCON0_SC1TSS_SIZE                               0x2
#define _SLPCCON0_SC1TSS_LENGTH                             0x2
#define _SLPCCON0_SC1TSS_MASK                               0xC
#define _SLPCCON0_SC1POL_POSN                               0x4
#define _SLPCCON0_SC1POL_POSITION                           0x4
#define _SLPCCON0_SC1POL_SIZE                               0x1
#define _SLPCCON0_SC1POL_LENGTH                             0x1
#define _SLPCCON0_SC1POL_MASK                               0x10
#define _SLPCCON0_SC1MRPE_POSN                              0x5
#define _SLPCCON0_SC1MRPE_POSITION                          0x5
#define _SLPCCON0_SC1MRPE_SIZE                              0x1
#define _SLPCCON0_SC1MRPE_LENGTH                            0x1
#define _SLPCCON0_SC1MRPE_MASK                              0x20
#define _SLPCCON0_SC1EN_POSN                                0x7
#define _SLPCCON0_SC1EN_POSITION                            0x7
#define _SLPCCON0_SC1EN_SIZE                                0x1
#define _SLPCCON0_SC1EN_LENGTH                              0x1
#define _SLPCCON0_SC1EN_MASK                                0x80
#define _SLPCCON0_SCS1TSS0_POSN                             0x2
#define _SLPCCON0_SCS1TSS0_POSITION                         0x2
#define _SLPCCON0_SCS1TSS0_SIZE                             0x1
#define _SLPCCON0_SCS1TSS0_LENGTH                           0x1
#define _SLPCCON0_SCS1TSS0_MASK                             0x4
#define _SLPCCON0_SCS1TSS1_POSN                             0x3
#define _SLPCCON0_SCS1TSS1_POSITION                         0x3
#define _SLPCCON0_SCS1TSS1_SIZE                             0x1
#define _SLPCCON0_SCS1TSS1_LENGTH                           0x1
#define _SLPCCON0_SCS1TSS1_MASK                             0x8

// Register: SLPC1CON1
#define SLPC1CON1 SLPC1CON1
extern volatile unsigned char           SLPC1CON1           __at(0x11F);
#ifndef _LIB_BUILD
asm("SLPC1CON1 equ 011Fh");
#endif
// aliases
extern volatile unsigned char           SLPCCON1            __at(0x11F);
#ifndef _LIB_BUILD
asm("SLPCCON1 equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SC1ISET                :4;
        unsigned SC1RNG                 :1;
    };
    struct {
        unsigned SC1ISET0               :1;
        unsigned SC1ISET1               :1;
        unsigned SC1ISET2               :1;
        unsigned SC1ISET3               :1;
    };
} SLPC1CON1bits_t;
extern volatile SLPC1CON1bits_t SLPC1CON1bits __at(0x11F);
// bitfield macros
#define _SLPC1CON1_SC1ISET_POSN                             0x0
#define _SLPC1CON1_SC1ISET_POSITION                         0x0
#define _SLPC1CON1_SC1ISET_SIZE                             0x4
#define _SLPC1CON1_SC1ISET_LENGTH                           0x4
#define _SLPC1CON1_SC1ISET_MASK                             0xF
#define _SLPC1CON1_SC1RNG_POSN                              0x4
#define _SLPC1CON1_SC1RNG_POSITION                          0x4
#define _SLPC1CON1_SC1RNG_SIZE                              0x1
#define _SLPC1CON1_SC1RNG_LENGTH                            0x1
#define _SLPC1CON1_SC1RNG_MASK                              0x10
#define _SLPC1CON1_SC1ISET0_POSN                            0x0
#define _SLPC1CON1_SC1ISET0_POSITION                        0x0
#define _SLPC1CON1_SC1ISET0_SIZE                            0x1
#define _SLPC1CON1_SC1ISET0_LENGTH                          0x1
#define _SLPC1CON1_SC1ISET0_MASK                            0x1
#define _SLPC1CON1_SC1ISET1_POSN                            0x1
#define _SLPC1CON1_SC1ISET1_POSITION                        0x1
#define _SLPC1CON1_SC1ISET1_SIZE                            0x1
#define _SLPC1CON1_SC1ISET1_LENGTH                          0x1
#define _SLPC1CON1_SC1ISET1_MASK                            0x2
#define _SLPC1CON1_SC1ISET2_POSN                            0x2
#define _SLPC1CON1_SC1ISET2_POSITION                        0x2
#define _SLPC1CON1_SC1ISET2_SIZE                            0x1
#define _SLPC1CON1_SC1ISET2_LENGTH                          0x1
#define _SLPC1CON1_SC1ISET2_MASK                            0x4
#define _SLPC1CON1_SC1ISET3_POSN                            0x3
#define _SLPC1CON1_SC1ISET3_POSITION                        0x3
#define _SLPC1CON1_SC1ISET3_SIZE                            0x1
#define _SLPC1CON1_SC1ISET3_LENGTH                          0x1
#define _SLPC1CON1_SC1ISET3_MASK                            0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned SC1ISET                :4;
        unsigned SC1RNG                 :1;
    };
    struct {
        unsigned SC1ISET0               :1;
        unsigned SC1ISET1               :1;
        unsigned SC1ISET2               :1;
        unsigned SC1ISET3               :1;
    };
} SLPCCON1bits_t;
extern volatile SLPCCON1bits_t SLPCCON1bits __at(0x11F);
// bitfield macros
#define _SLPCCON1_SC1ISET_POSN                              0x0
#define _SLPCCON1_SC1ISET_POSITION                          0x0
#define _SLPCCON1_SC1ISET_SIZE                              0x4
#define _SLPCCON1_SC1ISET_LENGTH                            0x4
#define _SLPCCON1_SC1ISET_MASK                              0xF
#define _SLPCCON1_SC1RNG_POSN                               0x4
#define _SLPCCON1_SC1RNG_POSITION                           0x4
#define _SLPCCON1_SC1RNG_SIZE                               0x1
#define _SLPCCON1_SC1RNG_LENGTH                             0x1
#define _SLPCCON1_SC1RNG_MASK                               0x10
#define _SLPCCON1_SC1ISET0_POSN                             0x0
#define _SLPCCON1_SC1ISET0_POSITION                         0x0
#define _SLPCCON1_SC1ISET0_SIZE                             0x1
#define _SLPCCON1_SC1ISET0_LENGTH                           0x1
#define _SLPCCON1_SC1ISET0_MASK                             0x1
#define _SLPCCON1_SC1ISET1_POSN                             0x1
#define _SLPCCON1_SC1ISET1_POSITION                         0x1
#define _SLPCCON1_SC1ISET1_SIZE                             0x1
#define _SLPCCON1_SC1ISET1_LENGTH                           0x1
#define _SLPCCON1_SC1ISET1_MASK                             0x2
#define _SLPCCON1_SC1ISET2_POSN                             0x2
#define _SLPCCON1_SC1ISET2_POSITION                         0x2
#define _SLPCCON1_SC1ISET2_SIZE                             0x1
#define _SLPCCON1_SC1ISET2_LENGTH                           0x1
#define _SLPCCON1_SC1ISET2_MASK                             0x4
#define _SLPCCON1_SC1ISET3_POSN                             0x3
#define _SLPCCON1_SC1ISET3_POSITION                         0x3
#define _SLPCCON1_SC1ISET3_SIZE                             0x1
#define _SLPCCON1_SC1ISET3_LENGTH                           0x1
#define _SLPCCON1_SC1ISET3_MASK                             0x8

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x185);
#ifndef _LIB_BUILD
asm("ANSELA equ 0185h");
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
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x185);
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

// Register: ANSELC
#define ANSELC ANSELC
extern volatile unsigned char           ANSELC              __at(0x187);
#ifndef _LIB_BUILD
asm("ANSELC equ 0187h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSC0                  :1;
        unsigned ANSC1                  :1;
        unsigned ANSC2                  :1;
        unsigned ANSC3                  :1;
    };
} ANSELCbits_t;
extern volatile ANSELCbits_t ANSELCbits __at(0x187);
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

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x188);
#ifndef _LIB_BUILD
asm("APFCON equ 0188h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned T1GSEL                 :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x188);
// bitfield macros
#define _APFCON_T1GSEL_POSN                                 0x4
#define _APFCON_T1GSEL_POSITION                             0x4
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x10

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x189);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0189h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :5;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x189);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x5
#define _OSCTUNE_TUN_LENGTH                                 0x5
#define _OSCTUNE_TUN_MASK                                   0x1F
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
        unsigned WR                     :1;
        unsigned WREN                   :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x18C);
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

// Register: PMCON2
#define PMCON2 PMCON2
extern volatile unsigned char           PMCON2              __at(0x18D);
#ifndef _LIB_BUILD
asm("PMCON2 equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMCON2                 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x18D);
// bitfield macros
#define _PMCON2_PMCON2_POSN                                 0x0
#define _PMCON2_PMCON2_POSITION                             0x0
#define _PMCON2_PMCON2_SIZE                                 0x8
#define _PMCON2_PMCON2_LENGTH                               0x8
#define _PMCON2_PMCON2_MASK                                 0xFF

// Register: PMADR
#define PMADR PMADR
extern volatile unsigned short          PMADR               __at(0x18E);
#ifndef _LIB_BUILD
asm("PMADR equ 018Eh");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x18E);
#ifndef _LIB_BUILD
asm("PMADRL equ 018Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRL                 :8;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x18E);
// bitfield macros
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x18F);
#ifndef _LIB_BUILD
asm("PMADRH equ 018Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRH                 :3;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x18F);
// bitfield macros
#define _PMADRH_PMADRH_POSN                                 0x0
#define _PMADRH_PMADRH_POSITION                             0x0
#define _PMADRH_PMADRH_SIZE                                 0x3
#define _PMADRH_PMADRH_LENGTH                               0x3
#define _PMADRH_PMADRH_MASK                                 0x7

// Register: PMDAT
#define PMDAT PMDAT
extern volatile unsigned short          PMDAT               __at(0x190);
#ifndef _LIB_BUILD
asm("PMDAT equ 0190h");
#endif

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x190);
#ifndef _LIB_BUILD
asm("PMDATL equ 0190h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATL                 :8;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x190);
// bitfield macros
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x191);
#ifndef _LIB_BUILD
asm("PMDATH equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATH                 :6;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x191);
// bitfield macros
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F

// Register: COG1PHR
#define COG1PHR COG1PHR
extern volatile unsigned char           COG1PHR             __at(0x192);
#ifndef _LIB_BUILD
asm("COG1PHR equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1PHR                  :4;
    };
    struct {
        unsigned G1PHR0                 :1;
        unsigned G1PHR1                 :1;
        unsigned G1PHR2                 :1;
        unsigned G1PHR3                 :1;
    };
} COG1PHRbits_t;
extern volatile COG1PHRbits_t COG1PHRbits __at(0x192);
// bitfield macros
#define _COG1PHR_G1PHR_POSN                                 0x0
#define _COG1PHR_G1PHR_POSITION                             0x0
#define _COG1PHR_G1PHR_SIZE                                 0x4
#define _COG1PHR_G1PHR_LENGTH                               0x4
#define _COG1PHR_G1PHR_MASK                                 0xF
#define _COG1PHR_G1PHR0_POSN                                0x0
#define _COG1PHR_G1PHR0_POSITION                            0x0
#define _COG1PHR_G1PHR0_SIZE                                0x1
#define _COG1PHR_G1PHR0_LENGTH                              0x1
#define _COG1PHR_G1PHR0_MASK                                0x1
#define _COG1PHR_G1PHR1_POSN                                0x1
#define _COG1PHR_G1PHR1_POSITION                            0x1
#define _COG1PHR_G1PHR1_SIZE                                0x1
#define _COG1PHR_G1PHR1_LENGTH                              0x1
#define _COG1PHR_G1PHR1_MASK                                0x2
#define _COG1PHR_G1PHR2_POSN                                0x2
#define _COG1PHR_G1PHR2_POSITION                            0x2
#define _COG1PHR_G1PHR2_SIZE                                0x1
#define _COG1PHR_G1PHR2_LENGTH                              0x1
#define _COG1PHR_G1PHR2_MASK                                0x4
#define _COG1PHR_G1PHR3_POSN                                0x3
#define _COG1PHR_G1PHR3_POSITION                            0x3
#define _COG1PHR_G1PHR3_SIZE                                0x1
#define _COG1PHR_G1PHR3_LENGTH                              0x1
#define _COG1PHR_G1PHR3_MASK                                0x8

// Register: COG1PHF
#define COG1PHF COG1PHF
extern volatile unsigned char           COG1PHF             __at(0x193);
#ifndef _LIB_BUILD
asm("COG1PHF equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1PHF                  :4;
    };
    struct {
        unsigned G1PHF0                 :1;
        unsigned G1PHF1                 :1;
        unsigned G1PHF2                 :1;
        unsigned G1PHF3                 :1;
    };
} COG1PHFbits_t;
extern volatile COG1PHFbits_t COG1PHFbits __at(0x193);
// bitfield macros
#define _COG1PHF_G1PHF_POSN                                 0x0
#define _COG1PHF_G1PHF_POSITION                             0x0
#define _COG1PHF_G1PHF_SIZE                                 0x4
#define _COG1PHF_G1PHF_LENGTH                               0x4
#define _COG1PHF_G1PHF_MASK                                 0xF
#define _COG1PHF_G1PHF0_POSN                                0x0
#define _COG1PHF_G1PHF0_POSITION                            0x0
#define _COG1PHF_G1PHF0_SIZE                                0x1
#define _COG1PHF_G1PHF0_LENGTH                              0x1
#define _COG1PHF_G1PHF0_MASK                                0x1
#define _COG1PHF_G1PHF1_POSN                                0x1
#define _COG1PHF_G1PHF1_POSITION                            0x1
#define _COG1PHF_G1PHF1_SIZE                                0x1
#define _COG1PHF_G1PHF1_LENGTH                              0x1
#define _COG1PHF_G1PHF1_MASK                                0x2
#define _COG1PHF_G1PHF2_POSN                                0x2
#define _COG1PHF_G1PHF2_POSITION                            0x2
#define _COG1PHF_G1PHF2_SIZE                                0x1
#define _COG1PHF_G1PHF2_LENGTH                              0x1
#define _COG1PHF_G1PHF2_MASK                                0x4
#define _COG1PHF_G1PHF3_POSN                                0x3
#define _COG1PHF_G1PHF3_POSITION                            0x3
#define _COG1PHF_G1PHF3_SIZE                                0x1
#define _COG1PHF_G1PHF3_LENGTH                              0x1
#define _COG1PHF_G1PHF3_MASK                                0x8

// Register: COG1BKR
#define COG1BKR COG1BKR
extern volatile unsigned char           COG1BKR             __at(0x194);
#ifndef _LIB_BUILD
asm("COG1BKR equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1BKR                  :4;
    };
    struct {
        unsigned G1BKR0                 :1;
        unsigned G1BKR1                 :1;
        unsigned G1BKR2                 :1;
        unsigned G1BKR3                 :1;
    };
} COG1BKRbits_t;
extern volatile COG1BKRbits_t COG1BKRbits __at(0x194);
// bitfield macros
#define _COG1BKR_G1BKR_POSN                                 0x0
#define _COG1BKR_G1BKR_POSITION                             0x0
#define _COG1BKR_G1BKR_SIZE                                 0x4
#define _COG1BKR_G1BKR_LENGTH                               0x4
#define _COG1BKR_G1BKR_MASK                                 0xF
#define _COG1BKR_G1BKR0_POSN                                0x0
#define _COG1BKR_G1BKR0_POSITION                            0x0
#define _COG1BKR_G1BKR0_SIZE                                0x1
#define _COG1BKR_G1BKR0_LENGTH                              0x1
#define _COG1BKR_G1BKR0_MASK                                0x1
#define _COG1BKR_G1BKR1_POSN                                0x1
#define _COG1BKR_G1BKR1_POSITION                            0x1
#define _COG1BKR_G1BKR1_SIZE                                0x1
#define _COG1BKR_G1BKR1_LENGTH                              0x1
#define _COG1BKR_G1BKR1_MASK                                0x2
#define _COG1BKR_G1BKR2_POSN                                0x2
#define _COG1BKR_G1BKR2_POSITION                            0x2
#define _COG1BKR_G1BKR2_SIZE                                0x1
#define _COG1BKR_G1BKR2_LENGTH                              0x1
#define _COG1BKR_G1BKR2_MASK                                0x4
#define _COG1BKR_G1BKR3_POSN                                0x3
#define _COG1BKR_G1BKR3_POSITION                            0x3
#define _COG1BKR_G1BKR3_SIZE                                0x1
#define _COG1BKR_G1BKR3_LENGTH                              0x1
#define _COG1BKR_G1BKR3_MASK                                0x8

// Register: COG1BKF
#define COG1BKF COG1BKF
extern volatile unsigned char           COG1BKF             __at(0x195);
#ifndef _LIB_BUILD
asm("COG1BKF equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1BKF                  :4;
    };
    struct {
        unsigned G1BKF0                 :1;
        unsigned G1BKF1                 :1;
        unsigned G1BKF2                 :1;
        unsigned G1BKF3                 :1;
    };
} COG1BKFbits_t;
extern volatile COG1BKFbits_t COG1BKFbits __at(0x195);
// bitfield macros
#define _COG1BKF_G1BKF_POSN                                 0x0
#define _COG1BKF_G1BKF_POSITION                             0x0
#define _COG1BKF_G1BKF_SIZE                                 0x4
#define _COG1BKF_G1BKF_LENGTH                               0x4
#define _COG1BKF_G1BKF_MASK                                 0xF
#define _COG1BKF_G1BKF0_POSN                                0x0
#define _COG1BKF_G1BKF0_POSITION                            0x0
#define _COG1BKF_G1BKF0_SIZE                                0x1
#define _COG1BKF_G1BKF0_LENGTH                              0x1
#define _COG1BKF_G1BKF0_MASK                                0x1
#define _COG1BKF_G1BKF1_POSN                                0x1
#define _COG1BKF_G1BKF1_POSITION                            0x1
#define _COG1BKF_G1BKF1_SIZE                                0x1
#define _COG1BKF_G1BKF1_LENGTH                              0x1
#define _COG1BKF_G1BKF1_MASK                                0x2
#define _COG1BKF_G1BKF2_POSN                                0x2
#define _COG1BKF_G1BKF2_POSITION                            0x2
#define _COG1BKF_G1BKF2_SIZE                                0x1
#define _COG1BKF_G1BKF2_LENGTH                              0x1
#define _COG1BKF_G1BKF2_MASK                                0x4
#define _COG1BKF_G1BKF3_POSN                                0x3
#define _COG1BKF_G1BKF3_POSITION                            0x3
#define _COG1BKF_G1BKF3_SIZE                                0x1
#define _COG1BKF_G1BKF3_LENGTH                              0x1
#define _COG1BKF_G1BKF3_MASK                                0x8

// Register: COG1DBR
#define COG1DBR COG1DBR
extern volatile unsigned char           COG1DBR             __at(0x196);
#ifndef _LIB_BUILD
asm("COG1DBR equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1DBR                  :4;
    };
    struct {
        unsigned G1DBR0                 :1;
        unsigned G1DBR1                 :1;
        unsigned G1DBR2                 :1;
        unsigned G1DBR3                 :1;
    };
} COG1DBRbits_t;
extern volatile COG1DBRbits_t COG1DBRbits __at(0x196);
// bitfield macros
#define _COG1DBR_G1DBR_POSN                                 0x0
#define _COG1DBR_G1DBR_POSITION                             0x0
#define _COG1DBR_G1DBR_SIZE                                 0x4
#define _COG1DBR_G1DBR_LENGTH                               0x4
#define _COG1DBR_G1DBR_MASK                                 0xF
#define _COG1DBR_G1DBR0_POSN                                0x0
#define _COG1DBR_G1DBR0_POSITION                            0x0
#define _COG1DBR_G1DBR0_SIZE                                0x1
#define _COG1DBR_G1DBR0_LENGTH                              0x1
#define _COG1DBR_G1DBR0_MASK                                0x1
#define _COG1DBR_G1DBR1_POSN                                0x1
#define _COG1DBR_G1DBR1_POSITION                            0x1
#define _COG1DBR_G1DBR1_SIZE                                0x1
#define _COG1DBR_G1DBR1_LENGTH                              0x1
#define _COG1DBR_G1DBR1_MASK                                0x2
#define _COG1DBR_G1DBR2_POSN                                0x2
#define _COG1DBR_G1DBR2_POSITION                            0x2
#define _COG1DBR_G1DBR2_SIZE                                0x1
#define _COG1DBR_G1DBR2_LENGTH                              0x1
#define _COG1DBR_G1DBR2_MASK                                0x4
#define _COG1DBR_G1DBR3_POSN                                0x3
#define _COG1DBR_G1DBR3_POSITION                            0x3
#define _COG1DBR_G1DBR3_SIZE                                0x1
#define _COG1DBR_G1DBR3_LENGTH                              0x1
#define _COG1DBR_G1DBR3_MASK                                0x8

// Register: COG1DBF
#define COG1DBF COG1DBF
extern volatile unsigned char           COG1DBF             __at(0x197);
#ifndef _LIB_BUILD
asm("COG1DBF equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1DBF                  :4;
    };
    struct {
        unsigned G1DBF0                 :1;
        unsigned G1DBF1                 :1;
        unsigned G1DBF2                 :1;
        unsigned G1DBF3                 :1;
    };
} COG1DBFbits_t;
extern volatile COG1DBFbits_t COG1DBFbits __at(0x197);
// bitfield macros
#define _COG1DBF_G1DBF_POSN                                 0x0
#define _COG1DBF_G1DBF_POSITION                             0x0
#define _COG1DBF_G1DBF_SIZE                                 0x4
#define _COG1DBF_G1DBF_LENGTH                               0x4
#define _COG1DBF_G1DBF_MASK                                 0xF
#define _COG1DBF_G1DBF0_POSN                                0x0
#define _COG1DBF_G1DBF0_POSITION                            0x0
#define _COG1DBF_G1DBF0_SIZE                                0x1
#define _COG1DBF_G1DBF0_LENGTH                              0x1
#define _COG1DBF_G1DBF0_MASK                                0x1
#define _COG1DBF_G1DBF1_POSN                                0x1
#define _COG1DBF_G1DBF1_POSITION                            0x1
#define _COG1DBF_G1DBF1_SIZE                                0x1
#define _COG1DBF_G1DBF1_LENGTH                              0x1
#define _COG1DBF_G1DBF1_MASK                                0x2
#define _COG1DBF_G1DBF2_POSN                                0x2
#define _COG1DBF_G1DBF2_POSITION                            0x2
#define _COG1DBF_G1DBF2_SIZE                                0x1
#define _COG1DBF_G1DBF2_LENGTH                              0x1
#define _COG1DBF_G1DBF2_MASK                                0x4
#define _COG1DBF_G1DBF3_POSN                                0x3
#define _COG1DBF_G1DBF3_POSITION                            0x3
#define _COG1DBF_G1DBF3_SIZE                                0x1
#define _COG1DBF_G1DBF3_LENGTH                              0x1
#define _COG1DBF_G1DBF3_MASK                                0x8

// Register: COG1CON0
#define COG1CON0 COG1CON0
extern volatile unsigned char           COG1CON0            __at(0x198);
#ifndef _LIB_BUILD
asm("COG1CON0 equ 0198h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1MD                   :1;
        unsigned                        :1;
        unsigned G1LD                   :1;
        unsigned G1POL0                 :1;
        unsigned G1POL1                 :1;
        unsigned G1OE0                  :1;
        unsigned G1OE1                  :1;
        unsigned G1EN                   :1;
    };
} COG1CON0bits_t;
extern volatile COG1CON0bits_t COG1CON0bits __at(0x198);
// bitfield macros
#define _COG1CON0_G1MD_POSN                                 0x0
#define _COG1CON0_G1MD_POSITION                             0x0
#define _COG1CON0_G1MD_SIZE                                 0x1
#define _COG1CON0_G1MD_LENGTH                               0x1
#define _COG1CON0_G1MD_MASK                                 0x1
#define _COG1CON0_G1LD_POSN                                 0x2
#define _COG1CON0_G1LD_POSITION                             0x2
#define _COG1CON0_G1LD_SIZE                                 0x1
#define _COG1CON0_G1LD_LENGTH                               0x1
#define _COG1CON0_G1LD_MASK                                 0x4
#define _COG1CON0_G1POL0_POSN                               0x3
#define _COG1CON0_G1POL0_POSITION                           0x3
#define _COG1CON0_G1POL0_SIZE                               0x1
#define _COG1CON0_G1POL0_LENGTH                             0x1
#define _COG1CON0_G1POL0_MASK                               0x8
#define _COG1CON0_G1POL1_POSN                               0x4
#define _COG1CON0_G1POL1_POSITION                           0x4
#define _COG1CON0_G1POL1_SIZE                               0x1
#define _COG1CON0_G1POL1_LENGTH                             0x1
#define _COG1CON0_G1POL1_MASK                               0x10
#define _COG1CON0_G1OE0_POSN                                0x5
#define _COG1CON0_G1OE0_POSITION                            0x5
#define _COG1CON0_G1OE0_SIZE                                0x1
#define _COG1CON0_G1OE0_LENGTH                              0x1
#define _COG1CON0_G1OE0_MASK                                0x20
#define _COG1CON0_G1OE1_POSN                                0x6
#define _COG1CON0_G1OE1_POSITION                            0x6
#define _COG1CON0_G1OE1_SIZE                                0x1
#define _COG1CON0_G1OE1_LENGTH                              0x1
#define _COG1CON0_G1OE1_MASK                                0x40
#define _COG1CON0_G1EN_POSN                                 0x7
#define _COG1CON0_G1EN_POSITION                             0x7
#define _COG1CON0_G1EN_SIZE                                 0x1
#define _COG1CON0_G1EN_LENGTH                               0x1
#define _COG1CON0_G1EN_MASK                                 0x80

// Register: COG1CON1
#define COG1CON1 COG1CON1
extern volatile unsigned char           COG1CON1            __at(0x199);
#ifndef _LIB_BUILD
asm("COG1CON1 equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1CS                   :2;
        unsigned                        :4;
        unsigned G1FDBTS                :1;
        unsigned G1RDBTS                :1;
    };
    struct {
        unsigned G1CS0                  :1;
        unsigned G1CS1                  :1;
    };
} COG1CON1bits_t;
extern volatile COG1CON1bits_t COG1CON1bits __at(0x199);
// bitfield macros
#define _COG1CON1_G1CS_POSN                                 0x0
#define _COG1CON1_G1CS_POSITION                             0x0
#define _COG1CON1_G1CS_SIZE                                 0x2
#define _COG1CON1_G1CS_LENGTH                               0x2
#define _COG1CON1_G1CS_MASK                                 0x3
#define _COG1CON1_G1FDBTS_POSN                              0x6
#define _COG1CON1_G1FDBTS_POSITION                          0x6
#define _COG1CON1_G1FDBTS_SIZE                              0x1
#define _COG1CON1_G1FDBTS_LENGTH                            0x1
#define _COG1CON1_G1FDBTS_MASK                              0x40
#define _COG1CON1_G1RDBTS_POSN                              0x7
#define _COG1CON1_G1RDBTS_POSITION                          0x7
#define _COG1CON1_G1RDBTS_SIZE                              0x1
#define _COG1CON1_G1RDBTS_LENGTH                            0x1
#define _COG1CON1_G1RDBTS_MASK                              0x80
#define _COG1CON1_G1CS0_POSN                                0x0
#define _COG1CON1_G1CS0_POSITION                            0x0
#define _COG1CON1_G1CS0_SIZE                                0x1
#define _COG1CON1_G1CS0_LENGTH                              0x1
#define _COG1CON1_G1CS0_MASK                                0x1
#define _COG1CON1_G1CS1_POSN                                0x1
#define _COG1CON1_G1CS1_POSITION                            0x1
#define _COG1CON1_G1CS1_SIZE                                0x1
#define _COG1CON1_G1CS1_LENGTH                              0x1
#define _COG1CON1_G1CS1_MASK                                0x2

// Register: COG1RIS
#define COG1RIS COG1RIS
extern volatile unsigned char           COG1RIS             __at(0x19A);
#ifndef _LIB_BUILD
asm("COG1RIS equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1RIC1                 :1;
        unsigned G1RIC2                 :1;
        unsigned C1RICCP1               :1;
        unsigned G1RIFLT                :1;
        unsigned G1RIT2M                :1;
        unsigned G1R1HLT1               :1;
        unsigned G1RIHLT2               :1;
    };
} COG1RISbits_t;
extern volatile COG1RISbits_t COG1RISbits __at(0x19A);
// bitfield macros
#define _COG1RIS_G1RIC1_POSN                                0x0
#define _COG1RIS_G1RIC1_POSITION                            0x0
#define _COG1RIS_G1RIC1_SIZE                                0x1
#define _COG1RIS_G1RIC1_LENGTH                              0x1
#define _COG1RIS_G1RIC1_MASK                                0x1
#define _COG1RIS_G1RIC2_POSN                                0x1
#define _COG1RIS_G1RIC2_POSITION                            0x1
#define _COG1RIS_G1RIC2_SIZE                                0x1
#define _COG1RIS_G1RIC2_LENGTH                              0x1
#define _COG1RIS_G1RIC2_MASK                                0x2
#define _COG1RIS_C1RICCP1_POSN                              0x2
#define _COG1RIS_C1RICCP1_POSITION                          0x2
#define _COG1RIS_C1RICCP1_SIZE                              0x1
#define _COG1RIS_C1RICCP1_LENGTH                            0x1
#define _COG1RIS_C1RICCP1_MASK                              0x4
#define _COG1RIS_G1RIFLT_POSN                               0x3
#define _COG1RIS_G1RIFLT_POSITION                           0x3
#define _COG1RIS_G1RIFLT_SIZE                               0x1
#define _COG1RIS_G1RIFLT_LENGTH                             0x1
#define _COG1RIS_G1RIFLT_MASK                               0x8
#define _COG1RIS_G1RIT2M_POSN                               0x4
#define _COG1RIS_G1RIT2M_POSITION                           0x4
#define _COG1RIS_G1RIT2M_SIZE                               0x1
#define _COG1RIS_G1RIT2M_LENGTH                             0x1
#define _COG1RIS_G1RIT2M_MASK                               0x10
#define _COG1RIS_G1R1HLT1_POSN                              0x5
#define _COG1RIS_G1R1HLT1_POSITION                          0x5
#define _COG1RIS_G1R1HLT1_SIZE                              0x1
#define _COG1RIS_G1R1HLT1_LENGTH                            0x1
#define _COG1RIS_G1R1HLT1_MASK                              0x20
#define _COG1RIS_G1RIHLT2_POSN                              0x6
#define _COG1RIS_G1RIHLT2_POSITION                          0x6
#define _COG1RIS_G1RIHLT2_SIZE                              0x1
#define _COG1RIS_G1RIHLT2_LENGTH                            0x1
#define _COG1RIS_G1RIHLT2_MASK                              0x40

// Register: COG1RSIM
#define COG1RSIM COG1RSIM
extern volatile unsigned char           COG1RSIM            __at(0x19B);
#ifndef _LIB_BUILD
asm("COG1RSIM equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1RMC1                 :1;
        unsigned G1RMC2                 :1;
        unsigned G1RMCCP1               :1;
        unsigned G1RMFLT                :1;
        unsigned G1RTM2M                :1;
        unsigned G1RMHLT1               :1;
        unsigned G1RMHLT2               :1;
    };
} COG1RSIMbits_t;
extern volatile COG1RSIMbits_t COG1RSIMbits __at(0x19B);
// bitfield macros
#define _COG1RSIM_G1RMC1_POSN                               0x0
#define _COG1RSIM_G1RMC1_POSITION                           0x0
#define _COG1RSIM_G1RMC1_SIZE                               0x1
#define _COG1RSIM_G1RMC1_LENGTH                             0x1
#define _COG1RSIM_G1RMC1_MASK                               0x1
#define _COG1RSIM_G1RMC2_POSN                               0x1
#define _COG1RSIM_G1RMC2_POSITION                           0x1
#define _COG1RSIM_G1RMC2_SIZE                               0x1
#define _COG1RSIM_G1RMC2_LENGTH                             0x1
#define _COG1RSIM_G1RMC2_MASK                               0x2
#define _COG1RSIM_G1RMCCP1_POSN                             0x2
#define _COG1RSIM_G1RMCCP1_POSITION                         0x2
#define _COG1RSIM_G1RMCCP1_SIZE                             0x1
#define _COG1RSIM_G1RMCCP1_LENGTH                           0x1
#define _COG1RSIM_G1RMCCP1_MASK                             0x4
#define _COG1RSIM_G1RMFLT_POSN                              0x3
#define _COG1RSIM_G1RMFLT_POSITION                          0x3
#define _COG1RSIM_G1RMFLT_SIZE                              0x1
#define _COG1RSIM_G1RMFLT_LENGTH                            0x1
#define _COG1RSIM_G1RMFLT_MASK                              0x8
#define _COG1RSIM_G1RTM2M_POSN                              0x4
#define _COG1RSIM_G1RTM2M_POSITION                          0x4
#define _COG1RSIM_G1RTM2M_SIZE                              0x1
#define _COG1RSIM_G1RTM2M_LENGTH                            0x1
#define _COG1RSIM_G1RTM2M_MASK                              0x10
#define _COG1RSIM_G1RMHLT1_POSN                             0x5
#define _COG1RSIM_G1RMHLT1_POSITION                         0x5
#define _COG1RSIM_G1RMHLT1_SIZE                             0x1
#define _COG1RSIM_G1RMHLT1_LENGTH                           0x1
#define _COG1RSIM_G1RMHLT1_MASK                             0x20
#define _COG1RSIM_G1RMHLT2_POSN                             0x6
#define _COG1RSIM_G1RMHLT2_POSITION                         0x6
#define _COG1RSIM_G1RMHLT2_SIZE                             0x1
#define _COG1RSIM_G1RMHLT2_LENGTH                           0x1
#define _COG1RSIM_G1RMHLT2_MASK                             0x40

// Register: COG1FIS
#define COG1FIS COG1FIS
extern volatile unsigned char           COG1FIS             __at(0x19C);
#ifndef _LIB_BUILD
asm("COG1FIS equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1FIC1                 :1;
        unsigned G1FIC2                 :1;
        unsigned G1FICCP1               :1;
        unsigned G1FIFLT                :1;
        unsigned G1FIT2M                :1;
        unsigned G1FIHLT1               :1;
        unsigned G1FIHLT2               :1;
    };
} COG1FISbits_t;
extern volatile COG1FISbits_t COG1FISbits __at(0x19C);
// bitfield macros
#define _COG1FIS_G1FIC1_POSN                                0x0
#define _COG1FIS_G1FIC1_POSITION                            0x0
#define _COG1FIS_G1FIC1_SIZE                                0x1
#define _COG1FIS_G1FIC1_LENGTH                              0x1
#define _COG1FIS_G1FIC1_MASK                                0x1
#define _COG1FIS_G1FIC2_POSN                                0x1
#define _COG1FIS_G1FIC2_POSITION                            0x1
#define _COG1FIS_G1FIC2_SIZE                                0x1
#define _COG1FIS_G1FIC2_LENGTH                              0x1
#define _COG1FIS_G1FIC2_MASK                                0x2
#define _COG1FIS_G1FICCP1_POSN                              0x2
#define _COG1FIS_G1FICCP1_POSITION                          0x2
#define _COG1FIS_G1FICCP1_SIZE                              0x1
#define _COG1FIS_G1FICCP1_LENGTH                            0x1
#define _COG1FIS_G1FICCP1_MASK                              0x4
#define _COG1FIS_G1FIFLT_POSN                               0x3
#define _COG1FIS_G1FIFLT_POSITION                           0x3
#define _COG1FIS_G1FIFLT_SIZE                               0x1
#define _COG1FIS_G1FIFLT_LENGTH                             0x1
#define _COG1FIS_G1FIFLT_MASK                               0x8
#define _COG1FIS_G1FIT2M_POSN                               0x4
#define _COG1FIS_G1FIT2M_POSITION                           0x4
#define _COG1FIS_G1FIT2M_SIZE                               0x1
#define _COG1FIS_G1FIT2M_LENGTH                             0x1
#define _COG1FIS_G1FIT2M_MASK                               0x10
#define _COG1FIS_G1FIHLT1_POSN                              0x5
#define _COG1FIS_G1FIHLT1_POSITION                          0x5
#define _COG1FIS_G1FIHLT1_SIZE                              0x1
#define _COG1FIS_G1FIHLT1_LENGTH                            0x1
#define _COG1FIS_G1FIHLT1_MASK                              0x20
#define _COG1FIS_G1FIHLT2_POSN                              0x6
#define _COG1FIS_G1FIHLT2_POSITION                          0x6
#define _COG1FIS_G1FIHLT2_SIZE                              0x1
#define _COG1FIS_G1FIHLT2_LENGTH                            0x1
#define _COG1FIS_G1FIHLT2_MASK                              0x40

// Register: COG1FSIM
#define COG1FSIM COG1FSIM
extern volatile unsigned char           COG1FSIM            __at(0x19D);
#ifndef _LIB_BUILD
asm("COG1FSIM equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1FMC1                 :1;
        unsigned G1FMC2                 :1;
        unsigned G1FMCCP1               :1;
        unsigned G1FMFLT                :1;
        unsigned G1FMT2M                :1;
        unsigned G1FMHLT1               :1;
        unsigned G1FMHLT2               :1;
    };
} COG1FSIMbits_t;
extern volatile COG1FSIMbits_t COG1FSIMbits __at(0x19D);
// bitfield macros
#define _COG1FSIM_G1FMC1_POSN                               0x0
#define _COG1FSIM_G1FMC1_POSITION                           0x0
#define _COG1FSIM_G1FMC1_SIZE                               0x1
#define _COG1FSIM_G1FMC1_LENGTH                             0x1
#define _COG1FSIM_G1FMC1_MASK                               0x1
#define _COG1FSIM_G1FMC2_POSN                               0x1
#define _COG1FSIM_G1FMC2_POSITION                           0x1
#define _COG1FSIM_G1FMC2_SIZE                               0x1
#define _COG1FSIM_G1FMC2_LENGTH                             0x1
#define _COG1FSIM_G1FMC2_MASK                               0x2
#define _COG1FSIM_G1FMCCP1_POSN                             0x2
#define _COG1FSIM_G1FMCCP1_POSITION                         0x2
#define _COG1FSIM_G1FMCCP1_SIZE                             0x1
#define _COG1FSIM_G1FMCCP1_LENGTH                           0x1
#define _COG1FSIM_G1FMCCP1_MASK                             0x4
#define _COG1FSIM_G1FMFLT_POSN                              0x3
#define _COG1FSIM_G1FMFLT_POSITION                          0x3
#define _COG1FSIM_G1FMFLT_SIZE                              0x1
#define _COG1FSIM_G1FMFLT_LENGTH                            0x1
#define _COG1FSIM_G1FMFLT_MASK                              0x8
#define _COG1FSIM_G1FMT2M_POSN                              0x4
#define _COG1FSIM_G1FMT2M_POSITION                          0x4
#define _COG1FSIM_G1FMT2M_SIZE                              0x1
#define _COG1FSIM_G1FMT2M_LENGTH                            0x1
#define _COG1FSIM_G1FMT2M_MASK                              0x10
#define _COG1FSIM_G1FMHLT1_POSN                             0x5
#define _COG1FSIM_G1FMHLT1_POSITION                         0x5
#define _COG1FSIM_G1FMHLT1_SIZE                             0x1
#define _COG1FSIM_G1FMHLT1_LENGTH                           0x1
#define _COG1FSIM_G1FMHLT1_MASK                             0x20
#define _COG1FSIM_G1FMHLT2_POSN                             0x6
#define _COG1FSIM_G1FMHLT2_POSITION                         0x6
#define _COG1FSIM_G1FMHLT2_SIZE                             0x1
#define _COG1FSIM_G1FMHLT2_LENGTH                           0x1
#define _COG1FSIM_G1FMHLT2_MASK                             0x40

// Register: COG1ASD0
#define COG1ASD0 COG1ASD0
extern volatile unsigned char           COG1ASD0            __at(0x19E);
#ifndef _LIB_BUILD
asm("COG1ASD0 equ 019Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned G1ASD0L                :2;
        unsigned G1ASD1L                :2;
        unsigned G1ARSEN                :1;
        unsigned G1ASDE                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned G1ASD0L0               :1;
        unsigned G1ASD0L1               :1;
        unsigned G1ASD1L0               :1;
        unsigned G1ASD1L1               :1;
    };
} COG1ASD0bits_t;
extern volatile COG1ASD0bits_t COG1ASD0bits __at(0x19E);
// bitfield macros
#define _COG1ASD0_G1ASD0L_POSN                              0x2
#define _COG1ASD0_G1ASD0L_POSITION                          0x2
#define _COG1ASD0_G1ASD0L_SIZE                              0x2
#define _COG1ASD0_G1ASD0L_LENGTH                            0x2
#define _COG1ASD0_G1ASD0L_MASK                              0xC
#define _COG1ASD0_G1ASD1L_POSN                              0x4
#define _COG1ASD0_G1ASD1L_POSITION                          0x4
#define _COG1ASD0_G1ASD1L_SIZE                              0x2
#define _COG1ASD0_G1ASD1L_LENGTH                            0x2
#define _COG1ASD0_G1ASD1L_MASK                              0x30
#define _COG1ASD0_G1ARSEN_POSN                              0x6
#define _COG1ASD0_G1ARSEN_POSITION                          0x6
#define _COG1ASD0_G1ARSEN_SIZE                              0x1
#define _COG1ASD0_G1ARSEN_LENGTH                            0x1
#define _COG1ASD0_G1ARSEN_MASK                              0x40
#define _COG1ASD0_G1ASDE_POSN                               0x7
#define _COG1ASD0_G1ASDE_POSITION                           0x7
#define _COG1ASD0_G1ASDE_SIZE                               0x1
#define _COG1ASD0_G1ASDE_LENGTH                             0x1
#define _COG1ASD0_G1ASDE_MASK                               0x80
#define _COG1ASD0_G1ASD0L0_POSN                             0x2
#define _COG1ASD0_G1ASD0L0_POSITION                         0x2
#define _COG1ASD0_G1ASD0L0_SIZE                             0x1
#define _COG1ASD0_G1ASD0L0_LENGTH                           0x1
#define _COG1ASD0_G1ASD0L0_MASK                             0x4
#define _COG1ASD0_G1ASD0L1_POSN                             0x3
#define _COG1ASD0_G1ASD0L1_POSITION                         0x3
#define _COG1ASD0_G1ASD0L1_SIZE                             0x1
#define _COG1ASD0_G1ASD0L1_LENGTH                           0x1
#define _COG1ASD0_G1ASD0L1_MASK                             0x8
#define _COG1ASD0_G1ASD1L0_POSN                             0x4
#define _COG1ASD0_G1ASD1L0_POSITION                         0x4
#define _COG1ASD0_G1ASD1L0_SIZE                             0x1
#define _COG1ASD0_G1ASD1L0_LENGTH                           0x1
#define _COG1ASD0_G1ASD1L0_MASK                             0x10
#define _COG1ASD0_G1ASD1L1_POSN                             0x5
#define _COG1ASD0_G1ASD1L1_POSITION                         0x5
#define _COG1ASD0_G1ASD1L1_SIZE                             0x1
#define _COG1ASD0_G1ASD1L1_LENGTH                           0x1
#define _COG1ASD0_G1ASD1L1_MASK                             0x20

// Register: COG1ASD1
#define COG1ASD1 COG1ASD1
extern volatile unsigned char           COG1ASD1            __at(0x19F);
#ifndef _LIB_BUILD
asm("COG1ASD1 equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1ASDSFLT              :1;
        unsigned G1ASDSC1               :1;
        unsigned G1ASDSC2               :1;
        unsigned G1ASDSHLT1             :1;
        unsigned G1ASDSHLT2             :1;
    };
} COG1ASD1bits_t;
extern volatile COG1ASD1bits_t COG1ASD1bits __at(0x19F);
// bitfield macros
#define _COG1ASD1_G1ASDSFLT_POSN                            0x0
#define _COG1ASD1_G1ASDSFLT_POSITION                        0x0
#define _COG1ASD1_G1ASDSFLT_SIZE                            0x1
#define _COG1ASD1_G1ASDSFLT_LENGTH                          0x1
#define _COG1ASD1_G1ASDSFLT_MASK                            0x1
#define _COG1ASD1_G1ASDSC1_POSN                             0x1
#define _COG1ASD1_G1ASDSC1_POSITION                         0x1
#define _COG1ASD1_G1ASDSC1_SIZE                             0x1
#define _COG1ASD1_G1ASDSC1_LENGTH                           0x1
#define _COG1ASD1_G1ASDSC1_MASK                             0x2
#define _COG1ASD1_G1ASDSC2_POSN                             0x2
#define _COG1ASD1_G1ASDSC2_POSITION                         0x2
#define _COG1ASD1_G1ASDSC2_SIZE                             0x1
#define _COG1ASD1_G1ASDSC2_LENGTH                           0x1
#define _COG1ASD1_G1ASDSC2_MASK                             0x4
#define _COG1ASD1_G1ASDSHLT1_POSN                           0x3
#define _COG1ASD1_G1ASDSHLT1_POSITION                       0x3
#define _COG1ASD1_G1ASDSHLT1_SIZE                           0x1
#define _COG1ASD1_G1ASDSHLT1_LENGTH                         0x1
#define _COG1ASD1_G1ASDSHLT1_MASK                           0x8
#define _COG1ASD1_G1ASDSHLT2_POSN                           0x4
#define _COG1ASD1_G1ASDSHLT2_POSITION                       0x4
#define _COG1ASD1_G1ASDSHLT2_SIZE                           0x1
#define _COG1ASD1_G1ASDSHLT2_LENGTH                         0x1
#define _COG1ASD1_G1ASDSHLT2_MASK                           0x10

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
extern volatile __bit                   ADCS0               __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// ADCON0<ADFM>
extern volatile __bit                   ADFM                __at(0xF7);	// @ (0x1E * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON0,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF0);	// @ (0x1E * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON1<ADPREF1>
extern volatile __bit                   ADPREF1             __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADPREF1_bit         _BIT_ACCESS(ADCON1,0)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC28);	// @ (0x185 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC29);	// @ (0x185 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC2A);	// @ (0x185 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC2C);	// @ (0x185 * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELC<ANSC0>
extern volatile __bit                   ANSC0               __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 ANSC0_bit           _BIT_ACCESS(ANSELC,0)
// ANSELC<ANSC1>
extern volatile __bit                   ANSC1               __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 ANSC1_bit           _BIT_ACCESS(ANSELC,1)
// ANSELC<ANSC2>
extern volatile __bit                   ANSC2               __at(0xC3A);	// @ (0x187 * 8 + 2)
#define                                 ANSC2_bit           _BIT_ACCESS(ANSELC,2)
// ANSELC<ANSC3>
extern volatile __bit                   ANSC3               __at(0xC3B);	// @ (0x187 * 8 + 3)
#define                                 ANSC3_bit           _BIT_ACCESS(ANSELC,3)
// CM1CON0<C1HYS>
extern volatile __bit                   C1HYS               __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 C1HYS_bit           _BIT_ACCESS(CM1CON0,1)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,4)
// CM1CON1<C1INTN>
extern volatile __bit                   C1INTN              __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 C1INTN_bit          _BIT_ACCESS(CM1CON1,6)
// CM1CON1<C1INTP>
extern volatile __bit                   C1INTP              __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 C1INTP_bit          _BIT_ACCESS(CM1CON1,7)
// CM1CON1<C1NCH0>
extern volatile __bit                   C1NCH0              __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 C1NCH0_bit          _BIT_ACCESS(CM1CON1,0)
// CM1CON1<C1NCH1>
extern volatile __bit                   C1NCH1              __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 C1NCH1_bit          _BIT_ACCESS(CM1CON1,1)
// CM1CON1<C1NCH2>
extern volatile __bit                   C1NCH2              __at(0x4F2);	// @ (0x9E * 8 + 2)
#define                                 C1NCH2_bit          _BIT_ACCESS(CM1CON1,2)
// CM1CON0<C1OE>
extern volatile __bit                   C1OE                __at(0x4ED);	// @ (0x9D * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x4EE);	// @ (0x9D * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON1<C1PCH0>
extern volatile __bit                   C1PCH0              __at(0x4F3);	// @ (0x9E * 8 + 3)
#define                                 C1PCH0_bit          _BIT_ACCESS(CM1CON1,3)
// CM1CON1<C1PCH1>
extern volatile __bit                   C1PCH1              __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 C1PCH1_bit          _BIT_ACCESS(CM1CON1,4)
// CM1CON1<C1PCH2>
extern volatile __bit                   C1PCH2              __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 C1PCH2_bit          _BIT_ACCESS(CM1CON1,5)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x4EC);	// @ (0x9D * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// COG1RIS<C1RICCP1>
extern volatile __bit                   C1RICCP1            __at(0xCD2);	// @ (0x19A * 8 + 2)
#define                                 C1RICCP1_bit        _BIT_ACCESS(COG1RIS,2)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM1CON0,0)
// CM1CON0<C1ZLF>
extern volatile __bit                   C1ZLF               __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 C1ZLF_bit           _BIT_ACCESS(CM1CON0,3)
// CM2CON0<C2HYS>
extern volatile __bit                   C2HYS               __at(0x4D9);	// @ (0x9B * 8 + 1)
#define                                 C2HYS_bit           _BIT_ACCESS(CM2CON0,1)
// PIE2<C2IE>
extern volatile __bit                   C2IE                __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 C2IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C2IF>
extern volatile __bit                   C2IF                __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 C2IF_bit            _BIT_ACCESS(PIR2,5)
// CM2CON1<C2INTN>
extern volatile __bit                   C2INTN              __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 C2INTN_bit          _BIT_ACCESS(CM2CON1,6)
// CM2CON1<C2INTP>
extern volatile __bit                   C2INTP              __at(0x4E7);	// @ (0x9C * 8 + 7)
#define                                 C2INTP_bit          _BIT_ACCESS(CM2CON1,7)
// CM2CON1<C2NCH0>
extern volatile __bit                   C2NCH0              __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 C2NCH0_bit          _BIT_ACCESS(CM2CON1,0)
// CM2CON1<C2NCH1>
extern volatile __bit                   C2NCH1              __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 C2NCH1_bit          _BIT_ACCESS(CM2CON1,1)
// CM2CON1<C2NCH2>
extern volatile __bit                   C2NCH2              __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 C2NCH2_bit          _BIT_ACCESS(CM2CON1,2)
// CM2CON0<C2OE>
extern volatile __bit                   C2OE                __at(0x4DD);	// @ (0x9B * 8 + 5)
#define                                 C2OE_bit            _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x4DF);	// @ (0x9B * 8 + 7)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x4DE);	// @ (0x9B * 8 + 6)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,6)
// CM2CON1<C2PCH0>
extern volatile __bit                   C2PCH0              __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 C2PCH0_bit          _BIT_ACCESS(CM2CON1,3)
// CM2CON1<C2PCH1>
extern volatile __bit                   C2PCH1              __at(0x4E4);	// @ (0x9C * 8 + 4)
#define                                 C2PCH1_bit          _BIT_ACCESS(CM2CON1,4)
// CM2CON1<C2PCH2>
extern volatile __bit                   C2PCH2              __at(0x4E5);	// @ (0x9C * 8 + 5)
#define                                 C2PCH2_bit          _BIT_ACCESS(CM2CON1,5)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x4DC);	// @ (0x9B * 8 + 4)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,4)
// CM2CON0<C2SP>
extern volatile __bit                   C2SP                __at(0x4DA);	// @ (0x9B * 8 + 2)
#define                                 C2SP_bit            _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2SYNC>
extern volatile __bit                   C2SYNC              __at(0x4D8);	// @ (0x9B * 8 + 0)
#define                                 C2SYNC_bit          _BIT_ACCESS(CM2CON0,0)
// CM2CON0<C2ZLF>
extern volatile __bit                   C2ZLF               __at(0x4DB);	// @ (0x9B * 8 + 3)
#define                                 C2ZLF_bit           _BIT_ACCESS(CM2CON0,3)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE2<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x468);	// @ (0x8D * 8 + 0)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x68);	// @ (0xD * 8 + 0)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR2,0)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0xA8);	// @ (0x15 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0xA9);	// @ (0x15 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0xAA);	// @ (0x15 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0xAB);	// @ (0x15 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xF2);	// @ (0x1E * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xF3);	// @ (0x1E * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xF4);	// @ (0x1E * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0xF5);	// @ (0x1E * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// PIE2<COG1IE>
extern volatile __bit                   COG1IE              __at(0x46A);	// @ (0x8D * 8 + 2)
#define                                 COG1IE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<COG1IF>
extern volatile __bit                   COG1IF              __at(0x6A);	// @ (0xD * 8 + 2)
#define                                 COG1IF_bit          _BIT_ACCESS(PIR2,2)
// DAC1CON0<DACEN>
extern volatile __bit                   DACEN               __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 DACEN_bit           _BIT_ACCESS(DAC1CON0,7)
// DAC1CON0<DACFM>
extern volatile __bit                   DACFM               __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 DACFM_bit           _BIT_ACCESS(DAC1CON0,6)
// DAC1CON0<DACOE>
extern volatile __bit                   DACOE               __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 DACOE_bit           _BIT_ACCESS(DAC1CON0,5)
// DAC1CON0<DACPSS0>
extern volatile __bit                   DACPSS0             __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 DACPSS0_bit         _BIT_ACCESS(DAC1CON0,2)
// DAC1CON0<DACPSS1>
extern volatile __bit                   DACPSS1             __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 DACPSS1_bit         _BIT_ACCESS(DAC1CON0,3)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0xAC);	// @ (0x15 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0xAD);	// @ (0x15 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// FVR1CON0<FVRBUFEN>
extern volatile __bit                   FVRBUFEN            __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 FVRBUFEN_bit        _BIT_ACCESS(FVR1CON0,0)
// FVR1CON0<FVRBUSS0>
extern volatile __bit                   FVRBUSS0            __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 FVRBUSS0_bit        _BIT_ACCESS(FVR1CON0,3)
// FVR1CON0<FVRBUSS1>
extern volatile __bit                   FVRBUSS1            __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 FVRBUSS1_bit        _BIT_ACCESS(FVR1CON0,4)
// FVR1CON0<FVREN>
extern volatile __bit                   FVREN               __at(0x487);	// @ (0x90 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVR1CON0,7)
// FVR1CON0<FVROE>
extern volatile __bit                   FVROE               __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 FVROE_bit           _BIT_ACCESS(FVR1CON0,5)
// FVR1CON0<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x486);	// @ (0x90 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVR1CON0,6)
// COG1ASD0<G1ARSEN>
extern volatile __bit                   G1ARSEN             __at(0xCF6);	// @ (0x19E * 8 + 6)
#define                                 G1ARSEN_bit         _BIT_ACCESS(COG1ASD0,6)
// COG1ASD0<G1ASD0L0>
extern volatile __bit                   G1ASD0L0            __at(0xCF2);	// @ (0x19E * 8 + 2)
#define                                 G1ASD0L0_bit        _BIT_ACCESS(COG1ASD0,2)
// COG1ASD0<G1ASD0L1>
extern volatile __bit                   G1ASD0L1            __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 G1ASD0L1_bit        _BIT_ACCESS(COG1ASD0,3)
// COG1ASD0<G1ASD1L0>
extern volatile __bit                   G1ASD1L0            __at(0xCF4);	// @ (0x19E * 8 + 4)
#define                                 G1ASD1L0_bit        _BIT_ACCESS(COG1ASD0,4)
// COG1ASD0<G1ASD1L1>
extern volatile __bit                   G1ASD1L1            __at(0xCF5);	// @ (0x19E * 8 + 5)
#define                                 G1ASD1L1_bit        _BIT_ACCESS(COG1ASD0,5)
// COG1ASD0<G1ASDE>
extern volatile __bit                   G1ASDE              __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 G1ASDE_bit          _BIT_ACCESS(COG1ASD0,7)
// COG1ASD1<G1ASDSC1>
extern volatile __bit                   G1ASDSC1            __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 G1ASDSC1_bit        _BIT_ACCESS(COG1ASD1,1)
// COG1ASD1<G1ASDSC2>
extern volatile __bit                   G1ASDSC2            __at(0xCFA);	// @ (0x19F * 8 + 2)
#define                                 G1ASDSC2_bit        _BIT_ACCESS(COG1ASD1,2)
// COG1ASD1<G1ASDSFLT>
extern volatile __bit                   G1ASDSFLT           __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 G1ASDSFLT_bit       _BIT_ACCESS(COG1ASD1,0)
// COG1ASD1<G1ASDSHLT1>
extern volatile __bit                   G1ASDSHLT1          __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 G1ASDSHLT1_bit      _BIT_ACCESS(COG1ASD1,3)
// COG1ASD1<G1ASDSHLT2>
extern volatile __bit                   G1ASDSHLT2          __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 G1ASDSHLT2_bit      _BIT_ACCESS(COG1ASD1,4)
// COG1BKF<G1BKF0>
extern volatile __bit                   G1BKF0              __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 G1BKF0_bit          _BIT_ACCESS(COG1BKF,0)
// COG1BKF<G1BKF1>
extern volatile __bit                   G1BKF1              __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 G1BKF1_bit          _BIT_ACCESS(COG1BKF,1)
// COG1BKF<G1BKF2>
extern volatile __bit                   G1BKF2              __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 G1BKF2_bit          _BIT_ACCESS(COG1BKF,2)
// COG1BKF<G1BKF3>
extern volatile __bit                   G1BKF3              __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 G1BKF3_bit          _BIT_ACCESS(COG1BKF,3)
// COG1BKR<G1BKR0>
extern volatile __bit                   G1BKR0              __at(0xCA0);	// @ (0x194 * 8 + 0)
#define                                 G1BKR0_bit          _BIT_ACCESS(COG1BKR,0)
// COG1BKR<G1BKR1>
extern volatile __bit                   G1BKR1              __at(0xCA1);	// @ (0x194 * 8 + 1)
#define                                 G1BKR1_bit          _BIT_ACCESS(COG1BKR,1)
// COG1BKR<G1BKR2>
extern volatile __bit                   G1BKR2              __at(0xCA2);	// @ (0x194 * 8 + 2)
#define                                 G1BKR2_bit          _BIT_ACCESS(COG1BKR,2)
// COG1BKR<G1BKR3>
extern volatile __bit                   G1BKR3              __at(0xCA3);	// @ (0x194 * 8 + 3)
#define                                 G1BKR3_bit          _BIT_ACCESS(COG1BKR,3)
// COG1CON1<G1CS0>
extern volatile __bit                   G1CS0               __at(0xCC8);	// @ (0x199 * 8 + 0)
#define                                 G1CS0_bit           _BIT_ACCESS(COG1CON1,0)
// COG1CON1<G1CS1>
extern volatile __bit                   G1CS1               __at(0xCC9);	// @ (0x199 * 8 + 1)
#define                                 G1CS1_bit           _BIT_ACCESS(COG1CON1,1)
// COG1DBF<G1DBF0>
extern volatile __bit                   G1DBF0              __at(0xCB8);	// @ (0x197 * 8 + 0)
#define                                 G1DBF0_bit          _BIT_ACCESS(COG1DBF,0)
// COG1DBF<G1DBF1>
extern volatile __bit                   G1DBF1              __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 G1DBF1_bit          _BIT_ACCESS(COG1DBF,1)
// COG1DBF<G1DBF2>
extern volatile __bit                   G1DBF2              __at(0xCBA);	// @ (0x197 * 8 + 2)
#define                                 G1DBF2_bit          _BIT_ACCESS(COG1DBF,2)
// COG1DBF<G1DBF3>
extern volatile __bit                   G1DBF3              __at(0xCBB);	// @ (0x197 * 8 + 3)
#define                                 G1DBF3_bit          _BIT_ACCESS(COG1DBF,3)
// COG1DBR<G1DBR0>
extern volatile __bit                   G1DBR0              __at(0xCB0);	// @ (0x196 * 8 + 0)
#define                                 G1DBR0_bit          _BIT_ACCESS(COG1DBR,0)
// COG1DBR<G1DBR1>
extern volatile __bit                   G1DBR1              __at(0xCB1);	// @ (0x196 * 8 + 1)
#define                                 G1DBR1_bit          _BIT_ACCESS(COG1DBR,1)
// COG1DBR<G1DBR2>
extern volatile __bit                   G1DBR2              __at(0xCB2);	// @ (0x196 * 8 + 2)
#define                                 G1DBR2_bit          _BIT_ACCESS(COG1DBR,2)
// COG1DBR<G1DBR3>
extern volatile __bit                   G1DBR3              __at(0xCB3);	// @ (0x196 * 8 + 3)
#define                                 G1DBR3_bit          _BIT_ACCESS(COG1DBR,3)
// COG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0xCC7);	// @ (0x198 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(COG1CON0,7)
// COG1CON1<G1FDBTS>
extern volatile __bit                   G1FDBTS             __at(0xCCE);	// @ (0x199 * 8 + 6)
#define                                 G1FDBTS_bit         _BIT_ACCESS(COG1CON1,6)
// COG1FIS<G1FIC1>
extern volatile __bit                   G1FIC1              __at(0xCE0);	// @ (0x19C * 8 + 0)
#define                                 G1FIC1_bit          _BIT_ACCESS(COG1FIS,0)
// COG1FIS<G1FIC2>
extern volatile __bit                   G1FIC2              __at(0xCE1);	// @ (0x19C * 8 + 1)
#define                                 G1FIC2_bit          _BIT_ACCESS(COG1FIS,1)
// COG1FIS<G1FICCP1>
extern volatile __bit                   G1FICCP1            __at(0xCE2);	// @ (0x19C * 8 + 2)
#define                                 G1FICCP1_bit        _BIT_ACCESS(COG1FIS,2)
// COG1FIS<G1FIFLT>
extern volatile __bit                   G1FIFLT             __at(0xCE3);	// @ (0x19C * 8 + 3)
#define                                 G1FIFLT_bit         _BIT_ACCESS(COG1FIS,3)
// COG1FIS<G1FIHLT1>
extern volatile __bit                   G1FIHLT1            __at(0xCE5);	// @ (0x19C * 8 + 5)
#define                                 G1FIHLT1_bit        _BIT_ACCESS(COG1FIS,5)
// COG1FIS<G1FIHLT2>
extern volatile __bit                   G1FIHLT2            __at(0xCE6);	// @ (0x19C * 8 + 6)
#define                                 G1FIHLT2_bit        _BIT_ACCESS(COG1FIS,6)
// COG1FIS<G1FIT2M>
extern volatile __bit                   G1FIT2M             __at(0xCE4);	// @ (0x19C * 8 + 4)
#define                                 G1FIT2M_bit         _BIT_ACCESS(COG1FIS,4)
// COG1FSIM<G1FMC1>
extern volatile __bit                   G1FMC1              __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 G1FMC1_bit          _BIT_ACCESS(COG1FSIM,0)
// COG1FSIM<G1FMC2>
extern volatile __bit                   G1FMC2              __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 G1FMC2_bit          _BIT_ACCESS(COG1FSIM,1)
// COG1FSIM<G1FMCCP1>
extern volatile __bit                   G1FMCCP1            __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 G1FMCCP1_bit        _BIT_ACCESS(COG1FSIM,2)
// COG1FSIM<G1FMFLT>
extern volatile __bit                   G1FMFLT             __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 G1FMFLT_bit         _BIT_ACCESS(COG1FSIM,3)
// COG1FSIM<G1FMHLT1>
extern volatile __bit                   G1FMHLT1            __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 G1FMHLT1_bit        _BIT_ACCESS(COG1FSIM,5)
// COG1FSIM<G1FMHLT2>
extern volatile __bit                   G1FMHLT2            __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 G1FMHLT2_bit        _BIT_ACCESS(COG1FSIM,6)
// COG1FSIM<G1FMT2M>
extern volatile __bit                   G1FMT2M             __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 G1FMT2M_bit         _BIT_ACCESS(COG1FSIM,4)
// COG1CON0<G1LD>
extern volatile __bit                   G1LD                __at(0xCC2);	// @ (0x198 * 8 + 2)
#define                                 G1LD_bit            _BIT_ACCESS(COG1CON0,2)
// COG1CON0<G1MD>
extern volatile __bit                   G1MD                __at(0xCC0);	// @ (0x198 * 8 + 0)
#define                                 G1MD_bit            _BIT_ACCESS(COG1CON0,0)
// COG1CON0<G1OE0>
extern volatile __bit                   G1OE0               __at(0xCC5);	// @ (0x198 * 8 + 5)
#define                                 G1OE0_bit           _BIT_ACCESS(COG1CON0,5)
// COG1CON0<G1OE1>
extern volatile __bit                   G1OE1               __at(0xCC6);	// @ (0x198 * 8 + 6)
#define                                 G1OE1_bit           _BIT_ACCESS(COG1CON0,6)
// COG1PHF<G1PHF0>
extern volatile __bit                   G1PHF0              __at(0xC98);	// @ (0x193 * 8 + 0)
#define                                 G1PHF0_bit          _BIT_ACCESS(COG1PHF,0)
// COG1PHF<G1PHF1>
extern volatile __bit                   G1PHF1              __at(0xC99);	// @ (0x193 * 8 + 1)
#define                                 G1PHF1_bit          _BIT_ACCESS(COG1PHF,1)
// COG1PHF<G1PHF2>
extern volatile __bit                   G1PHF2              __at(0xC9A);	// @ (0x193 * 8 + 2)
#define                                 G1PHF2_bit          _BIT_ACCESS(COG1PHF,2)
// COG1PHF<G1PHF3>
extern volatile __bit                   G1PHF3              __at(0xC9B);	// @ (0x193 * 8 + 3)
#define                                 G1PHF3_bit          _BIT_ACCESS(COG1PHF,3)
// COG1PHR<G1PHR0>
extern volatile __bit                   G1PHR0              __at(0xC90);	// @ (0x192 * 8 + 0)
#define                                 G1PHR0_bit          _BIT_ACCESS(COG1PHR,0)
// COG1PHR<G1PHR1>
extern volatile __bit                   G1PHR1              __at(0xC91);	// @ (0x192 * 8 + 1)
#define                                 G1PHR1_bit          _BIT_ACCESS(COG1PHR,1)
// COG1PHR<G1PHR2>
extern volatile __bit                   G1PHR2              __at(0xC92);	// @ (0x192 * 8 + 2)
#define                                 G1PHR2_bit          _BIT_ACCESS(COG1PHR,2)
// COG1PHR<G1PHR3>
extern volatile __bit                   G1PHR3              __at(0xC93);	// @ (0x192 * 8 + 3)
#define                                 G1PHR3_bit          _BIT_ACCESS(COG1PHR,3)
// COG1CON0<G1POL0>
extern volatile __bit                   G1POL0              __at(0xCC3);	// @ (0x198 * 8 + 3)
#define                                 G1POL0_bit          _BIT_ACCESS(COG1CON0,3)
// COG1CON0<G1POL1>
extern volatile __bit                   G1POL1              __at(0xCC4);	// @ (0x198 * 8 + 4)
#define                                 G1POL1_bit          _BIT_ACCESS(COG1CON0,4)
// COG1RIS<G1R1HLT1>
extern volatile __bit                   G1R1HLT1            __at(0xCD5);	// @ (0x19A * 8 + 5)
#define                                 G1R1HLT1_bit        _BIT_ACCESS(COG1RIS,5)
// COG1CON1<G1RDBTS>
extern volatile __bit                   G1RDBTS             __at(0xCCF);	// @ (0x199 * 8 + 7)
#define                                 G1RDBTS_bit         _BIT_ACCESS(COG1CON1,7)
// COG1RIS<G1RIC1>
extern volatile __bit                   G1RIC1              __at(0xCD0);	// @ (0x19A * 8 + 0)
#define                                 G1RIC1_bit          _BIT_ACCESS(COG1RIS,0)
// COG1RIS<G1RIC2>
extern volatile __bit                   G1RIC2              __at(0xCD1);	// @ (0x19A * 8 + 1)
#define                                 G1RIC2_bit          _BIT_ACCESS(COG1RIS,1)
// COG1RIS<G1RIFLT>
extern volatile __bit                   G1RIFLT             __at(0xCD3);	// @ (0x19A * 8 + 3)
#define                                 G1RIFLT_bit         _BIT_ACCESS(COG1RIS,3)
// COG1RIS<G1RIHLT2>
extern volatile __bit                   G1RIHLT2            __at(0xCD6);	// @ (0x19A * 8 + 6)
#define                                 G1RIHLT2_bit        _BIT_ACCESS(COG1RIS,6)
// COG1RIS<G1RIT2M>
extern volatile __bit                   G1RIT2M             __at(0xCD4);	// @ (0x19A * 8 + 4)
#define                                 G1RIT2M_bit         _BIT_ACCESS(COG1RIS,4)
// COG1RSIM<G1RMC1>
extern volatile __bit                   G1RMC1              __at(0xCD8);	// @ (0x19B * 8 + 0)
#define                                 G1RMC1_bit          _BIT_ACCESS(COG1RSIM,0)
// COG1RSIM<G1RMC2>
extern volatile __bit                   G1RMC2              __at(0xCD9);	// @ (0x19B * 8 + 1)
#define                                 G1RMC2_bit          _BIT_ACCESS(COG1RSIM,1)
// COG1RSIM<G1RMCCP1>
extern volatile __bit                   G1RMCCP1            __at(0xCDA);	// @ (0x19B * 8 + 2)
#define                                 G1RMCCP1_bit        _BIT_ACCESS(COG1RSIM,2)
// COG1RSIM<G1RMFLT>
extern volatile __bit                   G1RMFLT             __at(0xCDB);	// @ (0x19B * 8 + 3)
#define                                 G1RMFLT_bit         _BIT_ACCESS(COG1RSIM,3)
// COG1RSIM<G1RMHLT1>
extern volatile __bit                   G1RMHLT1            __at(0xCDD);	// @ (0x19B * 8 + 5)
#define                                 G1RMHLT1_bit        _BIT_ACCESS(COG1RSIM,5)
// COG1RSIM<G1RMHLT2>
extern volatile __bit                   G1RMHLT2            __at(0xCDE);	// @ (0x19B * 8 + 6)
#define                                 G1RMHLT2_bit        _BIT_ACCESS(COG1RSIM,6)
// COG1RSIM<G1RTM2M>
extern volatile __bit                   G1RTM2M             __at(0xCDC);	// @ (0x19B * 8 + 4)
#define                                 G1RTM2M_bit         _BIT_ACCESS(COG1RSIM,4)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF1);	// @ (0x1E * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// HLT1CON0<H1CKPS0>
extern volatile __bit                   H1CKPS0             __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 H1CKPS0_bit         _BIT_ACCESS(HLT1CON0,0)
// HLT1CON0<H1CKPS1>
extern volatile __bit                   H1CKPS1             __at(0x8A9);	// @ (0x115 * 8 + 1)
#define                                 H1CKPS1_bit         _BIT_ACCESS(HLT1CON0,1)
// HLT1CON1<H1ERS0>
extern volatile __bit                   H1ERS0              __at(0x8B2);	// @ (0x116 * 8 + 2)
#define                                 H1ERS0_bit          _BIT_ACCESS(HLT1CON1,2)
// HLT1CON1<H1ERS1>
extern volatile __bit                   H1ERS1              __at(0x8B3);	// @ (0x116 * 8 + 3)
#define                                 H1ERS1_bit          _BIT_ACCESS(HLT1CON1,3)
// HLT1CON1<H1ERS2>
extern volatile __bit                   H1ERS2              __at(0x8B4);	// @ (0x116 * 8 + 4)
#define                                 H1ERS2_bit          _BIT_ACCESS(HLT1CON1,4)
// HLT1CON1<H1FEREN>
extern volatile __bit                   H1FEREN             __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 H1FEREN_bit         _BIT_ACCESS(HLT1CON1,1)
// HLT1CON1<H1FES>
extern volatile __bit                   H1FES               __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 H1FES_bit           _BIT_ACCESS(HLT1CON1,7)
// HLT1CON0<H1ON>
extern volatile __bit                   H1ON                __at(0x8AA);	// @ (0x115 * 8 + 2)
#define                                 H1ON_bit            _BIT_ACCESS(HLT1CON0,2)
// HLT1CON0<H1OUTPS0>
extern volatile __bit                   H1OUTPS0            __at(0x8AB);	// @ (0x115 * 8 + 3)
#define                                 H1OUTPS0_bit        _BIT_ACCESS(HLT1CON0,3)
// HLT1CON0<H1OUTPS1>
extern volatile __bit                   H1OUTPS1            __at(0x8AC);	// @ (0x115 * 8 + 4)
#define                                 H1OUTPS1_bit        _BIT_ACCESS(HLT1CON0,4)
// HLT1CON0<H1OUTPS2>
extern volatile __bit                   H1OUTPS2            __at(0x8AD);	// @ (0x115 * 8 + 5)
#define                                 H1OUTPS2_bit        _BIT_ACCESS(HLT1CON0,5)
// HLT1CON0<H1OUTPS3>
extern volatile __bit                   H1OUTPS3            __at(0x8AE);	// @ (0x115 * 8 + 6)
#define                                 H1OUTPS3_bit        _BIT_ACCESS(HLT1CON0,6)
// HLT1CON1<H1REREN>
extern volatile __bit                   H1REREN             __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 H1REREN_bit         _BIT_ACCESS(HLT1CON1,0)
// HLT1CON1<H1RES>
extern volatile __bit                   H1RES               __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 H1RES_bit           _BIT_ACCESS(HLT1CON1,6)
// HLT2CON0<H2CKPS0>
extern volatile __bit                   H2CKPS0             __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 H2CKPS0_bit         _BIT_ACCESS(HLT2CON0,0)
// HLT2CON0<H2CKPS1>
extern volatile __bit                   H2CKPS1             __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 H2CKPS1_bit         _BIT_ACCESS(HLT2CON0,1)
// HLT2CON1<H2ERS0>
extern volatile __bit                   H2ERS0              __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 H2ERS0_bit          _BIT_ACCESS(HLT2CON1,2)
// HLT2CON1<H2ERS1>
extern volatile __bit                   H2ERS1              __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 H2ERS1_bit          _BIT_ACCESS(HLT2CON1,3)
// HLT2CON1<H2ERS2>
extern volatile __bit                   H2ERS2              __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 H2ERS2_bit          _BIT_ACCESS(HLT2CON1,4)
// HLT2CON1<H2FEREN>
extern volatile __bit                   H2FEREN             __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 H2FEREN_bit         _BIT_ACCESS(HLT2CON1,1)
// HLT2CON1<H2FES>
extern volatile __bit                   H2FES               __at(0x8D7);	// @ (0x11A * 8 + 7)
#define                                 H2FES_bit           _BIT_ACCESS(HLT2CON1,7)
// HLT2CON0<H2ON>
extern volatile __bit                   H2ON                __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 H2ON_bit            _BIT_ACCESS(HLT2CON0,2)
// HLT2CON0<H2OUTPS0>
extern volatile __bit                   H2OUTPS0            __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 H2OUTPS0_bit        _BIT_ACCESS(HLT2CON0,3)
// HLT2CON0<H2OUTPS1>
extern volatile __bit                   H2OUTPS1            __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 H2OUTPS1_bit        _BIT_ACCESS(HLT2CON0,4)
// HLT2CON0<H2OUTPS2>
extern volatile __bit                   H2OUTPS2            __at(0x8CD);	// @ (0x119 * 8 + 5)
#define                                 H2OUTPS2_bit        _BIT_ACCESS(HLT2CON0,5)
// HLT2CON0<H2OUTPS3>
extern volatile __bit                   H2OUTPS3            __at(0x8CE);	// @ (0x119 * 8 + 6)
#define                                 H2OUTPS3_bit        _BIT_ACCESS(HLT2CON0,6)
// HLT2CON1<H2REREN>
extern volatile __bit                   H2REREN             __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 H2REREN_bit         _BIT_ACCESS(HLT2CON1,0)
// HLT2CON1<H2RES>
extern volatile __bit                   H2RES               __at(0x8D6);	// @ (0x11A * 8 + 6)
#define                                 H2RES_bit           _BIT_ACCESS(HLT2CON1,6)
// PIE1<HLTMR1IE>
extern volatile __bit                   HLTMR1IE            __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 HLTMR1IE_bit        _BIT_ACCESS(PIE1,2)
// PIR1<HLTMR1IF>
extern volatile __bit                   HLTMR1IF            __at(0x62);	// @ (0xC * 8 + 2)
#define                                 HLTMR1IF_bit        _BIT_ACCESS(PIR1,2)
// PIE1<HLTMR2IE>
extern volatile __bit                   HLTMR2IE            __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 HLTMR2IE_bit        _BIT_ACCESS(PIE1,3)
// PIR1<HLTMR2IF>
extern volatile __bit                   HLTMR2IF            __at(0x63);	// @ (0xC * 8 + 3)
#define                                 HLTMR2IF_bit        _BIT_ACCESS(PIR1,3)
// OSCCON<HTS>
extern volatile __bit                   HTS                 __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 HTS_bit             _BIT_ACCESS(OSCCON,2)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF2>
extern volatile __bit                   IOCAF2              __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 IOCAF2_bit          _BIT_ACCESS(IOCAF,2)
// IOCAF<IOCAF3>
extern volatile __bit                   IOCAF3              __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 IOCAF3_bit          _BIT_ACCESS(IOCAF,3)
// IOCAF<IOCAF4>
extern volatile __bit                   IOCAF4              __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 IOCAF4_bit          _BIT_ACCESS(IOCAF,4)
// IOCAF<IOCAF5>
extern volatile __bit                   IOCAF5              __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 IOCAF5_bit          _BIT_ACCESS(IOCAF,5)
// IOCAN<IOCAN0>
extern volatile __bit                   IOCAN0              __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 IOCAN0_bit          _BIT_ACCESS(IOCAN,0)
// IOCAN<IOCAN1>
extern volatile __bit                   IOCAN1              __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 IOCAN1_bit          _BIT_ACCESS(IOCAN,1)
// IOCAN<IOCAN2>
extern volatile __bit                   IOCAN2              __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 IOCAN2_bit          _BIT_ACCESS(IOCAN,2)
// IOCAN<IOCAN3>
extern volatile __bit                   IOCAN3              __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 IOCAN3_bit          _BIT_ACCESS(IOCAN,3)
// IOCAN<IOCAN4>
extern volatile __bit                   IOCAN4              __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 IOCAN4_bit          _BIT_ACCESS(IOCAN,4)
// IOCAN<IOCAN5>
extern volatile __bit                   IOCAN5              __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 IOCAN5_bit          _BIT_ACCESS(IOCAN,5)
// IOCAP<IOCAP0>
extern volatile __bit                   IOCAP0              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 IOCAP0_bit          _BIT_ACCESS(IOCAP,0)
// IOCAP<IOCAP1>
extern volatile __bit                   IOCAP1              __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 IOCAP1_bit          _BIT_ACCESS(IOCAP,1)
// IOCAP<IOCAP2>
extern volatile __bit                   IOCAP2              __at(0x442);	// @ (0x88 * 8 + 2)
#define                                 IOCAP2_bit          _BIT_ACCESS(IOCAP,2)
// IOCAP<IOCAP3>
extern volatile __bit                   IOCAP3              __at(0x443);	// @ (0x88 * 8 + 3)
#define                                 IOCAP3_bit          _BIT_ACCESS(IOCAP,3)
// IOCAP<IOCAP4>
extern volatile __bit                   IOCAP4              __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 IOCAP4_bit          _BIT_ACCESS(IOCAP,4)
// IOCAP<IOCAP5>
extern volatile __bit                   IOCAP5              __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 IOCAP5_bit          _BIT_ACCESS(IOCAP,5)
// IOCCF<IOCCF0>
extern volatile __bit                   IOCCF0              __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 IOCCF0_bit          _BIT_ACCESS(IOCCF,0)
// IOCCF<IOCCF1>
extern volatile __bit                   IOCCF1              __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 IOCCF1_bit          _BIT_ACCESS(IOCCF,1)
// IOCCF<IOCCF2>
extern volatile __bit                   IOCCF2              __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 IOCCF2_bit          _BIT_ACCESS(IOCCF,2)
// IOCCF<IOCCF3>
extern volatile __bit                   IOCCF3              __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 IOCCF3_bit          _BIT_ACCESS(IOCCF,3)
// IOCCF<IOCCF4>
extern volatile __bit                   IOCCF4              __at(0x4C);	// @ (0x9 * 8 + 4)
#define                                 IOCCF4_bit          _BIT_ACCESS(IOCCF,4)
// IOCCF<IOCCF5>
extern volatile __bit                   IOCCF5              __at(0x4D);	// @ (0x9 * 8 + 5)
#define                                 IOCCF5_bit          _BIT_ACCESS(IOCCF,5)
// IOCCN<IOCCN0>
extern volatile __bit                   IOCCN0              __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 IOCCN0_bit          _BIT_ACCESS(IOCCN,0)
// IOCCN<IOCCN1>
extern volatile __bit                   IOCCN1              __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 IOCCN1_bit          _BIT_ACCESS(IOCCN,1)
// IOCCN<IOCCN2>
extern volatile __bit                   IOCCN2              __at(0x84A);	// @ (0x109 * 8 + 2)
#define                                 IOCCN2_bit          _BIT_ACCESS(IOCCN,2)
// IOCCN<IOCCN3>
extern volatile __bit                   IOCCN3              __at(0x84B);	// @ (0x109 * 8 + 3)
#define                                 IOCCN3_bit          _BIT_ACCESS(IOCCN,3)
// IOCCN<IOCCN4>
extern volatile __bit                   IOCCN4              __at(0x84C);	// @ (0x109 * 8 + 4)
#define                                 IOCCN4_bit          _BIT_ACCESS(IOCCN,4)
// IOCCN<IOCCN5>
extern volatile __bit                   IOCCN5              __at(0x84D);	// @ (0x109 * 8 + 5)
#define                                 IOCCN5_bit          _BIT_ACCESS(IOCCN,5)
// IOCCP<IOCCP0>
extern volatile __bit                   IOCCP0              __at(0x448);	// @ (0x89 * 8 + 0)
#define                                 IOCCP0_bit          _BIT_ACCESS(IOCCP,0)
// IOCCP<IOCCP1>
extern volatile __bit                   IOCCP1              __at(0x449);	// @ (0x89 * 8 + 1)
#define                                 IOCCP1_bit          _BIT_ACCESS(IOCCP,1)
// IOCCP<IOCCP2>
extern volatile __bit                   IOCCP2              __at(0x44A);	// @ (0x89 * 8 + 2)
#define                                 IOCCP2_bit          _BIT_ACCESS(IOCCP,2)
// IOCCP<IOCCP3>
extern volatile __bit                   IOCCP3              __at(0x44B);	// @ (0x89 * 8 + 3)
#define                                 IOCCP3_bit          _BIT_ACCESS(IOCCP,3)
// IOCCP<IOCCP4>
extern volatile __bit                   IOCCP4              __at(0x44C);	// @ (0x89 * 8 + 4)
#define                                 IOCCP4_bit          _BIT_ACCESS(IOCCP,4)
// IOCCP<IOCCP5>
extern volatile __bit                   IOCCP5              __at(0x44D);	// @ (0x89 * 8 + 5)
#define                                 IOCCP5_bit          _BIT_ACCESS(IOCCP,5)
// INTCON<IOCIE>
extern volatile __bit                   IOCIE               __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCIE_bit           _BIT_ACCESS(INTCON,3)
// INTCON<IOCIF>
extern volatile __bit                   IOCIF               __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCIF_bit           _BIT_ACCESS(INTCON,0)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x82C);	// @ (0x105 * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 LATC0_bit           _BIT_ACCESS(LATC,0)
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 LATC1_bit           _BIT_ACCESS(LATC,1)
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 LATC2_bit           _BIT_ACCESS(LATC,2)
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 LATC3_bit           _BIT_ACCESS(LATC,3)
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 LATC4_bit           _BIT_ACCESS(LATC,4)
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 LATC5_bit           _BIT_ACCESS(LATC,5)
// OSCCON<LTS>
extern volatile __bit                   LTS                 __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 LTS_bit             _BIT_ACCESS(OSCCON,1)
// CMOUT<MCOUT1>
extern volatile __bit                   MCOUT1              __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 MCOUT1_bit          _BIT_ACCESS(CMOUT,0)
// CMOUT<MCOUT2>
extern volatile __bit                   MCOUT2              __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 MCOUT2_bit          _BIT_ACCESS(CMOUT,1)
// OPA1CON<OPA1NCH0>
extern volatile __bit                   OPA1NCH0            __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 OPA1NCH0_bit        _BIT_ACCESS(OPA1CON,2)
// OPA1CON<OPA1NCH1>
extern volatile __bit                   OPA1NCH1            __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 OPA1NCH1_bit        _BIT_ACCESS(OPA1CON,3)
// OPA1CON<OPA1PCH0>
extern volatile __bit                   OPA1PCH0            __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 OPA1PCH0_bit        _BIT_ACCESS(OPA1CON,0)
// OPA1CON<OPA1PCH1>
extern volatile __bit                   OPA1PCH1            __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 OPA1PCH1_bit        _BIT_ACCESS(OPA1CON,1)
// OPA1CON<OPAEN>
extern volatile __bit                   OPAEN               __at(0x4B7);	// @ (0x96 * 8 + 7)
#define                                 OPAEN_bit           _BIT_ACCESS(OPA1CON,7)
// OPA1CON<OPAUGM>
extern volatile __bit                   OPAUGM              __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 OPAUGM_bit          _BIT_ACCESS(OPA1CON,4)
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
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// SLPC1CON0<SC1EN>
extern volatile __bit                   SC1EN               __at(0x8F7);	// @ (0x11E * 8 + 7)
#define                                 SC1EN_bit           _BIT_ACCESS(SLPC1CON0,7)
// SLPC1CON0<SC1INS>
extern volatile __bit                   SC1INS              __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 SC1INS_bit          _BIT_ACCESS(SLPC1CON0,0)
// SLPC1CON1<SC1ISET0>
extern volatile __bit                   SC1ISET0            __at(0x8F8);	// @ (0x11F * 8 + 0)
#define                                 SC1ISET0_bit        _BIT_ACCESS(SLPC1CON1,0)
// SLPC1CON1<SC1ISET1>
extern volatile __bit                   SC1ISET1            __at(0x8F9);	// @ (0x11F * 8 + 1)
#define                                 SC1ISET1_bit        _BIT_ACCESS(SLPC1CON1,1)
// SLPC1CON1<SC1ISET2>
extern volatile __bit                   SC1ISET2            __at(0x8FA);	// @ (0x11F * 8 + 2)
#define                                 SC1ISET2_bit        _BIT_ACCESS(SLPC1CON1,2)
// SLPC1CON1<SC1ISET3>
extern volatile __bit                   SC1ISET3            __at(0x8FB);	// @ (0x11F * 8 + 3)
#define                                 SC1ISET3_bit        _BIT_ACCESS(SLPC1CON1,3)
// SLPC1CON0<SC1MRPE>
extern volatile __bit                   SC1MRPE             __at(0x8F5);	// @ (0x11E * 8 + 5)
#define                                 SC1MRPE_bit         _BIT_ACCESS(SLPC1CON0,5)
// SLPC1CON0<SC1POL>
extern volatile __bit                   SC1POL              __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 SC1POL_bit          _BIT_ACCESS(SLPC1CON0,4)
// SLPC1CON1<SC1RNG>
extern volatile __bit                   SC1RNG              __at(0x8FC);	// @ (0x11F * 8 + 4)
#define                                 SC1RNG_bit          _BIT_ACCESS(SLPC1CON1,4)
// SLPC1CON0<SCS1TSS0>
extern volatile __bit                   SCS1TSS0            __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 SCS1TSS0_bit        _BIT_ACCESS(SLPC1CON0,2)
// SLPC1CON0<SCS1TSS1>
extern volatile __bit                   SCS1TSS1            __at(0x8F3);	// @ (0x11E * 8 + 3)
#define                                 SCS1TSS1_bit        _BIT_ACCESS(SLPC1CON0,3)
// SLRCONC<SLRC4>
extern volatile __bit                   SLRC4               __at(0x874);	// @ (0x10E * 8 + 4)
#define                                 SLRC4_bit           _BIT_ACCESS(SLRCONC,4)
// SLRCONC<SLRC5>
extern volatile __bit                   SLRC5               __at(0x875);	// @ (0x10E * 8 + 5)
#define                                 SLRC5_bit           _BIT_ACCESS(SLRCONC,5)
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
extern volatile __bit                   T1CKPS0             __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GGO_nDONE>
extern volatile __bit                   T1GGO_nDONE         __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 T1GGO_nDONE_bit     _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// APFCON<T1GSEL>
extern volatile __bit                   T1GSEL              __at(0xC44);	// @ (0x188 * 8 + 4)
#define                                 T1GSEL_bit          _BIT_ACCESS(APFCON,4)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// T1CON<TMR1CS0>
extern volatile __bit                   TMR1CS0             __at(0x8E);	// @ (0x11 * 8 + 6)
#define                                 TMR1CS0_bit         _BIT_ACCESS(T1CON,6)
// T1CON<TMR1CS1>
extern volatile __bit                   TMR1CS1             __at(0x8F);	// @ (0x11 * 8 + 7)
#define                                 TMR1CS1_bit         _BIT_ACCESS(T1CON,7)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,7)
// PIR1<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x67);	// @ (0xC * 8 + 7)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR1,7)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x60);	// @ (0xC * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x88);	// @ (0x11 * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
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
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0x43B);	// @ (0x87 * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0x43C);	// @ (0x87 * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0xC48);	// @ (0x189 * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0xC49);	// @ (0x189 * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0xC4A);	// @ (0x189 * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0xC4B);	// @ (0x189 * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0xC4C);	// @ (0x189 * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x860);	// @ (0x10C * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUA,0)
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x861);	// @ (0x10C * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUA,1)
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x862);	// @ (0x10C * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUA,2)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x863);	// @ (0x10C * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPUA,4)
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUA,5)
// WPUC<WPUC0>
extern volatile __bit                   WPUC0               __at(0x868);	// @ (0x10D * 8 + 0)
#define                                 WPUC0_bit           _BIT_ACCESS(WPUC,0)
// WPUC<WPUC1>
extern volatile __bit                   WPUC1               __at(0x869);	// @ (0x10D * 8 + 1)
#define                                 WPUC1_bit           _BIT_ACCESS(WPUC,1)
// WPUC<WPUC2>
extern volatile __bit                   WPUC2               __at(0x86A);	// @ (0x10D * 8 + 2)
#define                                 WPUC2_bit           _BIT_ACCESS(WPUC,2)
// WPUC<WPUC3>
extern volatile __bit                   WPUC3               __at(0x86B);	// @ (0x10D * 8 + 3)
#define                                 WPUC3_bit           _BIT_ACCESS(WPUC,3)
// WPUC<WPUC4>
extern volatile __bit                   WPUC4               __at(0x86C);	// @ (0x10D * 8 + 4)
#define                                 WPUC4_bit           _BIT_ACCESS(WPUC,4)
// WPUC<WPUC5>
extern volatile __bit                   WPUC5               __at(0x86D);	// @ (0x10D * 8 + 5)
#define                                 WPUC5_bit           _BIT_ACCESS(WPUC,5)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0xC61);	// @ (0x18C * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0xC62);	// @ (0x18C * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x878);	// @ (0x10F * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x879);	// @ (0x10F * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRAPU>
extern volatile __bit                   nRAPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPU_bit           _BIT_ACCESS(OPTION_REG,7)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x8A);	// @ (0x11 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16F753_H_
