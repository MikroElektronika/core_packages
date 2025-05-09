if(${MCU_NAME} MATCHES "^MKW31Z256VHT4$|^MKW31Z512CAT4$|^MKW31Z512VHT4$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mkw31z/init_clock.c)
endif()
