## Get appropriate linker script.
if(${MCU_NAME} MATCHES "^(ds)?PIC(24|30|33).+$")
    set(${linkerScript} linker_scripts/${mcu_match}.ld PARENT_SCOPE)
endif()
