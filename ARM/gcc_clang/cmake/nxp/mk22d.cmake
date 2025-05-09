if(${MCU_NAME} MATCHES "^MK22DN512VLH5$|^MK22DN512VLK5$|^MK22DN512VMC5$|^MK22DX128VLF5$|^MK22DX128VLH5$|^MK22DX128VLK5$|^MK22DX128VMC5$|^MK22DX256VLF5$|^MK22DX256VLH5$|^MK22DX256VLK5$|^MK22DX256VMC5$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mk22d/init_clock.c)
endif()
