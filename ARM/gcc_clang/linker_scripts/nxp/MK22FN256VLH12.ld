/**
 * MCUs: MK22FN256CAH12
 *       MK22FN256VDC12
 *       MK22FN256VLH12
 *       MK22FN256VLL12
 *       MK22FN256VMP12
 */

ENTRY(Reset_Handler)


/* Generate a link error if heap and stack don't fit into SRAM */
HEAP_SIZE  = 0x1000;
STACK_SIZE = 0x0400;

MEMORY
{
    INTERRUPTS (rx)       : ORIGIN = 0x00000000, LENGTH = 0x00000400
    FLASH_CONFIG (rx)     : ORIGIN = 0x00000400, LENGTH = 0x00000010
    FLASH (rx)            : ORIGIN = 0x00000410, LENGTH = 0x0003FBF0
    RAM (rwx)             : ORIGIN = 0x1FFFC000, LENGTH = 0x00004000
    RAM2 (rwx)            : ORIGIN = 0x20000000, LENGTH = 0x00008000
}

_estack = ORIGIN(RAM2) + LENGTH(RAM2);    /* end of SRAM */

SECTIONS
{
    .isr_vector :
    {
        __VECTOR_TABLE = .;
        . = ALIGN(4);
        KEEP(*(.isr_vector))
        . = ALIGN(4);
        __VECTOR_TABLE_END = .;
    } > INTERRUPTS

    .flash_config :
    {
        . = ALIGN(4);
        KEEP(*(.FlashConfig))    /* Flash Configuration Field (FCF) */
        . = ALIGN(4);
    } > FLASH_CONFIG

    /* The program code and other data goes into internal flash */
    .text :
    {
        . = ALIGN(4);
        *(.text)                 /* .text sections (code) */
        *(.text*)                /* .text* sections (code) */
        *(.rodata)               /* .rodata sections (constants, strings, etc.) */
        *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
        *(.glue_7)               /* glue arm to thumb code */
        *(.glue_7t)              /* glue thumb to arm code */
        *(.eh_frame)
        KEEP (*(.init))
        KEEP (*(.fini))
        . = ALIGN(4);
        _etext = .;
    } > FLASH

    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > FLASH

    .ARM.extab   :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > FLASH

    .ARM : {
        __exidx_start = .;
        *(.ARM.exidx*)
        __exidx_end = .;
    } > FLASH

    .ctors :
    {
        __CTOR_LIST__ = .;
        /* gcc uses crtbegin.o to find the start of
        the constructors, so we make sure it is
        first.  Because this is a wildcard, it
        doesn't matter if the user does not
        actually link against crtbegin.o; the
        linker won't look for a file to match a
        wildcard.  The wildcard also means that it
        doesn't matter which directory crtbegin.o
        is in.  */
        KEEP (*crtbegin.o(.ctors))
        KEEP (*crtbegin?.o(.ctors))
        /* We don't want to include the .ctor section from
        from the crtend.o file until after the sorted ctors.
        The .ctor section from the crtend file contains the
        end of ctors marker and it must be last */
        KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*(.ctors))
        __CTOR_END__ = .;
    } > FLASH

    .dtors :
    {
        __DTOR_LIST__ = .;
        KEEP (*crtbegin.o(.dtors))
        KEEP (*crtbegin?.o(.dtors))
        KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*(.dtors))
        __DTOR_END__ = .;
    } > FLASH

    .preinit_array :
    {
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP (*(.preinit_array*))
        PROVIDE_HIDDEN (__preinit_array_end = .);
    } > FLASH

    .init_array :
    {
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array*))
        PROVIDE_HIDDEN (__init_array_end = .);
    } > FLASH

    .fini_array :
    {
        PROVIDE_HIDDEN (__fini_array_start = .);
        KEEP (*(SORT(.fini_array.*)))
        KEEP (*(.fini_array*))
        PROVIDE_HIDDEN (__fini_array_end = .);
    } > FLASH

    __etext = .;    /* define a global symbol at end of code */
    __DATA_ROM = .; /* Symbol is used by startup for data initialization */

    .data : AT(__DATA_ROM)
    {
        . = ALIGN (4);
        __DATA_RAM = .;
        __data_start__ = .;      /* create a global symbol at data start */
        __data_load__ = LOADADDR (.data);
        *(.data)                 /* .data sections */
        *(.data*)                /* .data* sections */
        *(.Ram)                  /* .Ram sections */
        *(.RamFunc*)             /* .Ram* sections */
        KEEP(*(.jcr*))
        . = ALIGN(4);
        __data_end__ = .;        /* define a global symbol at data end */
    } > RAM

    __DATA_END = __DATA_ROM + (__data_end__ - __data_start__);

    .bss :
    {
        /* This is used by the startup in order to initialize the .bss section */
        . = ALIGN(4);
        __START_BSS = .;
        PROVIDE ( __bss_start__ = __START_BSS );
        *(.bss)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        __END_BSS = .;
        PROVIDE ( __bss_end__ = __END_BSS );
    } > RAM

    .heap : {
        . = ALIGN(8);
        __end__ = .;
        PROVIDE(end = .);
        __HeapBase = .;
        . += HEAP_SIZE;
        __HeapLimit = .;
    } > RAM2

    .stack : ALIGN(0x8) {
        . = ALIGN(8);
        . += STACK_SIZE;
    } > RAM2

    /* Remove information from the standard libraries */
    /DISCARD/ :
    {
        libc.a ( * )
        libm.a ( * )
        libgcc.a ( * )
    }

    /* Initializes stack on the end of block */
    __StackTop   = ORIGIN(RAM2) + LENGTH(RAM2);
    __StackLimit = __StackTop - STACK_SIZE;
    PROVIDE(__stack = __StackTop);

    .ARM.attributes 0 : { *(.ARM.attributes) }

    ASSERT(__StackLimit >= __HeapLimit, "region RAM2 overflowed with stack and heap")
}
