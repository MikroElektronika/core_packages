if(${MCU_NAME} MATCHES "^MK26FN2M0VMD18$|^MK26FN2M0VMI18$|^MK26FN2M0VLQ18$|^MK26FN2M0CAC18R$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
