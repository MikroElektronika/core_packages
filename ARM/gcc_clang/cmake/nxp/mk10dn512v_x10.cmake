if(${MCU_NAME} MATCHES "^MK10DN512VLK10$|^MK10DN512VMB10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_2/init_clock.c)
endif()

