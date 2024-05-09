cmake_minimum_required(VERSION 3.11)

project(lib_core VERSION 1 LANGUAGES C ASM)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(mikroeUtils)

add_preinit_lib()

core_files_set(fileListInclude fileDirInclude fileListInstall)

set(MCU_NAME_LOWER "")
string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)

core_add_library(lib_core MikroC.Core
    common/delays.h
    ${fileListInclude}
    common/me_string.c
    common/me_string.h
    include/core_header.h
    cstdio/source/cstdio.c
    cstdio/include/cstdio.h
    interrupts/interrupts.c
    ${TEST_LIB_PATH}/src/unit_test_api.c
    ${TEST_LIB_PATH}/include/unit_test_api.h
    ${PREINIT_ROUTINE_PATH}/src/preinit.c
    ${PREINIT_ROUTINE_PATH}/include/preinit.h
)

target_include_directories(lib_core
    PRIVATE
        common
        include
        cstdio/include
        ${fileDirInclude}
        interrupts/include
        ${CMAKE_BINARY_DIR}
        ${TEST_LIB_PATH}/include
        ${PREINIT_ROUTINE_PATH}/include
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}
    INTERFACE
        $<INSTALL_INTERFACE:include/core>
)

add_fosc_macro(lib_core)

target_compile_definitions(lib_core
    PUBLIC
        __LANGUAGE_C__
)

core_install(MikroC.Core)

install(
    FILES
        ${fileListInstall}
        common/me_string.h
        include/me_built_in.h
        cstdio/include/cstdio.h
        interrupts/include/interrupts.h
        ${CMAKE_BINARY_DIR}/core_header.h
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/core
)
