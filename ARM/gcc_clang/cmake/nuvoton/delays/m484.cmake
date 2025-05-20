if(${MCU_NAME} MATCHES "^M484KIDAE$|^M484SIDAE$|^M484SIDAE2U$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
