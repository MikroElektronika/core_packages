if(${MCU_NAME} MATCHES "^MKL25Z128VFM4$|^MKL25Z128VFT4$|^MKL25Z128VLH4$|^MKL25Z128VLK4$|^MKL25Z32VFM4$|^MKL25Z32VFT4$|^MKL25Z32VLH4$|^MKL25Z32VLK4$|^MKL25Z64VFM4$|^MKL25Z64VFT4$|^MKL25Z64VLH4$|^MKL25Z64VLK4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
