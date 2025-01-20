if(${MCU_NAME} MATCHES "^MK10DX128VLL7$|^MK10DX256VLL7$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_9/init_clock.c)
endif()


