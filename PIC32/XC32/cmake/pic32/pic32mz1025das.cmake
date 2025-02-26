if(${MCU_NAME} MATCHES "^PIC32MZ1025DAS169$|^PIC32MZ1025DAS176$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()