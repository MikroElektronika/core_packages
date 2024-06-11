if(${MCU_NAME} MATCHES "^STM32G051C6$|^STM32G051F6$|^STM32G051G6$|^STM32G051K6$|^STM32G051C8$|^STM32G051F8$|^STM32G051G8$|^STM32G051K8$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
