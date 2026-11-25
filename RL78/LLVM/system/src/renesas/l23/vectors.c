/*
 * Minimal RL78/L23 vector/configuration image for MikroE core.
 *
 * Provides the sections expected by the L23 linker scripts:
 *   .vec           0x00000-0x00003
 *   .vects         0x00004-0x0007F
 *   .option_bytes  0x000C0-0x000C3
 *   .security_id   0x000C4-0x000CD
 *   .debug_monitor 0x000CE-0x000D7
 *
 * Option byte values match Renesas' FPB-RL78L23 R7F100LPL reference project.
 *
 * Every vector points to a weak INT_* handler aliased to Default_Handler,
 * a strong user/SDK definition of INT_* replaces the default one.
 * Vectors shared by several sources are named after one of them, the
 * other sources are listed next to the table entry.
 */

extern void PowerON_Reset(void);

#ifndef NECTO_HOST_SYNTAX_CHECK
#define RL78_ISR __attribute__((interrupt))
#else
#define RL78_ISR
#endif

void Default_Handler(void) RL78_ISR;

void Default_Handler(void)
{
    for (;;)
    {
        ;
    }
}

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
void INT_SRE2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ELCL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SMSE(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM00(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SRE0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ST1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SR1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SRE1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
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
void INT_IT00(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM04(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM05(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM06(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TM07(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P6(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P7(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_IT10(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_OSDC(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_FL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_URE0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_URE1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_URE2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_SRE3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSUWR(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_IICA1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSURD(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CTSUFN(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRJ0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UT3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_UR3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKB0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_EXSD(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_BRK_I(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));

const unsigned char Option_Bytes[]
    __attribute__((section(".option_bytes"), used)) =
{
    0xEFU, 0x3AU, 0xE8U, 0x84U
};

const unsigned char Security_Id[]
    __attribute__((section(".security_id"), used)) =
{
    0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
    0x00U, 0x00U, 0x00U, 0x00U, 0x00U
};

const unsigned char Debug_Monitor[]
    __attribute__((section(".debug_monitor"), used)) =
{
    0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU,
    0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU
};

const void __near *HardwareVectors[]
    __attribute__((section(".vec"), used)) =
{
    PowerON_Reset,
    (void *) 0xFFFFU
};

/* RL78/L23 interrupt vector addresses 0x0004 through 0x007E, 2 bytes each. */
const void __near *Vectors[]
    __attribute__((section(".vects"), used)) =
{
    INT_WDTI, /* 0x04 */
    INT_LVI, /* 0x06 */
    INT_P0, /* 0x08 */
    INT_P1, /* 0x0A */
    INT_P2, /* 0x0C */
    INT_P3, /* 0x0E */
    INT_P4, /* 0x10 */
    INT_P5, /* 0x12 */
    INT_ST2, /* 0x14 INTCSI20/INTIIC20/INTIT01 */
    INT_SR2, /* 0x16 INTCSI21/INTIIC21/INTIT41 */
    INT_SRE2, /* 0x18 INTIT20 */
    INT_ELCL, /* 0x1A */
    INT_SMSE, /* 0x1C */
    INT_ST0, /* 0x1E INTCSI00/INTIIC00/INTIT21 */
    INT_TM00, /* 0x20 */
    INT_SRE0, /* 0x22 INTIT30/INTTM01H */
    INT_ST1, /* 0x24 INTCSI10/INTIIC10/INTIT11 */
    INT_SR1, /* 0x26 INTCSI11/INTIIC11/INTIT61 */
    INT_SRE1, /* 0x28 INTIT40/INTTM03H */
    INT_IICA0, /* 0x2A */
    INT_SR0, /* 0x2C INTCSI01/INTIIC01/INTIT51 */
    INT_TM01, /* 0x2E */
    INT_TM02, /* 0x30 */
    INT_TM03, /* 0x32 */
    INT_AD, /* 0x34 */
    INT_RTC, /* 0x36 */
    INT_ITL, /* 0x38 */
    INT_KR, /* 0x3A */
    INT_ST3, /* 0x3C INTCSI30/INTIIC30/INTIT31 */
    INT_SR3, /* 0x3E INTCSI31/INTIIC31/INTIT71 */
    INT_IT00, /* 0x40 */
    INT_TM04, /* 0x42 */
    INT_TM05, /* 0x44 INTURE3 */
    INT_TM06, /* 0x46 INTIT50 */
    INT_TM07, /* 0x48 INTIT60 */
    INT_P6, /* 0x4A */
    INT_P7, /* 0x4C */
    INT_IT10, /* 0x4E */
    INT_OSDC, /* 0x50 */
    INT_FL, /* 0x52 */
    INT_CMP0, /* 0x54 */
    INT_CMP1, /* 0x56 */
    INT_URE0, /* 0x58 INTIT70 */
    INT_URE1, /* 0x5A INTTMKB1 */
    INT_URE2, /* 0x5C INTTMKB2 */
    INT_SRE3, /* 0x5E INTTRJ1 */
    INT_CTSUWR, /* 0x60 */
    INT_IICA1, /* 0x62 */
    INT_CTSURD, /* 0x64 */
    INT_CTSUFN, /* 0x66 */
    INT_TRJ0, /* 0x68 */
    INT_UT0, /* 0x6A */
    INT_UR0, /* 0x6C */
    INT_UT1, /* 0x6E */
    INT_UR1, /* 0x70 */
    INT_UT2, /* 0x72 */
    INT_UR2, /* 0x74 */
    INT_UT3, /* 0x76 */
    INT_UR3, /* 0x78 */
    INT_TMKB0, /* 0x7A INTTM3G */
    INT_EXSD, /* 0x7C INTTM5MG */
    INT_BRK_I  /* 0x7E */
};
