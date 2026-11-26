/*
 * GCC linker script for core 1 (coprocessor) of the PIC32CX1025MTSH128
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*------------------------------------------------------------------------------
 *      Linker script for core 1 (coprocessor) of the PIC32CX1025MTSH128.
 *
 *      Note: Changed for MikroE implementation (dual-core project, core_1_m4ef).
 *      Core 1 has no flash of its own: it runs from SRAM1 (0x00000000 in the core 1
 *      view, 32 KB), with data, heap and stack in SRAM2 (0x20088000, 16 KB). The image
 *      is stored at the start of flash bank 1 (IFLASH1, 0x01080000 in the core 0
 *      view), which core 0 does not use, so the merged hex of the project programs it
 *      there; core 0 copies IFLASH1 to SRAM1 and releases core 1 (init_clock.c).
 *----------------------------------------------------------------------------*/

OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
SEARCH_DIR(.)

/* Memory Spaces Definitions */
MEMORY
{
    ram   (rwx) : ORIGIN = 0x00000000, LENGTH = 0x00008000 /* SRAM1: code and data initializers, 32K */
    ram2  (rwx) : ORIGIN = 0x20088000, LENGTH = 0x00004000 /* SRAM2: data, heap and stack, 16K */
    image (rx)  : ORIGIN = 0x01080000, LENGTH = 0x00008000 /* IFLASH1 (core 0 view): stored image, copied to SRAM1 */
}

/* The stack size used by the application. NOTE: you need to adjust according to your application. */
STACK_SIZE = DEFINED(STACK_SIZE) ? STACK_SIZE : DEFINED(__stack_size__) ? __stack_size__ : 0x0400;

/* The heapsize used by the application. NOTE: you need to adjust according to your application. */
HEAP_SIZE = DEFINED(HEAP_SIZE) ? HEAP_SIZE : DEFINED(__heap_size__) ? __heap_size__ : 0x0200;

/* Section Definitions */
SECTIONS
{
    .text :
    {
        . = ALIGN(4);
        _sfixed = .;
        KEEP(*(.vectors .vectors.*))
        *(.text .text.* .gnu.linkonce.t.*)
        *(.RamFunc .RamFunc.*)
        *(.glue_7t) *(.glue_7)
        *(.rodata .rodata* .gnu.linkonce.r.*)
        *(.ARM.extab* .gnu.linkonce.armextab.*)

        /* Support C constructors, and C destructors in both user code
           and the C library. This also provides support for C++ code. */
        . = ALIGN(4);
        KEEP(*(.init))
        . = ALIGN(4);
        __preinit_array_start = .;
        KEEP (*(.preinit_array))
        __preinit_array_end = .;

        . = ALIGN(4);
        __init_array_start = .;
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array))
        __init_array_end = .;

        . = ALIGN(4);
        KEEP (*crtbegin.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*crtend.o(.ctors))

        . = ALIGN(4);
        KEEP(*(.fini))

        . = ALIGN(4);
        __fini_array_start = .;
        KEEP (*(.fini_array))
        KEEP (*(SORT(.fini_array.*)))
        __fini_array_end = .;

        KEEP (*crtbegin.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*crtend.o(.dtors))

        . = ALIGN(4);
        _efixed = .;            /* End of text section */
    } > ram AT > image

    /* .ARM.exidx is sorted, so has to go in its own output section.  */
    PROVIDE_HIDDEN (__exidx_start = .);
    .ARM.exidx :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > ram AT > image
    PROVIDE_HIDDEN (__exidx_end = .);

    /* The .relocate initializers follow the code in the image, so once core 0 has copied the
       image to SRAM1 they sit at _etext, where the startup code copies them from. */
    . = ALIGN(4);
    _etext = .;

    .relocate : AT (ORIGIN(image) + (_etext - ORIGIN(ram)))
    {
        . = ALIGN(4);
        _srelocate = .;
        *(.ramfunc .ramfunc.*);
        *(.data .data.*);
        . = ALIGN(4);
        _erelocate = .;
    } > ram2

    ASSERT(_etext + SIZEOF(.relocate) <= ORIGIN(ram) + LENGTH(ram),
           "Core 1 image (code and data initializers) does not fit the 32 KB of SRAM1")

    /* .bss section which is used for uninitialized data */
    .bss (NOLOAD) :
    {
        . = ALIGN(4);
        _sbss = . ;
        _szero = .;
        *(.bss .bss.*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = . ;
        _ezero = .;
    } > ram2

    /* heap section */
    .heap (NOLOAD):
    {
        . = ALIGN(8);
        _sheap = .;
        . = . + HEAP_SIZE;
        . = ALIGN(8);
        _eheap = .;
    } > ram2

    /* stack section */
    .stack (NOLOAD):
    {
        . = ALIGN(8);
        _sstack = .;
        . = . + STACK_SIZE;
        . = ALIGN(8);
        _estack = .;
    } > ram2

    . = ALIGN(4);
    _end = . ;
    _ram_end_ = ORIGIN(ram2) + LENGTH(ram2) - 1 ;
}
