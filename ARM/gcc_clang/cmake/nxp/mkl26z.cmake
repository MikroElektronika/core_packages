if(${MCU_NAME} MATCHES "^MKL26Z32VFM4$|^MKL26Z64VFM4$|^MKL26Z128VFM4$|^MKL26Z32VFT4$|^MKL26Z64VFT4$|^MKL26Z128VFT4$|^MKL26Z32VLH4$|^MKL26Z64VLH4$|^MKL26Z128VLH4$|^MKL26Z256VLH4$|^MKL26Z256VMP4$|^MKL26Z128VLL4$|^MKL26Z256VLL4$|^MKL26Z128VMC4$|^MKL26Z256VMC4$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mkl26z/init_clock.c)
endif()
