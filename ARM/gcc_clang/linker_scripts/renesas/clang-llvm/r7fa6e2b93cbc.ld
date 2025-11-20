/* generated memory regions file - do not edit */
RAM_START = 0x20000000;
RAM_LENGTH = 0x0000a000;
FLASH_START = 0x00000000;
FLASH_LENGTH = 0x00020000;
DATA_FLASH_START = 0x08000000;
DATA_FLASH_LENGTH = 0x00001000;
QSPI_FLASH_START = 0x60000000;
QSPI_FLASH_LENGTH = 0x04000000;
OPTION_SETTING_OFS0_START = 0x0100a100;
OPTION_SETTING_OFS0_LENGTH = 0x00000004;
OPTION_SETTING_OSIS_START = 0x0100a120;
OPTION_SETTING_OSIS_LENGTH = 0x00000010;
OPTION_SETTING_OFS1_SEC_START = 0x0100a200;
OPTION_SETTING_OFS1_SEC_LENGTH = 0x00000004;
OPTION_SETTING_BPS_SEC_START = 0x0100a240;
OPTION_SETTING_BPS_SEC_LENGTH = 0x00000004;
OPTION_SETTING_PBPS_SEC_START = 0x0100a260;
OPTION_SETTING_PBPS_SEC_LENGTH = 0x00000004;
MEMORY
{
    RAM (rwx) : ORIGIN = RAM_START, LENGTH = RAM_LENGTH
    FLASH (rx) : ORIGIN = FLASH_START, LENGTH = FLASH_LENGTH
    DATA_FLASH (rx) : ORIGIN = DATA_FLASH_START, LENGTH = DATA_FLASH_LENGTH
    QSPI_FLASH (rx) : ORIGIN = QSPI_FLASH_START, LENGTH = QSPI_FLASH_LENGTH
    OPTION_SETTING_OFS0 (r) : ORIGIN = OPTION_SETTING_OFS0_START, LENGTH = OPTION_SETTING_OFS0_LENGTH
    OPTION_SETTING_OSIS (r) : ORIGIN = OPTION_SETTING_OSIS_START, LENGTH = OPTION_SETTING_OSIS_LENGTH
    OPTION_SETTING_OFS1_SEC (r) : ORIGIN = OPTION_SETTING_OFS1_SEC_START, LENGTH = OPTION_SETTING_OFS1_SEC_LENGTH
    OPTION_SETTING_BPS_SEC (r) : ORIGIN = OPTION_SETTING_BPS_SEC_START, LENGTH = OPTION_SETTING_BPS_SEC_LENGTH
    OPTION_SETTING_PBPS_SEC (r) : ORIGIN = OPTION_SETTING_PBPS_SEC_START, LENGTH = OPTION_SETTING_PBPS_SEC_LENGTH
}

/* code entry point...need to define to keep crt0 _start out */
ENTRY(Reset_Handler)


SECTIONS
{
    /***** QSPI_FLASH memory section allocations ******/
    .qspi_flash.startof  :
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

    __qspi_flash_readonly$$  :
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

    .qspi_flash.endof ALIGN(.,512) :
    {
        __ddsc_QSPI_FLASH_END = . ;
    }  > QSPI_FLASH

    /***** DATA_FLASH memory section allocations ******/
    .data_flash.startof  :
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

    __data_flash_readonly$$  :
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

    .data_flash.endof ALIGN(.,1024) :
    {
        __ddsc_DATA_FLASH_END = . ;
    }  > DATA_FLASH

    /***** FLASH memory section allocations ******/
    .flash.startof  :
    {
        __ddsc_FLASH_START = . ;
    }  > FLASH

    /* MCU vector table */
    __flash_vectors$$  :
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
    __ram_noinit_nocache$$ ALIGN(.,32) (NOLOAD) :
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

    /* Initialized thread local storage */
    __ram_tdata$$  :
    {
        __ram_tdata$$Base = . ;__ram_tdata$$Load = LOADADDR(__ram_tdata$$) ;
        *(.tdata)
        *(.tdata.*)
        *(.gnu.linkonce.td.*)
        __ram_tdata$$Limit = . ;
    }  > RAM AT > FLASH

    /* Zeroed thread local storage */
    __ram_tbss$$  (NOLOAD) :
    {
        __ram_tbss$$Base = . ;
        *(.tbss)
        *(.tbss.*)
        *(.gnu.linkonce.tb.*)
        *(.tcommon)
        __ram_tbss$$Limit = . ;
    }  > RAM
    /* Thread Stacks */

    __ram_thread_stack$$ ALIGN(.,8) (NOLOAD) :
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

    __flash_readonly$$  :
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

    __flash_ctor$$  :
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

    __flash_preinit_array$$  :
    {
        __preinit_array_start = . ;
        KEEP(*(.preinit_array))
        __preinit_array_end = . ;
    }  > FLASH

    __flash_.got$$  :
    {
        *(.got.plt)
        *(.got)
    }  > FLASH

    __flash_init_array$$  :
    {
        __init_array_start = . ;
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        __init_array_end = . ;
    }  > FLASH

    __flash_fini_array$$  :
    {
        __fini_array_start = . ;
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array))
        __fini_array_end = . ;
    }  > FLASH

    /* Discard exception tables */
    /DISCARD/  :
    {
        *(.ARM.extab*)
        *(.gnu.linkonce.armextab.*)
        *(.ARM.exidx*)
        *(.gnu.linkonce.armexidx.*)
    }  > FLASH

    /* Dummy section to hold required exidx labels */
    __flash_arm.exidx$$  :
    {
        __exidx_start = . ;
        __exidx_end = . ;
    }  > FLASH

    .flash.endof ALIGN(.,32768) :
    {
        __ddsc_FLASH_END = . ;
    }  > FLASH

    .flash.flat_nsc ALIGN(.,32768) :
    {
        __ddsc_FLASH_NSC = . ;
    }  > FLASH

    /***** OPTION_SETTING_OFS0 memory section allocations ******/
    .option_setting_ofs0.startof  :
    {
        __ddsc_OPTION_SETTING_OFS0_START = . ;
    }  > OPTION_SETTING_OFS0

    /* Option Function Select Register 0 Secure */
    __option_setting_ofs0_reg$$  :
    {
        __option_setting_ofs0_reg$$Base = . ;
        KEEP(*(.option_setting_ofs0))
        __option_setting_ofs0_reg$$Limit = . ;
    }  > OPTION_SETTING_OFS0

    .option_setting_ofs0.endof  :
    {
        __ddsc_OPTION_SETTING_OFS0_END = . ;
    }  > OPTION_SETTING_OFS0

    /***** OPTION_SETTING_OSIS memory section allocations ******/
    .option_setting_osis.startof  :
    {
        __ddsc_OPTION_SETTING_OSIS_START = . ;
    }  > OPTION_SETTING_OSIS

    /* OCD/Serial Programmer ID setting register Secure */
    __option_setting_osis_reg$$  :
    {
        __option_setting_osis_reg$$Base = . ;
        KEEP(*(.option_setting_osis))
        __option_setting_osis_reg$$Limit = . ;
    }  > OPTION_SETTING_OSIS

    .option_setting_osis.endof  :
    {
        __ddsc_OPTION_SETTING_OSIS_END = . ;
    }  > OPTION_SETTING_OSIS

    /***** OPTION_SETTING_OFS1_SEC memory section allocations ******/
    .option_setting_ofs1_sec.startof  :
    {
        __ddsc_OPTION_SETTING_OFS1_SEC_START = . ;
    }  > OPTION_SETTING_OFS1_SEC

    /* Option Function Select Register 1 Secure */
    __option_setting_ofs1_sec_reg$$  :
    {
        __option_setting_ofs1_sec_reg$$Base = . ;
        KEEP(*(.option_setting_ofs1_sec))
        __option_setting_ofs1_sec_reg$$Limit = . ;
    }  > OPTION_SETTING_OFS1_SEC

    .option_setting_ofs1_sec.endof  :
    {
        __ddsc_OPTION_SETTING_OFS1_SEC_END = . ;
    }  > OPTION_SETTING_OFS1_SEC

    /***** OPTION_SETTING_BPS_SEC memory section allocations ******/
    .option_setting_bps_sec.startof  :
    {
        __ddsc_OPTION_SETTING_BPS_SEC_START = . ;
    }  > OPTION_SETTING_BPS_SEC

    /* Block Protect Setting Register Secure */
    __option_setting_bps_sec_reg$$  :
    {
        __option_setting_bps_sec_reg$$Base = . ;
        KEEP(*(.option_setting_bps_sec))
        __option_setting_bps_sec_reg$$Limit = . ;
    }  > OPTION_SETTING_BPS_SEC

    .option_setting_bps_sec.endof  :
    {
        __ddsc_OPTION_SETTING_BPS_SEC_END = . ;
    }  > OPTION_SETTING_BPS_SEC

    /***** OPTION_SETTING_PBPS_SEC memory section allocations ******/
    .option_setting_pbps_sec.startof  :
    {
        __ddsc_OPTION_SETTING_PBPS_SEC_START = . ;
    }  > OPTION_SETTING_PBPS_SEC
    /* Permanent Block Protect Setting Register Secure */

    __option_setting_pbps_sec_reg$$  :
    {
        __option_setting_pbps_sec_reg$$Base = . ;
        KEEP(*(.option_setting_pbps_sec))
        __option_setting_pbps_sec_reg$$Limit = . ;
    }  > OPTION_SETTING_PBPS_SEC

    .option_setting_pbps_sec.endof  :
    {
        __ddsc_OPTION_SETTING_PBPS_SEC_END = . ;
    }  > OPTION_SETTING_PBPS_SEC
}

PROVIDE( __tls_base = ADDR(__ram_tdata$$) );
PROVIDE( __tdata_source = LOADADDR(__ram_tdata$$) );
PROVIDE( __tdata_size = SIZEOF(__ram_tdata$$) );
PROVIDE( __tbss_offset = ADDR(__ram_tbss$$) - ADDR(__ram_tdata$$) );
PROVIDE( __tbss_size = SIZEOF(__ram_tbss$$) );
PROVIDE( __arm32_tls_tcb_offset = 8 );
