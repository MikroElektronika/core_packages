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

#ifndef _PIC10LF322_H_
#define _PIC10LF322_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC10LF322
 */
#ifndef _XC_H_
#warning Header file pic10lf322.h included directly. Use #include <xc.h> instead.
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

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x006);
#ifndef _LIB_BUILD
asm("TRISA equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x006);
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

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x007);
#ifndef _LIB_BUILD
asm("LATA equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0x007);
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

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x008);
#ifndef _LIB_BUILD
asm("ANSELA equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x008);
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

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x009);
#ifndef _LIB_BUILD
asm("WPUA equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x009);
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

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLH0                  :1;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLH0_POSN                                  0x0
#define _PCLATH_PCLH0_POSITION                              0x0
#define _PCLATH_PCLH0_SIZE                                  0x1
#define _PCLATH_PCLH0_LENGTH                                0x1
#define _PCLATH_PCLH0_MASK                                  0x1

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
        unsigned TMR0IF                 :1;
        unsigned IOCIE                  :1;
        unsigned INTE                   :1;
        unsigned TMR0IE                 :1;
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
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
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
        unsigned                        :1;
        unsigned TMR2IF                 :1;
        unsigned                        :1;
        unsigned CLC1IF                 :1;
        unsigned NCO1IF                 :1;
        unsigned                        :1;
        unsigned ADIF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
// bitfield macros
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_CLC1IF_POSN                                   0x3
#define _PIR1_CLC1IF_POSITION                               0x3
#define _PIR1_CLC1IF_SIZE                                   0x1
#define _PIR1_CLC1IF_LENGTH                                 0x1
#define _PIR1_CLC1IF_MASK                                   0x8
#define _PIR1_NCO1IF_POSN                                   0x4
#define _PIR1_NCO1IF_POSITION                               0x4
#define _PIR1_NCO1IF_SIZE                                   0x1
#define _PIR1_NCO1IF_LENGTH                                 0x1
#define _PIR1_NCO1IF_MASK                                   0x10
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x00D);
#ifndef _LIB_BUILD
asm("PIE1 equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR2IE                 :1;
        unsigned                        :1;
        unsigned CLC1IE                 :1;
        unsigned NCO1IE                 :1;
        unsigned                        :1;
        unsigned ADIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x00D);
// bitfield macros
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_CLC1IE_POSN                                   0x3
#define _PIE1_CLC1IE_POSITION                               0x3
#define _PIE1_CLC1IE_SIZE                                   0x1
#define _PIE1_CLC1IE_LENGTH                                 0x1
#define _PIE1_CLC1IE_MASK                                   0x8
#define _PIE1_NCO1IE_POSN                                   0x4
#define _PIE1_NCO1IE_POSITION                               0x4
#define _PIE1_NCO1IE_SIZE                                   0x1
#define _PIE1_NCO1IE_LENGTH                                 0x1
#define _PIE1_NCO1IE_MASK                                   0x10
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x00E);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 0Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS                     :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned INTEDG                 :1;
        unsigned nWPUEN                 :1;
    };
    struct {
        unsigned _PS0                    :1;  // Note: Changed by MikroE
        unsigned _PS1                    :1;  // Note: Changed by MikroE
        unsigned _PS2                    :1;  // Note: Changed by MikroE
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x00E);
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
#define _OPTION_REG_nWPUEN_POSN                             0x7
#define _OPTION_REG_nWPUEN_POSITION                         0x7
#define _OPTION_REG_nWPUEN_SIZE                             0x1
#define _OPTION_REG_nWPUEN_LENGTH                           0x1
#define _OPTION_REG_nWPUEN_MASK                             0x80
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

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x00F);
#ifndef _LIB_BUILD
asm("PCON equ 0Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x00F);
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

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x010);
#ifndef _LIB_BUILD
asm("OSCCON equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HFIOFS                 :1;
        unsigned LFIOFR                 :1;
        unsigned                        :1;
        unsigned HFIOFR                 :1;
        unsigned IRCF                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x010);
// bitfield macros
#define _OSCCON_HFIOFS_POSN                                 0x0
#define _OSCCON_HFIOFS_POSITION                             0x0
#define _OSCCON_HFIOFS_SIZE                                 0x1
#define _OSCCON_HFIOFS_LENGTH                               0x1
#define _OSCCON_HFIOFS_MASK                                 0x1
#define _OSCCON_LFIOFR_POSN                                 0x1
#define _OSCCON_LFIOFR_POSITION                             0x1
#define _OSCCON_LFIOFR_SIZE                                 0x1
#define _OSCCON_LFIOFR_LENGTH                               0x1
#define _OSCCON_LFIOFR_MASK                                 0x2
#define _OSCCON_HFIOFR_POSN                                 0x3
#define _OSCCON_HFIOFR_POSITION                             0x3
#define _OSCCON_HFIOFR_SIZE                                 0x1
#define _OSCCON_HFIOFR_LENGTH                               0x1
#define _OSCCON_HFIOFR_MASK                                 0x8
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

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR2 equ 011h");
#endif

// Register: PR2
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0x012);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 012h");  // Note: Changed by MikroE
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x013);
#ifndef _LIB_BUILD
asm("T2CON equ 013h");
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
extern volatile T2CONbits_t T2CONbits __at(0x013);
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

// Register: PWM1DCL
#define PWM1DCL PWM1DCL
extern volatile unsigned char           PWM1DCL             __at(0x014);
#ifndef _LIB_BUILD
asm("PWM1DCL equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM1DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM1DCL0               :1;
        unsigned PWM1DCL1               :1;
    };
} PWM1DCLbits_t;
extern volatile PWM1DCLbits_t PWM1DCLbits __at(0x014);
// bitfield macros
#define _PWM1DCL_PWM1DCL_POSN                               0x6
#define _PWM1DCL_PWM1DCL_POSITION                           0x6
#define _PWM1DCL_PWM1DCL_SIZE                               0x2
#define _PWM1DCL_PWM1DCL_LENGTH                             0x2
#define _PWM1DCL_PWM1DCL_MASK                               0xC0
#define _PWM1DCL_PWM1DCL0_POSN                              0x6
#define _PWM1DCL_PWM1DCL0_POSITION                          0x6
#define _PWM1DCL_PWM1DCL0_SIZE                              0x1
#define _PWM1DCL_PWM1DCL0_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL0_MASK                              0x40
#define _PWM1DCL_PWM1DCL1_POSN                              0x7
#define _PWM1DCL_PWM1DCL1_POSITION                          0x7
#define _PWM1DCL_PWM1DCL1_SIZE                              0x1
#define _PWM1DCL_PWM1DCL1_LENGTH                            0x1
#define _PWM1DCL_PWM1DCL1_MASK                              0x80

// Register: PWM1DCH
#define PWM1DCH PWM1DCH
extern volatile unsigned char           PWM1DCH             __at(0x015);
#ifndef _LIB_BUILD
asm("PWM1DCH equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1DCH                :8;
    };
    struct {
        unsigned PWM1DCH0               :1;
        unsigned PWM1DCH1               :1;
        unsigned PWM1DCH2               :1;
        unsigned PWM1DCH3               :1;
        unsigned PWM1DCH4               :1;
        unsigned PWM1DCH5               :1;
        unsigned PWM1DCH6               :1;
        unsigned PWM1DCH7               :1;
    };
} PWM1DCHbits_t;
extern volatile PWM1DCHbits_t PWM1DCHbits __at(0x015);
// bitfield macros
#define _PWM1DCH_PWM1DCH_POSN                               0x0
#define _PWM1DCH_PWM1DCH_POSITION                           0x0
#define _PWM1DCH_PWM1DCH_SIZE                               0x8
#define _PWM1DCH_PWM1DCH_LENGTH                             0x8
#define _PWM1DCH_PWM1DCH_MASK                               0xFF
#define _PWM1DCH_PWM1DCH0_POSN                              0x0
#define _PWM1DCH_PWM1DCH0_POSITION                          0x0
#define _PWM1DCH_PWM1DCH0_SIZE                              0x1
#define _PWM1DCH_PWM1DCH0_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH0_MASK                              0x1
#define _PWM1DCH_PWM1DCH1_POSN                              0x1
#define _PWM1DCH_PWM1DCH1_POSITION                          0x1
#define _PWM1DCH_PWM1DCH1_SIZE                              0x1
#define _PWM1DCH_PWM1DCH1_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH1_MASK                              0x2
#define _PWM1DCH_PWM1DCH2_POSN                              0x2
#define _PWM1DCH_PWM1DCH2_POSITION                          0x2
#define _PWM1DCH_PWM1DCH2_SIZE                              0x1
#define _PWM1DCH_PWM1DCH2_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH2_MASK                              0x4
#define _PWM1DCH_PWM1DCH3_POSN                              0x3
#define _PWM1DCH_PWM1DCH3_POSITION                          0x3
#define _PWM1DCH_PWM1DCH3_SIZE                              0x1
#define _PWM1DCH_PWM1DCH3_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH3_MASK                              0x8
#define _PWM1DCH_PWM1DCH4_POSN                              0x4
#define _PWM1DCH_PWM1DCH4_POSITION                          0x4
#define _PWM1DCH_PWM1DCH4_SIZE                              0x1
#define _PWM1DCH_PWM1DCH4_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH4_MASK                              0x10
#define _PWM1DCH_PWM1DCH5_POSN                              0x5
#define _PWM1DCH_PWM1DCH5_POSITION                          0x5
#define _PWM1DCH_PWM1DCH5_SIZE                              0x1
#define _PWM1DCH_PWM1DCH5_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH5_MASK                              0x20
#define _PWM1DCH_PWM1DCH6_POSN                              0x6
#define _PWM1DCH_PWM1DCH6_POSITION                          0x6
#define _PWM1DCH_PWM1DCH6_SIZE                              0x1
#define _PWM1DCH_PWM1DCH6_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH6_MASK                              0x40
#define _PWM1DCH_PWM1DCH7_POSN                              0x7
#define _PWM1DCH_PWM1DCH7_POSITION                          0x7
#define _PWM1DCH_PWM1DCH7_SIZE                              0x1
#define _PWM1DCH_PWM1DCH7_LENGTH                            0x1
#define _PWM1DCH_PWM1DCH7_MASK                              0x80

// Register: PWM1CON
#define PWM1CON PWM1CON
extern volatile unsigned char           PWM1CON             __at(0x016);
#ifndef _LIB_BUILD
asm("PWM1CON equ 016h");
#endif
// aliases
extern volatile unsigned char           PWM1CON0            __at(0x016);
#ifndef _LIB_BUILD
asm("PWM1CON0 equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1POL                :1;
        unsigned PWM1OUT                :1;
        unsigned PWM1OE                 :1;
        unsigned PWM1EN                 :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __at(0x016);
// bitfield macros
#define _PWM1CON_PWM1POL_POSN                               0x4
#define _PWM1CON_PWM1POL_POSITION                           0x4
#define _PWM1CON_PWM1POL_SIZE                               0x1
#define _PWM1CON_PWM1POL_LENGTH                             0x1
#define _PWM1CON_PWM1POL_MASK                               0x10
#define _PWM1CON_PWM1OUT_POSN                               0x5
#define _PWM1CON_PWM1OUT_POSITION                           0x5
#define _PWM1CON_PWM1OUT_SIZE                               0x1
#define _PWM1CON_PWM1OUT_LENGTH                             0x1
#define _PWM1CON_PWM1OUT_MASK                               0x20
#define _PWM1CON_PWM1OE_POSN                                0x6
#define _PWM1CON_PWM1OE_POSITION                            0x6
#define _PWM1CON_PWM1OE_SIZE                                0x1
#define _PWM1CON_PWM1OE_LENGTH                              0x1
#define _PWM1CON_PWM1OE_MASK                                0x40
#define _PWM1CON_PWM1EN_POSN                                0x7
#define _PWM1CON_PWM1EN_POSITION                            0x7
#define _PWM1CON_PWM1EN_SIZE                                0x1
#define _PWM1CON_PWM1EN_LENGTH                              0x1
#define _PWM1CON_PWM1EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM1POL                :1;
        unsigned PWM1OUT                :1;
        unsigned PWM1OE                 :1;
        unsigned PWM1EN                 :1;
    };
} PWM1CON0bits_t;
extern volatile PWM1CON0bits_t PWM1CON0bits __at(0x016);
// bitfield macros
#define _PWM1CON0_PWM1POL_POSN                              0x4
#define _PWM1CON0_PWM1POL_POSITION                          0x4
#define _PWM1CON0_PWM1POL_SIZE                              0x1
#define _PWM1CON0_PWM1POL_LENGTH                            0x1
#define _PWM1CON0_PWM1POL_MASK                              0x10
#define _PWM1CON0_PWM1OUT_POSN                              0x5
#define _PWM1CON0_PWM1OUT_POSITION                          0x5
#define _PWM1CON0_PWM1OUT_SIZE                              0x1
#define _PWM1CON0_PWM1OUT_LENGTH                            0x1
#define _PWM1CON0_PWM1OUT_MASK                              0x20
#define _PWM1CON0_PWM1OE_POSN                               0x6
#define _PWM1CON0_PWM1OE_POSITION                           0x6
#define _PWM1CON0_PWM1OE_SIZE                               0x1
#define _PWM1CON0_PWM1OE_LENGTH                             0x1
#define _PWM1CON0_PWM1OE_MASK                               0x40
#define _PWM1CON0_PWM1EN_POSN                               0x7
#define _PWM1CON0_PWM1EN_POSITION                           0x7
#define _PWM1CON0_PWM1EN_SIZE                               0x1
#define _PWM1CON0_PWM1EN_LENGTH                             0x1
#define _PWM1CON0_PWM1EN_MASK                               0x80

// Register: PWM2DCL
#define PWM2DCL PWM2DCL
extern volatile unsigned char           PWM2DCL             __at(0x017);
#ifndef _LIB_BUILD
asm("PWM2DCL equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM2DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM2DCL0               :1;
        unsigned PWM2DCL1               :1;
    };
} PWM2DCLbits_t;
extern volatile PWM2DCLbits_t PWM2DCLbits __at(0x017);
// bitfield macros
#define _PWM2DCL_PWM2DCL_POSN                               0x6
#define _PWM2DCL_PWM2DCL_POSITION                           0x6
#define _PWM2DCL_PWM2DCL_SIZE                               0x2
#define _PWM2DCL_PWM2DCL_LENGTH                             0x2
#define _PWM2DCL_PWM2DCL_MASK                               0xC0
#define _PWM2DCL_PWM2DCL0_POSN                              0x6
#define _PWM2DCL_PWM2DCL0_POSITION                          0x6
#define _PWM2DCL_PWM2DCL0_SIZE                              0x1
#define _PWM2DCL_PWM2DCL0_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL0_MASK                              0x40
#define _PWM2DCL_PWM2DCL1_POSN                              0x7
#define _PWM2DCL_PWM2DCL1_POSITION                          0x7
#define _PWM2DCL_PWM2DCL1_SIZE                              0x1
#define _PWM2DCL_PWM2DCL1_LENGTH                            0x1
#define _PWM2DCL_PWM2DCL1_MASK                              0x80

// Register: PWM2DCH
#define PWM2DCH PWM2DCH
extern volatile unsigned char           PWM2DCH             __at(0x018);
#ifndef _LIB_BUILD
asm("PWM2DCH equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM2DCH                :8;
    };
    struct {
        unsigned PWM2DCH0               :1;
        unsigned PWM2DCH1               :1;
        unsigned PWM2DCH2               :1;
        unsigned PWM2DCH3               :1;
        unsigned PWM2DCH4               :1;
        unsigned PWM2DCH5               :1;
        unsigned PWM2DCH6               :1;
        unsigned PWM2DCH7               :1;
    };
} PWM2DCHbits_t;
extern volatile PWM2DCHbits_t PWM2DCHbits __at(0x018);
// bitfield macros
#define _PWM2DCH_PWM2DCH_POSN                               0x0
#define _PWM2DCH_PWM2DCH_POSITION                           0x0
#define _PWM2DCH_PWM2DCH_SIZE                               0x8
#define _PWM2DCH_PWM2DCH_LENGTH                             0x8
#define _PWM2DCH_PWM2DCH_MASK                               0xFF
#define _PWM2DCH_PWM2DCH0_POSN                              0x0
#define _PWM2DCH_PWM2DCH0_POSITION                          0x0
#define _PWM2DCH_PWM2DCH0_SIZE                              0x1
#define _PWM2DCH_PWM2DCH0_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH0_MASK                              0x1
#define _PWM2DCH_PWM2DCH1_POSN                              0x1
#define _PWM2DCH_PWM2DCH1_POSITION                          0x1
#define _PWM2DCH_PWM2DCH1_SIZE                              0x1
#define _PWM2DCH_PWM2DCH1_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH1_MASK                              0x2
#define _PWM2DCH_PWM2DCH2_POSN                              0x2
#define _PWM2DCH_PWM2DCH2_POSITION                          0x2
#define _PWM2DCH_PWM2DCH2_SIZE                              0x1
#define _PWM2DCH_PWM2DCH2_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH2_MASK                              0x4
#define _PWM2DCH_PWM2DCH3_POSN                              0x3
#define _PWM2DCH_PWM2DCH3_POSITION                          0x3
#define _PWM2DCH_PWM2DCH3_SIZE                              0x1
#define _PWM2DCH_PWM2DCH3_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH3_MASK                              0x8
#define _PWM2DCH_PWM2DCH4_POSN                              0x4
#define _PWM2DCH_PWM2DCH4_POSITION                          0x4
#define _PWM2DCH_PWM2DCH4_SIZE                              0x1
#define _PWM2DCH_PWM2DCH4_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH4_MASK                              0x10
#define _PWM2DCH_PWM2DCH5_POSN                              0x5
#define _PWM2DCH_PWM2DCH5_POSITION                          0x5
#define _PWM2DCH_PWM2DCH5_SIZE                              0x1
#define _PWM2DCH_PWM2DCH5_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH5_MASK                              0x20
#define _PWM2DCH_PWM2DCH6_POSN                              0x6
#define _PWM2DCH_PWM2DCH6_POSITION                          0x6
#define _PWM2DCH_PWM2DCH6_SIZE                              0x1
#define _PWM2DCH_PWM2DCH6_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH6_MASK                              0x40
#define _PWM2DCH_PWM2DCH7_POSN                              0x7
#define _PWM2DCH_PWM2DCH7_POSITION                          0x7
#define _PWM2DCH_PWM2DCH7_SIZE                              0x1
#define _PWM2DCH_PWM2DCH7_LENGTH                            0x1
#define _PWM2DCH_PWM2DCH7_MASK                              0x80

// Register: PWM2CON
#define PWM2CON PWM2CON
extern volatile unsigned char           PWM2CON             __at(0x019);
#ifndef _LIB_BUILD
asm("PWM2CON equ 019h");
#endif
// aliases
extern volatile unsigned char           PWM2CON0            __at(0x019);
#ifndef _LIB_BUILD
asm("PWM2CON0 equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM2POL                :1;
        unsigned PWM2OUT                :1;
        unsigned PWM2OE                 :1;
        unsigned PWM2EN                 :1;
    };
} PWM2CONbits_t;
extern volatile PWM2CONbits_t PWM2CONbits __at(0x019);
// bitfield macros
#define _PWM2CON_PWM2POL_POSN                               0x4
#define _PWM2CON_PWM2POL_POSITION                           0x4
#define _PWM2CON_PWM2POL_SIZE                               0x1
#define _PWM2CON_PWM2POL_LENGTH                             0x1
#define _PWM2CON_PWM2POL_MASK                               0x10
#define _PWM2CON_PWM2OUT_POSN                               0x5
#define _PWM2CON_PWM2OUT_POSITION                           0x5
#define _PWM2CON_PWM2OUT_SIZE                               0x1
#define _PWM2CON_PWM2OUT_LENGTH                             0x1
#define _PWM2CON_PWM2OUT_MASK                               0x20
#define _PWM2CON_PWM2OE_POSN                                0x6
#define _PWM2CON_PWM2OE_POSITION                            0x6
#define _PWM2CON_PWM2OE_SIZE                                0x1
#define _PWM2CON_PWM2OE_LENGTH                              0x1
#define _PWM2CON_PWM2OE_MASK                                0x40
#define _PWM2CON_PWM2EN_POSN                                0x7
#define _PWM2CON_PWM2EN_POSITION                            0x7
#define _PWM2CON_PWM2EN_SIZE                                0x1
#define _PWM2CON_PWM2EN_LENGTH                              0x1
#define _PWM2CON_PWM2EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM2POL                :1;
        unsigned PWM2OUT                :1;
        unsigned PWM2OE                 :1;
        unsigned PWM2EN                 :1;
    };
} PWM2CON0bits_t;
extern volatile PWM2CON0bits_t PWM2CON0bits __at(0x019);
// bitfield macros
#define _PWM2CON0_PWM2POL_POSN                              0x4
#define _PWM2CON0_PWM2POL_POSITION                          0x4
#define _PWM2CON0_PWM2POL_SIZE                              0x1
#define _PWM2CON0_PWM2POL_LENGTH                            0x1
#define _PWM2CON0_PWM2POL_MASK                              0x10
#define _PWM2CON0_PWM2OUT_POSN                              0x5
#define _PWM2CON0_PWM2OUT_POSITION                          0x5
#define _PWM2CON0_PWM2OUT_SIZE                              0x1
#define _PWM2CON0_PWM2OUT_LENGTH                            0x1
#define _PWM2CON0_PWM2OUT_MASK                              0x20
#define _PWM2CON0_PWM2OE_POSN                               0x6
#define _PWM2CON0_PWM2OE_POSITION                           0x6
#define _PWM2CON0_PWM2OE_SIZE                               0x1
#define _PWM2CON0_PWM2OE_LENGTH                             0x1
#define _PWM2CON0_PWM2OE_MASK                               0x40
#define _PWM2CON0_PWM2EN_POSN                               0x7
#define _PWM2CON0_PWM2EN_POSITION                           0x7
#define _PWM2CON0_PWM2EN_SIZE                               0x1
#define _PWM2CON0_PWM2EN_LENGTH                             0x1
#define _PWM2CON0_PWM2EN_MASK                               0x80

// Register: IOCAP
#define IOCAP IOCAP
extern volatile unsigned char           IOCAP               __at(0x01A);
#ifndef _LIB_BUILD
asm("IOCAP equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAP0                 :1;
        unsigned IOCAP1                 :1;
        unsigned IOCAP2                 :1;
        unsigned IOCAP3                 :1;
    };
} IOCAPbits_t;
extern volatile IOCAPbits_t IOCAPbits __at(0x01A);
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

// Register: IOCAN
#define IOCAN IOCAN
extern volatile unsigned char           IOCAN               __at(0x01B);
#ifndef _LIB_BUILD
asm("IOCAN equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAN0                 :1;
        unsigned IOCAN1                 :1;
        unsigned IOCAN2                 :1;
        unsigned IOCAN3                 :1;
    };
} IOCANbits_t;
extern volatile IOCANbits_t IOCANbits __at(0x01B);
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

// Register: IOCAF
#define IOCAF IOCAF
extern volatile unsigned char           IOCAF               __at(0x01C);
#ifndef _LIB_BUILD
asm("IOCAF equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAF0                 :1;
        unsigned IOCAF1                 :1;
        unsigned IOCAF2                 :1;
        unsigned IOCAF3                 :1;
    };
} IOCAFbits_t;
extern volatile IOCAFbits_t IOCAFbits __at(0x01C);
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

// Register: FVRCON
#define FVRCON FVRCON
extern volatile unsigned char           FVRCON              __at(0x01D);
#ifndef _LIB_BUILD
asm("FVRCON equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR                  :2;
        unsigned                        :2;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x01D);
// bitfield macros
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
#define _FVRCON_TSRNG_POSN                                  0x4
#define _FVRCON_TSRNG_POSITION                              0x4
#define _FVRCON_TSRNG_SIZE                                  0x1
#define _FVRCON_TSRNG_LENGTH                                0x1
#define _FVRCON_TSRNG_MASK                                  0x10
#define _FVRCON_TSEN_POSN                                   0x5
#define _FVRCON_TSEN_POSITION                               0x5
#define _FVRCON_TSEN_SIZE                                   0x1
#define _FVRCON_TSEN_LENGTH                                 0x1
#define _FVRCON_TSEN_MASK                                   0x20
#define _FVRCON_FVRRDY_POSN                                 0x6
#define _FVRCON_FVRRDY_POSITION                             0x6
#define _FVRCON_FVRRDY_SIZE                                 0x1
#define _FVRCON_FVRRDY_LENGTH                               0x1
#define _FVRCON_FVRRDY_MASK                                 0x40
#define _FVRCON_FVREN_POSN                                  0x7
#define _FVRCON_FVREN_POSITION                              0x7
#define _FVRCON_FVREN_SIZE                                  0x1
#define _FVRCON_FVREN_LENGTH                                0x1
#define _FVRCON_FVREN_MASK                                  0x80
#define _FVRCON_ADFVR0_POSN                                 0x0
#define _FVRCON_ADFVR0_POSITION                             0x0
#define _FVRCON_ADFVR0_SIZE                                 0x1
#define _FVRCON_ADFVR0_LENGTH                               0x1
#define _FVRCON_ADFVR0_MASK                                 0x1
#define _FVRCON_ADFVR1_POSN                                 0x1
#define _FVRCON_ADFVR1_POSITION                             0x1
#define _FVRCON_ADFVR1_SIZE                                 0x1
#define _FVRCON_ADFVR1_LENGTH                               0x1
#define _FVRCON_ADFVR1_MASK                                 0x2

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRES equ 01Eh");
#endif

// Register: ADCON
#define ADCON ADCON
extern volatile unsigned char           ADCON               __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :3;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCONbits_t;
extern volatile ADCONbits_t ADCONbits __at(0x01F);
// bitfield macros
#define _ADCON_ADON_POSN                                    0x0
#define _ADCON_ADON_POSITION                                0x0
#define _ADCON_ADON_SIZE                                    0x1
#define _ADCON_ADON_LENGTH                                  0x1
#define _ADCON_ADON_MASK                                    0x1
#define _ADCON_GO_nDONE_POSN                                0x1
#define _ADCON_GO_nDONE_POSITION                            0x1
#define _ADCON_GO_nDONE_SIZE                                0x1
#define _ADCON_GO_nDONE_LENGTH                              0x1
#define _ADCON_GO_nDONE_MASK                                0x2
#define _ADCON_CHS_POSN                                     0x2
#define _ADCON_CHS_POSITION                                 0x2
#define _ADCON_CHS_SIZE                                     0x3
#define _ADCON_CHS_LENGTH                                   0x3
#define _ADCON_CHS_MASK                                     0x1C
#define _ADCON_ADCS_POSN                                    0x5
#define _ADCON_ADCS_POSITION                                0x5
#define _ADCON_ADCS_SIZE                                    0x3
#define _ADCON_ADCS_LENGTH                                  0x3
#define _ADCON_ADCS_MASK                                    0xE0
#define _ADCON_CHS0_POSN                                    0x2
#define _ADCON_CHS0_POSITION                                0x2
#define _ADCON_CHS0_SIZE                                    0x1
#define _ADCON_CHS0_LENGTH                                  0x1
#define _ADCON_CHS0_MASK                                    0x4
#define _ADCON_CHS1_POSN                                    0x3
#define _ADCON_CHS1_POSITION                                0x3
#define _ADCON_CHS1_SIZE                                    0x1
#define _ADCON_CHS1_LENGTH                                  0x1
#define _ADCON_CHS1_MASK                                    0x8
#define _ADCON_CHS2_POSN                                    0x4
#define _ADCON_CHS2_POSITION                                0x4
#define _ADCON_CHS2_SIZE                                    0x1
#define _ADCON_CHS2_LENGTH                                  0x1
#define _ADCON_CHS2_MASK                                    0x10
#define _ADCON_ADCS0_POSN                                   0x5
#define _ADCON_ADCS0_POSITION                               0x5
#define _ADCON_ADCS0_SIZE                                   0x1
#define _ADCON_ADCS0_LENGTH                                 0x1
#define _ADCON_ADCS0_MASK                                   0x20
#define _ADCON_ADCS1_POSN                                   0x6
#define _ADCON_ADCS1_POSITION                               0x6
#define _ADCON_ADCS1_SIZE                                   0x1
#define _ADCON_ADCS1_LENGTH                                 0x1
#define _ADCON_ADCS1_MASK                                   0x40
#define _ADCON_ADCS2_POSN                                   0x7
#define _ADCON_ADCS2_POSITION                               0x7
#define _ADCON_ADCS2_SIZE                                   0x1
#define _ADCON_ADCS2_LENGTH                                 0x1
#define _ADCON_ADCS2_MASK                                   0x80

// Register: PMADR
#define PMADR PMADR
extern volatile unsigned short          PMADR               __at(0x020);
#ifndef _LIB_BUILD
asm("PMADR equ 020h");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x020);
#ifndef _LIB_BUILD
asm("PMADRL equ 020h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADR                  :8;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x020);
// bitfield macros
#define _PMADRL_PMADR_POSN                                  0x0
#define _PMADRL_PMADR_POSITION                              0x0
#define _PMADRL_PMADR_SIZE                                  0x8
#define _PMADRL_PMADR_LENGTH                                0x8
#define _PMADRL_PMADR_MASK                                  0xFF

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x021);
#ifndef _LIB_BUILD
asm("PMADRH equ 021h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADR8                 :1;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x021);
// bitfield macros
#define _PMADRH_PMADR8_POSN                                 0x0
#define _PMADRH_PMADR8_POSITION                             0x0
#define _PMADRH_PMADR8_SIZE                                 0x1
#define _PMADRH_PMADR8_LENGTH                               0x1
#define _PMADRH_PMADR8_MASK                                 0x1

// Register: PMDAT
#define PMDAT PMDAT
extern volatile unsigned short          PMDAT               __at(0x022);
#ifndef _LIB_BUILD
asm("PMDAT equ 022h");
#endif

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x022);
#ifndef _LIB_BUILD
asm("PMDATL equ 022h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATL                 :8;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x022);
// bitfield macros
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x023);
#ifndef _LIB_BUILD
asm("PMDATH equ 023h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATH                 :6;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x023);
// bitfield macros
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x024);
#ifndef _LIB_BUILD
asm("PMCON1 equ 024h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned LWLO                   :1;
        unsigned CFGS                   :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x024);
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
#define _PMCON1_WRERR_POSN                                  0x3
#define _PMCON1_WRERR_POSITION                              0x3
#define _PMCON1_WRERR_SIZE                                  0x1
#define _PMCON1_WRERR_LENGTH                                0x1
#define _PMCON1_WRERR_MASK                                  0x8
#define _PMCON1_FREE_POSN                                   0x4
#define _PMCON1_FREE_POSITION                               0x4
#define _PMCON1_FREE_SIZE                                   0x1
#define _PMCON1_FREE_LENGTH                                 0x1
#define _PMCON1_FREE_MASK                                   0x10
#define _PMCON1_LWLO_POSN                                   0x5
#define _PMCON1_LWLO_POSITION                               0x5
#define _PMCON1_LWLO_SIZE                                   0x1
#define _PMCON1_LWLO_LENGTH                                 0x1
#define _PMCON1_LWLO_MASK                                   0x20
#define _PMCON1_CFGS_POSN                                   0x6
#define _PMCON1_CFGS_POSITION                               0x6
#define _PMCON1_CFGS_SIZE                                   0x1
#define _PMCON1_CFGS_LENGTH                                 0x1
#define _PMCON1_CFGS_MASK                                   0x40

// Register: PMCON2
#define PMCON2 PMCON2
extern volatile unsigned char           PMCON2              __at(0x025);
#ifndef _LIB_BUILD
asm("PMCON2 equ 025h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMCON2                 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x025);
// bitfield macros
#define _PMCON2_PMCON2_POSN                                 0x0
#define _PMCON2_PMCON2_POSITION                             0x0
#define _PMCON2_PMCON2_SIZE                                 0x8
#define _PMCON2_PMCON2_LENGTH                               0x8
#define _PMCON2_PMCON2_MASK                                 0xFF

// Register: CLKRCON
#define CLKRCON CLKRCON
extern volatile unsigned char           CLKRCON             __at(0x026);
#ifndef _LIB_BUILD
asm("CLKRCON equ 026h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned CLKROE                 :1;
    };
} CLKRCONbits_t;
extern volatile CLKRCONbits_t CLKRCONbits __at(0x026);
// bitfield macros
#define _CLKRCON_CLKROE_POSN                                0x6
#define _CLKRCON_CLKROE_POSITION                            0x6
#define _CLKRCON_CLKROE_SIZE                                0x1
#define _CLKRCON_CLKROE_LENGTH                              0x1
#define _CLKRCON_CLKROE_MASK                                0x40

// Register: NCO1ACC
#define NCO1ACC NCO1ACC
#ifndef __CCI__
extern volatile __uint24                NCO1ACC             __at(0x027);
#endif
#ifndef _LIB_BUILD
asm("NCO1ACC equ 027h");
#endif

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
extern volatile unsigned char           NCO1ACCL            __at(0x027);
#ifndef _LIB_BUILD
asm("NCO1ACCL equ 027h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC0               :1;
        unsigned NCO1ACC1               :1;
        unsigned NCO1ACC2               :1;
        unsigned NCO1ACC3               :1;
        unsigned NCO1ACC4               :1;
        unsigned NCO1ACC5               :1;
        unsigned NCO1ACC6               :1;
        unsigned NCO1ACC7               :1;
    };
} NCO1ACCLbits_t;
extern volatile NCO1ACCLbits_t NCO1ACCLbits __at(0x027);
// bitfield macros
#define _NCO1ACCL_NCO1ACC0_POSN                             0x0
#define _NCO1ACCL_NCO1ACC0_POSITION                         0x0
#define _NCO1ACCL_NCO1ACC0_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC0_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC0_MASK                             0x1
#define _NCO1ACCL_NCO1ACC1_POSN                             0x1
#define _NCO1ACCL_NCO1ACC1_POSITION                         0x1
#define _NCO1ACCL_NCO1ACC1_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC1_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC1_MASK                             0x2
#define _NCO1ACCL_NCO1ACC2_POSN                             0x2
#define _NCO1ACCL_NCO1ACC2_POSITION                         0x2
#define _NCO1ACCL_NCO1ACC2_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC2_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC2_MASK                             0x4
#define _NCO1ACCL_NCO1ACC3_POSN                             0x3
#define _NCO1ACCL_NCO1ACC3_POSITION                         0x3
#define _NCO1ACCL_NCO1ACC3_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC3_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC3_MASK                             0x8
#define _NCO1ACCL_NCO1ACC4_POSN                             0x4
#define _NCO1ACCL_NCO1ACC4_POSITION                         0x4
#define _NCO1ACCL_NCO1ACC4_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC4_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC4_MASK                             0x10
#define _NCO1ACCL_NCO1ACC5_POSN                             0x5
#define _NCO1ACCL_NCO1ACC5_POSITION                         0x5
#define _NCO1ACCL_NCO1ACC5_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC5_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC5_MASK                             0x20
#define _NCO1ACCL_NCO1ACC6_POSN                             0x6
#define _NCO1ACCL_NCO1ACC6_POSITION                         0x6
#define _NCO1ACCL_NCO1ACC6_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC6_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC6_MASK                             0x40
#define _NCO1ACCL_NCO1ACC7_POSN                             0x7
#define _NCO1ACCL_NCO1ACC7_POSITION                         0x7
#define _NCO1ACCL_NCO1ACC7_SIZE                             0x1
#define _NCO1ACCL_NCO1ACC7_LENGTH                           0x1
#define _NCO1ACCL_NCO1ACC7_MASK                             0x80

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
extern volatile unsigned char           NCO1ACCH            __at(0x028);
#ifndef _LIB_BUILD
asm("NCO1ACCH equ 028h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC8               :1;
        unsigned NCO1ACC9               :1;
        unsigned NCO1ACC10              :1;
        unsigned NCO1ACC11              :1;
        unsigned NCO1ACC12              :1;
        unsigned NCO1ACC13              :1;
        unsigned NCO1ACC14              :1;
        unsigned NCO1ACC15              :1;
    };
} NCO1ACCHbits_t;
extern volatile NCO1ACCHbits_t NCO1ACCHbits __at(0x028);
// bitfield macros
#define _NCO1ACCH_NCO1ACC8_POSN                             0x0
#define _NCO1ACCH_NCO1ACC8_POSITION                         0x0
#define _NCO1ACCH_NCO1ACC8_SIZE                             0x1
#define _NCO1ACCH_NCO1ACC8_LENGTH                           0x1
#define _NCO1ACCH_NCO1ACC8_MASK                             0x1
#define _NCO1ACCH_NCO1ACC9_POSN                             0x1
#define _NCO1ACCH_NCO1ACC9_POSITION                         0x1
#define _NCO1ACCH_NCO1ACC9_SIZE                             0x1
#define _NCO1ACCH_NCO1ACC9_LENGTH                           0x1
#define _NCO1ACCH_NCO1ACC9_MASK                             0x2
#define _NCO1ACCH_NCO1ACC10_POSN                            0x2
#define _NCO1ACCH_NCO1ACC10_POSITION                        0x2
#define _NCO1ACCH_NCO1ACC10_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC10_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC10_MASK                            0x4
#define _NCO1ACCH_NCO1ACC11_POSN                            0x3
#define _NCO1ACCH_NCO1ACC11_POSITION                        0x3
#define _NCO1ACCH_NCO1ACC11_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC11_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC11_MASK                            0x8
#define _NCO1ACCH_NCO1ACC12_POSN                            0x4
#define _NCO1ACCH_NCO1ACC12_POSITION                        0x4
#define _NCO1ACCH_NCO1ACC12_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC12_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC12_MASK                            0x10
#define _NCO1ACCH_NCO1ACC13_POSN                            0x5
#define _NCO1ACCH_NCO1ACC13_POSITION                        0x5
#define _NCO1ACCH_NCO1ACC13_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC13_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC13_MASK                            0x20
#define _NCO1ACCH_NCO1ACC14_POSN                            0x6
#define _NCO1ACCH_NCO1ACC14_POSITION                        0x6
#define _NCO1ACCH_NCO1ACC14_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC14_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC14_MASK                            0x40
#define _NCO1ACCH_NCO1ACC15_POSN                            0x7
#define _NCO1ACCH_NCO1ACC15_POSITION                        0x7
#define _NCO1ACCH_NCO1ACC15_SIZE                            0x1
#define _NCO1ACCH_NCO1ACC15_LENGTH                          0x1
#define _NCO1ACCH_NCO1ACC15_MASK                            0x80

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
extern volatile unsigned char           NCO1ACCU            __at(0x029);
#ifndef _LIB_BUILD
asm("NCO1ACCU equ 029h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC16              :1;
        unsigned NCO1ACC17              :1;
        unsigned NCO1ACC18              :1;
        unsigned NCO1ACC19              :1;
    };
} NCO1ACCUbits_t;
extern volatile NCO1ACCUbits_t NCO1ACCUbits __at(0x029);
// bitfield macros
#define _NCO1ACCU_NCO1ACC16_POSN                            0x0
#define _NCO1ACCU_NCO1ACC16_POSITION                        0x0
#define _NCO1ACCU_NCO1ACC16_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC16_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC16_MASK                            0x1
#define _NCO1ACCU_NCO1ACC17_POSN                            0x1
#define _NCO1ACCU_NCO1ACC17_POSITION                        0x1
#define _NCO1ACCU_NCO1ACC17_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC17_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC17_MASK                            0x2
#define _NCO1ACCU_NCO1ACC18_POSN                            0x2
#define _NCO1ACCU_NCO1ACC18_POSITION                        0x2
#define _NCO1ACCU_NCO1ACC18_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC18_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC18_MASK                            0x4
#define _NCO1ACCU_NCO1ACC19_POSN                            0x3
#define _NCO1ACCU_NCO1ACC19_POSITION                        0x3
#define _NCO1ACCU_NCO1ACC19_SIZE                            0x1
#define _NCO1ACCU_NCO1ACC19_LENGTH                          0x1
#define _NCO1ACCU_NCO1ACC19_MASK                            0x8

// Register: NCO1INC
#define NCO1INC NCO1INC
#ifndef __CCI__
extern volatile __uint24                NCO1INC             __at(0x02A);
#endif
#ifndef _LIB_BUILD
asm("NCO1INC equ 02Ah");
#endif

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
extern volatile unsigned char           NCO1INCL            __at(0x02A);
#ifndef _LIB_BUILD
asm("NCO1INCL equ 02Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC0               :1;
        unsigned NCO1INC1               :1;
        unsigned NCO1INC2               :1;
        unsigned NCO1INC3               :1;
        unsigned NCO1INC4               :1;
        unsigned NCO1INC5               :1;
        unsigned NCO1INC6               :1;
        unsigned NCO1INC7               :1;
    };
} NCO1INCLbits_t;
extern volatile NCO1INCLbits_t NCO1INCLbits __at(0x02A);
// bitfield macros
#define _NCO1INCL_NCO1INC0_POSN                             0x0
#define _NCO1INCL_NCO1INC0_POSITION                         0x0
#define _NCO1INCL_NCO1INC0_SIZE                             0x1
#define _NCO1INCL_NCO1INC0_LENGTH                           0x1
#define _NCO1INCL_NCO1INC0_MASK                             0x1
#define _NCO1INCL_NCO1INC1_POSN                             0x1
#define _NCO1INCL_NCO1INC1_POSITION                         0x1
#define _NCO1INCL_NCO1INC1_SIZE                             0x1
#define _NCO1INCL_NCO1INC1_LENGTH                           0x1
#define _NCO1INCL_NCO1INC1_MASK                             0x2
#define _NCO1INCL_NCO1INC2_POSN                             0x2
#define _NCO1INCL_NCO1INC2_POSITION                         0x2
#define _NCO1INCL_NCO1INC2_SIZE                             0x1
#define _NCO1INCL_NCO1INC2_LENGTH                           0x1
#define _NCO1INCL_NCO1INC2_MASK                             0x4
#define _NCO1INCL_NCO1INC3_POSN                             0x3
#define _NCO1INCL_NCO1INC3_POSITION                         0x3
#define _NCO1INCL_NCO1INC3_SIZE                             0x1
#define _NCO1INCL_NCO1INC3_LENGTH                           0x1
#define _NCO1INCL_NCO1INC3_MASK                             0x8
#define _NCO1INCL_NCO1INC4_POSN                             0x4
#define _NCO1INCL_NCO1INC4_POSITION                         0x4
#define _NCO1INCL_NCO1INC4_SIZE                             0x1
#define _NCO1INCL_NCO1INC4_LENGTH                           0x1
#define _NCO1INCL_NCO1INC4_MASK                             0x10
#define _NCO1INCL_NCO1INC5_POSN                             0x5
#define _NCO1INCL_NCO1INC5_POSITION                         0x5
#define _NCO1INCL_NCO1INC5_SIZE                             0x1
#define _NCO1INCL_NCO1INC5_LENGTH                           0x1
#define _NCO1INCL_NCO1INC5_MASK                             0x20
#define _NCO1INCL_NCO1INC6_POSN                             0x6
#define _NCO1INCL_NCO1INC6_POSITION                         0x6
#define _NCO1INCL_NCO1INC6_SIZE                             0x1
#define _NCO1INCL_NCO1INC6_LENGTH                           0x1
#define _NCO1INCL_NCO1INC6_MASK                             0x40
#define _NCO1INCL_NCO1INC7_POSN                             0x7
#define _NCO1INCL_NCO1INC7_POSITION                         0x7
#define _NCO1INCL_NCO1INC7_SIZE                             0x1
#define _NCO1INCL_NCO1INC7_LENGTH                           0x1
#define _NCO1INCL_NCO1INC7_MASK                             0x80

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
extern volatile unsigned char           NCO1INCH            __at(0x02B);
#ifndef _LIB_BUILD
asm("NCO1INCH equ 02Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC8               :1;
        unsigned NCO1INC9               :1;
        unsigned NCO1INC10              :1;
        unsigned NCO1INC11              :1;
        unsigned NCO1INC12              :1;
        unsigned NCO1INC13              :1;
        unsigned NCO1INC14              :1;
        unsigned NCO1INC15              :1;
    };
} NCO1INCHbits_t;
extern volatile NCO1INCHbits_t NCO1INCHbits __at(0x02B);
// bitfield macros
#define _NCO1INCH_NCO1INC8_POSN                             0x0
#define _NCO1INCH_NCO1INC8_POSITION                         0x0
#define _NCO1INCH_NCO1INC8_SIZE                             0x1
#define _NCO1INCH_NCO1INC8_LENGTH                           0x1
#define _NCO1INCH_NCO1INC8_MASK                             0x1
#define _NCO1INCH_NCO1INC9_POSN                             0x1
#define _NCO1INCH_NCO1INC9_POSITION                         0x1
#define _NCO1INCH_NCO1INC9_SIZE                             0x1
#define _NCO1INCH_NCO1INC9_LENGTH                           0x1
#define _NCO1INCH_NCO1INC9_MASK                             0x2
#define _NCO1INCH_NCO1INC10_POSN                            0x2
#define _NCO1INCH_NCO1INC10_POSITION                        0x2
#define _NCO1INCH_NCO1INC10_SIZE                            0x1
#define _NCO1INCH_NCO1INC10_LENGTH                          0x1
#define _NCO1INCH_NCO1INC10_MASK                            0x4
#define _NCO1INCH_NCO1INC11_POSN                            0x3
#define _NCO1INCH_NCO1INC11_POSITION                        0x3
#define _NCO1INCH_NCO1INC11_SIZE                            0x1
#define _NCO1INCH_NCO1INC11_LENGTH                          0x1
#define _NCO1INCH_NCO1INC11_MASK                            0x8
#define _NCO1INCH_NCO1INC12_POSN                            0x4
#define _NCO1INCH_NCO1INC12_POSITION                        0x4
#define _NCO1INCH_NCO1INC12_SIZE                            0x1
#define _NCO1INCH_NCO1INC12_LENGTH                          0x1
#define _NCO1INCH_NCO1INC12_MASK                            0x10
#define _NCO1INCH_NCO1INC13_POSN                            0x5
#define _NCO1INCH_NCO1INC13_POSITION                        0x5
#define _NCO1INCH_NCO1INC13_SIZE                            0x1
#define _NCO1INCH_NCO1INC13_LENGTH                          0x1
#define _NCO1INCH_NCO1INC13_MASK                            0x20
#define _NCO1INCH_NCO1INC14_POSN                            0x6
#define _NCO1INCH_NCO1INC14_POSITION                        0x6
#define _NCO1INCH_NCO1INC14_SIZE                            0x1
#define _NCO1INCH_NCO1INC14_LENGTH                          0x1
#define _NCO1INCH_NCO1INC14_MASK                            0x40
#define _NCO1INCH_NCO1INC15_POSN                            0x7
#define _NCO1INCH_NCO1INC15_POSITION                        0x7
#define _NCO1INCH_NCO1INC15_SIZE                            0x1
#define _NCO1INCH_NCO1INC15_LENGTH                          0x1
#define _NCO1INCH_NCO1INC15_MASK                            0x80

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
extern volatile unsigned char           NCO1INCU            __at(0x02C);
#ifndef _LIB_BUILD
asm("NCO1INCU equ 02Ch");
#endif

// Register: NCO1CON
#define NCO1CON NCO1CON
extern volatile unsigned char           NCO1CON             __at(0x02D);
#ifndef _LIB_BUILD
asm("NCO1CON equ 02Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1PFM                  :1;
        unsigned                        :3;
        unsigned N1POL                  :1;
        unsigned N1OUT                  :1;
        unsigned N1OE                   :1;
        unsigned N1EN                   :1;
    };
} NCO1CONbits_t;
extern volatile NCO1CONbits_t NCO1CONbits __at(0x02D);
// bitfield macros
#define _NCO1CON_N1PFM_POSN                                 0x0
#define _NCO1CON_N1PFM_POSITION                             0x0
#define _NCO1CON_N1PFM_SIZE                                 0x1
#define _NCO1CON_N1PFM_LENGTH                               0x1
#define _NCO1CON_N1PFM_MASK                                 0x1
#define _NCO1CON_N1POL_POSN                                 0x4
#define _NCO1CON_N1POL_POSITION                             0x4
#define _NCO1CON_N1POL_SIZE                                 0x1
#define _NCO1CON_N1POL_LENGTH                               0x1
#define _NCO1CON_N1POL_MASK                                 0x10
#define _NCO1CON_N1OUT_POSN                                 0x5
#define _NCO1CON_N1OUT_POSITION                             0x5
#define _NCO1CON_N1OUT_SIZE                                 0x1
#define _NCO1CON_N1OUT_LENGTH                               0x1
#define _NCO1CON_N1OUT_MASK                                 0x20
#define _NCO1CON_N1OE_POSN                                  0x6
#define _NCO1CON_N1OE_POSITION                              0x6
#define _NCO1CON_N1OE_SIZE                                  0x1
#define _NCO1CON_N1OE_LENGTH                                0x1
#define _NCO1CON_N1OE_MASK                                  0x40
#define _NCO1CON_N1EN_POSN                                  0x7
#define _NCO1CON_N1EN_POSITION                              0x7
#define _NCO1CON_N1EN_SIZE                                  0x1
#define _NCO1CON_N1EN_LENGTH                                0x1
#define _NCO1CON_N1EN_MASK                                  0x80

// Register: NCO1CLK
#define NCO1CLK NCO1CLK
extern volatile unsigned char           NCO1CLK             __at(0x02E);
#ifndef _LIB_BUILD
asm("NCO1CLK equ 02Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1CKS                  :4;
        unsigned                        :1;
        unsigned N1PWS                  :3;
    };
    struct {
        unsigned N1CKS0                 :1;
        unsigned N1CKS1                 :1;
        unsigned                        :3;
        unsigned N1PWS0                 :1;
        unsigned N1PWS1                 :1;
        unsigned N1PWS2                 :1;
    };
} NCO1CLKbits_t;
extern volatile NCO1CLKbits_t NCO1CLKbits __at(0x02E);
// bitfield macros
#define _NCO1CLK_N1CKS_POSN                                 0x0
#define _NCO1CLK_N1CKS_POSITION                             0x0
#define _NCO1CLK_N1CKS_SIZE                                 0x4
#define _NCO1CLK_N1CKS_LENGTH                               0x4
#define _NCO1CLK_N1CKS_MASK                                 0xF
#define _NCO1CLK_N1PWS_POSN                                 0x5
#define _NCO1CLK_N1PWS_POSITION                             0x5
#define _NCO1CLK_N1PWS_SIZE                                 0x3
#define _NCO1CLK_N1PWS_LENGTH                               0x3
#define _NCO1CLK_N1PWS_MASK                                 0xE0
#define _NCO1CLK_N1CKS0_POSN                                0x0
#define _NCO1CLK_N1CKS0_POSITION                            0x0
#define _NCO1CLK_N1CKS0_SIZE                                0x1
#define _NCO1CLK_N1CKS0_LENGTH                              0x1
#define _NCO1CLK_N1CKS0_MASK                                0x1
#define _NCO1CLK_N1CKS1_POSN                                0x1
#define _NCO1CLK_N1CKS1_POSITION                            0x1
#define _NCO1CLK_N1CKS1_SIZE                                0x1
#define _NCO1CLK_N1CKS1_LENGTH                              0x1
#define _NCO1CLK_N1CKS1_MASK                                0x2
#define _NCO1CLK_N1PWS0_POSN                                0x5
#define _NCO1CLK_N1PWS0_POSITION                            0x5
#define _NCO1CLK_N1PWS0_SIZE                                0x1
#define _NCO1CLK_N1PWS0_LENGTH                              0x1
#define _NCO1CLK_N1PWS0_MASK                                0x20
#define _NCO1CLK_N1PWS1_POSN                                0x6
#define _NCO1CLK_N1PWS1_POSITION                            0x6
#define _NCO1CLK_N1PWS1_SIZE                                0x1
#define _NCO1CLK_N1PWS1_LENGTH                              0x1
#define _NCO1CLK_N1PWS1_MASK                                0x40
#define _NCO1CLK_N1PWS2_POSN                                0x7
#define _NCO1CLK_N1PWS2_POSITION                            0x7
#define _NCO1CLK_N1PWS2_SIZE                                0x1
#define _NCO1CLK_N1PWS2_LENGTH                              0x1
#define _NCO1CLK_N1PWS2_MASK                                0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x030);
#ifndef _LIB_BUILD
asm("WDTCON equ 030h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :5;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x030);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E
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
#define _WDTCON_WDTPS4_POSN                                 0x5
#define _WDTCON_WDTPS4_POSITION                             0x5
#define _WDTCON_WDTPS4_SIZE                                 0x1
#define _WDTCON_WDTPS4_LENGTH                               0x1
#define _WDTCON_WDTPS4_MASK                                 0x20

// Register: CLC1CON
#define CLC1CON CLC1CON
extern volatile unsigned char           CLC1CON             __at(0x031);
#ifndef _LIB_BUILD
asm("CLC1CON equ 031h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1MODE0               :1;
        unsigned LC1MODE1               :1;
        unsigned LC1MODE2               :1;
        unsigned LC1INTN                :1;
        unsigned LC1INTP                :1;
        unsigned LC1OUT                 :1;
        unsigned LC1OE                  :1;
        unsigned LC1EN                  :1;
    };
    struct {
        unsigned LCMODE0                :1;
        unsigned LCMODE1                :1;
        unsigned LCMODE2                :1;
        unsigned LCINTN                 :1;
        unsigned LCINTP                 :1;
        unsigned LCOUT                  :1;
        unsigned LCOE                   :1;
        unsigned LCEN                   :1;
    };
    struct {
        unsigned LC1MODE                :3;
    };
} CLC1CONbits_t;
extern volatile CLC1CONbits_t CLC1CONbits __at(0x031);
// bitfield macros
#define _CLC1CON_LC1MODE0_POSN                              0x0
#define _CLC1CON_LC1MODE0_POSITION                          0x0
#define _CLC1CON_LC1MODE0_SIZE                              0x1
#define _CLC1CON_LC1MODE0_LENGTH                            0x1
#define _CLC1CON_LC1MODE0_MASK                              0x1
#define _CLC1CON_LC1MODE1_POSN                              0x1
#define _CLC1CON_LC1MODE1_POSITION                          0x1
#define _CLC1CON_LC1MODE1_SIZE                              0x1
#define _CLC1CON_LC1MODE1_LENGTH                            0x1
#define _CLC1CON_LC1MODE1_MASK                              0x2
#define _CLC1CON_LC1MODE2_POSN                              0x2
#define _CLC1CON_LC1MODE2_POSITION                          0x2
#define _CLC1CON_LC1MODE2_SIZE                              0x1
#define _CLC1CON_LC1MODE2_LENGTH                            0x1
#define _CLC1CON_LC1MODE2_MASK                              0x4
#define _CLC1CON_LC1INTN_POSN                               0x3
#define _CLC1CON_LC1INTN_POSITION                           0x3
#define _CLC1CON_LC1INTN_SIZE                               0x1
#define _CLC1CON_LC1INTN_LENGTH                             0x1
#define _CLC1CON_LC1INTN_MASK                               0x8
#define _CLC1CON_LC1INTP_POSN                               0x4
#define _CLC1CON_LC1INTP_POSITION                           0x4
#define _CLC1CON_LC1INTP_SIZE                               0x1
#define _CLC1CON_LC1INTP_LENGTH                             0x1
#define _CLC1CON_LC1INTP_MASK                               0x10
#define _CLC1CON_LC1OUT_POSN                                0x5
#define _CLC1CON_LC1OUT_POSITION                            0x5
#define _CLC1CON_LC1OUT_SIZE                                0x1
#define _CLC1CON_LC1OUT_LENGTH                              0x1
#define _CLC1CON_LC1OUT_MASK                                0x20
#define _CLC1CON_LC1OE_POSN                                 0x6
#define _CLC1CON_LC1OE_POSITION                             0x6
#define _CLC1CON_LC1OE_SIZE                                 0x1
#define _CLC1CON_LC1OE_LENGTH                               0x1
#define _CLC1CON_LC1OE_MASK                                 0x40
#define _CLC1CON_LC1EN_POSN                                 0x7
#define _CLC1CON_LC1EN_POSITION                             0x7
#define _CLC1CON_LC1EN_SIZE                                 0x1
#define _CLC1CON_LC1EN_LENGTH                               0x1
#define _CLC1CON_LC1EN_MASK                                 0x80
#define _CLC1CON_LCMODE0_POSN                               0x0
#define _CLC1CON_LCMODE0_POSITION                           0x0
#define _CLC1CON_LCMODE0_SIZE                               0x1
#define _CLC1CON_LCMODE0_LENGTH                             0x1
#define _CLC1CON_LCMODE0_MASK                               0x1
#define _CLC1CON_LCMODE1_POSN                               0x1
#define _CLC1CON_LCMODE1_POSITION                           0x1
#define _CLC1CON_LCMODE1_SIZE                               0x1
#define _CLC1CON_LCMODE1_LENGTH                             0x1
#define _CLC1CON_LCMODE1_MASK                               0x2
#define _CLC1CON_LCMODE2_POSN                               0x2
#define _CLC1CON_LCMODE2_POSITION                           0x2
#define _CLC1CON_LCMODE2_SIZE                               0x1
#define _CLC1CON_LCMODE2_LENGTH                             0x1
#define _CLC1CON_LCMODE2_MASK                               0x4
#define _CLC1CON_LCINTN_POSN                                0x3
#define _CLC1CON_LCINTN_POSITION                            0x3
#define _CLC1CON_LCINTN_SIZE                                0x1
#define _CLC1CON_LCINTN_LENGTH                              0x1
#define _CLC1CON_LCINTN_MASK                                0x8
#define _CLC1CON_LCINTP_POSN                                0x4
#define _CLC1CON_LCINTP_POSITION                            0x4
#define _CLC1CON_LCINTP_SIZE                                0x1
#define _CLC1CON_LCINTP_LENGTH                              0x1
#define _CLC1CON_LCINTP_MASK                                0x10
#define _CLC1CON_LCOUT_POSN                                 0x5
#define _CLC1CON_LCOUT_POSITION                             0x5
#define _CLC1CON_LCOUT_SIZE                                 0x1
#define _CLC1CON_LCOUT_LENGTH                               0x1
#define _CLC1CON_LCOUT_MASK                                 0x20
#define _CLC1CON_LCOE_POSN                                  0x6
#define _CLC1CON_LCOE_POSITION                              0x6
#define _CLC1CON_LCOE_SIZE                                  0x1
#define _CLC1CON_LCOE_LENGTH                                0x1
#define _CLC1CON_LCOE_MASK                                  0x40
#define _CLC1CON_LCEN_POSN                                  0x7
#define _CLC1CON_LCEN_POSITION                              0x7
#define _CLC1CON_LCEN_SIZE                                  0x1
#define _CLC1CON_LCEN_LENGTH                                0x1
#define _CLC1CON_LCEN_MASK                                  0x80
#define _CLC1CON_LC1MODE_POSN                               0x0
#define _CLC1CON_LC1MODE_POSITION                           0x0
#define _CLC1CON_LC1MODE_SIZE                               0x3
#define _CLC1CON_LC1MODE_LENGTH                             0x3
#define _CLC1CON_LC1MODE_MASK                               0x7

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
extern volatile unsigned char           CLC1SEL0            __at(0x032);
#ifndef _LIB_BUILD
asm("CLC1SEL0 equ 032h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D1S0                :1;
        unsigned LC1D1S1                :1;
        unsigned LC1D1S2                :1;
        unsigned                        :1;
        unsigned LC1D2S0                :1;
        unsigned LC1D2S1                :1;
        unsigned LC1D2S2                :1;
    };
    struct {
        unsigned D1S0                   :1;
        unsigned D1S1                   :1;
        unsigned D1S2                   :1;
        unsigned                        :1;
        unsigned D2S0                   :1;
        unsigned D2S1                   :1;
        unsigned D2S2                   :1;
    };
    struct {
        unsigned LC1D1S                 :3;
        unsigned                        :1;
        unsigned LC1D2S                 :3;
    };
} CLC1SEL0bits_t;
extern volatile CLC1SEL0bits_t CLC1SEL0bits __at(0x032);
// bitfield macros
#define _CLC1SEL0_LC1D1S0_POSN                              0x0
#define _CLC1SEL0_LC1D1S0_POSITION                          0x0
#define _CLC1SEL0_LC1D1S0_SIZE                              0x1
#define _CLC1SEL0_LC1D1S0_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S0_MASK                              0x1
#define _CLC1SEL0_LC1D1S1_POSN                              0x1
#define _CLC1SEL0_LC1D1S1_POSITION                          0x1
#define _CLC1SEL0_LC1D1S1_SIZE                              0x1
#define _CLC1SEL0_LC1D1S1_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S1_MASK                              0x2
#define _CLC1SEL0_LC1D1S2_POSN                              0x2
#define _CLC1SEL0_LC1D1S2_POSITION                          0x2
#define _CLC1SEL0_LC1D1S2_SIZE                              0x1
#define _CLC1SEL0_LC1D1S2_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S2_MASK                              0x4
#define _CLC1SEL0_LC1D2S0_POSN                              0x4
#define _CLC1SEL0_LC1D2S0_POSITION                          0x4
#define _CLC1SEL0_LC1D2S0_SIZE                              0x1
#define _CLC1SEL0_LC1D2S0_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S0_MASK                              0x10
#define _CLC1SEL0_LC1D2S1_POSN                              0x5
#define _CLC1SEL0_LC1D2S1_POSITION                          0x5
#define _CLC1SEL0_LC1D2S1_SIZE                              0x1
#define _CLC1SEL0_LC1D2S1_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S1_MASK                              0x20
#define _CLC1SEL0_LC1D2S2_POSN                              0x6
#define _CLC1SEL0_LC1D2S2_POSITION                          0x6
#define _CLC1SEL0_LC1D2S2_SIZE                              0x1
#define _CLC1SEL0_LC1D2S2_LENGTH                            0x1
#define _CLC1SEL0_LC1D2S2_MASK                              0x40
#define _CLC1SEL0_D1S0_POSN                                 0x0
#define _CLC1SEL0_D1S0_POSITION                             0x0
#define _CLC1SEL0_D1S0_SIZE                                 0x1
#define _CLC1SEL0_D1S0_LENGTH                               0x1
#define _CLC1SEL0_D1S0_MASK                                 0x1
#define _CLC1SEL0_D1S1_POSN                                 0x1
#define _CLC1SEL0_D1S1_POSITION                             0x1
#define _CLC1SEL0_D1S1_SIZE                                 0x1
#define _CLC1SEL0_D1S1_LENGTH                               0x1
#define _CLC1SEL0_D1S1_MASK                                 0x2
#define _CLC1SEL0_D1S2_POSN                                 0x2
#define _CLC1SEL0_D1S2_POSITION                             0x2
#define _CLC1SEL0_D1S2_SIZE                                 0x1
#define _CLC1SEL0_D1S2_LENGTH                               0x1
#define _CLC1SEL0_D1S2_MASK                                 0x4
#define _CLC1SEL0_D2S0_POSN                                 0x4
#define _CLC1SEL0_D2S0_POSITION                             0x4
#define _CLC1SEL0_D2S0_SIZE                                 0x1
#define _CLC1SEL0_D2S0_LENGTH                               0x1
#define _CLC1SEL0_D2S0_MASK                                 0x10
#define _CLC1SEL0_D2S1_POSN                                 0x5
#define _CLC1SEL0_D2S1_POSITION                             0x5
#define _CLC1SEL0_D2S1_SIZE                                 0x1
#define _CLC1SEL0_D2S1_LENGTH                               0x1
#define _CLC1SEL0_D2S1_MASK                                 0x20
#define _CLC1SEL0_D2S2_POSN                                 0x6
#define _CLC1SEL0_D2S2_POSITION                             0x6
#define _CLC1SEL0_D2S2_SIZE                                 0x1
#define _CLC1SEL0_D2S2_LENGTH                               0x1
#define _CLC1SEL0_D2S2_MASK                                 0x40
#define _CLC1SEL0_LC1D1S_POSN                               0x0
#define _CLC1SEL0_LC1D1S_POSITION                           0x0
#define _CLC1SEL0_LC1D1S_SIZE                               0x3
#define _CLC1SEL0_LC1D1S_LENGTH                             0x3
#define _CLC1SEL0_LC1D1S_MASK                               0x7
#define _CLC1SEL0_LC1D2S_POSN                               0x4
#define _CLC1SEL0_LC1D2S_POSITION                           0x4
#define _CLC1SEL0_LC1D2S_SIZE                               0x3
#define _CLC1SEL0_LC1D2S_LENGTH                             0x3
#define _CLC1SEL0_LC1D2S_MASK                               0x70

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
extern volatile unsigned char           CLC1SEL1            __at(0x033);
#ifndef _LIB_BUILD
asm("CLC1SEL1 equ 033h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D3S0                :1;
        unsigned LC1D3S1                :1;
        unsigned LC1D3S2                :1;
        unsigned                        :1;
        unsigned LC1D4S0                :1;
        unsigned LC1D4S1                :1;
        unsigned LC1D4S2                :1;
    };
    struct {
        unsigned D3S0                   :1;
        unsigned D3S1                   :1;
        unsigned D3S2                   :1;
        unsigned                        :1;
        unsigned D4S0                   :1;
        unsigned D4S1                   :1;
        unsigned D4S2                   :1;
    };
    struct {
        unsigned LC1D3S                 :3;
        unsigned                        :1;
        unsigned LC1D4S                 :3;
    };
} CLC1SEL1bits_t;
extern volatile CLC1SEL1bits_t CLC1SEL1bits __at(0x033);
// bitfield macros
#define _CLC1SEL1_LC1D3S0_POSN                              0x0
#define _CLC1SEL1_LC1D3S0_POSITION                          0x0
#define _CLC1SEL1_LC1D3S0_SIZE                              0x1
#define _CLC1SEL1_LC1D3S0_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S0_MASK                              0x1
#define _CLC1SEL1_LC1D3S1_POSN                              0x1
#define _CLC1SEL1_LC1D3S1_POSITION                          0x1
#define _CLC1SEL1_LC1D3S1_SIZE                              0x1
#define _CLC1SEL1_LC1D3S1_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S1_MASK                              0x2
#define _CLC1SEL1_LC1D3S2_POSN                              0x2
#define _CLC1SEL1_LC1D3S2_POSITION                          0x2
#define _CLC1SEL1_LC1D3S2_SIZE                              0x1
#define _CLC1SEL1_LC1D3S2_LENGTH                            0x1
#define _CLC1SEL1_LC1D3S2_MASK                              0x4
#define _CLC1SEL1_LC1D4S0_POSN                              0x4
#define _CLC1SEL1_LC1D4S0_POSITION                          0x4
#define _CLC1SEL1_LC1D4S0_SIZE                              0x1
#define _CLC1SEL1_LC1D4S0_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S0_MASK                              0x10
#define _CLC1SEL1_LC1D4S1_POSN                              0x5
#define _CLC1SEL1_LC1D4S1_POSITION                          0x5
#define _CLC1SEL1_LC1D4S1_SIZE                              0x1
#define _CLC1SEL1_LC1D4S1_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S1_MASK                              0x20
#define _CLC1SEL1_LC1D4S2_POSN                              0x6
#define _CLC1SEL1_LC1D4S2_POSITION                          0x6
#define _CLC1SEL1_LC1D4S2_SIZE                              0x1
#define _CLC1SEL1_LC1D4S2_LENGTH                            0x1
#define _CLC1SEL1_LC1D4S2_MASK                              0x40
#define _CLC1SEL1_D3S0_POSN                                 0x0
#define _CLC1SEL1_D3S0_POSITION                             0x0
#define _CLC1SEL1_D3S0_SIZE                                 0x1
#define _CLC1SEL1_D3S0_LENGTH                               0x1
#define _CLC1SEL1_D3S0_MASK                                 0x1
#define _CLC1SEL1_D3S1_POSN                                 0x1
#define _CLC1SEL1_D3S1_POSITION                             0x1
#define _CLC1SEL1_D3S1_SIZE                                 0x1
#define _CLC1SEL1_D3S1_LENGTH                               0x1
#define _CLC1SEL1_D3S1_MASK                                 0x2
#define _CLC1SEL1_D3S2_POSN                                 0x2
#define _CLC1SEL1_D3S2_POSITION                             0x2
#define _CLC1SEL1_D3S2_SIZE                                 0x1
#define _CLC1SEL1_D3S2_LENGTH                               0x1
#define _CLC1SEL1_D3S2_MASK                                 0x4
#define _CLC1SEL1_D4S0_POSN                                 0x4
#define _CLC1SEL1_D4S0_POSITION                             0x4
#define _CLC1SEL1_D4S0_SIZE                                 0x1
#define _CLC1SEL1_D4S0_LENGTH                               0x1
#define _CLC1SEL1_D4S0_MASK                                 0x10
#define _CLC1SEL1_D4S1_POSN                                 0x5
#define _CLC1SEL1_D4S1_POSITION                             0x5
#define _CLC1SEL1_D4S1_SIZE                                 0x1
#define _CLC1SEL1_D4S1_LENGTH                               0x1
#define _CLC1SEL1_D4S1_MASK                                 0x20
#define _CLC1SEL1_D4S2_POSN                                 0x6
#define _CLC1SEL1_D4S2_POSITION                             0x6
#define _CLC1SEL1_D4S2_SIZE                                 0x1
#define _CLC1SEL1_D4S2_LENGTH                               0x1
#define _CLC1SEL1_D4S2_MASK                                 0x40
#define _CLC1SEL1_LC1D3S_POSN                               0x0
#define _CLC1SEL1_LC1D3S_POSITION                           0x0
#define _CLC1SEL1_LC1D3S_SIZE                               0x3
#define _CLC1SEL1_LC1D3S_LENGTH                             0x3
#define _CLC1SEL1_LC1D3S_MASK                               0x7
#define _CLC1SEL1_LC1D4S_POSN                               0x4
#define _CLC1SEL1_LC1D4S_POSITION                           0x4
#define _CLC1SEL1_LC1D4S_SIZE                               0x3
#define _CLC1SEL1_LC1D4S_LENGTH                             0x3
#define _CLC1SEL1_LC1D4S_MASK                               0x70

// Register: CLC1POL
#define CLC1POL CLC1POL
extern volatile unsigned char           CLC1POL             __at(0x034);
#ifndef _LIB_BUILD
asm("CLC1POL equ 034h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1POL               :1;
        unsigned LC1G2POL               :1;
        unsigned LC1G3POL               :1;
        unsigned LC1G4POL               :1;
        unsigned                        :3;
        unsigned LC1POL                 :1;
    };
    struct {
        unsigned G1POL                  :1;
        unsigned G2POL                  :1;
        unsigned G3POL                  :1;
        unsigned G4POL                  :1;
        unsigned                        :3;
        unsigned POL                    :1;
    };
} CLC1POLbits_t;
extern volatile CLC1POLbits_t CLC1POLbits __at(0x034);
// bitfield macros
#define _CLC1POL_LC1G1POL_POSN                              0x0
#define _CLC1POL_LC1G1POL_POSITION                          0x0
#define _CLC1POL_LC1G1POL_SIZE                              0x1
#define _CLC1POL_LC1G1POL_LENGTH                            0x1
#define _CLC1POL_LC1G1POL_MASK                              0x1
#define _CLC1POL_LC1G2POL_POSN                              0x1
#define _CLC1POL_LC1G2POL_POSITION                          0x1
#define _CLC1POL_LC1G2POL_SIZE                              0x1
#define _CLC1POL_LC1G2POL_LENGTH                            0x1
#define _CLC1POL_LC1G2POL_MASK                              0x2
#define _CLC1POL_LC1G3POL_POSN                              0x2
#define _CLC1POL_LC1G3POL_POSITION                          0x2
#define _CLC1POL_LC1G3POL_SIZE                              0x1
#define _CLC1POL_LC1G3POL_LENGTH                            0x1
#define _CLC1POL_LC1G3POL_MASK                              0x4
#define _CLC1POL_LC1G4POL_POSN                              0x3
#define _CLC1POL_LC1G4POL_POSITION                          0x3
#define _CLC1POL_LC1G4POL_SIZE                              0x1
#define _CLC1POL_LC1G4POL_LENGTH                            0x1
#define _CLC1POL_LC1G4POL_MASK                              0x8
#define _CLC1POL_LC1POL_POSN                                0x7
#define _CLC1POL_LC1POL_POSITION                            0x7
#define _CLC1POL_LC1POL_SIZE                                0x1
#define _CLC1POL_LC1POL_LENGTH                              0x1
#define _CLC1POL_LC1POL_MASK                                0x80
#define _CLC1POL_G1POL_POSN                                 0x0
#define _CLC1POL_G1POL_POSITION                             0x0
#define _CLC1POL_G1POL_SIZE                                 0x1
#define _CLC1POL_G1POL_LENGTH                               0x1
#define _CLC1POL_G1POL_MASK                                 0x1
#define _CLC1POL_G2POL_POSN                                 0x1
#define _CLC1POL_G2POL_POSITION                             0x1
#define _CLC1POL_G2POL_SIZE                                 0x1
#define _CLC1POL_G2POL_LENGTH                               0x1
#define _CLC1POL_G2POL_MASK                                 0x2
#define _CLC1POL_G3POL_POSN                                 0x2
#define _CLC1POL_G3POL_POSITION                             0x2
#define _CLC1POL_G3POL_SIZE                                 0x1
#define _CLC1POL_G3POL_LENGTH                               0x1
#define _CLC1POL_G3POL_MASK                                 0x4
#define _CLC1POL_G4POL_POSN                                 0x3
#define _CLC1POL_G4POL_POSITION                             0x3
#define _CLC1POL_G4POL_SIZE                                 0x1
#define _CLC1POL_G4POL_LENGTH                               0x1
#define _CLC1POL_G4POL_MASK                                 0x8
#define _CLC1POL_POL_POSN                                   0x7
#define _CLC1POL_POL_POSITION                               0x7
#define _CLC1POL_POL_SIZE                                   0x1
#define _CLC1POL_POL_LENGTH                                 0x1
#define _CLC1POL_POL_MASK                                   0x80

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
extern volatile unsigned char           CLC1GLS0            __at(0x035);
#ifndef _LIB_BUILD
asm("CLC1GLS0 equ 035h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1D1N               :1;
        unsigned LC1G1D1T               :1;
        unsigned LC1G1D2N               :1;
        unsigned LC1G1D2T               :1;
        unsigned LC1G1D3N               :1;
        unsigned LC1G1D3T               :1;
        unsigned LC1G1D4N               :1;
        unsigned LC1G1D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS0bits_t;
extern volatile CLC1GLS0bits_t CLC1GLS0bits __at(0x035);
// bitfield macros
#define _CLC1GLS0_LC1G1D1N_POSN                             0x0
#define _CLC1GLS0_LC1G1D1N_POSITION                         0x0
#define _CLC1GLS0_LC1G1D1N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1N_MASK                             0x1
#define _CLC1GLS0_LC1G1D1T_POSN                             0x1
#define _CLC1GLS0_LC1G1D1T_POSITION                         0x1
#define _CLC1GLS0_LC1G1D1T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1T_MASK                             0x2
#define _CLC1GLS0_LC1G1D2N_POSN                             0x2
#define _CLC1GLS0_LC1G1D2N_POSITION                         0x2
#define _CLC1GLS0_LC1G1D2N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2N_MASK                             0x4
#define _CLC1GLS0_LC1G1D2T_POSN                             0x3
#define _CLC1GLS0_LC1G1D2T_POSITION                         0x3
#define _CLC1GLS0_LC1G1D2T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2T_MASK                             0x8
#define _CLC1GLS0_LC1G1D3N_POSN                             0x4
#define _CLC1GLS0_LC1G1D3N_POSITION                         0x4
#define _CLC1GLS0_LC1G1D3N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3N_MASK                             0x10
#define _CLC1GLS0_LC1G1D3T_POSN                             0x5
#define _CLC1GLS0_LC1G1D3T_POSITION                         0x5
#define _CLC1GLS0_LC1G1D3T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3T_MASK                             0x20
#define _CLC1GLS0_LC1G1D4N_POSN                             0x6
#define _CLC1GLS0_LC1G1D4N_POSITION                         0x6
#define _CLC1GLS0_LC1G1D4N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4N_MASK                             0x40
#define _CLC1GLS0_LC1G1D4T_POSN                             0x7
#define _CLC1GLS0_LC1G1D4T_POSITION                         0x7
#define _CLC1GLS0_LC1G1D4T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4T_MASK                             0x80
#define _CLC1GLS0_D1N_POSN                                  0x0
#define _CLC1GLS0_D1N_POSITION                              0x0
#define _CLC1GLS0_D1N_SIZE                                  0x1
#define _CLC1GLS0_D1N_LENGTH                                0x1
#define _CLC1GLS0_D1N_MASK                                  0x1
#define _CLC1GLS0_D1T_POSN                                  0x1
#define _CLC1GLS0_D1T_POSITION                              0x1
#define _CLC1GLS0_D1T_SIZE                                  0x1
#define _CLC1GLS0_D1T_LENGTH                                0x1
#define _CLC1GLS0_D1T_MASK                                  0x2
#define _CLC1GLS0_D2N_POSN                                  0x2
#define _CLC1GLS0_D2N_POSITION                              0x2
#define _CLC1GLS0_D2N_SIZE                                  0x1
#define _CLC1GLS0_D2N_LENGTH                                0x1
#define _CLC1GLS0_D2N_MASK                                  0x4
#define _CLC1GLS0_D2T_POSN                                  0x3
#define _CLC1GLS0_D2T_POSITION                              0x3
#define _CLC1GLS0_D2T_SIZE                                  0x1
#define _CLC1GLS0_D2T_LENGTH                                0x1
#define _CLC1GLS0_D2T_MASK                                  0x8
#define _CLC1GLS0_D3N_POSN                                  0x4
#define _CLC1GLS0_D3N_POSITION                              0x4
#define _CLC1GLS0_D3N_SIZE                                  0x1
#define _CLC1GLS0_D3N_LENGTH                                0x1
#define _CLC1GLS0_D3N_MASK                                  0x10
#define _CLC1GLS0_D3T_POSN                                  0x5
#define _CLC1GLS0_D3T_POSITION                              0x5
#define _CLC1GLS0_D3T_SIZE                                  0x1
#define _CLC1GLS0_D3T_LENGTH                                0x1
#define _CLC1GLS0_D3T_MASK                                  0x20
#define _CLC1GLS0_D4N_POSN                                  0x6
#define _CLC1GLS0_D4N_POSITION                              0x6
#define _CLC1GLS0_D4N_SIZE                                  0x1
#define _CLC1GLS0_D4N_LENGTH                                0x1
#define _CLC1GLS0_D4N_MASK                                  0x40
#define _CLC1GLS0_D4T_POSN                                  0x7
#define _CLC1GLS0_D4T_POSITION                              0x7
#define _CLC1GLS0_D4T_SIZE                                  0x1
#define _CLC1GLS0_D4T_LENGTH                                0x1
#define _CLC1GLS0_D4T_MASK                                  0x80

// Register: CLC1GLS1
#define CLC1GLS1 CLC1GLS1
extern volatile unsigned char           CLC1GLS1            __at(0x036);
#ifndef _LIB_BUILD
asm("CLC1GLS1 equ 036h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G2D1N               :1;
        unsigned LC1G2D1T               :1;
        unsigned LC1G2D2N               :1;
        unsigned LC1G2D2T               :1;
        unsigned LC1G2D3N               :1;
        unsigned LC1G2D3T               :1;
        unsigned LC1G2D4N               :1;
        unsigned LC1G2D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS1bits_t;
extern volatile CLC1GLS1bits_t CLC1GLS1bits __at(0x036);
// bitfield macros
#define _CLC1GLS1_LC1G2D1N_POSN                             0x0
#define _CLC1GLS1_LC1G2D1N_POSITION                         0x0
#define _CLC1GLS1_LC1G2D1N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1N_MASK                             0x1
#define _CLC1GLS1_LC1G2D1T_POSN                             0x1
#define _CLC1GLS1_LC1G2D1T_POSITION                         0x1
#define _CLC1GLS1_LC1G2D1T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1T_MASK                             0x2
#define _CLC1GLS1_LC1G2D2N_POSN                             0x2
#define _CLC1GLS1_LC1G2D2N_POSITION                         0x2
#define _CLC1GLS1_LC1G2D2N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2N_MASK                             0x4
#define _CLC1GLS1_LC1G2D2T_POSN                             0x3
#define _CLC1GLS1_LC1G2D2T_POSITION                         0x3
#define _CLC1GLS1_LC1G2D2T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2T_MASK                             0x8
#define _CLC1GLS1_LC1G2D3N_POSN                             0x4
#define _CLC1GLS1_LC1G2D3N_POSITION                         0x4
#define _CLC1GLS1_LC1G2D3N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3N_MASK                             0x10
#define _CLC1GLS1_LC1G2D3T_POSN                             0x5
#define _CLC1GLS1_LC1G2D3T_POSITION                         0x5
#define _CLC1GLS1_LC1G2D3T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3T_MASK                             0x20
#define _CLC1GLS1_LC1G2D4N_POSN                             0x6
#define _CLC1GLS1_LC1G2D4N_POSITION                         0x6
#define _CLC1GLS1_LC1G2D4N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4N_MASK                             0x40
#define _CLC1GLS1_LC1G2D4T_POSN                             0x7
#define _CLC1GLS1_LC1G2D4T_POSITION                         0x7
#define _CLC1GLS1_LC1G2D4T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4T_MASK                             0x80
#define _CLC1GLS1_D1N_POSN                                  0x0
#define _CLC1GLS1_D1N_POSITION                              0x0
#define _CLC1GLS1_D1N_SIZE                                  0x1
#define _CLC1GLS1_D1N_LENGTH                                0x1
#define _CLC1GLS1_D1N_MASK                                  0x1
#define _CLC1GLS1_D1T_POSN                                  0x1
#define _CLC1GLS1_D1T_POSITION                              0x1
#define _CLC1GLS1_D1T_SIZE                                  0x1
#define _CLC1GLS1_D1T_LENGTH                                0x1
#define _CLC1GLS1_D1T_MASK                                  0x2
#define _CLC1GLS1_D2N_POSN                                  0x2
#define _CLC1GLS1_D2N_POSITION                              0x2
#define _CLC1GLS1_D2N_SIZE                                  0x1
#define _CLC1GLS1_D2N_LENGTH                                0x1
#define _CLC1GLS1_D2N_MASK                                  0x4
#define _CLC1GLS1_D2T_POSN                                  0x3
#define _CLC1GLS1_D2T_POSITION                              0x3
#define _CLC1GLS1_D2T_SIZE                                  0x1
#define _CLC1GLS1_D2T_LENGTH                                0x1
#define _CLC1GLS1_D2T_MASK                                  0x8
#define _CLC1GLS1_D3N_POSN                                  0x4
#define _CLC1GLS1_D3N_POSITION                              0x4
#define _CLC1GLS1_D3N_SIZE                                  0x1
#define _CLC1GLS1_D3N_LENGTH                                0x1
#define _CLC1GLS1_D3N_MASK                                  0x10
#define _CLC1GLS1_D3T_POSN                                  0x5
#define _CLC1GLS1_D3T_POSITION                              0x5
#define _CLC1GLS1_D3T_SIZE                                  0x1
#define _CLC1GLS1_D3T_LENGTH                                0x1
#define _CLC1GLS1_D3T_MASK                                  0x20
#define _CLC1GLS1_D4N_POSN                                  0x6
#define _CLC1GLS1_D4N_POSITION                              0x6
#define _CLC1GLS1_D4N_SIZE                                  0x1
#define _CLC1GLS1_D4N_LENGTH                                0x1
#define _CLC1GLS1_D4N_MASK                                  0x40
#define _CLC1GLS1_D4T_POSN                                  0x7
#define _CLC1GLS1_D4T_POSITION                              0x7
#define _CLC1GLS1_D4T_SIZE                                  0x1
#define _CLC1GLS1_D4T_LENGTH                                0x1
#define _CLC1GLS1_D4T_MASK                                  0x80

// Register: CLC1GLS2
#define CLC1GLS2 CLC1GLS2
extern volatile unsigned char           CLC1GLS2            __at(0x037);
#ifndef _LIB_BUILD
asm("CLC1GLS2 equ 037h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G3D1N               :1;
        unsigned LC1G3D1T               :1;
        unsigned LC1G3D2N               :1;
        unsigned LC1G3D2T               :1;
        unsigned LC1G3D3N               :1;
        unsigned LC1G3D3T               :1;
        unsigned LC1G3D4N               :1;
        unsigned LC1G3D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS2bits_t;
extern volatile CLC1GLS2bits_t CLC1GLS2bits __at(0x037);
// bitfield macros
#define _CLC1GLS2_LC1G3D1N_POSN                             0x0
#define _CLC1GLS2_LC1G3D1N_POSITION                         0x0
#define _CLC1GLS2_LC1G3D1N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1N_MASK                             0x1
#define _CLC1GLS2_LC1G3D1T_POSN                             0x1
#define _CLC1GLS2_LC1G3D1T_POSITION                         0x1
#define _CLC1GLS2_LC1G3D1T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1T_MASK                             0x2
#define _CLC1GLS2_LC1G3D2N_POSN                             0x2
#define _CLC1GLS2_LC1G3D2N_POSITION                         0x2
#define _CLC1GLS2_LC1G3D2N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2N_MASK                             0x4
#define _CLC1GLS2_LC1G3D2T_POSN                             0x3
#define _CLC1GLS2_LC1G3D2T_POSITION                         0x3
#define _CLC1GLS2_LC1G3D2T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2T_MASK                             0x8
#define _CLC1GLS2_LC1G3D3N_POSN                             0x4
#define _CLC1GLS2_LC1G3D3N_POSITION                         0x4
#define _CLC1GLS2_LC1G3D3N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3N_MASK                             0x10
#define _CLC1GLS2_LC1G3D3T_POSN                             0x5
#define _CLC1GLS2_LC1G3D3T_POSITION                         0x5
#define _CLC1GLS2_LC1G3D3T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3T_MASK                             0x20
#define _CLC1GLS2_LC1G3D4N_POSN                             0x6
#define _CLC1GLS2_LC1G3D4N_POSITION                         0x6
#define _CLC1GLS2_LC1G3D4N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4N_MASK                             0x40
#define _CLC1GLS2_LC1G3D4T_POSN                             0x7
#define _CLC1GLS2_LC1G3D4T_POSITION                         0x7
#define _CLC1GLS2_LC1G3D4T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4T_MASK                             0x80
#define _CLC1GLS2_D1N_POSN                                  0x0
#define _CLC1GLS2_D1N_POSITION                              0x0
#define _CLC1GLS2_D1N_SIZE                                  0x1
#define _CLC1GLS2_D1N_LENGTH                                0x1
#define _CLC1GLS2_D1N_MASK                                  0x1
#define _CLC1GLS2_D1T_POSN                                  0x1
#define _CLC1GLS2_D1T_POSITION                              0x1
#define _CLC1GLS2_D1T_SIZE                                  0x1
#define _CLC1GLS2_D1T_LENGTH                                0x1
#define _CLC1GLS2_D1T_MASK                                  0x2
#define _CLC1GLS2_D2N_POSN                                  0x2
#define _CLC1GLS2_D2N_POSITION                              0x2
#define _CLC1GLS2_D2N_SIZE                                  0x1
#define _CLC1GLS2_D2N_LENGTH                                0x1
#define _CLC1GLS2_D2N_MASK                                  0x4
#define _CLC1GLS2_D2T_POSN                                  0x3
#define _CLC1GLS2_D2T_POSITION                              0x3
#define _CLC1GLS2_D2T_SIZE                                  0x1
#define _CLC1GLS2_D2T_LENGTH                                0x1
#define _CLC1GLS2_D2T_MASK                                  0x8
#define _CLC1GLS2_D3N_POSN                                  0x4
#define _CLC1GLS2_D3N_POSITION                              0x4
#define _CLC1GLS2_D3N_SIZE                                  0x1
#define _CLC1GLS2_D3N_LENGTH                                0x1
#define _CLC1GLS2_D3N_MASK                                  0x10
#define _CLC1GLS2_D3T_POSN                                  0x5
#define _CLC1GLS2_D3T_POSITION                              0x5
#define _CLC1GLS2_D3T_SIZE                                  0x1
#define _CLC1GLS2_D3T_LENGTH                                0x1
#define _CLC1GLS2_D3T_MASK                                  0x20
#define _CLC1GLS2_D4N_POSN                                  0x6
#define _CLC1GLS2_D4N_POSITION                              0x6
#define _CLC1GLS2_D4N_SIZE                                  0x1
#define _CLC1GLS2_D4N_LENGTH                                0x1
#define _CLC1GLS2_D4N_MASK                                  0x40
#define _CLC1GLS2_D4T_POSN                                  0x7
#define _CLC1GLS2_D4T_POSITION                              0x7
#define _CLC1GLS2_D4T_SIZE                                  0x1
#define _CLC1GLS2_D4T_LENGTH                                0x1
#define _CLC1GLS2_D4T_MASK                                  0x80

// Register: CLC1GLS3
#define CLC1GLS3 CLC1GLS3
extern volatile unsigned char           CLC1GLS3            __at(0x038);
#ifndef _LIB_BUILD
asm("CLC1GLS3 equ 038h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G4D1N               :1;
        unsigned LC1G4D1T               :1;
        unsigned LC1G4D2N               :1;
        unsigned LC1G4D2T               :1;
        unsigned LC1G4D3N               :1;
        unsigned LC1G4D3T               :1;
        unsigned LC1G4D4N               :1;
        unsigned LC1G4D4T               :1;
    };
    struct {
        unsigned G4D1N                  :1;
        unsigned G4D1T                  :1;
        unsigned G4D2N                  :1;
        unsigned G4D2T                  :1;
        unsigned G4D3N                  :1;
        unsigned G4D3T                  :1;
        unsigned G4D4N                  :1;
        unsigned G4D4T                  :1;
    };
} CLC1GLS3bits_t;
extern volatile CLC1GLS3bits_t CLC1GLS3bits __at(0x038);
// bitfield macros
#define _CLC1GLS3_LC1G4D1N_POSN                             0x0
#define _CLC1GLS3_LC1G4D1N_POSITION                         0x0
#define _CLC1GLS3_LC1G4D1N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1N_MASK                             0x1
#define _CLC1GLS3_LC1G4D1T_POSN                             0x1
#define _CLC1GLS3_LC1G4D1T_POSITION                         0x1
#define _CLC1GLS3_LC1G4D1T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1T_MASK                             0x2
#define _CLC1GLS3_LC1G4D2N_POSN                             0x2
#define _CLC1GLS3_LC1G4D2N_POSITION                         0x2
#define _CLC1GLS3_LC1G4D2N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2N_MASK                             0x4
#define _CLC1GLS3_LC1G4D2T_POSN                             0x3
#define _CLC1GLS3_LC1G4D2T_POSITION                         0x3
#define _CLC1GLS3_LC1G4D2T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2T_MASK                             0x8
#define _CLC1GLS3_LC1G4D3N_POSN                             0x4
#define _CLC1GLS3_LC1G4D3N_POSITION                         0x4
#define _CLC1GLS3_LC1G4D3N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3N_MASK                             0x10
#define _CLC1GLS3_LC1G4D3T_POSN                             0x5
#define _CLC1GLS3_LC1G4D3T_POSITION                         0x5
#define _CLC1GLS3_LC1G4D3T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3T_MASK                             0x20
#define _CLC1GLS3_LC1G4D4N_POSN                             0x6
#define _CLC1GLS3_LC1G4D4N_POSITION                         0x6
#define _CLC1GLS3_LC1G4D4N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4N_MASK                             0x40
#define _CLC1GLS3_LC1G4D4T_POSN                             0x7
#define _CLC1GLS3_LC1G4D4T_POSITION                         0x7
#define _CLC1GLS3_LC1G4D4T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4T_MASK                             0x80
#define _CLC1GLS3_G4D1N_POSN                                0x0
#define _CLC1GLS3_G4D1N_POSITION                            0x0
#define _CLC1GLS3_G4D1N_SIZE                                0x1
#define _CLC1GLS3_G4D1N_LENGTH                              0x1
#define _CLC1GLS3_G4D1N_MASK                                0x1
#define _CLC1GLS3_G4D1T_POSN                                0x1
#define _CLC1GLS3_G4D1T_POSITION                            0x1
#define _CLC1GLS3_G4D1T_SIZE                                0x1
#define _CLC1GLS3_G4D1T_LENGTH                              0x1
#define _CLC1GLS3_G4D1T_MASK                                0x2
#define _CLC1GLS3_G4D2N_POSN                                0x2
#define _CLC1GLS3_G4D2N_POSITION                            0x2
#define _CLC1GLS3_G4D2N_SIZE                                0x1
#define _CLC1GLS3_G4D2N_LENGTH                              0x1
#define _CLC1GLS3_G4D2N_MASK                                0x4
#define _CLC1GLS3_G4D2T_POSN                                0x3
#define _CLC1GLS3_G4D2T_POSITION                            0x3
#define _CLC1GLS3_G4D2T_SIZE                                0x1
#define _CLC1GLS3_G4D2T_LENGTH                              0x1
#define _CLC1GLS3_G4D2T_MASK                                0x8
#define _CLC1GLS3_G4D3N_POSN                                0x4
#define _CLC1GLS3_G4D3N_POSITION                            0x4
#define _CLC1GLS3_G4D3N_SIZE                                0x1
#define _CLC1GLS3_G4D3N_LENGTH                              0x1
#define _CLC1GLS3_G4D3N_MASK                                0x10
#define _CLC1GLS3_G4D3T_POSN                                0x5
#define _CLC1GLS3_G4D3T_POSITION                            0x5
#define _CLC1GLS3_G4D3T_SIZE                                0x1
#define _CLC1GLS3_G4D3T_LENGTH                              0x1
#define _CLC1GLS3_G4D3T_MASK                                0x20
#define _CLC1GLS3_G4D4N_POSN                                0x6
#define _CLC1GLS3_G4D4N_POSITION                            0x6
#define _CLC1GLS3_G4D4N_SIZE                                0x1
#define _CLC1GLS3_G4D4N_LENGTH                              0x1
#define _CLC1GLS3_G4D4N_MASK                                0x40
#define _CLC1GLS3_G4D4T_POSN                                0x7
#define _CLC1GLS3_G4D4T_POSITION                            0x7
#define _CLC1GLS3_G4D4T_SIZE                                0x1
#define _CLC1GLS3_G4D4T_LENGTH                              0x1
#define _CLC1GLS3_G4D4T_MASK                                0x80

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
extern volatile unsigned char           CWG1CON0            __at(0x039);
#ifndef _LIB_BUILD
asm("CWG1CON0 equ 039h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1CS0                  :1;
        unsigned                        :2;
        unsigned G1POLA                 :1;
        unsigned G1POLB                 :1;
        unsigned G1OEA                  :1;
        unsigned G1OEB                  :1;
        unsigned G1EN                   :1;
    };
    struct {
        unsigned G1CS                   :2;
    };
} CWG1CON0bits_t;
extern volatile CWG1CON0bits_t CWG1CON0bits __at(0x039);
// bitfield macros
#define _CWG1CON0_G1CS0_POSN                                0x0
#define _CWG1CON0_G1CS0_POSITION                            0x0
#define _CWG1CON0_G1CS0_SIZE                                0x1
#define _CWG1CON0_G1CS0_LENGTH                              0x1
#define _CWG1CON0_G1CS0_MASK                                0x1
#define _CWG1CON0_G1POLA_POSN                               0x3
#define _CWG1CON0_G1POLA_POSITION                           0x3
#define _CWG1CON0_G1POLA_SIZE                               0x1
#define _CWG1CON0_G1POLA_LENGTH                             0x1
#define _CWG1CON0_G1POLA_MASK                               0x8
#define _CWG1CON0_G1POLB_POSN                               0x4
#define _CWG1CON0_G1POLB_POSITION                           0x4
#define _CWG1CON0_G1POLB_SIZE                               0x1
#define _CWG1CON0_G1POLB_LENGTH                             0x1
#define _CWG1CON0_G1POLB_MASK                               0x10
#define _CWG1CON0_G1OEA_POSN                                0x5
#define _CWG1CON0_G1OEA_POSITION                            0x5
#define _CWG1CON0_G1OEA_SIZE                                0x1
#define _CWG1CON0_G1OEA_LENGTH                              0x1
#define _CWG1CON0_G1OEA_MASK                                0x20
#define _CWG1CON0_G1OEB_POSN                                0x6
#define _CWG1CON0_G1OEB_POSITION                            0x6
#define _CWG1CON0_G1OEB_SIZE                                0x1
#define _CWG1CON0_G1OEB_LENGTH                              0x1
#define _CWG1CON0_G1OEB_MASK                                0x40
#define _CWG1CON0_G1EN_POSN                                 0x7
#define _CWG1CON0_G1EN_POSITION                             0x7
#define _CWG1CON0_G1EN_SIZE                                 0x1
#define _CWG1CON0_G1EN_LENGTH                               0x1
#define _CWG1CON0_G1EN_MASK                                 0x80
#define _CWG1CON0_G1CS_POSN                                 0x0
#define _CWG1CON0_G1CS_POSITION                             0x0
#define _CWG1CON0_G1CS_SIZE                                 0x2
#define _CWG1CON0_G1CS_LENGTH                               0x2
#define _CWG1CON0_G1CS_MASK                                 0x3

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
extern volatile unsigned char           CWG1CON1            __at(0x03A);
#ifndef _LIB_BUILD
asm("CWG1CON1 equ 03Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1IS0                  :1;
        unsigned G1IS1                  :1;
        unsigned                        :2;
        unsigned G1ASDLA                :2;
        unsigned G1ASDLB                :2;
    };
    struct {
        unsigned G1IS                   :4;
        unsigned G1ASDLA0               :1;
        unsigned G1ASDLA1               :1;
        unsigned G1ASDLB0               :1;
        unsigned G1ASDLB1               :1;
    };
} CWG1CON1bits_t;
extern volatile CWG1CON1bits_t CWG1CON1bits __at(0x03A);
// bitfield macros
#define _CWG1CON1_G1IS0_POSN                                0x0
#define _CWG1CON1_G1IS0_POSITION                            0x0
#define _CWG1CON1_G1IS0_SIZE                                0x1
#define _CWG1CON1_G1IS0_LENGTH                              0x1
#define _CWG1CON1_G1IS0_MASK                                0x1
#define _CWG1CON1_G1IS1_POSN                                0x1
#define _CWG1CON1_G1IS1_POSITION                            0x1
#define _CWG1CON1_G1IS1_SIZE                                0x1
#define _CWG1CON1_G1IS1_LENGTH                              0x1
#define _CWG1CON1_G1IS1_MASK                                0x2
#define _CWG1CON1_G1ASDLA_POSN                              0x4
#define _CWG1CON1_G1ASDLA_POSITION                          0x4
#define _CWG1CON1_G1ASDLA_SIZE                              0x2
#define _CWG1CON1_G1ASDLA_LENGTH                            0x2
#define _CWG1CON1_G1ASDLA_MASK                              0x30
#define _CWG1CON1_G1ASDLB_POSN                              0x6
#define _CWG1CON1_G1ASDLB_POSITION                          0x6
#define _CWG1CON1_G1ASDLB_SIZE                              0x2
#define _CWG1CON1_G1ASDLB_LENGTH                            0x2
#define _CWG1CON1_G1ASDLB_MASK                              0xC0
#define _CWG1CON1_G1IS_POSN                                 0x0
#define _CWG1CON1_G1IS_POSITION                             0x0
#define _CWG1CON1_G1IS_SIZE                                 0x4
#define _CWG1CON1_G1IS_LENGTH                               0x4
#define _CWG1CON1_G1IS_MASK                                 0xF
#define _CWG1CON1_G1ASDLA0_POSN                             0x4
#define _CWG1CON1_G1ASDLA0_POSITION                         0x4
#define _CWG1CON1_G1ASDLA0_SIZE                             0x1
#define _CWG1CON1_G1ASDLA0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA0_MASK                             0x10
#define _CWG1CON1_G1ASDLA1_POSN                             0x5
#define _CWG1CON1_G1ASDLA1_POSITION                         0x5
#define _CWG1CON1_G1ASDLA1_SIZE                             0x1
#define _CWG1CON1_G1ASDLA1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLA1_MASK                             0x20
#define _CWG1CON1_G1ASDLB0_POSN                             0x6
#define _CWG1CON1_G1ASDLB0_POSITION                         0x6
#define _CWG1CON1_G1ASDLB0_SIZE                             0x1
#define _CWG1CON1_G1ASDLB0_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB0_MASK                             0x40
#define _CWG1CON1_G1ASDLB1_POSN                             0x7
#define _CWG1CON1_G1ASDLB1_POSITION                         0x7
#define _CWG1CON1_G1ASDLB1_SIZE                             0x1
#define _CWG1CON1_G1ASDLB1_LENGTH                           0x1
#define _CWG1CON1_G1ASDLB1_MASK                             0x80

// Register: CWG1CON2
#define CWG1CON2 CWG1CON2
extern volatile unsigned char           CWG1CON2            __at(0x03B);
#ifndef _LIB_BUILD
asm("CWG1CON2 equ 03Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned G1ASDFLT               :1;
        unsigned G1ASDCLC1              :1;
        unsigned                        :4;
        unsigned G1ARSEN                :1;
        unsigned G1ASE                  :1;
    };
    struct {
        unsigned G1ASDSFLT              :1;
        unsigned G1ASDSCLC1             :1;
    };
} CWG1CON2bits_t;
extern volatile CWG1CON2bits_t CWG1CON2bits __at(0x03B);
// bitfield macros
#define _CWG1CON2_G1ASDFLT_POSN                             0x0
#define _CWG1CON2_G1ASDFLT_POSITION                         0x0
#define _CWG1CON2_G1ASDFLT_SIZE                             0x1
#define _CWG1CON2_G1ASDFLT_LENGTH                           0x1
#define _CWG1CON2_G1ASDFLT_MASK                             0x1
#define _CWG1CON2_G1ASDCLC1_POSN                            0x1
#define _CWG1CON2_G1ASDCLC1_POSITION                        0x1
#define _CWG1CON2_G1ASDCLC1_SIZE                            0x1
#define _CWG1CON2_G1ASDCLC1_LENGTH                          0x1
#define _CWG1CON2_G1ASDCLC1_MASK                            0x2
#define _CWG1CON2_G1ARSEN_POSN                              0x6
#define _CWG1CON2_G1ARSEN_POSITION                          0x6
#define _CWG1CON2_G1ARSEN_SIZE                              0x1
#define _CWG1CON2_G1ARSEN_LENGTH                            0x1
#define _CWG1CON2_G1ARSEN_MASK                              0x40
#define _CWG1CON2_G1ASE_POSN                                0x7
#define _CWG1CON2_G1ASE_POSITION                            0x7
#define _CWG1CON2_G1ASE_SIZE                                0x1
#define _CWG1CON2_G1ASE_LENGTH                              0x1
#define _CWG1CON2_G1ASE_MASK                                0x80
#define _CWG1CON2_G1ASDSFLT_POSN                            0x0
#define _CWG1CON2_G1ASDSFLT_POSITION                        0x0
#define _CWG1CON2_G1ASDSFLT_SIZE                            0x1
#define _CWG1CON2_G1ASDSFLT_LENGTH                          0x1
#define _CWG1CON2_G1ASDSFLT_MASK                            0x1
#define _CWG1CON2_G1ASDSCLC1_POSN                           0x1
#define _CWG1CON2_G1ASDSCLC1_POSITION                       0x1
#define _CWG1CON2_G1ASDSCLC1_SIZE                           0x1
#define _CWG1CON2_G1ASDSCLC1_LENGTH                         0x1
#define _CWG1CON2_G1ASDSCLC1_MASK                           0x2

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
extern volatile unsigned char           CWG1DBR             __at(0x03C);
#ifndef _LIB_BUILD
asm("CWG1DBR equ 03Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CWG1DBR                :6;
    };
    struct {
        unsigned CWG1DBR0               :1;
        unsigned CWG1DBR1               :1;
        unsigned CWG1DBR2               :1;
        unsigned CWG1DBR3               :1;
        unsigned CWG1DBR4               :1;
        unsigned CWG1DBR5               :1;
    };
} CWG1DBRbits_t;
extern volatile CWG1DBRbits_t CWG1DBRbits __at(0x03C);
// bitfield macros
#define _CWG1DBR_CWG1DBR_POSN                               0x0
#define _CWG1DBR_CWG1DBR_POSITION                           0x0
#define _CWG1DBR_CWG1DBR_SIZE                               0x6
#define _CWG1DBR_CWG1DBR_LENGTH                             0x6
#define _CWG1DBR_CWG1DBR_MASK                               0x3F
#define _CWG1DBR_CWG1DBR0_POSN                              0x0
#define _CWG1DBR_CWG1DBR0_POSITION                          0x0
#define _CWG1DBR_CWG1DBR0_SIZE                              0x1
#define _CWG1DBR_CWG1DBR0_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR0_MASK                              0x1
#define _CWG1DBR_CWG1DBR1_POSN                              0x1
#define _CWG1DBR_CWG1DBR1_POSITION                          0x1
#define _CWG1DBR_CWG1DBR1_SIZE                              0x1
#define _CWG1DBR_CWG1DBR1_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR1_MASK                              0x2
#define _CWG1DBR_CWG1DBR2_POSN                              0x2
#define _CWG1DBR_CWG1DBR2_POSITION                          0x2
#define _CWG1DBR_CWG1DBR2_SIZE                              0x1
#define _CWG1DBR_CWG1DBR2_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR2_MASK                              0x4
#define _CWG1DBR_CWG1DBR3_POSN                              0x3
#define _CWG1DBR_CWG1DBR3_POSITION                          0x3
#define _CWG1DBR_CWG1DBR3_SIZE                              0x1
#define _CWG1DBR_CWG1DBR3_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR3_MASK                              0x8
#define _CWG1DBR_CWG1DBR4_POSN                              0x4
#define _CWG1DBR_CWG1DBR4_POSITION                          0x4
#define _CWG1DBR_CWG1DBR4_SIZE                              0x1
#define _CWG1DBR_CWG1DBR4_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR4_MASK                              0x10
#define _CWG1DBR_CWG1DBR5_POSN                              0x5
#define _CWG1DBR_CWG1DBR5_POSITION                          0x5
#define _CWG1DBR_CWG1DBR5_SIZE                              0x1
#define _CWG1DBR_CWG1DBR5_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR5_MASK                              0x20

// Register: CWG1DBF
#define CWG1DBF CWG1DBF
extern volatile unsigned char           CWG1DBF             __at(0x03D);
#ifndef _LIB_BUILD
asm("CWG1DBF equ 03Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CWG1DBF                :6;
    };
    struct {
        unsigned CWG1DBF0               :1;
        unsigned CWG1DBF1               :1;
        unsigned CWG1DBF2               :1;
        unsigned CWG1DBF3               :1;
        unsigned CWG1DBF4               :1;
        unsigned CWG1DBF5               :1;
    };
} CWG1DBFbits_t;
extern volatile CWG1DBFbits_t CWG1DBFbits __at(0x03D);
// bitfield macros
#define _CWG1DBF_CWG1DBF_POSN                               0x0
#define _CWG1DBF_CWG1DBF_POSITION                           0x0
#define _CWG1DBF_CWG1DBF_SIZE                               0x6
#define _CWG1DBF_CWG1DBF_LENGTH                             0x6
#define _CWG1DBF_CWG1DBF_MASK                               0x3F
#define _CWG1DBF_CWG1DBF0_POSN                              0x0
#define _CWG1DBF_CWG1DBF0_POSITION                          0x0
#define _CWG1DBF_CWG1DBF0_SIZE                              0x1
#define _CWG1DBF_CWG1DBF0_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF0_MASK                              0x1
#define _CWG1DBF_CWG1DBF1_POSN                              0x1
#define _CWG1DBF_CWG1DBF1_POSITION                          0x1
#define _CWG1DBF_CWG1DBF1_SIZE                              0x1
#define _CWG1DBF_CWG1DBF1_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF1_MASK                              0x2
#define _CWG1DBF_CWG1DBF2_POSN                              0x2
#define _CWG1DBF_CWG1DBF2_POSITION                          0x2
#define _CWG1DBF_CWG1DBF2_SIZE                              0x1
#define _CWG1DBF_CWG1DBF2_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF2_MASK                              0x4
#define _CWG1DBF_CWG1DBF3_POSN                              0x3
#define _CWG1DBF_CWG1DBF3_POSITION                          0x3
#define _CWG1DBF_CWG1DBF3_SIZE                              0x1
#define _CWG1DBF_CWG1DBF3_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF3_MASK                              0x8
#define _CWG1DBF_CWG1DBF4_POSN                              0x4
#define _CWG1DBF_CWG1DBF4_POSITION                          0x4
#define _CWG1DBF_CWG1DBF4_SIZE                              0x1
#define _CWG1DBF_CWG1DBF4_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF4_MASK                              0x10
#define _CWG1DBF_CWG1DBF5_POSN                              0x5
#define _CWG1DBF_CWG1DBF5_POSITION                          0x5
#define _CWG1DBF_CWG1DBF5_SIZE                              0x1
#define _CWG1DBF_CWG1DBF5_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF5_MASK                              0x20

// Register: VREGCON
#define VREGCON VREGCON
extern volatile unsigned char           VREGCON             __at(0x03E);
#ifndef _LIB_BUILD
asm("VREGCON equ 03Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VREGPM                 :2;
    };
    struct {
        unsigned VREGPM0                :1;
        unsigned VREGPM1                :1;
    };
} VREGCONbits_t;
extern volatile VREGCONbits_t VREGCONbits __at(0x03E);
// bitfield macros
#define _VREGCON_VREGPM_POSN                                0x0
#define _VREGCON_VREGPM_POSITION                            0x0
#define _VREGCON_VREGPM_SIZE                                0x2
#define _VREGCON_VREGPM_LENGTH                              0x2
#define _VREGCON_VREGPM_MASK                                0x3
#define _VREGCON_VREGPM0_POSN                               0x0
#define _VREGCON_VREGPM0_POSITION                           0x0
#define _VREGCON_VREGPM0_SIZE                               0x1
#define _VREGCON_VREGPM0_LENGTH                             0x1
#define _VREGCON_VREGPM0_MASK                               0x1
#define _VREGCON_VREGPM1_POSN                               0x1
#define _VREGCON_VREGPM1_POSITION                           0x1
#define _VREGCON_VREGPM1_SIZE                               0x1
#define _VREGCON_VREGPM1_LENGTH                             0x1
#define _VREGCON_VREGPM1_MASK                               0x2

// Register: BORCON
#define BORCON BORCON
extern volatile unsigned char           BORCON              __at(0x03F);
#ifndef _LIB_BUILD
asm("BORCON equ 03Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BORRDY                 :1;
        unsigned                        :5;
        unsigned BORFS                  :1;
        unsigned SBOREN                 :1;
    };
} BORCONbits_t;
extern volatile BORCONbits_t BORCONbits __at(0x03F);
// bitfield macros
#define _BORCON_BORRDY_POSN                                 0x0
#define _BORCON_BORRDY_POSITION                             0x0
#define _BORCON_BORRDY_SIZE                                 0x1
#define _BORCON_BORRDY_LENGTH                               0x1
#define _BORCON_BORRDY_MASK                                 0x1
#define _BORCON_BORFS_POSN                                  0x6
#define _BORCON_BORFS_POSITION                              0x6
#define _BORCON_BORFS_SIZE                                  0x1
#define _BORCON_BORFS_LENGTH                                0x1
#define _BORCON_BORFS_MASK                                  0x40
#define _BORCON_SBOREN_POSN                                 0x7
#define _BORCON_SBOREN_POSITION                             0x7
#define _BORCON_SBOREN_SIZE                                 0x1
#define _BORCON_SBOREN_LENGTH                               0x1
#define _BORCON_SBOREN_MASK                                 0x80

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
// ADCON<ADCS0>
extern volatile __bit                   ADCS0               __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON,5)
// ADCON<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON,6)
// ADCON<ADCS2>
extern volatile __bit                   ADCS2               __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON,7)
// FVRCON<ADFVR0>
extern volatile __bit                   ADFVR0              __at(0xE8);	// @ (0x1D * 8 + 0)
#define                                 ADFVR0_bit          _BIT_ACCESS(FVRCON,0)
// FVRCON<ADFVR1>
extern volatile __bit                   ADFVR1              __at(0xE9);	// @ (0x1D * 8 + 1)
#define                                 ADFVR1_bit          _BIT_ACCESS(FVRCON,1)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON,0)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// BORCON<BORFS>
extern volatile __bit                   BORFS               __at(0x1FE);	// @ (0x3F * 8 + 6)
#define                                 BORFS_bit           _BIT_ACCESS(BORCON,6)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x1F8);	// @ (0x3F * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PMCON1<CFGS>
extern volatile __bit                   CFGS                __at(0x126);	// @ (0x24 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(PMCON1,6)
// ADCON<CHS0>
extern volatile __bit                   CHS0                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON,2)
// ADCON<CHS1>
extern volatile __bit                   CHS1                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON,3)
// ADCON<CHS2>
extern volatile __bit                   CHS2                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON,4)
// PIE1<CLC1IE>
extern volatile __bit                   CLC1IE              __at(0x6B);	// @ (0xD * 8 + 3)
#define                                 CLC1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<CLC1IF>
extern volatile __bit                   CLC1IF              __at(0x63);	// @ (0xC * 8 + 3)
#define                                 CLC1IF_bit          _BIT_ACCESS(PIR1,3)
// CLKRCON<CLKROE>
extern volatile __bit                   CLKROE              __at(0x136);	// @ (0x26 * 8 + 6)
#define                                 CLKROE_bit          _BIT_ACCESS(CLKRCON,6)
// CWG1DBF<CWG1DBF0>
extern volatile __bit                   CWG1DBF0            __at(0x1E8);	// @ (0x3D * 8 + 0)
#define                                 CWG1DBF0_bit        _BIT_ACCESS(CWG1DBF,0)
// CWG1DBF<CWG1DBF1>
extern volatile __bit                   CWG1DBF1            __at(0x1E9);	// @ (0x3D * 8 + 1)
#define                                 CWG1DBF1_bit        _BIT_ACCESS(CWG1DBF,1)
// CWG1DBF<CWG1DBF2>
extern volatile __bit                   CWG1DBF2            __at(0x1EA);	// @ (0x3D * 8 + 2)
#define                                 CWG1DBF2_bit        _BIT_ACCESS(CWG1DBF,2)
// CWG1DBF<CWG1DBF3>
extern volatile __bit                   CWG1DBF3            __at(0x1EB);	// @ (0x3D * 8 + 3)
#define                                 CWG1DBF3_bit        _BIT_ACCESS(CWG1DBF,3)
// CWG1DBF<CWG1DBF4>
extern volatile __bit                   CWG1DBF4            __at(0x1EC);	// @ (0x3D * 8 + 4)
#define                                 CWG1DBF4_bit        _BIT_ACCESS(CWG1DBF,4)
// CWG1DBF<CWG1DBF5>
extern volatile __bit                   CWG1DBF5            __at(0x1ED);	// @ (0x3D * 8 + 5)
#define                                 CWG1DBF5_bit        _BIT_ACCESS(CWG1DBF,5)
// CWG1DBR<CWG1DBR0>
extern volatile __bit                   CWG1DBR0            __at(0x1E0);	// @ (0x3C * 8 + 0)
#define                                 CWG1DBR0_bit        _BIT_ACCESS(CWG1DBR,0)
// CWG1DBR<CWG1DBR1>
extern volatile __bit                   CWG1DBR1            __at(0x1E1);	// @ (0x3C * 8 + 1)
#define                                 CWG1DBR1_bit        _BIT_ACCESS(CWG1DBR,1)
// CWG1DBR<CWG1DBR2>
extern volatile __bit                   CWG1DBR2            __at(0x1E2);	// @ (0x3C * 8 + 2)
#define                                 CWG1DBR2_bit        _BIT_ACCESS(CWG1DBR,2)
// CWG1DBR<CWG1DBR3>
extern volatile __bit                   CWG1DBR3            __at(0x1E3);	// @ (0x3C * 8 + 3)
#define                                 CWG1DBR3_bit        _BIT_ACCESS(CWG1DBR,3)
// CWG1DBR<CWG1DBR4>
extern volatile __bit                   CWG1DBR4            __at(0x1E4);	// @ (0x3C * 8 + 4)
#define                                 CWG1DBR4_bit        _BIT_ACCESS(CWG1DBR,4)
// CWG1DBR<CWG1DBR5>
extern volatile __bit                   CWG1DBR5            __at(0x1E5);	// @ (0x3C * 8 + 5)
#define                                 CWG1DBR5_bit        _BIT_ACCESS(CWG1DBR,5)
// CLC1SEL0<D1S0>
extern volatile __bit                   D1S0                __at(0x190);	// @ (0x32 * 8 + 0)
#define                                 D1S0_bit            _BIT_ACCESS(CLC1SEL0,0)
// CLC1SEL0<D1S1>
extern volatile __bit                   D1S1                __at(0x191);	// @ (0x32 * 8 + 1)
#define                                 D1S1_bit            _BIT_ACCESS(CLC1SEL0,1)
// CLC1SEL0<D1S2>
extern volatile __bit                   D1S2                __at(0x192);	// @ (0x32 * 8 + 2)
#define                                 D1S2_bit            _BIT_ACCESS(CLC1SEL0,2)
// CLC1SEL0<D2S0>
extern volatile __bit                   D2S0                __at(0x194);	// @ (0x32 * 8 + 4)
#define                                 D2S0_bit            _BIT_ACCESS(CLC1SEL0,4)
// CLC1SEL0<D2S1>
extern volatile __bit                   D2S1                __at(0x195);	// @ (0x32 * 8 + 5)
#define                                 D2S1_bit            _BIT_ACCESS(CLC1SEL0,5)
// CLC1SEL0<D2S2>
extern volatile __bit                   D2S2                __at(0x196);	// @ (0x32 * 8 + 6)
#define                                 D2S2_bit            _BIT_ACCESS(CLC1SEL0,6)
// CLC1SEL1<D3S0>
extern volatile __bit                   D3S0                __at(0x198);	// @ (0x33 * 8 + 0)
#define                                 D3S0_bit            _BIT_ACCESS(CLC1SEL1,0)
// CLC1SEL1<D3S1>
extern volatile __bit                   D3S1                __at(0x199);	// @ (0x33 * 8 + 1)
#define                                 D3S1_bit            _BIT_ACCESS(CLC1SEL1,1)
// CLC1SEL1<D3S2>
extern volatile __bit                   D3S2                __at(0x19A);	// @ (0x33 * 8 + 2)
#define                                 D3S2_bit            _BIT_ACCESS(CLC1SEL1,2)
// CLC1SEL1<D4S0>
extern volatile __bit                   D4S0                __at(0x19C);	// @ (0x33 * 8 + 4)
#define                                 D4S0_bit            _BIT_ACCESS(CLC1SEL1,4)
// CLC1SEL1<D4S1>
extern volatile __bit                   D4S1                __at(0x19D);	// @ (0x33 * 8 + 5)
#define                                 D4S1_bit            _BIT_ACCESS(CLC1SEL1,5)
// CLC1SEL1<D4S2>
extern volatile __bit                   D4S2                __at(0x19E);	// @ (0x33 * 8 + 6)
#define                                 D4S2_bit            _BIT_ACCESS(CLC1SEL1,6)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// PMCON1<FREE>
extern volatile __bit                   FREE                __at(0x124);	// @ (0x24 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(PMCON1,4)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0xEF);	// @ (0x1D * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0xEE);	// @ (0x1D * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// CWG1CON2<G1ARSEN>
extern volatile __bit                   G1ARSEN             __at(0x1DE);	// @ (0x3B * 8 + 6)
#define                                 G1ARSEN_bit         _BIT_ACCESS(CWG1CON2,6)
// CWG1CON2<G1ASDCLC1>
extern volatile __bit                   G1ASDCLC1           __at(0x1D9);	// @ (0x3B * 8 + 1)
#define                                 G1ASDCLC1_bit       _BIT_ACCESS(CWG1CON2,1)
// CWG1CON2<G1ASDFLT>
extern volatile __bit                   G1ASDFLT            __at(0x1D8);	// @ (0x3B * 8 + 0)
#define                                 G1ASDFLT_bit        _BIT_ACCESS(CWG1CON2,0)
// CWG1CON1<G1ASDLA0>
extern volatile __bit                   G1ASDLA0            __at(0x1D4);	// @ (0x3A * 8 + 4)
#define                                 G1ASDLA0_bit        _BIT_ACCESS(CWG1CON1,4)
// CWG1CON1<G1ASDLA1>
extern volatile __bit                   G1ASDLA1            __at(0x1D5);	// @ (0x3A * 8 + 5)
#define                                 G1ASDLA1_bit        _BIT_ACCESS(CWG1CON1,5)
// CWG1CON1<G1ASDLB0>
extern volatile __bit                   G1ASDLB0            __at(0x1D6);	// @ (0x3A * 8 + 6)
#define                                 G1ASDLB0_bit        _BIT_ACCESS(CWG1CON1,6)
// CWG1CON1<G1ASDLB1>
extern volatile __bit                   G1ASDLB1            __at(0x1D7);	// @ (0x3A * 8 + 7)
#define                                 G1ASDLB1_bit        _BIT_ACCESS(CWG1CON1,7)
// CWG1CON2<G1ASDSCLC1>
extern volatile __bit                   G1ASDSCLC1          __at(0x1D9);	// @ (0x3B * 8 + 1)
#define                                 G1ASDSCLC1_bit      _BIT_ACCESS(CWG1CON2,1)
// CWG1CON2<G1ASDSFLT>
extern volatile __bit                   G1ASDSFLT           __at(0x1D8);	// @ (0x3B * 8 + 0)
#define                                 G1ASDSFLT_bit       _BIT_ACCESS(CWG1CON2,0)
// CWG1CON2<G1ASE>
extern volatile __bit                   G1ASE               __at(0x1DF);	// @ (0x3B * 8 + 7)
#define                                 G1ASE_bit           _BIT_ACCESS(CWG1CON2,7)
// CWG1CON0<G1CS0>
extern volatile __bit                   G1CS0               __at(0x1C8);	// @ (0x39 * 8 + 0)
#define                                 G1CS0_bit           _BIT_ACCESS(CWG1CON0,0)
// CWG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0x1CF);	// @ (0x39 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(CWG1CON0,7)
// CWG1CON1<G1IS0>
extern volatile __bit                   G1IS0               __at(0x1D0);	// @ (0x3A * 8 + 0)
#define                                 G1IS0_bit           _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<G1IS1>
extern volatile __bit                   G1IS1               __at(0x1D1);	// @ (0x3A * 8 + 1)
#define                                 G1IS1_bit           _BIT_ACCESS(CWG1CON1,1)
// CWG1CON0<G1OEA>
extern volatile __bit                   G1OEA               __at(0x1CD);	// @ (0x39 * 8 + 5)
#define                                 G1OEA_bit           _BIT_ACCESS(CWG1CON0,5)
// CWG1CON0<G1OEB>
extern volatile __bit                   G1OEB               __at(0x1CE);	// @ (0x39 * 8 + 6)
#define                                 G1OEB_bit           _BIT_ACCESS(CWG1CON0,6)
// CLC1POL<G1POL>
extern volatile __bit                   G1POL               __at(0x1A0);	// @ (0x34 * 8 + 0)
#define                                 G1POL_bit           _BIT_ACCESS(CLC1POL,0)
// CWG1CON0<G1POLA>
extern volatile __bit                   G1POLA              __at(0x1CB);	// @ (0x39 * 8 + 3)
#define                                 G1POLA_bit          _BIT_ACCESS(CWG1CON0,3)
// CWG1CON0<G1POLB>
extern volatile __bit                   G1POLB              __at(0x1CC);	// @ (0x39 * 8 + 4)
#define                                 G1POLB_bit          _BIT_ACCESS(CWG1CON0,4)
// CLC1POL<G2POL>
extern volatile __bit                   G2POL               __at(0x1A1);	// @ (0x34 * 8 + 1)
#define                                 G2POL_bit           _BIT_ACCESS(CLC1POL,1)
// CLC1POL<G3POL>
extern volatile __bit                   G3POL               __at(0x1A2);	// @ (0x34 * 8 + 2)
#define                                 G3POL_bit           _BIT_ACCESS(CLC1POL,2)
// CLC1GLS3<G4D1N>
extern volatile __bit                   G4D1N               __at(0x1C0);	// @ (0x38 * 8 + 0)
#define                                 G4D1N_bit           _BIT_ACCESS(CLC1GLS3,0)
// CLC1GLS3<G4D1T>
extern volatile __bit                   G4D1T               __at(0x1C1);	// @ (0x38 * 8 + 1)
#define                                 G4D1T_bit           _BIT_ACCESS(CLC1GLS3,1)
// CLC1GLS3<G4D2N>
extern volatile __bit                   G4D2N               __at(0x1C2);	// @ (0x38 * 8 + 2)
#define                                 G4D2N_bit           _BIT_ACCESS(CLC1GLS3,2)
// CLC1GLS3<G4D2T>
extern volatile __bit                   G4D2T               __at(0x1C3);	// @ (0x38 * 8 + 3)
#define                                 G4D2T_bit           _BIT_ACCESS(CLC1GLS3,3)
// CLC1GLS3<G4D3N>
extern volatile __bit                   G4D3N               __at(0x1C4);	// @ (0x38 * 8 + 4)
#define                                 G4D3N_bit           _BIT_ACCESS(CLC1GLS3,4)
// CLC1GLS3<G4D3T>
extern volatile __bit                   G4D3T               __at(0x1C5);	// @ (0x38 * 8 + 5)
#define                                 G4D3T_bit           _BIT_ACCESS(CLC1GLS3,5)
// CLC1GLS3<G4D4N>
extern volatile __bit                   G4D4N               __at(0x1C6);	// @ (0x38 * 8 + 6)
#define                                 G4D4N_bit           _BIT_ACCESS(CLC1GLS3,6)
// CLC1GLS3<G4D4T>
extern volatile __bit                   G4D4T               __at(0x1C7);	// @ (0x38 * 8 + 7)
#define                                 G4D4T_bit           _BIT_ACCESS(CLC1GLS3,7)
// CLC1POL<G4POL>
extern volatile __bit                   G4POL               __at(0x1A3);	// @ (0x34 * 8 + 3)
#define                                 G4POL_bit           _BIT_ACCESS(CLC1POL,3)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON,1)
// OSCCON<HFIOFR>
extern volatile __bit                   HFIOFR              __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 HFIOFR_bit          _BIT_ACCESS(OSCCON,3)
// OSCCON<HFIOFS>
extern volatile __bit                   HFIOFS              __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 HFIOFS_bit          _BIT_ACCESS(OSCCON,0)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x76);	// @ (0xE * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF2>
extern volatile __bit                   IOCAF2              __at(0xE2);	// @ (0x1C * 8 + 2)
#define                                 IOCAF2_bit          _BIT_ACCESS(IOCAF,2)
// IOCAF<IOCAF3>
extern volatile __bit                   IOCAF3              __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 IOCAF3_bit          _BIT_ACCESS(IOCAF,3)
// IOCAN<IOCAN0>
extern volatile __bit                   IOCAN0              __at(0xD8);	// @ (0x1B * 8 + 0)
#define                                 IOCAN0_bit          _BIT_ACCESS(IOCAN,0)
// IOCAN<IOCAN1>
extern volatile __bit                   IOCAN1              __at(0xD9);	// @ (0x1B * 8 + 1)
#define                                 IOCAN1_bit          _BIT_ACCESS(IOCAN,1)
// IOCAN<IOCAN2>
extern volatile __bit                   IOCAN2              __at(0xDA);	// @ (0x1B * 8 + 2)
#define                                 IOCAN2_bit          _BIT_ACCESS(IOCAN,2)
// IOCAN<IOCAN3>
extern volatile __bit                   IOCAN3              __at(0xDB);	// @ (0x1B * 8 + 3)
#define                                 IOCAN3_bit          _BIT_ACCESS(IOCAN,3)
// IOCAP<IOCAP0>
extern volatile __bit                   IOCAP0              __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 IOCAP0_bit          _BIT_ACCESS(IOCAP,0)
// IOCAP<IOCAP1>
extern volatile __bit                   IOCAP1              __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 IOCAP1_bit          _BIT_ACCESS(IOCAP,1)
// IOCAP<IOCAP2>
extern volatile __bit                   IOCAP2              __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 IOCAP2_bit          _BIT_ACCESS(IOCAP,2)
// IOCAP<IOCAP3>
extern volatile __bit                   IOCAP3              __at(0xD3);	// @ (0x1A * 8 + 3)
#define                                 IOCAP3_bit          _BIT_ACCESS(IOCAP,3)
// INTCON<IOCIE>
extern volatile __bit                   IOCIE               __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCIE_bit           _BIT_ACCESS(INTCON,3)
// INTCON<IOCIF>
extern volatile __bit                   IOCIF               __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCIF_bit           _BIT_ACCESS(INTCON,0)
// OSCCON<IRCF0>
extern volatile __bit                   IRCF0               __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 IRCF0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<IRCF1>
extern volatile __bit                   IRCF1               __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 IRCF1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<IRCF2>
extern volatile __bit                   IRCF2               __at(0x86);	// @ (0x10 * 8 + 6)
#define                                 IRCF2_bit           _BIT_ACCESS(OSCCON,6)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// CLC1SEL0<LC1D1S0>
extern volatile __bit                   LC1D1S0             __at(0x190);	// @ (0x32 * 8 + 0)
#define                                 LC1D1S0_bit         _BIT_ACCESS(CLC1SEL0,0)
// CLC1SEL0<LC1D1S1>
extern volatile __bit                   LC1D1S1             __at(0x191);	// @ (0x32 * 8 + 1)
#define                                 LC1D1S1_bit         _BIT_ACCESS(CLC1SEL0,1)
// CLC1SEL0<LC1D1S2>
extern volatile __bit                   LC1D1S2             __at(0x192);	// @ (0x32 * 8 + 2)
#define                                 LC1D1S2_bit         _BIT_ACCESS(CLC1SEL0,2)
// CLC1SEL0<LC1D2S0>
extern volatile __bit                   LC1D2S0             __at(0x194);	// @ (0x32 * 8 + 4)
#define                                 LC1D2S0_bit         _BIT_ACCESS(CLC1SEL0,4)
// CLC1SEL0<LC1D2S1>
extern volatile __bit                   LC1D2S1             __at(0x195);	// @ (0x32 * 8 + 5)
#define                                 LC1D2S1_bit         _BIT_ACCESS(CLC1SEL0,5)
// CLC1SEL0<LC1D2S2>
extern volatile __bit                   LC1D2S2             __at(0x196);	// @ (0x32 * 8 + 6)
#define                                 LC1D2S2_bit         _BIT_ACCESS(CLC1SEL0,6)
// CLC1SEL1<LC1D3S0>
extern volatile __bit                   LC1D3S0             __at(0x198);	// @ (0x33 * 8 + 0)
#define                                 LC1D3S0_bit         _BIT_ACCESS(CLC1SEL1,0)
// CLC1SEL1<LC1D3S1>
extern volatile __bit                   LC1D3S1             __at(0x199);	// @ (0x33 * 8 + 1)
#define                                 LC1D3S1_bit         _BIT_ACCESS(CLC1SEL1,1)
// CLC1SEL1<LC1D3S2>
extern volatile __bit                   LC1D3S2             __at(0x19A);	// @ (0x33 * 8 + 2)
#define                                 LC1D3S2_bit         _BIT_ACCESS(CLC1SEL1,2)
// CLC1SEL1<LC1D4S0>
extern volatile __bit                   LC1D4S0             __at(0x19C);	// @ (0x33 * 8 + 4)
#define                                 LC1D4S0_bit         _BIT_ACCESS(CLC1SEL1,4)
// CLC1SEL1<LC1D4S1>
extern volatile __bit                   LC1D4S1             __at(0x19D);	// @ (0x33 * 8 + 5)
#define                                 LC1D4S1_bit         _BIT_ACCESS(CLC1SEL1,5)
// CLC1SEL1<LC1D4S2>
extern volatile __bit                   LC1D4S2             __at(0x19E);	// @ (0x33 * 8 + 6)
#define                                 LC1D4S2_bit         _BIT_ACCESS(CLC1SEL1,6)
// CLC1CON<LC1EN>
extern volatile __bit                   LC1EN               __at(0x18F);	// @ (0x31 * 8 + 7)
#define                                 LC1EN_bit           _BIT_ACCESS(CLC1CON,7)
// CLC1GLS0<LC1G1D1N>
extern volatile __bit                   LC1G1D1N            __at(0x1A8);	// @ (0x35 * 8 + 0)
#define                                 LC1G1D1N_bit        _BIT_ACCESS(CLC1GLS0,0)
// CLC1GLS0<LC1G1D1T>
extern volatile __bit                   LC1G1D1T            __at(0x1A9);	// @ (0x35 * 8 + 1)
#define                                 LC1G1D1T_bit        _BIT_ACCESS(CLC1GLS0,1)
// CLC1GLS0<LC1G1D2N>
extern volatile __bit                   LC1G1D2N            __at(0x1AA);	// @ (0x35 * 8 + 2)
#define                                 LC1G1D2N_bit        _BIT_ACCESS(CLC1GLS0,2)
// CLC1GLS0<LC1G1D2T>
extern volatile __bit                   LC1G1D2T            __at(0x1AB);	// @ (0x35 * 8 + 3)
#define                                 LC1G1D2T_bit        _BIT_ACCESS(CLC1GLS0,3)
// CLC1GLS0<LC1G1D3N>
extern volatile __bit                   LC1G1D3N            __at(0x1AC);	// @ (0x35 * 8 + 4)
#define                                 LC1G1D3N_bit        _BIT_ACCESS(CLC1GLS0,4)
// CLC1GLS0<LC1G1D3T>
extern volatile __bit                   LC1G1D3T            __at(0x1AD);	// @ (0x35 * 8 + 5)
#define                                 LC1G1D3T_bit        _BIT_ACCESS(CLC1GLS0,5)
// CLC1GLS0<LC1G1D4N>
extern volatile __bit                   LC1G1D4N            __at(0x1AE);	// @ (0x35 * 8 + 6)
#define                                 LC1G1D4N_bit        _BIT_ACCESS(CLC1GLS0,6)
// CLC1GLS0<LC1G1D4T>
extern volatile __bit                   LC1G1D4T            __at(0x1AF);	// @ (0x35 * 8 + 7)
#define                                 LC1G1D4T_bit        _BIT_ACCESS(CLC1GLS0,7)
// CLC1POL<LC1G1POL>
extern volatile __bit                   LC1G1POL            __at(0x1A0);	// @ (0x34 * 8 + 0)
#define                                 LC1G1POL_bit        _BIT_ACCESS(CLC1POL,0)
// CLC1GLS1<LC1G2D1N>
extern volatile __bit                   LC1G2D1N            __at(0x1B0);	// @ (0x36 * 8 + 0)
#define                                 LC1G2D1N_bit        _BIT_ACCESS(CLC1GLS1,0)
// CLC1GLS1<LC1G2D1T>
extern volatile __bit                   LC1G2D1T            __at(0x1B1);	// @ (0x36 * 8 + 1)
#define                                 LC1G2D1T_bit        _BIT_ACCESS(CLC1GLS1,1)
// CLC1GLS1<LC1G2D2N>
extern volatile __bit                   LC1G2D2N            __at(0x1B2);	// @ (0x36 * 8 + 2)
#define                                 LC1G2D2N_bit        _BIT_ACCESS(CLC1GLS1,2)
// CLC1GLS1<LC1G2D2T>
extern volatile __bit                   LC1G2D2T            __at(0x1B3);	// @ (0x36 * 8 + 3)
#define                                 LC1G2D2T_bit        _BIT_ACCESS(CLC1GLS1,3)
// CLC1GLS1<LC1G2D3N>
extern volatile __bit                   LC1G2D3N            __at(0x1B4);	// @ (0x36 * 8 + 4)
#define                                 LC1G2D3N_bit        _BIT_ACCESS(CLC1GLS1,4)
// CLC1GLS1<LC1G2D3T>
extern volatile __bit                   LC1G2D3T            __at(0x1B5);	// @ (0x36 * 8 + 5)
#define                                 LC1G2D3T_bit        _BIT_ACCESS(CLC1GLS1,5)
// CLC1GLS1<LC1G2D4N>
extern volatile __bit                   LC1G2D4N            __at(0x1B6);	// @ (0x36 * 8 + 6)
#define                                 LC1G2D4N_bit        _BIT_ACCESS(CLC1GLS1,6)
// CLC1GLS1<LC1G2D4T>
extern volatile __bit                   LC1G2D4T            __at(0x1B7);	// @ (0x36 * 8 + 7)
#define                                 LC1G2D4T_bit        _BIT_ACCESS(CLC1GLS1,7)
// CLC1POL<LC1G2POL>
extern volatile __bit                   LC1G2POL            __at(0x1A1);	// @ (0x34 * 8 + 1)
#define                                 LC1G2POL_bit        _BIT_ACCESS(CLC1POL,1)
// CLC1GLS2<LC1G3D1N>
extern volatile __bit                   LC1G3D1N            __at(0x1B8);	// @ (0x37 * 8 + 0)
#define                                 LC1G3D1N_bit        _BIT_ACCESS(CLC1GLS2,0)
// CLC1GLS2<LC1G3D1T>
extern volatile __bit                   LC1G3D1T            __at(0x1B9);	// @ (0x37 * 8 + 1)
#define                                 LC1G3D1T_bit        _BIT_ACCESS(CLC1GLS2,1)
// CLC1GLS2<LC1G3D2N>
extern volatile __bit                   LC1G3D2N            __at(0x1BA);	// @ (0x37 * 8 + 2)
#define                                 LC1G3D2N_bit        _BIT_ACCESS(CLC1GLS2,2)
// CLC1GLS2<LC1G3D2T>
extern volatile __bit                   LC1G3D2T            __at(0x1BB);	// @ (0x37 * 8 + 3)
#define                                 LC1G3D2T_bit        _BIT_ACCESS(CLC1GLS2,3)
// CLC1GLS2<LC1G3D3N>
extern volatile __bit                   LC1G3D3N            __at(0x1BC);	// @ (0x37 * 8 + 4)
#define                                 LC1G3D3N_bit        _BIT_ACCESS(CLC1GLS2,4)
// CLC1GLS2<LC1G3D3T>
extern volatile __bit                   LC1G3D3T            __at(0x1BD);	// @ (0x37 * 8 + 5)
#define                                 LC1G3D3T_bit        _BIT_ACCESS(CLC1GLS2,5)
// CLC1GLS2<LC1G3D4N>
extern volatile __bit                   LC1G3D4N            __at(0x1BE);	// @ (0x37 * 8 + 6)
#define                                 LC1G3D4N_bit        _BIT_ACCESS(CLC1GLS2,6)
// CLC1GLS2<LC1G3D4T>
extern volatile __bit                   LC1G3D4T            __at(0x1BF);	// @ (0x37 * 8 + 7)
#define                                 LC1G3D4T_bit        _BIT_ACCESS(CLC1GLS2,7)
// CLC1POL<LC1G3POL>
extern volatile __bit                   LC1G3POL            __at(0x1A2);	// @ (0x34 * 8 + 2)
#define                                 LC1G3POL_bit        _BIT_ACCESS(CLC1POL,2)
// CLC1GLS3<LC1G4D1N>
extern volatile __bit                   LC1G4D1N            __at(0x1C0);	// @ (0x38 * 8 + 0)
#define                                 LC1G4D1N_bit        _BIT_ACCESS(CLC1GLS3,0)
// CLC1GLS3<LC1G4D1T>
extern volatile __bit                   LC1G4D1T            __at(0x1C1);	// @ (0x38 * 8 + 1)
#define                                 LC1G4D1T_bit        _BIT_ACCESS(CLC1GLS3,1)
// CLC1GLS3<LC1G4D2N>
extern volatile __bit                   LC1G4D2N            __at(0x1C2);	// @ (0x38 * 8 + 2)
#define                                 LC1G4D2N_bit        _BIT_ACCESS(CLC1GLS3,2)
// CLC1GLS3<LC1G4D2T>
extern volatile __bit                   LC1G4D2T            __at(0x1C3);	// @ (0x38 * 8 + 3)
#define                                 LC1G4D2T_bit        _BIT_ACCESS(CLC1GLS3,3)
// CLC1GLS3<LC1G4D3N>
extern volatile __bit                   LC1G4D3N            __at(0x1C4);	// @ (0x38 * 8 + 4)
#define                                 LC1G4D3N_bit        _BIT_ACCESS(CLC1GLS3,4)
// CLC1GLS3<LC1G4D3T>
extern volatile __bit                   LC1G4D3T            __at(0x1C5);	// @ (0x38 * 8 + 5)
#define                                 LC1G4D3T_bit        _BIT_ACCESS(CLC1GLS3,5)
// CLC1GLS3<LC1G4D4N>
extern volatile __bit                   LC1G4D4N            __at(0x1C6);	// @ (0x38 * 8 + 6)
#define                                 LC1G4D4N_bit        _BIT_ACCESS(CLC1GLS3,6)
// CLC1GLS3<LC1G4D4T>
extern volatile __bit                   LC1G4D4T            __at(0x1C7);	// @ (0x38 * 8 + 7)
#define                                 LC1G4D4T_bit        _BIT_ACCESS(CLC1GLS3,7)
// CLC1POL<LC1G4POL>
extern volatile __bit                   LC1G4POL            __at(0x1A3);	// @ (0x34 * 8 + 3)
#define                                 LC1G4POL_bit        _BIT_ACCESS(CLC1POL,3)
// CLC1CON<LC1INTN>
extern volatile __bit                   LC1INTN             __at(0x18B);	// @ (0x31 * 8 + 3)
#define                                 LC1INTN_bit         _BIT_ACCESS(CLC1CON,3)
// CLC1CON<LC1INTP>
extern volatile __bit                   LC1INTP             __at(0x18C);	// @ (0x31 * 8 + 4)
#define                                 LC1INTP_bit         _BIT_ACCESS(CLC1CON,4)
// CLC1CON<LC1MODE0>
extern volatile __bit                   LC1MODE0            __at(0x188);	// @ (0x31 * 8 + 0)
#define                                 LC1MODE0_bit        _BIT_ACCESS(CLC1CON,0)
// CLC1CON<LC1MODE1>
extern volatile __bit                   LC1MODE1            __at(0x189);	// @ (0x31 * 8 + 1)
#define                                 LC1MODE1_bit        _BIT_ACCESS(CLC1CON,1)
// CLC1CON<LC1MODE2>
extern volatile __bit                   LC1MODE2            __at(0x18A);	// @ (0x31 * 8 + 2)
#define                                 LC1MODE2_bit        _BIT_ACCESS(CLC1CON,2)
// CLC1CON<LC1OE>
extern volatile __bit                   LC1OE               __at(0x18E);	// @ (0x31 * 8 + 6)
#define                                 LC1OE_bit           _BIT_ACCESS(CLC1CON,6)
// CLC1CON<LC1OUT>
extern volatile __bit                   LC1OUT              __at(0x18D);	// @ (0x31 * 8 + 5)
#define                                 LC1OUT_bit          _BIT_ACCESS(CLC1CON,5)
// CLC1POL<LC1POL>
extern volatile __bit                   LC1POL              __at(0x1A7);	// @ (0x34 * 8 + 7)
#define                                 LC1POL_bit          _BIT_ACCESS(CLC1POL,7)
// CLC1CON<LCEN>
extern volatile __bit                   LCEN                __at(0x18F);	// @ (0x31 * 8 + 7)
#define                                 LCEN_bit            _BIT_ACCESS(CLC1CON,7)
// CLC1CON<LCINTN>
extern volatile __bit                   LCINTN              __at(0x18B);	// @ (0x31 * 8 + 3)
#define                                 LCINTN_bit          _BIT_ACCESS(CLC1CON,3)
// CLC1CON<LCINTP>
extern volatile __bit                   LCINTP              __at(0x18C);	// @ (0x31 * 8 + 4)
#define                                 LCINTP_bit          _BIT_ACCESS(CLC1CON,4)
// CLC1CON<LCMODE0>
extern volatile __bit                   LCMODE0             __at(0x188);	// @ (0x31 * 8 + 0)
#define                                 LCMODE0_bit         _BIT_ACCESS(CLC1CON,0)
// CLC1CON<LCMODE1>
extern volatile __bit                   LCMODE1             __at(0x189);	// @ (0x31 * 8 + 1)
#define                                 LCMODE1_bit         _BIT_ACCESS(CLC1CON,1)
// CLC1CON<LCMODE2>
extern volatile __bit                   LCMODE2             __at(0x18A);	// @ (0x31 * 8 + 2)
#define                                 LCMODE2_bit         _BIT_ACCESS(CLC1CON,2)
// CLC1CON<LCOE>
extern volatile __bit                   LCOE                __at(0x18E);	// @ (0x31 * 8 + 6)
#define                                 LCOE_bit            _BIT_ACCESS(CLC1CON,6)
// CLC1CON<LCOUT>
extern volatile __bit                   LCOUT               __at(0x18D);	// @ (0x31 * 8 + 5)
#define                                 LCOUT_bit           _BIT_ACCESS(CLC1CON,5)
// OSCCON<LFIOFR>
extern volatile __bit                   LFIOFR              __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 LFIOFR_bit          _BIT_ACCESS(OSCCON,1)
// PMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0x125);	// @ (0x24 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(PMCON1,5)
// NCO1CLK<N1CKS0>
extern volatile __bit                   N1CKS0              __at(0x170);	// @ (0x2E * 8 + 0)
#define                                 N1CKS0_bit          _BIT_ACCESS(NCO1CLK,0)
// NCO1CLK<N1CKS1>
extern volatile __bit                   N1CKS1              __at(0x171);	// @ (0x2E * 8 + 1)
#define                                 N1CKS1_bit          _BIT_ACCESS(NCO1CLK,1)
// NCO1CON<N1EN>
extern volatile __bit                   N1EN                __at(0x16F);	// @ (0x2D * 8 + 7)
#define                                 N1EN_bit            _BIT_ACCESS(NCO1CON,7)
// NCO1CON<N1OE>
extern volatile __bit                   N1OE                __at(0x16E);	// @ (0x2D * 8 + 6)
#define                                 N1OE_bit            _BIT_ACCESS(NCO1CON,6)
// NCO1CON<N1OUT>
extern volatile __bit                   N1OUT               __at(0x16D);	// @ (0x2D * 8 + 5)
#define                                 N1OUT_bit           _BIT_ACCESS(NCO1CON,5)
// NCO1CON<N1PFM>
extern volatile __bit                   N1PFM               __at(0x168);	// @ (0x2D * 8 + 0)
#define                                 N1PFM_bit           _BIT_ACCESS(NCO1CON,0)
// NCO1CON<N1POL>
extern volatile __bit                   N1POL               __at(0x16C);	// @ (0x2D * 8 + 4)
#define                                 N1POL_bit           _BIT_ACCESS(NCO1CON,4)
// NCO1CLK<N1PWS0>
extern volatile __bit                   N1PWS0              __at(0x175);	// @ (0x2E * 8 + 5)
#define                                 N1PWS0_bit          _BIT_ACCESS(NCO1CLK,5)
// NCO1CLK<N1PWS1>
extern volatile __bit                   N1PWS1              __at(0x176);	// @ (0x2E * 8 + 6)
#define                                 N1PWS1_bit          _BIT_ACCESS(NCO1CLK,6)
// NCO1CLK<N1PWS2>
extern volatile __bit                   N1PWS2              __at(0x177);	// @ (0x2E * 8 + 7)
#define                                 N1PWS2_bit          _BIT_ACCESS(NCO1CLK,7)
// NCO1ACCL<NCO1ACC0>
extern volatile __bit                   NCO1ACC0            __at(0x138);	// @ (0x27 * 8 + 0)
#define                                 NCO1ACC0_bit        _BIT_ACCESS(NCO1ACCL,0)
// NCO1ACCL<NCO1ACC1>
extern volatile __bit                   NCO1ACC1            __at(0x139);	// @ (0x27 * 8 + 1)
#define                                 NCO1ACC1_bit        _BIT_ACCESS(NCO1ACCL,1)
// NCO1ACCH<NCO1ACC10>
extern volatile __bit                   NCO1ACC10           __at(0x142);	// @ (0x28 * 8 + 2)
#define                                 NCO1ACC10_bit       _BIT_ACCESS(NCO1ACCH,2)
// NCO1ACCH<NCO1ACC11>
extern volatile __bit                   NCO1ACC11           __at(0x143);	// @ (0x28 * 8 + 3)
#define                                 NCO1ACC11_bit       _BIT_ACCESS(NCO1ACCH,3)
// NCO1ACCH<NCO1ACC12>
extern volatile __bit                   NCO1ACC12           __at(0x144);	// @ (0x28 * 8 + 4)
#define                                 NCO1ACC12_bit       _BIT_ACCESS(NCO1ACCH,4)
// NCO1ACCH<NCO1ACC13>
extern volatile __bit                   NCO1ACC13           __at(0x145);	// @ (0x28 * 8 + 5)
#define                                 NCO1ACC13_bit       _BIT_ACCESS(NCO1ACCH,5)
// NCO1ACCH<NCO1ACC14>
extern volatile __bit                   NCO1ACC14           __at(0x146);	// @ (0x28 * 8 + 6)
#define                                 NCO1ACC14_bit       _BIT_ACCESS(NCO1ACCH,6)
// NCO1ACCH<NCO1ACC15>
extern volatile __bit                   NCO1ACC15           __at(0x147);	// @ (0x28 * 8 + 7)
#define                                 NCO1ACC15_bit       _BIT_ACCESS(NCO1ACCH,7)
// NCO1ACCU<NCO1ACC16>
extern volatile __bit                   NCO1ACC16           __at(0x148);	// @ (0x29 * 8 + 0)
#define                                 NCO1ACC16_bit       _BIT_ACCESS(NCO1ACCU,0)
// NCO1ACCU<NCO1ACC17>
extern volatile __bit                   NCO1ACC17           __at(0x149);	// @ (0x29 * 8 + 1)
#define                                 NCO1ACC17_bit       _BIT_ACCESS(NCO1ACCU,1)
// NCO1ACCU<NCO1ACC18>
extern volatile __bit                   NCO1ACC18           __at(0x14A);	// @ (0x29 * 8 + 2)
#define                                 NCO1ACC18_bit       _BIT_ACCESS(NCO1ACCU,2)
// NCO1ACCU<NCO1ACC19>
extern volatile __bit                   NCO1ACC19           __at(0x14B);	// @ (0x29 * 8 + 3)
#define                                 NCO1ACC19_bit       _BIT_ACCESS(NCO1ACCU,3)
// NCO1ACCL<NCO1ACC2>
extern volatile __bit                   NCO1ACC2            __at(0x13A);	// @ (0x27 * 8 + 2)
#define                                 NCO1ACC2_bit        _BIT_ACCESS(NCO1ACCL,2)
// NCO1ACCL<NCO1ACC3>
extern volatile __bit                   NCO1ACC3            __at(0x13B);	// @ (0x27 * 8 + 3)
#define                                 NCO1ACC3_bit        _BIT_ACCESS(NCO1ACCL,3)
// NCO1ACCL<NCO1ACC4>
extern volatile __bit                   NCO1ACC4            __at(0x13C);	// @ (0x27 * 8 + 4)
#define                                 NCO1ACC4_bit        _BIT_ACCESS(NCO1ACCL,4)
// NCO1ACCL<NCO1ACC5>
extern volatile __bit                   NCO1ACC5            __at(0x13D);	// @ (0x27 * 8 + 5)
#define                                 NCO1ACC5_bit        _BIT_ACCESS(NCO1ACCL,5)
// NCO1ACCL<NCO1ACC6>
extern volatile __bit                   NCO1ACC6            __at(0x13E);	// @ (0x27 * 8 + 6)
#define                                 NCO1ACC6_bit        _BIT_ACCESS(NCO1ACCL,6)
// NCO1ACCL<NCO1ACC7>
extern volatile __bit                   NCO1ACC7            __at(0x13F);	// @ (0x27 * 8 + 7)
#define                                 NCO1ACC7_bit        _BIT_ACCESS(NCO1ACCL,7)
// NCO1ACCH<NCO1ACC8>
extern volatile __bit                   NCO1ACC8            __at(0x140);	// @ (0x28 * 8 + 0)
#define                                 NCO1ACC8_bit        _BIT_ACCESS(NCO1ACCH,0)
// NCO1ACCH<NCO1ACC9>
extern volatile __bit                   NCO1ACC9            __at(0x141);	// @ (0x28 * 8 + 1)
#define                                 NCO1ACC9_bit        _BIT_ACCESS(NCO1ACCH,1)
// PIE1<NCO1IE>
extern volatile __bit                   NCO1IE              __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 NCO1IE_bit          _BIT_ACCESS(PIE1,4)
// PIR1<NCO1IF>
extern volatile __bit                   NCO1IF              __at(0x64);	// @ (0xC * 8 + 4)
#define                                 NCO1IF_bit          _BIT_ACCESS(PIR1,4)
// NCO1INCL<NCO1INC0>
extern volatile __bit                   NCO1INC0            __at(0x150);	// @ (0x2A * 8 + 0)
#define                                 NCO1INC0_bit        _BIT_ACCESS(NCO1INCL,0)
// NCO1INCL<NCO1INC1>
extern volatile __bit                   NCO1INC1            __at(0x151);	// @ (0x2A * 8 + 1)
#define                                 NCO1INC1_bit        _BIT_ACCESS(NCO1INCL,1)
// NCO1INCH<NCO1INC10>
extern volatile __bit                   NCO1INC10           __at(0x15A);	// @ (0x2B * 8 + 2)
#define                                 NCO1INC10_bit       _BIT_ACCESS(NCO1INCH,2)
// NCO1INCH<NCO1INC11>
extern volatile __bit                   NCO1INC11           __at(0x15B);	// @ (0x2B * 8 + 3)
#define                                 NCO1INC11_bit       _BIT_ACCESS(NCO1INCH,3)
// NCO1INCH<NCO1INC12>
extern volatile __bit                   NCO1INC12           __at(0x15C);	// @ (0x2B * 8 + 4)
#define                                 NCO1INC12_bit       _BIT_ACCESS(NCO1INCH,4)
// NCO1INCH<NCO1INC13>
extern volatile __bit                   NCO1INC13           __at(0x15D);	// @ (0x2B * 8 + 5)
#define                                 NCO1INC13_bit       _BIT_ACCESS(NCO1INCH,5)
// NCO1INCH<NCO1INC14>
extern volatile __bit                   NCO1INC14           __at(0x15E);	// @ (0x2B * 8 + 6)
#define                                 NCO1INC14_bit       _BIT_ACCESS(NCO1INCH,6)
// NCO1INCH<NCO1INC15>
extern volatile __bit                   NCO1INC15           __at(0x15F);	// @ (0x2B * 8 + 7)
#define                                 NCO1INC15_bit       _BIT_ACCESS(NCO1INCH,7)
// NCO1INCL<NCO1INC2>
extern volatile __bit                   NCO1INC2            __at(0x152);	// @ (0x2A * 8 + 2)
#define                                 NCO1INC2_bit        _BIT_ACCESS(NCO1INCL,2)
// NCO1INCL<NCO1INC3>
extern volatile __bit                   NCO1INC3            __at(0x153);	// @ (0x2A * 8 + 3)
#define                                 NCO1INC3_bit        _BIT_ACCESS(NCO1INCL,3)
// NCO1INCL<NCO1INC4>
extern volatile __bit                   NCO1INC4            __at(0x154);	// @ (0x2A * 8 + 4)
#define                                 NCO1INC4_bit        _BIT_ACCESS(NCO1INCL,4)
// NCO1INCL<NCO1INC5>
extern volatile __bit                   NCO1INC5            __at(0x155);	// @ (0x2A * 8 + 5)
#define                                 NCO1INC5_bit        _BIT_ACCESS(NCO1INCL,5)
// NCO1INCL<NCO1INC6>
extern volatile __bit                   NCO1INC6            __at(0x156);	// @ (0x2A * 8 + 6)
#define                                 NCO1INC6_bit        _BIT_ACCESS(NCO1INCL,6)
// NCO1INCL<NCO1INC7>
extern volatile __bit                   NCO1INC7            __at(0x157);	// @ (0x2A * 8 + 7)
#define                                 NCO1INC7_bit        _BIT_ACCESS(NCO1INCL,7)
// NCO1INCH<NCO1INC8>
extern volatile __bit                   NCO1INC8            __at(0x158);	// @ (0x2B * 8 + 0)
#define                                 NCO1INC8_bit        _BIT_ACCESS(NCO1INCH,0)
// NCO1INCH<NCO1INC9>
extern volatile __bit                   NCO1INC9            __at(0x159);	// @ (0x2B * 8 + 1)
#define                                 NCO1INC9_bit        _BIT_ACCESS(NCO1INCH,1)
// PCLATH<PCLH0>
extern volatile __bit                   PCLH0               __at(0x50);	// @ (0xA * 8 + 0)
#define                                 PCLH0_bit           _BIT_ACCESS(PCLATH,0)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// PMADRH<PMADR8>
extern volatile __bit                   PMADR8              __at(0x108);	// @ (0x21 * 8 + 0)
#define                                 PMADR8_bit          _BIT_ACCESS(PMADRH,0)
// CLC1POL<POL>
extern volatile __bit                   POL                 __at(0x1A7);	// @ (0x34 * 8 + 7)
#define                                 POL_bit             _BIT_ACCESS(CLC1POL,7)
// OPTION_REG<PS0>
extern volatile __bit                   _PS0                 __at(0x70);	// @ (0xE * 8 + 0)  // Note: Changed by MikroE
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   _PS1                 __at(0x71);	// @ (0xE * 8 + 1)  // Note: Changed by MikroE
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   _PS2                 __at(0x72);	// @ (0xE * 8 + 2)  // Note: Changed by MikroE
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x73);	// @ (0xE * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// PWM1DCH<PWM1DCH0>
extern volatile __bit                   PWM1DCH0            __at(0xA8);	// @ (0x15 * 8 + 0)
#define                                 PWM1DCH0_bit        _BIT_ACCESS(PWM1DCH,0)
// PWM1DCH<PWM1DCH1>
extern volatile __bit                   PWM1DCH1            __at(0xA9);	// @ (0x15 * 8 + 1)
#define                                 PWM1DCH1_bit        _BIT_ACCESS(PWM1DCH,1)
// PWM1DCH<PWM1DCH2>
extern volatile __bit                   PWM1DCH2            __at(0xAA);	// @ (0x15 * 8 + 2)
#define                                 PWM1DCH2_bit        _BIT_ACCESS(PWM1DCH,2)
// PWM1DCH<PWM1DCH3>
extern volatile __bit                   PWM1DCH3            __at(0xAB);	// @ (0x15 * 8 + 3)
#define                                 PWM1DCH3_bit        _BIT_ACCESS(PWM1DCH,3)
// PWM1DCH<PWM1DCH4>
extern volatile __bit                   PWM1DCH4            __at(0xAC);	// @ (0x15 * 8 + 4)
#define                                 PWM1DCH4_bit        _BIT_ACCESS(PWM1DCH,4)
// PWM1DCH<PWM1DCH5>
extern volatile __bit                   PWM1DCH5            __at(0xAD);	// @ (0x15 * 8 + 5)
#define                                 PWM1DCH5_bit        _BIT_ACCESS(PWM1DCH,5)
// PWM1DCH<PWM1DCH6>
extern volatile __bit                   PWM1DCH6            __at(0xAE);	// @ (0x15 * 8 + 6)
#define                                 PWM1DCH6_bit        _BIT_ACCESS(PWM1DCH,6)
// PWM1DCH<PWM1DCH7>
extern volatile __bit                   PWM1DCH7            __at(0xAF);	// @ (0x15 * 8 + 7)
#define                                 PWM1DCH7_bit        _BIT_ACCESS(PWM1DCH,7)
// PWM1DCL<PWM1DCL0>
extern volatile __bit                   PWM1DCL0            __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 PWM1DCL0_bit        _BIT_ACCESS(PWM1DCL,6)
// PWM1DCL<PWM1DCL1>
extern volatile __bit                   PWM1DCL1            __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 PWM1DCL1_bit        _BIT_ACCESS(PWM1DCL,7)
// PWM1CON<PWM1EN>
extern volatile __bit                   PWM1EN              __at(0xB7);	// @ (0x16 * 8 + 7)
#define                                 PWM1EN_bit          _BIT_ACCESS(PWM1CON,7)
// PWM1CON<PWM1OE>
extern volatile __bit                   PWM1OE              __at(0xB6);	// @ (0x16 * 8 + 6)
#define                                 PWM1OE_bit          _BIT_ACCESS(PWM1CON,6)
// PWM1CON<PWM1OUT>
extern volatile __bit                   PWM1OUT             __at(0xB5);	// @ (0x16 * 8 + 5)
#define                                 PWM1OUT_bit         _BIT_ACCESS(PWM1CON,5)
// PWM1CON<PWM1POL>
extern volatile __bit                   PWM1POL             __at(0xB4);	// @ (0x16 * 8 + 4)
#define                                 PWM1POL_bit         _BIT_ACCESS(PWM1CON,4)
// PWM2DCH<PWM2DCH0>
extern volatile __bit                   PWM2DCH0            __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 PWM2DCH0_bit        _BIT_ACCESS(PWM2DCH,0)
// PWM2DCH<PWM2DCH1>
extern volatile __bit                   PWM2DCH1            __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 PWM2DCH1_bit        _BIT_ACCESS(PWM2DCH,1)
// PWM2DCH<PWM2DCH2>
extern volatile __bit                   PWM2DCH2            __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 PWM2DCH2_bit        _BIT_ACCESS(PWM2DCH,2)
// PWM2DCH<PWM2DCH3>
extern volatile __bit                   PWM2DCH3            __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 PWM2DCH3_bit        _BIT_ACCESS(PWM2DCH,3)
// PWM2DCH<PWM2DCH4>
extern volatile __bit                   PWM2DCH4            __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 PWM2DCH4_bit        _BIT_ACCESS(PWM2DCH,4)
// PWM2DCH<PWM2DCH5>
extern volatile __bit                   PWM2DCH5            __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 PWM2DCH5_bit        _BIT_ACCESS(PWM2DCH,5)
// PWM2DCH<PWM2DCH6>
extern volatile __bit                   PWM2DCH6            __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 PWM2DCH6_bit        _BIT_ACCESS(PWM2DCH,6)
// PWM2DCH<PWM2DCH7>
extern volatile __bit                   PWM2DCH7            __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 PWM2DCH7_bit        _BIT_ACCESS(PWM2DCH,7)
// PWM2DCL<PWM2DCL0>
extern volatile __bit                   PWM2DCL0            __at(0xBE);	// @ (0x17 * 8 + 6)
#define                                 PWM2DCL0_bit        _BIT_ACCESS(PWM2DCL,6)
// PWM2DCL<PWM2DCL1>
extern volatile __bit                   PWM2DCL1            __at(0xBF);	// @ (0x17 * 8 + 7)
#define                                 PWM2DCL1_bit        _BIT_ACCESS(PWM2DCL,7)
// PWM2CON<PWM2EN>
extern volatile __bit                   PWM2EN              __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 PWM2EN_bit          _BIT_ACCESS(PWM2CON,7)
// PWM2CON<PWM2OE>
extern volatile __bit                   PWM2OE              __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 PWM2OE_bit          _BIT_ACCESS(PWM2CON,6)
// PWM2CON<PWM2OUT>
extern volatile __bit                   PWM2OUT             __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 PWM2OUT_bit         _BIT_ACCESS(PWM2CON,5)
// PWM2CON<PWM2POL>
extern volatile __bit                   PWM2POL             __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 PWM2POL_bit         _BIT_ACCESS(PWM2CON,4)
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
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0x120);	// @ (0x24 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x1FF);	// @ (0x3F * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x180);	// @ (0x30 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// OPTION_REG<T0CS>
extern volatile __bit                   T0CS                __at(0x75);	// @ (0xE * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(OPTION_REG,5)
// OPTION_REG<T0SE>
extern volatile __bit                   T0SE                __at(0x74);	// @ (0xE * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(OPTION_REG,4)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x98);	// @ (0x13 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x69);	// @ (0xD * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x9A);	// @ (0x13 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x9B);	// @ (0x13 * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0xED);	// @ (0x1D * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0xEC);	// @ (0x1D * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// VREGCON<VREGPM0>
extern volatile __bit                   VREGPM0             __at(0x1F0);	// @ (0x3E * 8 + 0)
#define                                 VREGPM0_bit         _BIT_ACCESS(VREGCON,0)
// VREGCON<VREGPM1>
extern volatile __bit                   VREGPM1             __at(0x1F1);	// @ (0x3E * 8 + 1)
#define                                 VREGPM1_bit         _BIT_ACCESS(VREGCON,1)
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0x181);	// @ (0x30 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON,1)
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0x182);	// @ (0x30 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON,2)
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0x183);	// @ (0x30 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON,3)
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0x184);	// @ (0x30 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON,4)
// WDTCON<WDTPS4>
extern volatile __bit                   WDTPS4              __at(0x185);	// @ (0x30 * 8 + 5)
#define                                 WDTPS4_bit          _BIT_ACCESS(WDTCON,5)
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUA,0)
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUA,1)
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUA,2)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0x121);	// @ (0x24 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0x122);	// @ (0x24 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// PMCON1<WRERR>
extern volatile __bit                   WRERR               __at(0x123);	// @ (0x24 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(PMCON1,3)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x78);	// @ (0xF * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x79);	// @ (0xF * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// OPTION_REG<nWPUEN>
extern volatile __bit                   nWPUEN              __at(0x77);	// @ (0xE * 8 + 7)
#define                                 nWPUEN_bit          _BIT_ACCESS(OPTION_REG,7)

#endif // _PIC10LF322_H_
