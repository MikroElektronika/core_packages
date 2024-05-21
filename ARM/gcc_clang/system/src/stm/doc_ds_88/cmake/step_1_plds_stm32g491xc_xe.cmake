if(${MCU_NAME} MATCHES "^STM32G491CC$|^STM32G491KC$|^STM32G491RC$|^STM32G491VC$|^STM32G491MC$|^STM32G491CE$|^STM32G491KE$|^STM32G491RE$|^STM32G491VE$|^STM32G491ME$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
