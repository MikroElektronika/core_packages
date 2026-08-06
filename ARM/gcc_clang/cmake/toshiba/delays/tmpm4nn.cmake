if(${MCU_NAME} MATCHES "^TMPM4NNF10FG$|^TMPM4NNF15FG$|^TMPM4NNF20FG$|^TMPM4NNFDFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
