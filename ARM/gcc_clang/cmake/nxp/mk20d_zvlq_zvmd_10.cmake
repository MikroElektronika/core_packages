if(${MCU_NAME} MATCHES "^MK20DN512ZVLQ10$|^MK20DN512ZVMD10$|^MK20DX128ZVLQ10$|^MK20DX128ZVMD10$|^MK20DX256ZVLQ10$|^MK20DX256ZVMD10$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mk20d_zvlq_zvmd_10/init_clock.c)
endif()
