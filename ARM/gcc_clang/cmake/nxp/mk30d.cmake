if(${MCU_NAME} MATCHES "^MK30DN512VLK10$|^MK30DN512VLL10$|^MK30DN512VLQ10$|^MK30DN512VMC10$|^MK30DN512VMD10$|^MK30DX128VLQ10$|^MK30DX128VMD10$|^MK30DX256VLQ10$|^MK30DX256VMD10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mk30d/init_clock.c)
endif()
