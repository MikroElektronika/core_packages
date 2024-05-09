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

#ifndef _PIC12F635_H_
#define _PIC12F635_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12F635
 */
#ifndef _XC_H_
#warning Header file pic12f635.h included directly. Use #include <xc.h> instead.
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
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :5;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x5
#define _PCLATH_PCLATH_LENGTH                               0x5
#define _PCLATH_PCLATH_MASK                                 0x1F

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RAIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RAIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_RAIF_POSN                                   0x0
#define _INTCON_RAIF_POSITION                               0x0
#define _INTCON_RAIF_SIZE                                   0x1
#define _INTCON_RAIF_LENGTH                                 0x1
#define _INTCON_RAIF_MASK                                   0x1
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
#define _INTCON_RAIE_POSN                                   0x3
#define _INTCON_RAIE_POSITION                               0x3
#define _INTCON_RAIE_SIZE                                   0x1
#define _INTCON_RAIE_LENGTH                                 0x1
#define _INTCON_RAIE_MASK                                   0x8
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
        unsigned                        :1;
        unsigned OSFIF                  :1;
        unsigned C1IF                   :1;
        unsigned                        :1;
        unsigned CRIF                   :1;
        unsigned LVDIF                  :1;
        unsigned EEIF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_OSFIF_POSN                                    0x2
#define _PIR1_OSFIF_POSITION                                0x2
#define _PIR1_OSFIF_SIZE                                    0x1
#define _PIR1_OSFIF_LENGTH                                  0x1
#define _PIR1_OSFIF_MASK                                    0x4
#define _PIR1_C1IF_POSN                                     0x3
#define _PIR1_C1IF_POSITION                                 0x3
#define _PIR1_C1IF_SIZE                                     0x1
#define _PIR1_C1IF_LENGTH                                   0x1
#define _PIR1_C1IF_MASK                                     0x8
#define _PIR1_CRIF_POSN                                     0x5
#define _PIR1_CRIF_POSITION                                 0x5
#define _PIR1_CRIF_SIZE                                     0x1
#define _PIR1_CRIF_LENGTH                                   0x1
#define _PIR1_CRIF_MASK                                     0x20
#define _PIR1_LVDIF_POSN                                    0x6
#define _PIR1_LVDIF_POSITION                                0x6
#define _PIR1_LVDIF_SIZE                                    0x1
#define _PIR1_LVDIF_LENGTH                                  0x1
#define _PIR1_LVDIF_MASK                                    0x40
#define _PIR1_EEIF_POSN                                     0x7
#define _PIR1_EEIF_POSITION                                 0x7
#define _PIR1_EEIF_SIZE                                     0x1
#define _PIR1_EEIF_LENGTH                                   0x1
#define _PIR1_EEIF_MASK                                     0x80

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

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x018);
#ifndef _LIB_BUILD
asm("WDTCON equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :4;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x018);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x4
#define _WDTCON_WDTPS_LENGTH                                0x4
#define _WDTCON_WDTPS_MASK                                  0x1E
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

// Register: CMCON0
#define CMCON0 CMCON0
extern volatile unsigned char           CMCON0              __at(0x019);
#ifndef _LIB_BUILD
asm("CMCON0 equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CM                     :3;
        unsigned CIS                    :1;
        unsigned CINV                   :1;
        unsigned                        :1;
        unsigned COUT                   :1;
    };
    struct {
        unsigned CM0                    :1;
        unsigned CM1                    :1;
        unsigned CM2                    :1;
        unsigned                        :3;
        unsigned C1OUT                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned C1INV                  :1;
    };
} CMCON0bits_t;
extern volatile CMCON0bits_t CMCON0bits __at(0x019);
// bitfield macros
#define _CMCON0_CM_POSN                                     0x0
#define _CMCON0_CM_POSITION                                 0x0
#define _CMCON0_CM_SIZE                                     0x3
#define _CMCON0_CM_LENGTH                                   0x3
#define _CMCON0_CM_MASK                                     0x7
#define _CMCON0_CIS_POSN                                    0x3
#define _CMCON0_CIS_POSITION                                0x3
#define _CMCON0_CIS_SIZE                                    0x1
#define _CMCON0_CIS_LENGTH                                  0x1
#define _CMCON0_CIS_MASK                                    0x8
#define _CMCON0_CINV_POSN                                   0x4
#define _CMCON0_CINV_POSITION                               0x4
#define _CMCON0_CINV_SIZE                                   0x1
#define _CMCON0_CINV_LENGTH                                 0x1
#define _CMCON0_CINV_MASK                                   0x10
#define _CMCON0_COUT_POSN                                   0x6
#define _CMCON0_COUT_POSITION                               0x6
#define _CMCON0_COUT_SIZE                                   0x1
#define _CMCON0_COUT_LENGTH                                 0x1
#define _CMCON0_COUT_MASK                                   0x40
#define _CMCON0_CM0_POSN                                    0x0
#define _CMCON0_CM0_POSITION                                0x0
#define _CMCON0_CM0_SIZE                                    0x1
#define _CMCON0_CM0_LENGTH                                  0x1
#define _CMCON0_CM0_MASK                                    0x1
#define _CMCON0_CM1_POSN                                    0x1
#define _CMCON0_CM1_POSITION                                0x1
#define _CMCON0_CM1_SIZE                                    0x1
#define _CMCON0_CM1_LENGTH                                  0x1
#define _CMCON0_CM1_MASK                                    0x2
#define _CMCON0_CM2_POSN                                    0x2
#define _CMCON0_CM2_POSITION                                0x2
#define _CMCON0_CM2_SIZE                                    0x1
#define _CMCON0_CM2_LENGTH                                  0x1
#define _CMCON0_CM2_MASK                                    0x4
#define _CMCON0_C1OUT_POSN                                  0x6
#define _CMCON0_C1OUT_POSITION                              0x6
#define _CMCON0_C1OUT_SIZE                                  0x1
#define _CMCON0_C1OUT_LENGTH                                0x1
#define _CMCON0_C1OUT_MASK                                  0x40
#define _CMCON0_C1INV_POSN                                  0x4
#define _CMCON0_C1INV_POSITION                              0x4
#define _CMCON0_C1INV_SIZE                                  0x1
#define _CMCON0_C1INV_LENGTH                                0x1
#define _CMCON0_C1INV_MASK                                  0x10

// Register: CMCON1
#define CMCON1 CMCON1
extern volatile unsigned char           CMCON1              __at(0x01A);
#ifndef _LIB_BUILD
asm("CMCON1 equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CMSYNC                 :1;
        unsigned T1GSS                  :1;
    };
    struct {
        unsigned C1SYNC                 :1;
    };
} CMCON1bits_t;
extern volatile CMCON1bits_t CMCON1bits __at(0x01A);
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
#define _CMCON1_C1SYNC_POSN                                 0x0
#define _CMCON1_C1SYNC_POSITION                             0x0
#define _CMCON1_C1SYNC_SIZE                                 0x1
#define _CMCON1_C1SYNC_LENGTH                               0x1
#define _CMCON1_C1SYNC_MASK                                 0x1

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
        unsigned                        :1;
        unsigned OSFIE                  :1;
        unsigned C1IE                   :1;
        unsigned                        :1;
        unsigned CRIE                   :1;
        unsigned LVDIE                  :1;
        unsigned EEIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_OSFIE_POSN                                    0x2
#define _PIE1_OSFIE_POSITION                                0x2
#define _PIE1_OSFIE_SIZE                                    0x1
#define _PIE1_OSFIE_LENGTH                                  0x1
#define _PIE1_OSFIE_MASK                                    0x4
#define _PIE1_C1IE_POSN                                     0x3
#define _PIE1_C1IE_POSITION                                 0x3
#define _PIE1_C1IE_SIZE                                     0x1
#define _PIE1_C1IE_LENGTH                                   0x1
#define _PIE1_C1IE_MASK                                     0x8
#define _PIE1_CRIE_POSN                                     0x5
#define _PIE1_CRIE_POSITION                                 0x5
#define _PIE1_CRIE_SIZE                                     0x1
#define _PIE1_CRIE_LENGTH                                   0x1
#define _PIE1_CRIE_MASK                                     0x20
#define _PIE1_LVDIE_POSN                                    0x6
#define _PIE1_LVDIE_POSITION                                0x6
#define _PIE1_LVDIE_SIZE                                    0x1
#define _PIE1_LVDIE_LENGTH                                  0x1
#define _PIE1_LVDIE_MASK                                    0x40
#define _PIE1_EEIE_POSN                                     0x7
#define _PIE1_EEIE_POSITION                                 0x7
#define _PIE1_EEIE_SIZE                                     0x1
#define _PIE1_EEIE_LENGTH                                   0x1
#define _PIE1_EEIE_MASK                                     0x80

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
        unsigned nWUR                   :1;
        unsigned SBOREN                 :1;
        unsigned ULPWUE                 :1;
    };
    struct {
        unsigned nBOD                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned SBODEN                 :1;
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
#define _PCON_nWUR_POSN                                     0x3
#define _PCON_nWUR_POSITION                                 0x3
#define _PCON_nWUR_SIZE                                     0x1
#define _PCON_nWUR_LENGTH                                   0x1
#define _PCON_nWUR_MASK                                     0x8
#define _PCON_SBOREN_POSN                                   0x4
#define _PCON_SBOREN_POSITION                               0x4
#define _PCON_SBOREN_SIZE                                   0x1
#define _PCON_SBOREN_LENGTH                                 0x1
#define _PCON_SBOREN_MASK                                   0x10
#define _PCON_ULPWUE_POSN                                   0x5
#define _PCON_ULPWUE_POSITION                               0x5
#define _PCON_ULPWUE_SIZE                                   0x1
#define _PCON_ULPWUE_LENGTH                                 0x1
#define _PCON_ULPWUE_MASK                                   0x20
#define _PCON_nBOD_POSN                                     0x0
#define _PCON_nBOD_POSITION                                 0x0
#define _PCON_nBOD_SIZE                                     0x1
#define _PCON_nBOD_LENGTH                                   0x1
#define _PCON_nBOD_MASK                                     0x1
#define _PCON_SBODEN_POSN                                   0x4
#define _PCON_SBODEN_POSITION                               0x4
#define _PCON_SBODEN_SIZE                                   0x1
#define _PCON_SBODEN_LENGTH                                 0x1
#define _PCON_SBODEN_MASK                                   0x10

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x08F);
#ifndef _LIB_BUILD
asm("OSCCON equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :1;
        unsigned LTS                    :1;
        unsigned HTS                    :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x08F);
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x1
#define _OSCCON_SCS_LENGTH                                  0x1
#define _OSCCON_SCS_MASK                                    0x1
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

// Register: LVDCON
#define LVDCON LVDCON
extern volatile unsigned char           LVDCON              __at(0x094);
#ifndef _LIB_BUILD
asm("LVDCON equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LVDL                   :3;
        unsigned                        :1;
        unsigned LVDEN                  :1;
        unsigned IRVST                  :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned                        :1;
        unsigned PLVDEN                 :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits __at(0x094);
// bitfield macros
#define _LVDCON_LVDL_POSN                                   0x0
#define _LVDCON_LVDL_POSITION                               0x0
#define _LVDCON_LVDL_SIZE                                   0x3
#define _LVDCON_LVDL_LENGTH                                 0x3
#define _LVDCON_LVDL_MASK                                   0x7
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
#define _LVDCON_PLVDEN_POSN                                 0x4
#define _LVDCON_PLVDEN_POSITION                             0x4
#define _LVDCON_PLVDEN_SIZE                                 0x1
#define _LVDCON_PLVDEN_LENGTH                               0x1
#define _LVDCON_PLVDEN_MASK                                 0x10

// Register: WPUDA
#define WPUDA WPUDA
extern volatile unsigned char           WPUDA               __at(0x095);
#ifndef _LIB_BUILD
asm("WPUDA equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUDA0                 :1;
        unsigned WPUDA1                 :1;
        unsigned WPUDA2                 :1;
        unsigned                        :1;
        unsigned WPUDA4                 :1;
        unsigned WPUDA5                 :1;
    };
} WPUDAbits_t;
extern volatile WPUDAbits_t WPUDAbits __at(0x095);
// bitfield macros
#define _WPUDA_WPUDA0_POSN                                  0x0
#define _WPUDA_WPUDA0_POSITION                              0x0
#define _WPUDA_WPUDA0_SIZE                                  0x1
#define _WPUDA_WPUDA0_LENGTH                                0x1
#define _WPUDA_WPUDA0_MASK                                  0x1
#define _WPUDA_WPUDA1_POSN                                  0x1
#define _WPUDA_WPUDA1_POSITION                              0x1
#define _WPUDA_WPUDA1_SIZE                                  0x1
#define _WPUDA_WPUDA1_LENGTH                                0x1
#define _WPUDA_WPUDA1_MASK                                  0x2
#define _WPUDA_WPUDA2_POSN                                  0x2
#define _WPUDA_WPUDA2_POSITION                              0x2
#define _WPUDA_WPUDA2_SIZE                                  0x1
#define _WPUDA_WPUDA2_LENGTH                                0x1
#define _WPUDA_WPUDA2_MASK                                  0x4
#define _WPUDA_WPUDA4_POSN                                  0x4
#define _WPUDA_WPUDA4_POSITION                              0x4
#define _WPUDA_WPUDA4_SIZE                                  0x1
#define _WPUDA_WPUDA4_LENGTH                                0x1
#define _WPUDA_WPUDA4_MASK                                  0x10
#define _WPUDA_WPUDA5_POSN                                  0x5
#define _WPUDA_WPUDA5_POSITION                              0x5
#define _WPUDA_WPUDA5_SIZE                                  0x1
#define _WPUDA_WPUDA5_LENGTH                                0x1
#define _WPUDA_WPUDA5_MASK                                  0x20

// Register: IOCA
#define IOCA IOCA
extern volatile unsigned char           IOCA                __at(0x096);
#ifndef _LIB_BUILD
asm("IOCA equ 096h");
#endif
// bitfield definitions
typedef union {
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

// Register: WDA
#define WDA WDA
extern volatile unsigned char           WDA                 __at(0x097);
#ifndef _LIB_BUILD
asm("WDA equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WDA0                   :1;
        unsigned WDA1                   :1;
        unsigned WDA2                   :1;
        unsigned                        :1;
        unsigned WDA4                   :1;
        unsigned WDA5                   :1;
    };
} WDAbits_t;
extern volatile WDAbits_t WDAbits __at(0x097);
// bitfield macros
#define _WDA_WDA0_POSN                                      0x0
#define _WDA_WDA0_POSITION                                  0x0
#define _WDA_WDA0_SIZE                                      0x1
#define _WDA_WDA0_LENGTH                                    0x1
#define _WDA_WDA0_MASK                                      0x1
#define _WDA_WDA1_POSN                                      0x1
#define _WDA_WDA1_POSITION                                  0x1
#define _WDA_WDA1_SIZE                                      0x1
#define _WDA_WDA1_LENGTH                                    0x1
#define _WDA_WDA1_MASK                                      0x2
#define _WDA_WDA2_POSN                                      0x2
#define _WDA_WDA2_POSITION                                  0x2
#define _WDA_WDA2_SIZE                                      0x1
#define _WDA_WDA2_LENGTH                                    0x1
#define _WDA_WDA2_MASK                                      0x4
#define _WDA_WDA4_POSN                                      0x4
#define _WDA_WDA4_POSITION                                  0x4
#define _WDA_WDA4_SIZE                                      0x1
#define _WDA_WDA4_LENGTH                                    0x1
#define _WDA_WDA4_MASK                                      0x10
#define _WDA_WDA5_POSN                                      0x5
#define _WDA_WDA5_POSITION                                  0x5
#define _WDA_WDA5_SIZE                                      0x1
#define _WDA_WDA5_LENGTH                                    0x1
#define _WDA_WDA5_MASK                                      0x20

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x099);
#ifndef _LIB_BUILD
asm("VRCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR                     :4;
        unsigned                        :1;
        unsigned VRR                    :1;
        unsigned                        :1;
        unsigned VREN                   :1;
    };
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x099);
// bitfield macros
#define _VRCON_VR_POSN                                      0x0
#define _VRCON_VR_POSITION                                  0x0
#define _VRCON_VR_SIZE                                      0x4
#define _VRCON_VR_LENGTH                                    0x4
#define _VRCON_VR_MASK                                      0xF
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
#define _VRCON_VREN_POSN                                    0x7
#define _VRCON_VREN_POSITION                                0x7
#define _VRCON_VREN_SIZE                                    0x1
#define _VRCON_VREN_LENGTH                                  0x1
#define _VRCON_VREN_MASK                                    0x80
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

// Register: EEDAT
#define EEDAT EEDAT
extern volatile unsigned char           EEDAT               __at(0x09A);
#ifndef _LIB_BUILD
asm("EEDAT equ 09Ah");
#endif
// aliases
extern volatile unsigned char           EEDATA              __at(0x09A);
#ifndef _LIB_BUILD
asm("EEDATA equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDAT                  :8;
    };
} EEDATbits_t;
extern volatile EEDATbits_t EEDATbits __at(0x09A);
// bitfield macros
#define _EEDAT_EEDAT_POSN                                   0x0
#define _EEDAT_EEDAT_POSITION                               0x0
#define _EEDAT_EEDAT_SIZE                                   0x8
#define _EEDAT_EEDAT_LENGTH                                 0x8
#define _EEDAT_EEDAT_MASK                                   0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned EEDAT                  :8;
    };
} EEDATAbits_t;
extern volatile EEDATAbits_t EEDATAbits __at(0x09A);
// bitfield macros
#define _EEDATA_EEDAT_POSN                                  0x0
#define _EEDATA_EEDAT_POSITION                              0x0
#define _EEDATA_EEDAT_SIZE                                  0x8
#define _EEDATA_EEDAT_LENGTH                                0x8
#define _EEDATA_EEDAT_MASK                                  0xFF

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned char           EEADR               __at(0x09B);
#ifndef _LIB_BUILD
asm("EEADR equ 09Bh");
#endif

// Register: EECON1
#define EECON1 EECON1
extern volatile unsigned char           EECON1              __at(0x09C);
#ifndef _LIB_BUILD
asm("EECON1 equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x09C);
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

// Register: EECON2
#define EECON2 EECON2
extern volatile unsigned char           EECON2              __at(0x09D);
#ifndef _LIB_BUILD
asm("EECON2 equ 09Dh");
#endif

// Register: CRCON
#define CRCON CRCON
extern volatile unsigned char           CRCON               __at(0x110);
#ifndef _LIB_BUILD
asm("CRCON equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CRREG                  :2;
        unsigned                        :4;
        unsigned ENC_nDEC               :1;
        unsigned GO_nDONE               :1;
    };
    struct {
        unsigned CRREG0                 :1;
        unsigned CRREG1                 :1;
        unsigned                        :4;
        unsigned ENC_DEC                :1;
        unsigned GO                     :1;
    };
} CRCONbits_t;
extern volatile CRCONbits_t CRCONbits __at(0x110);
// bitfield macros
#define _CRCON_CRREG_POSN                                   0x0
#define _CRCON_CRREG_POSITION                               0x0
#define _CRCON_CRREG_SIZE                                   0x2
#define _CRCON_CRREG_LENGTH                                 0x2
#define _CRCON_CRREG_MASK                                   0x3
#define _CRCON_ENC_nDEC_POSN                                0x6
#define _CRCON_ENC_nDEC_POSITION                            0x6
#define _CRCON_ENC_nDEC_SIZE                                0x1
#define _CRCON_ENC_nDEC_LENGTH                              0x1
#define _CRCON_ENC_nDEC_MASK                                0x40
#define _CRCON_GO_nDONE_POSN                                0x7
#define _CRCON_GO_nDONE_POSITION                            0x7
#define _CRCON_GO_nDONE_SIZE                                0x1
#define _CRCON_GO_nDONE_LENGTH                              0x1
#define _CRCON_GO_nDONE_MASK                                0x80
#define _CRCON_CRREG0_POSN                                  0x0
#define _CRCON_CRREG0_POSITION                              0x0
#define _CRCON_CRREG0_SIZE                                  0x1
#define _CRCON_CRREG0_LENGTH                                0x1
#define _CRCON_CRREG0_MASK                                  0x1
#define _CRCON_CRREG1_POSN                                  0x1
#define _CRCON_CRREG1_POSITION                              0x1
#define _CRCON_CRREG1_SIZE                                  0x1
#define _CRCON_CRREG1_LENGTH                                0x1
#define _CRCON_CRREG1_MASK                                  0x2
#define _CRCON_ENC_DEC_POSN                                 0x6
#define _CRCON_ENC_DEC_POSITION                             0x6
#define _CRCON_ENC_DEC_SIZE                                 0x1
#define _CRCON_ENC_DEC_LENGTH                               0x1
#define _CRCON_ENC_DEC_MASK                                 0x40
#define _CRCON_GO_POSN                                      0x7
#define _CRCON_GO_POSITION                                  0x7
#define _CRCON_GO_SIZE                                      0x1
#define _CRCON_GO_LENGTH                                    0x1
#define _CRCON_GO_MASK                                      0x80

// Register: CRDAT0
#define CRDAT0 CRDAT0
extern volatile unsigned char           CRDAT0              __at(0x111);
#ifndef _LIB_BUILD
asm("CRDAT0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CRDAT0                 :8;
    };
} CRDAT0bits_t;
extern volatile CRDAT0bits_t CRDAT0bits __at(0x111);
// bitfield macros
#define _CRDAT0_CRDAT0_POSN                                 0x0
#define _CRDAT0_CRDAT0_POSITION                             0x0
#define _CRDAT0_CRDAT0_SIZE                                 0x8
#define _CRDAT0_CRDAT0_LENGTH                               0x8
#define _CRDAT0_CRDAT0_MASK                                 0xFF

// Register: CRDAT1
#define CRDAT1 CRDAT1
extern volatile unsigned char           CRDAT1              __at(0x112);
#ifndef _LIB_BUILD
asm("CRDAT1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CRDAT1                 :8;
    };
} CRDAT1bits_t;
extern volatile CRDAT1bits_t CRDAT1bits __at(0x112);
// bitfield macros
#define _CRDAT1_CRDAT1_POSN                                 0x0
#define _CRDAT1_CRDAT1_POSITION                             0x0
#define _CRDAT1_CRDAT1_SIZE                                 0x8
#define _CRDAT1_CRDAT1_LENGTH                               0x8
#define _CRDAT1_CRDAT1_MASK                                 0xFF

// Register: CRDAT2
#define CRDAT2 CRDAT2
extern volatile unsigned char           CRDAT2              __at(0x113);
#ifndef _LIB_BUILD
asm("CRDAT2 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CRDAT2                 :8;
    };
} CRDAT2bits_t;
extern volatile CRDAT2bits_t CRDAT2bits __at(0x113);
// bitfield macros
#define _CRDAT2_CRDAT2_POSN                                 0x0
#define _CRDAT2_CRDAT2_POSITION                             0x0
#define _CRDAT2_CRDAT2_SIZE                                 0x8
#define _CRDAT2_CRDAT2_LENGTH                               0x8
#define _CRDAT2_CRDAT2_MASK                                 0xFF

// Register: CRDAT3
#define CRDAT3 CRDAT3
extern volatile unsigned char           CRDAT3              __at(0x114);
#ifndef _LIB_BUILD
asm("CRDAT3 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CRDAT3                 :8;
    };
} CRDAT3bits_t;
extern volatile CRDAT3bits_t CRDAT3bits __at(0x114);
// bitfield macros
#define _CRDAT3_CRDAT3_POSN                                 0x0
#define _CRDAT3_CRDAT3_POSITION                             0x0
#define _CRDAT3_CRDAT3_SIZE                                 0x8
#define _CRDAT3_CRDAT3_LENGTH                               0x8
#define _CRDAT3_CRDAT3_MASK                                 0xFF

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
// PIE1<C1IE>
extern volatile __bit                   C1IE                __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 C1IE_bit            _BIT_ACCESS(PIE1,3)
// PIR1<C1IF>
extern volatile __bit                   C1IF                __at(0x63);	// @ (0xC * 8 + 3)
#define                                 C1IF_bit            _BIT_ACCESS(PIR1,3)
// CMCON0<C1INV>
extern volatile __bit                   C1INV               __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 C1INV_bit           _BIT_ACCESS(CMCON0,4)
// CMCON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CMCON0,6)
// CMCON1<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CMCON1,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CMCON0<CINV>
extern volatile __bit                   CINV                __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 CINV_bit            _BIT_ACCESS(CMCON0,4)
// CMCON0<CIS>
extern volatile __bit                   CIS                 __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 CIS_bit             _BIT_ACCESS(CMCON0,3)
// CMCON0<CM0>
extern volatile __bit                   CM0                 __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 CM0_bit             _BIT_ACCESS(CMCON0,0)
// CMCON0<CM1>
extern volatile __bit                   CM1                 __at(0xC9);	// @ (0x19 * 8 + 1)
#define                                 CM1_bit             _BIT_ACCESS(CMCON0,1)
// CMCON0<CM2>
extern volatile __bit                   CM2                 __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 CM2_bit             _BIT_ACCESS(CMCON0,2)
// CMCON1<CMSYNC>
extern volatile __bit                   CMSYNC              __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 CMSYNC_bit          _BIT_ACCESS(CMCON1,0)
// CMCON0<COUT>
extern volatile __bit                   COUT                __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 COUT_bit            _BIT_ACCESS(CMCON0,6)
// PIE1<CRIE>
extern volatile __bit                   CRIE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 CRIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<CRIF>
extern volatile __bit                   CRIF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 CRIF_bit            _BIT_ACCESS(PIR1,5)
// CRCON<CRREG0>
extern volatile __bit                   CRREG0              __at(0x880);	// @ (0x110 * 8 + 0)
#define                                 CRREG0_bit          _BIT_ACCESS(CRCON,0)
// CRCON<CRREG1>
extern volatile __bit                   CRREG1              __at(0x881);	// @ (0x110 * 8 + 1)
#define                                 CRREG1_bit          _BIT_ACCESS(CRCON,1)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// PIE1<EEIE>
extern volatile __bit                   EEIE                __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 EEIE_bit            _BIT_ACCESS(PIE1,7)
// PIR1<EEIF>
extern volatile __bit                   EEIF                __at(0x67);	// @ (0xC * 8 + 7)
#define                                 EEIF_bit            _BIT_ACCESS(PIR1,7)
// CRCON<ENC_DEC>
extern volatile __bit                   ENC_DEC             __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 ENC_DEC_bit         _BIT_ACCESS(CRCON,6)
// CRCON<ENC_nDEC>
extern volatile __bit                   ENC_nDEC            __at(0x886);	// @ (0x110 * 8 + 6)
#define                                 ENC_nDEC_bit        _BIT_ACCESS(CRCON,6)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// CRCON<GO>
extern volatile __bit                   GO                  __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 GO_bit              _BIT_ACCESS(CRCON,7)
// CRCON<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x887);	// @ (0x110 * 8 + 7)
#define                                 GO_nDONE_bit        _BIT_ACCESS(CRCON,7)
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
// IOCA<IOCA0>
extern volatile __bit                   IOCA0               __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 IOCA0_bit           _BIT_ACCESS(IOCA,0)
// IOCA<IOCA1>
extern volatile __bit                   IOCA1               __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 IOCA1_bit           _BIT_ACCESS(IOCA,1)
// IOCA<IOCA2>
extern volatile __bit                   IOCA2               __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 IOCA2_bit           _BIT_ACCESS(IOCA,2)
// IOCA<IOCA3>
extern volatile __bit                   IOCA3               __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 IOCA3_bit           _BIT_ACCESS(IOCA,3)
// IOCA<IOCA4>
extern volatile __bit                   IOCA4               __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 IOCA4_bit           _BIT_ACCESS(IOCA,4)
// IOCA<IOCA5>
extern volatile __bit                   IOCA5               __at(0x4B5);	// @ (0x96 * 8 + 5)
#define                                 IOCA5_bit           _BIT_ACCESS(IOCA,5)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,6)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// LVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(LVDCON,5)
// OSCCON<LTS>
extern volatile __bit                   LTS                 __at(0x479);	// @ (0x8F * 8 + 1)
#define                                 LTS_bit             _BIT_ACCESS(OSCCON,1)
// LVDCON<LVDEN>
extern volatile __bit                   LVDEN               __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 LVDEN_bit           _BIT_ACCESS(LVDCON,4)
// PIE1<LVDIE>
extern volatile __bit                   LVDIE               __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 LVDIE_bit           _BIT_ACCESS(PIE1,6)
// PIR1<LVDIF>
extern volatile __bit                   LVDIF               __at(0x66);	// @ (0xC * 8 + 6)
#define                                 LVDIF_bit           _BIT_ACCESS(PIR1,6)
// LVDCON<LVDL0>
extern volatile __bit                   LVDL0               __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 LVDL0_bit           _BIT_ACCESS(LVDCON,0)
// LVDCON<LVDL1>
extern volatile __bit                   LVDL1               __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 LVDL1_bit           _BIT_ACCESS(LVDCON,1)
// LVDCON<LVDL2>
extern volatile __bit                   LVDL2               __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 LVDL2_bit           _BIT_ACCESS(LVDCON,2)
// PIE1<OSFIE>
extern volatile __bit                   OSFIE               __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE1,2)
// PIR1<OSFIF>
extern volatile __bit                   OSFIF               __at(0x62);	// @ (0xC * 8 + 2)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR1,2)
// OSCCON<OSTS>
extern volatile __bit                   OSTS                __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 OSTS_bit            _BIT_ACCESS(OSCCON,3)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// LVDCON<PLVDEN>
extern volatile __bit                   PLVDEN              __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 PLVDEN_bit          _BIT_ACCESS(LVDCON,4)
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
// INTCON<RAIE>
extern volatile __bit                   RAIE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 RAIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<RAIF>
extern volatile __bit                   RAIF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 RAIF_bit            _BIT_ACCESS(INTCON,0)
// EECON1<RD>
extern volatile __bit                   RD                  __at(0x4E0);	// @ (0x9C * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON1,0)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// PCON<SBODEN>
extern volatile __bit                   SBODEN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBODEN_bit          _BIT_ACCESS(PCON,4)
// PCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 SBOREN_bit          _BIT_ACCESS(PCON,4)
// OSCCON<SCS>
extern volatile __bit                   SCS                 __at(0x478);	// @ (0x8F * 8 + 0)
#define                                 SCS_bit             _BIT_ACCESS(OSCCON,0)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
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
// T1CON<T1GINV>
extern volatile __bit                   T1GINV              __at(0x87);	// @ (0x10 * 8 + 7)
#define                                 T1GINV_bit          _BIT_ACCESS(T1CON,7)
// CMCON1<T1GSS>
extern volatile __bit                   T1GSS               __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 T1GSS_bit           _BIT_ACCESS(CMCON1,1)
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
// PCON<ULPWUE>
extern volatile __bit                   ULPWUE              __at(0x475);	// @ (0x8E * 8 + 5)
#define                                 ULPWUE_bit          _BIT_ACCESS(PCON,5)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VREN>
extern volatile __bit                   VREN                __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 VREN_bit            _BIT_ACCESS(VRCON,7)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// WDA<WDA0>
extern volatile __bit                   WDA0                __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 WDA0_bit            _BIT_ACCESS(WDA,0)
// WDA<WDA1>
extern volatile __bit                   WDA1                __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 WDA1_bit            _BIT_ACCESS(WDA,1)
// WDA<WDA2>
extern volatile __bit                   WDA2                __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 WDA2_bit            _BIT_ACCESS(WDA,2)
// WDA<WDA4>
extern volatile __bit                   WDA4                __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 WDA4_bit            _BIT_ACCESS(WDA,4)
// WDA<WDA5>
extern volatile __bit                   WDA5                __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 WDA5_bit            _BIT_ACCESS(WDA,5)
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON,1)
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON,2)
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON,3)
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON,4)
// WPUDA<WPUDA0>
extern volatile __bit                   WPUDA0              __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 WPUDA0_bit          _BIT_ACCESS(WPUDA,0)
// WPUDA<WPUDA1>
extern volatile __bit                   WPUDA1              __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 WPUDA1_bit          _BIT_ACCESS(WPUDA,1)
// WPUDA<WPUDA2>
extern volatile __bit                   WPUDA2              __at(0x4AA);	// @ (0x95 * 8 + 2)
#define                                 WPUDA2_bit          _BIT_ACCESS(WPUDA,2)
// WPUDA<WPUDA4>
extern volatile __bit                   WPUDA4              __at(0x4AC);	// @ (0x95 * 8 + 4)
#define                                 WPUDA4_bit          _BIT_ACCESS(WPUDA,4)
// WPUDA<WPUDA5>
extern volatile __bit                   WPUDA5              __at(0x4AD);	// @ (0x95 * 8 + 5)
#define                                 WPUDA5_bit          _BIT_ACCESS(WPUDA,5)
// EECON1<WR>
extern volatile __bit                   WR                  __at(0x4E1);	// @ (0x9C * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON1,1)
// EECON1<WREN>
extern volatile __bit                   WREN                __at(0x4E2);	// @ (0x9C * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON1,2)
// EECON1<WRERR>
extern volatile __bit                   WRERR               __at(0x4E3);	// @ (0x9C * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON1,3)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOD>
extern volatile __bit                   nBOD                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOD_bit            _BIT_ACCESS(PCON,0)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRAPU>
extern volatile __bit                   nRAPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPU_bit           _BIT_ACCESS(OPTION_REG,7)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// PCON<nWUR>
extern volatile __bit                   nWUR                __at(0x473);	// @ (0x8E * 8 + 3)
#define                                 nWUR_bit            _BIT_ACCESS(PCON,3)

#endif // _PIC12F635_H_
