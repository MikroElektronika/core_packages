/*!
 * @file       apm32f445_64_flash.ld
 *
 * @brief      Linker script for APM32F445 series
 *
 * @version    V1.0.0
 *
 * @date        2026-01-31
 *
 * @attention
 *
 *  Copyright (C) 2026 Geehy Semiconductor
 *
 *  You may not use this file except in compliance with the
 *  GEEHY COPYRIGHT NOTICE (GEEHY SOFTWARE PACKAGE LICENSE).
 *
 *  The program is only for reference, which is distributed in the hope
 *  that it will be useful and instructional for customers to develop
 *  their software. Unless required by applicable law or agreed to in
 *  writing, the program is distributed on an "AS IS" BASIS, WITHOUT
 *  ANY WARRANTY OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the GEEHY SOFTWARE PACKAGE LICENSE for the governing permissions
 *  and limitations under the License.
 */

/* Entry Point */
ENTRY(Reset_Handler)

__RAM_VECTOR_TABLE_SIZE = DEFINED(__flash_vector_table__) ? 0x0 : 0x0400;

/* flash interrupt */
start_flash_interrupts = 0x00000000;
size_flash_interrupts  = 0x00000400;

/* flash_config */
start_flash_config = 0x00000400;
size_flash_config  = 0x00000010;

/* flash text */
start_flash_text = 0x00000410;
size_flash_text  = 0x0003FBF0;

/* ram interrupt */
start_ram_interrupts = 0x1FFF8000;
size_ram_interrupts  = __RAM_VECTOR_TABLE_SIZE;

/* ram data */
start_ram_data = 0x1FFF8000 + __RAM_VECTOR_TABLE_SIZE;
size_ram_data  = 0x00008000 - __RAM_VECTOR_TABLE_SIZE;

/* ram data2 */
start_ram_data2 = 0x20000000;
size_ram_data2  = 0x00007000;

/* Stack / Heap Configuration */
_end_stack = 0x20007000;
/* Heap Size (in Bytes) */
_heap_size = 0x400;
/* Stack Size (in Bytes) */
_stack_size = 0x400;

MEMORY
{
FLASH_INT (rx)      : ORIGIN = start_flash_interrupts,  LENGTH = size_flash_interrupts
FLASH_CONFIG (rw)   : ORIGIN = start_flash_config,      LENGTH = size_flash_config
FLASH_TEXT (rw)     : ORIGIN = start_flash_text,        LENGTH = size_flash_text

RAM_INT (rw)        : ORIGIN = start_ram_interrupts,    LENGTH = size_ram_interrupts
RAM_DATA (rw)       : ORIGIN = start_ram_data,          LENGTH = size_ram_data
RAM_DATA2 (rw)      : ORIGIN = start_ram_data2,         LENGTH = size_ram_data2
}

SECTIONS
{
  .apm32_isr_vector :
  {
    . = ALIGN(4);

    __VECTOR_TABLE11 = .;
    __ROM_VECTOR_START = .;
    __VECTOR_ROM = .;
    KEEP(*(.apm32_isr_vector))
    . = ALIGN(4);
    __ROM_VECTOR_END = .;
  } >FLASH_INT


  .flash_config :
  {
    . = ALIGN(4);
    KEEP(*(.FlashConfig))
    . = ALIGN(4);
  } > FLASH_CONFIG

  .text :
  {
    . = ALIGN(4);
    *(.text)
    *(.text*)
    *(.rodata)
    *(.rodata*)
    *(.init)
    *(.fini)
    *(.eh_frame)
    . = ALIGN(4);
  } >FLASH_TEXT

  .ARM.extab   : {
    *(.ARM.extab* .gnu.linkonce.armextab.*)
  } >FLASH_TEXT
  .ARM : {
    __exidx_start = .;
    *(.ARM.exidx*)
    . = ALIGN(4);
    __exidx_end = .;
  } >FLASH_TEXT

  __ROM_DATA_START = __exidx_end;

  .ram_vectors :
  {
    . = ALIGN(4);
    __VECTOR_RAM = .;
    __RAM_START = .;
    __ram_vectors_start__ = .;
    *(._ram_vectors)
    . += __RAM_VECTOR_TABLE_SIZE;
    . = ALIGN(4);
    __ram_vectors_end__ = .;
  } > RAM_INT AT > FLASH_TEXT

  .data :
  {
    . = ALIGN(4);
    __DATA_RAM = .;
    __data_start__ = .;
    __RAM_DATA_START = .;
    *(.data)
    *(.data*)
    . = ALIGN(4);
    __data_end__ = .;
    __RAM_DATA_END = .;
  } >RAM_DATA  AT > FLASH_TEXT
  __ROM_DATA_END = __ROM_DATA_START + (__ram_vectors_end__ - __ram_vectors_start__)+ (__data_end__ - __data_start__);

  __ROMCODE_START = __ROM_DATA_END;
  .ramcode :
  {
    . = ALIGN(4);
    __ram_code_start__ = .;
	__RAM_CODE_START = .;
    *(.code_ram)
    . = ALIGN(4);
    __ram_code_end__ = .;
	__RAM_CODE_END = .;
  } > RAM_DATA AT > FLASH_TEXT
  __ROMCODE_END = __ROMCODE_START + (__ram_code_end__ - __ram_code_start__);

  __USER_ROM_START = __ROMCODE_END;
  .userSectionBlock  ORIGIN(RAM_DATA2) :
  {
    __userSection_start__ = .;
    __USER_SECTION_RAM_START = .;
    KEEP(*(.userSection))
    __userSection_end__ = .;
    __USER_SECTION_RAM_END = .;
  } > RAM_DATA2 AT > FLASH_TEXT
  __USER_ROM_END = __USER_ROM_START + (__userSection_end__ - __userSection_start__);

  __rom_end    = __USER_ROM_END;

  .bss :
  {
    . = ALIGN(4);
    __bss_start__ = .;
    __BSS_START = .;
    *(.bss)
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end__ = .;
    __BSS_END = .;
  } > RAM_DATA2

  ._user_heap :
  {
    . = ALIGN(8);
    __end__ = .;
    __heap_start__ = .;
    PROVIDE(end = .);
    PROVIDE(_end = .);
    PROVIDE(__end = .);
    __HeapBase = .;
    . += _heap_size;
    __HeapLimit = .;
    __heap_limit = .;
    __heap_end__ = .;
  } >RAM_DATA2

  /* Initializes stack on the end of block */
  __StackTop   = ORIGIN(RAM_DATA2) + LENGTH(RAM_DATA2);
  __StackLimit = __StackTop - _stack_size;
  PROVIDE(__stack = __StackTop);
  __RAM_END = __StackTop;

  ._user_stack __StackLimit :
  {
    . = ALIGN(8);
    __stack_start__ = .;
    . += _stack_size;
    __stack_end__ = .;
  } > RAM_DATA2

  .ARM.attributes 0 : { *(.ARM.attributes) }

}


