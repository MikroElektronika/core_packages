if(${MCU_NAME} MATCHES "^M258KE3AE$|^M258KG6AE$|^M258QE3AE$|^M258SE3AE$|^M258SG6AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
