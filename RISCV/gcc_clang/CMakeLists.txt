cmake_minimum_required(VERSION 3.11)

project(lib_core VERSION 1 LANGUAGES C ASM)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(mikroeUtils)
include(coreUtils)

add_preinit_lib()

#include all .cmake files from cmake folder

file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/*.cmake)
foreach(cmakeFile ${CMAKE_FILES})
    include(${cmakeFile})
endforeach()

core_add_library(lib_core MikroC.Core
    system/${SYSTEM_FILE}.c
    startup/${STARTUP_FILE}.S
    linker_scripts/${MCU_NAME}.ld

    common/rcu_typedef.h
    common/delays.h

    include/core_header.h
    cstdio/source/cstdio.c
    cstdio/include/cstdio.h
    interrupts/interrupts.c
    ${TEST_LIB_PATH}/src/unit_test_api.c
    ${TEST_LIB_PATH}/include/unit_test_api.h
    ${PREINIT_ROUTINE_PATH}/src/preinit.c
    ${PREINIT_ROUTINE_PATH}/include/preinit.h
)

target_include_directories(lib_core PRIVATE
    common/
    include/
    cstdio/include
    interrupts/include
    ${CMAKE_BINARY_DIR}
    ${TEST_LIB_PATH}/include
    ${PREINIT_ROUTINE_PATH}/include
    interrupts/include/interrupts_mcu/gd32vf103xx
INTERFACE
    $<INSTALL_INTERFACE:include/core>
)

add_fosc_macro(lib_core)

core_install(MikroC.Core)

install(
    FILES
        common/rcu_typedef.h
        common/delays.h
        common/mcu.h
        common/const.h
        common/bits.h

        include/me_built_in.h
        cstdio/include/cstdio.h
        ${CMAKE_BINARY_DIR}/core_header.h

        interrupts/include/interrupts.h
        interrupts/include/interrupts_mcu/gd32vf103xx/interrupts_mcu.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/core
)

install(
    FILES
        startup/${STARTUP_FILE}.S
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileStartup
)

install(
    FILES
        linker_scripts/${MCU_NAME}.ld
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileLinker
)
