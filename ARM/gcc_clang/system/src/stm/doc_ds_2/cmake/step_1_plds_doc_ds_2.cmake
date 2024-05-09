if(${MCU_NAME} MATCHES "^STM32C031C4$|^STM32C031F4$|^STM32C031G4$|^STM32C031K4$|^STM32C031C6$|^STM32C031F6$|^STM32C031G6$|^STM32C031K6$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
