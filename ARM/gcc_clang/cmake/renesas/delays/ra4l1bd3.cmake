if(${MCU_NAME} MATCHES "^R7FA4L1BB3CAG$|^R7FA4L1BB3CAH$|^R7FA4L1BD3CAG$|^R7FA4L1BD3CAH$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/14)")
endif()
