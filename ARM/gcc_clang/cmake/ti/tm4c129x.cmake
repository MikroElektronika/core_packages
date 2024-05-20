if(${MCU_NAME} MATCHES "^TM4C129.+$")
    set(${startupFile} startup/${vendor}/tm4c129xx.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_ti_tm4c129xx.c)

    ## Get appropriate linker script.
    if (${MCU_NAME} MATCHES "^TM4C129[49EX]KC.+$")
        set(${linkerScript} linker_scripts/${vendor}/tm4c129xkxx.ld PARENT_SCOPE)
    else()
        set(${linkerScript} linker_scripts/${vendor}/tm4c129xx.ld PARENT_SCOPE)
    endif()
endif()
