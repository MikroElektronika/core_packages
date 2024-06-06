/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "interrupts.h"

/* ----------------------------PRIVATE MACROS-------------------------------- */

/* Set bit _bit in register _reg. */
#define interrupt_bit_set(_reg,_bit) (*(unsigned int *)_reg |= 1U << _bit)

/* Clear bit _bit in register _reg. */
#define interrupt_bit_clear(_reg,_bit) (*(unsigned int *)_reg &= ~(1U << _bit))

/* Helper macros for enabling interrupts. */
#define PMIC_CTRL_ENABLE_LVL_HI  (0x4)
#define PMIC_CTRL_ENABLE_LVL_MED (0x2)
#define PMIC_CTRL_ENABLE_LVL_LO  (0x1)

/* ---------------------PRIVATE FUNCTION DECLARATIONS------------------------ */

/**
 * @brief Enables interrupts on the global level.
 * @return Nothing.
 */
static inline void interrupts_enable_asm( void );

/**
 * @brief Disables interrupts on the global level.
 * @return Nothing.
 */
static inline void interrupts_disable_asm( void );

/* -----------------------PUBLIC FUNCTION DEFINITIONS------------------------ */

void interrupts_enable( void )
{
    interrupts_enable_asm();
    #ifdef __ATXMEGA__
    PMIC_CTRL |= HAL_LL_PMIC_CTRL_HILVLEN | HAL_LL_PMIC_CTRL_MEDLVLEN | HAL_LL_PMIC_CTRL_LOLVLEN;
    #endif
}

void interrupts_disable( void )
{
    interrupts_disable_asm();
    #ifdef __ATXMEGA__
    PMIC_CTRL &= ~(HAL_LL_PMIC_CTRL_HILVLEN | HAL_LL_PMIC_CTRL_MEDLVLEN | HAL_LL_PMIC_CTRL_LOLVLEN);
    #endif
}

void interrupt_enable( int interrupt )
{
    switch ( interrupt )
    {
        #if defined(INTERRUPT_EECR_EERIE_REGISTER) && defined(INTERRUPT_EECR_EERIE_BIT)
        case INTERRUPTS_EECR_EERIE:
            interrupt_bit_set( INTERRUPT_EECR_EERIE_REGISTER, INTERRUPT_EECR_EERIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR_SPIE_REGISTER) && defined(INTERRUPT_SPCR_SPIE_BIT)
        case INTERRUPTS_SPCR_SPIE:
            interrupt_bit_set( INTERRUPT_SPCR_SPIE_REGISTER, INTERRUPT_SPCR_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR_ACIE_REGISTER) && defined(INTERRUPT_ACSR_ACIE_BIT)
        case INTERRUPTS_ACSR_ACIE:
            interrupt_bit_set( INTERRUPT_ACSR_ACIE_REGISTER, INTERRUPT_ACSR_ACIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPMCSR_SPMIE_REGISTER) && defined(INTERRUPT_SPMCSR_SPMIE_BIT)
        case INTERRUPTS_SPMCSR_SPMIE:
            interrupt_bit_set( INTERRUPT_SPMCSR_SPMIE_REGISTER, INTERRUPT_SPMCSR_SPMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SREG_I_REGISTER) && defined(INTERRUPT_SREG_I_BIT)
        case INTERRUPTS_SREG_I:
            interrupt_bit_set( INTERRUPT_SREG_I_REGISTER, INTERRUPT_SREG_I_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_TOIE0_REGISTER) && defined(INTERRUPT_TIMSK0_TOIE0_BIT)
        case INTERRUPTS_TIMSK0_TOIE0:
            interrupt_bit_set( INTERRUPT_TIMSK0_TOIE0_REGISTER, INTERRUPT_TIMSK0_TOIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_OCIE0A_REGISTER) && defined(INTERRUPT_TIMSK0_OCIE0A_BIT)
        case INTERRUPTS_TIMSK0_OCIE0A:
            interrupt_bit_set( INTERRUPT_TIMSK0_OCIE0A_REGISTER, INTERRUPT_TIMSK0_OCIE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_TOIE1_REGISTER) && defined(INTERRUPT_TIMSK1_TOIE1_BIT)
        case INTERRUPTS_TIMSK1_TOIE1:
            interrupt_bit_set( INTERRUPT_TIMSK1_TOIE1_REGISTER, INTERRUPT_TIMSK1_TOIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1A_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1A_BIT)
        case INTERRUPTS_TIMSK1_OCIE1A:
            interrupt_bit_set( INTERRUPT_TIMSK1_OCIE1A_REGISTER, INTERRUPT_TIMSK1_OCIE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1B_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1B_BIT)
        case INTERRUPTS_TIMSK1_OCIE1B:
            interrupt_bit_set( INTERRUPT_TIMSK1_OCIE1B_REGISTER, INTERRUPT_TIMSK1_OCIE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1C_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1C_BIT)
        case INTERRUPTS_TIMSK1_OCIE1C:
            interrupt_bit_set( INTERRUPT_TIMSK1_OCIE1C_REGISTER, INTERRUPT_TIMSK1_OCIE1C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_ICIE1_REGISTER) && defined(INTERRUPT_TIMSK1_ICIE1_BIT)
        case INTERRUPTS_TIMSK1_ICIE1:
            interrupt_bit_set( INTERRUPT_TIMSK1_ICIE1_REGISTER, INTERRUPT_TIMSK1_ICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_TOIE2_REGISTER) && defined(INTERRUPT_TIMSK2_TOIE2_BIT)
        case INTERRUPTS_TIMSK2_TOIE2:
            interrupt_bit_set( INTERRUPT_TIMSK2_TOIE2_REGISTER, INTERRUPT_TIMSK2_TOIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_OCIE2A_REGISTER) && defined(INTERRUPT_TIMSK2_OCIE2A_BIT)
        case INTERRUPTS_TIMSK2_OCIE2A:
            interrupt_bit_set( INTERRUPT_TIMSK2_OCIE2A_REGISTER, INTERRUPT_TIMSK2_OCIE2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_TOIE3_REGISTER) && defined(INTERRUPT_TIMSK3_TOIE3_BIT)
        case INTERRUPTS_TIMSK3_TOIE3:
            interrupt_bit_set( INTERRUPT_TIMSK3_TOIE3_REGISTER, INTERRUPT_TIMSK3_TOIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3A_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3A_BIT)
        case INTERRUPTS_TIMSK3_OCIE3A:
            interrupt_bit_set( INTERRUPT_TIMSK3_OCIE3A_REGISTER, INTERRUPT_TIMSK3_OCIE3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3B_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3B_BIT)
        case INTERRUPTS_TIMSK3_OCIE3B:
            interrupt_bit_set( INTERRUPT_TIMSK3_OCIE3B_REGISTER, INTERRUPT_TIMSK3_OCIE3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3C_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3C_BIT)
        case INTERRUPTS_TIMSK3_OCIE3C:
            interrupt_bit_set( INTERRUPT_TIMSK3_OCIE3C_REGISTER, INTERRUPT_TIMSK3_OCIE3C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_ICIE3_REGISTER) && defined(INTERRUPT_TIMSK3_ICIE3_BIT)
        case INTERRUPTS_TIMSK3_ICIE3:
            interrupt_bit_set( INTERRUPT_TIMSK3_ICIE3_REGISTER, INTERRUPT_TIMSK3_ICIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCSRA_ADIE_REGISTER) && defined(INTERRUPT_ADCSRA_ADIE_BIT)
        case INTERRUPTS_ADCSRA_ADIE:
            interrupt_bit_set( INTERRUPT_ADCSRA_ADIE_REGISTER, INTERRUPT_ADCSRA_ADIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR_TWIE_REGISTER) && defined(INTERRUPT_TWCR_TWIE_BIT)
        case INTERRUPTS_TWCR_TWIE:
            interrupt_bit_set( INTERRUPT_TWCR_TWIE_REGISTER, INTERRUPT_TWCR_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_UDRIE0_REGISTER) && defined(INTERRUPT_UCSR0B_UDRIE0_BIT)
        case INTERRUPTS_UCSR0B_UDRIE0:
            interrupt_bit_set( INTERRUPT_UCSR0B_UDRIE0_REGISTER, INTERRUPT_UCSR0B_UDRIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_TXCIE0_REGISTER) && defined(INTERRUPT_UCSR0B_TXCIE0_BIT)
        case INTERRUPTS_UCSR0B_TXCIE0:
            interrupt_bit_set( INTERRUPT_UCSR0B_TXCIE0_REGISTER, INTERRUPT_UCSR0B_TXCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_RXCIE0_REGISTER) && defined(INTERRUPT_UCSR0B_RXCIE0_BIT)
        case INTERRUPTS_UCSR0B_RXCIE0:
            interrupt_bit_set( INTERRUPT_UCSR0B_RXCIE0_REGISTER, INTERRUPT_UCSR0B_RXCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_UDRIE1_REGISTER) && defined(INTERRUPT_UCSR1B_UDRIE1_BIT)
        case INTERRUPTS_UCSR1B_UDRIE1:
            interrupt_bit_set( INTERRUPT_UCSR1B_UDRIE1_REGISTER, INTERRUPT_UCSR1B_UDRIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_TXCIE1_REGISTER) && defined(INTERRUPT_UCSR1B_TXCIE1_BIT)
        case INTERRUPTS_UCSR1B_TXCIE1:
            interrupt_bit_set( INTERRUPT_UCSR1B_TXCIE1_REGISTER, INTERRUPT_UCSR1B_TXCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_RXCIE1_REGISTER) && defined(INTERRUPT_UCSR1B_RXCIE1_BIT)
        case INTERRUPTS_UCSR1B_RXCIE1:
            interrupt_bit_set( INTERRUPT_UCSR1B_RXCIE1_REGISTER, INTERRUPT_UCSR1B_RXCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CANIE2_IEMOB_REGISTER) && defined(INTERRUPT_CANIE2_IEMOB_BIT)
        case INTERRUPTS_CANIE2_IEMOB:
            interrupt_bit_set( INTERRUPT_CANIE2_IEMOB_REGISTER, INTERRUPT_CANIE2_IEMOB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CANIE1_IEMOB_REGISTER) && defined(INTERRUPT_CANIE1_IEMOB_BIT)
        case INTERRUPTS_CANIE1_IEMOB:
            interrupt_bit_set( INTERRUPT_CANIE1_IEMOB_REGISTER, INTERRUPT_CANIE1_IEMOB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCSR_WDIE_REGISTER) && defined(INTERRUPT_WDTCSR_WDIE_BIT)
        case INTERRUPTS_WDTCSR_WDIE:
            interrupt_bit_set( INTERRUPT_WDTCSR_WDIE_REGISTER, INTERRUPT_WDTCSR_WDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_OCIE0B_REGISTER) && defined(INTERRUPT_TIMSK0_OCIE0B_BIT)
        case INTERRUPTS_TIMSK0_OCIE0B:
            interrupt_bit_set( INTERRUPT_TIMSK0_OCIE0B_REGISTER, INTERRUPT_TIMSK0_OCIE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEOPE0_REGISTER) && defined(INTERRUPT_PIM0_PEOPE0_BIT)
        case INTERRUPTS_PIM0_PEOPE0:
            interrupt_bit_set( INTERRUPT_PIM0_PEOPE0_REGISTER, INTERRUPT_PIM0_PEOPE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEVE0A_REGISTER) && defined(INTERRUPT_PIM0_PEVE0A_BIT)
        case INTERRUPTS_PIM0_PEVE0A:
            interrupt_bit_set( INTERRUPT_PIM0_PEVE0A_REGISTER, INTERRUPT_PIM0_PEVE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEVE0B_REGISTER) && defined(INTERRUPT_PIM0_PEVE0B_BIT)
        case INTERRUPTS_PIM0_PEVE0B:
            interrupt_bit_set( INTERRUPT_PIM0_PEVE0B_REGISTER, INTERRUPT_PIM0_PEVE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PSEIE0_REGISTER) && defined(INTERRUPT_PIM0_PSEIE0_BIT)
        case INTERRUPTS_PIM0_PSEIE0:
            interrupt_bit_set( INTERRUPT_PIM0_PSEIE0_REGISTER, INTERRUPT_PIM0_PSEIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEOPE2_REGISTER) && defined(INTERRUPT_PIM2_PEOPE2_BIT)
        case INTERRUPTS_PIM2_PEOPE2:
            interrupt_bit_set( INTERRUPT_PIM2_PEOPE2_REGISTER, INTERRUPT_PIM2_PEOPE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEVE2A_REGISTER) && defined(INTERRUPT_PIM2_PEVE2A_BIT)
        case INTERRUPTS_PIM2_PEVE2A:
            interrupt_bit_set( INTERRUPT_PIM2_PEVE2A_REGISTER, INTERRUPT_PIM2_PEVE2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEVE2B_REGISTER) && defined(INTERRUPT_PIM2_PEVE2B_BIT)
        case INTERRUPTS_PIM2_PEVE2B:
            interrupt_bit_set( INTERRUPT_PIM2_PEVE2B_REGISTER, INTERRUPT_PIM2_PEVE2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PSEIE2_REGISTER) && defined(INTERRUPT_PIM2_PSEIE2_BIT)
        case INTERRUPTS_PIM2_PSEIE2:
            interrupt_bit_set( INTERRUPT_PIM2_PSEIE2_REGISTER, INTERRUPT_PIM2_PSEIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC0CON_AC0IE_REGISTER) && defined(INTERRUPT_AC0CON_AC0IE_BIT)
        case INTERRUPTS_AC0CON_AC0IE:
            interrupt_bit_set( INTERRUPT_AC0CON_AC0IE_REGISTER, INTERRUPT_AC0CON_AC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC2CON_AC2IE_REGISTER) && defined(INTERRUPT_AC2CON_AC2IE_BIT)
        case INTERRUPTS_AC2CON_AC2IE:
            interrupt_bit_set( INTERRUPT_AC2CON_AC2IE_REGISTER, INTERRUPT_AC2CON_AC2IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEOEPE2_REGISTER) && defined(INTERRUPT_PIM2_PEOEPE2_BIT)
        case INTERRUPTS_PIM2_PEOEPE2:
            interrupt_bit_set( INTERRUPT_PIM2_PEOEPE2_REGISTER, INTERRUPT_PIM2_PEOEPE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC1CON_AC1IE_REGISTER) && defined(INTERRUPT_AC1CON_AC1IE_BIT)
        case INTERRUPTS_AC1CON_AC1IE:
            interrupt_bit_set( INTERRUPT_AC1CON_AC1IE_REGISTER, INTERRUPT_AC1CON_AC1IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC3CON_AC3IE_REGISTER) && defined(INTERRUPT_AC3CON_AC3IE_BIT)
        case INTERRUPTS_AC3CON_AC3IE:
            interrupt_bit_set( INTERRUPT_AC3CON_AC3IE_REGISTER, INTERRUPT_AC3CON_AC3IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_UDRIE_REGISTER) && defined(INTERRUPT_UCSRB_UDRIE_BIT)
        case INTERRUPTS_UCSRB_UDRIE:
            interrupt_bit_set( INTERRUPT_UCSRB_UDRIE_REGISTER, INTERRUPT_UCSRB_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_TXCIE_REGISTER) && defined(INTERRUPT_UCSRB_TXCIE_BIT)
        case INTERRUPTS_UCSRB_TXCIE:
            interrupt_bit_set( INTERRUPT_UCSRB_TXCIE_REGISTER, INTERRUPT_UCSRB_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_RXCIE_REGISTER) && defined(INTERRUPT_UCSRB_RXCIE_BIT)
        case INTERRUPTS_UCSRB_RXCIE:
            interrupt_bit_set( INTERRUPT_UCSRB_RXCIE_REGISTER, INTERRUPT_UCSRB_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEOPE1_REGISTER) && defined(INTERRUPT_PIM1_PEOPE1_BIT)
        case INTERRUPTS_PIM1_PEOPE1:
            interrupt_bit_set( INTERRUPT_PIM1_PEOPE1_REGISTER, INTERRUPT_PIM1_PEOPE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEVE1A_REGISTER) && defined(INTERRUPT_PIM1_PEVE1A_BIT)
        case INTERRUPTS_PIM1_PEVE1A:
            interrupt_bit_set( INTERRUPT_PIM1_PEVE1A_REGISTER, INTERRUPT_PIM1_PEVE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEVE1B_REGISTER) && defined(INTERRUPT_PIM1_PEVE1B_BIT)
        case INTERRUPTS_PIM1_PEVE1B:
            interrupt_bit_set( INTERRUPT_PIM1_PEVE1B_REGISTER, INTERRUPT_PIM1_PEVE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PSEIE1_REGISTER) && defined(INTERRUPT_PIM1_PSEIE1_BIT)
        case INTERRUPTS_PIM1_PSEIE1:
            interrupt_bit_set( INTERRUPT_PIM1_PSEIE1_REGISTER, INTERRUPT_PIM1_PSEIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT0_REGISTER) && defined(INTERRUPT_GIMSK_INT0_BIT)
        case INTERRUPTS_GIMSK_INT0:
            interrupt_bit_set( INTERRUPT_GIMSK_INT0_REGISTER, INTERRUPT_GIMSK_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT1_REGISTER) && defined(INTERRUPT_GIMSK_INT1_BIT)
        case INTERRUPTS_GIMSK_INT1:
            interrupt_bit_set( INTERRUPT_GIMSK_INT1_REGISTER, INTERRUPT_GIMSK_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE0_REGISTER) && defined(INTERRUPT_TIMSK_TOIE0_BIT)
        case INTERRUPTS_TIMSK_TOIE0:
            interrupt_bit_set( INTERRUPT_TIMSK_TOIE0_REGISTER, INTERRUPT_TIMSK_TOIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TICIE1_REGISTER) && defined(INTERRUPT_TIMSK_TICIE1_BIT)
        case INTERRUPTS_TIMSK_TICIE1:
            interrupt_bit_set( INTERRUPT_TIMSK_TICIE1_REGISTER, INTERRUPT_TIMSK_TICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1A_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1A_BIT)
        case INTERRUPTS_TIMSK_OCIE1A:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE1A_REGISTER, INTERRUPT_TIMSK_OCIE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE1_REGISTER) && defined(INTERRUPT_TIMSK_TOIE1_BIT)
        case INTERRUPTS_TIMSK_TOIE1:
            interrupt_bit_set( INTERRUPT_TIMSK_TOIE1_REGISTER, INTERRUPT_TIMSK_TOIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV0_REGISTER) && defined(INTERRUPT_TIFR_TOV0_BIT)
        case INTERRUPTS_TIFR_TOV0:
            interrupt_bit_set( INTERRUPT_TIFR_TOV0_REGISTER, INTERRUPT_TIFR_TOV0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_ICF1_REGISTER) && defined(INTERRUPT_TIFR_ICF1_BIT)
        case INTERRUPTS_TIFR_ICF1:
            interrupt_bit_set( INTERRUPT_TIFR_ICF1_REGISTER, INTERRUPT_TIFR_ICF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1A_REGISTER) && defined(INTERRUPT_TIFR_OCF1A_BIT)
        case INTERRUPTS_TIFR_OCF1A:
            interrupt_bit_set( INTERRUPT_TIFR_OCF1A_REGISTER, INTERRUPT_TIFR_OCF1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV1_REGISTER) && defined(INTERRUPT_TIFR_TOV1_BIT)
        case INTERRUPTS_TIFR_TOV1:
            interrupt_bit_set( INTERRUPT_TIFR_TOV1_REGISTER, INTERRUPT_TIFR_TOV1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF0_REGISTER) && defined(INTERRUPT_GIFR_INTF0_BIT)
        case INTERRUPTS_GIFR_INTF0:
            interrupt_bit_set( INTERRUPT_GIFR_INTF0_REGISTER, INTERRUPT_GIFR_INTF0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF1_REGISTER) && defined(INTERRUPT_GIFR_INTF1_BIT)
        case INTERRUPTS_GIFR_INTF1:
            interrupt_bit_set( INTERRUPT_GIFR_INTF1_REGISTER, INTERRUPT_GIFR_INTF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1B_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1B_BIT)
        case INTERRUPTS_TIMSK_OCIE1B:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE1B_REGISTER, INTERRUPT_TIMSK_OCIE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCIFB_REGISTER) && defined(INTERRUPT_TIFR_OCIFB_BIT)
        case INTERRUPTS_TIFR_OCIFB:
            interrupt_bit_set( INTERRUPT_TIFR_OCIFB_REGISTER, INTERRUPT_TIFR_OCIFB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1_BIT)
        case INTERRUPTS_TIMSK_OCIE1:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE1_REGISTER, INTERRUPT_TIMSK_OCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1_REGISTER) && defined(INTERRUPT_TIFR_OCF1_BIT)
        case INTERRUPTS_TIFR_OCF1:
            interrupt_bit_set( INTERRUPT_TIFR_OCF1_REGISTER, INTERRUPT_TIFR_OCF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE2_REGISTER) && defined(INTERRUPT_TIMSK_TOIE2_BIT)
        case INTERRUPTS_TIMSK_TOIE2:
            interrupt_bit_set( INTERRUPT_TIMSK_TOIE2_REGISTER, INTERRUPT_TIMSK_TOIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE2_REGISTER) && defined(INTERRUPT_TIMSK_OCIE2_BIT)
        case INTERRUPTS_TIMSK_OCIE2:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE2_REGISTER, INTERRUPT_TIMSK_OCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1B_REGISTER) && defined(INTERRUPT_TIFR_OCF1B_BIT)
        case INTERRUPTS_TIFR_OCF1B:
            interrupt_bit_set( INTERRUPT_TIFR_OCF1B_REGISTER, INTERRUPT_TIFR_OCF1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV2_REGISTER) && defined(INTERRUPT_TIFR_TOV2_BIT)
        case INTERRUPTS_TIFR_TOV2:
            interrupt_bit_set( INTERRUPT_TIFR_TOV2_REGISTER, INTERRUPT_TIFR_TOV2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF2_REGISTER) && defined(INTERRUPT_TIFR_OCF2_BIT)
        case INTERRUPTS_TIFR_OCF2:
            interrupt_bit_set( INTERRUPT_TIFR_OCF2_REGISTER, INTERRUPT_TIFR_OCF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE0_REGISTER) && defined(INTERRUPT_PCICR_PCIE0_BIT)
        case INTERRUPTS_PCICR_PCIE0:
            interrupt_bit_set( INTERRUPT_PCICR_PCIE0_REGISTER, INTERRUPT_PCICR_PCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_OCIE2B_REGISTER) && defined(INTERRUPT_TIMSK2_OCIE2B_BIT)
        case INTERRUPTS_TIMSK2_OCIE2B:
            interrupt_bit_set( INTERRUPT_TIMSK2_OCIE2B_REGISTER, INTERRUPT_TIMSK2_OCIE2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCKD_WDEWIE_REGISTER) && defined(INTERRUPT_WDTCKD_WDEWIE_BIT)
        case INTERRUPTS_WDTCKD_WDEWIE:
            interrupt_bit_set( INTERRUPT_WDTCKD_WDEWIE_REGISTER, INTERRUPT_WDTCKD_WDEWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE_REGISTER) && defined(INTERRUPT_PCICR_PCIE_BIT)
        case INTERRUPTS_PCICR_PCIE:
            interrupt_bit_set( INTERRUPT_PCICR_PCIE_REGISTER, INTERRUPT_PCICR_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT0_REGISTER) && defined(INTERRUPT_EIMSK_INT0_BIT)
        case INTERRUPTS_EIMSK_INT0:
            interrupt_bit_set( INTERRUPT_EIMSK_INT0_REGISTER, INTERRUPT_EIMSK_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT1_REGISTER) && defined(INTERRUPT_EIMSK_INT1_BIT)
        case INTERRUPTS_EIMSK_INT1:
            interrupt_bit_set( INTERRUPT_EIMSK_INT1_REGISTER, INTERRUPT_EIMSK_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT2_REGISTER) && defined(INTERRUPT_EIMSK_INT2_BIT)
        case INTERRUPTS_EIMSK_INT2:
            interrupt_bit_set( INTERRUPT_EIMSK_INT2_REGISTER, INTERRUPT_EIMSK_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT3_REGISTER) && defined(INTERRUPT_EIMSK_INT3_BIT)
        case INTERRUPTS_EIMSK_INT3:
            interrupt_bit_set( INTERRUPT_EIMSK_INT3_REGISTER, INTERRUPT_EIMSK_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT4_REGISTER) && defined(INTERRUPT_EIMSK_INT4_BIT)
        case INTERRUPTS_EIMSK_INT4:
            interrupt_bit_set( INTERRUPT_EIMSK_INT4_REGISTER, INTERRUPT_EIMSK_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT5_REGISTER) && defined(INTERRUPT_EIMSK_INT5_BIT)
        case INTERRUPTS_EIMSK_INT5:
            interrupt_bit_set( INTERRUPT_EIMSK_INT5_REGISTER, INTERRUPT_EIMSK_INT5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT6_REGISTER) && defined(INTERRUPT_EIMSK_INT6_BIT)
        case INTERRUPTS_EIMSK_INT6:
            interrupt_bit_set( INTERRUPT_EIMSK_INT6_REGISTER, INTERRUPT_EIMSK_INT6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT7_REGISTER) && defined(INTERRUPT_EIMSK_INT7_BIT)
        case INTERRUPTS_EIMSK_INT7:
            interrupt_bit_set( INTERRUPT_EIMSK_INT7_REGISTER, INTERRUPT_EIMSK_INT7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF4_REGISTER) && defined(INTERRUPT_EIFR_INTF4_BIT)
        case INTERRUPTS_EIFR_INTF4:
            interrupt_bit_set( INTERRUPT_EIFR_INTF4_REGISTER, INTERRUPT_EIFR_INTF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF5_REGISTER) && defined(INTERRUPT_EIFR_INTF5_BIT)
        case INTERRUPTS_EIFR_INTF5:
            interrupt_bit_set( INTERRUPT_EIFR_INTF5_REGISTER, INTERRUPT_EIFR_INTF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF6_REGISTER) && defined(INTERRUPT_EIFR_INTF6_BIT)
        case INTERRUPTS_EIFR_INTF6:
            interrupt_bit_set( INTERRUPT_EIFR_INTF6_REGISTER, INTERRUPT_EIFR_INTF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF7_REGISTER) && defined(INTERRUPT_EIFR_INTF7_BIT)
        case INTERRUPTS_EIFR_INTF7:
            interrupt_bit_set( INTERRUPT_EIFR_INTF7_REGISTER, INTERRUPT_EIFR_INTF7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0_BIT)
        case INTERRUPTS_TIMSK_OCIE0:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE0_REGISTER, INTERRUPT_TIMSK_OCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF0_REGISTER) && defined(INTERRUPT_TIFR_OCF0_BIT)
        case INTERRUPTS_TIFR_OCF0:
            interrupt_bit_set( INTERRUPT_TIFR_OCF0_REGISTER, INTERRUPT_TIFR_OCF0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE1C_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE1C_BIT)
        case INTERRUPTS_ETIMSK_OCIE1C:
            interrupt_bit_set( INTERRUPT_ETIMSK_OCIE1C_REGISTER, INTERRUPT_ETIMSK_OCIE1C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3C_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3C_BIT)
        case INTERRUPTS_ETIMSK_OCIE3C:
            interrupt_bit_set( INTERRUPT_ETIMSK_OCIE3C_REGISTER, INTERRUPT_ETIMSK_OCIE3C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_TOIE3_REGISTER) && defined(INTERRUPT_ETIMSK_TOIE3_BIT)
        case INTERRUPTS_ETIMSK_TOIE3:
            interrupt_bit_set( INTERRUPT_ETIMSK_TOIE3_REGISTER, INTERRUPT_ETIMSK_TOIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3B_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3B_BIT)
        case INTERRUPTS_ETIMSK_OCIE3B:
            interrupt_bit_set( INTERRUPT_ETIMSK_OCIE3B_REGISTER, INTERRUPT_ETIMSK_OCIE3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3A_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3A_BIT)
        case INTERRUPTS_ETIMSK_OCIE3A:
            interrupt_bit_set( INTERRUPT_ETIMSK_OCIE3A_REGISTER, INTERRUPT_ETIMSK_OCIE3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_TICIE3_REGISTER) && defined(INTERRUPT_ETIMSK_TICIE3_BIT)
        case INTERRUPTS_ETIMSK_TICIE3:
            interrupt_bit_set( INTERRUPT_ETIMSK_TICIE3_REGISTER, INTERRUPT_ETIMSK_TICIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_TOIE4_REGISTER) && defined(INTERRUPT_TIMSK4_TOIE4_BIT)
        case INTERRUPTS_TIMSK4_TOIE4:
            interrupt_bit_set( INTERRUPT_TIMSK4_TOIE4_REGISTER, INTERRUPT_TIMSK4_TOIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4A_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4A_BIT)
        case INTERRUPTS_TIMSK4_OCIE4A:
            interrupt_bit_set( INTERRUPT_TIMSK4_OCIE4A_REGISTER, INTERRUPT_TIMSK4_OCIE4A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4B_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4B_BIT)
        case INTERRUPTS_TIMSK4_OCIE4B:
            interrupt_bit_set( INTERRUPT_TIMSK4_OCIE4B_REGISTER, INTERRUPT_TIMSK4_OCIE4B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4C_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4C_BIT)
        case INTERRUPTS_TIMSK4_OCIE4C:
            interrupt_bit_set( INTERRUPT_TIMSK4_OCIE4C_REGISTER, INTERRUPT_TIMSK4_OCIE4C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_ICIE4_REGISTER) && defined(INTERRUPT_TIMSK4_ICIE4_BIT)
        case INTERRUPTS_TIMSK4_ICIE4:
            interrupt_bit_set( INTERRUPT_TIMSK4_ICIE4_REGISTER, INTERRUPT_TIMSK4_ICIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_TOIE5_REGISTER) && defined(INTERRUPT_TIMSK5_TOIE5_BIT)
        case INTERRUPTS_TIMSK5_TOIE5:
            interrupt_bit_set( INTERRUPT_TIMSK5_TOIE5_REGISTER, INTERRUPT_TIMSK5_TOIE5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5A_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5A_BIT)
        case INTERRUPTS_TIMSK5_OCIE5A:
            interrupt_bit_set( INTERRUPT_TIMSK5_OCIE5A_REGISTER, INTERRUPT_TIMSK5_OCIE5A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5B_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5B_BIT)
        case INTERRUPTS_TIMSK5_OCIE5B:
            interrupt_bit_set( INTERRUPT_TIMSK5_OCIE5B_REGISTER, INTERRUPT_TIMSK5_OCIE5B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5C_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5C_BIT)
        case INTERRUPTS_TIMSK5_OCIE5C:
            interrupt_bit_set( INTERRUPT_TIMSK5_OCIE5C_REGISTER, INTERRUPT_TIMSK5_OCIE5C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_ICIE5_REGISTER) && defined(INTERRUPT_TIMSK5_ICIE5_BIT)
        case INTERRUPTS_TIMSK5_ICIE5:
            interrupt_bit_set( INTERRUPT_TIMSK5_ICIE5_REGISTER, INTERRUPT_TIMSK5_ICIE5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_UDRIE2_REGISTER) && defined(INTERRUPT_UCSR2B_UDRIE2_BIT)
        case INTERRUPTS_UCSR2B_UDRIE2:
            interrupt_bit_set( INTERRUPT_UCSR2B_UDRIE2_REGISTER, INTERRUPT_UCSR2B_UDRIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_TXCIE2_REGISTER) && defined(INTERRUPT_UCSR2B_TXCIE2_BIT)
        case INTERRUPTS_UCSR2B_TXCIE2:
            interrupt_bit_set( INTERRUPT_UCSR2B_TXCIE2_REGISTER, INTERRUPT_UCSR2B_TXCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_RXCIE2_REGISTER) && defined(INTERRUPT_UCSR2B_RXCIE2_BIT)
        case INTERRUPTS_UCSR2B_RXCIE2:
            interrupt_bit_set( INTERRUPT_UCSR2B_RXCIE2_REGISTER, INTERRUPT_UCSR2B_RXCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_UDRIE3_REGISTER) && defined(INTERRUPT_UCSR3B_UDRIE3_BIT)
        case INTERRUPTS_UCSR3B_UDRIE3:
            interrupt_bit_set( INTERRUPT_UCSR3B_UDRIE3_REGISTER, INTERRUPT_UCSR3B_UDRIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_TXCIE3_REGISTER) && defined(INTERRUPT_UCSR3B_TXCIE3_BIT)
        case INTERRUPTS_UCSR3B_TXCIE3:
            interrupt_bit_set( INTERRUPT_UCSR3B_TXCIE3_REGISTER, INTERRUPT_UCSR3B_TXCIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_RXCIE3_REGISTER) && defined(INTERRUPT_UCSR3B_RXCIE3_BIT)
        case INTERRUPTS_UCSR3B_RXCIE3:
            interrupt_bit_set( INTERRUPT_UCSR3B_RXCIE3_REGISTER, INTERRUPT_UCSR3B_RXCIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT2_REGISTER) && defined(INTERRUPT_GIMSK_INT2_BIT)
        case INTERRUPTS_GIMSK_INT2:
            interrupt_bit_set( INTERRUPT_GIMSK_INT2_REGISTER, INTERRUPT_GIMSK_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF2_REGISTER) && defined(INTERRUPT_GIFR_INTF2_BIT)
        case INTERRUPTS_GIFR_INTF2:
            interrupt_bit_set( INTERRUPT_GIFR_INTF2_REGISTER, INTERRUPT_GIFR_INTF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPMCR_SPMIE_REGISTER) && defined(INTERRUPT_SPMCR_SPMIE_BIT)
        case INTERRUPTS_SPMCR_SPMIE:
            interrupt_bit_set( INTERRUPT_SPMCR_SPMIE_REGISTER, INTERRUPT_SPMCR_SPMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_PCIE_REGISTER) && defined(INTERRUPT_GICR_PCIE_BIT)
        case INTERRUPTS_GICR_PCIE:
            interrupt_bit_set( INTERRUPT_GICR_PCIE_REGISTER, INTERRUPT_GICR_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR0_SPIE0_REGISTER) && defined(INTERRUPT_SPCR0_SPIE0_BIT)
        case INTERRUPTS_SPCR0_SPIE0:
            interrupt_bit_set( INTERRUPT_SPCR0_SPIE0_REGISTER, INTERRUPT_SPCR0_SPIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_PCIE_REGISTER) && defined(INTERRUPT_EIMSK_PCIE_BIT)
        case INTERRUPTS_EIMSK_PCIE:
            interrupt_bit_set( INTERRUPT_EIMSK_PCIE_REGISTER, INTERRUPT_EIMSK_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USICR_USIOIE_REGISTER) && defined(INTERRUPT_USICR_USIOIE_BIT)
        case INTERRUPTS_USICR_USIOIE:
            interrupt_bit_set( INTERRUPT_USICR_USIOIE_REGISTER, INTERRUPT_USICR_USIOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USICR_USISIE_REGISTER) && defined(INTERRUPT_USICR_USISIE_BIT)
        case INTERRUPTS_USICR_USISIE:
            interrupt_bit_set( INTERRUPT_USICR_USISIE_REGISTER, INTERRUPT_USICR_USISIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR0D_RXSIE_BIT)
        case INTERRUPTS_UCSR0D_RXSIE:
            interrupt_bit_set( INTERRUPT_UCSR0D_RXSIE_REGISTER, INTERRUPT_UCSR0D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCDCRA_LCDIE_REGISTER) && defined(INTERRUPT_LCDCRA_LCDIE_BIT)
        case INTERRUPTS_LCDCRA_LCDIE:
            interrupt_bit_set( INTERRUPT_LCDCRA_LCDIE_REGISTER, INTERRUPT_LCDCRA_LCDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_ICIE0_REGISTER) && defined(INTERRUPT_TIMSK0_ICIE0_BIT)
        case INTERRUPTS_TIMSK0_ICIE0:
            interrupt_bit_set( INTERRUPT_TIMSK0_ICIE0_REGISTER, INTERRUPT_TIMSK0_ICIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_VADCSR_VADCCIE_REGISTER) && defined(INTERRUPT_VADCSR_VADCCIE_BIT)
        case INTERRUPTS_VADCSR_VADCCIE:
            interrupt_bit_set( INTERRUPT_VADCSR_VADCCIE_REGISTER, INTERRUPT_VADCSR_VADCCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ROCR_ROCWIE_REGISTER) && defined(INTERRUPT_ROCR_ROCWIE_BIT)
        case INTERRUPTS_ROCR_ROCWIE:
            interrupt_bit_set( INTERRUPT_ROCR_ROCWIE_REGISTER, INTERRUPT_ROCR_ROCWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CADCSRB_CADICIE_REGISTER) && defined(INTERRUPT_CADCSRB_CADICIE_BIT)
        case INTERRUPTS_CADCSRB_CADICIE:
            interrupt_bit_set( INTERRUPT_CADCSRB_CADICIE_REGISTER, INTERRUPT_CADCSRB_CADICIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CADCSRB_CADRCIE_REGISTER) && defined(INTERRUPT_CADCSRB_CADRCIE_BIT)
        case INTERRUPTS_CADCSRB_CADRCIE:
            interrupt_bit_set( INTERRUPT_CADCSRB_CADRCIE_REGISTER, INTERRUPT_CADCSRB_CADRCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_COCIE_REGISTER) && defined(INTERRUPT_BPIMSK_COCIE_BIT)
        case INTERRUPTS_BPIMSK_COCIE:
            interrupt_bit_set( INTERRUPT_BPIMSK_COCIE_REGISTER, INTERRUPT_BPIMSK_COCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_DOCIE_REGISTER) && defined(INTERRUPT_BPIMSK_DOCIE_BIT)
        case INTERRUPTS_BPIMSK_DOCIE:
            interrupt_bit_set( INTERRUPT_BPIMSK_DOCIE_REGISTER, INTERRUPT_BPIMSK_DOCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_SCIE_REGISTER) && defined(INTERRUPT_BPIMSK_SCIE_BIT)
        case INTERRUPTS_BPIMSK_SCIE:
            interrupt_bit_set( INTERRUPT_BPIMSK_SCIE_REGISTER, INTERRUPT_BPIMSK_SCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWBCSR_TWBCIE_REGISTER) && defined(INTERRUPT_TWBCSR_TWBCIE_BIT)
        case INTERRUPTS_TWBCSR_TWBCIE:
            interrupt_bit_set( INTERRUPT_TWBCSR_TWBCIE_REGISTER, INTERRUPT_TWBCSR_TWBCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BGCSR_BGSCDIE_REGISTER) && defined(INTERRUPT_BGCSR_BGSCDIE_BIT)
        case INTERRUPTS_BGCSR_BGSCDIE:
            interrupt_bit_set( INTERRUPT_BGCSR_BGSCDIE_REGISTER, INTERRUPT_BGCSR_BGSCDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CHGDCSR_CHGDIE_REGISTER) && defined(INTERRUPT_CHGDCSR_CHGDIE_BIT)
        case INTERRUPTS_CHGDCSR_CHGDIE:
            interrupt_bit_set( INTERRUPT_CHGDCSR_CHGDIE_REGISTER, INTERRUPT_CHGDCSR_CHGDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM_PEOPE_REGISTER) && defined(INTERRUPT_PIM_PEOPE_BIT)
        case INTERRUPTS_PIM_PEOPE:
            interrupt_bit_set( INTERRUPT_PIM_PEOPE_REGISTER, INTERRUPT_PIM_PEOPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM_PEVE_REGISTER) && defined(INTERRUPT_PIM_PEVE_BIT)
        case INTERRUPTS_PIM_PEVE:
            interrupt_bit_set( INTERRUPT_PIM_PEVE_REGISTER, INTERRUPT_PIM_PEVE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_SUSPE_REGISTER) && defined(INTERRUPT_UDIEN_SUSPE_BIT)
        case INTERRUPTS_UDIEN_SUSPE:
            interrupt_bit_set( INTERRUPT_UDIEN_SUSPE_REGISTER, INTERRUPT_UDIEN_SUSPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_SOFE_REGISTER) && defined(INTERRUPT_UDIEN_SOFE_BIT)
        case INTERRUPTS_UDIEN_SOFE:
            interrupt_bit_set( INTERRUPT_UDIEN_SOFE_REGISTER, INTERRUPT_UDIEN_SOFE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_EORSTE_REGISTER) && defined(INTERRUPT_UDIEN_EORSTE_BIT)
        case INTERRUPTS_UDIEN_EORSTE:
            interrupt_bit_set( INTERRUPT_UDIEN_EORSTE_REGISTER, INTERRUPT_UDIEN_EORSTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_WAKEUPE_REGISTER) && defined(INTERRUPT_UDIEN_WAKEUPE_BIT)
        case INTERRUPTS_UDIEN_WAKEUPE:
            interrupt_bit_set( INTERRUPT_UDIEN_WAKEUPE_REGISTER, INTERRUPT_UDIEN_WAKEUPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_EORSME_REGISTER) && defined(INTERRUPT_UDIEN_EORSME_BIT)
        case INTERRUPTS_UDIEN_EORSME:
            interrupt_bit_set( INTERRUPT_UDIEN_EORSME_REGISTER, INTERRUPT_UDIEN_EORSME_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_UPRSME_REGISTER) && defined(INTERRUPT_UDIEN_UPRSME_BIT)
        case INTERRUPTS_UDIEN_UPRSME:
            interrupt_bit_set( INTERRUPT_UDIEN_UPRSME_REGISTER, INTERRUPT_UDIEN_UPRSME_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_TXINE_REGISTER) && defined(INTERRUPT_UEIENX_TXINE_BIT)
        case INTERRUPTS_UEIENX_TXINE:
            interrupt_bit_set( INTERRUPT_UEIENX_TXINE_REGISTER, INTERRUPT_UEIENX_TXINE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_STALLEDE_REGISTER) && defined(INTERRUPT_UEIENX_STALLEDE_BIT)
        case INTERRUPTS_UEIENX_STALLEDE:
            interrupt_bit_set( INTERRUPT_UEIENX_STALLEDE_REGISTER, INTERRUPT_UEIENX_STALLEDE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_RXOUTE_REGISTER) && defined(INTERRUPT_UEIENX_RXOUTE_BIT)
        case INTERRUPTS_UEIENX_RXOUTE:
            interrupt_bit_set( INTERRUPT_UEIENX_RXOUTE_REGISTER, INTERRUPT_UEIENX_RXOUTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_RXSTPE_REGISTER) && defined(INTERRUPT_UEIENX_RXSTPE_BIT)
        case INTERRUPTS_UEIENX_RXSTPE:
            interrupt_bit_set( INTERRUPT_UEIENX_RXSTPE_REGISTER, INTERRUPT_UEIENX_RXSTPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_NAKOUTE_REGISTER) && defined(INTERRUPT_UEIENX_NAKOUTE_BIT)
        case INTERRUPTS_UEIENX_NAKOUTE:
            interrupt_bit_set( INTERRUPT_UEIENX_NAKOUTE_REGISTER, INTERRUPT_UEIENX_NAKOUTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_NAKINE_REGISTER) && defined(INTERRUPT_UEIENX_NAKINE_BIT)
        case INTERRUPTS_UEIENX_NAKINE:
            interrupt_bit_set( INTERRUPT_UEIENX_NAKINE_REGISTER, INTERRUPT_UEIENX_NAKINE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_FLERRE_REGISTER) && defined(INTERRUPT_UEIENX_FLERRE_BIT)
        case INTERRUPTS_UEIENX_FLERRE:
            interrupt_bit_set( INTERRUPT_UEIENX_FLERRE_REGISTER, INTERRUPT_UEIENX_FLERRE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4D_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4D_BIT)
        case INTERRUPTS_TIMSK4_OCIE4D:
            interrupt_bit_set( INTERRUPT_TIMSK4_OCIE4D_REGISTER, INTERRUPT_TIMSK4_OCIE4D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TCCR4D_FPIE4_REGISTER) && defined(INTERRUPT_TCCR4D_FPIE4_BIT)
        case INTERRUPTS_TCCR4D_FPIE4:
            interrupt_bit_set( INTERRUPT_TCCR4D_FPIE4_REGISTER, INTERRUPT_TCCR4D_FPIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT2_REGISTER) && defined(INTERRUPT_GICR_INT2_BIT)
        case INTERRUPTS_GICR_INT2:
            interrupt_bit_set( INTERRUPT_GICR_INT2_REGISTER, INTERRUPT_GICR_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT0_REGISTER) && defined(INTERRUPT_GICR_INT0_BIT)
        case INTERRUPTS_GICR_INT0:
            interrupt_bit_set( INTERRUPT_GICR_INT0_REGISTER, INTERRUPT_GICR_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT1_REGISTER) && defined(INTERRUPT_GICR_INT1_BIT)
        case INTERRUPTS_GICR_INT1:
            interrupt_bit_set( INTERRUPT_GICR_INT1_REGISTER, INTERRUPT_GICR_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR0_SPIE_REGISTER) && defined(INTERRUPT_SPCR0_SPIE_BIT)
        case INTERRUPTS_SPCR0_SPIE:
            interrupt_bit_set( INTERRUPT_SPCR0_SPIE_REGISTER, INTERRUPT_SPCR0_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_XFDCSR_XFDIE_REGISTER) && defined(INTERRUPT_XFDCSR_XFDIE_BIT)
        case INTERRUPTS_XFDCSR_XFDIE:
            interrupt_bit_set( INTERRUPT_XFDCSR_XFDIE_REGISTER, INTERRUPT_XFDCSR_XFDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR1_SPIE_REGISTER) && defined(INTERRUPT_SPCR1_SPIE_BIT)
        case INTERRUPTS_SPCR1_SPIE:
            interrupt_bit_set( INTERRUPT_SPCR1_SPIE_REGISTER, INTERRUPT_SPCR1_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR0_TWIE_REGISTER) && defined(INTERRUPT_TWCR0_TWIE_BIT)
        case INTERRUPTS_TWCR0_TWIE:
            interrupt_bit_set( INTERRUPT_TWCR0_TWIE_REGISTER, INTERRUPT_TWCR0_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR0B_UDRIE_BIT)
        case INTERRUPTS_UCSR0B_UDRIE:
            interrupt_bit_set( INTERRUPT_UCSR0B_UDRIE_REGISTER, INTERRUPT_UCSR0B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR0B_TXCIE_BIT)
        case INTERRUPTS_UCSR0B_TXCIE:
            interrupt_bit_set( INTERRUPT_UCSR0B_TXCIE_REGISTER, INTERRUPT_UCSR0B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR0B_RXCIE_BIT)
        case INTERRUPTS_UCSR0B_RXCIE:
            interrupt_bit_set( INTERRUPT_UCSR0B_RXCIE_REGISTER, INTERRUPT_UCSR0B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR1B_UDRIE_BIT)
        case INTERRUPTS_UCSR1B_UDRIE:
            interrupt_bit_set( INTERRUPT_UCSR1B_UDRIE_REGISTER, INTERRUPT_UCSR1B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR1B_TXCIE_BIT)
        case INTERRUPTS_UCSR1B_TXCIE:
            interrupt_bit_set( INTERRUPT_UCSR1B_TXCIE_REGISTER, INTERRUPT_UCSR1B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR1B_RXCIE_BIT)
        case INTERRUPTS_UCSR1B_RXCIE:
            interrupt_bit_set( INTERRUPT_UCSR1B_RXCIE_REGISTER, INTERRUPT_UCSR1B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR1D_RXSIE_BIT)
        case INTERRUPTS_UCSR1D_RXSIE:
            interrupt_bit_set( INTERRUPT_UCSR1D_RXSIE_REGISTER, INTERRUPT_UCSR1D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR2B_UDRIE_BIT)
        case INTERRUPTS_UCSR2B_UDRIE:
            interrupt_bit_set( INTERRUPT_UCSR2B_UDRIE_REGISTER, INTERRUPT_UCSR2B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR2B_TXCIE_BIT)
        case INTERRUPTS_UCSR2B_TXCIE:
            interrupt_bit_set( INTERRUPT_UCSR2B_TXCIE_REGISTER, INTERRUPT_UCSR2B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR2B_RXCIE_BIT)
        case INTERRUPTS_UCSR2B_RXCIE:
            interrupt_bit_set( INTERRUPT_UCSR2B_RXCIE_REGISTER, INTERRUPT_UCSR2B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR2D_RXSIE_BIT)
        case INTERRUPTS_UCSR2D_RXSIE:
            interrupt_bit_set( INTERRUPT_UCSR2D_RXSIE_REGISTER, INTERRUPT_UCSR2D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR1_TWIE_REGISTER) && defined(INTERRUPT_TWCR1_TWIE_BIT)
        case INTERRUPTS_TWCR1_TWIE:
            interrupt_bit_set( INTERRUPT_TWCR1_TWIE_REGISTER, INTERRUPT_TWCR1_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR1_SPIE1_REGISTER) && defined(INTERRUPT_SPCR1_SPIE1_BIT)
        case INTERRUPTS_SPCR1_SPIE1:
            interrupt_bit_set( INTERRUPT_SPCR1_SPIE1_REGISTER, INTERRUPT_SPCR1_SPIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1D_RXSIE1_REGISTER) && defined(INTERRUPT_UCSR1D_RXSIE1_BIT)
        case INTERRUPTS_UCSR1D_RXSIE1:
            interrupt_bit_set( INTERRUPT_UCSR1D_RXSIE1_REGISTER, INTERRUPT_UCSR1D_RXSIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR1_TWIE1_REGISTER) && defined(INTERRUPT_TWCR1_TWIE1_BIT)
        case INTERRUPTS_TWCR1_TWIE1:
            interrupt_bit_set( INTERRUPT_TWCR1_TWIE1_REGISTER, INTERRUPT_TWCR1_TWIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WUTCSR_WUTIE_REGISTER) && defined(INTERRUPT_WUTCSR_WUTIE_BIT)
        case INTERRUPTS_WUTCSR_WUTIE:
            interrupt_bit_set( INTERRUPT_WUTCSR_WUTIE_REGISTER, INTERRUPT_WUTCSR_WUTIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIR_DUVIE_REGISTER) && defined(INTERRUPT_BPIR_DUVIE_BIT)
        case INTERRUPTS_BPIR_DUVIE:
            interrupt_bit_set( INTERRUPT_BPIR_DUVIE_REGISTER, INTERRUPT_BPIR_DUVIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRD_RXSIE_REGISTER) && defined(INTERRUPT_UCSRD_RXSIE_BIT)
        case INTERRUPTS_UCSRD_RXSIE:
            interrupt_bit_set( INTERRUPT_UCSRD_RXSIE_REGISTER, INTERRUPT_UCSRD_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE1_REGISTER) && defined(INTERRUPT_PCICR_PCIE1_BIT)
        case INTERRUPTS_PCICR_PCIE1:
            interrupt_bit_set( INTERRUPT_PCICR_PCIE1_REGISTER, INTERRUPT_PCICR_PCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSRA_ACIE_REGISTER) && defined(INTERRUPT_ACSRA_ACIE_BIT)
        case INTERRUPTS_ACSRA_ACIE:
            interrupt_bit_set( INTERRUPT_ACSRA_ACIE_REGISTER, INTERRUPT_ACSRA_ACIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_VLMCSR_VLMIE_REGISTER) && defined(INTERRUPT_VLMCSR_VLMIE_BIT)
        case INTERRUPTS_VLMCSR_VLMIE:
            interrupt_bit_set( INTERRUPT_VLMCSR_VLMIE_REGISTER, INTERRUPT_VLMCSR_VLMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCR_WDTIE_REGISTER) && defined(INTERRUPT_WDTCR_WDTIE_BIT)
        case INTERRUPTS_WDTCR_WDTIE:
            interrupt_bit_set( INTERRUPT_WDTCR_WDTIE_REGISTER, INTERRUPT_WDTCR_WDTIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_PCIE_REGISTER) && defined(INTERRUPT_GIMSK_PCIE_BIT)
        case INTERRUPTS_GIMSK_PCIE:
            interrupt_bit_set( INTERRUPT_GIMSK_PCIE_REGISTER, INTERRUPT_GIMSK_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0D_RXSIE0_REGISTER) && defined(INTERRUPT_UCSR0D_RXSIE0_BIT)
        case INTERRUPTS_UCSR0D_RXSIE0:
            interrupt_bit_set( INTERRUPT_UCSR0D_RXSIE0_REGISTER, INTERRUPT_UCSR0D_RXSIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_ICIE1_REGISTER) && defined(INTERRUPT_TIMSK_ICIE1_BIT)
        case INTERRUPTS_TIMSK_ICIE1:
            interrupt_bit_set( INTERRUPT_TIMSK_ICIE1_REGISTER, INTERRUPT_TIMSK_ICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0A_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0A_BIT)
        case INTERRUPTS_TIMSK_OCIE0A:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE0A_REGISTER, INTERRUPT_TIMSK_OCIE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0B_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0B_BIT)
        case INTERRUPTS_TIMSK_OCIE0B:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE0B_REGISTER, INTERRUPT_TIMSK_OCIE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWSIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWSIE_BIT)
        case INTERRUPTS_TWSCRA_TWSIE:
            interrupt_bit_set( INTERRUPT_TWSCRA_TWSIE_REGISTER, INTERRUPT_TWSCRA_TWSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWASIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWASIE_BIT)
        case INTERRUPTS_TWSCRA_TWASIE:
            interrupt_bit_set( INTERRUPT_TWSCRA_TWASIE_REGISTER, INTERRUPT_TWSCRA_TWASIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWDIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWDIE_BIT)
        case INTERRUPTS_TWSCRA_TWDIE:
            interrupt_bit_set( INTERRUPT_TWSCRA_TWDIE_REGISTER, INTERRUPT_TWSCRA_TWDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCR_WDIE_REGISTER) && defined(INTERRUPT_WDTCR_WDIE_BIT)
        case INTERRUPTS_WDTCR_WDIE:
            interrupt_bit_set( INTERRUPT_WDTCR_WDIE_REGISTER, INTERRUPT_WDTCR_WDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCSR_ADIE_REGISTER) && defined(INTERRUPT_ADCSR_ADIE_BIT)
        case INTERRUPTS_ADCSR_ADIE:
            interrupt_bit_set( INTERRUPT_ADCSR_ADIE_REGISTER, INTERRUPT_ADCSR_ADIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TCCR1D_FPIE1_REGISTER) && defined(INTERRUPT_TCCR1D_FPIE1_BIT)
        case INTERRUPTS_TCCR1D_FPIE1:
            interrupt_bit_set( INTERRUPT_TCCR1D_FPIE1_REGISTER, INTERRUPT_TCCR1D_FPIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TICIE0_REGISTER) && defined(INTERRUPT_TIMSK_TICIE0_BIT)
        case INTERRUPTS_TIMSK_TICIE0:
            interrupt_bit_set( INTERRUPT_TIMSK_TICIE0_REGISTER, INTERRUPT_TIMSK_TICIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1D_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1D_BIT)
        case INTERRUPTS_TIMSK_OCIE1D:
            interrupt_bit_set( INTERRUPT_TIMSK_OCIE1D_REGISTER, INTERRUPT_TIMSK_OCIE1D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LUNF_REGISTER) && defined(INTERRUPT_INTCTRL_LUNF_BIT)
        case INTERRUPTS_INTCTRL_LUNF:
            interrupt_bit_set( INTERRUPT_INTCTRL_LUNF_REGISTER, INTERRUPT_INTCTRL_LUNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_HUNF_REGISTER) && defined(INTERRUPT_INTCTRL_HUNF_BIT)
        case INTERRUPTS_INTCTRL_HUNF:
            interrupt_bit_set( INTERRUPT_INTCTRL_HUNF_REGISTER, INTERRUPT_INTCTRL_HUNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP0_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP0_BIT)
        case INTERRUPTS_INTCTRL_LCMP0:
            interrupt_bit_set( INTERRUPT_INTCTRL_LCMP0_REGISTER, INTERRUPT_INTCTRL_LCMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP1_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP1_BIT)
        case INTERRUPTS_INTCTRL_LCMP1:
            interrupt_bit_set( INTERRUPT_INTCTRL_LCMP1_REGISTER, INTERRUPT_INTCTRL_LCMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP2_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP2_BIT)
        case INTERRUPTS_INTCTRL_LCMP2:
            interrupt_bit_set( INTERRUPT_INTCTRL_LCMP2_REGISTER, INTERRUPT_INTCTRL_LCMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_OVF_REGISTER) && defined(INTERRUPT_INTCTRL_OVF_BIT)
        case INTERRUPTS_INTCTRL_OVF:
            interrupt_bit_set( INTERRUPT_INTCTRL_OVF_REGISTER, INTERRUPT_INTCTRL_OVF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_CMP_REGISTER) && defined(INTERRUPT_INTCTRL_CMP_BIT)
        case INTERRUPTS_INTCTRL_CMP:
            interrupt_bit_set( INTERRUPT_INTCTRL_CMP_REGISTER, INTERRUPT_INTCTRL_CMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_RESRDY_REGISTER) && defined(INTERRUPT_INTCTRL_RESRDY_BIT)
        case INTERRUPTS_INTCTRL_RESRDY:
            interrupt_bit_set( INTERRUPT_INTCTRL_RESRDY_REGISTER, INTERRUPT_INTCTRL_RESRDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_WCMP_REGISTER) && defined(INTERRUPT_INTCTRL_WCMP_BIT)
        case INTERRUPTS_INTCTRL_WCMP:
            interrupt_bit_set( INTERRUPT_INTCTRL_WCMP_REGISTER, INTERRUPT_INTCTRL_WCMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_ABEIE_REGISTER) && defined(INTERRUPT_CTRLA_ABEIE_BIT)
        case INTERRUPTS_CTRLA_ABEIE:
            interrupt_bit_set( INTERRUPT_CTRLA_ABEIE_REGISTER, INTERRUPT_CTRLA_ABEIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_RXSIE_REGISTER) && defined(INTERRUPT_CTRLA_RXSIE_BIT)
        case INTERRUPTS_CTRLA_RXSIE:
            interrupt_bit_set( INTERRUPT_CTRLA_RXSIE_REGISTER, INTERRUPT_CTRLA_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_DREIE_REGISTER) && defined(INTERRUPT_CTRLA_DREIE_BIT)
        case INTERRUPTS_CTRLA_DREIE:
            interrupt_bit_set( INTERRUPT_CTRLA_DREIE_REGISTER, INTERRUPT_CTRLA_DREIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_TXCIE_REGISTER) && defined(INTERRUPT_CTRLA_TXCIE_BIT)
        case INTERRUPTS_CTRLA_TXCIE:
            interrupt_bit_set( INTERRUPT_CTRLA_TXCIE_REGISTER, INTERRUPT_CTRLA_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_RXCIE_REGISTER) && defined(INTERRUPT_CTRLA_RXCIE_BIT)
        case INTERRUPTS_CTRLA_RXCIE:
            interrupt_bit_set( INTERRUPT_CTRLA_RXCIE_REGISTER, INTERRUPT_CTRLA_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MCTRLA_WIEN_REGISTER) && defined(INTERRUPT_MCTRLA_WIEN_BIT)
        case INTERRUPTS_MCTRLA_WIEN:
            interrupt_bit_set( INTERRUPT_MCTRLA_WIEN_REGISTER, INTERRUPT_MCTRLA_WIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MCTRLA_RIEN_REGISTER) && defined(INTERRUPT_MCTRLA_RIEN_BIT)
        case INTERRUPTS_MCTRLA_RIEN:
            interrupt_bit_set( INTERRUPT_MCTRLA_RIEN_REGISTER, INTERRUPT_MCTRLA_RIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_PIEN_REGISTER) && defined(INTERRUPT_SCTRLA_PIEN_BIT)
        case INTERRUPTS_SCTRLA_PIEN:
            interrupt_bit_set( INTERRUPT_SCTRLA_PIEN_REGISTER, INTERRUPT_SCTRLA_PIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_APIEN_REGISTER) && defined(INTERRUPT_SCTRLA_APIEN_BIT)
        case INTERRUPTS_SCTRLA_APIEN:
            interrupt_bit_set( INTERRUPT_SCTRLA_APIEN_REGISTER, INTERRUPT_SCTRLA_APIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_DIEN_REGISTER) && defined(INTERRUPT_SCTRLA_DIEN_BIT)
        case INTERRUPTS_SCTRLA_DIEN:
            interrupt_bit_set( INTERRUPT_SCTRLA_DIEN_REGISTER, INTERRUPT_SCTRLA_DIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_IE_REGISTER) && defined(INTERRUPT_INTCTRL_IE_BIT)
        case INTERRUPTS_INTCTRL_IE:
            interrupt_bit_set( INTERRUPT_INTCTRL_IE_REGISTER, INTERRUPT_INTCTRL_IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_SSIE_REGISTER) && defined(INTERRUPT_INTCTRL_SSIE_BIT)
        case INTERRUPTS_INTCTRL_SSIE:
            interrupt_bit_set( INTERRUPT_INTCTRL_SSIE_REGISTER, INTERRUPT_INTCTRL_SSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_DREIE_REGISTER) && defined(INTERRUPT_INTCTRL_DREIE_BIT)
        case INTERRUPTS_INTCTRL_DREIE:
            interrupt_bit_set( INTERRUPT_INTCTRL_DREIE_REGISTER, INTERRUPT_INTCTRL_DREIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TXCIE_REGISTER) && defined(INTERRUPT_INTCTRL_TXCIE_BIT)
        case INTERRUPTS_INTCTRL_TXCIE:
            interrupt_bit_set( INTERRUPT_INTCTRL_TXCIE_REGISTER, INTERRUPT_INTCTRL_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_RXCIE_REGISTER) && defined(INTERRUPT_INTCTRL_RXCIE_BIT)
        case INTERRUPTS_INTCTRL_RXCIE:
            interrupt_bit_set( INTERRUPT_INTCTRL_RXCIE_REGISTER, INTERRUPT_INTCTRL_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TRIGA_REGISTER) && defined(INTERRUPT_INTCTRL_TRIGA_BIT)
        case INTERRUPTS_INTCTRL_TRIGA:
            interrupt_bit_set( INTERRUPT_INTCTRL_TRIGA_REGISTER, INTERRUPT_INTCTRL_TRIGA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TRIGB_REGISTER) && defined(INTERRUPT_INTCTRL_TRIGB_BIT)
        case INTERRUPTS_INTCTRL_TRIGB:
            interrupt_bit_set( INTERRUPT_INTCTRL_TRIGB_REGISTER, INTERRUPT_INTCTRL_TRIGB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_OVF_REGISTER) && defined(INTERRUPT_INTFLAGS_OVF_BIT)
        case INTERRUPTS_INTFLAGS_OVF:
            interrupt_bit_set( INTERRUPT_INTFLAGS_OVF_REGISTER, INTERRUPT_INTFLAGS_OVF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_TRIGA_REGISTER) && defined(INTERRUPT_INTFLAGS_TRIGA_BIT)
        case INTERRUPTS_INTFLAGS_TRIGA:
            interrupt_bit_set( INTERRUPT_INTFLAGS_TRIGA_REGISTER, INTERRUPT_INTFLAGS_TRIGA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_TRIGB_REGISTER) && defined(INTERRUPT_INTFLAGS_TRIGB_BIT)
        case INTERRUPTS_INTFLAGS_TRIGB:
            interrupt_bit_set( INTERRUPT_INTFLAGS_TRIGB_REGISTER, INTERRUPT_INTFLAGS_TRIGB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR0A_ACIE0_REGISTER) && defined(INTERRUPT_ACSR0A_ACIE0_BIT)
        case INTERRUPTS_ACSR0A_ACIE0:
            interrupt_bit_set( INTERRUPT_ACSR0A_ACIE0_REGISTER, INTERRUPT_ACSR0A_ACIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR1A_ACIE1_REGISTER) && defined(INTERRUPT_ACSR1A_ACIE1_BIT)
        case INTERRUPTS_ACSR1A_ACIE1:
            interrupt_bit_set( INTERRUPT_ACSR1A_ACIE1_REGISTER, INTERRUPT_ACSR1A_ACIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_ICIE2_REGISTER) && defined(INTERRUPT_TIMSK2_ICIE2_BIT)
        case INTERRUPTS_TIMSK2_ICIE2:
            interrupt_bit_set( INTERRUPT_TIMSK2_ICIE2_REGISTER, INTERRUPT_TIMSK2_ICIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLA_WIEN_REGISTER) && defined(INTERRUPT_MASTERCTRLA_WIEN_BIT)
        case INTERRUPTS_MASTERCTRLA_WIEN:
            interrupt_bit_set( INTERRUPT_MASTERCTRLA_WIEN_REGISTER, INTERRUPT_MASTERCTRLA_WIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLA_RIEN_REGISTER) && defined(INTERRUPT_MASTERCTRLA_RIEN_BIT)
        case INTERRUPTS_MASTERCTRLA_RIEN:
            interrupt_bit_set( INTERRUPT_MASTERCTRLA_RIEN_REGISTER, INTERRUPT_MASTERCTRLA_RIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_PIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_PIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_PIEN:
            interrupt_bit_set( INTERRUPT_SLAVECTRLA_PIEN_REGISTER, INTERRUPT_SLAVECTRLA_PIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_APIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_APIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_APIEN:
            interrupt_bit_set( INTERRUPT_SLAVECTRLA_APIEN_REGISTER, INTERRUPT_SLAVECTRLA_APIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_DIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_DIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_DIEN:
            interrupt_bit_set( INTERRUPT_SLAVECTRLA_DIEN_REGISTER, INTERRUPT_SLAVECTRLA_DIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_STALLIE_REGISTER) && defined(INTERRUPT_INTCTRLA_STALLIE_BIT)
        case INTERRUPTS_INTCTRLA_STALLIE:
            interrupt_bit_set( INTERRUPT_INTCTRLA_STALLIE_REGISTER, INTERRUPT_INTCTRLA_STALLIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_BUSERRIE_REGISTER) && defined(INTERRUPT_INTCTRLA_BUSERRIE_BIT)
        case INTERRUPTS_INTCTRLA_BUSERRIE:
            interrupt_bit_set( INTERRUPT_INTCTRLA_BUSERRIE_REGISTER, INTERRUPT_INTCTRLA_BUSERRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_BUSEVIE_REGISTER) && defined(INTERRUPT_INTCTRLA_BUSEVIE_BIT)
        case INTERRUPTS_INTCTRLA_BUSEVIE:
            interrupt_bit_set( INTERRUPT_INTCTRLA_BUSEVIE_REGISTER, INTERRUPT_INTCTRLA_BUSEVIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_SOFIE_REGISTER) && defined(INTERRUPT_INTCTRLA_SOFIE_BIT)
        case INTERRUPTS_INTCTRLA_SOFIE:
            interrupt_bit_set( INTERRUPT_INTCTRLA_SOFIE_REGISTER, INTERRUPT_INTCTRLA_SOFIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLB_SETUPIE_REGISTER) && defined(INTERRUPT_INTCTRLB_SETUPIE_BIT)
        case INTERRUPTS_INTCTRLB_SETUPIE:
            interrupt_bit_set( INTERRUPT_INTCTRLB_SETUPIE_REGISTER, INTERRUPT_INTCTRLB_SETUPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLB_TRNIE_REGISTER) && defined(INTERRUPT_INTCTRLB_TRNIE_BIT)
        case INTERRUPTS_INTCTRLB_TRNIE:
            interrupt_bit_set( INTERRUPT_INTCTRLB_TRNIE_REGISTER, INTERRUPT_INTCTRLB_TRNIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_CC0IE_REGISTER) && defined(INTERRUPT_INTCTRL_CC0IE_BIT)
        case INTERRUPTS_INTCTRL_CC0IE:
            interrupt_bit_set( INTERRUPT_INTCTRL_CC0IE_REGISTER, INTERRUPT_INTCTRL_CC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC20IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC20IE_BIT)
        case INTERRUPTS_INTCTRL_PEC20IE:
            interrupt_bit_set( INTERRUPT_INTCTRL_PEC20IE_REGISTER, INTERRUPT_INTCTRL_PEC20IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC0IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC0IE_BIT)
        case INTERRUPTS_INTCTRL_PEC0IE:
            interrupt_bit_set( INTERRUPT_INTCTRL_PEC0IE_REGISTER, INTERRUPT_INTCTRL_PEC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC21IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC21IE_BIT)
        case INTERRUPTS_INTCTRL_PEC21IE:
            interrupt_bit_set( INTERRUPT_INTCTRL_PEC21IE_REGISTER, INTERRUPT_INTCTRL_PEC21IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLB_TOIE_REGISTER) && defined(INTERRUPT_MASTERCTRLB_TOIE_BIT)
        case INTERRUPTS_MASTERCTRLB_TOIE:
            interrupt_bit_set( INTERRUPT_MASTERCTRLB_TOIE_REGISTER, INTERRUPT_MASTERCTRLB_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLB_TOIE_REGISTER) && defined(INTERRUPT_SLAVECTRLB_TOIE_BIT)
        case INTERRUPTS_SLAVECTRLB_TOIE:
            interrupt_bit_set( INTERRUPT_SLAVECTRLB_TOIE_REGISTER, INTERRUPT_SLAVECTRLB_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_DRIE_REGISTER) && defined(INTERRUPT_CTRLA_DRIE_BIT)
        case INTERRUPTS_CTRLA_DRIE:
            interrupt_bit_set( INTERRUPT_CTRLA_DRIE_REGISTER, INTERRUPT_CTRLA_DRIE_BIT );
            break;
        #endif

        default:
            break;
    }
}

void interrupt_disable( int interrupt )
{
    switch ( interrupt )
    {
        #if defined(INTERRUPT_EECR_EERIE_REGISTER) && defined(INTERRUPT_EECR_EERIE_BIT)
        case INTERRUPTS_EECR_EERIE:
            interrupt_bit_clear( INTERRUPT_EECR_EERIE_REGISTER, INTERRUPT_EECR_EERIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR_SPIE_REGISTER) && defined(INTERRUPT_SPCR_SPIE_BIT)
        case INTERRUPTS_SPCR_SPIE:
            interrupt_bit_clear( INTERRUPT_SPCR_SPIE_REGISTER, INTERRUPT_SPCR_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR_ACIE_REGISTER) && defined(INTERRUPT_ACSR_ACIE_BIT)
        case INTERRUPTS_ACSR_ACIE:
            interrupt_bit_clear( INTERRUPT_ACSR_ACIE_REGISTER, INTERRUPT_ACSR_ACIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPMCSR_SPMIE_REGISTER) && defined(INTERRUPT_SPMCSR_SPMIE_BIT)
        case INTERRUPTS_SPMCSR_SPMIE:
            interrupt_bit_clear( INTERRUPT_SPMCSR_SPMIE_REGISTER, INTERRUPT_SPMCSR_SPMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SREG_I_REGISTER) && defined(INTERRUPT_SREG_I_BIT)
        case INTERRUPTS_SREG_I:
            interrupt_bit_clear( INTERRUPT_SREG_I_REGISTER, INTERRUPT_SREG_I_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_TOIE0_REGISTER) && defined(INTERRUPT_TIMSK0_TOIE0_BIT)
        case INTERRUPTS_TIMSK0_TOIE0:
            interrupt_bit_clear( INTERRUPT_TIMSK0_TOIE0_REGISTER, INTERRUPT_TIMSK0_TOIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_OCIE0A_REGISTER) && defined(INTERRUPT_TIMSK0_OCIE0A_BIT)
        case INTERRUPTS_TIMSK0_OCIE0A:
            interrupt_bit_clear( INTERRUPT_TIMSK0_OCIE0A_REGISTER, INTERRUPT_TIMSK0_OCIE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_TOIE1_REGISTER) && defined(INTERRUPT_TIMSK1_TOIE1_BIT)
        case INTERRUPTS_TIMSK1_TOIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK1_TOIE1_REGISTER, INTERRUPT_TIMSK1_TOIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1A_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1A_BIT)
        case INTERRUPTS_TIMSK1_OCIE1A:
            interrupt_bit_clear( INTERRUPT_TIMSK1_OCIE1A_REGISTER, INTERRUPT_TIMSK1_OCIE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1B_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1B_BIT)
        case INTERRUPTS_TIMSK1_OCIE1B:
            interrupt_bit_clear( INTERRUPT_TIMSK1_OCIE1B_REGISTER, INTERRUPT_TIMSK1_OCIE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_OCIE1C_REGISTER) && defined(INTERRUPT_TIMSK1_OCIE1C_BIT)
        case INTERRUPTS_TIMSK1_OCIE1C:
            interrupt_bit_clear( INTERRUPT_TIMSK1_OCIE1C_REGISTER, INTERRUPT_TIMSK1_OCIE1C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK1_ICIE1_REGISTER) && defined(INTERRUPT_TIMSK1_ICIE1_BIT)
        case INTERRUPTS_TIMSK1_ICIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK1_ICIE1_REGISTER, INTERRUPT_TIMSK1_ICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_TOIE2_REGISTER) && defined(INTERRUPT_TIMSK2_TOIE2_BIT)
        case INTERRUPTS_TIMSK2_TOIE2:
            interrupt_bit_clear( INTERRUPT_TIMSK2_TOIE2_REGISTER, INTERRUPT_TIMSK2_TOIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_OCIE2A_REGISTER) && defined(INTERRUPT_TIMSK2_OCIE2A_BIT)
        case INTERRUPTS_TIMSK2_OCIE2A:
            interrupt_bit_clear( INTERRUPT_TIMSK2_OCIE2A_REGISTER, INTERRUPT_TIMSK2_OCIE2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_TOIE3_REGISTER) && defined(INTERRUPT_TIMSK3_TOIE3_BIT)
        case INTERRUPTS_TIMSK3_TOIE3:
            interrupt_bit_clear( INTERRUPT_TIMSK3_TOIE3_REGISTER, INTERRUPT_TIMSK3_TOIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3A_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3A_BIT)
        case INTERRUPTS_TIMSK3_OCIE3A:
            interrupt_bit_clear( INTERRUPT_TIMSK3_OCIE3A_REGISTER, INTERRUPT_TIMSK3_OCIE3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3B_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3B_BIT)
        case INTERRUPTS_TIMSK3_OCIE3B:
            interrupt_bit_clear( INTERRUPT_TIMSK3_OCIE3B_REGISTER, INTERRUPT_TIMSK3_OCIE3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_OCIE3C_REGISTER) && defined(INTERRUPT_TIMSK3_OCIE3C_BIT)
        case INTERRUPTS_TIMSK3_OCIE3C:
            interrupt_bit_clear( INTERRUPT_TIMSK3_OCIE3C_REGISTER, INTERRUPT_TIMSK3_OCIE3C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK3_ICIE3_REGISTER) && defined(INTERRUPT_TIMSK3_ICIE3_BIT)
        case INTERRUPTS_TIMSK3_ICIE3:
            interrupt_bit_clear( INTERRUPT_TIMSK3_ICIE3_REGISTER, INTERRUPT_TIMSK3_ICIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCSRA_ADIE_REGISTER) && defined(INTERRUPT_ADCSRA_ADIE_BIT)
        case INTERRUPTS_ADCSRA_ADIE:
            interrupt_bit_clear( INTERRUPT_ADCSRA_ADIE_REGISTER, INTERRUPT_ADCSRA_ADIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR_TWIE_REGISTER) && defined(INTERRUPT_TWCR_TWIE_BIT)
        case INTERRUPTS_TWCR_TWIE:
            interrupt_bit_clear( INTERRUPT_TWCR_TWIE_REGISTER, INTERRUPT_TWCR_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_UDRIE0_REGISTER) && defined(INTERRUPT_UCSR0B_UDRIE0_BIT)
        case INTERRUPTS_UCSR0B_UDRIE0:
            interrupt_bit_clear( INTERRUPT_UCSR0B_UDRIE0_REGISTER, INTERRUPT_UCSR0B_UDRIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_TXCIE0_REGISTER) && defined(INTERRUPT_UCSR0B_TXCIE0_BIT)
        case INTERRUPTS_UCSR0B_TXCIE0:
            interrupt_bit_clear( INTERRUPT_UCSR0B_TXCIE0_REGISTER, INTERRUPT_UCSR0B_TXCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_RXCIE0_REGISTER) && defined(INTERRUPT_UCSR0B_RXCIE0_BIT)
        case INTERRUPTS_UCSR0B_RXCIE0:
            interrupt_bit_clear( INTERRUPT_UCSR0B_RXCIE0_REGISTER, INTERRUPT_UCSR0B_RXCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_UDRIE1_REGISTER) && defined(INTERRUPT_UCSR1B_UDRIE1_BIT)
        case INTERRUPTS_UCSR1B_UDRIE1:
            interrupt_bit_clear( INTERRUPT_UCSR1B_UDRIE1_REGISTER, INTERRUPT_UCSR1B_UDRIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_TXCIE1_REGISTER) && defined(INTERRUPT_UCSR1B_TXCIE1_BIT)
        case INTERRUPTS_UCSR1B_TXCIE1:
            interrupt_bit_clear( INTERRUPT_UCSR1B_TXCIE1_REGISTER, INTERRUPT_UCSR1B_TXCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_RXCIE1_REGISTER) && defined(INTERRUPT_UCSR1B_RXCIE1_BIT)
        case INTERRUPTS_UCSR1B_RXCIE1:
            interrupt_bit_clear( INTERRUPT_UCSR1B_RXCIE1_REGISTER, INTERRUPT_UCSR1B_RXCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CANIE2_IEMOB_REGISTER) && defined(INTERRUPT_CANIE2_IEMOB_BIT)
        case INTERRUPTS_CANIE2_IEMOB:
            interrupt_bit_clear( INTERRUPT_CANIE2_IEMOB_REGISTER, INTERRUPT_CANIE2_IEMOB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CANIE1_IEMOB_REGISTER) && defined(INTERRUPT_CANIE1_IEMOB_BIT)
        case INTERRUPTS_CANIE1_IEMOB:
            interrupt_bit_clear( INTERRUPT_CANIE1_IEMOB_REGISTER, INTERRUPT_CANIE1_IEMOB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCSR_WDIE_REGISTER) && defined(INTERRUPT_WDTCSR_WDIE_BIT)
        case INTERRUPTS_WDTCSR_WDIE:
            interrupt_bit_clear( INTERRUPT_WDTCSR_WDIE_REGISTER, INTERRUPT_WDTCSR_WDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_OCIE0B_REGISTER) && defined(INTERRUPT_TIMSK0_OCIE0B_BIT)
        case INTERRUPTS_TIMSK0_OCIE0B:
            interrupt_bit_clear( INTERRUPT_TIMSK0_OCIE0B_REGISTER, INTERRUPT_TIMSK0_OCIE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEOPE0_REGISTER) && defined(INTERRUPT_PIM0_PEOPE0_BIT)
        case INTERRUPTS_PIM0_PEOPE0:
            interrupt_bit_clear( INTERRUPT_PIM0_PEOPE0_REGISTER, INTERRUPT_PIM0_PEOPE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEVE0A_REGISTER) && defined(INTERRUPT_PIM0_PEVE0A_BIT)
        case INTERRUPTS_PIM0_PEVE0A:
            interrupt_bit_clear( INTERRUPT_PIM0_PEVE0A_REGISTER, INTERRUPT_PIM0_PEVE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PEVE0B_REGISTER) && defined(INTERRUPT_PIM0_PEVE0B_BIT)
        case INTERRUPTS_PIM0_PEVE0B:
            interrupt_bit_clear( INTERRUPT_PIM0_PEVE0B_REGISTER, INTERRUPT_PIM0_PEVE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM0_PSEIE0_REGISTER) && defined(INTERRUPT_PIM0_PSEIE0_BIT)
        case INTERRUPTS_PIM0_PSEIE0:
            interrupt_bit_clear( INTERRUPT_PIM0_PSEIE0_REGISTER, INTERRUPT_PIM0_PSEIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEOPE2_REGISTER) && defined(INTERRUPT_PIM2_PEOPE2_BIT)
        case INTERRUPTS_PIM2_PEOPE2:
            interrupt_bit_clear( INTERRUPT_PIM2_PEOPE2_REGISTER, INTERRUPT_PIM2_PEOPE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEVE2A_REGISTER) && defined(INTERRUPT_PIM2_PEVE2A_BIT)
        case INTERRUPTS_PIM2_PEVE2A:
            interrupt_bit_clear( INTERRUPT_PIM2_PEVE2A_REGISTER, INTERRUPT_PIM2_PEVE2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEVE2B_REGISTER) && defined(INTERRUPT_PIM2_PEVE2B_BIT)
        case INTERRUPTS_PIM2_PEVE2B:
            interrupt_bit_clear( INTERRUPT_PIM2_PEVE2B_REGISTER, INTERRUPT_PIM2_PEVE2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PSEIE2_REGISTER) && defined(INTERRUPT_PIM2_PSEIE2_BIT)
        case INTERRUPTS_PIM2_PSEIE2:
            interrupt_bit_clear( INTERRUPT_PIM2_PSEIE2_REGISTER, INTERRUPT_PIM2_PSEIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC0CON_AC0IE_REGISTER) && defined(INTERRUPT_AC0CON_AC0IE_BIT)
        case INTERRUPTS_AC0CON_AC0IE:
            interrupt_bit_clear( INTERRUPT_AC0CON_AC0IE_REGISTER, INTERRUPT_AC0CON_AC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC2CON_AC2IE_REGISTER) && defined(INTERRUPT_AC2CON_AC2IE_BIT)
        case INTERRUPTS_AC2CON_AC2IE:
            interrupt_bit_clear( INTERRUPT_AC2CON_AC2IE_REGISTER, INTERRUPT_AC2CON_AC2IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM2_PEOEPE2_REGISTER) && defined(INTERRUPT_PIM2_PEOEPE2_BIT)
        case INTERRUPTS_PIM2_PEOEPE2:
            interrupt_bit_clear( INTERRUPT_PIM2_PEOEPE2_REGISTER, INTERRUPT_PIM2_PEOEPE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC1CON_AC1IE_REGISTER) && defined(INTERRUPT_AC1CON_AC1IE_BIT)
        case INTERRUPTS_AC1CON_AC1IE:
            interrupt_bit_clear( INTERRUPT_AC1CON_AC1IE_REGISTER, INTERRUPT_AC1CON_AC1IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC3CON_AC3IE_REGISTER) && defined(INTERRUPT_AC3CON_AC3IE_BIT)
        case INTERRUPTS_AC3CON_AC3IE:
            interrupt_bit_clear( INTERRUPT_AC3CON_AC3IE_REGISTER, INTERRUPT_AC3CON_AC3IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_UDRIE_REGISTER) && defined(INTERRUPT_UCSRB_UDRIE_BIT)
        case INTERRUPTS_UCSRB_UDRIE:
            interrupt_bit_clear( INTERRUPT_UCSRB_UDRIE_REGISTER, INTERRUPT_UCSRB_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_TXCIE_REGISTER) && defined(INTERRUPT_UCSRB_TXCIE_BIT)
        case INTERRUPTS_UCSRB_TXCIE:
            interrupt_bit_clear( INTERRUPT_UCSRB_TXCIE_REGISTER, INTERRUPT_UCSRB_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRB_RXCIE_REGISTER) && defined(INTERRUPT_UCSRB_RXCIE_BIT)
        case INTERRUPTS_UCSRB_RXCIE:
            interrupt_bit_clear( INTERRUPT_UCSRB_RXCIE_REGISTER, INTERRUPT_UCSRB_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEOPE1_REGISTER) && defined(INTERRUPT_PIM1_PEOPE1_BIT)
        case INTERRUPTS_PIM1_PEOPE1:
            interrupt_bit_clear( INTERRUPT_PIM1_PEOPE1_REGISTER, INTERRUPT_PIM1_PEOPE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEVE1A_REGISTER) && defined(INTERRUPT_PIM1_PEVE1A_BIT)
        case INTERRUPTS_PIM1_PEVE1A:
            interrupt_bit_clear( INTERRUPT_PIM1_PEVE1A_REGISTER, INTERRUPT_PIM1_PEVE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PEVE1B_REGISTER) && defined(INTERRUPT_PIM1_PEVE1B_BIT)
        case INTERRUPTS_PIM1_PEVE1B:
            interrupt_bit_clear( INTERRUPT_PIM1_PEVE1B_REGISTER, INTERRUPT_PIM1_PEVE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM1_PSEIE1_REGISTER) && defined(INTERRUPT_PIM1_PSEIE1_BIT)
        case INTERRUPTS_PIM1_PSEIE1:
            interrupt_bit_clear( INTERRUPT_PIM1_PSEIE1_REGISTER, INTERRUPT_PIM1_PSEIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT0_REGISTER) && defined(INTERRUPT_GIMSK_INT0_BIT)
        case INTERRUPTS_GIMSK_INT0:
            interrupt_bit_clear( INTERRUPT_GIMSK_INT0_REGISTER, INTERRUPT_GIMSK_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT1_REGISTER) && defined(INTERRUPT_GIMSK_INT1_BIT)
        case INTERRUPTS_GIMSK_INT1:
            interrupt_bit_clear( INTERRUPT_GIMSK_INT1_REGISTER, INTERRUPT_GIMSK_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE0_REGISTER) && defined(INTERRUPT_TIMSK_TOIE0_BIT)
        case INTERRUPTS_TIMSK_TOIE0:
            interrupt_bit_clear( INTERRUPT_TIMSK_TOIE0_REGISTER, INTERRUPT_TIMSK_TOIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TICIE1_REGISTER) && defined(INTERRUPT_TIMSK_TICIE1_BIT)
        case INTERRUPTS_TIMSK_TICIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK_TICIE1_REGISTER, INTERRUPT_TIMSK_TICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1A_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1A_BIT)
        case INTERRUPTS_TIMSK_OCIE1A:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE1A_REGISTER, INTERRUPT_TIMSK_OCIE1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE1_REGISTER) && defined(INTERRUPT_TIMSK_TOIE1_BIT)
        case INTERRUPTS_TIMSK_TOIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK_TOIE1_REGISTER, INTERRUPT_TIMSK_TOIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV0_REGISTER) && defined(INTERRUPT_TIFR_TOV0_BIT)
        case INTERRUPTS_TIFR_TOV0:
            interrupt_bit_clear( INTERRUPT_TIFR_TOV0_REGISTER, INTERRUPT_TIFR_TOV0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_ICF1_REGISTER) && defined(INTERRUPT_TIFR_ICF1_BIT)
        case INTERRUPTS_TIFR_ICF1:
            interrupt_bit_clear( INTERRUPT_TIFR_ICF1_REGISTER, INTERRUPT_TIFR_ICF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1A_REGISTER) && defined(INTERRUPT_TIFR_OCF1A_BIT)
        case INTERRUPTS_TIFR_OCF1A:
            interrupt_bit_clear( INTERRUPT_TIFR_OCF1A_REGISTER, INTERRUPT_TIFR_OCF1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV1_REGISTER) && defined(INTERRUPT_TIFR_TOV1_BIT)
        case INTERRUPTS_TIFR_TOV1:
            interrupt_bit_clear( INTERRUPT_TIFR_TOV1_REGISTER, INTERRUPT_TIFR_TOV1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF0_REGISTER) && defined(INTERRUPT_GIFR_INTF0_BIT)
        case INTERRUPTS_GIFR_INTF0:
            interrupt_bit_clear( INTERRUPT_GIFR_INTF0_REGISTER, INTERRUPT_GIFR_INTF0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF1_REGISTER) && defined(INTERRUPT_GIFR_INTF1_BIT)
        case INTERRUPTS_GIFR_INTF1:
            interrupt_bit_clear( INTERRUPT_GIFR_INTF1_REGISTER, INTERRUPT_GIFR_INTF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1B_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1B_BIT)
        case INTERRUPTS_TIMSK_OCIE1B:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE1B_REGISTER, INTERRUPT_TIMSK_OCIE1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCIFB_REGISTER) && defined(INTERRUPT_TIFR_OCIFB_BIT)
        case INTERRUPTS_TIFR_OCIFB:
            interrupt_bit_clear( INTERRUPT_TIFR_OCIFB_REGISTER, INTERRUPT_TIFR_OCIFB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1_BIT)
        case INTERRUPTS_TIMSK_OCIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE1_REGISTER, INTERRUPT_TIMSK_OCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1_REGISTER) && defined(INTERRUPT_TIFR_OCF1_BIT)
        case INTERRUPTS_TIFR_OCF1:
            interrupt_bit_clear( INTERRUPT_TIFR_OCF1_REGISTER, INTERRUPT_TIFR_OCF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TOIE2_REGISTER) && defined(INTERRUPT_TIMSK_TOIE2_BIT)
        case INTERRUPTS_TIMSK_TOIE2:
            interrupt_bit_clear( INTERRUPT_TIMSK_TOIE2_REGISTER, INTERRUPT_TIMSK_TOIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE2_REGISTER) && defined(INTERRUPT_TIMSK_OCIE2_BIT)
        case INTERRUPTS_TIMSK_OCIE2:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE2_REGISTER, INTERRUPT_TIMSK_OCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF1B_REGISTER) && defined(INTERRUPT_TIFR_OCF1B_BIT)
        case INTERRUPTS_TIFR_OCF1B:
            interrupt_bit_clear( INTERRUPT_TIFR_OCF1B_REGISTER, INTERRUPT_TIFR_OCF1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_TOV2_REGISTER) && defined(INTERRUPT_TIFR_TOV2_BIT)
        case INTERRUPTS_TIFR_TOV2:
            interrupt_bit_clear( INTERRUPT_TIFR_TOV2_REGISTER, INTERRUPT_TIFR_TOV2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF2_REGISTER) && defined(INTERRUPT_TIFR_OCF2_BIT)
        case INTERRUPTS_TIFR_OCF2:
            interrupt_bit_clear( INTERRUPT_TIFR_OCF2_REGISTER, INTERRUPT_TIFR_OCF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE0_REGISTER) && defined(INTERRUPT_PCICR_PCIE0_BIT)
        case INTERRUPTS_PCICR_PCIE0:
            interrupt_bit_clear( INTERRUPT_PCICR_PCIE0_REGISTER, INTERRUPT_PCICR_PCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_OCIE2B_REGISTER) && defined(INTERRUPT_TIMSK2_OCIE2B_BIT)
        case INTERRUPTS_TIMSK2_OCIE2B:
            interrupt_bit_clear( INTERRUPT_TIMSK2_OCIE2B_REGISTER, INTERRUPT_TIMSK2_OCIE2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCKD_WDEWIE_REGISTER) && defined(INTERRUPT_WDTCKD_WDEWIE_BIT)
        case INTERRUPTS_WDTCKD_WDEWIE:
            interrupt_bit_clear( INTERRUPT_WDTCKD_WDEWIE_REGISTER, INTERRUPT_WDTCKD_WDEWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE_REGISTER) && defined(INTERRUPT_PCICR_PCIE_BIT)
        case INTERRUPTS_PCICR_PCIE:
            interrupt_bit_clear( INTERRUPT_PCICR_PCIE_REGISTER, INTERRUPT_PCICR_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT0_REGISTER) && defined(INTERRUPT_EIMSK_INT0_BIT)
        case INTERRUPTS_EIMSK_INT0:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT0_REGISTER, INTERRUPT_EIMSK_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT1_REGISTER) && defined(INTERRUPT_EIMSK_INT1_BIT)
        case INTERRUPTS_EIMSK_INT1:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT1_REGISTER, INTERRUPT_EIMSK_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT2_REGISTER) && defined(INTERRUPT_EIMSK_INT2_BIT)
        case INTERRUPTS_EIMSK_INT2:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT2_REGISTER, INTERRUPT_EIMSK_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT3_REGISTER) && defined(INTERRUPT_EIMSK_INT3_BIT)
        case INTERRUPTS_EIMSK_INT3:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT3_REGISTER, INTERRUPT_EIMSK_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT4_REGISTER) && defined(INTERRUPT_EIMSK_INT4_BIT)
        case INTERRUPTS_EIMSK_INT4:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT4_REGISTER, INTERRUPT_EIMSK_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT5_REGISTER) && defined(INTERRUPT_EIMSK_INT5_BIT)
        case INTERRUPTS_EIMSK_INT5:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT5_REGISTER, INTERRUPT_EIMSK_INT5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT6_REGISTER) && defined(INTERRUPT_EIMSK_INT6_BIT)
        case INTERRUPTS_EIMSK_INT6:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT6_REGISTER, INTERRUPT_EIMSK_INT6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_INT7_REGISTER) && defined(INTERRUPT_EIMSK_INT7_BIT)
        case INTERRUPTS_EIMSK_INT7:
            interrupt_bit_clear( INTERRUPT_EIMSK_INT7_REGISTER, INTERRUPT_EIMSK_INT7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF4_REGISTER) && defined(INTERRUPT_EIFR_INTF4_BIT)
        case INTERRUPTS_EIFR_INTF4:
            interrupt_bit_clear( INTERRUPT_EIFR_INTF4_REGISTER, INTERRUPT_EIFR_INTF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF5_REGISTER) && defined(INTERRUPT_EIFR_INTF5_BIT)
        case INTERRUPTS_EIFR_INTF5:
            interrupt_bit_clear( INTERRUPT_EIFR_INTF5_REGISTER, INTERRUPT_EIFR_INTF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF6_REGISTER) && defined(INTERRUPT_EIFR_INTF6_BIT)
        case INTERRUPTS_EIFR_INTF6:
            interrupt_bit_clear( INTERRUPT_EIFR_INTF6_REGISTER, INTERRUPT_EIFR_INTF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIFR_INTF7_REGISTER) && defined(INTERRUPT_EIFR_INTF7_BIT)
        case INTERRUPTS_EIFR_INTF7:
            interrupt_bit_clear( INTERRUPT_EIFR_INTF7_REGISTER, INTERRUPT_EIFR_INTF7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0_BIT)
        case INTERRUPTS_TIMSK_OCIE0:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE0_REGISTER, INTERRUPT_TIMSK_OCIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIFR_OCF0_REGISTER) && defined(INTERRUPT_TIFR_OCF0_BIT)
        case INTERRUPTS_TIFR_OCF0:
            interrupt_bit_clear( INTERRUPT_TIFR_OCF0_REGISTER, INTERRUPT_TIFR_OCF0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE1C_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE1C_BIT)
        case INTERRUPTS_ETIMSK_OCIE1C:
            interrupt_bit_clear( INTERRUPT_ETIMSK_OCIE1C_REGISTER, INTERRUPT_ETIMSK_OCIE1C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3C_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3C_BIT)
        case INTERRUPTS_ETIMSK_OCIE3C:
            interrupt_bit_clear( INTERRUPT_ETIMSK_OCIE3C_REGISTER, INTERRUPT_ETIMSK_OCIE3C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_TOIE3_REGISTER) && defined(INTERRUPT_ETIMSK_TOIE3_BIT)
        case INTERRUPTS_ETIMSK_TOIE3:
            interrupt_bit_clear( INTERRUPT_ETIMSK_TOIE3_REGISTER, INTERRUPT_ETIMSK_TOIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3B_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3B_BIT)
        case INTERRUPTS_ETIMSK_OCIE3B:
            interrupt_bit_clear( INTERRUPT_ETIMSK_OCIE3B_REGISTER, INTERRUPT_ETIMSK_OCIE3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_OCIE3A_REGISTER) && defined(INTERRUPT_ETIMSK_OCIE3A_BIT)
        case INTERRUPTS_ETIMSK_OCIE3A:
            interrupt_bit_clear( INTERRUPT_ETIMSK_OCIE3A_REGISTER, INTERRUPT_ETIMSK_OCIE3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETIMSK_TICIE3_REGISTER) && defined(INTERRUPT_ETIMSK_TICIE3_BIT)
        case INTERRUPTS_ETIMSK_TICIE3:
            interrupt_bit_clear( INTERRUPT_ETIMSK_TICIE3_REGISTER, INTERRUPT_ETIMSK_TICIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_TOIE4_REGISTER) && defined(INTERRUPT_TIMSK4_TOIE4_BIT)
        case INTERRUPTS_TIMSK4_TOIE4:
            interrupt_bit_clear( INTERRUPT_TIMSK4_TOIE4_REGISTER, INTERRUPT_TIMSK4_TOIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4A_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4A_BIT)
        case INTERRUPTS_TIMSK4_OCIE4A:
            interrupt_bit_clear( INTERRUPT_TIMSK4_OCIE4A_REGISTER, INTERRUPT_TIMSK4_OCIE4A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4B_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4B_BIT)
        case INTERRUPTS_TIMSK4_OCIE4B:
            interrupt_bit_clear( INTERRUPT_TIMSK4_OCIE4B_REGISTER, INTERRUPT_TIMSK4_OCIE4B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4C_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4C_BIT)
        case INTERRUPTS_TIMSK4_OCIE4C:
            interrupt_bit_clear( INTERRUPT_TIMSK4_OCIE4C_REGISTER, INTERRUPT_TIMSK4_OCIE4C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_ICIE4_REGISTER) && defined(INTERRUPT_TIMSK4_ICIE4_BIT)
        case INTERRUPTS_TIMSK4_ICIE4:
            interrupt_bit_clear( INTERRUPT_TIMSK4_ICIE4_REGISTER, INTERRUPT_TIMSK4_ICIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_TOIE5_REGISTER) && defined(INTERRUPT_TIMSK5_TOIE5_BIT)
        case INTERRUPTS_TIMSK5_TOIE5:
            interrupt_bit_clear( INTERRUPT_TIMSK5_TOIE5_REGISTER, INTERRUPT_TIMSK5_TOIE5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5A_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5A_BIT)
        case INTERRUPTS_TIMSK5_OCIE5A:
            interrupt_bit_clear( INTERRUPT_TIMSK5_OCIE5A_REGISTER, INTERRUPT_TIMSK5_OCIE5A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5B_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5B_BIT)
        case INTERRUPTS_TIMSK5_OCIE5B:
            interrupt_bit_clear( INTERRUPT_TIMSK5_OCIE5B_REGISTER, INTERRUPT_TIMSK5_OCIE5B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_OCIE5C_REGISTER) && defined(INTERRUPT_TIMSK5_OCIE5C_BIT)
        case INTERRUPTS_TIMSK5_OCIE5C:
            interrupt_bit_clear( INTERRUPT_TIMSK5_OCIE5C_REGISTER, INTERRUPT_TIMSK5_OCIE5C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK5_ICIE5_REGISTER) && defined(INTERRUPT_TIMSK5_ICIE5_BIT)
        case INTERRUPTS_TIMSK5_ICIE5:
            interrupt_bit_clear( INTERRUPT_TIMSK5_ICIE5_REGISTER, INTERRUPT_TIMSK5_ICIE5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_UDRIE2_REGISTER) && defined(INTERRUPT_UCSR2B_UDRIE2_BIT)
        case INTERRUPTS_UCSR2B_UDRIE2:
            interrupt_bit_clear( INTERRUPT_UCSR2B_UDRIE2_REGISTER, INTERRUPT_UCSR2B_UDRIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_TXCIE2_REGISTER) && defined(INTERRUPT_UCSR2B_TXCIE2_BIT)
        case INTERRUPTS_UCSR2B_TXCIE2:
            interrupt_bit_clear( INTERRUPT_UCSR2B_TXCIE2_REGISTER, INTERRUPT_UCSR2B_TXCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_RXCIE2_REGISTER) && defined(INTERRUPT_UCSR2B_RXCIE2_BIT)
        case INTERRUPTS_UCSR2B_RXCIE2:
            interrupt_bit_clear( INTERRUPT_UCSR2B_RXCIE2_REGISTER, INTERRUPT_UCSR2B_RXCIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_UDRIE3_REGISTER) && defined(INTERRUPT_UCSR3B_UDRIE3_BIT)
        case INTERRUPTS_UCSR3B_UDRIE3:
            interrupt_bit_clear( INTERRUPT_UCSR3B_UDRIE3_REGISTER, INTERRUPT_UCSR3B_UDRIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_TXCIE3_REGISTER) && defined(INTERRUPT_UCSR3B_TXCIE3_BIT)
        case INTERRUPTS_UCSR3B_TXCIE3:
            interrupt_bit_clear( INTERRUPT_UCSR3B_TXCIE3_REGISTER, INTERRUPT_UCSR3B_TXCIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR3B_RXCIE3_REGISTER) && defined(INTERRUPT_UCSR3B_RXCIE3_BIT)
        case INTERRUPTS_UCSR3B_RXCIE3:
            interrupt_bit_clear( INTERRUPT_UCSR3B_RXCIE3_REGISTER, INTERRUPT_UCSR3B_RXCIE3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_INT2_REGISTER) && defined(INTERRUPT_GIMSK_INT2_BIT)
        case INTERRUPTS_GIMSK_INT2:
            interrupt_bit_clear( INTERRUPT_GIMSK_INT2_REGISTER, INTERRUPT_GIMSK_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIFR_INTF2_REGISTER) && defined(INTERRUPT_GIFR_INTF2_BIT)
        case INTERRUPTS_GIFR_INTF2:
            interrupt_bit_clear( INTERRUPT_GIFR_INTF2_REGISTER, INTERRUPT_GIFR_INTF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPMCR_SPMIE_REGISTER) && defined(INTERRUPT_SPMCR_SPMIE_BIT)
        case INTERRUPTS_SPMCR_SPMIE:
            interrupt_bit_clear( INTERRUPT_SPMCR_SPMIE_REGISTER, INTERRUPT_SPMCR_SPMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_PCIE_REGISTER) && defined(INTERRUPT_GICR_PCIE_BIT)
        case INTERRUPTS_GICR_PCIE:
            interrupt_bit_clear( INTERRUPT_GICR_PCIE_REGISTER, INTERRUPT_GICR_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR0_SPIE0_REGISTER) && defined(INTERRUPT_SPCR0_SPIE0_BIT)
        case INTERRUPTS_SPCR0_SPIE0:
            interrupt_bit_clear( INTERRUPT_SPCR0_SPIE0_REGISTER, INTERRUPT_SPCR0_SPIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EIMSK_PCIE_REGISTER) && defined(INTERRUPT_EIMSK_PCIE_BIT)
        case INTERRUPTS_EIMSK_PCIE:
            interrupt_bit_clear( INTERRUPT_EIMSK_PCIE_REGISTER, INTERRUPT_EIMSK_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USICR_USIOIE_REGISTER) && defined(INTERRUPT_USICR_USIOIE_BIT)
        case INTERRUPTS_USICR_USIOIE:
            interrupt_bit_clear( INTERRUPT_USICR_USIOIE_REGISTER, INTERRUPT_USICR_USIOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USICR_USISIE_REGISTER) && defined(INTERRUPT_USICR_USISIE_BIT)
        case INTERRUPTS_USICR_USISIE:
            interrupt_bit_clear( INTERRUPT_USICR_USISIE_REGISTER, INTERRUPT_USICR_USISIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR0D_RXSIE_BIT)
        case INTERRUPTS_UCSR0D_RXSIE:
            interrupt_bit_clear( INTERRUPT_UCSR0D_RXSIE_REGISTER, INTERRUPT_UCSR0D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCDCRA_LCDIE_REGISTER) && defined(INTERRUPT_LCDCRA_LCDIE_BIT)
        case INTERRUPTS_LCDCRA_LCDIE:
            interrupt_bit_clear( INTERRUPT_LCDCRA_LCDIE_REGISTER, INTERRUPT_LCDCRA_LCDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK0_ICIE0_REGISTER) && defined(INTERRUPT_TIMSK0_ICIE0_BIT)
        case INTERRUPTS_TIMSK0_ICIE0:
            interrupt_bit_clear( INTERRUPT_TIMSK0_ICIE0_REGISTER, INTERRUPT_TIMSK0_ICIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_VADCSR_VADCCIE_REGISTER) && defined(INTERRUPT_VADCSR_VADCCIE_BIT)
        case INTERRUPTS_VADCSR_VADCCIE:
            interrupt_bit_clear( INTERRUPT_VADCSR_VADCCIE_REGISTER, INTERRUPT_VADCSR_VADCCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ROCR_ROCWIE_REGISTER) && defined(INTERRUPT_ROCR_ROCWIE_BIT)
        case INTERRUPTS_ROCR_ROCWIE:
            interrupt_bit_clear( INTERRUPT_ROCR_ROCWIE_REGISTER, INTERRUPT_ROCR_ROCWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CADCSRB_CADICIE_REGISTER) && defined(INTERRUPT_CADCSRB_CADICIE_BIT)
        case INTERRUPTS_CADCSRB_CADICIE:
            interrupt_bit_clear( INTERRUPT_CADCSRB_CADICIE_REGISTER, INTERRUPT_CADCSRB_CADICIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CADCSRB_CADRCIE_REGISTER) && defined(INTERRUPT_CADCSRB_CADRCIE_BIT)
        case INTERRUPTS_CADCSRB_CADRCIE:
            interrupt_bit_clear( INTERRUPT_CADCSRB_CADRCIE_REGISTER, INTERRUPT_CADCSRB_CADRCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_COCIE_REGISTER) && defined(INTERRUPT_BPIMSK_COCIE_BIT)
        case INTERRUPTS_BPIMSK_COCIE:
            interrupt_bit_clear( INTERRUPT_BPIMSK_COCIE_REGISTER, INTERRUPT_BPIMSK_COCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_DOCIE_REGISTER) && defined(INTERRUPT_BPIMSK_DOCIE_BIT)
        case INTERRUPTS_BPIMSK_DOCIE:
            interrupt_bit_clear( INTERRUPT_BPIMSK_DOCIE_REGISTER, INTERRUPT_BPIMSK_DOCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIMSK_SCIE_REGISTER) && defined(INTERRUPT_BPIMSK_SCIE_BIT)
        case INTERRUPTS_BPIMSK_SCIE:
            interrupt_bit_clear( INTERRUPT_BPIMSK_SCIE_REGISTER, INTERRUPT_BPIMSK_SCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWBCSR_TWBCIE_REGISTER) && defined(INTERRUPT_TWBCSR_TWBCIE_BIT)
        case INTERRUPTS_TWBCSR_TWBCIE:
            interrupt_bit_clear( INTERRUPT_TWBCSR_TWBCIE_REGISTER, INTERRUPT_TWBCSR_TWBCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BGCSR_BGSCDIE_REGISTER) && defined(INTERRUPT_BGCSR_BGSCDIE_BIT)
        case INTERRUPTS_BGCSR_BGSCDIE:
            interrupt_bit_clear( INTERRUPT_BGCSR_BGSCDIE_REGISTER, INTERRUPT_BGCSR_BGSCDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CHGDCSR_CHGDIE_REGISTER) && defined(INTERRUPT_CHGDCSR_CHGDIE_BIT)
        case INTERRUPTS_CHGDCSR_CHGDIE:
            interrupt_bit_clear( INTERRUPT_CHGDCSR_CHGDIE_REGISTER, INTERRUPT_CHGDCSR_CHGDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM_PEOPE_REGISTER) && defined(INTERRUPT_PIM_PEOPE_BIT)
        case INTERRUPTS_PIM_PEOPE:
            interrupt_bit_clear( INTERRUPT_PIM_PEOPE_REGISTER, INTERRUPT_PIM_PEOPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PIM_PEVE_REGISTER) && defined(INTERRUPT_PIM_PEVE_BIT)
        case INTERRUPTS_PIM_PEVE:
            interrupt_bit_clear( INTERRUPT_PIM_PEVE_REGISTER, INTERRUPT_PIM_PEVE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_SUSPE_REGISTER) && defined(INTERRUPT_UDIEN_SUSPE_BIT)
        case INTERRUPTS_UDIEN_SUSPE:
            interrupt_bit_clear( INTERRUPT_UDIEN_SUSPE_REGISTER, INTERRUPT_UDIEN_SUSPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_SOFE_REGISTER) && defined(INTERRUPT_UDIEN_SOFE_BIT)
        case INTERRUPTS_UDIEN_SOFE:
            interrupt_bit_clear( INTERRUPT_UDIEN_SOFE_REGISTER, INTERRUPT_UDIEN_SOFE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_EORSTE_REGISTER) && defined(INTERRUPT_UDIEN_EORSTE_BIT)
        case INTERRUPTS_UDIEN_EORSTE:
            interrupt_bit_clear( INTERRUPT_UDIEN_EORSTE_REGISTER, INTERRUPT_UDIEN_EORSTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_WAKEUPE_REGISTER) && defined(INTERRUPT_UDIEN_WAKEUPE_BIT)
        case INTERRUPTS_UDIEN_WAKEUPE:
            interrupt_bit_clear( INTERRUPT_UDIEN_WAKEUPE_REGISTER, INTERRUPT_UDIEN_WAKEUPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_EORSME_REGISTER) && defined(INTERRUPT_UDIEN_EORSME_BIT)
        case INTERRUPTS_UDIEN_EORSME:
            interrupt_bit_clear( INTERRUPT_UDIEN_EORSME_REGISTER, INTERRUPT_UDIEN_EORSME_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UDIEN_UPRSME_REGISTER) && defined(INTERRUPT_UDIEN_UPRSME_BIT)
        case INTERRUPTS_UDIEN_UPRSME:
            interrupt_bit_clear( INTERRUPT_UDIEN_UPRSME_REGISTER, INTERRUPT_UDIEN_UPRSME_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_TXINE_REGISTER) && defined(INTERRUPT_UEIENX_TXINE_BIT)
        case INTERRUPTS_UEIENX_TXINE:
            interrupt_bit_clear( INTERRUPT_UEIENX_TXINE_REGISTER, INTERRUPT_UEIENX_TXINE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_STALLEDE_REGISTER) && defined(INTERRUPT_UEIENX_STALLEDE_BIT)
        case INTERRUPTS_UEIENX_STALLEDE:
            interrupt_bit_clear( INTERRUPT_UEIENX_STALLEDE_REGISTER, INTERRUPT_UEIENX_STALLEDE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_RXOUTE_REGISTER) && defined(INTERRUPT_UEIENX_RXOUTE_BIT)
        case INTERRUPTS_UEIENX_RXOUTE:
            interrupt_bit_clear( INTERRUPT_UEIENX_RXOUTE_REGISTER, INTERRUPT_UEIENX_RXOUTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_RXSTPE_REGISTER) && defined(INTERRUPT_UEIENX_RXSTPE_BIT)
        case INTERRUPTS_UEIENX_RXSTPE:
            interrupt_bit_clear( INTERRUPT_UEIENX_RXSTPE_REGISTER, INTERRUPT_UEIENX_RXSTPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_NAKOUTE_REGISTER) && defined(INTERRUPT_UEIENX_NAKOUTE_BIT)
        case INTERRUPTS_UEIENX_NAKOUTE:
            interrupt_bit_clear( INTERRUPT_UEIENX_NAKOUTE_REGISTER, INTERRUPT_UEIENX_NAKOUTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_NAKINE_REGISTER) && defined(INTERRUPT_UEIENX_NAKINE_BIT)
        case INTERRUPTS_UEIENX_NAKINE:
            interrupt_bit_clear( INTERRUPT_UEIENX_NAKINE_REGISTER, INTERRUPT_UEIENX_NAKINE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UEIENX_FLERRE_REGISTER) && defined(INTERRUPT_UEIENX_FLERRE_BIT)
        case INTERRUPTS_UEIENX_FLERRE:
            interrupt_bit_clear( INTERRUPT_UEIENX_FLERRE_REGISTER, INTERRUPT_UEIENX_FLERRE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK4_OCIE4D_REGISTER) && defined(INTERRUPT_TIMSK4_OCIE4D_BIT)
        case INTERRUPTS_TIMSK4_OCIE4D:
            interrupt_bit_clear( INTERRUPT_TIMSK4_OCIE4D_REGISTER, INTERRUPT_TIMSK4_OCIE4D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TCCR4D_FPIE4_REGISTER) && defined(INTERRUPT_TCCR4D_FPIE4_BIT)
        case INTERRUPTS_TCCR4D_FPIE4:
            interrupt_bit_clear( INTERRUPT_TCCR4D_FPIE4_REGISTER, INTERRUPT_TCCR4D_FPIE4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT2_REGISTER) && defined(INTERRUPT_GICR_INT2_BIT)
        case INTERRUPTS_GICR_INT2:
            interrupt_bit_clear( INTERRUPT_GICR_INT2_REGISTER, INTERRUPT_GICR_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT0_REGISTER) && defined(INTERRUPT_GICR_INT0_BIT)
        case INTERRUPTS_GICR_INT0:
            interrupt_bit_clear( INTERRUPT_GICR_INT0_REGISTER, INTERRUPT_GICR_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GICR_INT1_REGISTER) && defined(INTERRUPT_GICR_INT1_BIT)
        case INTERRUPTS_GICR_INT1:
            interrupt_bit_clear( INTERRUPT_GICR_INT1_REGISTER, INTERRUPT_GICR_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR0_SPIE_REGISTER) && defined(INTERRUPT_SPCR0_SPIE_BIT)
        case INTERRUPTS_SPCR0_SPIE:
            interrupt_bit_clear( INTERRUPT_SPCR0_SPIE_REGISTER, INTERRUPT_SPCR0_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_XFDCSR_XFDIE_REGISTER) && defined(INTERRUPT_XFDCSR_XFDIE_BIT)
        case INTERRUPTS_XFDCSR_XFDIE:
            interrupt_bit_clear( INTERRUPT_XFDCSR_XFDIE_REGISTER, INTERRUPT_XFDCSR_XFDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR1_SPIE_REGISTER) && defined(INTERRUPT_SPCR1_SPIE_BIT)
        case INTERRUPTS_SPCR1_SPIE:
            interrupt_bit_clear( INTERRUPT_SPCR1_SPIE_REGISTER, INTERRUPT_SPCR1_SPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR0_TWIE_REGISTER) && defined(INTERRUPT_TWCR0_TWIE_BIT)
        case INTERRUPTS_TWCR0_TWIE:
            interrupt_bit_clear( INTERRUPT_TWCR0_TWIE_REGISTER, INTERRUPT_TWCR0_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR0B_UDRIE_BIT)
        case INTERRUPTS_UCSR0B_UDRIE:
            interrupt_bit_clear( INTERRUPT_UCSR0B_UDRIE_REGISTER, INTERRUPT_UCSR0B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR0B_TXCIE_BIT)
        case INTERRUPTS_UCSR0B_TXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR0B_TXCIE_REGISTER, INTERRUPT_UCSR0B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR0B_RXCIE_BIT)
        case INTERRUPTS_UCSR0B_RXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR0B_RXCIE_REGISTER, INTERRUPT_UCSR0B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR1B_UDRIE_BIT)
        case INTERRUPTS_UCSR1B_UDRIE:
            interrupt_bit_clear( INTERRUPT_UCSR1B_UDRIE_REGISTER, INTERRUPT_UCSR1B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR1B_TXCIE_BIT)
        case INTERRUPTS_UCSR1B_TXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR1B_TXCIE_REGISTER, INTERRUPT_UCSR1B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR1B_RXCIE_BIT)
        case INTERRUPTS_UCSR1B_RXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR1B_RXCIE_REGISTER, INTERRUPT_UCSR1B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR1D_RXSIE_BIT)
        case INTERRUPTS_UCSR1D_RXSIE:
            interrupt_bit_clear( INTERRUPT_UCSR1D_RXSIE_REGISTER, INTERRUPT_UCSR1D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_UDRIE_REGISTER) && defined(INTERRUPT_UCSR2B_UDRIE_BIT)
        case INTERRUPTS_UCSR2B_UDRIE:
            interrupt_bit_clear( INTERRUPT_UCSR2B_UDRIE_REGISTER, INTERRUPT_UCSR2B_UDRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_TXCIE_REGISTER) && defined(INTERRUPT_UCSR2B_TXCIE_BIT)
        case INTERRUPTS_UCSR2B_TXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR2B_TXCIE_REGISTER, INTERRUPT_UCSR2B_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2B_RXCIE_REGISTER) && defined(INTERRUPT_UCSR2B_RXCIE_BIT)
        case INTERRUPTS_UCSR2B_RXCIE:
            interrupt_bit_clear( INTERRUPT_UCSR2B_RXCIE_REGISTER, INTERRUPT_UCSR2B_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR2D_RXSIE_REGISTER) && defined(INTERRUPT_UCSR2D_RXSIE_BIT)
        case INTERRUPTS_UCSR2D_RXSIE:
            interrupt_bit_clear( INTERRUPT_UCSR2D_RXSIE_REGISTER, INTERRUPT_UCSR2D_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR1_TWIE_REGISTER) && defined(INTERRUPT_TWCR1_TWIE_BIT)
        case INTERRUPTS_TWCR1_TWIE:
            interrupt_bit_clear( INTERRUPT_TWCR1_TWIE_REGISTER, INTERRUPT_TWCR1_TWIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPCR1_SPIE1_REGISTER) && defined(INTERRUPT_SPCR1_SPIE1_BIT)
        case INTERRUPTS_SPCR1_SPIE1:
            interrupt_bit_clear( INTERRUPT_SPCR1_SPIE1_REGISTER, INTERRUPT_SPCR1_SPIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR1D_RXSIE1_REGISTER) && defined(INTERRUPT_UCSR1D_RXSIE1_BIT)
        case INTERRUPTS_UCSR1D_RXSIE1:
            interrupt_bit_clear( INTERRUPT_UCSR1D_RXSIE1_REGISTER, INTERRUPT_UCSR1D_RXSIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWCR1_TWIE1_REGISTER) && defined(INTERRUPT_TWCR1_TWIE1_BIT)
        case INTERRUPTS_TWCR1_TWIE1:
            interrupt_bit_clear( INTERRUPT_TWCR1_TWIE1_REGISTER, INTERRUPT_TWCR1_TWIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WUTCSR_WUTIE_REGISTER) && defined(INTERRUPT_WUTCSR_WUTIE_BIT)
        case INTERRUPTS_WUTCSR_WUTIE:
            interrupt_bit_clear( INTERRUPT_WUTCSR_WUTIE_REGISTER, INTERRUPT_WUTCSR_WUTIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BPIR_DUVIE_REGISTER) && defined(INTERRUPT_BPIR_DUVIE_BIT)
        case INTERRUPTS_BPIR_DUVIE:
            interrupt_bit_clear( INTERRUPT_BPIR_DUVIE_REGISTER, INTERRUPT_BPIR_DUVIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSRD_RXSIE_REGISTER) && defined(INTERRUPT_UCSRD_RXSIE_BIT)
        case INTERRUPTS_UCSRD_RXSIE:
            interrupt_bit_clear( INTERRUPT_UCSRD_RXSIE_REGISTER, INTERRUPT_UCSRD_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PCICR_PCIE1_REGISTER) && defined(INTERRUPT_PCICR_PCIE1_BIT)
        case INTERRUPTS_PCICR_PCIE1:
            interrupt_bit_clear( INTERRUPT_PCICR_PCIE1_REGISTER, INTERRUPT_PCICR_PCIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSRA_ACIE_REGISTER) && defined(INTERRUPT_ACSRA_ACIE_BIT)
        case INTERRUPTS_ACSRA_ACIE:
            interrupt_bit_clear( INTERRUPT_ACSRA_ACIE_REGISTER, INTERRUPT_ACSRA_ACIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_VLMCSR_VLMIE_REGISTER) && defined(INTERRUPT_VLMCSR_VLMIE_BIT)
        case INTERRUPTS_VLMCSR_VLMIE:
            interrupt_bit_clear( INTERRUPT_VLMCSR_VLMIE_REGISTER, INTERRUPT_VLMCSR_VLMIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCR_WDTIE_REGISTER) && defined(INTERRUPT_WDTCR_WDTIE_BIT)
        case INTERRUPTS_WDTCR_WDTIE:
            interrupt_bit_clear( INTERRUPT_WDTCR_WDTIE_REGISTER, INTERRUPT_WDTCR_WDTIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GIMSK_PCIE_REGISTER) && defined(INTERRUPT_GIMSK_PCIE_BIT)
        case INTERRUPTS_GIMSK_PCIE:
            interrupt_bit_clear( INTERRUPT_GIMSK_PCIE_REGISTER, INTERRUPT_GIMSK_PCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_UCSR0D_RXSIE0_REGISTER) && defined(INTERRUPT_UCSR0D_RXSIE0_BIT)
        case INTERRUPTS_UCSR0D_RXSIE0:
            interrupt_bit_clear( INTERRUPT_UCSR0D_RXSIE0_REGISTER, INTERRUPT_UCSR0D_RXSIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_ICIE1_REGISTER) && defined(INTERRUPT_TIMSK_ICIE1_BIT)
        case INTERRUPTS_TIMSK_ICIE1:
            interrupt_bit_clear( INTERRUPT_TIMSK_ICIE1_REGISTER, INTERRUPT_TIMSK_ICIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0A_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0A_BIT)
        case INTERRUPTS_TIMSK_OCIE0A:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE0A_REGISTER, INTERRUPT_TIMSK_OCIE0A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE0B_REGISTER) && defined(INTERRUPT_TIMSK_OCIE0B_BIT)
        case INTERRUPTS_TIMSK_OCIE0B:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE0B_REGISTER, INTERRUPT_TIMSK_OCIE0B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWSIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWSIE_BIT)
        case INTERRUPTS_TWSCRA_TWSIE:
            interrupt_bit_clear( INTERRUPT_TWSCRA_TWSIE_REGISTER, INTERRUPT_TWSCRA_TWSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWASIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWASIE_BIT)
        case INTERRUPTS_TWSCRA_TWASIE:
            interrupt_bit_clear( INTERRUPT_TWSCRA_TWASIE_REGISTER, INTERRUPT_TWSCRA_TWASIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TWSCRA_TWDIE_REGISTER) && defined(INTERRUPT_TWSCRA_TWDIE_BIT)
        case INTERRUPTS_TWSCRA_TWDIE:
            interrupt_bit_clear( INTERRUPT_TWSCRA_TWDIE_REGISTER, INTERRUPT_TWSCRA_TWDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WDTCR_WDIE_REGISTER) && defined(INTERRUPT_WDTCR_WDIE_BIT)
        case INTERRUPTS_WDTCR_WDIE:
            interrupt_bit_clear( INTERRUPT_WDTCR_WDIE_REGISTER, INTERRUPT_WDTCR_WDIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCSR_ADIE_REGISTER) && defined(INTERRUPT_ADCSR_ADIE_BIT)
        case INTERRUPTS_ADCSR_ADIE:
            interrupt_bit_clear( INTERRUPT_ADCSR_ADIE_REGISTER, INTERRUPT_ADCSR_ADIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TCCR1D_FPIE1_REGISTER) && defined(INTERRUPT_TCCR1D_FPIE1_BIT)
        case INTERRUPTS_TCCR1D_FPIE1:
            interrupt_bit_clear( INTERRUPT_TCCR1D_FPIE1_REGISTER, INTERRUPT_TCCR1D_FPIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_TICIE0_REGISTER) && defined(INTERRUPT_TIMSK_TICIE0_BIT)
        case INTERRUPTS_TIMSK_TICIE0:
            interrupt_bit_clear( INTERRUPT_TIMSK_TICIE0_REGISTER, INTERRUPT_TIMSK_TICIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK_OCIE1D_REGISTER) && defined(INTERRUPT_TIMSK_OCIE1D_BIT)
        case INTERRUPTS_TIMSK_OCIE1D:
            interrupt_bit_clear( INTERRUPT_TIMSK_OCIE1D_REGISTER, INTERRUPT_TIMSK_OCIE1D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LUNF_REGISTER) && defined(INTERRUPT_INTCTRL_LUNF_BIT)
        case INTERRUPTS_INTCTRL_LUNF:
            interrupt_bit_clear( INTERRUPT_INTCTRL_LUNF_REGISTER, INTERRUPT_INTCTRL_LUNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_HUNF_REGISTER) && defined(INTERRUPT_INTCTRL_HUNF_BIT)
        case INTERRUPTS_INTCTRL_HUNF:
            interrupt_bit_clear( INTERRUPT_INTCTRL_HUNF_REGISTER, INTERRUPT_INTCTRL_HUNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP0_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP0_BIT)
        case INTERRUPTS_INTCTRL_LCMP0:
            interrupt_bit_clear( INTERRUPT_INTCTRL_LCMP0_REGISTER, INTERRUPT_INTCTRL_LCMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP1_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP1_BIT)
        case INTERRUPTS_INTCTRL_LCMP1:
            interrupt_bit_clear( INTERRUPT_INTCTRL_LCMP1_REGISTER, INTERRUPT_INTCTRL_LCMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_LCMP2_REGISTER) && defined(INTERRUPT_INTCTRL_LCMP2_BIT)
        case INTERRUPTS_INTCTRL_LCMP2:
            interrupt_bit_clear( INTERRUPT_INTCTRL_LCMP2_REGISTER, INTERRUPT_INTCTRL_LCMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_OVF_REGISTER) && defined(INTERRUPT_INTCTRL_OVF_BIT)
        case INTERRUPTS_INTCTRL_OVF:
            interrupt_bit_clear( INTERRUPT_INTCTRL_OVF_REGISTER, INTERRUPT_INTCTRL_OVF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_CMP_REGISTER) && defined(INTERRUPT_INTCTRL_CMP_BIT)
        case INTERRUPTS_INTCTRL_CMP:
            interrupt_bit_clear( INTERRUPT_INTCTRL_CMP_REGISTER, INTERRUPT_INTCTRL_CMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_RESRDY_REGISTER) && defined(INTERRUPT_INTCTRL_RESRDY_BIT)
        case INTERRUPTS_INTCTRL_RESRDY:
            interrupt_bit_clear( INTERRUPT_INTCTRL_RESRDY_REGISTER, INTERRUPT_INTCTRL_RESRDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_WCMP_REGISTER) && defined(INTERRUPT_INTCTRL_WCMP_BIT)
        case INTERRUPTS_INTCTRL_WCMP:
            interrupt_bit_clear( INTERRUPT_INTCTRL_WCMP_REGISTER, INTERRUPT_INTCTRL_WCMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_ABEIE_REGISTER) && defined(INTERRUPT_CTRLA_ABEIE_BIT)
        case INTERRUPTS_CTRLA_ABEIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_ABEIE_REGISTER, INTERRUPT_CTRLA_ABEIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_RXSIE_REGISTER) && defined(INTERRUPT_CTRLA_RXSIE_BIT)
        case INTERRUPTS_CTRLA_RXSIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_RXSIE_REGISTER, INTERRUPT_CTRLA_RXSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_DREIE_REGISTER) && defined(INTERRUPT_CTRLA_DREIE_BIT)
        case INTERRUPTS_CTRLA_DREIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_DREIE_REGISTER, INTERRUPT_CTRLA_DREIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_TXCIE_REGISTER) && defined(INTERRUPT_CTRLA_TXCIE_BIT)
        case INTERRUPTS_CTRLA_TXCIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_TXCIE_REGISTER, INTERRUPT_CTRLA_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_RXCIE_REGISTER) && defined(INTERRUPT_CTRLA_RXCIE_BIT)
        case INTERRUPTS_CTRLA_RXCIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_RXCIE_REGISTER, INTERRUPT_CTRLA_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MCTRLA_WIEN_REGISTER) && defined(INTERRUPT_MCTRLA_WIEN_BIT)
        case INTERRUPTS_MCTRLA_WIEN:
            interrupt_bit_clear( INTERRUPT_MCTRLA_WIEN_REGISTER, INTERRUPT_MCTRLA_WIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MCTRLA_RIEN_REGISTER) && defined(INTERRUPT_MCTRLA_RIEN_BIT)
        case INTERRUPTS_MCTRLA_RIEN:
            interrupt_bit_clear( INTERRUPT_MCTRLA_RIEN_REGISTER, INTERRUPT_MCTRLA_RIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_PIEN_REGISTER) && defined(INTERRUPT_SCTRLA_PIEN_BIT)
        case INTERRUPTS_SCTRLA_PIEN:
            interrupt_bit_clear( INTERRUPT_SCTRLA_PIEN_REGISTER, INTERRUPT_SCTRLA_PIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_APIEN_REGISTER) && defined(INTERRUPT_SCTRLA_APIEN_BIT)
        case INTERRUPTS_SCTRLA_APIEN:
            interrupt_bit_clear( INTERRUPT_SCTRLA_APIEN_REGISTER, INTERRUPT_SCTRLA_APIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCTRLA_DIEN_REGISTER) && defined(INTERRUPT_SCTRLA_DIEN_BIT)
        case INTERRUPTS_SCTRLA_DIEN:
            interrupt_bit_clear( INTERRUPT_SCTRLA_DIEN_REGISTER, INTERRUPT_SCTRLA_DIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_IE_REGISTER) && defined(INTERRUPT_INTCTRL_IE_BIT)
        case INTERRUPTS_INTCTRL_IE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_IE_REGISTER, INTERRUPT_INTCTRL_IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_SSIE_REGISTER) && defined(INTERRUPT_INTCTRL_SSIE_BIT)
        case INTERRUPTS_INTCTRL_SSIE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_SSIE_REGISTER, INTERRUPT_INTCTRL_SSIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_DREIE_REGISTER) && defined(INTERRUPT_INTCTRL_DREIE_BIT)
        case INTERRUPTS_INTCTRL_DREIE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_DREIE_REGISTER, INTERRUPT_INTCTRL_DREIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TXCIE_REGISTER) && defined(INTERRUPT_INTCTRL_TXCIE_BIT)
        case INTERRUPTS_INTCTRL_TXCIE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_TXCIE_REGISTER, INTERRUPT_INTCTRL_TXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_RXCIE_REGISTER) && defined(INTERRUPT_INTCTRL_RXCIE_BIT)
        case INTERRUPTS_INTCTRL_RXCIE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_RXCIE_REGISTER, INTERRUPT_INTCTRL_RXCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TRIGA_REGISTER) && defined(INTERRUPT_INTCTRL_TRIGA_BIT)
        case INTERRUPTS_INTCTRL_TRIGA:
            interrupt_bit_clear( INTERRUPT_INTCTRL_TRIGA_REGISTER, INTERRUPT_INTCTRL_TRIGA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_TRIGB_REGISTER) && defined(INTERRUPT_INTCTRL_TRIGB_BIT)
        case INTERRUPTS_INTCTRL_TRIGB:
            interrupt_bit_clear( INTERRUPT_INTCTRL_TRIGB_REGISTER, INTERRUPT_INTCTRL_TRIGB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_OVF_REGISTER) && defined(INTERRUPT_INTFLAGS_OVF_BIT)
        case INTERRUPTS_INTFLAGS_OVF:
            interrupt_bit_clear( INTERRUPT_INTFLAGS_OVF_REGISTER, INTERRUPT_INTFLAGS_OVF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_TRIGA_REGISTER) && defined(INTERRUPT_INTFLAGS_TRIGA_BIT)
        case INTERRUPTS_INTFLAGS_TRIGA:
            interrupt_bit_clear( INTERRUPT_INTFLAGS_TRIGA_REGISTER, INTERRUPT_INTFLAGS_TRIGA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTFLAGS_TRIGB_REGISTER) && defined(INTERRUPT_INTFLAGS_TRIGB_BIT)
        case INTERRUPTS_INTFLAGS_TRIGB:
            interrupt_bit_clear( INTERRUPT_INTFLAGS_TRIGB_REGISTER, INTERRUPT_INTFLAGS_TRIGB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR0A_ACIE0_REGISTER) && defined(INTERRUPT_ACSR0A_ACIE0_BIT)
        case INTERRUPTS_ACSR0A_ACIE0:
            interrupt_bit_clear( INTERRUPT_ACSR0A_ACIE0_REGISTER, INTERRUPT_ACSR0A_ACIE0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACSR1A_ACIE1_REGISTER) && defined(INTERRUPT_ACSR1A_ACIE1_BIT)
        case INTERRUPTS_ACSR1A_ACIE1:
            interrupt_bit_clear( INTERRUPT_ACSR1A_ACIE1_REGISTER, INTERRUPT_ACSR1A_ACIE1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TIMSK2_ICIE2_REGISTER) && defined(INTERRUPT_TIMSK2_ICIE2_BIT)
        case INTERRUPTS_TIMSK2_ICIE2:
            interrupt_bit_clear( INTERRUPT_TIMSK2_ICIE2_REGISTER, INTERRUPT_TIMSK2_ICIE2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLA_WIEN_REGISTER) && defined(INTERRUPT_MASTERCTRLA_WIEN_BIT)
        case INTERRUPTS_MASTERCTRLA_WIEN:
            interrupt_bit_clear( INTERRUPT_MASTERCTRLA_WIEN_REGISTER, INTERRUPT_MASTERCTRLA_WIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLA_RIEN_REGISTER) && defined(INTERRUPT_MASTERCTRLA_RIEN_BIT)
        case INTERRUPTS_MASTERCTRLA_RIEN:
            interrupt_bit_clear( INTERRUPT_MASTERCTRLA_RIEN_REGISTER, INTERRUPT_MASTERCTRLA_RIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_PIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_PIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_PIEN:
            interrupt_bit_clear( INTERRUPT_SLAVECTRLA_PIEN_REGISTER, INTERRUPT_SLAVECTRLA_PIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_APIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_APIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_APIEN:
            interrupt_bit_clear( INTERRUPT_SLAVECTRLA_APIEN_REGISTER, INTERRUPT_SLAVECTRLA_APIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLA_DIEN_REGISTER) && defined(INTERRUPT_SLAVECTRLA_DIEN_BIT)
        case INTERRUPTS_SLAVECTRLA_DIEN:
            interrupt_bit_clear( INTERRUPT_SLAVECTRLA_DIEN_REGISTER, INTERRUPT_SLAVECTRLA_DIEN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_STALLIE_REGISTER) && defined(INTERRUPT_INTCTRLA_STALLIE_BIT)
        case INTERRUPTS_INTCTRLA_STALLIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLA_STALLIE_REGISTER, INTERRUPT_INTCTRLA_STALLIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_BUSERRIE_REGISTER) && defined(INTERRUPT_INTCTRLA_BUSERRIE_BIT)
        case INTERRUPTS_INTCTRLA_BUSERRIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLA_BUSERRIE_REGISTER, INTERRUPT_INTCTRLA_BUSERRIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_BUSEVIE_REGISTER) && defined(INTERRUPT_INTCTRLA_BUSEVIE_BIT)
        case INTERRUPTS_INTCTRLA_BUSEVIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLA_BUSEVIE_REGISTER, INTERRUPT_INTCTRLA_BUSEVIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLA_SOFIE_REGISTER) && defined(INTERRUPT_INTCTRLA_SOFIE_BIT)
        case INTERRUPTS_INTCTRLA_SOFIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLA_SOFIE_REGISTER, INTERRUPT_INTCTRLA_SOFIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLB_SETUPIE_REGISTER) && defined(INTERRUPT_INTCTRLB_SETUPIE_BIT)
        case INTERRUPTS_INTCTRLB_SETUPIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLB_SETUPIE_REGISTER, INTERRUPT_INTCTRLB_SETUPIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRLB_TRNIE_REGISTER) && defined(INTERRUPT_INTCTRLB_TRNIE_BIT)
        case INTERRUPTS_INTCTRLB_TRNIE:
            interrupt_bit_clear( INTERRUPT_INTCTRLB_TRNIE_REGISTER, INTERRUPT_INTCTRLB_TRNIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_CC0IE_REGISTER) && defined(INTERRUPT_INTCTRL_CC0IE_BIT)
        case INTERRUPTS_INTCTRL_CC0IE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_CC0IE_REGISTER, INTERRUPT_INTCTRL_CC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC20IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC20IE_BIT)
        case INTERRUPTS_INTCTRL_PEC20IE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_PEC20IE_REGISTER, INTERRUPT_INTCTRL_PEC20IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC0IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC0IE_BIT)
        case INTERRUPTS_INTCTRL_PEC0IE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_PEC0IE_REGISTER, INTERRUPT_INTCTRL_PEC0IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTCTRL_PEC21IE_REGISTER) && defined(INTERRUPT_INTCTRL_PEC21IE_BIT)
        case INTERRUPTS_INTCTRL_PEC21IE:
            interrupt_bit_clear( INTERRUPT_INTCTRL_PEC21IE_REGISTER, INTERRUPT_INTCTRL_PEC21IE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MASTERCTRLB_TOIE_REGISTER) && defined(INTERRUPT_MASTERCTRLB_TOIE_BIT)
        case INTERRUPTS_MASTERCTRLB_TOIE:
            interrupt_bit_clear( INTERRUPT_MASTERCTRLB_TOIE_REGISTER, INTERRUPT_MASTERCTRLB_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SLAVECTRLB_TOIE_REGISTER) && defined(INTERRUPT_SLAVECTRLB_TOIE_BIT)
        case INTERRUPTS_SLAVECTRLB_TOIE:
            interrupt_bit_clear( INTERRUPT_SLAVECTRLB_TOIE_REGISTER, INTERRUPT_SLAVECTRLB_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTRLA_DRIE_REGISTER) && defined(INTERRUPT_CTRLA_DRIE_BIT)
        case INTERRUPTS_CTRLA_DRIE:
            interrupt_bit_clear( INTERRUPT_CTRLA_DRIE_REGISTER, INTERRUPT_CTRLA_DRIE_BIT );
            break;
        #endif

        default:
            break;
    }
}

/* -----------------------PRIVATE FUNCTION DEFINITIONS----------------------- */

static inline void interrupts_enable_asm( void )
{
    asm SEI;
}

static inline void interrupts_disable_asm( void )
{
    asm CLI;
}

// ----------------------------------------------------------------------------
/*
    interrupts.c

    Copyright (c) 2024, MikroElektronika - www.mikroe.com

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
// ----------------------------------------------------------------------------
