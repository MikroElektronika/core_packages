if(${MCU_NAME} MATCHES "^STM32G441CB$|^STM32G441KB$|^STM32G441RB$|^STM32G441MB$|^STM32G441VB$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
