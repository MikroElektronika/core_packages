if(${MCU_NAME} MATCHES "^MK28FN2M0ACAU15R$|^MK28FN2M0AVMI15$|^MK28FN2M0CAU15$|^MK28FN2M0CAU15R$|^MK28FN2M0VMI15$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/doc_ds_18/init_clock.c)
endif()
