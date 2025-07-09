if(${MCU_NAME} MATCHES "^M254KE3AE$|^M254KG6AE$|^M254MD2AE$|^M254QE3AE$|^M254SD2AE$|^M254SE3AE$|^M254SG6AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
