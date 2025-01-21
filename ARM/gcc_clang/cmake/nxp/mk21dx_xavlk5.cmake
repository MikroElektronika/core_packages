if(${MCU_NAME} MATCHES "^MK21DX512AVLK5$|^MK21DX256AVLK5$|^MK21DX128AVLK5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_48/init_clock.c)
endif()


