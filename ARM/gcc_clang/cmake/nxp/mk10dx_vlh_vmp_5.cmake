if(${MCU_NAME} MATCHES "^MK10DX32VLH5$|^MK10DX64VLH5$|^MK10DX128VLH5$|^MK10DX32VMP5$|^MK10DX64VMP5$|^MK10DX128VMP5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_6/init_clock.c)
endif()
