if(${MCU_NAME} MATCHES "^MK02FN64VLF10$|^MK02FN64VFM10$|^MK02FN64VLH10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_3/init_clock.c)
endif()


