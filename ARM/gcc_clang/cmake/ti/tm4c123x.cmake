if(${MCU_NAME} MATCHES "^TM4C123.+$")
    set(${startupFile} startup/${vendor}/tm4c123xx.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_ti_tm4c123xx.c)
endif()
