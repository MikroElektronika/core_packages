## Get appropriate linker script.
if(${MCU_NAME} MATCHES "^PIC32(.+)$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()
