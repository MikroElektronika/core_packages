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

#ifndef _PIC12F617_H_
#define _PIC12F617_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12F617
 */
#ifndef _XC_H_
#warning Header file pic12f617.h included directly. Use #include <xc.h> instead.
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

// Register: GPIO
#define GPIO GPIO
extern volatile unsigned char           GPIO                __at(0x005);
#ifndef _LIB_BUILD
asm("GPIO equ 05h");
#endif
// aliases
extern volatile unsigned char           PORTA               __at(0x005);
#ifndef _LIB_BUILD
asm("PORTA equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GP0                    :1;
        unsigned GP1                    :1;
        unsigned GP2                    :1;
        unsigned GP3                    :1;
        unsigned GP4                    :1;
        unsigned GP5                    :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned GPIO4                  :1;
        unsigned GPIO5                  :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} GPIObits_t;
extern volatile GPIObits_t GPIObits __at(0x005);
// bitfield macros
#define _GPIO_GP0_POSN                                      0x0
#define _GPIO_GP0_POSITION                                  0x0
#define _GPIO_GP0_SIZE                                      0x1
#define _GPIO_GP0_LENGTH                                    0x1
#define _GPIO_GP0_MASK                                      0x1
#define _GPIO_GP1_POSN                                      0x1
#define _GPIO_GP1_POSITION                                  0x1
#define _GPIO_GP1_SIZE                                      0x1
#define _GPIO_GP1_LENGTH                                    0x1
#define _GPIO_GP1_MASK                                      0x2
#define _GPIO_GP2_POSN                                      0x2
#define _GPIO_GP2_POSITION                                  0x2
#define _GPIO_GP2_SIZE                                      0x1
#define _GPIO_GP2_LENGTH                                    0x1
#define _GPIO_GP2_MASK                                      0x4
#define _GPIO_GP3_POSN                                      0x3
#define _GPIO_GP3_POSITION                                  0x3
#define _GPIO_GP3_SIZE                                      0x1
#define _GPIO_GP3_LENGTH                                    0x1
#define _GPIO_GP3_MASK                                      0x8
#define _GPIO_GP4_POSN                                      0x4
#define _GPIO_GP4_POSITION                                  0x4
#define _GPIO_GP4_SIZE                                      0x1
#define _GPIO_GP4_LENGTH                                    0x1
#define _GPIO_GP4_MASK                                      0x10
#define _GPIO_GP5_POSN                                      0x5
#define _GPIO_GP5_POSITION                                  0x5
#define _GPIO_GP5_SIZE                                      0x1
#define _GPIO_GP5_LENGTH                                    0x1
#define _GPIO_GP5_MASK                                      0x20
#define _GPIO_GPIO0_POSN                                    0x0
#define _GPIO_GPIO0_POSITION                                0x0
#define _GPIO_GPIO0_SIZE                                    0x1
#define _GPIO_GPIO0_LENGTH                                  0x1
#define _GPIO_GPIO0_MASK                                    0x1
#define _GPIO_GPIO1_POSN                                    0x1
#define _GPIO_GPIO1_POSITION                                0x1
#define _GPIO_GPIO1_SIZE                                    0x1
#define _GPIO_GPIO1_LENGTH                                  0x1
#define _GPIO_GPIO1_MASK                                    0x2
#define _GPIO_GPIO2_POSN                                    0x2
#define _GPIO_GPIO2_POSITION                                0x2
#define _GPIO_GPIO2_SIZE                                    0x1
#define _GPIO_GPIO2_LENGTH                                  0x1
#define _GPIO_GPIO2_MASK                                    0x4
#define _GPIO_GPIO3_POSN                                    0x3
#define _GPIO_GPIO3_POSITION                                0x3
#define _GPIO_GPIO3_SIZE                                    0x1
#define _GPIO_GPIO3_LENGTH                                  0x1
#define _GPIO_GPIO3_MASK                                    0x8
#define _GPIO_GPIO4_POSN                                    0x4
#define _GPIO_GPIO4_POSITION                                0x4
#define _GPIO_GPIO4_SIZE                                    0x1
#define _GPIO_GPIO4_LENGTH                                  0x1
#define _GPIO_GPIO4_MASK                                    0x10
#define _GPIO_GPIO5_POSN                                    0x5
#define _GPIO_GPIO5_POSITION                                0x5
#define _GPIO_GPIO5_SIZE                                    0x1
#define _GPIO_GPIO5_LENGTH                                  0x1
#define _GPIO_GPIO5_MASK                                    0x20
#define _GPIO_RA0_POSN                                      0x0
#define _GPIO_RA0_POSITION                                  0x0
#define _GPIO_RA0_SIZE                                      0x1
#define _GPIO_RA0_LENGTH                                    0x1
#define _GPIO_RA0_MASK                                      0x1
#define _GPIO_RA1_POSN                                      0x1
#define _GPIO_RA1_POSITION                                  0x1
#define _GPIO_RA1_SIZE                                      0x1
#define _GPIO_RA1_LENGTH                                    0x1
#define _GPIO_RA1_MASK                                      0x2
#define _GPIO_RA2_POSN                                      0x2
#define _GPIO_RA2_POSITION                                  0x2
#define _GPIO_RA2_SIZE                                      0x1
#define _GPIO_RA2_LENGTH                                    0x1
#define _GPIO_RA2_MASK                                      0x4
#define _GPIO_RA3_POSN                                      0x3
#define _GPIO_RA3_POSITION                                  0x3
#define _GPIO_RA3_SIZE                                      0x1
#define _GPIO_RA3_LENGTH                                    0x1
#define _GPIO_RA3_MASK                                      0x8
#define _GPIO_RA4_POSN                                      0x4
#define _GPIO_RA4_POSITION                                  0x4
#define _GPIO_RA4_SIZE                                      0x1
#define _GPIO_RA4_LENGTH                                    0x1
#define _GPIO_RA4_MASK                                      0x10
#define _GPIO_RA5_POSN                                      0x5
#define _GPIO_RA5_POSITION                                  0x5
#define _GPIO_RA5_SIZE                                      0x1
#define _GPIO_RA5_LENGTH                                    0x1
#define _GPIO_RA5_MASK                                      0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned GP0                    :1;
        unsigned GP1                    :1;
        unsigned GP2                    :1;
        unsigned GP3                    :1;
        unsigned GP4                    :1;
        unsigned GP5                    :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned GPIO4                  :1;
        unsigned GPIO5                  :1;
    };
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
#define _PORTA_GP0_POSN                                     0x0
#define _PORTA_GP0_POSITION                                 0x0
#define _PORTA_GP0_SIZE                                     0x1
#define _PORTA_GP0_LENGTH                                   0x1
#define _PORTA_GP0_MASK                                     0x1
#define _PORTA_GP1_POSN                                     0x1
#define _PORTA_GP1_POSITION                                 0x1
#define _PORTA_GP1_SIZE                                     0x1
#define _PORTA_GP1_LENGTH                                   0x1
#define _PORTA_GP1_MASK                                     0x2
#define _PORTA_GP2_POSN                                     0x2
#define _PORTA_GP2_POSITION                                 0x2
#define _PORTA_GP2_SIZE                                     0x1
#define _PORTA_GP2_LENGTH                                   0x1
#define _PORTA_GP2_MASK                                     0x4
#define _PORTA_GP3_POSN                                     0x3
#define _PORTA_GP3_POSITION                                 0x3
#define _PORTA_GP3_SIZE                                     0x1
#define _PORTA_GP3_LENGTH                                   0x1
#define _PORTA_GP3_MASK                                     0x8
#define _PORTA_GP4_POSN                                     0x4
#define _PORTA_GP4_POSITION                                 0x4
#define _PORTA_GP4_SIZE                                     0x1
#define _PORTA_GP4_LENGTH                                   0x1
#define _PORTA_GP4_MASK                                     0x10
#define _PORTA_GP5_POSN                                     0x5
#define _PORTA_GP5_POSITION                                 0x5
#define _PORTA_GP5_SIZE                                     0x1
#define _PORTA_GP5_LENGTH                                   0x1
#define _PORTA_GP5_MASK                                     0x20
#define _PORTA_GPIO0_POSN                                   0x0
#define _PORTA_GPIO0_POSITION                               0x0
#define _PORTA_GPIO0_SIZE                                   0x1
#define _PORTA_GPIO0_LENGTH                                 0x1
#define _PORTA_GPIO0_MASK                                   0x1
#define _PORTA_GPIO1_POSN                                   0x1
#define _PORTA_GPIO1_POSITION                               0x1
#define _PORTA_GPIO1_SIZE                                   0x1
#define _PORTA_GPIO1_LENGTH                                 0x1
#define _PORTA_GPIO1_MASK                                   0x2
#define _PORTA_GPIO2_POSN                                   0x2
#define _PORTA_GPIO2_POSITION                               0x2
#define _PORTA_GPIO2_SIZE                                   0x1
#define _PORTA_GPIO2_LENGTH                                 0x1
#define _PORTA_GPIO2_MASK                                   0x4
#define _PORTA_GPIO3_POSN                                   0x3
#define _PORTA_GPIO3_POSITION                               0x3
#define _PORTA_GPIO3_SIZE                                   0x1
#define _PORTA_GPIO3_LENGTH                                 0x1
#define _PORTA_GPIO3_MASK                                   0x8
#define _PORTA_GPIO4_POSN                                   0x4
#define _PORTA_GPIO4_POSITION                               0x4
#define _PORTA_GPIO4_SIZE                                   0x1
#define _PORTA_GPIO4_LENGTH                                 0x1
#define _PORTA_GPIO4_MASK                                   0x10
#define _PORTA_GPIO5_POSN                                   0x5
#define _PORTA_GPIO5_POSITION                               0x5
#define _PORTA_GPIO5_SIZE                                   0x1
#define _PORTA_GPIO5_LENGTH                                 0x1
#define _PORTA_GPIO5_MASK                                   0x20
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
        unsigned GPIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned GPIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
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
#define _INTCON_GPIF_POSN                                   0x0
#define _INTCON_GPIF_POSITION                               0x0
#define _INTCON_GPIF_SIZE                                   0x1
#define _INTCON_GPIF_LENGTH                                 0x1
#define _INTCON_GPIF_MASK                                   0x1
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
#define _INTCON_GPIE_POSN                                   0x3
#define _INTCON_GPIE_POSITION                               0x3
#define _INTCON_GPIE_SIZE                                   0x1
#define _INTCON_GPIE_LENGTH                                 0x1
#define _INTCON_GPIE_MASK                                   0x8
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
        unsigned                        :1;
        unsigned CMIF                   :1;
        unsigned                        :1;
        unsigned CCP1IF                 :1;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned C1IF                   :1;
        unsigned                        :1;
        unsigned CCPIF                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned ECCPIF                 :1;
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
#define _PIR1_CMIF_POSN                                     0x3
#define _PIR1_CMIF_POSITION                                 0x3
#define _PIR1_CMIF_SIZE                                     0x1
#define _PIR1_CMIF_LENGTH                                   0x1
#define _PIR1_CMIF_MASK                                     0x8
#define _PIR1_CCP1IF_POSN                                   0x5
#define _PIR1_CCP1IF_POSITION                               0x5
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_C1IF_POSN                                     0x3
#define _PIR1_C1IF_POSITION                                 0x3
#define _PIR1_C1IF_SIZE                                     0x1
#define _PIR1_C1IF_LENGTH                                   0x1
#define _PIR1_C1IF_MASK                                     0x8
#define _PIR1_CCPIF_POSN                                    0x5
#define _PIR1_CCPIF_POSITION                                0x5
#define _PIR1_CCPIF_SIZE                                    0x1
#define _PIR1_CCPIF_LENGTH                                  0x1
#define _PIR1_CCPIF_MASK                                    0x20
#define _PIR1_ECCPIF_POSN                                   0x5
#define _PIR1_ECCPIF_POSITION                               0x5
#define _PIR1_ECCPIF_SIZE                                   0x1
#define _PIR1_ECCPIF_LENGTH                                 0x1
#define _PIR1_ECCPIF_MASK                                   0x20

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
        unsigned T1GINV                 :1;
    };
    struct {
        unsigned                        :4;
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
#define _T1CON_T1GINV_POSN                                  0x7
#define _T1CON_T1GINV_POSITION                              0x7
#define _T1CON_T1GINV_SIZE                                  0x1
#define _T1CON_T1GINV_LENGTH                                0x1
#define _T1CON_T1GINV_MASK                                  0x80
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

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR2 equ 011h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x012);
#ifndef _LIB_BUILD
asm("T2CON equ 012h");
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
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x012);
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
        unsigned DCB                    :2;
        unsigned                        :1;
        unsigned P1M                    :1;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DCB0                   :1;
        unsigned DCB1                   :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x015);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DCB_POSN                                   0x4
#define _CCP1CON_DCB_POSITION                               0x4
#define _CCP1CON_DCB_SIZE                                   0x2
#define _CCP1CON_DCB_LENGTH                                 0x2
#define _CCP1CON_DCB_MASK                                   0x30
#define _CCP1CON_P1M_POSN                                   0x7
#define _CCP1CON_P1M_POSITION                               0x7
#define _CCP1CON_P1M_SIZE                                   0x1
#define _CCP1CON_P1M_LENGTH                                 0x1
#define _CCP1CON_P1M_MASK                                   0x80
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
#define _CCP1CON_DCB0_POSN                                  0x4
#define _CCP1CON_DCB0_POSITION                              0x4
#define _CCP1CON_DCB0_SIZE                                  0x1
#define _CCP1CON_DCB0_LENGTH                                0x1
#define _CCP1CON_DCB0_MASK                                  0x10
#define _CCP1CON_DCB1_POSN                                  0x5
#define _CCP1CON_DCB1_POSITION                              0x5
#define _CCP1CON_DCB1_SIZE                                  0x1
#define _CCP1CON_DCB1_LENGTH                                0x1
#define _CCP1CON_DCB1_MASK                                  0x20

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0x016);
#ifndef _LIB_BUILD
asm("PWM1CON equ 016h");
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
extern volatile PWM1CONbits_t PWM1CONbits __at(0x016);
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

// Register: ECCPAS
#define ECCPAS ECCPAS
extern volatile unsigned char           ECCPAS              __at(0x017);
#ifndef _LIB_BUILD
asm("ECCPAS equ 017h");
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
} ECCPASbits_t;
extern volatile ECCPASbits_t ECCPASbits __at(0x017);
// bitfield macros
#define _ECCPAS_PSSBD_POSN                                  0x0
#define _ECCPAS_PSSBD_POSITION                              0x0
#define _ECCPAS_PSSBD_SIZE                                  0x2
#define _ECCPAS_PSSBD_LENGTH                                0x2
#define _ECCPAS_PSSBD_MASK                                  0x3
#define _ECCPAS_PSSAC_POSN                                  0x2
#define _ECCPAS_PSSAC_POSITION                              0x2
#define _ECCPAS_PSSAC_SIZE                                  0x2
#define _ECCPAS_PSSAC_LENGTH                                0x2
#define _ECCPAS_PSSAC_MASK                                  0xC
#define _ECCPAS_ECCPAS_POSN                                 0x4
#define _ECCPAS_ECCPAS_POSITION                             0x4
#define _ECCPAS_ECCPAS_SIZE                                 0x3
#define _ECCPAS_ECCPAS_LENGTH                               0x3
#define _ECCPAS_ECCPAS_MASK                                 0x70
#define _ECCPAS_ECCPASE_POSN                                0x7
#define _ECCPAS_ECCPASE_POSITION                            0x7
#define _ECCPAS_ECCPASE_SIZE                                0x1
#define _ECCPAS_ECCPASE_LENGTH                              0x1
#define _ECCPAS_ECCPASE_MASK                                0x80
#define _ECCPAS_PSSBD0_POSN                                 0x0
#define _ECCPAS_PSSBD0_POSITION                             0x0
#define _ECCPAS_PSSBD0_SIZE                                 0x1
#define _ECCPAS_PSSBD0_LENGTH                               0x1
#define _ECCPAS_PSSBD0_MASK                                 0x1
#define _ECCPAS_PSSBD1_POSN                                 0x1
#define _ECCPAS_PSSBD1_POSITION                             0x1
#define _ECCPAS_PSSBD1_SIZE                                 0x1
#define _ECCPAS_PSSBD1_LENGTH                               0x1
#define _ECCPAS_PSSBD1_MASK                                 0x2
#define _ECCPAS_PSSAC0_POSN                                 0x2
#define _ECCPAS_PSSAC0_POSITION                             0x2
#define _ECCPAS_PSSAC0_SIZE                                 0x1
#define _ECCPAS_PSSAC0_LENGTH                               0x1
#define _ECCPAS_PSSAC0_MASK                                 0x4
#define _ECCPAS_PSSAC1_POSN                                 0x3
#define _ECCPAS_PSSAC1_POSITION                             0x3
#define _ECCPAS_PSSAC1_SIZE                                 0x1
#define _ECCPAS_PSSAC1_LENGTH                               0x1
#define _ECCPAS_PSSAC1_MASK                                 0x8
#define _ECCPAS_ECCPAS0_POSN                                0x4
#define _ECCPAS_ECCPAS0_POSITION                            0x4
#define _ECCPAS_ECCPAS0_SIZE                                0x1
#define _ECCPAS_ECCPAS0_LENGTH                              0x1
#define _ECCPAS_ECCPAS0_MASK                                0x10
#define _ECCPAS_ECCPAS1_POSN                                0x5
#define _ECCPAS_ECCPAS1_POSITION                            0x5
#define _ECCPAS_ECCPAS1_SIZE                                0x1
#define _ECCPAS_ECCPAS1_LENGTH                              0x1
#define _ECCPAS_ECCPAS1_MASK                                0x20
#define _ECCPAS_ECCPAS2_POSN                                0x6
#define _ECCPAS_ECCPAS2_POSITION                            0x6
#define _ECCPAS_ECCPAS2_SIZE                                0x1
#define _ECCPAS_ECCPAS2_LENGTH                              0x1
#define _ECCPAS_ECCPAS2_MASK                                0x40

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x019);
#ifndef _LIB_BUILD
asm("VRCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR                     :4;
        unsigned FVREN                  :1;
        unsigned VRR                    :1;
        unsigned                        :1;
        unsigned CMVREN                 :1;
    };
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
        unsigned                        :3;
        unsigned C1VREN                 :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x019);
// bitfield macros
#define _VRCON_VR_POSN                                      0x0
#define _VRCON_VR_POSITION                                  0x0
#define _VRCON_VR_SIZE                                      0x4
#define _VRCON_VR_LENGTH                                    0x4
#define _VRCON_VR_MASK                                      0xF
#define _VRCON_FVREN_POSN                                   0x4
#define _VRCON_FVREN_POSITION                               0x4
#define _VRCON_FVREN_SIZE                                   0x1
#define _VRCON_FVREN_LENGTH                                 0x1
#define _VRCON_FVREN_MASK                                   0x10
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
#define _VRCON_CMVREN_POSN                                  0x7
#define _VRCON_CMVREN_POSITION                              0x7
#define _VRCON_CMVREN_SIZE                                  0x1
#define _VRCON_CMVREN_LENGTH                                0x1
#define _VRCON_CMVREN_MASK                                  0x80
#define _VRCON_VR0_POSN                                     0x0
#define _VRCON_VR0_POSITION                                 0x0
#define _VRCON_VR0_SIZE                                     0x1
#define _VRCON_VR0_LENGTH                                   0x1
#define _VRCON_VR0_MASK                                     0x1
#define _VRCON_VR1_POSN                                     0x1
#define _VRCON_VR1_POSITION                                 0x1
#define _VRCON_VR1_SIZE                                     0x1
#define _VRCON_VR1_LENGTH                                   0x1
#define _VRCON_VR1_MASK                                     0x2
#define _VRCON_VR2_POSN                                     0x2
#define _VRCON_VR2_POSITION                                 0x2
#define _VRCON_VR2_SIZE                                     0x1
#define _VRCON_VR2_LENGTH                                   0x1
#define _VRCON_VR2_MASK                                     0x4
#define _VRCON_VR3_POSN                                     0x3
#define _VRCON_VR3_POSITION                                 0x3
#define _VRCON_VR3_SIZE                                     0x1
#define _VRCON_VR3_LENGTH                                   0x1
#define _VRCON_VR3_MASK                                     0x8
#define _VRCON_C1VREN_POSN                                  0x7
#define _VRCON_C1VREN_POSITION                              0x7
#define _VRCON_C1VREN_SIZE                                  0x1
#define _VRCON_C1VREN_LENGTH                                0x1
#define _VRCON_C1VREN_MASK                                  0x80

// Register: CMCON0
#define CMCON0 CMCON0
extern volatile unsigned char           CMCON0              __at(0x01A);
#ifndef _LIB_BUILD
asm("CMCON0 equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CMCH                   :1;
        unsigned                        :1;
        unsigned CMR                    :1;
        unsigned                        :1;
        unsigned CMPOL                  :1;
        unsigned CMOE                   :1;
        unsigned COUT                   :1;
        unsigned CMON                   :1;
    };
    struct {
        unsigned C1CH                   :1;
        unsigned                        :1;
        unsigned C1R                    :1;
        unsigned                        :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} CMCON0bits_t;
extern volatile CMCON0bits_t CMCON0bits __at(0x01A);
// bitfield macros
#define _CMCON0_CMCH_POSN                                   0x0
#define _CMCON0_CMCH_POSITION                               0x0
#define _CMCON0_CMCH_SIZE                                   0x1
#define _CMCON0_CMCH_LENGTH                                 0x1
#define _CMCON0_CMCH_MASK                                   0x1
#define _CMCON0_CMR_POSN                                    0x2
#define _CMCON0_CMR_POSITION                                0x2
#define _CMCON0_CMR_SIZE                                    0x1
#define _CMCON0_CMR_LENGTH                                  0x1
#define _CMCON0_CMR_MASK                                    0x4
#define _CMCON0_CMPOL_POSN                                  0x4
#define _CMCON0_CMPOL_POSITION                              0x4
#define _CMCON0_CMPOL_SIZE                                  0x1
#define _CMCON0_CMPOL_LENGTH                                0x1
#define _CMCON0_CMPOL_MASK                                  0x10
#define _CMCON0_CMOE_POSN                                   0x5
#define _CMCON0_CMOE_POSITION                               0x5
#define _CMCON0_CMOE_SIZE                                   0x1
#define _CMCON0_CMOE_LENGTH                                 0x1
#define _CMCON0_CMOE_MASK                                   0x20
#define _CMCON0_COUT_POSN                                   0x6
#define _CMCON0_COUT_POSITION                               0x6
#define _CMCON0_COUT_SIZE                                   0x1
#define _CMCON0_COUT_LENGTH                                 0x1
#define _CMCON0_COUT_MASK                                   0x40
#define _CMCON0_CMON_POSN                                   0x7
#define _CMCON0_CMON_POSITION                               0x7
#define _CMCON0_CMON_SIZE                                   0x1
#define _CMCON0_CMON_LENGTH                                 0x1
#define _CMCON0_CMON_MASK                                   0x80
#define _CMCON0_C1CH_POSN                                   0x0
#define _CMCON0_C1CH_POSITION                               0x0
#define _CMCON0_C1CH_SIZE                                   0x1
#define _CMCON0_C1CH_LENGTH                                 0x1
#define _CMCON0_C1CH_MASK                                   0x1
#define _CMCON0_C1R_POSN                                    0x2
#define _CMCON0_C1R_POSITION                                0x2
#define _CMCON0_C1R_SIZE                                    0x1
#define _CMCON0_C1R_LENGTH                                  0x1
#define _CMCON0_C1R_MASK                                    0x4
#define _CMCON0_C1POL_POSN                                  0x4
#define _CMCON0_C1POL_POSITION                              0x4
#define _CMCON0_C1POL_SIZE                                  0x1
#define _CMCON0_C1POL_LENGTH                                0x1
#define _CMCON0_C1POL_MASK                                  0x10
#define _CMCON0_C1OE_POSN                                   0x5
#define _CMCON0_C1OE_POSITION                               0x5
#define _CMCON0_C1OE_SIZE                                   0x1
#define _CMCON0_C1OE_LENGTH                                 0x1
#define _CMCON0_C1OE_MASK                                   0x20
#define _CMCON0_C1OUT_POSN                                  0x6
#define _CMCON0_C1OUT_POSITION                              0x6
#define _CMCON0_C1OUT_SIZE                                  0x1
#define _CMCON0_C1OUT_LENGTH                                0x1
#define _CMCON0_C1OUT_MASK                                  0x40
#define _CMCON0_C1ON_POSN                                   0x7
#define _CMCON0_C1ON_POSITION                               0x7
#define _CMCON0_C1ON_SIZE                                   0x1
#define _CMCON0_C1ON_LENGTH                                 0x1
#define _CMCON0_C1ON_MASK                                   0x80

// Register: CMCON1
#define CMCON1 CMCON1
extern volatile unsigned char           CMCON1              __at(0x01C);
#ifndef _LIB_BUILD
asm("CMCON1 equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CMSYNC                 :1;
        unsigned T1GSS                  :1;
        unsigned                        :1;
        unsigned CMHYS                  :1;
        unsigned T1ACS                  :1;
    };
    struct {
        unsigned C1SYNC                 :1;
        unsigned                        :2;
        unsigned C1HYS                  :1;
    };
} CMCON1bits_t;
extern volatile CMCON1bits_t CMCON1bits __at(0x01C);
// bitfield macros
#define _CMCON1_CMSYNC_POSN                                 0x0
#define _CMCON1_CMSYNC_POSITION                             0x0
#define _CMCON1_CMSYNC_SIZE                                 0x1
#define _CMCON1_CMSYNC_LENGTH                               0x1
#define _CMCON1_CMSYNC_MASK                                 0x1
#define _CMCON1_T1GSS_POSN                                  0x1
#define _CMCON1_T1GSS_POSITION                              0x1
#define _CMCON1_T1GSS_SIZE                                  0x1
#define _CMCON1_T1GSS_LENGTH                                0x1
#define _CMCON1_T1GSS_MASK                                  0x2
#define _CMCON1_CMHYS_POSN                                  0x3
#define _CMCON1_CMHYS_POSITION                              0x3
#define _CMCON1_CMHYS_SIZE                                  0x1
#define _CMCON1_CMHYS_LENGTH                                0x1
#define _CMCON1_CMHYS_MASK                                  0x8
#define _CMCON1_T1ACS_POSN                                  0x4
#define _CMCON1_T1ACS_POSITION                              0x4
#define _CMCON1_T1ACS_SIZE                                  0x1
#define _CMCON1_T1ACS_LENGTH                                0x1
#define _CMCON1_T1ACS_MASK                                  0x10
#define _CMCON1_C1SYNC_POSN                                 0x0
#define _CMCON1_C1SYNC_POSITION                             0x0
#define _CMCON1_C1SYNC_SIZE                                 0x1
#define _CMCON1_C1SYNC_LENGTH                               0x1
#define _CMCON1_C1SYNC_MASK                                 0x1
#define _CMCON1_C1HYS_POSN                                  0x3
#define _CMCON1_C1HYS_POSITION                              0x3
#define _CMCON1_C1HYS_SIZE                                  0x1
#define _CMCON1_C1HYS_LENGTH                                0x1
#define _CMCON1_C1HYS_MASK                                  0x8

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRESH equ 01Eh");
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
        unsigned GO_nDONE               :1;
        unsigned CHS                    :3;
        unsigned                        :1;
        unsigned VCFG                   :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
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
#define _ADCON0_CHS_SIZE                                    0x3
#define _ADCON0_CHS_LENGTH                                  0x3
#define _ADCON0_CHS_MASK                                    0x1C
#define _ADCON0_VCFG_POSN                                   0x6
#define _ADCON0_VCFG_POSITION                               0x6
#define _ADCON0_VCFG_SIZE                                   0x1
#define _ADCON0_VCFG_LENGTH                                 0x1
#define _ADCON0_VCFG_MASK                                   0x40
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
        unsigned nGPPU                  :1;
    };
    struct {
        unsigned _PS0                    :1;  // Note: Changed by MikroE
        unsigned _PS1                    :1;  // Note: Changed by MikroE
        unsigned _PS2                    :1;  // Note: Changed by MikroE
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
#define _OPTION_REG_nGPPU_POSN                              0x7
#define _OPTION_REG_nGPPU_POSITION                          0x7
#define _OPTION_REG_nGPPU_SIZE                              0x1
#define _OPTION_REG_nGPPU_LENGTH                            0x1
#define _OPTION_REG_nGPPU_MASK                              0x80
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

// Register: TRISIO
#define TRISIO TRISIO
extern volatile unsigned char           TRISIO              __at(0x085);
#ifndef _LIB_BUILD
asm("TRISIO equ 085h");
#endif
// aliases
extern volatile unsigned char           TRISA               __at(0x085);
#ifndef _LIB_BUILD
asm("TRISA equ 085h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISIO0                :1;
        unsigned TRISIO1                :1;
        unsigned TRISIO2                :1;
        unsigned TRISIO3                :1;
        unsigned TRISIO4                :1;
        unsigned TRISIO5                :1;
    };
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
} TRISIObits_t;
extern volatile TRISIObits_t TRISIObits __at(0x085);
// bitfield macros
#define _TRISIO_TRISIO0_POSN                                0x0
#define _TRISIO_TRISIO0_POSITION                            0x0
#define _TRISIO_TRISIO0_SIZE                                0x1
#define _TRISIO_TRISIO0_LENGTH                              0x1
#define _TRISIO_TRISIO0_MASK                                0x1
#define _TRISIO_TRISIO1_POSN                                0x1
#define _TRISIO_TRISIO1_POSITION                            0x1
#define _TRISIO_TRISIO1_SIZE                                0x1
#define _TRISIO_TRISIO1_LENGTH                              0x1
#define _TRISIO_TRISIO1_MASK                                0x2
#define _TRISIO_TRISIO2_POSN                                0x2
#define _TRISIO_TRISIO2_POSITION                            0x2
#define _TRISIO_TRISIO2_SIZE                                0x1
#define _TRISIO_TRISIO2_LENGTH                              0x1
#define _TRISIO_TRISIO2_MASK                                0x4
#define _TRISIO_TRISIO3_POSN                                0x3
#define _TRISIO_TRISIO3_POSITION                            0x3
#define _TRISIO_TRISIO3_SIZE                                0x1
#define _TRISIO_TRISIO3_LENGTH                              0x1
#define _TRISIO_TRISIO3_MASK                                0x8
#define _TRISIO_TRISIO4_POSN                                0x4
#define _TRISIO_TRISIO4_POSITION                            0x4
#define _TRISIO_TRISIO4_SIZE                                0x1
#define _TRISIO_TRISIO4_LENGTH                              0x1
#define _TRISIO_TRISIO4_MASK                                0x10
#define _TRISIO_TRISIO5_POSN                                0x5
#define _TRISIO_TRISIO5_POSITION                            0x5
#define _TRISIO_TRISIO5_SIZE                                0x1
#define _TRISIO_TRISIO5_LENGTH                              0x1
#define _TRISIO_TRISIO5_MASK                                0x20
#define _TRISIO_TRISA0_POSN                                 0x0
#define _TRISIO_TRISA0_POSITION                             0x0
#define _TRISIO_TRISA0_SIZE                                 0x1
#define _TRISIO_TRISA0_LENGTH                               0x1
#define _TRISIO_TRISA0_MASK                                 0x1
#define _TRISIO_TRISA1_POSN                                 0x1
#define _TRISIO_TRISA1_POSITION                             0x1
#define _TRISIO_TRISA1_SIZE                                 0x1
#define _TRISIO_TRISA1_LENGTH                               0x1
#define _TRISIO_TRISA1_MASK                                 0x2
#define _TRISIO_TRISA2_POSN                                 0x2
#define _TRISIO_TRISA2_POSITION                             0x2
#define _TRISIO_TRISA2_SIZE                                 0x1
#define _TRISIO_TRISA2_LENGTH                               0x1
#define _TRISIO_TRISA2_MASK                                 0x4
#define _TRISIO_TRISA3_POSN                                 0x3
#define _TRISIO_TRISA3_POSITION                             0x3
#define _TRISIO_TRISA3_SIZE                                 0x1
#define _TRISIO_TRISA3_LENGTH                               0x1
#define _TRISIO_TRISA3_MASK                                 0x8
#define _TRISIO_TRISA4_POSN                                 0x4
#define _TRISIO_TRISA4_POSITION                             0x4
#define _TRISIO_TRISA4_SIZE                                 0x1
#define _TRISIO_TRISA4_LENGTH                               0x1
#define _TRISIO_TRISA4_MASK                                 0x10
#define _TRISIO_TRISA5_POSN                                 0x5
#define _TRISIO_TRISA5_POSITION                             0x5
#define _TRISIO_TRISA5_SIZE                                 0x1
#define _TRISIO_TRISA5_LENGTH                               0x1
#define _TRISIO_TRISA5_MASK                                 0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISIO0                :1;
        unsigned TRISIO1                :1;
        unsigned TRISIO2                :1;
        unsigned TRISIO3                :1;
        unsigned TRISIO4                :1;
        unsigned TRISIO5                :1;
    };
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
#define _TRISA_TRISIO0_POSN                                 0x0
#define _TRISA_TRISIO0_POSITION                             0x0
#define _TRISA_TRISIO0_SIZE                                 0x1
#define _TRISA_TRISIO0_LENGTH                               0x1
#define _TRISA_TRISIO0_MASK                                 0x1
#define _TRISA_TRISIO1_POSN                                 0x1
#define _TRISA_TRISIO1_POSITION                             0x1
#define _TRISA_TRISIO1_SIZE                                 0x1
#define _TRISA_TRISIO1_LENGTH                               0x1
#define _TRISA_TRISIO1_MASK                                 0x2
#define _TRISA_TRISIO2_POSN                                 0x2
#define _TRISA_TRISIO2_POSITION                             0x2
#define _TRISA_TRISIO2_SIZE                                 0x1
#define _TRISA_TRISIO2_LENGTH                               0x1
#define _TRISA_TRISIO2_MASK                                 0x4
#define _TRISA_TRISIO3_POSN                                 0x3
#define _TRISA_TRISIO3_POSITION                             0x3
#define _TRISA_TRISIO3_SIZE                                 0x1
#define _TRISA_TRISIO3_LENGTH                               0x1
#define _TRISA_TRISIO3_MASK                                 0x8
#define _TRISA_TRISIO4_POSN                                 0x4
#define _TRISA_TRISIO4_POSITION                             0x4
#define _TRISA_TRISIO4_SIZE                                 0x1
#define _TRISA_TRISIO4_LENGTH                               0x1
#define _TRISA_TRISIO4_MASK                                 0x10
#define _TRISA_TRISIO5_POSN                                 0x5
#define _TRISA_TRISIO5_POSITION                             0x5
#define _TRISA_TRISIO5_SIZE                                 0x1
#define _TRISA_TRISIO5_LENGTH                               0x1
#define _TRISA_TRISIO5_MASK                                 0x20
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
        unsigned                        :1;
        unsigned CMIE                   :1;
        unsigned                        :1;
        unsigned CCP1IE                 :1;
        unsigned ADIE                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned C1IE                   :1;
        unsigned                        :1;
        unsigned CCPIE                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned ECCPIE                 :1;
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
#define _PIE1_CMIE_POSN                                     0x3
#define _PIE1_CMIE_POSITION                                 0x3
#define _PIE1_CMIE_SIZE                                     0x1
#define _PIE1_CMIE_LENGTH                                   0x1
#define _PIE1_CMIE_MASK                                     0x8
#define _PIE1_CCP1IE_POSN                                   0x5
#define _PIE1_CCP1IE_POSITION                               0x5
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_C1IE_POSN                                     0x3
#define _PIE1_C1IE_POSITION                                 0x3
#define _PIE1_C1IE_SIZE                                     0x1
#define _PIE1_C1IE_LENGTH                                   0x1
#define _PIE1_C1IE_MASK                                     0x8
#define _PIE1_CCPIE_POSN                                    0x5
#define _PIE1_CCPIE_POSITION                                0x5
#define _PIE1_CCPIE_SIZE                                    0x1
#define _PIE1_CCPIE_LENGTH                                  0x1
#define _PIE1_CCPIE_MASK                                    0x20
#define _PIE1_ECCPIE_POSN                                   0x5
#define _PIE1_ECCPIE_POSITION                               0x5
#define _PIE1_ECCPIE_SIZE                                   0x1
#define _PIE1_ECCPIE_LENGTH                                 0x1
#define _PIE1_ECCPIE_MASK                                   0x20

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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x090);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 090h");
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
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x090);
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

// Register: PR2
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0x092);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 092h");  // Note: Changed by MikroE
#endif

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x093);
#ifndef _LIB_BUILD
asm("APFCON equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1ASEL                 :1;
        unsigned P1BSEL                 :1;
        unsigned                        :2;
        unsigned T1GSEL                 :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x093);
// bitfield macros
#define _APFCON_P1ASEL_POSN                                 0x0
#define _APFCON_P1ASEL_POSITION                             0x0
#define _APFCON_P1ASEL_SIZE                                 0x1
#define _APFCON_P1ASEL_LENGTH                               0x1
#define _APFCON_P1ASEL_MASK                                 0x1
#define _APFCON_P1BSEL_POSN                                 0x1
#define _APFCON_P1BSEL_POSITION                             0x1
#define _APFCON_P1BSEL_SIZE                                 0x1
#define _APFCON_P1BSEL_LENGTH                               0x1
#define _APFCON_P1BSEL_MASK                                 0x2
#define _APFCON_T1GSEL_POSN                                 0x4
#define _APFCON_T1GSEL_POSITION                             0x4
#define _APFCON_T1GSEL_SIZE                                 0x1
#define _APFCON_T1GSEL_LENGTH                               0x1
#define _APFCON_T1GSEL_MASK                                 0x10

// Register: WPU
#define WPU WPU
extern volatile unsigned char           WPU                 __at(0x095);
#ifndef _LIB_BUILD
asm("WPU equ 095h");
#endif
// aliases
extern volatile unsigned char           WPUA                __at(0x095);
#ifndef _LIB_BUILD
asm("WPUA equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned                        :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
    };
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned                        :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
} WPUbits_t;
extern volatile WPUbits_t WPUbits __at(0x095);
// bitfield macros
#define _WPU_WPU0_POSN                                      0x0
#define _WPU_WPU0_POSITION                                  0x0
#define _WPU_WPU0_SIZE                                      0x1
#define _WPU_WPU0_LENGTH                                    0x1
#define _WPU_WPU0_MASK                                      0x1
#define _WPU_WPU1_POSN                                      0x1
#define _WPU_WPU1_POSITION                                  0x1
#define _WPU_WPU1_SIZE                                      0x1
#define _WPU_WPU1_LENGTH                                    0x1
#define _WPU_WPU1_MASK                                      0x2
#define _WPU_WPU2_POSN                                      0x2
#define _WPU_WPU2_POSITION                                  0x2
#define _WPU_WPU2_SIZE                                      0x1
#define _WPU_WPU2_LENGTH                                    0x1
#define _WPU_WPU2_MASK                                      0x4
#define _WPU_WPU4_POSN                                      0x4
#define _WPU_WPU4_POSITION                                  0x4
#define _WPU_WPU4_SIZE                                      0x1
#define _WPU_WPU4_LENGTH                                    0x1
#define _WPU_WPU4_MASK                                      0x10
#define _WPU_WPU5_POSN                                      0x5
#define _WPU_WPU5_POSITION                                  0x5
#define _WPU_WPU5_SIZE                                      0x1
#define _WPU_WPU5_LENGTH                                    0x1
#define _WPU_WPU5_MASK                                      0x20
#define _WPU_WPUA0_POSN                                     0x0
#define _WPU_WPUA0_POSITION                                 0x0
#define _WPU_WPUA0_SIZE                                     0x1
#define _WPU_WPUA0_LENGTH                                   0x1
#define _WPU_WPUA0_MASK                                     0x1
#define _WPU_WPUA1_POSN                                     0x1
#define _WPU_WPUA1_POSITION                                 0x1
#define _WPU_WPUA1_SIZE                                     0x1
#define _WPU_WPUA1_LENGTH                                   0x1
#define _WPU_WPUA1_MASK                                     0x2
#define _WPU_WPUA2_POSN                                     0x2
#define _WPU_WPUA2_POSITION                                 0x2
#define _WPU_WPUA2_SIZE                                     0x1
#define _WPU_WPUA2_LENGTH                                   0x1
#define _WPU_WPUA2_MASK                                     0x4
#define _WPU_WPUA4_POSN                                     0x4
#define _WPU_WPUA4_POSITION                                 0x4
#define _WPU_WPUA4_SIZE                                     0x1
#define _WPU_WPUA4_LENGTH                                   0x1
#define _WPU_WPUA4_MASK                                     0x10
#define _WPU_WPUA5_POSN                                     0x5
#define _WPU_WPUA5_POSITION                                 0x5
#define _WPU_WPUA5_SIZE                                     0x1
#define _WPU_WPUA5_LENGTH                                   0x1
#define _WPU_WPUA5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned WPU0                   :1;
        unsigned WPU1                   :1;
        unsigned WPU2                   :1;
        unsigned                        :1;
        unsigned WPU4                   :1;
        unsigned WPU5                   :1;
    };
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned                        :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x095);
// bitfield macros
#define _WPUA_WPU0_POSN                                     0x0
#define _WPUA_WPU0_POSITION                                 0x0
#define _WPUA_WPU0_SIZE                                     0x1
#define _WPUA_WPU0_LENGTH                                   0x1
#define _WPUA_WPU0_MASK                                     0x1
#define _WPUA_WPU1_POSN                                     0x1
#define _WPUA_WPU1_POSITION                                 0x1
#define _WPUA_WPU1_SIZE                                     0x1
#define _WPUA_WPU1_LENGTH                                   0x1
#define _WPUA_WPU1_MASK                                     0x2
#define _WPUA_WPU2_POSN                                     0x2
#define _WPUA_WPU2_POSITION                                 0x2
#define _WPUA_WPU2_SIZE                                     0x1
#define _WPUA_WPU2_LENGTH                                   0x1
#define _WPUA_WPU2_MASK                                     0x4
#define _WPUA_WPU4_POSN                                     0x4
#define _WPUA_WPU4_POSITION                                 0x4
#define _WPUA_WPU4_SIZE                                     0x1
#define _WPUA_WPU4_LENGTH                                   0x1
#define _WPUA_WPU4_MASK                                     0x10
#define _WPUA_WPU5_POSN                                     0x5
#define _WPUA_WPU5_POSITION                                 0x5
#define _WPUA_WPU5_SIZE                                     0x1
#define _WPUA_WPU5_LENGTH                                   0x1
#define _WPUA_WPU5_MASK                                     0x20
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

// Register: IOC
#define IOC IOC
extern volatile unsigned char           IOC                 __at(0x096);
#ifndef _LIB_BUILD
asm("IOC equ 096h");
#endif
// aliases
extern volatile unsigned char           IOCA                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCA equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOC0                   :1;
        unsigned IOC1                   :1;
        unsigned IOC2                   :1;
        unsigned IOC3                   :1;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
    };
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned IOCA2                  :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
} IOCbits_t;
extern volatile IOCbits_t IOCbits __at(0x096);
// bitfield macros
#define _IOC_IOC0_POSN                                      0x0
#define _IOC_IOC0_POSITION                                  0x0
#define _IOC_IOC0_SIZE                                      0x1
#define _IOC_IOC0_LENGTH                                    0x1
#define _IOC_IOC0_MASK                                      0x1
#define _IOC_IOC1_POSN                                      0x1
#define _IOC_IOC1_POSITION                                  0x1
#define _IOC_IOC1_SIZE                                      0x1
#define _IOC_IOC1_LENGTH                                    0x1
#define _IOC_IOC1_MASK                                      0x2
#define _IOC_IOC2_POSN                                      0x2
#define _IOC_IOC2_POSITION                                  0x2
#define _IOC_IOC2_SIZE                                      0x1
#define _IOC_IOC2_LENGTH                                    0x1
#define _IOC_IOC2_MASK                                      0x4
#define _IOC_IOC3_POSN                                      0x3
#define _IOC_IOC3_POSITION                                  0x3
#define _IOC_IOC3_SIZE                                      0x1
#define _IOC_IOC3_LENGTH                                    0x1
#define _IOC_IOC3_MASK                                      0x8
#define _IOC_IOC4_POSN                                      0x4
#define _IOC_IOC4_POSITION                                  0x4
#define _IOC_IOC4_SIZE                                      0x1
#define _IOC_IOC4_LENGTH                                    0x1
#define _IOC_IOC4_MASK                                      0x10
#define _IOC_IOC5_POSN                                      0x5
#define _IOC_IOC5_POSITION                                  0x5
#define _IOC_IOC5_SIZE                                      0x1
#define _IOC_IOC5_LENGTH                                    0x1
#define _IOC_IOC5_MASK                                      0x20
#define _IOC_IOCA0_POSN                                     0x0
#define _IOC_IOCA0_POSITION                                 0x0
#define _IOC_IOCA0_SIZE                                     0x1
#define _IOC_IOCA0_LENGTH                                   0x1
#define _IOC_IOCA0_MASK                                     0x1
#define _IOC_IOCA1_POSN                                     0x1
#define _IOC_IOCA1_POSITION                                 0x1
#define _IOC_IOCA1_SIZE                                     0x1
#define _IOC_IOCA1_LENGTH                                   0x1
#define _IOC_IOCA1_MASK                                     0x2
#define _IOC_IOCA2_POSN                                     0x2
#define _IOC_IOCA2_POSITION                                 0x2
#define _IOC_IOCA2_SIZE                                     0x1
#define _IOC_IOCA2_LENGTH                                   0x1
#define _IOC_IOCA2_MASK                                     0x4
#define _IOC_IOCA3_POSN                                     0x3
#define _IOC_IOCA3_POSITION                                 0x3
#define _IOC_IOCA3_SIZE                                     0x1
#define _IOC_IOCA3_LENGTH                                   0x1
#define _IOC_IOCA3_MASK                                     0x8
#define _IOC_IOCA4_POSN                                     0x4
#define _IOC_IOCA4_POSITION                                 0x4
#define _IOC_IOCA4_SIZE                                     0x1
#define _IOC_IOCA4_LENGTH                                   0x1
#define _IOC_IOCA4_MASK                                     0x10
#define _IOC_IOCA5_POSN                                     0x5
#define _IOC_IOCA5_POSITION                                 0x5
#define _IOC_IOCA5_SIZE                                     0x1
#define _IOC_IOCA5_LENGTH                                   0x1
#define _IOC_IOCA5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned IOC0                   :1;
        unsigned IOC1                   :1;
        unsigned IOC2                   :1;
        unsigned IOC3                   :1;
        unsigned IOC4                   :1;
        unsigned IOC5                   :1;
    };
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned IOCA2                  :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
} IOCAbits_t;
extern volatile IOCAbits_t IOCAbits __at(0x096);
// bitfield macros
#define _IOCA_IOC0_POSN                                     0x0
#define _IOCA_IOC0_POSITION                                 0x0
#define _IOCA_IOC0_SIZE                                     0x1
#define _IOCA_IOC0_LENGTH                                   0x1
#define _IOCA_IOC0_MASK                                     0x1
#define _IOCA_IOC1_POSN                                     0x1
#define _IOCA_IOC1_POSITION                                 0x1
#define _IOCA_IOC1_SIZE                                     0x1
#define _IOCA_IOC1_LENGTH                                   0x1
#define _IOCA_IOC1_MASK                                     0x2
#define _IOCA_IOC2_POSN                                     0x2
#define _IOCA_IOC2_POSITION                                 0x2
#define _IOCA_IOC2_SIZE                                     0x1
#define _IOCA_IOC2_LENGTH                                   0x1
#define _IOCA_IOC2_MASK                                     0x4
#define _IOCA_IOC3_POSN                                     0x3
#define _IOCA_IOC3_POSITION                                 0x3
#define _IOCA_IOC3_SIZE                                     0x1
#define _IOCA_IOC3_LENGTH                                   0x1
#define _IOCA_IOC3_MASK                                     0x8
#define _IOCA_IOC4_POSN                                     0x4
#define _IOCA_IOC4_POSITION                                 0x4
#define _IOCA_IOC4_SIZE                                     0x1
#define _IOCA_IOC4_LENGTH                                   0x1
#define _IOCA_IOC4_MASK                                     0x10
#define _IOCA_IOC5_POSN                                     0x5
#define _IOCA_IOC5_POSITION                                 0x5
#define _IOCA_IOC5_SIZE                                     0x1
#define _IOCA_IOC5_LENGTH                                   0x1
#define _IOCA_IOC5_MASK                                     0x20
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
#define _IOCA_IOCA2_POSN                                    0x2
#define _IOCA_IOCA2_POSITION                                0x2
#define _IOCA_IOCA2_SIZE                                    0x1
#define _IOCA_IOCA2_LENGTH                                  0x1
#define _IOCA_IOCA2_MASK                                    0x4
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

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x098);
#ifndef _LIB_BUILD
asm("PMCON1 equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x098);
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
extern volatile unsigned char           PMCON2              __at(0x099);
#ifndef _LIB_BUILD
asm("PMCON2 equ 099h");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x09A);
#ifndef _LIB_BUILD
asm("PMADRL equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRL                 :8;
    };
    struct {
        unsigned PMADRL0                :1;
        unsigned PMADRL1                :1;
        unsigned PMADRL2                :1;
        unsigned PMADRL3                :1;
        unsigned PMADRL4                :1;
        unsigned PMADRL5                :1;
        unsigned PMADRL6                :1;
        unsigned PMADRL7                :1;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x09A);
// bitfield macros
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF
#define _PMADRL_PMADRL0_POSN                                0x0
#define _PMADRL_PMADRL0_POSITION                            0x0
#define _PMADRL_PMADRL0_SIZE                                0x1
#define _PMADRL_PMADRL0_LENGTH                              0x1
#define _PMADRL_PMADRL0_MASK                                0x1
#define _PMADRL_PMADRL1_POSN                                0x1
#define _PMADRL_PMADRL1_POSITION                            0x1
#define _PMADRL_PMADRL1_SIZE                                0x1
#define _PMADRL_PMADRL1_LENGTH                              0x1
#define _PMADRL_PMADRL1_MASK                                0x2
#define _PMADRL_PMADRL2_POSN                                0x2
#define _PMADRL_PMADRL2_POSITION                            0x2
#define _PMADRL_PMADRL2_SIZE                                0x1
#define _PMADRL_PMADRL2_LENGTH                              0x1
#define _PMADRL_PMADRL2_MASK                                0x4
#define _PMADRL_PMADRL3_POSN                                0x3
#define _PMADRL_PMADRL3_POSITION                            0x3
#define _PMADRL_PMADRL3_SIZE                                0x1
#define _PMADRL_PMADRL3_LENGTH                              0x1
#define _PMADRL_PMADRL3_MASK                                0x8
#define _PMADRL_PMADRL4_POSN                                0x4
#define _PMADRL_PMADRL4_POSITION                            0x4
#define _PMADRL_PMADRL4_SIZE                                0x1
#define _PMADRL_PMADRL4_LENGTH                              0x1
#define _PMADRL_PMADRL4_MASK                                0x10
#define _PMADRL_PMADRL5_POSN                                0x5
#define _PMADRL_PMADRL5_POSITION                            0x5
#define _PMADRL_PMADRL5_SIZE                                0x1
#define _PMADRL_PMADRL5_LENGTH                              0x1
#define _PMADRL_PMADRL5_MASK                                0x20
#define _PMADRL_PMADRL6_POSN                                0x6
#define _PMADRL_PMADRL6_POSITION                            0x6
#define _PMADRL_PMADRL6_SIZE                                0x1
#define _PMADRL_PMADRL6_LENGTH                              0x1
#define _PMADRL_PMADRL6_MASK                                0x40
#define _PMADRL_PMADRL7_POSN                                0x7
#define _PMADRL_PMADRL7_POSITION                            0x7
#define _PMADRL_PMADRL7_SIZE                                0x1
#define _PMADRL_PMADRL7_LENGTH                              0x1
#define _PMADRL_PMADRL7_MASK                                0x80

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x09B);
#ifndef _LIB_BUILD
asm("PMADRH equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRH0                :1;
        unsigned PMADRH1                :1;
        unsigned PMADRH2                :1;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x09B);
// bitfield macros
#define _PMADRH_PMADRH0_POSN                                0x0
#define _PMADRH_PMADRH0_POSITION                            0x0
#define _PMADRH_PMADRH0_SIZE                                0x1
#define _PMADRH_PMADRH0_LENGTH                              0x1
#define _PMADRH_PMADRH0_MASK                                0x1
#define _PMADRH_PMADRH1_POSN                                0x1
#define _PMADRH_PMADRH1_POSITION                            0x1
#define _PMADRH_PMADRH1_SIZE                                0x1
#define _PMADRH_PMADRH1_LENGTH                              0x1
#define _PMADRH_PMADRH1_MASK                                0x2
#define _PMADRH_PMADRH2_POSN                                0x2
#define _PMADRH_PMADRH2_POSITION                            0x2
#define _PMADRH_PMADRH2_SIZE                                0x1
#define _PMADRH_PMADRH2_LENGTH                              0x1
#define _PMADRH_PMADRH2_MASK                                0x4

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x09C);
#ifndef _LIB_BUILD
asm("PMDATL equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATL                 :8;
    };
    struct {
        unsigned PMDATL0                :1;
        unsigned PMDATL1                :1;
        unsigned PMDATL2                :1;
        unsigned PMDATL3                :1;
        unsigned PMDATL4                :1;
        unsigned PMDATL5                :1;
        unsigned PMDATL6                :1;
        unsigned PMDATL7                :1;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x09C);
// bitfield macros
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF
#define _PMDATL_PMDATL0_POSN                                0x0
#define _PMDATL_PMDATL0_POSITION                            0x0
#define _PMDATL_PMDATL0_SIZE                                0x1
#define _PMDATL_PMDATL0_LENGTH                              0x1
#define _PMDATL_PMDATL0_MASK                                0x1
#define _PMDATL_PMDATL1_POSN                                0x1
#define _PMDATL_PMDATL1_POSITION                            0x1
#define _PMDATL_PMDATL1_SIZE                                0x1
#define _PMDATL_PMDATL1_LENGTH                              0x1
#define _PMDATL_PMDATL1_MASK                                0x2
#define _PMDATL_PMDATL2_POSN                                0x2
#define _PMDATL_PMDATL2_POSITION                            0x2
#define _PMDATL_PMDATL2_SIZE                                0x1
#define _PMDATL_PMDATL2_LENGTH                              0x1
#define _PMDATL_PMDATL2_MASK                                0x4
#define _PMDATL_PMDATL3_POSN                                0x3
#define _PMDATL_PMDATL3_POSITION                            0x3
#define _PMDATL_PMDATL3_SIZE                                0x1
#define _PMDATL_PMDATL3_LENGTH                              0x1
#define _PMDATL_PMDATL3_MASK                                0x8
#define _PMDATL_PMDATL4_POSN                                0x4
#define _PMDATL_PMDATL4_POSITION                            0x4
#define _PMDATL_PMDATL4_SIZE                                0x1
#define _PMDATL_PMDATL4_LENGTH                              0x1
#define _PMDATL_PMDATL4_MASK                                0x10
#define _PMDATL_PMDATL5_POSN                                0x5
#define _PMDATL_PMDATL5_POSITION                            0x5
#define _PMDATL_PMDATL5_SIZE                                0x1
#define _PMDATL_PMDATL5_LENGTH                              0x1
#define _PMDATL_PMDATL5_MASK                                0x20
#define _PMDATL_PMDATL6_POSN                                0x6
#define _PMDATL_PMDATL6_POSITION                            0x6
#define _PMDATL_PMDATL6_SIZE                                0x1
#define _PMDATL_PMDATL6_LENGTH                              0x1
#define _PMDATL_PMDATL6_MASK                                0x40
#define _PMDATL_PMDATL7_POSN                                0x7
#define _PMDATL_PMDATL7_POSITION                            0x7
#define _PMDATL_PMDATL7_SIZE                                0x1
#define _PMDATL_PMDATL7_LENGTH                              0x1
#define _PMDATL_PMDATL7_MASK                                0x80

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x09D);
#ifndef _LIB_BUILD
asm("PMDATH equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATH                 :6;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x09D);
// bitfield macros
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADRESL equ 09Eh");
#endif

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x09F);
#ifndef _LIB_BUILD
asm("ANSEL equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS                    :4;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x09F);
// bitfield macros
#define _ANSEL_ANS_POSN                                     0x0
#define _ANSEL_ANS_POSITION                                 0x0
#define _ANSEL_ANS_SIZE                                     0x4
#define _ANSEL_ANS_LENGTH                                   0x4
#define _ANSEL_ANS_MASK                                     0xF
#define _ANSEL_ADCS_POSN                                    0x4
#define _ANSEL_ADCS_POSITION                                0x4
#define _ANSEL_ADCS_SIZE                                    0x3
#define _ANSEL_ADCS_LENGTH                                  0x3
#define _ANSEL_ADCS_MASK                                    0x70
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
#define _ANSEL_ADCS0_POSN                                   0x4
#define _ANSEL_ADCS0_POSITION                               0x4
#define _ANSEL_ADCS0_SIZE                                   0x1
#define _ANSEL_ADCS0_LENGTH                                 0x1
#define _ANSEL_ADCS0_MASK                                   0x10
#define _ANSEL_ADCS1_POSN                                   0x5
#define _ANSEL_ADCS1_POSITION                               0x5
#define _ANSEL_ADCS1_SIZE                                   0x1
#define _ANSEL_ADCS1_LENGTH                                 0x1
#define _ANSEL_ADCS1_MASK                                   0x20
#define _ANSEL_ADCS2_POSN                                   0x6
#define _ANSEL_ADCS2_POSITION                               0x6
#define _ANSEL_ADCS2_SIZE                                   0x1
#define _ANSEL_ADCS2_LENGTH                                 0x1
#define _ANSEL_ADCS2_MASK                                   0x40

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
// ANSEL<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4FC);	// @ (0x9F * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ANSEL,4)
// ANSEL<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4FD);	// @ (0x9F * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ANSEL,5)
// ANSEL<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4FE);	// @ (0x9F * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ANSEL,6)
// ADCON0<ADFM>
extern volatile __bit                   ADFM                __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON0,7)
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
extern volatile __bit                   ANS0                __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL,0)
// ANSEL<ANS1>
extern volatile __bit                   ANS1                __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL,1)
// ANSEL<ANS2>
extern volatile __bit                   ANS2                __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL,2)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0x4FB);	// @ (0x9F * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// CMCON0<C1CH>
extern volatile __bit                   C1CH                __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 C1CH_bit            _BIT_ACCESS(CMCON0,0)
// CMCON1<C1HYS>
extern volatile __bit                   C1HYS               __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 C1HYS_bit           _BIT_ACCESS(CMCON1,3)
// PIE1<C1IE>
extern volatile __bit                   C1IE                __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 C1IE_bit            _BIT_ACCESS(PIE1,3)
// PIR1<C1IF>
extern volatile __bit                   C1IF                __at(0x63);	// @ (0xC * 8 + 3)
#define                                 C1IF_bit            _BIT_ACCESS(PIR1,3)
// CMCON0<C1OE>
extern volatile __bit                   C1OE                __at(0xD5);	// @ (0x1A * 8 + 5)
#define                                 C1OE_bit            _BIT_ACCESS(CMCON0,5)
// CMCON0<C1ON>
extern volatile __bit                   C1ON                __at(0xD7);	// @ (0x1A * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CMCON0,7)
// CMCON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0xD6);	// @ (0x1A * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CMCON0,6)
// CMCON0<C1POL>
extern volatile __bit                   C1POL               __at(0xD4);	// @ (0x1A * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CMCON0,4)
// CMCON0<C1R>
extern volatile __bit                   C1R                 __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 C1R_bit             _BIT_ACCESS(CMCON0,2)
// CMCON1<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CMCON1,0)
// VRCON<C1VREN>
extern volatile __bit                   C1VREN              __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 C1VREN_bit          _BIT_ACCESS(VRCON,7)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,5)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x65);	// @ (0xC * 8 + 5)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,5)
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
// PIE1<CCPIE>
extern volatile __bit                   CCPIE               __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 CCPIE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<CCPIF>
extern volatile __bit                   CCPIF               __at(0x65);	// @ (0xC * 8 + 5)
#define                                 CCPIF_bit           _BIT_ACCESS(PIR1,5)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// CMCON0<CMCH>
extern volatile __bit                   CMCH                __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 CMCH_bit            _BIT_ACCESS(CMCON0,0)
// CMCON1<CMHYS>
extern volatile __bit                   CMHYS               __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 CMHYS_bit           _BIT_ACCESS(CMCON1,3)
// PIE1<CMIE>
extern volatile __bit                   CMIE                __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 CMIE_bit            _BIT_ACCESS(PIE1,3)
// PIR1<CMIF>
extern volatile __bit                   CMIF                __at(0x63);	// @ (0xC * 8 + 3)
#define                                 CMIF_bit            _BIT_ACCESS(PIR1,3)
// CMCON0<CMOE>
extern volatile __bit                   CMOE                __at(0xD5);	// @ (0x1A * 8 + 5)
#define                                 CMOE_bit            _BIT_ACCESS(CMCON0,5)
// CMCON0<CMON>
extern volatile __bit                   CMON                __at(0xD7);	// @ (0x1A * 8 + 7)
#define                                 CMON_bit            _BIT_ACCESS(CMCON0,7)
// CMCON0<CMPOL>
extern volatile __bit                   CMPOL               __at(0xD4);	// @ (0x1A * 8 + 4)
#define                                 CMPOL_bit           _BIT_ACCESS(CMCON0,4)
// CMCON0<CMR>
extern volatile __bit                   CMR                 __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 CMR_bit             _BIT_ACCESS(CMCON0,2)
// CMCON1<CMSYNC>
extern volatile __bit                   CMSYNC              __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 CMSYNC_bit          _BIT_ACCESS(CMCON1,0)
// VRCON<CMVREN>
extern volatile __bit                   CMVREN              __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 CMVREN_bit          _BIT_ACCESS(VRCON,7)
// CMCON0<COUT>
extern volatile __bit                   COUT                __at(0xD6);	// @ (0x1A * 8 + 6)
#define                                 COUT_bit            _BIT_ACCESS(CMCON0,6)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DCB0>
extern volatile __bit                   DCB0                __at(0xAC);	// @ (0x15 * 8 + 4)
#define                                 DCB0_bit            _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DCB1>
extern volatile __bit                   DCB1                __at(0xAD);	// @ (0x15 * 8 + 5)
#define                                 DCB1_bit            _BIT_ACCESS(CCP1CON,5)
// ECCPAS<ECCPAS0>
extern volatile __bit                   ECCPAS0             __at(0xBC);	// @ (0x17 * 8 + 4)
#define                                 ECCPAS0_bit         _BIT_ACCESS(ECCPAS,4)
// ECCPAS<ECCPAS1>
extern volatile __bit                   ECCPAS1             __at(0xBD);	// @ (0x17 * 8 + 5)
#define                                 ECCPAS1_bit         _BIT_ACCESS(ECCPAS,5)
// ECCPAS<ECCPAS2>
extern volatile __bit                   ECCPAS2             __at(0xBE);	// @ (0x17 * 8 + 6)
#define                                 ECCPAS2_bit         _BIT_ACCESS(ECCPAS,6)
// ECCPAS<ECCPASE>
extern volatile __bit                   ECCPASE             __at(0xBF);	// @ (0x17 * 8 + 7)
#define                                 ECCPASE_bit         _BIT_ACCESS(ECCPAS,7)
// PIE1<ECCPIE>
extern volatile __bit                   ECCPIE              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 ECCPIE_bit          _BIT_ACCESS(PIE1,5)
// PIR1<ECCPIF>
extern volatile __bit                   ECCPIF              __at(0x65);	// @ (0xC * 8 + 5)
#define                                 ECCPIF_bit          _BIT_ACCESS(PIR1,5)
// VRCON<FVREN>
extern volatile __bit                   FVREN               __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 FVREN_bit           _BIT_ACCESS(VRCON,4)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// GPIO<GP0>
extern volatile __bit                   GP0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 GP0_bit             _BIT_ACCESS(GPIO,0)
// GPIO<GP1>
extern volatile __bit                   GP1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 GP1_bit             _BIT_ACCESS(GPIO,1)
// GPIO<GP2>
extern volatile __bit                   GP2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 GP2_bit             _BIT_ACCESS(GPIO,2)
// GPIO<GP3>
extern volatile __bit                   GP3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 GP3_bit             _BIT_ACCESS(GPIO,3)
// GPIO<GP4>
extern volatile __bit                   GP4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 GP4_bit             _BIT_ACCESS(GPIO,4)
// GPIO<GP5>
extern volatile __bit                   GP5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 GP5_bit             _BIT_ACCESS(GPIO,5)
// INTCON<GPIE>
extern volatile __bit                   GPIE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 GPIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<GPIF>
extern volatile __bit                   GPIF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 GPIF_bit            _BIT_ACCESS(INTCON,0)
// GPIO<GPIO0>
extern volatile __bit                   GPIO0               __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 GPIO0_bit           _BIT_ACCESS(GPIO,0)
// GPIO<GPIO1>
extern volatile __bit                   GPIO1               __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 GPIO1_bit           _BIT_ACCESS(GPIO,1)
// GPIO<GPIO2>
extern volatile __bit                   GPIO2               __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 GPIO2_bit           _BIT_ACCESS(GPIO,2)
// GPIO<GPIO3>
extern volatile __bit                   GPIO3               __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 GPIO3_bit           _BIT_ACCESS(GPIO,3)
// GPIO<GPIO4>
extern volatile __bit                   GPIO4               __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 GPIO4_bit           _BIT_ACCESS(GPIO,4)
// GPIO<GPIO5>
extern volatile __bit                   GPIO5               __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 GPIO5_bit           _BIT_ACCESS(GPIO,5)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOC<IOC0>
extern volatile __bit                   IOC0                __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOC0_bit            _BIT_ACCESS(IOC,0)
// IOC<IOC1>
extern volatile __bit                   IOC1                __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOC1_bit            _BIT_ACCESS(IOC,1)
// IOC<IOC2>
extern volatile __bit                   IOC2                __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOC2_bit            _BIT_ACCESS(IOC,2)
// IOC<IOC3>
extern volatile __bit                   IOC3                __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOC3_bit            _BIT_ACCESS(IOC,3)
// IOC<IOC4>
extern volatile __bit                   IOC4                __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOC4_bit            _BIT_ACCESS(IOC,4)
// IOC<IOC5>
extern volatile __bit                   IOC5                __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOC5_bit            _BIT_ACCESS(IOC,5)
// IOC<IOCA0>
extern volatile __bit                   IOCA0               __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOCA0_bit           _BIT_ACCESS(IOC,0)
// IOC<IOCA1>
extern volatile __bit                   IOCA1               __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOCA1_bit           _BIT_ACCESS(IOC,1)
// IOC<IOCA2>
extern volatile __bit                   IOCA2               __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOCA2_bit           _BIT_ACCESS(IOC,2)
// IOC<IOCA3>
extern volatile __bit                   IOCA3               __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOCA3_bit           _BIT_ACCESS(IOC,3)
// IOC<IOCA4>
extern volatile __bit                   IOCA4               __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOCA4_bit           _BIT_ACCESS(IOC,4)
// IOC<IOCA5>
extern volatile __bit                   IOCA5               __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOCA5_bit           _BIT_ACCESS(IOC,5)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// APFCON<P1ASEL>
extern volatile __bit                   P1ASEL              __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 P1ASEL_bit          _BIT_ACCESS(APFCON,0)
// APFCON<P1BSEL>
extern volatile __bit                   P1BSEL              __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 P1BSEL_bit          _BIT_ACCESS(APFCON,1)
// CCP1CON<P1M>
extern volatile __bit                   P1M                 __at(0xAF);	// @ (0x15 * 8 + 7)
#define                                 P1M_bit             _BIT_ACCESS(CCP1CON,7)
// PWM1CON<PDC0>
extern volatile __bit                   PDC0                __at(0xB0);	// @ (0x16 * 8 + 0)
#define                                 PDC0_bit            _BIT_ACCESS(PWM1CON,0)
// PWM1CON<PDC1>
extern volatile __bit                   PDC1                __at(0xB1);	// @ (0x16 * 8 + 1)
#define                                 PDC1_bit            _BIT_ACCESS(PWM1CON,1)
// PWM1CON<PDC2>
extern volatile __bit                   PDC2                __at(0xB2);	// @ (0x16 * 8 + 2)
#define                                 PDC2_bit            _BIT_ACCESS(PWM1CON,2)
// PWM1CON<PDC3>
extern volatile __bit                   PDC3                __at(0xB3);	// @ (0x16 * 8 + 3)
#define                                 PDC3_bit            _BIT_ACCESS(PWM1CON,3)
// PWM1CON<PDC4>
extern volatile __bit                   PDC4                __at(0xB4);	// @ (0x16 * 8 + 4)
#define                                 PDC4_bit            _BIT_ACCESS(PWM1CON,4)
// PWM1CON<PDC5>
extern volatile __bit                   PDC5                __at(0xB5);	// @ (0x16 * 8 + 5)
#define                                 PDC5_bit            _BIT_ACCESS(PWM1CON,5)
// PWM1CON<PDC6>
extern volatile __bit                   PDC6                __at(0xB6);	// @ (0x16 * 8 + 6)
#define                                 PDC6_bit            _BIT_ACCESS(PWM1CON,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// PMADRH<PMADRH0>
extern volatile __bit                   PMADRH0             __at(0x4D8);	// @ (0x9B * 8 + 0)
#define                                 PMADRH0_bit         _BIT_ACCESS(PMADRH,0)
// PMADRH<PMADRH1>
extern volatile __bit                   PMADRH1             __at(0x4D9);	// @ (0x9B * 8 + 1)
#define                                 PMADRH1_bit         _BIT_ACCESS(PMADRH,1)
// PMADRH<PMADRH2>
extern volatile __bit                   PMADRH2             __at(0x4DA);	// @ (0x9B * 8 + 2)
#define                                 PMADRH2_bit         _BIT_ACCESS(PMADRH,2)
// PMADRL<PMADRL0>
extern volatile __bit                   PMADRL0             __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 PMADRL0_bit         _BIT_ACCESS(PMADRL,0)
// PMADRL<PMADRL1>
extern volatile __bit                   PMADRL1             __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 PMADRL1_bit         _BIT_ACCESS(PMADRL,1)
// PMADRL<PMADRL2>
extern volatile __bit                   PMADRL2             __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 PMADRL2_bit         _BIT_ACCESS(PMADRL,2)
// PMADRL<PMADRL3>
extern volatile __bit                   PMADRL3             __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 PMADRL3_bit         _BIT_ACCESS(PMADRL,3)
// PMADRL<PMADRL4>
extern volatile __bit                   PMADRL4             __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 PMADRL4_bit         _BIT_ACCESS(PMADRL,4)
// PMADRL<PMADRL5>
extern volatile __bit                   PMADRL5             __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 PMADRL5_bit         _BIT_ACCESS(PMADRL,5)
// PMADRL<PMADRL6>
extern volatile __bit                   PMADRL6             __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 PMADRL6_bit         _BIT_ACCESS(PMADRL,6)
// PMADRL<PMADRL7>
extern volatile __bit                   PMADRL7             __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 PMADRL7_bit         _BIT_ACCESS(PMADRL,7)
// PMDATL<PMDATL0>
extern volatile __bit                   PMDATL0             __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 PMDATL0_bit         _BIT_ACCESS(PMDATL,0)
// PMDATL<PMDATL1>
extern volatile __bit                   PMDATL1             __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 PMDATL1_bit         _BIT_ACCESS(PMDATL,1)
// PMDATL<PMDATL2>
extern volatile __bit                   PMDATL2             __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 PMDATL2_bit         _BIT_ACCESS(PMDATL,2)
// PMDATL<PMDATL3>
extern volatile __bit                   PMDATL3             __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 PMDATL3_bit         _BIT_ACCESS(PMDATL,3)
// PMDATL<PMDATL4>
extern volatile __bit                   PMDATL4             __at(0x4E4);	// @ (0x9C * 8 + 4)
#define                                 PMDATL4_bit         _BIT_ACCESS(PMDATL,4)
// PMDATL<PMDATL5>
extern volatile __bit                   PMDATL5             __at(0x4E5);	// @ (0x9C * 8 + 5)
#define                                 PMDATL5_bit         _BIT_ACCESS(PMDATL,5)
// PMDATL<PMDATL6>
extern volatile __bit                   PMDATL6             __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 PMDATL6_bit         _BIT_ACCESS(PMDATL,6)
// PMDATL<PMDATL7>
extern volatile __bit                   PMDATL7             __at(0x4E7);	// @ (0x9C * 8 + 7)
#define                                 PMDATL7_bit         _BIT_ACCESS(PMDATL,7)
// PWM1CON<PRSEN>
extern volatile __bit                   PRSEN               __at(0xB7);	// @ (0x16 * 8 + 7)
#define                                 PRSEN_bit           _BIT_ACCESS(PWM1CON,7)
// OPTION_REG<PS0>
extern volatile __bit                   _PS0                 __at(0x408);	// @ (0x81 * 8 + 0)  // Note: Changed by MikroE
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   _PS1                 __at(0x409);	// @ (0x81 * 8 + 1)  // Note: Changed by MikroE
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   _PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)  // Note: Changed by MikroE
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x40B);	// @ (0x81 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// ECCPAS<PSSAC0>
extern volatile __bit                   PSSAC0              __at(0xBA);	// @ (0x17 * 8 + 2)
#define                                 PSSAC0_bit          _BIT_ACCESS(ECCPAS,2)
// ECCPAS<PSSAC1>
extern volatile __bit                   PSSAC1              __at(0xBB);	// @ (0x17 * 8 + 3)
#define                                 PSSAC1_bit          _BIT_ACCESS(ECCPAS,3)
// ECCPAS<PSSBD0>
extern volatile __bit                   PSSBD0              __at(0xB8);	// @ (0x17 * 8 + 0)
#define                                 PSSBD0_bit          _BIT_ACCESS(ECCPAS,0)
// ECCPAS<PSSBD1>
extern volatile __bit                   PSSBD1              __at(0xB9);	// @ (0x17 * 8 + 1)
#define                                 PSSBD1_bit          _BIT_ACCESS(ECCPAS,1)
// GPIO<RA0>
extern volatile __bit                   RA0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(GPIO,0)
// GPIO<RA1>
extern volatile __bit                   RA1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(GPIO,1)
// GPIO<RA2>
extern volatile __bit                   RA2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(GPIO,2)
// GPIO<RA3>
extern volatile __bit                   RA3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(GPIO,3)
// GPIO<RA4>
extern volatile __bit                   RA4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(GPIO,4)
// GPIO<RA5>
extern volatile __bit                   RA5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(GPIO,5)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
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
// CMCON1<T1ACS>
extern volatile __bit                   T1ACS               __at(0xE4);	// @ (0x1C * 8 + 4)
#define                                 T1ACS_bit           _BIT_ACCESS(CMCON1,4)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1GINV>
extern volatile __bit                   T1GINV              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GINV_bit          _BIT_ACCESS(T1CON,7)
// APFCON<T1GSEL>
extern volatile __bit                   T1GSEL              __at(0x49C);	// @ (0x93 * 8 + 4)
#define                                 T1GSEL_bit          _BIT_ACCESS(APFCON,4)
// CMCON1<T1GSS>
extern volatile __bit                   T1GSS               __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 T1GSS_bit           _BIT_ACCESS(CMCON1,1)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
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
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
// TRISIO<TRISA0>
extern volatile __bit                   TRISA0              __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISIO,0)
// TRISIO<TRISA1>
extern volatile __bit                   TRISA1              __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISIO,1)
// TRISIO<TRISA2>
extern volatile __bit                   TRISA2              __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISIO,2)
// TRISIO<TRISA3>
extern volatile __bit                   TRISA3              __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISIO,3)
// TRISIO<TRISA4>
extern volatile __bit                   TRISA4              __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISIO,4)
// TRISIO<TRISA5>
extern volatile __bit                   TRISA5              __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISIO,5)
// TRISIO<TRISIO0>
extern volatile __bit                   TRISIO0             __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISIO0_bit         _BIT_ACCESS(TRISIO,0)
// TRISIO<TRISIO1>
extern volatile __bit                   TRISIO1             __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISIO1_bit         _BIT_ACCESS(TRISIO,1)
// TRISIO<TRISIO2>
extern volatile __bit                   TRISIO2             __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISIO2_bit         _BIT_ACCESS(TRISIO,2)
// TRISIO<TRISIO3>
extern volatile __bit                   TRISIO3             __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISIO3_bit         _BIT_ACCESS(TRISIO,3)
// TRISIO<TRISIO4>
extern volatile __bit                   TRISIO4             __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISIO4_bit         _BIT_ACCESS(TRISIO,4)
// TRISIO<TRISIO5>
extern volatile __bit                   TRISIO5             __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISIO5_bit         _BIT_ACCESS(TRISIO,5)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x481);	// @ (0x90 * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// ADCON0<VCFG>
extern volatile __bit                   VCFG                __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 VCFG_bit            _BIT_ACCESS(ADCON0,6)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0xC9);	// @ (0x19 * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// WPU<WPU0>
extern volatile __bit                   WPU0                __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPU0_bit            _BIT_ACCESS(WPU,0)
// WPU<WPU1>
extern volatile __bit                   WPU1                __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPU1_bit            _BIT_ACCESS(WPU,1)
// WPU<WPU2>
extern volatile __bit                   WPU2                __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPU2_bit            _BIT_ACCESS(WPU,2)
// WPU<WPU4>
extern volatile __bit                   WPU4                __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPU4_bit            _BIT_ACCESS(WPU,4)
// WPU<WPU5>
extern volatile __bit                   WPU5                __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPU5_bit            _BIT_ACCESS(WPU,5)
// WPU<WPUA0>
extern volatile __bit                   WPUA0               __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPU,0)
// WPU<WPUA1>
extern volatile __bit                   WPUA1               __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPU,1)
// WPU<WPUA2>
extern volatile __bit                   WPUA2               __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPU,2)
// WPU<WPUA4>
extern volatile __bit                   WPUA4               __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPU,4)
// WPU<WPUA5>
extern volatile __bit                   WPUA5               __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPU,5)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// OPTION_REG<nGPPU>
extern volatile __bit                   nGPPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nGPPU_bit           _BIT_ACCESS(OPTION_REG,7)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC12F617_H_
