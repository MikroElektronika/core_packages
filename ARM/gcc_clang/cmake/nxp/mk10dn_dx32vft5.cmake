if(${MCU_NAME} MATCHES "^MK10DN32VFT5$|^MK10DX32VFT5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_5/init_clock.c)
endif()


