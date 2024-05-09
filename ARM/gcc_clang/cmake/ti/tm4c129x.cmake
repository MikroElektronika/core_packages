if(${MCU_NAME} MATCHES "^TM4C129.+$")
    set(${startupFile} startup/${vendor}/tm4c129xx.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_ti_tm4c129xx.c)
endif()
