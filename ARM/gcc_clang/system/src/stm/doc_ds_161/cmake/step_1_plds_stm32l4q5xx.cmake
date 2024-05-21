if(${MCU_NAME} MATCHES "^STM32L4Q5AG$|^STM32L4Q5CG$|^STM32L4Q5QG$|^STM32L4Q5RG$|^STM32L4Q5VG$|^STM32L4Q5ZG$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
