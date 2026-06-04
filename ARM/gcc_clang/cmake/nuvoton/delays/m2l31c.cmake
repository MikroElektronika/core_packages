if(${MCU_NAME} MATCHES "^M2L31CGDAE$|^M2L31CIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
