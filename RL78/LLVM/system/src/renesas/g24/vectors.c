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
 */

extern void PowerON_Reset(void);

static void Default_Handler(void) __attribute__((interrupt));

static void Default_Handler(void)
{
    for (;;)
    {
        ;
    }
}

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
    Default_Handler, /* 0x04 */
    Default_Handler, /* 0x06 */
    Default_Handler, /* 0x08 */
    Default_Handler, /* 0x0A */
    Default_Handler, /* 0x0C */
    Default_Handler, /* 0x0E */
    Default_Handler, /* 0x10 */
    Default_Handler, /* 0x12 */
    Default_Handler, /* 0x14 */
    Default_Handler, /* 0x16 */
    Default_Handler, /* 0x18 */
    Default_Handler, /* 0x1A */
    Default_Handler, /* 0x1C */
    Default_Handler, /* 0x1E */
    Default_Handler, /* 0x20 */
    Default_Handler, /* 0x22 */
    Default_Handler, /* 0x24 */
    Default_Handler, /* 0x26 */
    Default_Handler, /* 0x28 */
    Default_Handler, /* 0x2A */
    Default_Handler, /* 0x2C */
    Default_Handler, /* 0x2E */
    Default_Handler, /* 0x30 */
    Default_Handler, /* 0x32 */
    Default_Handler, /* 0x34 */
    Default_Handler, /* 0x36 */
    Default_Handler, /* 0x38 */
    Default_Handler, /* 0x3A */
    Default_Handler, /* 0x3C */
    Default_Handler, /* 0x3E */
    Default_Handler, /* 0x40 */
    Default_Handler, /* 0x42 */
    Default_Handler, /* 0x44 */
    Default_Handler, /* 0x46 */
    Default_Handler, /* 0x48 */
    Default_Handler, /* 0x4A */
    Default_Handler, /* 0x4C */
    Default_Handler, /* 0x4E */
    Default_Handler, /* 0x50 */
    Default_Handler, /* 0x52 */
    Default_Handler, /* 0x54 */
    Default_Handler, /* 0x56 */
    Default_Handler, /* 0x58 */
    Default_Handler, /* 0x5A */
    Default_Handler, /* 0x5C */
    Default_Handler, /* 0x5E */
    Default_Handler, /* 0x60 */
    Default_Handler, /* 0x62 */
    Default_Handler, /* 0x64 */
    Default_Handler, /* 0x66 */
    Default_Handler, /* 0x68 */
    Default_Handler, /* 0x6A */
    Default_Handler, /* 0x6C */
    Default_Handler, /* 0x6E */
    Default_Handler, /* 0x70 */
    Default_Handler, /* 0x72 */
    Default_Handler, /* 0x74 */
    Default_Handler, /* 0x76 */
    Default_Handler, /* 0x78 */
    Default_Handler, /* 0x7A */
    Default_Handler, /* 0x7C */
    Default_Handler /* 0x7E */
};
