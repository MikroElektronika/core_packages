if(${MCU_NAME} MATCHES "^M471CI8AE$|^M471KI8AE$|^M471MD6AE$|^M471R1E6AE$|^M471SE6AE$|^M471VI8AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
