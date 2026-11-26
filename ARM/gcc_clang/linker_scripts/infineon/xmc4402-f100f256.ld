/*
******************************************************************************
**
** @file        : xmc4402-f100f256.ld
** @author      : MikroElektronika
** @brief       : Linker script for XMC4402-F100F256 Device
**                256K FLASH @ 0x08000000
**                80K RAM @ 0x1FFFC000
**                Flash linked to the cached alias 0x08000000 (= 0x0C000000 uncached),
**                loaded (LMA) at the uncached alias 0x0C000000: the boot ROM and the
**                flash programmers (J-Link, OpenOCD) only know the flash at 0x0C000000.
**                RAM = PSRAM + DSRAM1 + DSRAM2 (contiguous).
**                .RamFunc at the top of RAM (system bus), stack below it.
**
**                Set heap size, stack size and stack location according
**                to application requirements.
**
**                Set memory bank area and size if external memory is used
**
**  Target      : INFINEON XMC4402-F100F256
**
**  Distribution: The file is distributed as is, without any warranty
**                of any kind.
**
******************************************************************************
** @attention
**
** Copyright (c) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika.
** All rights reserved.
**
** This software is licensed under terms that can be found in the LICENSE file
** in the root directory of this software component.
** If no LICENSE file comes with this software, it is provided AS-IS.
**
******************************************************************************
*/

/* Entry Point */
ENTRY(Reset_Handler)

_Min_Heap_Size = 0x200; /* required amount of heap */
_Min_Stack_Size = 0x400; /* required amount of stack */

/* Memories definition */
MEMORY
{
  FLASH        (rx)    : ORIGIN = 0x08000000,   LENGTH = 256K
  FLASH_LOAD   (rx)    : ORIGIN = 0x0C000000,   LENGTH = 256K
  RAM          (xrw)   : ORIGIN = 0x1FFFC000,   LENGTH = 80K
}

/* Highest address of the user mode stack */
__StackTop = ADDR(.ramfunc);
_estack = __StackTop;

/* Sections */
SECTIONS
{
  /* Vector table must be the very first thing in FLASH */
  .isr_vector ORIGIN(FLASH) : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    KEEP(*(.vectors))
    KEEP(*(.isr_vector))
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  /* The program code and other data into "FLASH" Rom type memory */
  .text : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    *(.text)           /* .text sections (code) */
    *(.text*)          /* .text* sections (code) */
    *(.glue_7)         /* glue arm to thumb code */
    *(.glue_7t)        /* glue thumb to arm code */
    *(.eh_frame)

    KEEP (*(.init))
    KEEP (*(.fini))

    . = ALIGN(4);
    _etext = .;        /* define a global symbols at end of code */
  } > FLASH AT> FLASH_LOAD

  /* Constant data into "FLASH" Rom type memory */
  .rodata : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    *(.rodata)         /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)        /* .rodata* sections (constants, strings, etc.) */
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  .ARM.extab : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    *(.ARM.extab* .gnu.linkonce.armextab.*)
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  .ARM : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    __exidx_start = .;
    *(.ARM.exidx*)
    __exidx_end = .;
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  .preinit_array : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  .init_array : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  .fini_array : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  /* Copy table used by Reset_Handler to initialize RAM sections */
  .copy.table : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    __copy_table_start__ = .;

    LONG(LOADADDR(.data))
    LONG(ADDR(.data))
    LONG(SIZEOF(.data))

    LONG(LOADADDR(.ramfunc))
    LONG(ADDR(.ramfunc))
    LONG(SIZEOF(.ramfunc))

    __copy_table_end__ = .;
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  /* Zero table used by Reset_Handler to initialize BSS sections */
  .zero.table : ALIGN_WITH_INPUT
  {
    . = ALIGN(4);
    __zero_table_start__ = .;

    LONG(ADDR(.bss))
    LONG(SIZEOF(.bss))

    __zero_table_end__ = .;
    . = ALIGN(4);
  } > FLASH AT> FLASH_LOAD

  /* Used by the startup to initialize data */
  _sidata = LOADADDR(.data);

  /* Initialized data sections into "RAM" Ram type memory */
  .data :
  {
    . = ALIGN(4);
    _sdata = .;        /* create a global symbol at data start */
    *(.data)           /* .data sections */
    *(.data*)          /* .data* sections */

    . = ALIGN(4);
    _edata = .;        /* define a global symbol at data end */
  } > RAM AT> FLASH_LOAD

  /* Uninitialized data section into "RAM" Ram type memory */
  . = ALIGN(4);
  .bss (NOLOAD) :
  {
    /* This is used by the startup in order to initialize the .bss section */
    _sbss = .;         /* define a global symbol at bss start */
    __bss_start__ = _sbss;
    *(.bss)
    *(.bss*)
    *(COMMON)

    . = ALIGN(4);
    _ebss = .;         /* define a global symbol at bss end */
    __bss_end__ = _ebss;
  } > RAM

  /* User_heap_stack section, used to check that there is enough "RAM" Ram type memory left */
  ._user_heap_stack (NOLOAD) :
  {
    . = ALIGN(8);
    PROVIDE ( end = . );
    PROVIDE ( _end = . );
    . = . + _Min_Heap_Size;
    . = . + _Min_Stack_Size;
    . = ALIGN(8);
  } > RAM

  /* Code run from RAM (Delay_Cyc...): top of RAM = system-bus SRAM, like STM32
     .RamFunc. Must stay the last RAM section; the stack ends below it. */
  .ramfunc ((ORIGIN(RAM) + LENGTH(RAM) - SIZEOF(.ramfunc)) & ~7) :
  {
    . = ALIGN(4);
    *(.RamFunc)        /* .RamFunc sections */
    *(.RamFunc*)       /* .RamFunc* sections */
    . = ALIGN(4);
  } > RAM AT> FLASH_LOAD
  ASSERT(ADDR(.ramfunc) >= 0x20000000, "RamFunc must be in system-bus SRAM")

  /* Remove information from the compiler libraries */
  /DISCARD/ :
  {
    libc.a ( * )
    libm.a ( * )
    libgcc.a ( * )
  }

  .ARM.attributes 0 : { *(.ARM.attributes) }
}
