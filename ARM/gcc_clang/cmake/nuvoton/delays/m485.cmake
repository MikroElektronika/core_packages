if(${MCU_NAME} MATCHES "^M485KIDAE$|^M485LIDAE$|^M485SIDAE$|^M485YIDAE$|^M485ZIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
