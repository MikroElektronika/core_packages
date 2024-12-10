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

#ifndef _PIC18F4450_H_
#define _PIC18F4450_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F4450
 */
#ifndef _XC_H_
#warning Header file pic18f4450.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: UFRM
#define UFRM UFRM
extern volatile unsigned short          UFRM                __at(0xF66);
#ifndef _LIB_BUILD
asm("UFRM equ 0F66h");
#endif

// Register: UFRML
#define UFRML UFRML
extern volatile unsigned char           UFRML               __at(0xF66);
#ifndef _LIB_BUILD
asm("UFRML equ 0F66h");
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
extern volatile UFRMLbits_t UFRMLbits __at(0xF66);
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
extern volatile unsigned char           UFRMH               __at(0xF67);
#ifndef _LIB_BUILD
asm("UFRMH equ 0F67h");
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
extern volatile UFRMHbits_t UFRMHbits __at(0xF67);
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

// Register: UIR
#define UIR UIR
extern volatile unsigned char           UIR                 __at(0xF68);
#ifndef _LIB_BUILD
asm("UIR equ 0F68h");
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
extern volatile UIRbits_t UIRbits __at(0xF68);
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

// Register: UIE
#define UIE UIE
extern volatile unsigned char           UIE                 __at(0xF69);
#ifndef _LIB_BUILD
asm("UIE equ 0F69h");
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
extern volatile UIEbits_t UIEbits __at(0xF69);
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

// Register: UEIR
#define UEIR UEIR
extern volatile unsigned char           UEIR                __at(0xF6A);
#ifndef _LIB_BUILD
asm("UEIR equ 0F6Ah");
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
extern volatile UEIRbits_t UEIRbits __at(0xF6A);
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

// Register: UEIE
#define UEIE UEIE
extern volatile unsigned char           UEIE                __at(0xF6B);
#ifndef _LIB_BUILD
asm("UEIE equ 0F6Bh");
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
extern volatile UEIEbits_t UEIEbits __at(0xF6B);
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

// Register: USTAT
#define USTAT USTAT
extern volatile unsigned char           USTAT               __at(0xF6C);
#ifndef _LIB_BUILD
asm("USTAT equ 0F6Ch");
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
extern volatile USTATbits_t USTATbits __at(0xF6C);
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

// Register: UCON
#define UCON UCON
extern volatile unsigned char           UCON                __at(0xF6D);
#ifndef _LIB_BUILD
asm("UCON equ 0F6Dh");
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
extern volatile UCONbits_t UCONbits __at(0xF6D);
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

// Register: UADDR
#define UADDR UADDR
extern volatile unsigned char           UADDR               __at(0xF6E);
#ifndef _LIB_BUILD
asm("UADDR equ 0F6Eh");
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
extern volatile UADDRbits_t UADDRbits __at(0xF6E);
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

// Register: UCFG
#define UCFG UCFG
extern volatile unsigned char           UCFG                __at(0xF6F);
#ifndef _LIB_BUILD
asm("UCFG equ 0F6Fh");
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
extern volatile UCFGbits_t UCFGbits __at(0xF6F);
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

// Register: UEP0
#define UEP0 UEP0
extern volatile unsigned char           UEP0                __at(0xF70);
#ifndef _LIB_BUILD
asm("UEP0 equ 0F70h");
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
extern volatile UEP0bits_t UEP0bits __at(0xF70);
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
extern volatile unsigned char           UEP1                __at(0xF71);
#ifndef _LIB_BUILD
asm("UEP1 equ 0F71h");
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
extern volatile UEP1bits_t UEP1bits __at(0xF71);
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
extern volatile unsigned char           UEP2                __at(0xF72);
#ifndef _LIB_BUILD
asm("UEP2 equ 0F72h");
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
extern volatile UEP2bits_t UEP2bits __at(0xF72);
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
extern volatile unsigned char           UEP3                __at(0xF73);
#ifndef _LIB_BUILD
asm("UEP3 equ 0F73h");
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
extern volatile UEP3bits_t UEP3bits __at(0xF73);
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
extern volatile unsigned char           UEP4                __at(0xF74);
#ifndef _LIB_BUILD
asm("UEP4 equ 0F74h");
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
extern volatile UEP4bits_t UEP4bits __at(0xF74);
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
extern volatile unsigned char           UEP5                __at(0xF75);
#ifndef _LIB_BUILD
asm("UEP5 equ 0F75h");
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
extern volatile UEP5bits_t UEP5bits __at(0xF75);
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
extern volatile unsigned char           UEP6                __at(0xF76);
#ifndef _LIB_BUILD
asm("UEP6 equ 0F76h");
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
extern volatile UEP6bits_t UEP6bits __at(0xF76);
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
extern volatile unsigned char           UEP7                __at(0xF77);
#ifndef _LIB_BUILD
asm("UEP7 equ 0F77h");
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
extern volatile UEP7bits_t UEP7bits __at(0xF77);
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
extern volatile unsigned char           UEP8                __at(0xF78);
#ifndef _LIB_BUILD
asm("UEP8 equ 0F78h");
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
extern volatile UEP8bits_t UEP8bits __at(0xF78);
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
extern volatile unsigned char           UEP9                __at(0xF79);
#ifndef _LIB_BUILD
asm("UEP9 equ 0F79h");
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
extern volatile UEP9bits_t UEP9bits __at(0xF79);
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
extern volatile unsigned char           UEP10               __at(0xF7A);
#ifndef _LIB_BUILD
asm("UEP10 equ 0F7Ah");
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
extern volatile UEP10bits_t UEP10bits __at(0xF7A);
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
extern volatile unsigned char           UEP11               __at(0xF7B);
#ifndef _LIB_BUILD
asm("UEP11 equ 0F7Bh");
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
extern volatile UEP11bits_t UEP11bits __at(0xF7B);
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
extern volatile unsigned char           UEP12               __at(0xF7C);
#ifndef _LIB_BUILD
asm("UEP12 equ 0F7Ch");
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
extern volatile UEP12bits_t UEP12bits __at(0xF7C);
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
extern volatile unsigned char           UEP13               __at(0xF7D);
#ifndef _LIB_BUILD
asm("UEP13 equ 0F7Dh");
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
extern volatile UEP13bits_t UEP13bits __at(0xF7D);
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
extern volatile unsigned char           UEP14               __at(0xF7E);
#ifndef _LIB_BUILD
asm("UEP14 equ 0F7Eh");
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
extern volatile UEP14bits_t UEP14bits __at(0xF7E);
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
extern volatile unsigned char           UEP15               __at(0xF7F);
#ifndef _LIB_BUILD
asm("UEP15 equ 0F7Fh");
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
extern volatile UEP15bits_t UEP15bits __at(0xF7F);
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
        unsigned RCV                    :1;
        unsigned LVDIN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned HLVDIN                 :1;
    };
    struct {
        unsigned ULPWUIN                :1;
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
#define _PORTA_RCV_POSN                                     0x4
#define _PORTA_RCV_POSITION                                 0x4
#define _PORTA_RCV_SIZE                                     0x1
#define _PORTA_RCV_LENGTH                                   0x1
#define _PORTA_RCV_MASK                                     0x10
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
        unsigned                        :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned AN12                   :1;
        unsigned AN10                   :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN11                   :1;
        unsigned PGM                    :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned VMO                    :1;
        unsigned VPO                    :1;
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
#define _PORTB_AN11_POSN                                    0x4
#define _PORTB_AN11_POSITION                                0x4
#define _PORTB_AN11_SIZE                                    0x1
#define _PORTB_AN11_LENGTH                                  0x1
#define _PORTB_AN11_MASK                                    0x10
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
#define _PORTB_VMO_POSN                                     0x2
#define _PORTB_VMO_POSITION                                 0x2
#define _PORTB_VMO_SIZE                                     0x1
#define _PORTB_VMO_LENGTH                                   0x1
#define _PORTB_VMO_MASK                                     0x4
#define _PORTB_VPO_POSN                                     0x3
#define _PORTB_VPO_POSITION                                 0x3
#define _PORTB_VPO_SIZE                                     0x1
#define _PORTB_VPO_LENGTH                                   0x1
#define _PORTB_VPO_MASK                                     0x8
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
        unsigned                        :1;
        unsigned NOT_UOE                :1;
    };
    struct {
        unsigned T1CKI                  :1;
        unsigned nUOE                   :1;
        unsigned P1A                    :1;
        unsigned                        :3;
        unsigned CK                     :1;
        unsigned DT                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned UOE                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned CCP2                   :1;
        unsigned _PA1                    :1;  // Note: Changed by MikroE
    };
    struct {
        unsigned                        :1;
        unsigned _PA2                    :1;  // Note: Changed by MikroE
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
#define _PORTC_NOT_UOE_POSN                                 0x1
#define _PORTC_NOT_UOE_POSITION                             0x1
#define _PORTC_NOT_UOE_SIZE                                 0x1
#define _PORTC_NOT_UOE_LENGTH                               0x1
#define _PORTC_NOT_UOE_MASK                                 0x2
#define _PORTC_T1CKI_POSN                                   0x0
#define _PORTC_T1CKI_POSITION                               0x0
#define _PORTC_T1CKI_SIZE                                   0x1
#define _PORTC_T1CKI_LENGTH                                 0x1
#define _PORTC_T1CKI_MASK                                   0x1
#define _PORTC_nUOE_POSN                                    0x1
#define _PORTC_nUOE_POSITION                                0x1
#define _PORTC_nUOE_SIZE                                    0x1
#define _PORTC_nUOE_LENGTH                                  0x1
#define _PORTC_nUOE_MASK                                    0x2
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
#define _PORTC_UOE_POSN                                     0x1
#define _PORTC_UOE_POSITION                                 0x1
#define _PORTC_UOE_SIZE                                     0x1
#define _PORTC_UOE_LENGTH                                   0x1
#define _PORTC_UOE_MASK                                     0x2
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
        unsigned RE3                    :1;
    };
    struct {
        unsigned AN5                    :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
    };
    struct {
        unsigned _PD2                    :1;  // Note: Changed by MikroE
        unsigned _PC2                    :1;  // Note: Changed by MikroE
        unsigned CCP10                  :1;
        unsigned CCP9E                  :1;
    };
    struct {
        unsigned RDE                    :1;
        unsigned WRE                    :1;
        unsigned CS                     :1;
        unsigned PC3E                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned _PB2                    :1;  // Note: Changed by MikroE
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
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8
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
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
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
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8
#define _PORTE_PB2_POSN                                     0x2
#define _PORTE_PB2_POSITION                                 0x2
#define _PORTE_PB2_SIZE                                     0x1
#define _PORTE_PB2_LENGTH                                   0x1
#define _PORTE_PB2_MASK                                     0x4

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
    };
    struct {
        unsigned LA0                    :1;
        unsigned LA1                    :1;
        unsigned LA2                    :1;
        unsigned LA3                    :1;
        unsigned LA4                    :1;
        unsigned LA5                    :1;
        unsigned LA6                    :1;
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
        unsigned                        :3;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
        unsigned LC1                    :1;
        unsigned LC2                    :1;
        unsigned                        :3;
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
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
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
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
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
        unsigned                        :3;
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
        unsigned                        :3;
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

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0xF95);
#ifndef _LIB_BUILD
asm("TRISD equ 0F95h");
#endif
// aliases
extern volatile unsigned char           DDRD                __at(0xF95);
#ifndef _LIB_BUILD
asm("DDRD equ 0F95h");
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
#define _TRISD_RD0_POSN                                     0x0
#define _TRISD_RD0_POSITION                                 0x0
#define _TRISD_RD0_SIZE                                     0x1
#define _TRISD_RD0_LENGTH                                   0x1
#define _TRISD_RD0_MASK                                     0x1
#define _TRISD_RD1_POSN                                     0x1
#define _TRISD_RD1_POSITION                                 0x1
#define _TRISD_RD1_SIZE                                     0x1
#define _TRISD_RD1_LENGTH                                   0x1
#define _TRISD_RD1_MASK                                     0x2
#define _TRISD_RD2_POSN                                     0x2
#define _TRISD_RD2_POSITION                                 0x2
#define _TRISD_RD2_SIZE                                     0x1
#define _TRISD_RD2_LENGTH                                   0x1
#define _TRISD_RD2_MASK                                     0x4
#define _TRISD_RD3_POSN                                     0x3
#define _TRISD_RD3_POSITION                                 0x3
#define _TRISD_RD3_SIZE                                     0x1
#define _TRISD_RD3_LENGTH                                   0x1
#define _TRISD_RD3_MASK                                     0x8
#define _TRISD_RD4_POSN                                     0x4
#define _TRISD_RD4_POSITION                                 0x4
#define _TRISD_RD4_SIZE                                     0x1
#define _TRISD_RD4_LENGTH                                   0x1
#define _TRISD_RD4_MASK                                     0x10
#define _TRISD_RD5_POSN                                     0x5
#define _TRISD_RD5_POSITION                                 0x5
#define _TRISD_RD5_SIZE                                     0x1
#define _TRISD_RD5_LENGTH                                   0x1
#define _TRISD_RD5_MASK                                     0x20
#define _TRISD_RD6_POSN                                     0x6
#define _TRISD_RD6_POSITION                                 0x6
#define _TRISD_RD6_SIZE                                     0x1
#define _TRISD_RD6_LENGTH                                   0x1
#define _TRISD_RD6_MASK                                     0x40
#define _TRISD_RD7_POSN                                     0x7
#define _TRISD_RD7_POSITION                                 0x7
#define _TRISD_RD7_SIZE                                     0x1
#define _TRISD_RD7_LENGTH                                   0x1
#define _TRISD_RD7_MASK                                     0x80
// alias bitfield definitions
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
} DDRDbits_t;
extern volatile DDRDbits_t DDRDbits __at(0xF95);
// bitfield macros
#define _DDRD_TRISD0_POSN                                   0x0
#define _DDRD_TRISD0_POSITION                               0x0
#define _DDRD_TRISD0_SIZE                                   0x1
#define _DDRD_TRISD0_LENGTH                                 0x1
#define _DDRD_TRISD0_MASK                                   0x1
#define _DDRD_TRISD1_POSN                                   0x1
#define _DDRD_TRISD1_POSITION                               0x1
#define _DDRD_TRISD1_SIZE                                   0x1
#define _DDRD_TRISD1_LENGTH                                 0x1
#define _DDRD_TRISD1_MASK                                   0x2
#define _DDRD_TRISD2_POSN                                   0x2
#define _DDRD_TRISD2_POSITION                               0x2
#define _DDRD_TRISD2_SIZE                                   0x1
#define _DDRD_TRISD2_LENGTH                                 0x1
#define _DDRD_TRISD2_MASK                                   0x4
#define _DDRD_TRISD3_POSN                                   0x3
#define _DDRD_TRISD3_POSITION                               0x3
#define _DDRD_TRISD3_SIZE                                   0x1
#define _DDRD_TRISD3_LENGTH                                 0x1
#define _DDRD_TRISD3_MASK                                   0x8
#define _DDRD_TRISD4_POSN                                   0x4
#define _DDRD_TRISD4_POSITION                               0x4
#define _DDRD_TRISD4_SIZE                                   0x1
#define _DDRD_TRISD4_LENGTH                                 0x1
#define _DDRD_TRISD4_MASK                                   0x10
#define _DDRD_TRISD5_POSN                                   0x5
#define _DDRD_TRISD5_POSITION                               0x5
#define _DDRD_TRISD5_SIZE                                   0x1
#define _DDRD_TRISD5_LENGTH                                 0x1
#define _DDRD_TRISD5_MASK                                   0x20
#define _DDRD_TRISD6_POSN                                   0x6
#define _DDRD_TRISD6_POSITION                               0x6
#define _DDRD_TRISD6_SIZE                                   0x1
#define _DDRD_TRISD6_LENGTH                                 0x1
#define _DDRD_TRISD6_MASK                                   0x40
#define _DDRD_TRISD7_POSN                                   0x7
#define _DDRD_TRISD7_POSITION                               0x7
#define _DDRD_TRISD7_SIZE                                   0x1
#define _DDRD_TRISD7_LENGTH                                 0x1
#define _DDRD_TRISD7_MASK                                   0x80
#define _DDRD_RD0_POSN                                      0x0
#define _DDRD_RD0_POSITION                                  0x0
#define _DDRD_RD0_SIZE                                      0x1
#define _DDRD_RD0_LENGTH                                    0x1
#define _DDRD_RD0_MASK                                      0x1
#define _DDRD_RD1_POSN                                      0x1
#define _DDRD_RD1_POSITION                                  0x1
#define _DDRD_RD1_SIZE                                      0x1
#define _DDRD_RD1_LENGTH                                    0x1
#define _DDRD_RD1_MASK                                      0x2
#define _DDRD_RD2_POSN                                      0x2
#define _DDRD_RD2_POSITION                                  0x2
#define _DDRD_RD2_SIZE                                      0x1
#define _DDRD_RD2_LENGTH                                    0x1
#define _DDRD_RD2_MASK                                      0x4
#define _DDRD_RD3_POSN                                      0x3
#define _DDRD_RD3_POSITION                                  0x3
#define _DDRD_RD3_SIZE                                      0x1
#define _DDRD_RD3_LENGTH                                    0x1
#define _DDRD_RD3_MASK                                      0x8
#define _DDRD_RD4_POSN                                      0x4
#define _DDRD_RD4_POSITION                                  0x4
#define _DDRD_RD4_SIZE                                      0x1
#define _DDRD_RD4_LENGTH                                    0x1
#define _DDRD_RD4_MASK                                      0x10
#define _DDRD_RD5_POSN                                      0x5
#define _DDRD_RD5_POSITION                                  0x5
#define _DDRD_RD5_SIZE                                      0x1
#define _DDRD_RD5_LENGTH                                    0x1
#define _DDRD_RD5_MASK                                      0x20
#define _DDRD_RD6_POSN                                      0x6
#define _DDRD_RD6_POSITION                                  0x6
#define _DDRD_RD6_SIZE                                      0x1
#define _DDRD_RD6_LENGTH                                    0x1
#define _DDRD_RD6_MASK                                      0x40
#define _DDRD_RD7_POSN                                      0x7
#define _DDRD_RD7_POSITION                                  0x7
#define _DDRD_RD7_SIZE                                      0x1
#define _DDRD_RD7_LENGTH                                    0x1
#define _DDRD_RD7_MASK                                      0x80

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0xF96);
#ifndef _LIB_BUILD
asm("TRISE equ 0F96h");
#endif
// aliases
extern volatile unsigned char           DDRE                __at(0xF96);
#ifndef _LIB_BUILD
asm("DDRE equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
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
#define _TRISE_RE0_POSN                                     0x0
#define _TRISE_RE0_POSITION                                 0x0
#define _TRISE_RE0_SIZE                                     0x1
#define _TRISE_RE0_LENGTH                                   0x1
#define _TRISE_RE0_MASK                                     0x1
#define _TRISE_RE1_POSN                                     0x1
#define _TRISE_RE1_POSITION                                 0x1
#define _TRISE_RE1_SIZE                                     0x1
#define _TRISE_RE1_LENGTH                                   0x1
#define _TRISE_RE1_MASK                                     0x2
#define _TRISE_RE2_POSN                                     0x2
#define _TRISE_RE2_POSITION                                 0x2
#define _TRISE_RE2_SIZE                                     0x1
#define _TRISE_RE2_LENGTH                                   0x1
#define _TRISE_RE2_MASK                                     0x4
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
    };
} DDREbits_t;
extern volatile DDREbits_t DDREbits __at(0xF96);
// bitfield macros
#define _DDRE_TRISE0_POSN                                   0x0
#define _DDRE_TRISE0_POSITION                               0x0
#define _DDRE_TRISE0_SIZE                                   0x1
#define _DDRE_TRISE0_LENGTH                                 0x1
#define _DDRE_TRISE0_MASK                                   0x1
#define _DDRE_TRISE1_POSN                                   0x1
#define _DDRE_TRISE1_POSITION                               0x1
#define _DDRE_TRISE1_SIZE                                   0x1
#define _DDRE_TRISE1_LENGTH                                 0x1
#define _DDRE_TRISE1_MASK                                   0x2
#define _DDRE_TRISE2_POSN                                   0x2
#define _DDRE_TRISE2_POSITION                               0x2
#define _DDRE_TRISE2_SIZE                                   0x1
#define _DDRE_TRISE2_LENGTH                                 0x1
#define _DDRE_TRISE2_MASK                                   0x4
#define _DDRE_RE0_POSN                                      0x0
#define _DDRE_RE0_POSITION                                  0x0
#define _DDRE_RE0_SIZE                                      0x1
#define _DDRE_RE0_LENGTH                                    0x1
#define _DDRE_RE0_MASK                                      0x1
#define _DDRE_RE1_POSN                                      0x1
#define _DDRE_RE1_POSITION                                  0x1
#define _DDRE_RE1_SIZE                                      0x1
#define _DDRE_RE1_LENGTH                                    0x1
#define _DDRE_RE1_MASK                                      0x2
#define _DDRE_RE2_POSN                                      0x2
#define _DDRE_RE2_POSITION                                  0x2
#define _DDRE_RE2_SIZE                                      0x1
#define _DDRE_RE2_LENGTH                                    0x1
#define _DDRE_RE2_MASK                                      0x4

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
        unsigned                        :1;
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
        unsigned                        :1;
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
        unsigned                        :1;
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
        unsigned                        :2;
        unsigned HLVDIE                 :1;
        unsigned                        :2;
        unsigned USBIE                  :1;
        unsigned                        :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0xFA0);
// bitfield macros
#define _PIE2_HLVDIE_POSN                                   0x2
#define _PIE2_HLVDIE_POSITION                               0x2
#define _PIE2_HLVDIE_SIZE                                   0x1
#define _PIE2_HLVDIE_LENGTH                                 0x1
#define _PIE2_HLVDIE_MASK                                   0x4
#define _PIE2_USBIE_POSN                                    0x5
#define _PIE2_USBIE_POSITION                                0x5
#define _PIE2_USBIE_SIZE                                    0x1
#define _PIE2_USBIE_LENGTH                                  0x1
#define _PIE2_USBIE_MASK                                    0x20
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

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0xFA1);
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned HLVDIF                 :1;
        unsigned                        :2;
        unsigned USBIF                  :1;
        unsigned                        :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0xFA1);
// bitfield macros
#define _PIR2_HLVDIF_POSN                                   0x2
#define _PIR2_HLVDIF_POSITION                               0x2
#define _PIR2_HLVDIF_SIZE                                   0x1
#define _PIR2_HLVDIF_LENGTH                                 0x1
#define _PIR2_HLVDIF_MASK                                   0x4
#define _PIR2_USBIF_POSN                                    0x5
#define _PIR2_USBIF_POSITION                                0x5
#define _PIR2_USBIF_SIZE                                    0x1
#define _PIR2_USBIF_LENGTH                                  0x1
#define _PIR2_USBIF_MASK                                    0x20
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

// Register: IPR2
#define IPR2 IPR2
extern volatile unsigned char           IPR2                __at(0xFA2);
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned HLVDIP                 :1;
        unsigned                        :2;
        unsigned USBIP                  :1;
        unsigned                        :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIP                  :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits __at(0xFA2);
// bitfield macros
#define _IPR2_HLVDIP_POSN                                   0x2
#define _IPR2_HLVDIP_POSITION                               0x2
#define _IPR2_HLVDIP_SIZE                                   0x1
#define _IPR2_HLVDIP_LENGTH                                 0x1
#define _IPR2_HLVDIP_MASK                                   0x4
#define _IPR2_USBIP_POSN                                    0x5
#define _IPR2_USBIP_POSITION                                0x5
#define _IPR2_USBIP_SIZE                                    0x1
#define _IPR2_USBIP_LENGTH                                  0x1
#define _IPR2_USBIP_MASK                                    0x20
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
        unsigned                        :1;
        unsigned CFGS                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned EEFS                   :1;
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
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
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
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
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
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
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
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
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
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
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
#define _ADCON1_PCFG3_POSN                                  0x3
#define _ADCON1_PCFG3_POSITION                              0x3
#define _ADCON1_PCFG3_SIZE                                  0x1
#define _ADCON1_PCFG3_LENGTH                                0x1
#define _ADCON1_PCFG3_MASK                                  0x8
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
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
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
#define _PR2 _PR2  // Note: Changed by MikroE
extern volatile unsigned char           _PR2                 __at(0xFCB);  // Note: Changed by MikroE
#ifndef _LIB_BUILD
asm("_PR2 equ 0FCBh");  // Note: Changed by MikroE
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
        unsigned                        :7;
        unsigned NOT_IPEN               :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned                        :2;
        unsigned nIPEN                  :1;
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
#define _RCON_NOT_IPEN_POSN                                 0x7
#define _RCON_NOT_IPEN_POSITION                             0x7
#define _RCON_NOT_IPEN_SIZE                                 0x1
#define _RCON_NOT_IPEN_LENGTH                               0x1
#define _RCON_NOT_IPEN_MASK                                 0x80
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
#define _RCON_nIPEN_POSN                                    0x7
#define _RCON_nIPEN_POSITION                                0x7
#define _RCON_nIPEN_SIZE                                    0x1
#define _RCON_nIPEN_LENGTH                                  0x1
#define _RCON_nIPEN_MASK                                    0x80

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

// Register: HLVDCON
#define HLVDCON HLVDCON
extern volatile unsigned char           HLVDCON             __at(0xFD2);
#ifndef _LIB_BUILD
asm("HLVDCON equ 0FD2h");
#endif
// aliases
extern volatile unsigned char           LVDCON              __at(0xFD2);
#ifndef _LIB_BUILD
asm("LVDCON equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IRVST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IVRST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} HLVDCONbits_t;
extern volatile HLVDCONbits_t HLVDCONbits __at(0xFD2);
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
#define _HLVDCON_LVDL0_POSN                                 0x0
#define _HLVDCON_LVDL0_POSITION                             0x0
#define _HLVDCON_LVDL0_SIZE                                 0x1
#define _HLVDCON_LVDL0_LENGTH                               0x1
#define _HLVDCON_LVDL0_MASK                                 0x1
#define _HLVDCON_LVDL1_POSN                                 0x1
#define _HLVDCON_LVDL1_POSITION                             0x1
#define _HLVDCON_LVDL1_SIZE                                 0x1
#define _HLVDCON_LVDL1_LENGTH                               0x1
#define _HLVDCON_LVDL1_MASK                                 0x2
#define _HLVDCON_LVDL2_POSN                                 0x2
#define _HLVDCON_LVDL2_POSITION                             0x2
#define _HLVDCON_LVDL2_SIZE                                 0x1
#define _HLVDCON_LVDL2_LENGTH                               0x1
#define _HLVDCON_LVDL2_MASK                                 0x4
#define _HLVDCON_LVDL3_POSN                                 0x3
#define _HLVDCON_LVDL3_POSITION                             0x3
#define _HLVDCON_LVDL3_SIZE                                 0x1
#define _HLVDCON_LVDL3_LENGTH                               0x1
#define _HLVDCON_LVDL3_MASK                                 0x8
#define _HLVDCON_LVDEN_POSN                                 0x4
#define _HLVDCON_LVDEN_POSITION                             0x4
#define _HLVDCON_LVDEN_SIZE                                 0x1
#define _HLVDCON_LVDEN_LENGTH                               0x1
#define _HLVDCON_LVDEN_MASK                                 0x10
#define _HLVDCON_IVRST_POSN                                 0x5
#define _HLVDCON_IVRST_POSITION                             0x5
#define _HLVDCON_IVRST_SIZE                                 0x1
#define _HLVDCON_IVRST_LENGTH                               0x1
#define _HLVDCON_IVRST_MASK                                 0x20
#define _HLVDCON_LVV0_POSN                                  0x0
#define _HLVDCON_LVV0_POSITION                              0x0
#define _HLVDCON_LVV0_SIZE                                  0x1
#define _HLVDCON_LVV0_LENGTH                                0x1
#define _HLVDCON_LVV0_MASK                                  0x1
#define _HLVDCON_LVV1_POSN                                  0x1
#define _HLVDCON_LVV1_POSITION                              0x1
#define _HLVDCON_LVV1_SIZE                                  0x1
#define _HLVDCON_LVV1_LENGTH                                0x1
#define _HLVDCON_LVV1_MASK                                  0x2
#define _HLVDCON_LVV2_POSN                                  0x2
#define _HLVDCON_LVV2_POSITION                              0x2
#define _HLVDCON_LVV2_SIZE                                  0x1
#define _HLVDCON_LVV2_LENGTH                                0x1
#define _HLVDCON_LVV2_MASK                                  0x4
#define _HLVDCON_LVV3_POSN                                  0x3
#define _HLVDCON_LVV3_POSITION                              0x3
#define _HLVDCON_LVV3_SIZE                                  0x1
#define _HLVDCON_LVV3_LENGTH                                0x1
#define _HLVDCON_LVV3_MASK                                  0x8
#define _HLVDCON_BGST_POSN                                  0x5
#define _HLVDCON_BGST_POSITION                              0x5
#define _HLVDCON_BGST_SIZE                                  0x1
#define _HLVDCON_BGST_LENGTH                                0x1
#define _HLVDCON_BGST_MASK                                  0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IRVST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IVRST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits __at(0xFD2);
// bitfield macros
#define _LVDCON_HLVDL_POSN                                  0x0
#define _LVDCON_HLVDL_POSITION                              0x0
#define _LVDCON_HLVDL_SIZE                                  0x4
#define _LVDCON_HLVDL_LENGTH                                0x4
#define _LVDCON_HLVDL_MASK                                  0xF
#define _LVDCON_HLVDEN_POSN                                 0x4
#define _LVDCON_HLVDEN_POSITION                             0x4
#define _LVDCON_HLVDEN_SIZE                                 0x1
#define _LVDCON_HLVDEN_LENGTH                               0x1
#define _LVDCON_HLVDEN_MASK                                 0x10
#define _LVDCON_IRVST_POSN                                  0x5
#define _LVDCON_IRVST_POSITION                              0x5
#define _LVDCON_IRVST_SIZE                                  0x1
#define _LVDCON_IRVST_LENGTH                                0x1
#define _LVDCON_IRVST_MASK                                  0x20
#define _LVDCON_VDIRMAG_POSN                                0x7
#define _LVDCON_VDIRMAG_POSITION                            0x7
#define _LVDCON_VDIRMAG_SIZE                                0x1
#define _LVDCON_VDIRMAG_LENGTH                              0x1
#define _LVDCON_VDIRMAG_MASK                                0x80
#define _LVDCON_HLVDL0_POSN                                 0x0
#define _LVDCON_HLVDL0_POSITION                             0x0
#define _LVDCON_HLVDL0_SIZE                                 0x1
#define _LVDCON_HLVDL0_LENGTH                               0x1
#define _LVDCON_HLVDL0_MASK                                 0x1
#define _LVDCON_HLVDL1_POSN                                 0x1
#define _LVDCON_HLVDL1_POSITION                             0x1
#define _LVDCON_HLVDL1_SIZE                                 0x1
#define _LVDCON_HLVDL1_LENGTH                               0x1
#define _LVDCON_HLVDL1_MASK                                 0x2
#define _LVDCON_HLVDL2_POSN                                 0x2
#define _LVDCON_HLVDL2_POSITION                             0x2
#define _LVDCON_HLVDL2_SIZE                                 0x1
#define _LVDCON_HLVDL2_LENGTH                               0x1
#define _LVDCON_HLVDL2_MASK                                 0x4
#define _LVDCON_HLVDL3_POSN                                 0x3
#define _LVDCON_HLVDL3_POSITION                             0x3
#define _LVDCON_HLVDL3_SIZE                                 0x1
#define _LVDCON_HLVDL3_LENGTH                               0x1
#define _LVDCON_HLVDL3_MASK                                 0x8
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
#define _LVDCON_LVDL3_POSN                                  0x3
#define _LVDCON_LVDL3_POSITION                              0x3
#define _LVDCON_LVDL3_SIZE                                  0x1
#define _LVDCON_LVDL3_LENGTH                                0x1
#define _LVDCON_LVDL3_MASK                                  0x8
#define _LVDCON_LVDEN_POSN                                  0x4
#define _LVDCON_LVDEN_POSITION                              0x4
#define _LVDCON_LVDEN_SIZE                                  0x1
#define _LVDCON_LVDEN_LENGTH                                0x1
#define _LVDCON_LVDEN_MASK                                  0x10
#define _LVDCON_IVRST_POSN                                  0x5
#define _LVDCON_IVRST_POSITION                              0x5
#define _LVDCON_IVRST_SIZE                                  0x1
#define _LVDCON_IVRST_LENGTH                                0x1
#define _LVDCON_IVRST_MASK                                  0x20
#define _LVDCON_LVV0_POSN                                   0x0
#define _LVDCON_LVV0_POSITION                               0x0
#define _LVDCON_LVV0_SIZE                                   0x1
#define _LVDCON_LVV0_LENGTH                                 0x1
#define _LVDCON_LVV0_MASK                                   0x1
#define _LVDCON_LVV1_POSN                                   0x1
#define _LVDCON_LVV1_POSITION                               0x1
#define _LVDCON_LVV1_SIZE                                   0x1
#define _LVDCON_LVV1_LENGTH                                 0x1
#define _LVDCON_LVV1_MASK                                   0x2
#define _LVDCON_LVV2_POSN                                   0x2
#define _LVDCON_LVV2_POSITION                               0x2
#define _LVDCON_LVV2_SIZE                                   0x1
#define _LVDCON_LVV2_LENGTH                                 0x1
#define _LVDCON_LVV2_MASK                                   0x4
#define _LVDCON_LVV3_POSN                                   0x3
#define _LVDCON_LVV3_POSITION                               0x3
#define _LVDCON_LVV3_SIZE                                   0x1
#define _LVDCON_LVV3_LENGTH                                 0x1
#define _LVDCON_LVV3_MASK                                   0x8
#define _LVDCON_BGST_POSN                                   0x5
#define _LVDCON_BGST_POSITION                               0x5
#define _LVDCON_BGST_SIZE                                   0x1
#define _LVDCON_BGST_LENGTH                                 0x1
#define _LVDCON_BGST_MASK                                   0x20

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
        unsigned                        :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
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
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
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
#define _INTCON2_RBIP_POSN                                  0x0
#define _INTCON2_RBIP_POSITION                              0x0
#define _INTCON2_RBIP_SIZE                                  0x1
#define _INTCON2_RBIP_LENGTH                                0x1
#define _INTCON2_RBIP_MASK                                  0x1
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
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
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
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10
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
extern volatile __bit                   ACTVIE              __at(0x7B4A);	// @ (0xF69 * 8 + 2)
#define                                 ACTVIE_bit          _BIT_ACCESS(UIE,2)
// UIR<ACTVIF>
extern volatile __bit                   ACTVIF              __at(0x7B42);	// @ (0xF68 * 8 + 2)
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
extern volatile __bit                   ADDR0               __at(0x7B70);	// @ (0xF6E * 8 + 0)
#define                                 ADDR0_bit           _BIT_ACCESS(UADDR,0)
// UADDR<ADDR1>
extern volatile __bit                   ADDR1               __at(0x7B71);	// @ (0xF6E * 8 + 1)
#define                                 ADDR1_bit           _BIT_ACCESS(UADDR,1)
// UADDR<ADDR2>
extern volatile __bit                   ADDR2               __at(0x7B72);	// @ (0xF6E * 8 + 2)
#define                                 ADDR2_bit           _BIT_ACCESS(UADDR,2)
// UADDR<ADDR3>
extern volatile __bit                   ADDR3               __at(0x7B73);	// @ (0xF6E * 8 + 3)
#define                                 ADDR3_bit           _BIT_ACCESS(UADDR,3)
// UADDR<ADDR4>
extern volatile __bit                   ADDR4               __at(0x7B74);	// @ (0xF6E * 8 + 4)
#define                                 ADDR4_bit           _BIT_ACCESS(UADDR,4)
// UADDR<ADDR5>
extern volatile __bit                   ADDR5               __at(0x7B75);	// @ (0xF6E * 8 + 5)
#define                                 ADDR5_bit           _BIT_ACCESS(UADDR,5)
// UADDR<ADDR6>
extern volatile __bit                   ADDR6               __at(0x7B76);	// @ (0xF6E * 8 + 6)
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
// PORTA<AN0>
extern volatile __bit                   AN0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 AN0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<AN1>
extern volatile __bit                   AN1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 AN1_bit             _BIT_ACCESS(PORTA,1)
// PORTB<AN10>
extern volatile __bit                   AN10                __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 AN10_bit            _BIT_ACCESS(PORTB,1)
// PORTB<AN11>
extern volatile __bit                   AN11                __at(0x7C0C);	// @ (0xF81 * 8 + 4)
#define                                 AN11_bit            _BIT_ACCESS(PORTB,4)
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
// HLVDCON<BGST>
extern volatile __bit                   BGST                __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 BGST_bit            _BIT_ACCESS(HLVDCON,5)
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
extern volatile __bit                   BTOEE               __at(0x7B5C);	// @ (0xF6B * 8 + 4)
#define                                 BTOEE_bit           _BIT_ACCESS(UEIE,4)
// UEIR<BTOEF>
extern volatile __bit                   BTOEF               __at(0x7B54);	// @ (0xF6A * 8 + 4)
#define                                 BTOEF_bit           _BIT_ACCESS(UEIR,4)
// UEIE<BTSEE>
extern volatile __bit                   BTSEE               __at(0x7B5F);	// @ (0xF6B * 8 + 7)
#define                                 BTSEE_bit           _BIT_ACCESS(UEIE,7)
// UEIR<BTSEF>
extern volatile __bit                   BTSEF               __at(0x7B57);	// @ (0xF6A * 8 + 7)
#define                                 BTSEF_bit           _BIT_ACCESS(UEIR,7)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x7EC0);	// @ (0xFD8 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PORTC<CCP1>
extern volatile __bit                   CCP1                __at(0x7C12);	// @ (0xF82 * 8 + 2)
#define                                 CCP1_bit            _BIT_ACCESS(PORTC,2)
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
// PORTB<CCP2_PA2>
extern volatile __bit                   CCP2_PA2            __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 CCP2_PA2_bit        _BIT_ACCESS(PORTB,3)
// PORTE<CCP9E>
extern volatile __bit                   CCP9E               __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 CCP9E_bit           _BIT_ACCESS(PORTE,3)
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
// PORTC<CK>
extern volatile __bit                   CK                  __at(0x7C16);	// @ (0xF82 * 8 + 6)
#define                                 CK_bit              _BIT_ACCESS(PORTC,6)
// UEIE<CRC16EE>
extern volatile __bit                   CRC16EE             __at(0x7B5A);	// @ (0xF6B * 8 + 2)
#define                                 CRC16EE_bit         _BIT_ACCESS(UEIE,2)
// UEIR<CRC16EF>
extern volatile __bit                   CRC16EF             __at(0x7B52);	// @ (0xF6A * 8 + 2)
#define                                 CRC16EF_bit         _BIT_ACCESS(UEIR,2)
// UEIE<CRC5EE>
extern volatile __bit                   CRC5EE              __at(0x7B59);	// @ (0xF6B * 8 + 1)
#define                                 CRC5EE_bit          _BIT_ACCESS(UEIE,1)
// UEIR<CRC5EF>
extern volatile __bit                   CRC5EF              __at(0x7B51);	// @ (0xF6A * 8 + 1)
#define                                 CRC5EF_bit          _BIT_ACCESS(UEIR,1)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0x7D5C);	// @ (0xFAB * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// PORTE<CS>
extern volatile __bit                   CS                  __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 CS_bit              _BIT_ACCESS(PORTE,2)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// TXSTA<CSRC1>
extern volatile __bit                   CSRC1               __at(0x7D67);	// @ (0xFAC * 8 + 7)
#define                                 CSRC1_bit           _BIT_ACCESS(TXSTA,7)
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
extern volatile __bit                   DFN8EE              __at(0x7B5B);	// @ (0xF6B * 8 + 3)
#define                                 DFN8EE_bit          _BIT_ACCESS(UEIE,3)
// UEIR<DFN8EF>
extern volatile __bit                   DFN8EF              __at(0x7B53);	// @ (0xF6A * 8 + 3)
#define                                 DFN8EF_bit          _BIT_ACCESS(UEIR,3)
// USTAT<DIR>
extern volatile __bit                   DIR                 __at(0x7B62);	// @ (0xF6C * 8 + 2)
#define                                 DIR_bit             _BIT_ACCESS(USTAT,2)
// ADCON0<DONE>
extern volatile __bit                   DONE                __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 DONE_bit            _BIT_ACCESS(ADCON0,1)
// PORTC<DT>
extern volatile __bit                   DT                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 DT_bit              _BIT_ACCESS(PORTC,7)
// PR2<EBDIS>
extern volatile __bit                   EBDIS               __at(0x7E5F);	// @ (0xFCB * 8 + 7)
#define                                 EBDIS_bit           _BIT_ACCESS(_PR2,7)  // Note: Changed by MikroE
// EECON1<EEFS>
extern volatile __bit                   EEFS                __at(0x7D36);	// @ (0xFA6 * 8 + 6)
#define                                 EEFS_bit            _BIT_ACCESS(EECON1,6)
// USTAT<ENDP0>
extern volatile __bit                   ENDP0               __at(0x7B63);	// @ (0xF6C * 8 + 3)
#define                                 ENDP0_bit           _BIT_ACCESS(USTAT,3)
// USTAT<ENDP1>
extern volatile __bit                   ENDP1               __at(0x7B64);	// @ (0xF6C * 8 + 4)
#define                                 ENDP1_bit           _BIT_ACCESS(USTAT,4)
// USTAT<ENDP2>
extern volatile __bit                   ENDP2               __at(0x7B65);	// @ (0xF6C * 8 + 5)
#define                                 ENDP2_bit           _BIT_ACCESS(USTAT,5)
// USTAT<ENDP3>
extern volatile __bit                   ENDP3               __at(0x7B66);	// @ (0xF6C * 8 + 6)
#define                                 ENDP3_bit           _BIT_ACCESS(USTAT,6)
// UEP0<EP0CONDIS>
extern volatile __bit                   EP0CONDIS           __at(0x7B83);	// @ (0xF70 * 8 + 3)
#define                                 EP0CONDIS_bit       _BIT_ACCESS(UEP0,3)
// UEP0<EP0HSHK>
extern volatile __bit                   EP0HSHK             __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 EP0HSHK_bit         _BIT_ACCESS(UEP0,4)
// UEP0<EP0INEN>
extern volatile __bit                   EP0INEN             __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 EP0INEN_bit         _BIT_ACCESS(UEP0,1)
// UEP0<EP0OUTEN>
extern volatile __bit                   EP0OUTEN            __at(0x7B82);	// @ (0xF70 * 8 + 2)
#define                                 EP0OUTEN_bit        _BIT_ACCESS(UEP0,2)
// UEP0<EP0STALL>
extern volatile __bit                   EP0STALL            __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 EP0STALL_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EP1CONDIS>
extern volatile __bit                   EP1CONDIS           __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 EP1CONDIS_bit       _BIT_ACCESS(UEP1,3)
// UEP1<EP1HSHK>
extern volatile __bit                   EP1HSHK             __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 EP1HSHK_bit         _BIT_ACCESS(UEP1,4)
// UEP1<EP1INEN>
extern volatile __bit                   EP1INEN             __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 EP1INEN_bit         _BIT_ACCESS(UEP1,1)
// UEP1<EP1OUTEN>
extern volatile __bit                   EP1OUTEN            __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 EP1OUTEN_bit        _BIT_ACCESS(UEP1,2)
// UEP1<EP1STALL>
extern volatile __bit                   EP1STALL            __at(0x7B88);	// @ (0xF71 * 8 + 0)
#define                                 EP1STALL_bit        _BIT_ACCESS(UEP1,0)
// UEP2<EP2CONDIS>
extern volatile __bit                   EP2CONDIS           __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 EP2CONDIS_bit       _BIT_ACCESS(UEP2,3)
// UEP2<EP2HSHK>
extern volatile __bit                   EP2HSHK             __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 EP2HSHK_bit         _BIT_ACCESS(UEP2,4)
// UEP2<EP2INEN>
extern volatile __bit                   EP2INEN             __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 EP2INEN_bit         _BIT_ACCESS(UEP2,1)
// UEP2<EP2OUTEN>
extern volatile __bit                   EP2OUTEN            __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 EP2OUTEN_bit        _BIT_ACCESS(UEP2,2)
// UEP2<EP2STALL>
extern volatile __bit                   EP2STALL            __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 EP2STALL_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EP3CONDIS>
extern volatile __bit                   EP3CONDIS           __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 EP3CONDIS_bit       _BIT_ACCESS(UEP3,3)
// UEP3<EP3HSHK>
extern volatile __bit                   EP3HSHK             __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 EP3HSHK_bit         _BIT_ACCESS(UEP3,4)
// UEP3<EP3INEN>
extern volatile __bit                   EP3INEN             __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 EP3INEN_bit         _BIT_ACCESS(UEP3,1)
// UEP3<EP3OUTEN>
extern volatile __bit                   EP3OUTEN            __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 EP3OUTEN_bit        _BIT_ACCESS(UEP3,2)
// UEP3<EP3STALL>
extern volatile __bit                   EP3STALL            __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 EP3STALL_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EP4CONDIS>
extern volatile __bit                   EP4CONDIS           __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 EP4CONDIS_bit       _BIT_ACCESS(UEP4,3)
// UEP4<EP4HSHK>
extern volatile __bit                   EP4HSHK             __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 EP4HSHK_bit         _BIT_ACCESS(UEP4,4)
// UEP4<EP4INEN>
extern volatile __bit                   EP4INEN             __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 EP4INEN_bit         _BIT_ACCESS(UEP4,1)
// UEP4<EP4OUTEN>
extern volatile __bit                   EP4OUTEN            __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 EP4OUTEN_bit        _BIT_ACCESS(UEP4,2)
// UEP4<EP4STALL>
extern volatile __bit                   EP4STALL            __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 EP4STALL_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EP5CONDIS>
extern volatile __bit                   EP5CONDIS           __at(0x7BAB);	// @ (0xF75 * 8 + 3)
#define                                 EP5CONDIS_bit       _BIT_ACCESS(UEP5,3)
// UEP5<EP5HSHK>
extern volatile __bit                   EP5HSHK             __at(0x7BAC);	// @ (0xF75 * 8 + 4)
#define                                 EP5HSHK_bit         _BIT_ACCESS(UEP5,4)
// UEP5<EP5INEN>
extern volatile __bit                   EP5INEN             __at(0x7BA9);	// @ (0xF75 * 8 + 1)
#define                                 EP5INEN_bit         _BIT_ACCESS(UEP5,1)
// UEP5<EP5OUTEN>
extern volatile __bit                   EP5OUTEN            __at(0x7BAA);	// @ (0xF75 * 8 + 2)
#define                                 EP5OUTEN_bit        _BIT_ACCESS(UEP5,2)
// UEP5<EP5STALL>
extern volatile __bit                   EP5STALL            __at(0x7BA8);	// @ (0xF75 * 8 + 0)
#define                                 EP5STALL_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EP6CONDIS>
extern volatile __bit                   EP6CONDIS           __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 EP6CONDIS_bit       _BIT_ACCESS(UEP6,3)
// UEP6<EP6HSHK>
extern volatile __bit                   EP6HSHK             __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 EP6HSHK_bit         _BIT_ACCESS(UEP6,4)
// UEP6<EP6INEN>
extern volatile __bit                   EP6INEN             __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 EP6INEN_bit         _BIT_ACCESS(UEP6,1)
// UEP6<EP6OUTEN>
extern volatile __bit                   EP6OUTEN            __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 EP6OUTEN_bit        _BIT_ACCESS(UEP6,2)
// UEP6<EP6STALL>
extern volatile __bit                   EP6STALL            __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 EP6STALL_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EP7CONDIS>
extern volatile __bit                   EP7CONDIS           __at(0x7BBB);	// @ (0xF77 * 8 + 3)
#define                                 EP7CONDIS_bit       _BIT_ACCESS(UEP7,3)
// UEP7<EP7HSHK>
extern volatile __bit                   EP7HSHK             __at(0x7BBC);	// @ (0xF77 * 8 + 4)
#define                                 EP7HSHK_bit         _BIT_ACCESS(UEP7,4)
// UEP7<EP7INEN>
extern volatile __bit                   EP7INEN             __at(0x7BB9);	// @ (0xF77 * 8 + 1)
#define                                 EP7INEN_bit         _BIT_ACCESS(UEP7,1)
// UEP7<EP7OUTEN>
extern volatile __bit                   EP7OUTEN            __at(0x7BBA);	// @ (0xF77 * 8 + 2)
#define                                 EP7OUTEN_bit        _BIT_ACCESS(UEP7,2)
// UEP7<EP7STALL>
extern volatile __bit                   EP7STALL            __at(0x7BB8);	// @ (0xF77 * 8 + 0)
#define                                 EP7STALL_bit        _BIT_ACCESS(UEP7,0)
// UEP0<EPCONDIS0>
extern volatile __bit                   EPCONDIS0           __at(0x7B83);	// @ (0xF70 * 8 + 3)
#define                                 EPCONDIS0_bit       _BIT_ACCESS(UEP0,3)
// UEP1<EPCONDIS1>
extern volatile __bit                   EPCONDIS1           __at(0x7B8B);	// @ (0xF71 * 8 + 3)
#define                                 EPCONDIS1_bit       _BIT_ACCESS(UEP1,3)
// UEP10<EPCONDIS10>
extern volatile __bit                   EPCONDIS10          __at(0x7BD3);	// @ (0xF7A * 8 + 3)
#define                                 EPCONDIS10_bit      _BIT_ACCESS(UEP10,3)
// UEP11<EPCONDIS11>
extern volatile __bit                   EPCONDIS11          __at(0x7BDB);	// @ (0xF7B * 8 + 3)
#define                                 EPCONDIS11_bit      _BIT_ACCESS(UEP11,3)
// UEP12<EPCONDIS12>
extern volatile __bit                   EPCONDIS12          __at(0x7BE3);	// @ (0xF7C * 8 + 3)
#define                                 EPCONDIS12_bit      _BIT_ACCESS(UEP12,3)
// UEP13<EPCONDIS13>
extern volatile __bit                   EPCONDIS13          __at(0x7BEB);	// @ (0xF7D * 8 + 3)
#define                                 EPCONDIS13_bit      _BIT_ACCESS(UEP13,3)
// UEP14<EPCONDIS14>
extern volatile __bit                   EPCONDIS14          __at(0x7BF3);	// @ (0xF7E * 8 + 3)
#define                                 EPCONDIS14_bit      _BIT_ACCESS(UEP14,3)
// UEP15<EPCONDIS15>
extern volatile __bit                   EPCONDIS15          __at(0x7BFB);	// @ (0xF7F * 8 + 3)
#define                                 EPCONDIS15_bit      _BIT_ACCESS(UEP15,3)
// UEP2<EPCONDIS2>
extern volatile __bit                   EPCONDIS2           __at(0x7B93);	// @ (0xF72 * 8 + 3)
#define                                 EPCONDIS2_bit       _BIT_ACCESS(UEP2,3)
// UEP3<EPCONDIS3>
extern volatile __bit                   EPCONDIS3           __at(0x7B9B);	// @ (0xF73 * 8 + 3)
#define                                 EPCONDIS3_bit       _BIT_ACCESS(UEP3,3)
// UEP4<EPCONDIS4>
extern volatile __bit                   EPCONDIS4           __at(0x7BA3);	// @ (0xF74 * 8 + 3)
#define                                 EPCONDIS4_bit       _BIT_ACCESS(UEP4,3)
// UEP5<EPCONDIS5>
extern volatile __bit                   EPCONDIS5           __at(0x7BAB);	// @ (0xF75 * 8 + 3)
#define                                 EPCONDIS5_bit       _BIT_ACCESS(UEP5,3)
// UEP6<EPCONDIS6>
extern volatile __bit                   EPCONDIS6           __at(0x7BB3);	// @ (0xF76 * 8 + 3)
#define                                 EPCONDIS6_bit       _BIT_ACCESS(UEP6,3)
// UEP7<EPCONDIS7>
extern volatile __bit                   EPCONDIS7           __at(0x7BBB);	// @ (0xF77 * 8 + 3)
#define                                 EPCONDIS7_bit       _BIT_ACCESS(UEP7,3)
// UEP8<EPCONDIS8>
extern volatile __bit                   EPCONDIS8           __at(0x7BC3);	// @ (0xF78 * 8 + 3)
#define                                 EPCONDIS8_bit       _BIT_ACCESS(UEP8,3)
// UEP9<EPCONDIS9>
extern volatile __bit                   EPCONDIS9           __at(0x7BCB);	// @ (0xF79 * 8 + 3)
#define                                 EPCONDIS9_bit       _BIT_ACCESS(UEP9,3)
// UEP0<EPHSHK0>
extern volatile __bit                   EPHSHK0             __at(0x7B84);	// @ (0xF70 * 8 + 4)
#define                                 EPHSHK0_bit         _BIT_ACCESS(UEP0,4)
// UEP1<EPHSHK1>
extern volatile __bit                   EPHSHK1             __at(0x7B8C);	// @ (0xF71 * 8 + 4)
#define                                 EPHSHK1_bit         _BIT_ACCESS(UEP1,4)
// UEP10<EPHSHK10>
extern volatile __bit                   EPHSHK10            __at(0x7BD4);	// @ (0xF7A * 8 + 4)
#define                                 EPHSHK10_bit        _BIT_ACCESS(UEP10,4)
// UEP11<EPHSHK11>
extern volatile __bit                   EPHSHK11            __at(0x7BDC);	// @ (0xF7B * 8 + 4)
#define                                 EPHSHK11_bit        _BIT_ACCESS(UEP11,4)
// UEP12<EPHSHK12>
extern volatile __bit                   EPHSHK12            __at(0x7BE4);	// @ (0xF7C * 8 + 4)
#define                                 EPHSHK12_bit        _BIT_ACCESS(UEP12,4)
// UEP13<EPHSHK13>
extern volatile __bit                   EPHSHK13            __at(0x7BEC);	// @ (0xF7D * 8 + 4)
#define                                 EPHSHK13_bit        _BIT_ACCESS(UEP13,4)
// UEP14<EPHSHK14>
extern volatile __bit                   EPHSHK14            __at(0x7BF4);	// @ (0xF7E * 8 + 4)
#define                                 EPHSHK14_bit        _BIT_ACCESS(UEP14,4)
// UEP15<EPHSHK15>
extern volatile __bit                   EPHSHK15            __at(0x7BFC);	// @ (0xF7F * 8 + 4)
#define                                 EPHSHK15_bit        _BIT_ACCESS(UEP15,4)
// UEP2<EPHSHK2>
extern volatile __bit                   EPHSHK2             __at(0x7B94);	// @ (0xF72 * 8 + 4)
#define                                 EPHSHK2_bit         _BIT_ACCESS(UEP2,4)
// UEP3<EPHSHK3>
extern volatile __bit                   EPHSHK3             __at(0x7B9C);	// @ (0xF73 * 8 + 4)
#define                                 EPHSHK3_bit         _BIT_ACCESS(UEP3,4)
// UEP4<EPHSHK4>
extern volatile __bit                   EPHSHK4             __at(0x7BA4);	// @ (0xF74 * 8 + 4)
#define                                 EPHSHK4_bit         _BIT_ACCESS(UEP4,4)
// UEP5<EPHSHK5>
extern volatile __bit                   EPHSHK5             __at(0x7BAC);	// @ (0xF75 * 8 + 4)
#define                                 EPHSHK5_bit         _BIT_ACCESS(UEP5,4)
// UEP6<EPHSHK6>
extern volatile __bit                   EPHSHK6             __at(0x7BB4);	// @ (0xF76 * 8 + 4)
#define                                 EPHSHK6_bit         _BIT_ACCESS(UEP6,4)
// UEP7<EPHSHK7>
extern volatile __bit                   EPHSHK7             __at(0x7BBC);	// @ (0xF77 * 8 + 4)
#define                                 EPHSHK7_bit         _BIT_ACCESS(UEP7,4)
// UEP8<EPHSHK8>
extern volatile __bit                   EPHSHK8             __at(0x7BC4);	// @ (0xF78 * 8 + 4)
#define                                 EPHSHK8_bit         _BIT_ACCESS(UEP8,4)
// UEP9<EPHSHK9>
extern volatile __bit                   EPHSHK9             __at(0x7BCC);	// @ (0xF79 * 8 + 4)
#define                                 EPHSHK9_bit         _BIT_ACCESS(UEP9,4)
// UEP0<EPINEN0>
extern volatile __bit                   EPINEN0             __at(0x7B81);	// @ (0xF70 * 8 + 1)
#define                                 EPINEN0_bit         _BIT_ACCESS(UEP0,1)
// UEP1<EPINEN1>
extern volatile __bit                   EPINEN1             __at(0x7B89);	// @ (0xF71 * 8 + 1)
#define                                 EPINEN1_bit         _BIT_ACCESS(UEP1,1)
// UEP10<EPINEN10>
extern volatile __bit                   EPINEN10            __at(0x7BD1);	// @ (0xF7A * 8 + 1)
#define                                 EPINEN10_bit        _BIT_ACCESS(UEP10,1)
// UEP11<EPINEN11>
extern volatile __bit                   EPINEN11            __at(0x7BD9);	// @ (0xF7B * 8 + 1)
#define                                 EPINEN11_bit        _BIT_ACCESS(UEP11,1)
// UEP12<EPINEN12>
extern volatile __bit                   EPINEN12            __at(0x7BE1);	// @ (0xF7C * 8 + 1)
#define                                 EPINEN12_bit        _BIT_ACCESS(UEP12,1)
// UEP13<EPINEN13>
extern volatile __bit                   EPINEN13            __at(0x7BE9);	// @ (0xF7D * 8 + 1)
#define                                 EPINEN13_bit        _BIT_ACCESS(UEP13,1)
// UEP14<EPINEN14>
extern volatile __bit                   EPINEN14            __at(0x7BF1);	// @ (0xF7E * 8 + 1)
#define                                 EPINEN14_bit        _BIT_ACCESS(UEP14,1)
// UEP15<EPINEN15>
extern volatile __bit                   EPINEN15            __at(0x7BF9);	// @ (0xF7F * 8 + 1)
#define                                 EPINEN15_bit        _BIT_ACCESS(UEP15,1)
// UEP2<EPINEN2>
extern volatile __bit                   EPINEN2             __at(0x7B91);	// @ (0xF72 * 8 + 1)
#define                                 EPINEN2_bit         _BIT_ACCESS(UEP2,1)
// UEP3<EPINEN3>
extern volatile __bit                   EPINEN3             __at(0x7B99);	// @ (0xF73 * 8 + 1)
#define                                 EPINEN3_bit         _BIT_ACCESS(UEP3,1)
// UEP4<EPINEN4>
extern volatile __bit                   EPINEN4             __at(0x7BA1);	// @ (0xF74 * 8 + 1)
#define                                 EPINEN4_bit         _BIT_ACCESS(UEP4,1)
// UEP5<EPINEN5>
extern volatile __bit                   EPINEN5             __at(0x7BA9);	// @ (0xF75 * 8 + 1)
#define                                 EPINEN5_bit         _BIT_ACCESS(UEP5,1)
// UEP6<EPINEN6>
extern volatile __bit                   EPINEN6             __at(0x7BB1);	// @ (0xF76 * 8 + 1)
#define                                 EPINEN6_bit         _BIT_ACCESS(UEP6,1)
// UEP7<EPINEN7>
extern volatile __bit                   EPINEN7             __at(0x7BB9);	// @ (0xF77 * 8 + 1)
#define                                 EPINEN7_bit         _BIT_ACCESS(UEP7,1)
// UEP8<EPINEN8>
extern volatile __bit                   EPINEN8             __at(0x7BC1);	// @ (0xF78 * 8 + 1)
#define                                 EPINEN8_bit         _BIT_ACCESS(UEP8,1)
// UEP9<EPINEN9>
extern volatile __bit                   EPINEN9             __at(0x7BC9);	// @ (0xF79 * 8 + 1)
#define                                 EPINEN9_bit         _BIT_ACCESS(UEP9,1)
// UEP0<EPOUTEN0>
extern volatile __bit                   EPOUTEN0            __at(0x7B82);	// @ (0xF70 * 8 + 2)
#define                                 EPOUTEN0_bit        _BIT_ACCESS(UEP0,2)
// UEP1<EPOUTEN1>
extern volatile __bit                   EPOUTEN1            __at(0x7B8A);	// @ (0xF71 * 8 + 2)
#define                                 EPOUTEN1_bit        _BIT_ACCESS(UEP1,2)
// UEP10<EPOUTEN10>
extern volatile __bit                   EPOUTEN10           __at(0x7BD2);	// @ (0xF7A * 8 + 2)
#define                                 EPOUTEN10_bit       _BIT_ACCESS(UEP10,2)
// UEP11<EPOUTEN11>
extern volatile __bit                   EPOUTEN11           __at(0x7BDA);	// @ (0xF7B * 8 + 2)
#define                                 EPOUTEN11_bit       _BIT_ACCESS(UEP11,2)
// UEP12<EPOUTEN12>
extern volatile __bit                   EPOUTEN12           __at(0x7BE2);	// @ (0xF7C * 8 + 2)
#define                                 EPOUTEN12_bit       _BIT_ACCESS(UEP12,2)
// UEP13<EPOUTEN13>
extern volatile __bit                   EPOUTEN13           __at(0x7BEA);	// @ (0xF7D * 8 + 2)
#define                                 EPOUTEN13_bit       _BIT_ACCESS(UEP13,2)
// UEP14<EPOUTEN14>
extern volatile __bit                   EPOUTEN14           __at(0x7BF2);	// @ (0xF7E * 8 + 2)
#define                                 EPOUTEN14_bit       _BIT_ACCESS(UEP14,2)
// UEP15<EPOUTEN15>
extern volatile __bit                   EPOUTEN15           __at(0x7BFA);	// @ (0xF7F * 8 + 2)
#define                                 EPOUTEN15_bit       _BIT_ACCESS(UEP15,2)
// UEP2<EPOUTEN2>
extern volatile __bit                   EPOUTEN2            __at(0x7B92);	// @ (0xF72 * 8 + 2)
#define                                 EPOUTEN2_bit        _BIT_ACCESS(UEP2,2)
// UEP3<EPOUTEN3>
extern volatile __bit                   EPOUTEN3            __at(0x7B9A);	// @ (0xF73 * 8 + 2)
#define                                 EPOUTEN3_bit        _BIT_ACCESS(UEP3,2)
// UEP4<EPOUTEN4>
extern volatile __bit                   EPOUTEN4            __at(0x7BA2);	// @ (0xF74 * 8 + 2)
#define                                 EPOUTEN4_bit        _BIT_ACCESS(UEP4,2)
// UEP5<EPOUTEN5>
extern volatile __bit                   EPOUTEN5            __at(0x7BAA);	// @ (0xF75 * 8 + 2)
#define                                 EPOUTEN5_bit        _BIT_ACCESS(UEP5,2)
// UEP6<EPOUTEN6>
extern volatile __bit                   EPOUTEN6            __at(0x7BB2);	// @ (0xF76 * 8 + 2)
#define                                 EPOUTEN6_bit        _BIT_ACCESS(UEP6,2)
// UEP7<EPOUTEN7>
extern volatile __bit                   EPOUTEN7            __at(0x7BBA);	// @ (0xF77 * 8 + 2)
#define                                 EPOUTEN7_bit        _BIT_ACCESS(UEP7,2)
// UEP8<EPOUTEN8>
extern volatile __bit                   EPOUTEN8            __at(0x7BC2);	// @ (0xF78 * 8 + 2)
#define                                 EPOUTEN8_bit        _BIT_ACCESS(UEP8,2)
// UEP9<EPOUTEN9>
extern volatile __bit                   EPOUTEN9            __at(0x7BCA);	// @ (0xF79 * 8 + 2)
#define                                 EPOUTEN9_bit        _BIT_ACCESS(UEP9,2)
// UEP0<EPSTALL0>
extern volatile __bit                   EPSTALL0            __at(0x7B80);	// @ (0xF70 * 8 + 0)
#define                                 EPSTALL0_bit        _BIT_ACCESS(UEP0,0)
// UEP1<EPSTALL1>
extern volatile __bit                   EPSTALL1            __at(0x7B88);	// @ (0xF71 * 8 + 0)
#define                                 EPSTALL1_bit        _BIT_ACCESS(UEP1,0)
// UEP10<EPSTALL10>
extern volatile __bit                   EPSTALL10           __at(0x7BD0);	// @ (0xF7A * 8 + 0)
#define                                 EPSTALL10_bit       _BIT_ACCESS(UEP10,0)
// UEP11<EPSTALL11>
extern volatile __bit                   EPSTALL11           __at(0x7BD8);	// @ (0xF7B * 8 + 0)
#define                                 EPSTALL11_bit       _BIT_ACCESS(UEP11,0)
// UEP12<EPSTALL12>
extern volatile __bit                   EPSTALL12           __at(0x7BE0);	// @ (0xF7C * 8 + 0)
#define                                 EPSTALL12_bit       _BIT_ACCESS(UEP12,0)
// UEP13<EPSTALL13>
extern volatile __bit                   EPSTALL13           __at(0x7BE8);	// @ (0xF7D * 8 + 0)
#define                                 EPSTALL13_bit       _BIT_ACCESS(UEP13,0)
// UEP14<EPSTALL14>
extern volatile __bit                   EPSTALL14           __at(0x7BF0);	// @ (0xF7E * 8 + 0)
#define                                 EPSTALL14_bit       _BIT_ACCESS(UEP14,0)
// UEP15<EPSTALL15>
extern volatile __bit                   EPSTALL15           __at(0x7BF8);	// @ (0xF7F * 8 + 0)
#define                                 EPSTALL15_bit       _BIT_ACCESS(UEP15,0)
// UEP2<EPSTALL2>
extern volatile __bit                   EPSTALL2            __at(0x7B90);	// @ (0xF72 * 8 + 0)
#define                                 EPSTALL2_bit        _BIT_ACCESS(UEP2,0)
// UEP3<EPSTALL3>
extern volatile __bit                   EPSTALL3            __at(0x7B98);	// @ (0xF73 * 8 + 0)
#define                                 EPSTALL3_bit        _BIT_ACCESS(UEP3,0)
// UEP4<EPSTALL4>
extern volatile __bit                   EPSTALL4            __at(0x7BA0);	// @ (0xF74 * 8 + 0)
#define                                 EPSTALL4_bit        _BIT_ACCESS(UEP4,0)
// UEP5<EPSTALL5>
extern volatile __bit                   EPSTALL5            __at(0x7BA8);	// @ (0xF75 * 8 + 0)
#define                                 EPSTALL5_bit        _BIT_ACCESS(UEP5,0)
// UEP6<EPSTALL6>
extern volatile __bit                   EPSTALL6            __at(0x7BB0);	// @ (0xF76 * 8 + 0)
#define                                 EPSTALL6_bit        _BIT_ACCESS(UEP6,0)
// UEP7<EPSTALL7>
extern volatile __bit                   EPSTALL7            __at(0x7BB8);	// @ (0xF77 * 8 + 0)
#define                                 EPSTALL7_bit        _BIT_ACCESS(UEP7,0)
// UEP8<EPSTALL8>
extern volatile __bit                   EPSTALL8            __at(0x7BC0);	// @ (0xF78 * 8 + 0)
#define                                 EPSTALL8_bit        _BIT_ACCESS(UEP8,0)
// UEP9<EPSTALL9>
extern volatile __bit                   EPSTALL9            __at(0x7BC8);	// @ (0xF79 * 8 + 0)
#define                                 EPSTALL9_bit        _BIT_ACCESS(UEP9,0)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0x7D5A);	// @ (0xFAB * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// EECON1<FREE>
extern volatile __bit                   FREE                __at(0x7D34);	// @ (0xFA6 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON1,4)
// UFRML<FRM0>
extern volatile __bit                   FRM0                __at(0x7B30);	// @ (0xF66 * 8 + 0)
#define                                 FRM0_bit            _BIT_ACCESS(UFRML,0)
// UFRML<FRM1>
extern volatile __bit                   FRM1                __at(0x7B31);	// @ (0xF66 * 8 + 1)
#define                                 FRM1_bit            _BIT_ACCESS(UFRML,1)
// UFRMH<FRM10>
extern volatile __bit                   FRM10               __at(0x7B3A);	// @ (0xF67 * 8 + 2)
#define                                 FRM10_bit           _BIT_ACCESS(UFRMH,2)
// UFRML<FRM2>
extern volatile __bit                   FRM2                __at(0x7B32);	// @ (0xF66 * 8 + 2)
#define                                 FRM2_bit            _BIT_ACCESS(UFRML,2)
// UFRML<FRM3>
extern volatile __bit                   FRM3                __at(0x7B33);	// @ (0xF66 * 8 + 3)
#define                                 FRM3_bit            _BIT_ACCESS(UFRML,3)
// UFRML<FRM4>
extern volatile __bit                   FRM4                __at(0x7B34);	// @ (0xF66 * 8 + 4)
#define                                 FRM4_bit            _BIT_ACCESS(UFRML,4)
// UFRML<FRM5>
extern volatile __bit                   FRM5                __at(0x7B35);	// @ (0xF66 * 8 + 5)
#define                                 FRM5_bit            _BIT_ACCESS(UFRML,5)
// UFRML<FRM6>
extern volatile __bit                   FRM6                __at(0x7B36);	// @ (0xF66 * 8 + 6)
#define                                 FRM6_bit            _BIT_ACCESS(UFRML,6)
// UFRML<FRM7>
extern volatile __bit                   FRM7                __at(0x7B37);	// @ (0xF66 * 8 + 7)
#define                                 FRM7_bit            _BIT_ACCESS(UFRML,7)
// UFRMH<FRM8>
extern volatile __bit                   FRM8                __at(0x7B38);	// @ (0xF67 * 8 + 0)
#define                                 FRM8_bit            _BIT_ACCESS(UFRMH,0)
// UFRMH<FRM9>
extern volatile __bit                   FRM9                __at(0x7B39);	// @ (0xF67 * 8 + 1)
#define                                 FRM9_bit            _BIT_ACCESS(UFRMH,1)
// UCFG<FSEN>
extern volatile __bit                   FSEN                __at(0x7B7A);	// @ (0xF6F * 8 + 2)
#define                                 FSEN_bit            _BIT_ACCESS(UCFG,2)
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
// HLVDCON<HLVDEN>
extern volatile __bit                   HLVDEN              __at(0x7E94);	// @ (0xFD2 * 8 + 4)
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
extern volatile __bit                   HLVDL0              __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 HLVDL0_bit          _BIT_ACCESS(HLVDCON,0)
// HLVDCON<HLVDL1>
extern volatile __bit                   HLVDL1              __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 HLVDL1_bit          _BIT_ACCESS(HLVDCON,1)
// HLVDCON<HLVDL2>
extern volatile __bit                   HLVDL2              __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 HLVDL2_bit          _BIT_ACCESS(HLVDCON,2)
// HLVDCON<HLVDL3>
extern volatile __bit                   HLVDL3              __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 HLVDL3_bit          _BIT_ACCESS(HLVDCON,3)
// UIE<IDLEIE>
extern volatile __bit                   IDLEIE              __at(0x7B4C);	// @ (0xF69 * 8 + 4)
#define                                 IDLEIE_bit          _BIT_ACCESS(UIE,4)
// UIR<IDLEIF>
extern volatile __bit                   IDLEIF              __at(0x7B44);	// @ (0xF68 * 8 + 4)
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
// RCON<IPEN>
extern volatile __bit                   IPEN                __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 IPEN_bit            _BIT_ACCESS(RCON,7)
// HLVDCON<IRVST>
extern volatile __bit                   IRVST               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 IRVST_bit           _BIT_ACCESS(HLVDCON,5)
// HLVDCON<IVRST>
extern volatile __bit                   IVRST               __at(0x7E95);	// @ (0xFD2 * 8 + 5)
#define                                 IVRST_bit           _BIT_ACCESS(HLVDCON,5)
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
// LATA<LA4>
extern volatile __bit                   LA4                 __at(0x7C4C);	// @ (0xF89 * 8 + 4)
#define                                 LA4_bit             _BIT_ACCESS(LATA,4)
// LATA<LA5>
extern volatile __bit                   LA5                 __at(0x7C4D);	// @ (0xF89 * 8 + 5)
#define                                 LA5_bit             _BIT_ACCESS(LATA,5)
// LATA<LA6>
extern volatile __bit                   LA6                 __at(0x7C4E);	// @ (0xF89 * 8 + 6)
#define                                 LA6_bit             _BIT_ACCESS(LATA,6)
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
// HLVDCON<LVDEN>
extern volatile __bit                   LVDEN               __at(0x7E94);	// @ (0xFD2 * 8 + 4)
#define                                 LVDEN_bit           _BIT_ACCESS(HLVDCON,4)
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
// HLVDCON<LVDL0>
extern volatile __bit                   LVDL0               __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 LVDL0_bit           _BIT_ACCESS(HLVDCON,0)
// HLVDCON<LVDL1>
extern volatile __bit                   LVDL1               __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 LVDL1_bit           _BIT_ACCESS(HLVDCON,1)
// HLVDCON<LVDL2>
extern volatile __bit                   LVDL2               __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 LVDL2_bit           _BIT_ACCESS(HLVDCON,2)
// HLVDCON<LVDL3>
extern volatile __bit                   LVDL3               __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 LVDL3_bit           _BIT_ACCESS(HLVDCON,3)
// HLVDCON<LVV0>
extern volatile __bit                   LVV0                __at(0x7E90);	// @ (0xFD2 * 8 + 0)
#define                                 LVV0_bit            _BIT_ACCESS(HLVDCON,0)
// HLVDCON<LVV1>
extern volatile __bit                   LVV1                __at(0x7E91);	// @ (0xFD2 * 8 + 1)
#define                                 LVV1_bit            _BIT_ACCESS(HLVDCON,1)
// HLVDCON<LVV2>
extern volatile __bit                   LVV2                __at(0x7E92);	// @ (0xFD2 * 8 + 2)
#define                                 LVV2_bit            _BIT_ACCESS(HLVDCON,2)
// HLVDCON<LVV3>
extern volatile __bit                   LVV3                __at(0x7E93);	// @ (0xFD2 * 8 + 3)
#define                                 LVV3_bit            _BIT_ACCESS(HLVDCON,3)
// STATUS<NEGATIVE>
extern volatile __bit                   NEGATIVE            __at(0x7EC4);	// @ (0xFD8 * 8 + 4)
#define                                 NEGATIVE_bit        _BIT_ACCESS(STATUS,4)
// RCON<NOT_BOR>
extern volatile __bit                   NOT_BOR             __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 NOT_BOR_bit         _BIT_ACCESS(RCON,0)
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 NOT_DONE_bit        _BIT_ACCESS(ADCON0,1)
// RCON<NOT_IPEN>
extern volatile __bit                   NOT_IPEN            __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 NOT_IPEN_bit        _BIT_ACCESS(RCON,7)
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
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// RCON<NOT_TO>
extern volatile __bit                   NOT_TO              __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 NOT_TO_bit          _BIT_ACCESS(RCON,3)
// PORTC<NOT_UOE>
extern volatile __bit                   NOT_UOE             __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 NOT_UOE_bit         _BIT_ACCESS(PORTC,1)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0x7D59);	// @ (0xFAB * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
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
// PORTC<PA1>
extern volatile __bit                   _PA1                 __at(0x7C12);	// @ (0xF82 * 8 + 2)  // Note: Changed by MikroE
#define                                 PA1_bit             _BIT_ACCESS(PORTC,2)
// PORTC<PA2>
extern volatile __bit                   _PA2                 __at(0x7C11);	// @ (0xF82 * 8 + 1)  // Note: Changed by MikroE
#define                                 PA2_bit             _BIT_ACCESS(PORTC,1)
// PORTE<PB2>
extern volatile __bit                   _PB2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)  // Note: Changed by MikroE
#define                                 PB2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<PC2>
extern volatile __bit                   _PC2                 __at(0x7C21);	// @ (0xF84 * 8 + 1)  // Note: Changed by MikroE
#define                                 PC2_bit             _BIT_ACCESS(PORTE,1)
// PORTE<PC3E>
extern volatile __bit                   PC3E                __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 PC3E_bit            _BIT_ACCESS(PORTE,3)
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x7E08);	// @ (0xFC1 * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x7E09);	// @ (0xFC1 * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x7E0A);	// @ (0xFC1 * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// ADCON1<PCFG3>
extern volatile __bit                   PCFG3               __at(0x7E0B);	// @ (0xFC1 * 8 + 3)
#define                                 PCFG3_bit           _BIT_ACCESS(ADCON1,3)
// RCON<PD>
extern volatile __bit                   PD                  __at(0x7E82);	// @ (0xFD0 * 8 + 2)
#define                                 PD_bit              _BIT_ACCESS(RCON,2)
// PORTE<PD2>
extern volatile __bit                   _PD2                 __at(0x7C20);	// @ (0xF84 * 8 + 0)  // Note: Changed by MikroE
#define                                 PD2_bit             _BIT_ACCESS(PORTE,0)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// INTCON<PEIE_GIEL>
extern volatile __bit                   PEIE_GIEL           __at(0x7F96);	// @ (0xFF2 * 8 + 6)
#define                                 PEIE_GIEL_bit       _BIT_ACCESS(INTCON,6)
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
extern volatile __bit                   PIDEE               __at(0x7B58);	// @ (0xF6B * 8 + 0)
#define                                 PIDEE_bit           _BIT_ACCESS(UEIE,0)
// UEIR<PIDEF>
extern volatile __bit                   PIDEF               __at(0x7B50);	// @ (0xF6A * 8 + 0)
#define                                 PIDEF_bit           _BIT_ACCESS(UEIR,0)
// UCON<PKTDIS>
extern volatile __bit                   PKTDIS              __at(0x7B6C);	// @ (0xF6D * 8 + 4)
#define                                 PKTDIS_bit          _BIT_ACCESS(UCON,4)
// RCON<POR>
extern volatile __bit                   POR                 __at(0x7E81);	// @ (0xFD0 * 8 + 1)
#define                                 POR_bit             _BIT_ACCESS(RCON,1)
// UCFG<PPB0>
extern volatile __bit                   PPB0                __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 PPB0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<PPB1>
extern volatile __bit                   PPB1                __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 PPB1_bit            _BIT_ACCESS(UCFG,1)
// USTAT<PPBI>
extern volatile __bit                   PPBI                __at(0x7B61);	// @ (0xF6C * 8 + 1)
#define                                 PPBI_bit            _BIT_ACCESS(USTAT,1)
// UCON<PPBRST>
extern volatile __bit                   PPBRST              __at(0x7B6E);	// @ (0xF6D * 8 + 6)
#define                                 PPBRST_bit          _BIT_ACCESS(UCON,6)
// T0CON<PSA>
extern volatile __bit                   PSA                 __at(0x7EAB);	// @ (0xFD5 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(T0CON,3)
// PORTA<RA0>
extern volatile __bit _DEPRECATED       RA0                 __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit _DEPRECATED       RA1                 __at(0x7C01);	// @ (0xF80 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit _DEPRECATED       RA2                 __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit _DEPRECATED       RA3                 __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit _DEPRECATED       RA4                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit _DEPRECATED       RA5                 __at(0x7C05);	// @ (0xF80 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// PORTA<RA6>
extern volatile __bit _DEPRECATED       RA6                 __at(0x7C06);	// @ (0xF80 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTA,6)
// PORTB<RB0>
extern volatile __bit _DEPRECATED       RB0                 __at(0x7C08);	// @ (0xF81 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit _DEPRECATED       RB1                 __at(0x7C09);	// @ (0xF81 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit _DEPRECATED       RB2                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit _DEPRECATED       RB3                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
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
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x7C14);	// @ (0xF82 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x7C15);	// @ (0xF82 * 8 + 5)
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
// BAUDCON<RCMT>
extern volatile __bit                   RCMT                __at(0x7DC6);	// @ (0xFB8 * 8 + 6)
#define                                 RCMT_bit            _BIT_ACCESS(BAUDCON,6)
// PORTA<RCV>
extern volatile __bit                   RCV                 __at(0x7C04);	// @ (0xF80 * 8 + 4)
#define                                 RCV_bit             _BIT_ACCESS(PORTA,4)
// PORTD<RD0>
extern volatile __bit _DEPRECATED       RD0                 __at(0x7C18);	// @ (0xF83 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit _DEPRECATED       RD1                 __at(0x7C19);	// @ (0xF83 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// T1CON<RD16>
extern volatile __bit                   RD16                __at(0x7E6F);	// @ (0xFCD * 8 + 7)
#define                                 RD16_bit            _BIT_ACCESS(T1CON,7)
// PORTD<RD2>
extern volatile __bit _DEPRECATED       RD2                 __at(0x7C1A);	// @ (0xF83 * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit _DEPRECATED       RD3                 __at(0x7C1B);	// @ (0xF83 * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit _DEPRECATED       RD4                 __at(0x7C1C);	// @ (0xF83 * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit _DEPRECATED       RD5                 __at(0x7C1D);	// @ (0xF83 * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit _DEPRECATED       RD6                 __at(0x7C1E);	// @ (0xF83 * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit _DEPRECATED       RD7                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RDE>
extern volatile __bit                   RDE                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RDE_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE0>
extern volatile __bit _DEPRECATED       RE0                 __at(0x7C20);	// @ (0xF84 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit _DEPRECATED       RE1                 __at(0x7C21);	// @ (0xF84 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit _DEPRECATED       RE2                 __at(0x7C22);	// @ (0xF84 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// PORTE<RE3>
extern volatile __bit                   RE3                 __at(0x7C23);	// @ (0xF84 * 8 + 3)
#define                                 RE3_bit             _BIT_ACCESS(PORTE,3)
// UCON<RESUME>
extern volatile __bit                   RESUME              __at(0x7B6A);	// @ (0xF6D * 8 + 2)
#define                                 RESUME_bit          _BIT_ACCESS(UCON,2)
// RCON<RI>
extern volatile __bit                   RI                  __at(0x7E84);	// @ (0xFD0 * 8 + 4)
#define                                 RI_bit              _BIT_ACCESS(RCON,4)
// PORTC<RX>
extern volatile __bit                   RX                  __at(0x7C17);	// @ (0xF82 * 8 + 7)
#define                                 RX_bit              _BIT_ACCESS(PORTC,7)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0x7D5E);	// @ (0xFAB * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0x7D58);	// @ (0xFAB * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// BAUDCON<RXCKP>
extern volatile __bit                   RXCKP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 RXCKP_bit           _BIT_ACCESS(BAUDCON,5)
// BAUDCON<RXDTP>
extern volatile __bit                   RXDTP               __at(0x7DC5);	// @ (0xFB8 * 8 + 5)
#define                                 RXDTP_bit           _BIT_ACCESS(BAUDCON,5)
// RCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x7E86);	// @ (0xFD0 * 8 + 6)
#define                                 SBOREN_bit          _BIT_ACCESS(RCON,6)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// OSCCON<SCS0>
extern volatile __bit                   SCS0                __at(0x7E98);	// @ (0xFD3 * 8 + 0)
#define                                 SCS0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<SCS1>
extern volatile __bit                   SCS1                __at(0x7E99);	// @ (0xFD3 * 8 + 1)
#define                                 SCS1_bit            _BIT_ACCESS(OSCCON,1)
// UCON<SE0>
extern volatile __bit                   SE0                 __at(0x7B6D);	// @ (0xF6D * 8 + 5)
#define                                 SE0_bit             _BIT_ACCESS(UCON,5)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// TXSTA<SENDB1>
extern volatile __bit                   SENDB1              __at(0x7D63);	// @ (0xFAC * 8 + 3)
#define                                 SENDB1_bit          _BIT_ACCESS(TXSTA,3)
// UIE<SOFIE>
extern volatile __bit                   SOFIE               __at(0x7B4E);	// @ (0xF69 * 8 + 6)
#define                                 SOFIE_bit           _BIT_ACCESS(UIE,6)
// UIR<SOFIF>
extern volatile __bit                   SOFIF               __at(0x7B46);	// @ (0xF68 * 8 + 6)
#define                                 SOFIF_bit           _BIT_ACCESS(UIR,6)
// T1CON<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x7E6B);	// @ (0xFCD * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(T1CON,3)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0x7D5F);	// @ (0xFAB * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// RCSTA<SRENA>
extern volatile __bit                   SRENA               __at(0x7D5D);	// @ (0xFAB * 8 + 5)
#define                                 SRENA_bit           _BIT_ACCESS(RCSTA,5)
// PORTD<SS2>
extern volatile __bit                   SS2                 __at(0x7C1F);	// @ (0xF83 * 8 + 7)
#define                                 SS2_bit             _BIT_ACCESS(PORTD,7)
// UIE<STALLIE>
extern volatile __bit                   STALLIE             __at(0x7B4D);	// @ (0xF69 * 8 + 5)
#define                                 STALLIE_bit         _BIT_ACCESS(UIE,5)
// UIR<STALLIF>
extern volatile __bit                   STALLIF             __at(0x7B45);	// @ (0xF68 * 8 + 5)
#define                                 STALLIF_bit         _BIT_ACCESS(UIR,5)
// STKPTR<STKFUL>
extern volatile __bit                   STKFUL              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKFUL_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKOVF>
extern volatile __bit                   STKOVF              __at(0x7FE7);	// @ (0xFFC * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(STKPTR,7)
// STKPTR<STKPTR0>
extern volatile __bit                   STKPTR0             __at(0x7FE0);	// @ (0xFFC * 8 + 0)
#define                                 STKPTR0_bit         _BIT_ACCESS(STKPTR,0)
// STKPTR<STKPTR1>
extern volatile __bit                   STKPTR1             __at(0x7FE1);	// @ (0xFFC * 8 + 1)
#define                                 STKPTR1_bit         _BIT_ACCESS(STKPTR,1)
// STKPTR<STKPTR2>
extern volatile __bit                   STKPTR2             __at(0x7FE2);	// @ (0xFFC * 8 + 2)
#define                                 STKPTR2_bit         _BIT_ACCESS(STKPTR,2)
// STKPTR<STKPTR3>
extern volatile __bit                   STKPTR3             __at(0x7FE3);	// @ (0xFFC * 8 + 3)
#define                                 STKPTR3_bit         _BIT_ACCESS(STKPTR,3)
// STKPTR<STKPTR4>
extern volatile __bit                   STKPTR4             __at(0x7FE4);	// @ (0xFFC * 8 + 4)
#define                                 STKPTR4_bit         _BIT_ACCESS(STKPTR,4)
// STKPTR<STKUNF>
extern volatile __bit                   STKUNF              __at(0x7FE6);	// @ (0xFFC * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(STKPTR,6)
// UCON<SUSPND>
extern volatile __bit                   SUSPND              __at(0x7B69);	// @ (0xF6D * 8 + 1)
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
// PORTC<T1CKI>
extern volatile __bit                   T1CKI               __at(0x7C10);	// @ (0xF82 * 8 + 0)
#define                                 T1CKI_bit           _BIT_ACCESS(PORTC,0)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x7E6C);	// @ (0xFCD * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x7E6D);	// @ (0xFCD * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
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
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x7C94);	// @ (0xF92 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x7C95);	// @ (0xF92 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x7C96);	// @ (0xF92 * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISA,6)
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
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// TXSTA<TRMT1>
extern volatile __bit                   TRMT1               __at(0x7D61);	// @ (0xFAC * 8 + 1)
#define                                 TRMT1_bit           _BIT_ACCESS(TXSTA,1)
// UIE<TRNIE>
extern volatile __bit                   TRNIE               __at(0x7B4B);	// @ (0xF69 * 8 + 3)
#define                                 TRNIE_bit           _BIT_ACCESS(UIE,3)
// UIR<TRNIF>
extern volatile __bit                   TRNIF               __at(0x7B43);	// @ (0xF68 * 8 + 3)
#define                                 TRNIF_bit           _BIT_ACCESS(UIR,3)
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
// BAUDCON<TXCKP>
extern volatile __bit                   TXCKP               __at(0x7DC4);	// @ (0xFB8 * 8 + 4)
#define                                 TXCKP_bit           _BIT_ACCESS(BAUDCON,4)
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
// UIE<UERRIE>
extern volatile __bit                   UERRIE              __at(0x7B49);	// @ (0xF69 * 8 + 1)
#define                                 UERRIE_bit          _BIT_ACCESS(UIE,1)
// UIR<UERRIF>
extern volatile __bit                   UERRIF              __at(0x7B41);	// @ (0xF68 * 8 + 1)
#define                                 UERRIF_bit          _BIT_ACCESS(UIR,1)
// PORTA<ULPWUIN>
extern volatile __bit                   ULPWUIN             __at(0x7C00);	// @ (0xF80 * 8 + 0)
#define                                 ULPWUIN_bit         _BIT_ACCESS(PORTA,0)
// PORTC<UOE>
extern volatile __bit                   UOE                 __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 UOE_bit             _BIT_ACCESS(PORTC,1)
// UCFG<UOEMON>
extern volatile __bit                   UOEMON              __at(0x7B7E);	// @ (0xF6F * 8 + 6)
#define                                 UOEMON_bit          _BIT_ACCESS(UCFG,6)
// UCFG<UPP0>
extern volatile __bit                   UPP0                __at(0x7B78);	// @ (0xF6F * 8 + 0)
#define                                 UPP0_bit            _BIT_ACCESS(UCFG,0)
// UCFG<UPP1>
extern volatile __bit                   UPP1                __at(0x7B79);	// @ (0xF6F * 8 + 1)
#define                                 UPP1_bit            _BIT_ACCESS(UCFG,1)
// UCFG<UPUEN>
extern volatile __bit                   UPUEN               __at(0x7B7C);	// @ (0xF6F * 8 + 4)
#define                                 UPUEN_bit           _BIT_ACCESS(UCFG,4)
// UIE<URSTIE>
extern volatile __bit                   URSTIE              __at(0x7B48);	// @ (0xF69 * 8 + 0)
#define                                 URSTIE_bit          _BIT_ACCESS(UIE,0)
// UIR<URSTIF>
extern volatile __bit                   URSTIF              __at(0x7B40);	// @ (0xF68 * 8 + 0)
#define                                 URSTIF_bit          _BIT_ACCESS(UIR,0)
// UCON<USBEN>
extern volatile __bit                   USBEN               __at(0x7B6B);	// @ (0xF6D * 8 + 3)
#define                                 USBEN_bit           _BIT_ACCESS(UCON,3)
// PIE2<USBIE>
extern volatile __bit                   USBIE               __at(0x7D05);	// @ (0xFA0 * 8 + 5)
#define                                 USBIE_bit           _BIT_ACCESS(PIE2,5)
// PIR2<USBIF>
extern volatile __bit                   USBIF               __at(0x7D0D);	// @ (0xFA1 * 8 + 5)
#define                                 USBIF_bit           _BIT_ACCESS(PIR2,5)
// IPR2<USBIP>
extern volatile __bit                   USBIP               __at(0x7D15);	// @ (0xFA2 * 8 + 5)
#define                                 USBIP_bit           _BIT_ACCESS(IPR2,5)
// UCFG<UTEYE>
extern volatile __bit                   UTEYE               __at(0x7B7F);	// @ (0xF6F * 8 + 7)
#define                                 UTEYE_bit           _BIT_ACCESS(UCFG,7)
// UCFG<UTRDIS>
extern volatile __bit                   UTRDIS              __at(0x7B7B);	// @ (0xF6F * 8 + 3)
#define                                 UTRDIS_bit          _BIT_ACCESS(UCFG,3)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG01>
extern volatile __bit                   VCFG01              __at(0x7E0C);	// @ (0xFC1 * 8 + 4)
#define                                 VCFG01_bit          _BIT_ACCESS(ADCON1,4)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<VCFG11>
extern volatile __bit                   VCFG11              __at(0x7E0D);	// @ (0xFC1 * 8 + 5)
#define                                 VCFG11_bit          _BIT_ACCESS(ADCON1,5)
// HLVDCON<VDIRMAG>
extern volatile __bit                   VDIRMAG             __at(0x7E97);	// @ (0xFD2 * 8 + 7)
#define                                 VDIRMAG_bit         _BIT_ACCESS(HLVDCON,7)
// PORTB<VMO>
extern volatile __bit                   VMO                 __at(0x7C0A);	// @ (0xF81 * 8 + 2)
#define                                 VMO_bit             _BIT_ACCESS(PORTB,2)
// PORTB<VPO>
extern volatile __bit                   VPO                 __at(0x7C0B);	// @ (0xF81 * 8 + 3)
#define                                 VPO_bit             _BIT_ACCESS(PORTB,3)
// PORTA<VREFM>
extern volatile __bit                   VREFM               __at(0x7C02);	// @ (0xF80 * 8 + 2)
#define                                 VREFM_bit           _BIT_ACCESS(PORTA,2)
// PORTA<VREFP>
extern volatile __bit                   VREFP               __at(0x7C03);	// @ (0xF80 * 8 + 3)
#define                                 VREFP_bit           _BIT_ACCESS(PORTA,3)
// BAUDCON<W4E>
extern volatile __bit                   W4E                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 W4E_bit             _BIT_ACCESS(BAUDCON,1)
// PR2<WAIT0>
extern volatile __bit                   WAIT0               __at(0x7E5C);	// @ (0xFCB * 8 + 4)
#define                                 WAIT0_bit           _BIT_ACCESS(_PR2,4)  // Note: Changed by MikroE
// PR2<WAIT1>
extern volatile __bit                   WAIT1               __at(0x7E5D);	// @ (0xFCB * 8 + 5)
#define                                 WAIT1_bit           _BIT_ACCESS(_PR2,5)  // Note: Changed by MikroE
// PR2<WM0>
extern volatile __bit                   WM0                 __at(0x7E58);	// @ (0xFCB * 8 + 0)
#define                                 WM0_bit             _BIT_ACCESS(_PR2,0)  // Note: Changed by MikroE
// PR2<WM1>
extern volatile __bit                   WM1                 __at(0x7E59);	// @ (0xFCB * 8 + 1)
#define                                 WM1_bit             _BIT_ACCESS(_PR2,1)  // Note: Changed by MikroE
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
// BAUDCON<WUE>
extern volatile __bit                   WUE                 __at(0x7DC1);	// @ (0xFB8 * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x7EC2);	// @ (0xFD8 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// RCON<nBOR>
extern volatile __bit                   nBOR                __at(0x7E80);	// @ (0xFD0 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(RCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x7E11);	// @ (0xFC2 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// RCON<nIPEN>
extern volatile __bit                   nIPEN               __at(0x7E87);	// @ (0xFD0 * 8 + 7)
#define                                 nIPEN_bit           _BIT_ACCESS(RCON,7)
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
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x7E6A);	// @ (0xFCD * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// RCON<nTO>
extern volatile __bit                   nTO                 __at(0x7E83);	// @ (0xFD0 * 8 + 3)
#define                                 nTO_bit             _BIT_ACCESS(RCON,3)
// PORTC<nUOE>
extern volatile __bit                   nUOE                __at(0x7C11);	// @ (0xF82 * 8 + 1)
#define                                 nUOE_bit            _BIT_ACCESS(PORTC,1)

#endif // _PIC18F4450_H_
