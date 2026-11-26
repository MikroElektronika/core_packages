/*
 * HPM5301IEG1 linker script: execute in place from the 1 MB SIP flash (XPI0).
 *
 * Memory map and boot image layout follow the HPMicro SDK
 * (soc/HPM5300/HPM5301/toolchains/gcc/flash_xip.ld, BSD-3-Clause):
 *   0x80000400  NOR flash configuration option read by the boot ROM
 *   0x80001000  boot header + firmware information table
 *   0x80003000  application (entry _start)
 *
 * Note: Changed for MikroE implementation.
 */

OUTPUT_ARCH( "riscv" )

ENTRY( _start )

MEMORY
{
    FLASH (rx)     : ORIGIN = 0x80000000, LENGTH = 1M
    ILM (rwx)      : ORIGIN = 0x00000000, LENGTH = 128K
    DLM (rw)       : ORIGIN = 0x00080300, LENGTH = 128K - 768
    AHB_SRAM (rw)  : ORIGIN = 0xF0400000, LENGTH = 32K
}

__stack_size = DEFINED(__stack_size) ? __stack_size : 16K;

__nor_cfg_option_load_addr__ = ORIGIN(FLASH) + 0x400;
__boot_header_load_addr__ = ORIGIN(FLASH) + 0x1000;
__app_load_addr__ = ORIGIN(FLASH) + 0x3000;
__app_offset__ = __app_load_addr__ - __boot_header_load_addr__;

SECTIONS
{
    .nor_cfg_option __nor_cfg_option_load_addr__ :
    {
        KEEP(*(.nor_cfg_option))
    } > FLASH

    .boot_header __boot_header_load_addr__ :
    {
        __boot_header_start__ = .;
        KEEP(*(.boot_header))
        KEEP(*(.fw_info_table))
        __boot_header_end__ = .;
    } > FLASH

    .start __app_load_addr__ :
    {
        . = ALIGN(8);
        KEEP(*(.start))
        . = ALIGN(8);
    } > FLASH

    .text :
    {
        . = ALIGN(8);
        *(.text.unlikely .text.unlikely.*)
        *(.text.startup .text.startup.*)
        *(.text .text.*)
        *(.gnu.linkonce.t.*)
        *(.rodata .rodata.*)
        *(.srodata.cst16) *(.srodata.cst8) *(.srodata.cst4) *(.srodata.cst2)
        *(.srodata .srodata.*)
        *(.gnu.linkonce.r.*)

        KEEP(*(.init))
        KEEP(*(.fini))

        . = ALIGN(8);
        PROVIDE_HIDDEN(__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE_HIDDEN(__preinit_array_end = .);

        . = ALIGN(8);
        PROVIDE_HIDDEN(__init_array_start = .);
        KEEP(*(SORT_BY_INIT_PRIORITY(.init_array.*) SORT_BY_INIT_PRIORITY(.ctors.*)))
        KEEP(*(.init_array EXCLUDE_FILE(*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o) .ctors))
        PROVIDE_HIDDEN(__init_array_end = .);

        . = ALIGN(8);
        PROVIDE_HIDDEN(__fini_array_start = .);
        KEEP(*(SORT_BY_INIT_PRIORITY(.fini_array.*) SORT_BY_INIT_PRIORITY(.dtors.*)))
        KEEP(*(.fini_array EXCLUDE_FILE(*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o) .dtors))
        PROVIDE_HIDDEN(__fini_array_end = .);

        KEEP(*crtbegin.o(.ctors))
        KEEP(*crtbegin?.o(.ctors))
        KEEP(*(EXCLUDE_FILE(*crtend.o *crtend?.o) .ctors))
        KEEP(*(SORT(.ctors.*)))
        KEEP(*(.ctors))
        KEEP(*crtbegin.o(.dtors))
        KEEP(*crtbegin?.o(.dtors))
        KEEP(*(EXCLUDE_FILE(*crtend.o *crtend?.o) .dtors))
        KEEP(*(SORT(.dtors.*)))
        KEEP(*(.dtors))
        . = ALIGN(8);
    } > FLASH

    .eh_frame :
    {
        KEEP(*(.eh_frame))
    } > FLASH

    .eh_frame_hdr :
    {
        KEEP(*(.eh_frame_hdr))
    } > FLASH

    . = ALIGN(8);
    PROVIDE(__etext = .);
    PROVIDE(_etext = .);
    PROVIDE(etext = .);

    /* Initialized data: DLM, loaded from flash by the startup code. */
    __data_load_addr__ = etext;
    .data : AT(__data_load_addr__) ALIGN(8)
    {
        __data_start__ = .;
        *(.data .data.*)
        *(.gnu.linkonce.d.*)
        KEEP(*(.jcr))
        KEEP(*(.got*))
        KEEP(*(.gcc_except_table .gcc_except_table.*))
        . = ALIGN(8);
        PROVIDE(__global_pointer$ = . + 0x800);
        *(.sdata .sdata.*)
        *(.gnu.linkonce.s.*)
        *(.tdata .tdata.*)
        . = ALIGN(8);
        __data_end__ = .;
        PROVIDE(_edata = .);
        PROVIDE(edata = .);
    } > DLM

    /* Code placed in ILM (section ".fast"), loaded from flash by the startup code. */
    __fast_load_addr__ = __data_load_addr__ + SIZEOF(.data);
    .fast : AT(__fast_load_addr__) ALIGN(8)
    {
        __ramfunc_start__ = .;
        *(.fast .fast.*)
        . = ALIGN(8);
        __ramfunc_end__ = .;
    } > ILM

    .bss (NOLOAD) : ALIGN(8)
    {
        __bss_start__ = .;
        *(.sbss .sbss.*)
        *(.gnu.linkonce.sb.*)
        *(.bss .bss.*)
        *(.gnu.linkonce.b.*)
        *(.tbss .tbss.*)
        *(.scommon)
        *(COMMON)
        . = ALIGN(8);
        __bss_end__ = .;
        PROVIDE(_end = .);
        PROVIDE(end = .);
    } > DLM

    /* Heap: from end of .bss up to the stack. */
    PROVIDE(__heap_start__ = _end);

    .stack ORIGIN(DLM) + LENGTH(DLM) - __stack_size (NOLOAD) :
    {
        PROVIDE(__heap_end__ = .);
        PROVIDE(_heap_end = .);
        . = __stack_size;
        PROVIDE(_sp = .);
        PROVIDE(_stack = .);
    } > DLM

    .ahb_sram (NOLOAD) :
    {
        KEEP(*(.ahb_sram .ahb_sram.*))
    } > AHB_SRAM

    /* Image size counted by the boot ROM: from the application start to the last loaded byte. */
    __fw_end__ = __fast_load_addr__ + SIZEOF(.fast);
    __fw_size__ = __fw_end__ - __app_load_addr__;

    ASSERT(__fw_end__ <= ORIGIN(FLASH) + LENGTH(FLASH), "FLASH overflow")
    ASSERT(_end <= ORIGIN(DLM) + LENGTH(DLM) - __stack_size, "DLM overflow: data, bss and stack do not fit")
}
