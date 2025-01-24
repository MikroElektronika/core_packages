if(${MCU_NAME} MATCHES "^MK10DN512ZVLK10$|^MK10DN512ZVMB10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_10/init_clock.c)
endif()


