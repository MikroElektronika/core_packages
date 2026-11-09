cmake_minimum_required(VERSION 3.11)

project(lib_core VERSION 1 LANGUAGES C ASM)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(mikroeUtils)
include(coreUtils)

add_preinit_lib()

if (${TOOLCHAIN_ID} STREQUAL "clang-llvm-riscv")
    add_compile_definitions("CLANG_RISCV")
endif()

#include all .cmake files from cmake folder

set(local_list_include "")
set(local_include_dirs "")
set(local_install_dirs "")
set(mcu_header_file common/mcu.h)
if(${MCU_NAME} MATCHES "^HPM.+$")
    set(vendor "hpmicro")
else()
    set(vendor "gigadevice")
endif()
file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/*.cmake)
foreach(cmakeFile ${CMAKE_FILES})
    include(${cmakeFile})
endforeach()

set(MCU_NAME_LOWER "")
string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)

core_add_library(lib_core MikroC.Core
    ${local_list_include}
    startup/${MCU_NAME_LOWER}.S
    linker_scripts/${MCU_NAME_LOWER}.ld

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
    interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}
INTERFACE
    $<INSTALL_INTERFACE:include/core>
)

if(local_include_dirs)
    target_include_directories(lib_core PRIVATE ${local_include_dirs})
endif()

add_fosc_macro(lib_core)

core_install(MikroC.Core)

foreach(install_dir ${local_install_dirs})
    install(
        DIRECTORY
            ${install_dir}/
        DESTINATION
            ${CMAKE_INSTALL_PREFIX}/include/core
    )
endforeach()

install(
    FILES
        common/rcu_typedef.h
        common/delays.h
        ${mcu_header_file}
        common/const.h
        common/bits.h

        include/me_built_in.h
        cstdio/include/cstdio.h
        ${CMAKE_BINARY_DIR}/core_header.h

        interrupts/include/interrupts.h
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/core
)

install(
    FILES
        startup/${MCU_NAME_LOWER}.S
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileStartup
)

install(
    FILES
        linker_scripts/${MCU_NAME_LOWER}.ld
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileLinker
)
