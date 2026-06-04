if(${MCU_NAME} MATCHES "^HC32M120F6TB$|^HC32M120J6TB$|^HC32M140F8$|^HC32M140J8$|^HC32M140KA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
