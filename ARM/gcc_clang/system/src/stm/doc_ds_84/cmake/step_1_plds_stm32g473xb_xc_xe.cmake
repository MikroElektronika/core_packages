if(${MCU_NAME} MATCHES "^STM32G473CB$|^STM32G473MB$|^STM32G473PB$|^STM32G473RB$|^STM32G473VB$|^STM32G473QB$|^STM32G473CC$|^STM32G473MC$|^STM32G473PC$|^STM32G473RC$|^STM32G473VC$|^STM32G473QC$|^STM32G473CE$|^STM32G473ME$|^STM32G473PE$|^STM32G473RE$|^STM32G473VE$|^STM32G473QE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
