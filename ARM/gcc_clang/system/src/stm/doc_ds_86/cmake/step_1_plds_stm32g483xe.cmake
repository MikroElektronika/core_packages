if(${MCU_NAME} MATCHES "^STM32G483CE$|^STM32G483RE$|^STM32G483ME$|^STM32G483PE$|^STM32G483VE$|^STM32G483QE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
