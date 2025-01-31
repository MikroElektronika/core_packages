if(${MCU_NAME} MATCHES "^STM32G0B1CB$|^STM32G0B1KB$|^STM32G0B1MB$|^STM32G0B1RB$|^STM32G0B1VB$|^STM32G0B1CC$|^STM32G0B1KC$|^STM32G0B1MC$|^STM32G0B1RC$|^STM32G0B1VC$|^STM32G0B1CE$|^STM32G0B1KE$|^STM32G0B1ME$|^STM32G0B1NE$|^STM32G0B1RE$|^STM32G0B1VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
