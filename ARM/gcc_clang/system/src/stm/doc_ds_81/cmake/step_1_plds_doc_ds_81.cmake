if(${MCU_NAME} MATCHES "^STM32G0C1CC$|^STM32G0C1KC$|^STM32G0C1MC$|^STM32G0C1RC$|^STM32G0C1VC$|^STM32G0C1CE$|^STM32G0C1KE$|^STM32G0C1ME$|^STM32G0C1NE$|^STM32G0C1RE$|^STM32G0C1VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
