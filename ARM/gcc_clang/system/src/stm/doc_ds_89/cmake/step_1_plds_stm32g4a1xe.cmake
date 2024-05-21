if(${MCU_NAME} MATCHES "^STM32G4A1CE$|^STM32G4A1KE$|^STM32G4A1ME$|^STM32G4A1RE$|^STM32G4A1VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
