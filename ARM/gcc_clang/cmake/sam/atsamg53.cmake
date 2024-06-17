if(${MCU_NAME} MATCHES "^ATSAMG53N19A$|^ATSAMG53N19B$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsamg53/thirdparty/system_samg53n19.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

if(${MCU_NAME} MATCHES "^ATSAMG53G19A$|^ATSAMG53G19B$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsamg53/thirdparty/system_samg53g19.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

