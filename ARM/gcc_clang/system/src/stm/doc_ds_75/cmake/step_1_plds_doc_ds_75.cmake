if(${MCU_NAME} MATCHES "^STM32G061C6$|^STM32G061F6$|^STM32G061G6$|^STM32G061K6$|^STM32G061C8$|^STM32G061F8$|^STM32G061G8$|^STM32G061K8$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
