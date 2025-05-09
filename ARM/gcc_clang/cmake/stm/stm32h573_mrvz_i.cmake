if(${MCU_NAME} MATCHES "^STM32H573MI$|^STM32H573RI$|^STM32H573VI$|^STM32H573ZI$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_92/init_clock.c)
endif()
