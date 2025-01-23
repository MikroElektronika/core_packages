if(${MCU_NAME} MATCHES "^MK20DN128VFT5$|^MK20DN128VLF5$|^MK20DX128VFT5$|^MK20DX128VLF5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_60/init_clock.c)
endif()


