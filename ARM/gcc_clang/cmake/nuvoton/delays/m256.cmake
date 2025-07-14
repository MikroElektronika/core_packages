if(${MCU_NAME} MATCHES "^M256KE3AE$|^M256MD2AE$|^M256QE3AE$|^M256SD2AE$|^M256SE3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
