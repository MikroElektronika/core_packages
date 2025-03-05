if(${MCU_NAME} MATCHES "^PIC32MZ2064DAS169$|^PIC32MZ2064DAS176$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()