if(${MCU_NAME} MATCHES "^MKS20FN256VLL12$|^MKS20FN256VLH12$|^MKS20FN256VFT12$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_58/init_clock.c)
endif()


