/*
 * HPM5301IEG1 startup code.
 *
 * Boot image structures (NOR configuration option, boot header, firmware
 * information table) and start-up sequence follow the HPMicro SDK
 * (soc/HPM5300/HPM5301/boot/hpm_bootheader.c, toolchains/gcc/start.S,
 * toolchains/reset.c, boards/hpm5301evklite/board.c; BSD-3-Clause).
 *
 * Interrupts use the PLIC in non-vectored mode: every trap enters trap_entry,
 * which saves the caller-saved context and dispatches
 *   - external interrupts: claim from PLIC, call <NAME>_IRQHandler, complete,
 *   - machine timer interrupt: MCHTMR_IRQHandler,
 *   - machine software interrupt: SWI_IRQHandler,
 *   - exceptions: Exception_Handler(mcause, mepc).
 * Handlers are plain C functions (void NAME_IRQHandler(void)); all are weak.
 *
 * Note: Changed for MikroE implementation.
 */

/* CSRs (Andes D25) */
#define CSR_MCOUNTINHIBIT   0x320
#define CSR_MCACHE_CTL      0x7CA
#define CSR_MMISC_CTL       0x7D0

/* mcache_ctl: IC_EN | CCTL_SUEN | IPREF_EN */
#define MCACHE_CTL_IC       0x301
/* mmisc_ctl: VEC_PLIC */
#define MMISC_CTL_VEC_PLIC  0x2

/* PLIC (target 0, machine mode) */
#define PLIC_BASE           0xE4000000
#define PLIC_FEATURE        (PLIC_BASE + 0x0)
#define PLIC_ENABLE         (PLIC_BASE + 0x2000)
#define PLIC_THRESHOLD      (PLIC_BASE + 0x200000)
#define PLIC_CLAIM          (PLIC_BASE + 0x200004)
#define PLIC_SOURCES        73

#define MSTATUS_MIE         0x8
#define MSTATUS_FS          0x6000

/* Trap frame */
#define REGBYTES            4
#if defined(__riscv_flen) && (__riscv_flen == 64)
#define FREGBYTES           8
#define FSTORE              fsd
#define FLOAD               fld
#elif defined(__riscv_flen)
#define FREGBYTES           4
#define FSTORE              fsw
#define FLOAD               flw
#endif

/* Offsets are plain literals so that "OFF + n * FREGBYTES(sp)" is a valid memory operand. */
#define OFF_MEPC            64
#define OFF_MSTATUS         68
#define OFF_IRQ             72
#define OFF_FCSR            76
#define OFF_FREGS           80
#if defined(__riscv_flen) && (__riscv_flen == 64)
#define FRAME_SIZE          240                     /* 80 + 20 * 8 */
#elif defined(__riscv_flen)
#define FRAME_SIZE          160                     /* 80 + 20 * 4 */
#else
#define FRAME_SIZE          80
#endif

/* ------------------------------------------------------------ BOOT IMAGE */

    /* NOR flash configuration option (as the HPM5301EVKLite SDK board, SIP flash). */
    .section .nor_cfg_option, "a"
    .align 2
    .word 0xfcf90002
    .word 0x00000005
    .word 0x00001000
    .word 0x00000000

    /* Boot header: tag 0xBF, version 0x10, length = header (16) + one fw info table (128). */
    .section .boot_header, "a"
    .align 2
    .byte 0xBF                              /* tag */
    .byte 0x10                              /* version */
    .hword 144                              /* length */
    .word 0                                 /* flags */
    .hword 0                                /* sw_version */
    .byte 0                                 /* fuse_version */
    .byte 1                                 /* fw_count */
    .hword 0                                /* dc_block_offset */
    .hword 0                                /* sig_block_offset */

    .section .fw_info_table, "a"
    .align 2
    .word __app_offset__                    /* offset of the application from the boot header */
    .word __fw_size__                       /* size */
    .word 0                                 /* flags: executable, no hash */
    .word 0                                 /* reserved0 */
    .word __app_load_addr__                 /* load_addr */
    .word 0                                 /* reserved1 */
    .word _start                            /* entry_point */
    .word 0                                 /* reserved2 */
    .fill 64, 1, 0                          /* hash */
    .fill 32, 1, 0                          /* iv */

/* ---------------------------------------------------------------- START */

    .section .start, "ax"
    .globl _start
    .type _start, @function
_start:
    /* Machine mode, interrupts off */
    csrw mstatus, zero
    csrw mie, zero

    /* Global pointer and stack */
    .option push
    .option norelax
    la gp, __global_pointer$
    .option pop
    la sp, _sp

#ifdef __riscv_flen
    /* Enable FPU */
    li t0, MSTATUS_FS
    csrs mstatus, t0
    fscsr zero
#endif

    /* Enable the instruction cache */
    li t0, MCACHE_CTL_IC
    csrs CSR_MCACHE_CTL, t0

    /* Enable mcycle and minstret counters (used by the delays) */
    csrw CSR_MCOUNTINHIBIT, zero

    /* Copy .data (DLM) from flash */
    la a0, __data_load_addr__
    la a1, __data_start__
    la a2, __data_end__
    call copy_section

    /* Copy .fast (ILM code) from flash */
    la a0, __fast_load_addr__
    la a1, __ramfunc_start__
    la a2, __ramfunc_end__
    call copy_section
    .word 0x0000100F                        /* fence.i (encoded: no Zifencei needed in -march) */

    /* Clear .bss */
    la a0, __bss_start__
    la a1, __bss_end__
    bgeu a0, a1, 2f
1:
    sw zero, 0(a0)
    addi a0, a0, 4
    bltu a0, a1, 1b
2:

    /* PLIC: non-vectored, no preemption, threshold 0, all sources disabled and completed */
    li t0, PLIC_FEATURE
    sw zero, 0(t0)
    li t0, MMISC_CTL_VEC_PLIC
    csrc CSR_MMISC_CTL, t0
    li t0, PLIC_THRESHOLD
    sw zero, 0(t0)
    li t0, PLIC_ENABLE
    sw zero, 0(t0)
    sw zero, 4(t0)
    sw zero, 8(t0)
    sw zero, 12(t0)
    li t0, PLIC_CLAIM
    li t1, 0
    li t2, 128
3:
    sw t1, 0(t0)
    addi t1, t1, 1
    bltu t1, t2, 3b

    /* Trap vector (direct mode) */
    la t0, trap_entry
    csrw mtvec, t0

    /* Clock tree, from the MCU definition */
    call SystemInit

    /* Global constructors */
    call __libc_init_array

    /* argc = argv = 0 */
    li a0, 0
    li a1, 0
    call main

4:
    j 4b

    .size _start, . - _start

/* Copy words from a0 (load address) to [a1, a2). */
    .type copy_section, @function
copy_section:
    bgeu a1, a2, 2f
1:
    lw t0, 0(a0)
    sw t0, 0(a1)
    addi a0, a0, 4
    addi a1, a1, 4
    bltu a1, a2, 1b
2:
    ret
    .size copy_section, . - copy_section

/* ----------------------------------------------------------------- TRAPS */

    .section .text.trap_entry, "ax"
    .align 6
    .globl trap_entry
    .type trap_entry, @function
trap_entry:
    addi sp, sp, -FRAME_SIZE
    sw ra,   0 * REGBYTES(sp)
    sw t0,   1 * REGBYTES(sp)
    sw t1,   2 * REGBYTES(sp)
    sw t2,   3 * REGBYTES(sp)
    sw a0,   4 * REGBYTES(sp)
    sw a1,   5 * REGBYTES(sp)
    sw a2,   6 * REGBYTES(sp)
    sw a3,   7 * REGBYTES(sp)
    sw a4,   8 * REGBYTES(sp)
    sw a5,   9 * REGBYTES(sp)
    sw a6,  10 * REGBYTES(sp)
    sw a7,  11 * REGBYTES(sp)
    sw t3,  12 * REGBYTES(sp)
    sw t4,  13 * REGBYTES(sp)
    sw t5,  14 * REGBYTES(sp)
    sw t6,  15 * REGBYTES(sp)
    csrr t0, mepc
    sw t0, OFF_MEPC(sp)
    csrr t0, mstatus
    sw t0, OFF_MSTATUS(sp)
#ifdef __riscv_flen
    frcsr t0
    sw t0, OFF_FCSR(sp)
    FSTORE f0,  OFF_FREGS +  0 * FREGBYTES(sp)
    FSTORE f1,  OFF_FREGS +  1 * FREGBYTES(sp)
    FSTORE f2,  OFF_FREGS +  2 * FREGBYTES(sp)
    FSTORE f3,  OFF_FREGS +  3 * FREGBYTES(sp)
    FSTORE f4,  OFF_FREGS +  4 * FREGBYTES(sp)
    FSTORE f5,  OFF_FREGS +  5 * FREGBYTES(sp)
    FSTORE f6,  OFF_FREGS +  6 * FREGBYTES(sp)
    FSTORE f7,  OFF_FREGS +  7 * FREGBYTES(sp)
    FSTORE f10, OFF_FREGS +  8 * FREGBYTES(sp)
    FSTORE f11, OFF_FREGS +  9 * FREGBYTES(sp)
    FSTORE f12, OFF_FREGS + 10 * FREGBYTES(sp)
    FSTORE f13, OFF_FREGS + 11 * FREGBYTES(sp)
    FSTORE f14, OFF_FREGS + 12 * FREGBYTES(sp)
    FSTORE f15, OFF_FREGS + 13 * FREGBYTES(sp)
    FSTORE f16, OFF_FREGS + 14 * FREGBYTES(sp)
    FSTORE f17, OFF_FREGS + 15 * FREGBYTES(sp)
    FSTORE f28, OFF_FREGS + 16 * FREGBYTES(sp)
    FSTORE f29, OFF_FREGS + 17 * FREGBYTES(sp)
    FSTORE f30, OFF_FREGS + 18 * FREGBYTES(sp)
    FSTORE f31, OFF_FREGS + 19 * FREGBYTES(sp)
#endif

    csrr a0, mcause
    bltz a0, trap_interrupt

    /* Exception: Exception_Handler(mcause, mepc) */
    csrr a1, mepc
    call Exception_Handler
    j trap_restore

trap_interrupt:
    slli a0, a0, 1
    srli a0, a0, 1
    li t0, 11
    beq a0, t0, trap_external
    li t0, 7
    beq a0, t0, trap_timer
    li t0, 3
    beq a0, t0, trap_software
    j trap_restore

trap_timer:
    call MCHTMR_IRQHandler
    j trap_restore

trap_software:
    call SWI_IRQHandler
    j trap_restore

trap_external:
    /* Claim: serve all pending sources */
    li t0, PLIC_CLAIM
    lw a0, 0(t0)
    beqz a0, trap_restore
    sw a0, OFF_IRQ(sp)
    li t1, PLIC_SOURCES
    bgeu a0, t1, 1f
    la t1, __plic_handlers
    slli t2, a0, 2
    add t1, t1, t2
    lw t1, 0(t1)
    jalr t1
1:
    /* Complete */
    lw a0, OFF_IRQ(sp)
    li t0, PLIC_CLAIM
    sw a0, 0(t0)
    j trap_external

trap_restore:
#ifdef __riscv_flen
    lw t0, OFF_FCSR(sp)
    fscsr t0
    FLOAD f0,  OFF_FREGS +  0 * FREGBYTES(sp)
    FLOAD f1,  OFF_FREGS +  1 * FREGBYTES(sp)
    FLOAD f2,  OFF_FREGS +  2 * FREGBYTES(sp)
    FLOAD f3,  OFF_FREGS +  3 * FREGBYTES(sp)
    FLOAD f4,  OFF_FREGS +  4 * FREGBYTES(sp)
    FLOAD f5,  OFF_FREGS +  5 * FREGBYTES(sp)
    FLOAD f6,  OFF_FREGS +  6 * FREGBYTES(sp)
    FLOAD f7,  OFF_FREGS +  7 * FREGBYTES(sp)
    FLOAD f10, OFF_FREGS +  8 * FREGBYTES(sp)
    FLOAD f11, OFF_FREGS +  9 * FREGBYTES(sp)
    FLOAD f12, OFF_FREGS + 10 * FREGBYTES(sp)
    FLOAD f13, OFF_FREGS + 11 * FREGBYTES(sp)
    FLOAD f14, OFF_FREGS + 12 * FREGBYTES(sp)
    FLOAD f15, OFF_FREGS + 13 * FREGBYTES(sp)
    FLOAD f16, OFF_FREGS + 14 * FREGBYTES(sp)
    FLOAD f17, OFF_FREGS + 15 * FREGBYTES(sp)
    FLOAD f28, OFF_FREGS + 16 * FREGBYTES(sp)
    FLOAD f29, OFF_FREGS + 17 * FREGBYTES(sp)
    FLOAD f30, OFF_FREGS + 18 * FREGBYTES(sp)
    FLOAD f31, OFF_FREGS + 19 * FREGBYTES(sp)
#endif
    lw t0, OFF_MSTATUS(sp)
    csrw mstatus, t0
    lw t0, OFF_MEPC(sp)
    csrw mepc, t0
    lw ra,   0 * REGBYTES(sp)
    lw t0,   1 * REGBYTES(sp)
    lw t1,   2 * REGBYTES(sp)
    lw t2,   3 * REGBYTES(sp)
    lw a0,   4 * REGBYTES(sp)
    lw a1,   5 * REGBYTES(sp)
    lw a2,   6 * REGBYTES(sp)
    lw a3,   7 * REGBYTES(sp)
    lw a4,   8 * REGBYTES(sp)
    lw a5,   9 * REGBYTES(sp)
    lw a6,  10 * REGBYTES(sp)
    lw a7,  11 * REGBYTES(sp)
    lw t3,  12 * REGBYTES(sp)
    lw t4,  13 * REGBYTES(sp)
    lw t5,  14 * REGBYTES(sp)
    lw t6,  15 * REGBYTES(sp)
    addi sp, sp, FRAME_SIZE
    mret

    .size trap_entry, . - trap_entry

/* ------------------------------------------------------- DEFAULT HANDLERS */

    .section .text.Default_IRQHandler, "ax"
    .align 2
    .weak Default_IRQHandler
    .type Default_IRQHandler, @function
Default_IRQHandler:
1:
    j 1b
    .size Default_IRQHandler, . - Default_IRQHandler

    .weak Exception_Handler
    .type Exception_Handler, @function
Exception_Handler:
1:
    j 1b
    .size Exception_Handler, . - Exception_Handler

    .weak MCHTMR_IRQHandler
    .set  MCHTMR_IRQHandler, Default_IRQHandler
    .weak SWI_IRQHandler
    .set  SWI_IRQHandler, Default_IRQHandler

    /* Weak alias for an external interrupt handler */
    .macro IRQ_HANDLER name
    .weak \name\()_IRQHandler
    .set  \name\()_IRQHandler, Default_IRQHandler
    .word \name\()_IRQHandler
    .endm

    .macro IRQ_RESERVED
    .word Default_IRQHandler
    .endm

    /* PLIC source -> handler table (source 0 does not exist) */
    .section .rodata.__plic_handlers, "a"
    .align 2
    .globl __plic_handlers
__plic_handlers:
    IRQ_RESERVED                    /* 0: no interrupt */
    IRQ_HANDLER GPIO0_A             /* 1 */
    IRQ_HANDLER GPIO0_B             /* 2 */
    IRQ_HANDLER GPIO0_X             /* 3 */
    IRQ_HANDLER GPIO0_Y             /* 4 */
    IRQ_HANDLER GPTMR0              /* 5 */
    IRQ_HANDLER GPTMR1              /* 6 */
    IRQ_RESERVED                    /* 7 */
    IRQ_RESERVED                    /* 8 */
    IRQ_RESERVED                    /* 9 */
    IRQ_RESERVED                    /* 10 */
    IRQ_RESERVED                    /* 11 */
    IRQ_RESERVED                    /* 12 */
    IRQ_HANDLER UART0               /* 13 */
    IRQ_HANDLER UART1               /* 14 */
    IRQ_HANDLER UART2               /* 15 */
    IRQ_HANDLER UART3               /* 16 */
    IRQ_RESERVED                    /* 17 */
    IRQ_RESERVED                    /* 18 */
    IRQ_RESERVED                    /* 19 */
    IRQ_RESERVED                    /* 20 */
    IRQ_HANDLER I2C0                /* 21 */
    IRQ_HANDLER I2C1                /* 22 */
    IRQ_HANDLER I2C2                /* 23 */
    IRQ_HANDLER I2C3                /* 24 */
    IRQ_HANDLER SPI0                /* 25 */
    IRQ_HANDLER SPI1                /* 26 */
    IRQ_HANDLER SPI2                /* 27 */
    IRQ_HANDLER SPI3                /* 28 */
    IRQ_HANDLER TSNS                /* 29 */
    IRQ_HANDLER MBX0A               /* 30 */
    IRQ_HANDLER MBX0B               /* 31 */
    IRQ_HANDLER EWDG0               /* 32 */
    IRQ_HANDLER EWDG1               /* 33 */
    IRQ_HANDLER HDMA                /* 34 */
    IRQ_RESERVED                    /* 35 */
    IRQ_RESERVED                    /* 36 */
    IRQ_RESERVED                    /* 37 */
    IRQ_RESERVED                    /* 38 */
    IRQ_RESERVED                    /* 39 */
    IRQ_RESERVED                    /* 40 */
    IRQ_RESERVED                    /* 41 */
    IRQ_RESERVED                    /* 42 */
    IRQ_RESERVED                    /* 43 */
    IRQ_HANDLER TRGMUX0             /* 44 */
    IRQ_RESERVED                    /* 45 */
    IRQ_RESERVED                    /* 46 */
    IRQ_RESERVED                    /* 47 */
    IRQ_RESERVED                    /* 48 */
    IRQ_HANDLER TRGMUX1             /* 49 */
    IRQ_RESERVED                    /* 50 */
    IRQ_HANDLER USB0                /* 51 */
    IRQ_HANDLER XPI0                /* 52 */
    IRQ_RESERVED                    /* 53 */
    IRQ_RESERVED                    /* 54 */
    IRQ_RESERVED                    /* 55 */
    IRQ_RESERVED                    /* 56 */
    IRQ_HANDLER FUSE                /* 57 */
    IRQ_HANDLER ADC0                /* 58 */
    IRQ_RESERVED                    /* 59 */
    IRQ_RESERVED                    /* 60 */
    IRQ_RESERVED                    /* 61 */
    IRQ_HANDLER ACMP_0              /* 62 */
    IRQ_HANDLER ACMP_1              /* 63 */
    IRQ_HANDLER SYSCTL              /* 64 */
    IRQ_HANDLER PGPIO               /* 65 */
    IRQ_HANDLER PTMR                /* 66 */
    IRQ_HANDLER PUART               /* 67 */
    IRQ_HANDLER PEWDG               /* 68 */
    IRQ_HANDLER BROWNOUT            /* 69 */
    IRQ_HANDLER PAD_WAKEUP          /* 70 */
    IRQ_HANDLER DEBUG0              /* 71 */
    IRQ_HANDLER DEBUG1              /* 72 */

/* ---------------------------------------------------------- C RUNTIME */

    .section .text._init, "ax"
    .align 2
    .weak _init
    .type _init, @function
_init:
    ret
    .size _init, . - _init

    .weak _fini
    .type _fini, @function
_fini:
    ret
    .size _fini, . - _fini
