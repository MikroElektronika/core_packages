/* G23 vectors adapted from the supplied Renesas e2 studio project.
 * Copyright (c) 2021 - 2026 Renesas Electronics Corporation and/or its affiliates
 * SPDX-License-Identifier: BSD-3-Clause
 * The 32 MHz option bytes and security ID match the supplied project.
 * Strong user definitions of INT_* replace the default handlers.
 */
#include <stdint.h>
extern void PowerON_Reset(void);
#ifndef NECTO_HOST_SYNTAX_CHECK
#define RL78_ISR __attribute__((interrupt))
#else
#define RL78_ISR
#endif
void Default_Handler(void) RL78_ISR;
void Default_Handler(void) { for (;;) { ; } }
void INT_WDTI(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_LVI(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P4(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P5(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SR2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM11H(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ELCL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SMSE(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM00(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM01H(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SR1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM03H(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_IICA0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SR0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM01(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM02(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM03(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_AD(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_RTC(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ITL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_KR(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SR3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM13(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM04(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM05(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM06(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM07(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P6(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P7(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P8(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P9(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_FL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P10(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P11(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_URE0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_URE1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM12(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM13H(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSUWR(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_IICA1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSURD(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSUFN(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_REMC(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM14(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM15(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM16(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM17(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_DUMMY(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_BRK_I(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
const unsigned char Option_Bytes[] __attribute__((section(".option_bytes"),used)) = {0xEF,0x3A,0xE8,0x84};
const unsigned char Security_Id[10] __attribute__((section(".security_id"),used)) = {0};
const unsigned char Debug_Monitor[10] __attribute__((section(".debug_monitor"),used)) =
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
const void __near *HardwareVectors[] __attribute__((section(".vec"),used)) =
    {PowerON_Reset, (void *)0xFFFF};
const void __near *Vectors[] __attribute__((section(".vects"),used)) = {
    INT_WDTI, /* 0x04 */
    INT_LVI, /* 0x06 */
    INT_P0, /* 0x08 */
    INT_P1, /* 0x0A */
    INT_P2, /* 0x0C */
    INT_P3, /* 0x0E */
    INT_P4, /* 0x10 */
    INT_P5, /* 0x12 */
    INT_ST2, /* 0x14 */
    INT_SR2, /* 0x16 */
    INT_TM11H, /* 0x18 */
    INT_ELCL, /* 0x1A */
    INT_SMSE, /* 0x1C */
    INT_ST0, /* 0x1E */
    INT_TM00, /* 0x20 */
    INT_TM01H, /* 0x22 */
    INT_ST1, /* 0x24 */
    INT_SR1, /* 0x26 */
    INT_TM03H, /* 0x28 */
    INT_IICA0, /* 0x2A */
    INT_SR0, /* 0x2C */
    INT_TM01, /* 0x2E */
    INT_TM02, /* 0x30 */
    INT_TM03, /* 0x32 */
    INT_AD, /* 0x34 */
    INT_RTC, /* 0x36 */
    INT_ITL, /* 0x38 */
    INT_KR, /* 0x3A */
    INT_ST3, /* 0x3C */
    INT_SR3, /* 0x3E */
    INT_TM13, /* 0x40 */
    INT_TM04, /* 0x42 */
    INT_TM05, /* 0x44 */
    INT_TM06, /* 0x46 */
    INT_TM07, /* 0x48 */
    INT_P6, /* 0x4A */
    INT_P7, /* 0x4C */
    INT_P8, /* 0x4E */
    INT_P9, /* 0x50 */
    INT_FL, /* 0x52 */
    INT_P10, /* 0x54 */
    INT_P11, /* 0x56 */
    INT_URE0, /* 0x58 */
    INT_URE1, /* 0x5A */
    INT_TM12, /* 0x5C */
    INT_TM13H, /* 0x5E */
    INT_CTSUWR, /* 0x60 */
    INT_IICA1, /* 0x62 */
    INT_CTSURD, /* 0x64 */
    INT_CTSUFN, /* 0x66 */
    INT_REMC, /* 0x68 */
    INT_UT0, /* 0x6A */
    INT_UR0, /* 0x6C */
    INT_UT1, /* 0x6E */
    INT_UR1, /* 0x70 */
    INT_TM14, /* 0x72 */
    INT_TM15, /* 0x74 */
    INT_TM16, /* 0x76 */
    INT_TM17, /* 0x78 */
    INT_DUMMY, /* 0x7A */
    INT_DUMMY, /* 0x7C */
    INT_BRK_I, /* 0x7E */
};
