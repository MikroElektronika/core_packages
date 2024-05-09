if(${MCU_NAME} MATCHES "^STM32C011F4$|^STM32C011J4$|^STM32C011F6$|^STM32C011J6$|^STM32C011D6$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
