if(${MCU_NAME} MATCHES "^STM32L4P5AE$|^STM32L4P5AG$|^STM32L4P5CE$|^STM32L4P5CG$|^STM32L4P5QE$|^STM32L4P5QG$|^STM32L4P5RE$|^STM32L4P5RG$|^STM32L4P5VE$|^STM32L4P5VG$|^STM32L4P5ZE$|^STM32L4P5ZG$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
