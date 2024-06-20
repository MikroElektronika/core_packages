#############################################################################
## Function to create interface headers according to lib alias
#############################################################################
macro(preinit_macros_generate fileDestination fileList)
    # Cannot use ARGN directly with list() command,
    # so copy it to a variable first.
    set (extra_args ${ARGN})

    # Did we get any optional args?
    list(LENGTH extra_args extra_count)
    if (${extra_count} GREATER 0)
        # Create a list of directives
        set(SEQUNCE_PREINIT "")
        foreach(ARGUMENT ${extra_args})
            string(APPEND SEQUNCE_PREINIT "#define ${ARGUMENT}\n")
        endforeach()

        # Generate output file with adequate name and include directive
        configure_file(${PREINIT_ROUTINE_PATH}/cmake/preinit.h.in ${fileDestination}/${fileList})
    endif ()
endmacro()

#############################################################################
## Function used to set adequate macro values per selected MCU
#############################################################################

macro(preinit_get_step step_id list_in)
    if(${step_id})
        list(APPEND ${list_in} ${step_id})
    endif()
endmacro()

#############################################################################
## Function used to set adequate macro values per selected MCU
#############################################################################
function(preinit_macros_set osc_check macros_out)
    # Cannot use ARGN directly with list() command,
    # so copy it to a variable first.
    set (extra_args ${ARGN})
    set(local_list_macros ${macros_out})

    # Did we get any optional args?
    list(LENGTH extra_args extra_count)
    if (${extra_count} GREATER 0)
        if(${OSC} EQUAL ${osc_check})
            message(INFO ": ${_MSDK_MCU_CARD_NAME_}/${OSC}")
            list(APPEND local_list_macros "PRE_INIT_USED")
            ## Register addresses, values and init sequences if any.
            foreach(ARGUMENT ${extra_args})
                list(APPEND local_list_macros ${${ARGUMENT}})
            endforeach()
        else()
            list(APPEND local_list_macros "PRE_INIT_NOT_USED")
        endif()
    else()
        list(APPEND local_list_macros "PRE_INIT_NOT_USED")
    endif()

    set(${list} ${local_list_macros} PARENT_SCOPE)
endfunction()
