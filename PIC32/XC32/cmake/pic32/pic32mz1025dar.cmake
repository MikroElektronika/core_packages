if(${MCU_NAME} MATCHES "^PIC32MZ1025DAR169$|^PIC32MZ1025DAR176$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()