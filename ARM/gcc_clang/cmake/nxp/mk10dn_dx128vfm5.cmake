if(${MCU_NAME} MATCHES "^MK10DN128VFM5$|^MK10DX128VFM5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/doc_ds_4/init_clock.c)
endif()


