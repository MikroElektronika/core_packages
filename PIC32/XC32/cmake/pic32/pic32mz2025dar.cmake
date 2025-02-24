if(${MCU_NAME} MATCHES "^PIC32MZ2025DAR169$|^PIC32MZ2025DAR176$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()