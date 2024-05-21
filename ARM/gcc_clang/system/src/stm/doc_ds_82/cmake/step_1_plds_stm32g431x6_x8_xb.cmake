if(${MCU_NAME} MATCHES "^STM32G431C6$|^STM32G431K6$|^STM32G431R6$|^STM32G431V6$|^STM32G431M6$|^STM32G431C8$|^STM32G431K8$|^STM32G431R8$|^STM32G431V8$|^STM32G431M8$|^STM32G431CB$|^STM32G431KB$|^STM32G431RB$|^STM32G431VB$|^STM32G431MB$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
