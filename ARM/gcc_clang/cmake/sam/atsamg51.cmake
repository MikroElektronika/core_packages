if(${MCU_NAME} MATCHES "^SAMG51N18A$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsamg51/thirdparty/system_samg51n18.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

if(${MCU_NAME} MATCHES "^SAMG51G18A$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/sam/atsamg51/thirdparty/system_samg51g18.c)
    list(APPEND local_list_include common/syscalls.c)
endif()

