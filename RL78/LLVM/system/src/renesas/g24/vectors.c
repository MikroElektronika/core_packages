/*
 * Minimal RL78/G24 vector/configuration image for MikroE core.
 *
 * Provides the sections expected by the G24 linker scripts:
 *   .vec           0x00000-0x00003
 *   .vects         0x00004-0x0007F
 *   .option_bytes  0x000C0-0x000C3
 *   .security_id   0x000C4-0x000CD
 *   .debug_monitor 0x000CE-0x000D7
 *
 * Option byte values match Renesas' FPB-RL78G24 R7F101GLG reference project.
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
void INT_FAAE(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TIMEC0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
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
void INT_AD0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_RTC(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_ITL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_KR(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRJ0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRD0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRD1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRG(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TRX(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P20(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P21(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P6(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P7(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P8(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_P9(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_FL(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_FAATRAP(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_CMP3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKB0(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKB1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKB2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_GCR(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_FED(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTR00(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTP00(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTR01(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTP01(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTR20(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTP20(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTR21(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TMKBSTP21(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TIMEC1(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_TIMEC2(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_AD3(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));
void INT_BRK_I(void) RL78_ISR __attribute__((weak, alias("Default_Handler")));

const unsigned char Option_Bytes[]
    __attribute__((section(".option_bytes"), used)) =
{
    0xEFU, 0xFFU, 0xF0U, 0x85U
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

/* RL78/G24 interrupt vector addresses 0x0004 through 0x007E, 2 bytes each. */
const void __near *Vectors[]
    __attribute__((section(".vects"), used)) =
{
    INT_WDTI, /* 0x04 */
    INT_LVI, /* 0x06 */
    INT_P0, /* 0x08 */
    INT_P1, /* 0x0A INTAD1 */
    INT_P2, /* 0x0C INTAD2 */
    INT_P3, /* 0x0E */
    INT_P4, /* 0x10 */
    INT_P5, /* 0x12 */
    INT_ST2, /* 0x14 INTCSI20/INTIIC20 */
    INT_SR2, /* 0x16 INTCSI21/INTIIC21 */
    INT_SRE2, /* 0x18 */
    INT_FAAE, /* 0x1A */
    INT_TIMEC0, /* 0x1C */
    INT_ST0, /* 0x1E INTCSI00/INTIIC00 */
    INT_TM00, /* 0x20 */
    INT_SRE0, /* 0x22 INTTM01H */
    INT_ST1, /* 0x24 INTCSI10/INTIIC10 */
    INT_SR1, /* 0x26 INTCSI11/INTIIC11 */
    INT_SRE1, /* 0x28 INTTM03H */
    INT_IICA0, /* 0x2A */
    INT_SR0, /* 0x2C INTCSI01/INTIIC01 */
    INT_TM01, /* 0x2E */
    INT_TM02, /* 0x30 */
    INT_TM03, /* 0x32 */
    INT_AD0, /* 0x34 */
    INT_RTC, /* 0x36 */
    INT_ITL, /* 0x38 */
    INT_KR, /* 0x3A */
    INT_TRJ0, /* 0x3C INTTD */
    INT_TRD0, /* 0x3E */
    INT_TRD1, /* 0x40 */
    INT_TRG, /* 0x42 INTRD */
    INT_TRX, /* 0x44 INTBPD/INTCLD/INTED */
    INT_P20, /* 0x46 */
    INT_P21, /* 0x48 */
    INT_P6, /* 0x4A INTTMKBSTR10 */
    INT_P7, /* 0x4C INTTMKBSTP10 */
    INT_P8, /* 0x4E INTTMKBSTR11 */
    INT_P9, /* 0x50 INTTMKBSTP11 */
    INT_FL, /* 0x52 */
    INT_CMP0, /* 0x54 INTP10 */
    INT_CMP1, /* 0x56 INTP11 */
    INT_FAATRAP, /* 0x58 */
    INT_CMP2, /* 0x5A */
    INT_CMP3, /* 0x5C */
    INT_TMKB0, /* 0x5E */
    INT_TMKB1, /* 0x60 */
    INT_TMKB2, /* 0x62 */
    INT_GCR, /* 0x64 INTSDD */
    INT_FED, /* 0x66 INTPMC */
    INT_TMKBSTR00, /* 0x68 */
    INT_TMKBSTP00, /* 0x6A */
    INT_TMKBSTR01, /* 0x6C */
    INT_TMKBSTP01, /* 0x6E */
    INT_TMKBSTR20, /* 0x70 */
    INT_TMKBSTP20, /* 0x72 */
    INT_TMKBSTR21, /* 0x74 */
    INT_TMKBSTP21, /* 0x76 */
    INT_TIMEC1, /* 0x78 */
    INT_TIMEC2, /* 0x7A */
    INT_AD3, /* 0x7C */
    INT_BRK_I  /* 0x7E */
};
