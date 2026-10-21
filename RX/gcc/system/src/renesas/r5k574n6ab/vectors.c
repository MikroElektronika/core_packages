/* RX74 fixed exception layout from the supplied Renesas FSP startup.c.
 * Copyright (c) 2020 - 2026 Renesas Electronics Corporation and/or its affiliates
 * SPDX-License-Identifier: BSD-3-Clause
 * The reset vector is emitted by the per-device assembly startup.
 */
#include <stdint.h>
#ifndef NECTO_HOST_SYNTAX_CHECK
#define RX_ISR __attribute__((interrupt))
#else
#define RX_ISR
#endif
void Default_Handler(void) RX_ISR;
void Default_Handler(void) { for (;;) { ; } }
void SecureFault_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void World_NonMaskableInt_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void PrivilegedInstructionException_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void AccessException_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void UndefinedInstruction_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void AddressException_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void SinglePrecisionFloatingPointException_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
void NMI_Handler(void) RX_ISR __attribute__((weak, alias("Default_Handler")));
typedef void (*rx_vector_t)(void);
const rx_vector_t ExVectors[31] __attribute__((section(".exvectors"),used,aligned(4))) = {
    0, /* 0xFFFFFF80 */
    0, /* 0xFFFFFF84 */
    SecureFault_Handler, /* 0xFFFFFF88 */
    0, /* 0xFFFFFF8C */
    0, /* 0xFFFFFF90 */
    0, /* 0xFFFFFF94 */
    World_NonMaskableInt_Handler, /* 0xFFFFFF98 */
    0, /* 0xFFFFFF9C */
    0, /* 0xFFFFFFA0 */
    0, /* 0xFFFFFFA4 */
    0, /* 0xFFFFFFA8 */
    0, /* 0xFFFFFFAC */
    0, /* 0xFFFFFFB0 */
    0, /* 0xFFFFFFB4 */
    0, /* 0xFFFFFFB8 */
    0, /* 0xFFFFFFBC */
    0, /* 0xFFFFFFC0 */
    0, /* 0xFFFFFFC4 */
    0, /* 0xFFFFFFC8 */
    0, /* 0xFFFFFFCC */
    PrivilegedInstructionException_Handler, /* 0xFFFFFFD0 */
    AccessException_Handler, /* 0xFFFFFFD4 */
    0, /* 0xFFFFFFD8 */
    UndefinedInstruction_Handler, /* 0xFFFFFFDC */
    AddressException_Handler, /* 0xFFFFFFE0 */
    SinglePrecisionFloatingPointException_Handler, /* 0xFFFFFFE4 */
    0, /* 0xFFFFFFE8 */
    0, /* 0xFFFFFFEC */
    0, /* 0xFFFFFFF0 */
    0, /* 0xFFFFFFF4 */
    NMI_Handler, /* 0xFFFFFFF8 */
};
