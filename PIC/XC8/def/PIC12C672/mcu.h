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

#ifndef _PIC12C672_H_
#define _PIC12C672_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12C672
 */
#ifndef _XC_H_
#warning Header file pic12c672.h included directly. Use #include <xc.h> instead.
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
// bitfield definitions
typedef union {
    struct {
        unsigned INDF                   :8;
    };
} INDFbits_t;
extern volatile INDFbits_t INDFbits __at(0x000);
// bitfield macros
#define _INDF_INDF_POSN                                     0x0
#define _INDF_INDF_POSITION                                 0x0
#define _INDF_INDF_SIZE                                     0x8
#define _INDF_INDF_LENGTH                                   0x8
#define _INDF_INDF_MASK                                     0xFF

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x001);
#ifndef _LIB_BUILD
asm("TMR0 equ 01h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0                   :8;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __at(0x001);
// bitfield macros
#define _TMR0_TMR0_POSN                                     0x0
#define _TMR0_TMR0_POSITION                                 0x0
#define _TMR0_TMR0_SIZE                                     0x8
#define _TMR0_TMR0_LENGTH                                   0x8
#define _TMR0_TMR0_MASK                                     0xFF

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits_t;
extern volatile PCLbits_t PCLbits __at(0x002);
// bitfield macros
#define _PCL_PCL_POSN                                       0x0
#define _PCL_PCL_POSITION                                   0x0
#define _PCL_PCL_SIZE                                       0x8
#define _PCL_PCL_LENGTH                                     0x8
#define _PCL_PCL_MASK                                       0xFF

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
// bitfield definitions
typedef union {
    struct {
        unsigned FSR                    :8;
    };
} FSRbits_t;
extern volatile FSRbits_t FSRbits __at(0x004);
// bitfield macros
#define _FSR_FSR_POSN                                       0x0
#define _FSR_FSR_POSITION                                   0x0
#define _FSR_FSR_SIZE                                       0x8
#define _FSR_FSR_LENGTH                                     0x8
#define _FSR_FSR_MASK                                       0xFF

// Register: GPIO
#define GPIO GPIO
extern volatile unsigned char           GPIO                __at(0x005);
#ifndef _LIB_BUILD
asm("GPIO equ 05h");
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
        unsigned GPIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned GPIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
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

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x00C);
#ifndef _LIB_BUILD
asm("PIR1 equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned ADIF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
// bitfield macros
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRES equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRES                  :8;
    };
} ADRESbits_t;
extern volatile ADRESbits_t ADRESbits __at(0x01E);
// bitfield macros
#define _ADRES_ADRES_POSN                                   0x0
#define _ADRES_ADRES_POSITION                               0x0
#define _ADRES_ADRES_SIZE                                   0x8
#define _ADRES_ADRES_LENGTH                                 0x8
#define _ADRES_ADRES_MASK                                   0xFF

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
        unsigned                        :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :2;
        unsigned                        :1;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :2;
        unsigned GO_DONE                :1;
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
        unsigned GO                     :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
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
#define _ADCON0_GO_DONE_POSN                                0x2
#define _ADCON0_GO_DONE_POSITION                            0x2
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x4
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
#define _ADCON0_GO_POSN                                     0x2
#define _ADCON0_GO_POSITION                                 0x2
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x4

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

// Register: TRIS
#define TRIS TRIS
extern volatile unsigned char           TRIS                __at(0x085);
#ifndef _LIB_BUILD
asm("TRIS_REG equ 085h");
#endif
// aliases
extern volatile unsigned char           TRISIO              __at(0x085);
#ifndef _LIB_BUILD
asm("TRISIO equ 085h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRIS0                  :1;
        unsigned TRIS1                  :1;
        unsigned TRIS2                  :1;
        unsigned TRIS3                  :1;
        unsigned TRIS4                  :1;
        unsigned TRIS5                  :1;
    };
} TRISbits_t;
extern volatile TRISbits_t TRISbits __at(0x085);
// bitfield macros
#define _TRIS_TRIS0_POSN                                    0x0
#define _TRIS_TRIS0_POSITION                                0x0
#define _TRIS_TRIS0_SIZE                                    0x1
#define _TRIS_TRIS0_LENGTH                                  0x1
#define _TRIS_TRIS0_MASK                                    0x1
#define _TRIS_TRIS1_POSN                                    0x1
#define _TRIS_TRIS1_POSITION                                0x1
#define _TRIS_TRIS1_SIZE                                    0x1
#define _TRIS_TRIS1_LENGTH                                  0x1
#define _TRIS_TRIS1_MASK                                    0x2
#define _TRIS_TRIS2_POSN                                    0x2
#define _TRIS_TRIS2_POSITION                                0x2
#define _TRIS_TRIS2_SIZE                                    0x1
#define _TRIS_TRIS2_LENGTH                                  0x1
#define _TRIS_TRIS2_MASK                                    0x4
#define _TRIS_TRIS3_POSN                                    0x3
#define _TRIS_TRIS3_POSITION                                0x3
#define _TRIS_TRIS3_SIZE                                    0x1
#define _TRIS_TRIS3_LENGTH                                  0x1
#define _TRIS_TRIS3_MASK                                    0x8
#define _TRIS_TRIS4_POSN                                    0x4
#define _TRIS_TRIS4_POSITION                                0x4
#define _TRIS_TRIS4_SIZE                                    0x1
#define _TRIS_TRIS4_LENGTH                                  0x1
#define _TRIS_TRIS4_MASK                                    0x10
#define _TRIS_TRIS5_POSN                                    0x5
#define _TRIS_TRIS5_POSITION                                0x5
#define _TRIS_TRIS5_SIZE                                    0x1
#define _TRIS_TRIS5_LENGTH                                  0x1
#define _TRIS_TRIS5_MASK                                    0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRIS0                  :1;
        unsigned TRIS1                  :1;
        unsigned TRIS2                  :1;
        unsigned TRIS3                  :1;
        unsigned TRIS4                  :1;
        unsigned TRIS5                  :1;
    };
} TRISIObits_t;
extern volatile TRISIObits_t TRISIObits __at(0x085);
// bitfield macros
#define _TRISIO_TRIS0_POSN                                  0x0
#define _TRISIO_TRIS0_POSITION                              0x0
#define _TRISIO_TRIS0_SIZE                                  0x1
#define _TRISIO_TRIS0_LENGTH                                0x1
#define _TRISIO_TRIS0_MASK                                  0x1
#define _TRISIO_TRIS1_POSN                                  0x1
#define _TRISIO_TRIS1_POSITION                              0x1
#define _TRISIO_TRIS1_SIZE                                  0x1
#define _TRISIO_TRIS1_LENGTH                                0x1
#define _TRISIO_TRIS1_MASK                                  0x2
#define _TRISIO_TRIS2_POSN                                  0x2
#define _TRISIO_TRIS2_POSITION                              0x2
#define _TRISIO_TRIS2_SIZE                                  0x1
#define _TRISIO_TRIS2_LENGTH                                0x1
#define _TRISIO_TRIS2_MASK                                  0x4
#define _TRISIO_TRIS3_POSN                                  0x3
#define _TRISIO_TRIS3_POSITION                              0x3
#define _TRISIO_TRIS3_SIZE                                  0x1
#define _TRISIO_TRIS3_LENGTH                                0x1
#define _TRISIO_TRIS3_MASK                                  0x8
#define _TRISIO_TRIS4_POSN                                  0x4
#define _TRISIO_TRIS4_POSITION                              0x4
#define _TRISIO_TRIS4_SIZE                                  0x1
#define _TRISIO_TRIS4_LENGTH                                0x1
#define _TRISIO_TRIS4_MASK                                  0x10
#define _TRISIO_TRIS5_POSN                                  0x5
#define _TRISIO_TRIS5_POSITION                              0x5
#define _TRISIO_TRIS5_SIZE                                  0x1
#define _TRISIO_TRIS5_LENGTH                                0x1
#define _TRISIO_TRIS5_MASK                                  0x20

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x08C);
#ifndef _LIB_BUILD
asm("PIE1 equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned ADIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
// bitfield macros
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x08E);
#ifndef _LIB_BUILD
asm("PCON equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned nPOR                   :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x08E);
// bitfield macros
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2

// Register: OSCCAL
#define OSCCAL OSCCAL
extern volatile unsigned char           OSCCAL              __at(0x08F);
#ifndef _LIB_BUILD
asm("OSCCAL equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned CALSLW                 :1;
        unsigned CALFST                 :1;
        unsigned CAL                    :4;
    };
    struct {
        unsigned                        :4;
        unsigned CAL0                   :1;
        unsigned CAL1                   :1;
        unsigned CAL2                   :1;
        unsigned CAL3                   :1;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __at(0x08F);
// bitfield macros
#define _OSCCAL_CALSLW_POSN                                 0x2
#define _OSCCAL_CALSLW_POSITION                             0x2
#define _OSCCAL_CALSLW_SIZE                                 0x1
#define _OSCCAL_CALSLW_LENGTH                               0x1
#define _OSCCAL_CALSLW_MASK                                 0x4
#define _OSCCAL_CALFST_POSN                                 0x3
#define _OSCCAL_CALFST_POSITION                             0x3
#define _OSCCAL_CALFST_SIZE                                 0x1
#define _OSCCAL_CALFST_LENGTH                               0x1
#define _OSCCAL_CALFST_MASK                                 0x8
#define _OSCCAL_CAL_POSN                                    0x4
#define _OSCCAL_CAL_POSITION                                0x4
#define _OSCCAL_CAL_SIZE                                    0x4
#define _OSCCAL_CAL_LENGTH                                  0x4
#define _OSCCAL_CAL_MASK                                    0xF0
#define _OSCCAL_CAL0_POSN                                   0x4
#define _OSCCAL_CAL0_POSITION                               0x4
#define _OSCCAL_CAL0_SIZE                                   0x1
#define _OSCCAL_CAL0_LENGTH                                 0x1
#define _OSCCAL_CAL0_MASK                                   0x10
#define _OSCCAL_CAL1_POSN                                   0x5
#define _OSCCAL_CAL1_POSITION                               0x5
#define _OSCCAL_CAL1_SIZE                                   0x1
#define _OSCCAL_CAL1_LENGTH                                 0x1
#define _OSCCAL_CAL1_MASK                                   0x20
#define _OSCCAL_CAL2_POSN                                   0x6
#define _OSCCAL_CAL2_POSITION                               0x6
#define _OSCCAL_CAL2_SIZE                                   0x1
#define _OSCCAL_CAL2_LENGTH                                 0x1
#define _OSCCAL_CAL2_MASK                                   0x40
#define _OSCCAL_CAL3_POSN                                   0x7
#define _OSCCAL_CAL3_POSITION                               0x7
#define _OSCCAL_CAL3_SIZE                                   0x1
#define _OSCCAL_CAL3_LENGTH                                 0x1
#define _OSCCAL_CAL3_MASK                                   0x80

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :3;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x3
#define _ADCON1_PCFG_LENGTH                                 0x3
#define _ADCON1_PCFG_MASK                                   0x7
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
// OSCCAL<CAL0>
extern volatile __bit                   CAL0                __at(0x47C);	// @ (0x8F * 8 + 4)
#define                                 CAL0_bit            _BIT_ACCESS(OSCCAL,4)
// OSCCAL<CAL1>
extern volatile __bit                   CAL1                __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 CAL1_bit            _BIT_ACCESS(OSCCAL,5)
// OSCCAL<CAL2>
extern volatile __bit                   CAL2                __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 CAL2_bit            _BIT_ACCESS(OSCCAL,6)
// OSCCAL<CAL3>
extern volatile __bit                   CAL3                __at(0x47F);	// @ (0x8F * 8 + 7)
#define                                 CAL3_bit            _BIT_ACCESS(OSCCAL,7)
// OSCCAL<CALFST>
extern volatile __bit                   CALFST              __at(0x47B);	// @ (0x8F * 8 + 3)
#define                                 CALFST_bit          _BIT_ACCESS(OSCCAL,3)
// OSCCAL<CALSLW>
extern volatile __bit                   CALSLW              __at(0x47A);	// @ (0x8F * 8 + 2)
#define                                 CALSLW_bit          _BIT_ACCESS(OSCCAL,2)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,4)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
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
extern volatile __bit                   PCFG0               __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
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
// TRIS<TRIS0>
extern volatile __bit                   TRIS0               __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRIS0_bit           _BIT_ACCESS(TRIS,0)
// TRIS<TRIS1>
extern volatile __bit                   TRIS1               __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRIS1_bit           _BIT_ACCESS(TRIS,1)
// TRIS<TRIS2>
extern volatile __bit                   TRIS2               __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRIS2_bit           _BIT_ACCESS(TRIS,2)
// TRIS<TRIS3>
extern volatile __bit                   TRIS3               __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRIS3_bit           _BIT_ACCESS(TRIS,3)
// TRIS<TRIS4>
extern volatile __bit                   TRIS4               __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRIS4_bit           _BIT_ACCESS(TRIS,4)
// TRIS<TRIS5>
extern volatile __bit                   TRIS5               __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRIS5_bit           _BIT_ACCESS(TRIS,5)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,2)
// OPTION_REG<nGPPU>
extern volatile __bit                   nGPPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nGPPU_bit           _BIT_ACCESS(OPTION_REG,7)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC12C672_H_
