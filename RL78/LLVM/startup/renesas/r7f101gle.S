;;/*
;;* Copyright (c) 2021 Renesas Electronics Corporation and/or its affiliates
;;*
;;* SPDX-License-Identifier: BSD-3-Clause
;;*/
;;/***********************************************************************************************************************
;;* File Name    : start.S
;;* Description  :
;;***********************************************************************************************************************/
;;/***********************************************************************************************************************
;;* History : DD.MM.YYYY Version  Description
;;*         : 08.03.2021 1.00     First Release
;;*         : 23.06.2021 1.11     Renamed the following section
;;*                               - __mdata
;;*                               - __ebss
;;*                               - __bss
;;*                               - __edata
;;*         : 04.08.2021 1.12     Updated base file version 1.05 to 1.06
;;*                               Added processing for C++
;;*         : 25.11.2021 1.13     Deleted processing for C++
;;*         : 28.02.2022 1.20     Added inclusion of r_bsp_config.inc.
;;*                               Added RAMSAR register setting.
;;*         : 07.06.2024 1.70     Updated base file version 1.06 to 1.10c
;;*         : 01.04.2025 1.91     Updated base file version 1.10c to 1.10d
;;*         : 04.07.2025 1.92     Changed the disclaimer.
;;***********************************************************************************************************************/

/************************************************************************/
/*    File Version: V1.10d                                              */
/*    Date Generated: 03/17/2025                                        */
/************************************************************************/

    /*reset_program.asm*/

#ifdef CPPAPP
___dso_handle:
    .global ___dso_handle
#endif

#if __clang_major__ <= 10
    #define HIGHW(x) %hi16(x)
    #define LOWW(x)  x
    #define LOW(x)   x
#endif

    .extern _bsp_init_system /*! external Sub-routine to initialise BSP*/
    .extern __data
    .extern __mdata
    .extern __ebss
    .extern __bss
    .extern __edata
    .extern _bsp_init_hardware /*! external Sub-routine to initialise Hardware*/
    .extern _main
    .extern __stack

    .include "r_bsp_config.inc"

    .text

    .global _PowerON_Reset /*! global Start routine */
    .type   _PowerON_Reset,@function
/* call to _PowerON_Reset */
_PowerON_Reset:
/* initialise RAMSAR register */
.ifdef BSP_CFG_ASM_RAM_GUARD_START_ADDRESS
    mov !BSP_CFG_ASM_RAMSAR_ADDRESS, #BSP_CFG_ASM_RAM_GUARD_START_ADDRESS
    nop
    nop
.endif

/* initialise user stack pointer */
    movw sp,#__stack /* Set stack pointer */

/* call the bsp initialiser */
    call    !!_bsp_init_system
    nop

/* load data section from ROM to RAM */
;; block move to initialize .data

    mov     es, #LOW(HIGHW(__romdatastart))
    movw    bc, #LOWW(__romdatacopysize)
1:
    movw    ax, bc
    cmpw    ax, #0
    bz $1f
    decw    bc
    decw    bc
    movw    ax, es:LOWW(__romdatastart)[bc]
    movw    LOWW(__datastart)[bc], ax
    br  $1b

1:
    mov es, #LOW(HIGHW(__romsdatastart))
    movw    bc, #LOWW(__romsdatacopysize)
1:
    movw    ax, bc
    cmpw    ax, #0
    bz $1f
    decw    bc
    decw    bc
    movw    ax, es:LOWW(__romsdatastart)[bc]
    movw    LOWW(__sdatastart)[bc], ax
    br  $1b

;; block fill to .sbss
1:
#ifdef __OPTIMIZE_SIZE__
    movw de, #LOWW(__sbsssize)
    movw ax, #LOWW(__sbssstart)
    clrw bc
    call !!_memset
#else
    movw    bc, #LOWW(__sbsssize)
    clrw    ax
    cmpw    ax, bc
    bz      $_sbss_zero_done
1:
    decw    bc
    decw    bc
    movw    LOWW(__sbssstart)[bc], ax
    cmpw    ax, bc
    bnz      $1b

_sbss_zero_done:
#endif

;; block fill to .bss

#ifdef __OPTIMIZE_SIZE__
    movw de, #LOWW(__bsssize)
    movw ax, #LOWW(__bssstart)
    clrw bc
    call !!_memset
#else
    movw    bc, #LOWW(__bsssize)
    clrw    ax
    cmpw    ax, bc
    bz      $_bss_zero_done
1:
    decw    bc
    decw    bc
    movw    LOWW(__bssstart)[bc], ax
    cmpw    ax, bc
    bnz      $1b

_bss_zero_done:
#endif

/* call the hardware initialiser */
    call    !!_bsp_init_hardware
    nop

    call    !!__rl78_init

/* start user program */

    clrw    ax /* argv */
    clrw    bc /* argc */
    call    !!_main


    call    !!__rl78_fini

    .global _exit
    .type   _exit,@function
/* call to exit*/
_exit:
     br  $_exit


/*  ;; HL = start of list
    ;; DE = end of list
    ;; BC = step direction (+2 or -2)
*/
    .global _rl78_run_init_array
    .type   _rl78_run_init_array,@function
_rl78_run_init_array:
    movw    hl, #__init_array_start
    movw    de, #__init_array_end
#ifdef __RL78_MEDIUM__
    movw    bc, #4
#else
    movw    bc, #2
#endif
    br  $_rl78_run_inilist

    .global _rl78_run_fini_array
    .type   _rl78_run_fini_array,@function
_rl78_run_fini_array:
    movw    hl, #__fini_array_start
    movw    de, #__fini_array_end
#ifdef __RL78_MEDIUM__
    movw    bc, #4
#else
    movw    bc, #2
#endif
    /* fall through */

    ;; HL = start of list
    ;; DE = end of list
    ;; BC = step direction (+2 or -2)
_rl78_run_inilist:
next_inilist:
    movw    ax, hl
    cmpw    ax, de
    bz  $done_inilist
    movw    ax, [hl]
    cmpw    ax, #-1
    bz  $skip_inilist
    cmpw    ax, #0
    bz  $skip_inilist
    push    ax
    push    bc
    push    de
    push    hl
#ifdef __RL78_MEDIUM__
    push    ax
    mov     a, [hl+2]
    mov     cs, a
    pop     ax
#endif
    call    ax
    pop hl
    pop de
    pop bc
    pop ax
skip_inilist:
    movw    ax, hl
    addw    ax, bc
    movw    hl, ax
    br  $next_inilist
done_inilist:
    ret


    .global __rl78_init
    .type  __rl78_init,@function
__rl78_init:
    call    !!_rl78_run_init_array
    ret


    .global __rl78_fini
    .type   __rl78_fini,@function
__rl78_fini:
    call    !!_rl78_run_fini_array
    ret


.end
