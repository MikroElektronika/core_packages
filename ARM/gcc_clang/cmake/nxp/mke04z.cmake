if(${MCU_NAME} MATCHES "^MKE04Z128VLD4$|^MKE04Z128VQH4$|^MKE04Z128VLH4$|^MKE04Z128VLK4$|^MKE04Z64VLD4$|^MKE04Z64VQH4$|^MKE04Z64VLH4$|^MKE04Z64VLK4$|^MKE04Z8VTG4$|^MKE04Z8VWJ4$|^MKE04Z8VFK4$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mke04z/init_clock.c)
endif()
