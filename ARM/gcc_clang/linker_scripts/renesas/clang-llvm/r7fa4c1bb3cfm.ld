/* generated memory regions file - do not edit */
RAM_START = 0x20000000;
RAM_LENGTH = 0x00018000;
FLASH_START = 0x00000000;
FLASH_LENGTH = 0x00040000;
DATA_FLASH_START = 0x08000000;
DATA_FLASH_LENGTH = 0x00002000;
QSPI_FLASH_START = 0x60000000;
QSPI_FLASH_LENGTH = 0x08000000;
OPTION_SETTING_OFS0_START = 0x0100a100;
OPTION_SETTING_OFS0_LENGTH = 0x00000004;
OPTION_SETTING_DUALSEL_START = 0x0100a110;
OPTION_SETTING_DUALSEL_LENGTH = 0x00000004;
OPTION_SETTING_OFS1_START = 0x0100a180;
OPTION_SETTING_OFS1_LENGTH = 0x00000004;
OPTION_SETTING_BANKSEL_START = 0x0100a190;
OPTION_SETTING_BANKSEL_LENGTH = 0x00000004;
OPTION_SETTING_BPS_START = 0x0100a1c0;
OPTION_SETTING_BPS_LENGTH = 0x0000000c;
OPTION_SETTING_PBPS_START = 0x0100a1e0;
OPTION_SETTING_PBPS_LENGTH = 0x0000000c;
OPTION_SETTING_OFS1_SEC_START = 0x0100a200;
OPTION_SETTING_OFS1_SEC_LENGTH = 0x00000004;
OPTION_SETTING_BANKSEL_SEC_START = 0x0100a210;
OPTION_SETTING_BANKSEL_SEC_LENGTH = 0x00000004;
OPTION_SETTING_BPS_SEC_START = 0x0100a240;
OPTION_SETTING_BPS_SEC_LENGTH = 0x0000000c;
OPTION_SETTING_PBPS_SEC_START = 0x0100a260;
OPTION_SETTING_PBPS_SEC_LENGTH = 0x0000000c;
OPTION_SETTING_OFS1_SEL_START = 0x0100a280;
OPTION_SETTING_OFS1_SEL_LENGTH = 0x00000004;
OPTION_SETTING_BANKSEL_SEL_START = 0x0100a290;
OPTION_SETTING_BANKSEL_SEL_LENGTH = 0x00000004;
OPTION_SETTING_BPS_SEL_START = 0x0100a2c0;
OPTION_SETTING_BPS_SEL_LENGTH = 0x0000000c;
MEMORY
{
  RAM (rwx) : ORIGIN = RAM_START, LENGTH = RAM_LENGTH
  FLASH (rx) : ORIGIN = FLASH_START, LENGTH = FLASH_LENGTH
  DATA_FLASH (rx) : ORIGIN = DATA_FLASH_START, LENGTH = DATA_FLASH_LENGTH
  QSPI_FLASH (rx) : ORIGIN = QSPI_FLASH_START, LENGTH = QSPI_FLASH_LENGTH
  OPTION_SETTING_OFS0 (r) : ORIGIN = OPTION_SETTING_OFS0_START, LENGTH = OPTION_SETTING_OFS0_LENGTH
  OPTION_SETTING_DUALSEL (r) : ORIGIN = OPTION_SETTING_DUALSEL_START, LENGTH = OPTION_SETTING_DUALSEL_LENGTH
  OPTION_SETTING_OFS1 (r) : ORIGIN = OPTION_SETTING_OFS1_START, LENGTH = OPTION_SETTING_OFS1_LENGTH
  OPTION_SETTING_BANKSEL (r) : ORIGIN = OPTION_SETTING_BANKSEL_START, LENGTH = OPTION_SETTING_BANKSEL_LENGTH
  OPTION_SETTING_BPS (r) : ORIGIN = OPTION_SETTING_BPS_START, LENGTH = OPTION_SETTING_BPS_LENGTH
  OPTION_SETTING_PBPS (r) : ORIGIN = OPTION_SETTING_PBPS_START, LENGTH = OPTION_SETTING_PBPS_LENGTH
  OPTION_SETTING_OFS1_SEC (r) : ORIGIN = OPTION_SETTING_OFS1_SEC_START, LENGTH = OPTION_SETTING_OFS1_SEC_LENGTH
  OPTION_SETTING_BANKSEL_SEC (r) : ORIGIN = OPTION_SETTING_BANKSEL_SEC_START, LENGTH = OPTION_SETTING_BANKSEL_SEC_LENGTH
  OPTION_SETTING_BPS_SEC (r) : ORIGIN = OPTION_SETTING_BPS_SEC_START, LENGTH = OPTION_SETTING_BPS_SEC_LENGTH
  OPTION_SETTING_PBPS_SEC (r) : ORIGIN = OPTION_SETTING_PBPS_SEC_START, LENGTH = OPTION_SETTING_PBPS_SEC_LENGTH
  OPTION_SETTING_OFS1_SEL (r) : ORIGIN = OPTION_SETTING_OFS1_SEL_START, LENGTH = OPTION_SETTING_OFS1_SEL_LENGTH
  OPTION_SETTING_BANKSEL_SEL (r) : ORIGIN = OPTION_SETTING_BANKSEL_SEL_START, LENGTH = OPTION_SETTING_BANKSEL_SEL_LENGTH
  OPTION_SETTING_BPS_SEL (r) : ORIGIN = OPTION_SETTING_BPS_SEL_START, LENGTH = OPTION_SETTING_BPS_SEL_LENGTH
}

/* code entry point...need to define to keep crt0 _start out */
ENTRY(Reset_Handler)
/* Library configurations */
GROUP(libgcc.a libc.a libm.a)


SECTIONS
{
  /***** QSPI_FLASH memory section allocations ******/
  .qspi_flash.startof  (READONLY) : 
  {
       __ddsc_QSPI_FLASH_START = . ;
      
  }  > QSPI_FLASH
  /***** RAM memory section allocations ******/
  .ram.startof  : 
  {
       __ddsc_RAM_START = . ;
      
  }  > RAM
  __ram_dtc_vector$$  (NOLOAD) : 
  {
      __ram_dtc_vector$$Base = . ;
  *(.fsp_dtc_vector_table)
      __ram_dtc_vector$$Limit = . ;
  }  > RAM
  /* ram initialized from qspi_flash */
  __ram_from_qspi_flash$$  : 
  {
      __ram_from_qspi_flash$$Base = . ;__ram_from_qspi_flash$$Load = LOADADDR(__ram_from_qspi_flash$$) ;
  /* section.ram.from_qspi_flash */
  *(.ram_from_qspi_flash)
  /* section.ram.code_from_qspi_flash */
  *(.ram_code_from_qspi_flash)
      __ram_from_qspi_flash$$Limit = . ;
  }  > RAM AT > QSPI_FLASH

  __qspi_flash_readonly$$  (READONLY) : 
  {
      __qspi_flash_readonly$$Base = . ;
  /* section.qspi_flash.readonly */
  *(.qspi_flash)
  /* section.qspi_flash.code */
  *(.qspi_flash_code)
      __qspi_flash_readonly$$Limit = . ;
  }  > QSPI_FLASH
  __qspi_flash_noinit$$  (NOLOAD) : 
  {
      __qspi_flash_noinit$$Base = . ;
  /* section.qspi_flash.noinit */
  *(.qspi_flash_noinit)
      __qspi_flash_noinit$$Limit = . ;
  }  > QSPI_FLASH
  .qspi_flash.endof ALIGN(.,512) (READONLY) : 
  {
       __ddsc_QSPI_FLASH_END = . ;
      
  }  > QSPI_FLASH

  /***** DATA_FLASH memory section allocations ******/
  .data_flash.startof  (READONLY) : 
  {
       __ddsc_DATA_FLASH_START = . ;
      
  }  > DATA_FLASH
  /***** RAM memory section allocations ******/
  /* ram initialized from data_flash */
  __ram_from_data_flash$$  : 
  {
      __ram_from_data_flash$$Base = . ;__ram_from_data_flash$$Load = LOADADDR(__ram_from_data_flash$$) ;
  /* section.ram.from_data_flash */
  *(.ram_from_data_flash)
  /* section.ram.code_from_data_flash */
  *(.ram_code_from_data_flash)
      __ram_from_data_flash$$Limit = . ;
  }  > RAM AT > DATA_FLASH

  __data_flash_readonly$$  (READONLY) : 
  {
      __data_flash_readonly$$Base = . ;
  /* section.data_flash.readonly */
  *(.data_flash)
  /* section.data_flash.code */
  *(.data_flash_code)
      __data_flash_readonly$$Limit = . ;
  }  > DATA_FLASH
  __data_flash_noinit$$  (NOLOAD) : 
  {
      __data_flash_noinit$$Base = . ;
  /* section.data_flash.noinit */
  *(.data_flash_noinit)
      __data_flash_noinit$$Limit = . ;
  }  > DATA_FLASH
  .data_flash.endof ALIGN(.,1024) (READONLY) : 
  {
       __ddsc_DATA_FLASH_END = . ;
      
  }  > DATA_FLASH

  /***** FLASH memory section allocations ******/
  .flash.startof  (READONLY) : 
  {
       __ddsc_FLASH_START = . ;
      
  }  > FLASH
  /* MCU vector table */
  __flash_vectors$$  (READONLY) : 
  {
      __flash_vectors$$Base = . ; _VECTORS = . ;
  KEEP(*(.fixed_vectors))
  KEEP(*(.application_vectors))
      __flash_vectors$$Limit = . ;
  }  > FLASH
  __flash_noinit$$  (NOLOAD) : 
  {
      __flash_noinit$$Base = . ;
  /* section.flash.noinit */
  *(.flash_noinit)
      __flash_noinit$$Limit = . ;
  }  > FLASH
  /***** RAM memory section allocations ******/
  /* ram initialized from flash */
  __ram_from_flash$$  : 
  {
      __ram_from_flash$$Base = . ;__ram_from_flash$$Load = LOADADDR(__ram_from_flash$$) ;
  /* section.ram.from_flash */
  *(.ram_from_flash)
  /* section.ram.code_from_flash */
  *(.ram_code_from_flash)
  *(.data*)
  *(vtable)
      __ram_from_flash$$Limit = . ;
  }  > RAM AT > FLASH
  /* Non-initialized, non-cached ram */
  __ram_noinit_nocache$$  (NOLOAD) : ALIGN(32)
  {
      __ram_noinit_nocache$$Base = . ;
  /* section.ram.noinit_nocache */
  *(.ram_noinit_nocache)
      __ram_noinit_nocache$$Limit = . ;
  }  > RAM
  /* Zeroed, non-cached ram */
  __ram_zero_nocache$$  (NOLOAD) : 
  {
      __ram_zero_nocache$$Base = . ;
  /* section.ram.zero_nocache */
  *(.ram_nocache)
    . = ALIGN(32);
      __ram_zero_nocache$$Limit = . ;
  }  > RAM
  /* Non-initialized ram */
  __ram_noinit$$  (NOLOAD) : 
  {
      __ram_noinit$$Base = . ;
  /* section.ram.noinit */
  *(.bss.g_heap)
  *(.bss.g_main_stack)
  *(.ram_noinit)
  *(.noinit)
      __ram_noinit$$Limit = . ;
  }  > RAM
  /* Zeroed ram */
  __ram_zero$$  (NOLOAD) : 
  {
      __ram_zero$$Base = . ;
  /* section.ram.zero */
  *(.ram)
  *(.bss*)
      __ram_zero$$Limit = . ;
  }  > RAM
  /* Thread Stacks */
  __ram_thread_stack$$  (NOLOAD) : ALIGN(8)
  {
      __ram_thread_stack$$Base = . ;
  KEEP(*(.stack?*))
      __ram_thread_stack$$Limit = . ;
  }  > RAM
  .ram.endof ALIGN(.,8192) : 
  {
       __ddsc_RAM_END = . ;
      
  }  > RAM
  .ram.flat_nsc ALIGN(.,8192) : 
  {
       __ddsc_RAM_NSC = . ;
      
  }  > RAM

  __flash_readonly$$  (READONLY) : 
  {
      __flash_readonly$$Base = . ;
  /* section.flash.readonly */
  *(.flash)
  /* section.flash.code */
  *(.flash_code)
  *(.text*)
  *(.rodata*)
  KEEP(*(.mcuboot_sce9_key))
  KEEP(*(.version))
      __flash_readonly$$Limit = . ;
  }  > FLASH
  __flash_ctor$$  (READONLY) : 
  {
      
  *crtbegin.o(.ctors)
  *crtbegin?.o(.ctors)
  EXCLUDE_FILE (*crtend?.o *crtend.o) *(.ctors)
  *(SORT(.ctors.*))
  *(.ctors)
  *crtbegin.o(.dtors)
  *crtbegin?.o(.dtors)
  EXCLUDE_FILE (*crtend?.o *crtend.o) *(.dtors)
  *(SORT(.dtors.*))
  *(.dtors)
      
  }  > FLASH
  __flash_preinit_array$$  (READONLY) : 
  {
       __preinit_array_start = . ;
  KEEP(*(.preinit_array))
       __preinit_array_end = . ;
  }  > FLASH
  __flash_.got$$  (READONLY) : 
  {
      
  *(.got.plt)
  *(.got)
      
  }  > FLASH
  __flash_init_array$$  (READONLY) : 
  {
       __init_array_start = . ;
  KEEP(*(SORT(.init_array.*)))
  KEEP(*(.init_array))
       __init_array_end = . ;
  }  > FLASH
  __flash_fini_array$$  (READONLY) : 
  {
       __fini_array_start = . ;
  KEEP(*(SORT(.fini_array.*)))
  KEEP(*(.fini_array))
       __fini_array_end = . ;
  }  > FLASH
  /* .ARM.extab sections contain exception unwinding information. */
  __flash_arm.extab$$  (READONLY) : 
  {
      
  *(.ARM.extab*)
  *(.gnu.linkonce.armextab.*)
      
  }  > FLASH
  /* .ARM.exidx sections contains index entries for section unwinding. */
  __flash_arm.exidx$$  (READONLY) : 
  {
       __exidx_start = . ;
  *(.ARM.exidx*)
  *(.gnu.linkonce.armexidx.*)
       __exidx_end = . ;
  }  > FLASH
  .flash.endof ALIGN(.,32768) (READONLY) : 
  {
       __ddsc_FLASH_END = . ;
      
  }  > FLASH
  .flash.flat_nsc ALIGN(.,32768) (READONLY) : 
  {
       __ddsc_FLASH_NSC = . ;
      
  }  > FLASH

  /***** OPTION_SETTING_OFS0 memory section allocations ******/
  .option_setting_ofs0.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS0_START = . ;
      
  }  > OPTION_SETTING_OFS0
  /* Option Function Select Register 0 */
  __option_setting_ofs0_reg$$  (READONLY) : 
  {
      __option_setting_ofs0_reg$$Base = . ;
  KEEP(*(.option_setting_ofs0))
      __option_setting_ofs0_reg$$Limit = . ;
  }  > OPTION_SETTING_OFS0
  .option_setting_ofs0.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS0_END = . ;
      
  }  > OPTION_SETTING_OFS0

  /***** OPTION_SETTING_DUALSEL memory section allocations ******/
  .option_setting_dualsel.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_DUALSEL_START = . ;
      
  }  > OPTION_SETTING_DUALSEL
  /* Dual Mode Select Register */
  __option_setting_dualsel_reg$$  (READONLY) : 
  {
      __option_setting_dualsel_reg$$Base = . ;
  KEEP(*(.option_setting_dualsel))
      __option_setting_dualsel_reg$$Limit = . ;
  }  > OPTION_SETTING_DUALSEL
  .option_setting_dualsel.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_DUALSEL_END = . ;
      
  }  > OPTION_SETTING_DUALSEL

  /***** OPTION_SETTING_OFS1 memory section allocations ******/
  .option_setting_ofs1.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_START = . ;
      
  }  > OPTION_SETTING_OFS1
  /* Option Function Select Register 1 */
  __option_setting_ofs1_reg$$  (READONLY) : 
  {
      __option_setting_ofs1_reg$$Base = . ;
  KEEP(*(.option_setting_ofs1))
      __option_setting_ofs1_reg$$Limit = . ;
  }  > OPTION_SETTING_OFS1
  .option_setting_ofs1.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_END = . ;
      
  }  > OPTION_SETTING_OFS1

  /***** OPTION_SETTING_BANKSEL memory section allocations ******/
  .option_setting_banksel.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_START = . ;
      
  }  > OPTION_SETTING_BANKSEL
  /* Bank Select Register */
  __option_setting_banksel_reg$$  (READONLY) : 
  {
      __option_setting_banksel_reg$$Base = . ;
  KEEP(*(.option_setting_banksel))
      __option_setting_banksel_reg$$Limit = . ;
  }  > OPTION_SETTING_BANKSEL
  .option_setting_banksel.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_END = . ;
      
  }  > OPTION_SETTING_BANKSEL

  /***** OPTION_SETTING_BPS memory section allocations ******/
  .option_setting_bps.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_START = . ;
      
  }  > OPTION_SETTING_BPS
  /* Block Protect Setting Register */
  __option_setting_bps_reg$$  (READONLY) : 
  {
      __option_setting_bps_reg$$Base = . ;
  KEEP(*(.option_setting_bps))
      __option_setting_bps_reg$$Limit = . ;
  }  > OPTION_SETTING_BPS
  .option_setting_bps.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_END = . ;
      
  }  > OPTION_SETTING_BPS

  /***** OPTION_SETTING_PBPS memory section allocations ******/
  .option_setting_pbps.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_PBPS_START = . ;
      
  }  > OPTION_SETTING_PBPS
  /* Permanent Block Protect Setting Register */
  __option_setting_pbps_reg$$  (READONLY) : 
  {
      __option_setting_pbps_reg$$Base = . ;
  KEEP(*(.option_setting_pbps))
      __option_setting_pbps_reg$$Limit = . ;
  }  > OPTION_SETTING_PBPS
  .option_setting_pbps.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_PBPS_END = . ;
      
  }  > OPTION_SETTING_PBPS

  /***** OPTION_SETTING_OFS1_SEC memory section allocations ******/
  .option_setting_ofs1_sec.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_SEC_START = . ;
      
  }  > OPTION_SETTING_OFS1_SEC
  /* Option Function Select Register 1 Secure */
  __option_setting_ofs1_sec_reg$$  (READONLY) : 
  {
      __option_setting_ofs1_sec_reg$$Base = . ;
  KEEP(*(.option_setting_ofs1_sec))
      __option_setting_ofs1_sec_reg$$Limit = . ;
  }  > OPTION_SETTING_OFS1_SEC
  .option_setting_ofs1_sec.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_SEC_END = . ;
      
  }  > OPTION_SETTING_OFS1_SEC

  /***** OPTION_SETTING_BANKSEL_SEC memory section allocations ******/
  .option_setting_banksel_sec.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_SEC_START = . ;
      
  }  > OPTION_SETTING_BANKSEL_SEC
  /* Bank Select Register Secure */
  __option_setting_banksel_sec_reg$$  (READONLY) : 
  {
      __option_setting_banksel_sec_reg$$Base = . ;
  KEEP(*(.option_setting_banksel_sec))
      __option_setting_banksel_sec_reg$$Limit = . ;
  }  > OPTION_SETTING_BANKSEL_SEC
  .option_setting_banksel_sec.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_SEC_END = . ;
      
  }  > OPTION_SETTING_BANKSEL_SEC

  /***** OPTION_SETTING_BPS_SEC memory section allocations ******/
  .option_setting_bps_sec.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_SEC_START = . ;
      
  }  > OPTION_SETTING_BPS_SEC
  /* Block Protect Setting Register Secure */
  __option_setting_bps_sec_reg$$  (READONLY) : 
  {
      __option_setting_bps_sec_reg$$Base = . ;
  KEEP(*(.option_setting_bps_sec))
      __option_setting_bps_sec_reg$$Limit = . ;
  }  > OPTION_SETTING_BPS_SEC
  .option_setting_bps_sec.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_SEC_END = . ;
      
  }  > OPTION_SETTING_BPS_SEC

  /***** OPTION_SETTING_PBPS_SEC memory section allocations ******/
  .option_setting_pbps_sec.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_PBPS_SEC_START = . ;
      
  }  > OPTION_SETTING_PBPS_SEC
  /* Permanent Block Protect Setting Register Secure */
  __option_setting_pbps_sec_reg$$  (READONLY) : 
  {
      __option_setting_pbps_sec_reg$$Base = . ;
  KEEP(*(.option_setting_pbps_sec))
      __option_setting_pbps_sec_reg$$Limit = . ;
  }  > OPTION_SETTING_PBPS_SEC
  .option_setting_pbps_sec.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_PBPS_SEC_END = . ;
      
  }  > OPTION_SETTING_PBPS_SEC

  /***** OPTION_SETTING_OFS1_SEL memory section allocations ******/
  .option_setting_ofs1_sel.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_SEL_START = . ;
      
  }  > OPTION_SETTING_OFS1_SEL
  /* OFS1 Security Attribution */
  __option_setting_ofs1_sel_reg$$  (READONLY) : 
  {
      __option_setting_ofs1_sel_reg$$Base = . ;
  KEEP(*(.option_setting_ofs1_sel))
      __option_setting_ofs1_sel_reg$$Limit = . ;
  }  > OPTION_SETTING_OFS1_SEL
  .option_setting_ofs1_sel.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_OFS1_SEL_END = . ;
      
  }  > OPTION_SETTING_OFS1_SEL

  /***** OPTION_SETTING_BANKSEL_SEL memory section allocations ******/
  .option_setting_banksel_sel.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_SEL_START = . ;
      
  }  > OPTION_SETTING_BANKSEL_SEL
  /* Banksel Security Attribution */
  __option_setting_banksel_sel_reg$$  (READONLY) : 
  {
      __option_setting_banksel_sel_reg$$Base = . ;
  KEEP(*(.option_setting_banksel_sel))
      __option_setting_banksel_sel_reg$$Limit = . ;
  }  > OPTION_SETTING_BANKSEL_SEL
  .option_setting_banksel_sel.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BANKSEL_SEL_END = . ;
      
  }  > OPTION_SETTING_BANKSEL_SEL

  /***** OPTION_SETTING_BPS_SEL memory section allocations ******/
  .option_setting_bps_sel.startof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_SEL_START = . ;
      
  }  > OPTION_SETTING_BPS_SEL
  /* BPS Security Attribution */
  __option_setting_bps_sel_reg$$  (READONLY) : 
  {
      __option_setting_bps_sel_reg$$Base = . ;
  KEEP(*(.option_setting_bps_sel))
      __option_setting_bps_sel_reg$$Limit = . ;
  }  > OPTION_SETTING_BPS_SEL
  .option_setting_bps_sel.endof  (READONLY) : 
  {
       __ddsc_OPTION_SETTING_BPS_SEL_END = . ;
      
  }  > OPTION_SETTING_BPS_SEL

}

