if(${MCU_NAME} MATCHES "^MK02FN128VFM10$|^MK02FN128VLH10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_3/init_clock.c)
endif()


