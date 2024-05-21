if(${MCU_NAME} MATCHES "^STM32G484CE$|^STM32G484ME$|^STM32G484PE$|^STM32G484RE$|^STM32G484QE$|^STM32G484VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
