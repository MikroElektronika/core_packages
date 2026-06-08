if(${MCU_NAME} MATCHES "^M2L31SE4AE$|^M2L31SG4AE$|^M2L31SGDAE$|^M2L31SIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
