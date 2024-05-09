/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */


#include "interrupts.h"

// ------------------------------------------------------------- PRIVATE MACROS

/* Set bit _bit in register _reg. */
#define interrupt_bit_set(_reg,_bit) (_reg |= 1U << _bit)

/* Clear bit _bit in register _reg. */
#define interrupt_bit_clear(_reg,_bit) (_reg &= ~(1U << _bit))

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS

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

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

void interrupts_enable( void ) {
    // Set PRISS register for PIC32MZ.
    #ifdef INTERRUPT_PRISS_REGISTER
    INTERRUPT_PRISS_REGISTER = 0x76543210UL;
    #endif
    // Set INTCON[MVEC] if available.
    #ifdef INTERRUPT_INTCON_REGISTER
    interrupt_bit_set( INTERRUPT_INTCON_REGISTER, INTERRUPT_INTCON_MVEC_BIT );
    #endif
    interrupts_enable_asm();
}

void interrupts_disable( void ) {
    interrupts_disable_asm();
}

void interrupt_enable( int interrupt ) {
    switch ( interrupt ) {
        #if defined(INTERRUPT_FCE_REGISTER) && defined(INTERRUPT_FCE_BIT)
        case INTERRUPTS_FCE:
            interrupt_bit_set( INTERRUPT_FCE_REGISTER, INTERRUPT_FCE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_set( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FSCM_REGISTER) && defined(INTERRUPT_FSCM_BIT)
        case INTERRUPTS_FSCM:
            interrupt_bit_set( INTERRUPT_FSCM_REGISTER, INTERRUPT_FSCM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_set( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC5_REGISTER) && defined(INTERRUPT_OC5_BIT)
        case INTERRUPTS_OC5:
            interrupt_bit_set( INTERRUPT_OC5_REGISTER, INTERRUPT_OC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5_REGISTER) && defined(INTERRUPT_IC5_BIT)
        case INTERRUPTS_IC5:
            interrupt_bit_set( INTERRUPT_IC5_REGISTER, INTERRUPT_IC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5E_REGISTER) && defined(INTERRUPT_IC5E_BIT)
        case INTERRUPTS_IC5E:
            interrupt_bit_set( INTERRUPT_IC5E_REGISTER, INTERRUPT_IC5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T5_REGISTER) && defined(INTERRUPT_T5_BIT)
        case INTERRUPTS_T5:
            interrupt_bit_set( INTERRUPT_T5_REGISTER, INTERRUPT_T5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT4_REGISTER) && defined(INTERRUPT_INT4_BIT)
        case INTERRUPTS_INT4:
            interrupt_bit_set( INTERRUPT_INT4_REGISTER, INTERRUPT_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC4_REGISTER) && defined(INTERRUPT_OC4_BIT)
        case INTERRUPTS_OC4:
            interrupt_bit_set( INTERRUPT_OC4_REGISTER, INTERRUPT_OC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4_REGISTER) && defined(INTERRUPT_IC4_BIT)
        case INTERRUPTS_IC4:
            interrupt_bit_set( INTERRUPT_IC4_REGISTER, INTERRUPT_IC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4E_REGISTER) && defined(INTERRUPT_IC4E_BIT)
        case INTERRUPTS_IC4E:
            interrupt_bit_set( INTERRUPT_IC4E_REGISTER, INTERRUPT_IC4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T4_REGISTER) && defined(INTERRUPT_T4_BIT)
        case INTERRUPTS_T4:
            interrupt_bit_set( INTERRUPT_T4_REGISTER, INTERRUPT_T4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_set( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC3_REGISTER) && defined(INTERRUPT_OC3_BIT)
        case INTERRUPTS_OC3:
            interrupt_bit_set( INTERRUPT_OC3_REGISTER, INTERRUPT_OC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3_REGISTER) && defined(INTERRUPT_IC3_BIT)
        case INTERRUPTS_IC3:
            interrupt_bit_set( INTERRUPT_IC3_REGISTER, INTERRUPT_IC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3E_REGISTER) && defined(INTERRUPT_IC3E_BIT)
        case INTERRUPTS_IC3E:
            interrupt_bit_set( INTERRUPT_IC3E_REGISTER, INTERRUPT_IC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3_REGISTER) && defined(INTERRUPT_T3_BIT)
        case INTERRUPTS_T3:
            interrupt_bit_set( INTERRUPT_T3_REGISTER, INTERRUPT_T3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_set( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC2_REGISTER) && defined(INTERRUPT_OC2_BIT)
        case INTERRUPTS_OC2:
            interrupt_bit_set( INTERRUPT_OC2_REGISTER, INTERRUPT_OC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2_REGISTER) && defined(INTERRUPT_IC2_BIT)
        case INTERRUPTS_IC2:
            interrupt_bit_set( INTERRUPT_IC2_REGISTER, INTERRUPT_IC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2E_REGISTER) && defined(INTERRUPT_IC2E_BIT)
        case INTERRUPTS_IC2E:
            interrupt_bit_set( INTERRUPT_IC2E_REGISTER, INTERRUPT_IC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_set( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_set( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC1_REGISTER) && defined(INTERRUPT_OC1_BIT)
        case INTERRUPTS_OC1:
            interrupt_bit_set( INTERRUPT_OC1_REGISTER, INTERRUPT_OC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_set( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1E_REGISTER) && defined(INTERRUPT_IC1E_BIT)
        case INTERRUPTS_IC1E:
            interrupt_bit_set( INTERRUPT_IC1E_REGISTER, INTERRUPT_IC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_set( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_set( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CS1_REGISTER) && defined(INTERRUPT_CS1_BIT)
        case INTERRUPTS_CS1:
            interrupt_bit_set( INTERRUPT_CS1_REGISTER, INTERRUPT_CS1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CS0_REGISTER) && defined(INTERRUPT_CS0_BIT)
        case INTERRUPTS_CS0:
            interrupt_bit_set( INTERRUPT_CS0_REGISTER, INTERRUPT_CS0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CT_REGISTER) && defined(INTERRUPT_CT_BIT)
        case INTERRUPTS_CT:
            interrupt_bit_set( INTERRUPT_CT_REGISTER, INTERRUPT_CT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3_REGISTER) && defined(INTERRUPT_DMA3_BIT)
        case INTERRUPTS_DMA3:
            interrupt_bit_set( INTERRUPT_DMA3_REGISTER, INTERRUPT_DMA3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2_REGISTER) && defined(INTERRUPT_DMA2_BIT)
        case INTERRUPTS_DMA2:
            interrupt_bit_set( INTERRUPT_DMA2_REGISTER, INTERRUPT_DMA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1_REGISTER) && defined(INTERRUPT_DMA1_BIT)
        case INTERRUPTS_DMA1:
            interrupt_bit_set( INTERRUPT_DMA1_REGISTER, INTERRUPT_DMA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA0_REGISTER) && defined(INTERRUPT_DMA0_BIT)
        case INTERRUPTS_DMA0:
            interrupt_bit_set( INTERRUPT_DMA0_REGISTER, INTERRUPT_DMA0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_set( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2M_REGISTER) && defined(INTERRUPT_I2C2M_BIT)
        case INTERRUPTS_I2C2M:
            interrupt_bit_set( INTERRUPT_I2C2M_REGISTER, INTERRUPT_I2C2M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2S_REGISTER) && defined(INTERRUPT_I2C2S_BIT)
        case INTERRUPTS_I2C2S:
            interrupt_bit_set( INTERRUPT_I2C2S_REGISTER, INTERRUPT_I2C2S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2B_REGISTER) && defined(INTERRUPT_I2C2B_BIT)
        case INTERRUPTS_I2C2B:
            interrupt_bit_set( INTERRUPT_I2C2B_REGISTER, INTERRUPT_I2C2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2TX_REGISTER) && defined(INTERRUPT_U2TX_BIT)
        case INTERRUPTS_U2TX:
            interrupt_bit_set( INTERRUPT_U2TX_REGISTER, INTERRUPT_U2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2RX_REGISTER) && defined(INTERRUPT_U2RX_BIT)
        case INTERRUPTS_U2RX:
            interrupt_bit_set( INTERRUPT_U2RX_REGISTER, INTERRUPT_U2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_set( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2TX_REGISTER) && defined(INTERRUPT_SPI2TX_BIT)
        case INTERRUPTS_SPI2TX:
            interrupt_bit_set( INTERRUPT_SPI2TX_REGISTER, INTERRUPT_SPI2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2RX_REGISTER) && defined(INTERRUPT_SPI2RX_BIT)
        case INTERRUPTS_SPI2RX:
            interrupt_bit_set( INTERRUPT_SPI2RX_REGISTER, INTERRUPT_SPI2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2E_REGISTER) && defined(INTERRUPT_SPI2E_BIT)
        case INTERRUPTS_SPI2E:
            interrupt_bit_set( INTERRUPT_SPI2E_REGISTER, INTERRUPT_SPI2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMPE_REGISTER) && defined(INTERRUPT_PMPE_BIT)
        case INTERRUPTS_PMPE:
            interrupt_bit_set( INTERRUPT_PMPE_REGISTER, INTERRUPT_PMPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_set( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNC_REGISTER) && defined(INTERRUPT_CNC_BIT)
        case INTERRUPTS_CNC:
            interrupt_bit_set( INTERRUPT_CNC_REGISTER, INTERRUPT_CNC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNB_REGISTER) && defined(INTERRUPT_CNB_BIT)
        case INTERRUPTS_CNB:
            interrupt_bit_set( INTERRUPT_CNB_REGISTER, INTERRUPT_CNB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNA_REGISTER) && defined(INTERRUPT_CNA_BIT)
        case INTERRUPTS_CNA:
            interrupt_bit_set( INTERRUPT_CNA_REGISTER, INTERRUPT_CNA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1M_REGISTER) && defined(INTERRUPT_I2C1M_BIT)
        case INTERRUPTS_I2C1M:
            interrupt_bit_set( INTERRUPT_I2C1M_REGISTER, INTERRUPT_I2C1M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1S_REGISTER) && defined(INTERRUPT_I2C1S_BIT)
        case INTERRUPTS_I2C1S:
            interrupt_bit_set( INTERRUPT_I2C1S_REGISTER, INTERRUPT_I2C1S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1B_REGISTER) && defined(INTERRUPT_I2C1B_BIT)
        case INTERRUPTS_I2C1B:
            interrupt_bit_set( INTERRUPT_I2C1B_REGISTER, INTERRUPT_I2C1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1TX_REGISTER) && defined(INTERRUPT_U1TX_BIT)
        case INTERRUPTS_U1TX:
            interrupt_bit_set( INTERRUPT_U1TX_REGISTER, INTERRUPT_U1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1RX_REGISTER) && defined(INTERRUPT_U1RX_BIT)
        case INTERRUPTS_U1RX:
            interrupt_bit_set( INTERRUPT_U1RX_REGISTER, INTERRUPT_U1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_set( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1TX_REGISTER) && defined(INTERRUPT_SPI1TX_BIT)
        case INTERRUPTS_SPI1TX:
            interrupt_bit_set( INTERRUPT_SPI1TX_REGISTER, INTERRUPT_SPI1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1RX_REGISTER) && defined(INTERRUPT_SPI1RX_BIT)
        case INTERRUPTS_SPI1RX:
            interrupt_bit_set( INTERRUPT_SPI1RX_REGISTER, INTERRUPT_SPI1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1E_REGISTER) && defined(INTERRUPT_SPI1E_BIT)
        case INTERRUPTS_SPI1E:
            interrupt_bit_set( INTERRUPT_SPI1E_REGISTER, INTERRUPT_SPI1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP3_REGISTER) && defined(INTERRUPT_CMP3_BIT)
        case INTERRUPTS_CMP3:
            interrupt_bit_set( INTERRUPT_CMP3_REGISTER, INTERRUPT_CMP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP2_REGISTER) && defined(INTERRUPT_CMP2_BIT)
        case INTERRUPTS_CMP2:
            interrupt_bit_set( INTERRUPT_CMP2_REGISTER, INTERRUPT_CMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP1_REGISTER) && defined(INTERRUPT_CMP1_BIT)
        case INTERRUPTS_CMP1:
            interrupt_bit_set( INTERRUPT_CMP1_REGISTER, INTERRUPT_CMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1EIECON_REGISTER) && defined(INTERRUPT_U1EIECON_BIT)
        case INTERRUPTS_U1EIECON:
            interrupt_bit_set( INTERRUPT_U1EIECON_REGISTER, INTERRUPT_U1EIECON_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CND_REGISTER) && defined(INTERRUPT_CND_BIT)
        case INTERRUPTS_CND:
            interrupt_bit_set( INTERRUPT_CND_REGISTER, INTERRUPT_CND_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNE_REGISTER) && defined(INTERRUPT_CNE_BIT)
        case INTERRUPTS_CNE:
            interrupt_bit_set( INTERRUPT_CNE_REGISTER, INTERRUPT_CNE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNF_REGISTER) && defined(INTERRUPT_CNF_BIT)
        case INTERRUPTS_CNF:
            interrupt_bit_set( INTERRUPT_CNF_REGISTER, INTERRUPT_CNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNG_REGISTER) && defined(INTERRUPT_CNG_BIT)
        case INTERRUPTS_CNG:
            interrupt_bit_set( INTERRUPT_CNG_REGISTER, INTERRUPT_CNG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_set( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3RX_REGISTER) && defined(INTERRUPT_U3RX_BIT)
        case INTERRUPTS_U3RX:
            interrupt_bit_set( INTERRUPT_U3RX_REGISTER, INTERRUPT_U3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3TX_REGISTER) && defined(INTERRUPT_U3TX_BIT)
        case INTERRUPTS_U3TX:
            interrupt_bit_set( INTERRUPT_U3TX_REGISTER, INTERRUPT_U3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_set( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4RX_REGISTER) && defined(INTERRUPT_U4RX_BIT)
        case INTERRUPTS_U4RX:
            interrupt_bit_set( INTERRUPT_U4RX_REGISTER, INTERRUPT_U4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4TX_REGISTER) && defined(INTERRUPT_U4TX_BIT)
        case INTERRUPTS_U4TX:
            interrupt_bit_set( INTERRUPT_U4TX_REGISTER, INTERRUPT_U4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3E_REGISTER) && defined(INTERRUPT_SPI3E_BIT)
        case INTERRUPTS_SPI3E:
            interrupt_bit_set( INTERRUPT_SPI3E_REGISTER, INTERRUPT_SPI3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3RX_REGISTER) && defined(INTERRUPT_SPI3RX_BIT)
        case INTERRUPTS_SPI3RX:
            interrupt_bit_set( INTERRUPT_SPI3RX_REGISTER, INTERRUPT_SPI3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3TX_REGISTER) && defined(INTERRUPT_SPI3TX_BIT)
        case INTERRUPTS_SPI3TX:
            interrupt_bit_set( INTERRUPT_SPI3TX_REGISTER, INTERRUPT_SPI3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5E_REGISTER) && defined(INTERRUPT_U5E_BIT)
        case INTERRUPTS_U5E:
            interrupt_bit_set( INTERRUPT_U5E_REGISTER, INTERRUPT_U5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5RX_REGISTER) && defined(INTERRUPT_U5RX_BIT)
        case INTERRUPTS_U5RX:
            interrupt_bit_set( INTERRUPT_U5RX_REGISTER, INTERRUPT_U5RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5TX_REGISTER) && defined(INTERRUPT_U5TX_BIT)
        case INTERRUPTS_U5TX:
            interrupt_bit_set( INTERRUPT_U5TX_REGISTER, INTERRUPT_U5TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4E_REGISTER) && defined(INTERRUPT_SPI4E_BIT)
        case INTERRUPTS_SPI4E:
            interrupt_bit_set( INTERRUPT_SPI4E_REGISTER, INTERRUPT_SPI4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4RX_REGISTER) && defined(INTERRUPT_SPI4RX_BIT)
        case INTERRUPTS_SPI4RX:
            interrupt_bit_set( INTERRUPT_SPI4RX_REGISTER, INTERRUPT_SPI4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4TX_REGISTER) && defined(INTERRUPT_SPI4TX_BIT)
        case INTERRUPTS_SPI4TX:
            interrupt_bit_set( INTERRUPT_SPI4TX_REGISTER, INTERRUPT_SPI4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USB_REGISTER) && defined(INTERRUPT_USB_BIT)
        case INTERRUPTS_USB:
            interrupt_bit_set( INTERRUPT_USB_REGISTER, INTERRUPT_USB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CN_REGISTER) && defined(INTERRUPT_CN_BIT)
        case INTERRUPTS_CN:
            interrupt_bit_set( INTERRUPT_CN_REGISTER, INTERRUPT_CN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CAN1_REGISTER) && defined(INTERRUPT_CAN1_BIT)
        case INTERRUPTS_CAN1:
            interrupt_bit_set( INTERRUPT_CAN1_REGISTER, INTERRUPT_CAN1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3M_REGISTER) && defined(INTERRUPT_I2C3M_BIT)
        case INTERRUPTS_I2C3M:
            interrupt_bit_set( INTERRUPT_I2C3M_REGISTER, INTERRUPT_I2C3M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3S_REGISTER) && defined(INTERRUPT_I2C3S_BIT)
        case INTERRUPTS_I2C3S:
            interrupt_bit_set( INTERRUPT_I2C3S_REGISTER, INTERRUPT_I2C3S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3B_REGISTER) && defined(INTERRUPT_I2C3B_BIT)
        case INTERRUPTS_I2C3B:
            interrupt_bit_set( INTERRUPT_I2C3B_REGISTER, INTERRUPT_I2C3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5M_REGISTER) && defined(INTERRUPT_I2C5M_BIT)
        case INTERRUPTS_I2C5M:
            interrupt_bit_set( INTERRUPT_I2C5M_REGISTER, INTERRUPT_I2C5M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5S_REGISTER) && defined(INTERRUPT_I2C5S_BIT)
        case INTERRUPTS_I2C5S:
            interrupt_bit_set( INTERRUPT_I2C5S_REGISTER, INTERRUPT_I2C5S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5B_REGISTER) && defined(INTERRUPT_I2C5B_BIT)
        case INTERRUPTS_I2C5B:
            interrupt_bit_set( INTERRUPT_I2C5B_REGISTER, INTERRUPT_I2C5B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4M_REGISTER) && defined(INTERRUPT_I2C4M_BIT)
        case INTERRUPTS_I2C4M:
            interrupt_bit_set( INTERRUPT_I2C4M_REGISTER, INTERRUPT_I2C4M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4S_REGISTER) && defined(INTERRUPT_I2C4S_BIT)
        case INTERRUPTS_I2C4S:
            interrupt_bit_set( INTERRUPT_I2C4S_REGISTER, INTERRUPT_I2C4S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4B_REGISTER) && defined(INTERRUPT_I2C4B_BIT)
        case INTERRUPTS_I2C4B:
            interrupt_bit_set( INTERRUPT_I2C4B_REGISTER, INTERRUPT_I2C4B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6TX_REGISTER) && defined(INTERRUPT_U6TX_BIT)
        case INTERRUPTS_U6TX:
            interrupt_bit_set( INTERRUPT_U6TX_REGISTER, INTERRUPT_U6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6RX_REGISTER) && defined(INTERRUPT_U6RX_BIT)
        case INTERRUPTS_U6RX:
            interrupt_bit_set( INTERRUPT_U6RX_REGISTER, INTERRUPT_U6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6E_REGISTER) && defined(INTERRUPT_U6E_BIT)
        case INTERRUPTS_U6E:
            interrupt_bit_set( INTERRUPT_U6E_REGISTER, INTERRUPT_U6E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA7_REGISTER) && defined(INTERRUPT_DMA7_BIT)
        case INTERRUPTS_DMA7:
            interrupt_bit_set( INTERRUPT_DMA7_REGISTER, INTERRUPT_DMA7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6_REGISTER) && defined(INTERRUPT_DMA6_BIT)
        case INTERRUPTS_DMA6:
            interrupt_bit_set( INTERRUPT_DMA6_REGISTER, INTERRUPT_DMA6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5_REGISTER) && defined(INTERRUPT_DMA5_BIT)
        case INTERRUPTS_DMA5:
            interrupt_bit_set( INTERRUPT_DMA5_REGISTER, INTERRUPT_DMA5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4_REGISTER) && defined(INTERRUPT_DMA4_BIT)
        case INTERRUPTS_DMA4:
            interrupt_bit_set( INTERRUPT_DMA4_REGISTER, INTERRUPT_DMA4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETH_REGISTER) && defined(INTERRUPT_ETH_BIT)
        case INTERRUPTS_ETH:
            interrupt_bit_set( INTERRUPT_ETH_REGISTER, INTERRUPT_ETH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CAN2_REGISTER) && defined(INTERRUPT_CAN2_BIT)
        case INTERRUPTS_CAN2:
            interrupt_bit_set( INTERRUPT_CAN2_REGISTER, INTERRUPT_CAN2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T6_REGISTER) && defined(INTERRUPT_T6_BIT)
        case INTERRUPTS_T6:
            interrupt_bit_set( INTERRUPT_T6_REGISTER, INTERRUPT_T6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6E_REGISTER) && defined(INTERRUPT_IC6E_BIT)
        case INTERRUPTS_IC6E:
            interrupt_bit_set( INTERRUPT_IC6E_REGISTER, INTERRUPT_IC6E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6_REGISTER) && defined(INTERRUPT_IC6_BIT)
        case INTERRUPTS_IC6:
            interrupt_bit_set( INTERRUPT_IC6_REGISTER, INTERRUPT_IC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC6_REGISTER) && defined(INTERRUPT_OC6_BIT)
        case INTERRUPTS_OC6:
            interrupt_bit_set( INTERRUPT_OC6_REGISTER, INTERRUPT_OC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T7_REGISTER) && defined(INTERRUPT_T7_BIT)
        case INTERRUPTS_T7:
            interrupt_bit_set( INTERRUPT_T7_REGISTER, INTERRUPT_T7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7E_REGISTER) && defined(INTERRUPT_IC7E_BIT)
        case INTERRUPTS_IC7E:
            interrupt_bit_set( INTERRUPT_IC7E_REGISTER, INTERRUPT_IC7E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7_REGISTER) && defined(INTERRUPT_IC7_BIT)
        case INTERRUPTS_IC7:
            interrupt_bit_set( INTERRUPT_IC7_REGISTER, INTERRUPT_IC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC7_REGISTER) && defined(INTERRUPT_OC7_BIT)
        case INTERRUPTS_OC7:
            interrupt_bit_set( INTERRUPT_OC7_REGISTER, INTERRUPT_OC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T8_REGISTER) && defined(INTERRUPT_T8_BIT)
        case INTERRUPTS_T8:
            interrupt_bit_set( INTERRUPT_T8_REGISTER, INTERRUPT_T8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8E_REGISTER) && defined(INTERRUPT_IC8E_BIT)
        case INTERRUPTS_IC8E:
            interrupt_bit_set( INTERRUPT_IC8E_REGISTER, INTERRUPT_IC8E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8_REGISTER) && defined(INTERRUPT_IC8_BIT)
        case INTERRUPTS_IC8:
            interrupt_bit_set( INTERRUPT_IC8_REGISTER, INTERRUPT_IC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC8_REGISTER) && defined(INTERRUPT_OC8_BIT)
        case INTERRUPTS_OC8:
            interrupt_bit_set( INTERRUPT_OC8_REGISTER, INTERRUPT_OC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T9_REGISTER) && defined(INTERRUPT_T9_BIT)
        case INTERRUPTS_T9:
            interrupt_bit_set( INTERRUPT_T9_REGISTER, INTERRUPT_T9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC9E_REGISTER) && defined(INTERRUPT_IC9E_BIT)
        case INTERRUPTS_IC9E:
            interrupt_bit_set( INTERRUPT_IC9E_REGISTER, INTERRUPT_IC9E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC9_REGISTER) && defined(INTERRUPT_IC9_BIT)
        case INTERRUPTS_IC9:
            interrupt_bit_set( INTERRUPT_IC9_REGISTER, INTERRUPT_IC9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC9_REGISTER) && defined(INTERRUPT_OC9_BIT)
        case INTERRUPTS_OC9:
            interrupt_bit_set( INTERRUPT_OC9_REGISTER, INTERRUPT_OC9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC_REGISTER) && defined(INTERRUPT_ADC_BIT)
        case INTERRUPTS_ADC:
            interrupt_bit_set( INTERRUPT_ADC_REGISTER, INTERRUPT_ADC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCFIFO_REGISTER) && defined(INTERRUPT_ADCFIFO_BIT)
        case INTERRUPTS_ADCFIFO:
            interrupt_bit_set( INTERRUPT_ADCFIFO_REGISTER, INTERRUPT_ADCFIFO_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC1_REGISTER) && defined(INTERRUPT_ADCDC1_BIT)
        case INTERRUPTS_ADCDC1:
            interrupt_bit_set( INTERRUPT_ADCDC1_REGISTER, INTERRUPT_ADCDC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC2_REGISTER) && defined(INTERRUPT_ADCDC2_BIT)
        case INTERRUPTS_ADCDC2:
            interrupt_bit_set( INTERRUPT_ADCDC2_REGISTER, INTERRUPT_ADCDC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC3_REGISTER) && defined(INTERRUPT_ADCDC3_BIT)
        case INTERRUPTS_ADCDC3:
            interrupt_bit_set( INTERRUPT_ADCDC3_REGISTER, INTERRUPT_ADCDC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC4_REGISTER) && defined(INTERRUPT_ADCDC4_BIT)
        case INTERRUPTS_ADCDC4:
            interrupt_bit_set( INTERRUPT_ADCDC4_REGISTER, INTERRUPT_ADCDC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC5_REGISTER) && defined(INTERRUPT_ADCDC5_BIT)
        case INTERRUPTS_ADCDC5:
            interrupt_bit_set( INTERRUPT_ADCDC5_REGISTER, INTERRUPT_ADCDC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC6_REGISTER) && defined(INTERRUPT_ADCDC6_BIT)
        case INTERRUPTS_ADCDC6:
            interrupt_bit_set( INTERRUPT_ADCDC6_REGISTER, INTERRUPT_ADCDC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF1_REGISTER) && defined(INTERRUPT_ADCDF1_BIT)
        case INTERRUPTS_ADCDF1:
            interrupt_bit_set( INTERRUPT_ADCDF1_REGISTER, INTERRUPT_ADCDF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF2_REGISTER) && defined(INTERRUPT_ADCDF2_BIT)
        case INTERRUPTS_ADCDF2:
            interrupt_bit_set( INTERRUPT_ADCDF2_REGISTER, INTERRUPT_ADCDF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF3_REGISTER) && defined(INTERRUPT_ADCDF3_BIT)
        case INTERRUPTS_ADCDF3:
            interrupt_bit_set( INTERRUPT_ADCDF3_REGISTER, INTERRUPT_ADCDF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF4_REGISTER) && defined(INTERRUPT_ADCDF4_BIT)
        case INTERRUPTS_ADCDF4:
            interrupt_bit_set( INTERRUPT_ADCDF4_REGISTER, INTERRUPT_ADCDF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF5_REGISTER) && defined(INTERRUPT_ADCDF5_BIT)
        case INTERRUPTS_ADCDF5:
            interrupt_bit_set( INTERRUPT_ADCDF5_REGISTER, INTERRUPT_ADCDF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF6_REGISTER) && defined(INTERRUPT_ADCDF6_BIT)
        case INTERRUPTS_ADCDF6:
            interrupt_bit_set( INTERRUPT_ADCDF6_REGISTER, INTERRUPT_ADCDF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCFLT_REGISTER) && defined(INTERRUPT_ADCFLT_BIT)
        case INTERRUPTS_ADCFLT:
            interrupt_bit_set( INTERRUPT_ADCFLT_REGISTER, INTERRUPT_ADCFLT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD0_REGISTER) && defined(INTERRUPT_ADCD0_BIT)
        case INTERRUPTS_ADCD0:
            interrupt_bit_set( INTERRUPT_ADCD0_REGISTER, INTERRUPT_ADCD0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD1_REGISTER) && defined(INTERRUPT_ADCD1_BIT)
        case INTERRUPTS_ADCD1:
            interrupt_bit_set( INTERRUPT_ADCD1_REGISTER, INTERRUPT_ADCD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD2_REGISTER) && defined(INTERRUPT_ADCD2_BIT)
        case INTERRUPTS_ADCD2:
            interrupt_bit_set( INTERRUPT_ADCD2_REGISTER, INTERRUPT_ADCD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD3_REGISTER) && defined(INTERRUPT_ADCD3_BIT)
        case INTERRUPTS_ADCD3:
            interrupt_bit_set( INTERRUPT_ADCD3_REGISTER, INTERRUPT_ADCD3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD4_REGISTER) && defined(INTERRUPT_ADCD4_BIT)
        case INTERRUPTS_ADCD4:
            interrupt_bit_set( INTERRUPT_ADCD4_REGISTER, INTERRUPT_ADCD4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD5_REGISTER) && defined(INTERRUPT_ADCD5_BIT)
        case INTERRUPTS_ADCD5:
            interrupt_bit_set( INTERRUPT_ADCD5_REGISTER, INTERRUPT_ADCD5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD6_REGISTER) && defined(INTERRUPT_ADCD6_BIT)
        case INTERRUPTS_ADCD6:
            interrupt_bit_set( INTERRUPT_ADCD6_REGISTER, INTERRUPT_ADCD6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD7_REGISTER) && defined(INTERRUPT_ADCD7_BIT)
        case INTERRUPTS_ADCD7:
            interrupt_bit_set( INTERRUPT_ADCD7_REGISTER, INTERRUPT_ADCD7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD8_REGISTER) && defined(INTERRUPT_ADCD8_BIT)
        case INTERRUPTS_ADCD8:
            interrupt_bit_set( INTERRUPT_ADCD8_REGISTER, INTERRUPT_ADCD8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD9_REGISTER) && defined(INTERRUPT_ADCD9_BIT)
        case INTERRUPTS_ADCD9:
            interrupt_bit_set( INTERRUPT_ADCD9_REGISTER, INTERRUPT_ADCD9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD10_REGISTER) && defined(INTERRUPT_ADCD10_BIT)
        case INTERRUPTS_ADCD10:
            interrupt_bit_set( INTERRUPT_ADCD10_REGISTER, INTERRUPT_ADCD10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD11_REGISTER) && defined(INTERRUPT_ADCD11_BIT)
        case INTERRUPTS_ADCD11:
            interrupt_bit_set( INTERRUPT_ADCD11_REGISTER, INTERRUPT_ADCD11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD12_REGISTER) && defined(INTERRUPT_ADCD12_BIT)
        case INTERRUPTS_ADCD12:
            interrupt_bit_set( INTERRUPT_ADCD12_REGISTER, INTERRUPT_ADCD12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD13_REGISTER) && defined(INTERRUPT_ADCD13_BIT)
        case INTERRUPTS_ADCD13:
            interrupt_bit_set( INTERRUPT_ADCD13_REGISTER, INTERRUPT_ADCD13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD14_REGISTER) && defined(INTERRUPT_ADCD14_BIT)
        case INTERRUPTS_ADCD14:
            interrupt_bit_set( INTERRUPT_ADCD14_REGISTER, INTERRUPT_ADCD14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD15_REGISTER) && defined(INTERRUPT_ADCD15_BIT)
        case INTERRUPTS_ADCD15:
            interrupt_bit_set( INTERRUPT_ADCD15_REGISTER, INTERRUPT_ADCD15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD16_REGISTER) && defined(INTERRUPT_ADCD16_BIT)
        case INTERRUPTS_ADCD16:
            interrupt_bit_set( INTERRUPT_ADCD16_REGISTER, INTERRUPT_ADCD16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD17_REGISTER) && defined(INTERRUPT_ADCD17_BIT)
        case INTERRUPTS_ADCD17:
            interrupt_bit_set( INTERRUPT_ADCD17_REGISTER, INTERRUPT_ADCD17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD18_REGISTER) && defined(INTERRUPT_ADCD18_BIT)
        case INTERRUPTS_ADCD18:
            interrupt_bit_set( INTERRUPT_ADCD18_REGISTER, INTERRUPT_ADCD18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD43_REGISTER) && defined(INTERRUPT_ADCD43_BIT)
        case INTERRUPTS_ADCD43:
            interrupt_bit_set( INTERRUPT_ADCD43_REGISTER, INTERRUPT_ADCD43_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD44_REGISTER) && defined(INTERRUPT_ADCD44_BIT)
        case INTERRUPTS_ADCD44:
            interrupt_bit_set( INTERRUPT_ADCD44_REGISTER, INTERRUPT_ADCD44_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CPC_REGISTER) && defined(INTERRUPT_CPC_BIT)
        case INTERRUPTS_CPC:
            interrupt_bit_set( INTERRUPT_CPC_REGISTER, INTERRUPT_CPC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CFDC_REGISTER) && defined(INTERRUPT_CFDC_BIT)
        case INTERRUPTS_CFDC:
            interrupt_bit_set( INTERRUPT_CFDC_REGISTER, INTERRUPT_CFDC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SB_REGISTER) && defined(INTERRUPT_SB_BIT)
        case INTERRUPTS_SB:
            interrupt_bit_set( INTERRUPT_SB_REGISTER, INTERRUPT_SB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USBDMA_REGISTER) && defined(INTERRUPT_USBDMA_BIT)
        case INTERRUPTS_USBDMA:
            interrupt_bit_set( INTERRUPT_USBDMA_REGISTER, INTERRUPT_USBDMA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PRE_REGISTER) && defined(INTERRUPT_PRE_BIT)
        case INTERRUPTS_PRE:
            interrupt_bit_set( INTERRUPT_PRE_REGISTER, INTERRUPT_PRE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SQI1_REGISTER) && defined(INTERRUPT_SQI1_BIT)
        case INTERRUPTS_SQI1:
            interrupt_bit_set( INTERRUPT_SQI1_REGISTER, INTERRUPT_SQI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCEOS_REGISTER) && defined(INTERRUPT_ADCEOS_BIT)
        case INTERRUPTS_ADCEOS:
            interrupt_bit_set( INTERRUPT_ADCEOS_REGISTER, INTERRUPT_ADCEOS_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCARDY_REGISTER) && defined(INTERRUPT_ADCARDY_BIT)
        case INTERRUPTS_ADCARDY:
            interrupt_bit_set( INTERRUPT_ADCARDY_REGISTER, INTERRUPT_ADCARDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCURDY_REGISTER) && defined(INTERRUPT_ADCURDY_BIT)
        case INTERRUPTS_ADCURDY:
            interrupt_bit_set( INTERRUPT_ADCURDY_REGISTER, INTERRUPT_ADCURDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCGRP_REGISTER) && defined(INTERRUPT_ADCGRP_BIT)
        case INTERRUPTS_ADCGRP:
            interrupt_bit_set( INTERRUPT_ADCGRP_REGISTER, INTERRUPT_ADCGRP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC0E_REGISTER) && defined(INTERRUPT_ADC0E_BIT)
        case INTERRUPTS_ADC0E:
            interrupt_bit_set( INTERRUPT_ADC0E_REGISTER, INTERRUPT_ADC0E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC1E_REGISTER) && defined(INTERRUPT_ADC1E_BIT)
        case INTERRUPTS_ADC1E:
            interrupt_bit_set( INTERRUPT_ADC1E_REGISTER, INTERRUPT_ADC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC2E_REGISTER) && defined(INTERRUPT_ADC2E_BIT)
        case INTERRUPTS_ADC2E:
            interrupt_bit_set( INTERRUPT_ADC2E_REGISTER, INTERRUPT_ADC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC3E_REGISTER) && defined(INTERRUPT_ADC3E_BIT)
        case INTERRUPTS_ADC3E:
            interrupt_bit_set( INTERRUPT_ADC3E_REGISTER, INTERRUPT_ADC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC4E_REGISTER) && defined(INTERRUPT_ADC4E_BIT)
        case INTERRUPTS_ADC4E:
            interrupt_bit_set( INTERRUPT_ADC4E_REGISTER, INTERRUPT_ADC4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC7E_REGISTER) && defined(INTERRUPT_ADC7E_BIT)
        case INTERRUPTS_ADC7E:
            interrupt_bit_set( INTERRUPT_ADC7E_REGISTER, INTERRUPT_ADC7E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC0W_REGISTER) && defined(INTERRUPT_ADC0W_BIT)
        case INTERRUPTS_ADC0W:
            interrupt_bit_set( INTERRUPT_ADC0W_REGISTER, INTERRUPT_ADC0W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC1W_REGISTER) && defined(INTERRUPT_ADC1W_BIT)
        case INTERRUPTS_ADC1W:
            interrupt_bit_set( INTERRUPT_ADC1W_REGISTER, INTERRUPT_ADC1W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC2W_REGISTER) && defined(INTERRUPT_ADC2W_BIT)
        case INTERRUPTS_ADC2W:
            interrupt_bit_set( INTERRUPT_ADC2W_REGISTER, INTERRUPT_ADC2W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC3W_REGISTER) && defined(INTERRUPT_ADC3W_BIT)
        case INTERRUPTS_ADC3W:
            interrupt_bit_set( INTERRUPT_ADC3W_REGISTER, INTERRUPT_ADC3W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC4W_REGISTER) && defined(INTERRUPT_ADC4W_BIT)
        case INTERRUPTS_ADC4W:
            interrupt_bit_set( INTERRUPT_ADC4W_REGISTER, INTERRUPT_ADC4W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC7W_REGISTER) && defined(INTERRUPT_ADC7W_BIT)
        case INTERRUPTS_ADC7W:
            interrupt_bit_set( INTERRUPT_ADC7W_REGISTER, INTERRUPT_ADC7W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD19_REGISTER) && defined(INTERRUPT_ADCD19_BIT)
        case INTERRUPTS_ADCD19:
            interrupt_bit_set( INTERRUPT_ADCD19_REGISTER, INTERRUPT_ADCD19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD20_REGISTER) && defined(INTERRUPT_ADCD20_BIT)
        case INTERRUPTS_ADCD20:
            interrupt_bit_set( INTERRUPT_ADCD20_REGISTER, INTERRUPT_ADCD20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD21_REGISTER) && defined(INTERRUPT_ADCD21_BIT)
        case INTERRUPTS_ADCD21:
            interrupt_bit_set( INTERRUPT_ADCD21_REGISTER, INTERRUPT_ADCD21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD22_REGISTER) && defined(INTERRUPT_ADCD22_BIT)
        case INTERRUPTS_ADCD22:
            interrupt_bit_set( INTERRUPT_ADCD22_REGISTER, INTERRUPT_ADCD22_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD23_REGISTER) && defined(INTERRUPT_ADCD23_BIT)
        case INTERRUPTS_ADCD23:
            interrupt_bit_set( INTERRUPT_ADCD23_REGISTER, INTERRUPT_ADCD23_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD24_REGISTER) && defined(INTERRUPT_ADCD24_BIT)
        case INTERRUPTS_ADCD24:
            interrupt_bit_set( INTERRUPT_ADCD24_REGISTER, INTERRUPT_ADCD24_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD25_REGISTER) && defined(INTERRUPT_ADCD25_BIT)
        case INTERRUPTS_ADCD25:
            interrupt_bit_set( INTERRUPT_ADCD25_REGISTER, INTERRUPT_ADCD25_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD26_REGISTER) && defined(INTERRUPT_ADCD26_BIT)
        case INTERRUPTS_ADCD26:
            interrupt_bit_set( INTERRUPT_ADCD26_REGISTER, INTERRUPT_ADCD26_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD27_REGISTER) && defined(INTERRUPT_ADCD27_BIT)
        case INTERRUPTS_ADCD27:
            interrupt_bit_set( INTERRUPT_ADCD27_REGISTER, INTERRUPT_ADCD27_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD28_REGISTER) && defined(INTERRUPT_ADCD28_BIT)
        case INTERRUPTS_ADCD28:
            interrupt_bit_set( INTERRUPT_ADCD28_REGISTER, INTERRUPT_ADCD28_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD29_REGISTER) && defined(INTERRUPT_ADCD29_BIT)
        case INTERRUPTS_ADCD29:
            interrupt_bit_set( INTERRUPT_ADCD29_REGISTER, INTERRUPT_ADCD29_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD30_REGISTER) && defined(INTERRUPT_ADCD30_BIT)
        case INTERRUPTS_ADCD30:
            interrupt_bit_set( INTERRUPT_ADCD30_REGISTER, INTERRUPT_ADCD30_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD31_REGISTER) && defined(INTERRUPT_ADCD31_BIT)
        case INTERRUPTS_ADCD31:
            interrupt_bit_set( INTERRUPT_ADCD31_REGISTER, INTERRUPT_ADCD31_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD32_REGISTER) && defined(INTERRUPT_ADCD32_BIT)
        case INTERRUPTS_ADCD32:
            interrupt_bit_set( INTERRUPT_ADCD32_REGISTER, INTERRUPT_ADCD32_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD33_REGISTER) && defined(INTERRUPT_ADCD33_BIT)
        case INTERRUPTS_ADCD33:
            interrupt_bit_set( INTERRUPT_ADCD33_REGISTER, INTERRUPT_ADCD33_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD34_REGISTER) && defined(INTERRUPT_ADCD34_BIT)
        case INTERRUPTS_ADCD34:
            interrupt_bit_set( INTERRUPT_ADCD34_REGISTER, INTERRUPT_ADCD34_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5E_REGISTER) && defined(INTERRUPT_SPI5E_BIT)
        case INTERRUPTS_SPI5E:
            interrupt_bit_set( INTERRUPT_SPI5E_REGISTER, INTERRUPT_SPI5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5RX_REGISTER) && defined(INTERRUPT_SPI5RX_BIT)
        case INTERRUPTS_SPI5RX:
            interrupt_bit_set( INTERRUPT_SPI5RX_REGISTER, INTERRUPT_SPI5RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5TX_REGISTER) && defined(INTERRUPT_SPI5TX_BIT)
        case INTERRUPTS_SPI5TX:
            interrupt_bit_set( INTERRUPT_SPI5TX_REGISTER, INTERRUPT_SPI5TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6_REGISTER) && defined(INTERRUPT_SPI6_BIT)
        case INTERRUPTS_SPI6:
            interrupt_bit_set( INTERRUPT_SPI6_REGISTER, INTERRUPT_SPI6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6RX_REGISTER) && defined(INTERRUPT_SPI6RX_BIT)
        case INTERRUPTS_SPI6RX:
            interrupt_bit_set( INTERRUPT_SPI6RX_REGISTER, INTERRUPT_SPI6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6TX_REGISTER) && defined(INTERRUPT_SPI6TX_BIT)
        case INTERRUPTS_SPI6TX:
            interrupt_bit_set( INTERRUPT_SPI6TX_REGISTER, INTERRUPT_SPI6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD35_REGISTER) && defined(INTERRUPT_ADCD35_BIT)
        case INTERRUPTS_ADCD35:
            interrupt_bit_set( INTERRUPT_ADCD35_REGISTER, INTERRUPT_ADCD35_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD36_REGISTER) && defined(INTERRUPT_ADCD36_BIT)
        case INTERRUPTS_ADCD36:
            interrupt_bit_set( INTERRUPT_ADCD36_REGISTER, INTERRUPT_ADCD36_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD37_REGISTER) && defined(INTERRUPT_ADCD37_BIT)
        case INTERRUPTS_ADCD37:
            interrupt_bit_set( INTERRUPT_ADCD37_REGISTER, INTERRUPT_ADCD37_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD38_REGISTER) && defined(INTERRUPT_ADCD38_BIT)
        case INTERRUPTS_ADCD38:
            interrupt_bit_set( INTERRUPT_ADCD38_REGISTER, INTERRUPT_ADCD38_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD39_REGISTER) && defined(INTERRUPT_ADCD39_BIT)
        case INTERRUPTS_ADCD39:
            interrupt_bit_set( INTERRUPT_ADCD39_REGISTER, INTERRUPT_ADCD39_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD40_REGISTER) && defined(INTERRUPT_ADCD40_BIT)
        case INTERRUPTS_ADCD40:
            interrupt_bit_set( INTERRUPT_ADCD40_REGISTER, INTERRUPT_ADCD40_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD41_REGISTER) && defined(INTERRUPT_ADCD41_BIT)
        case INTERRUPTS_ADCD41:
            interrupt_bit_set( INTERRUPT_ADCD41_REGISTER, INTERRUPT_ADCD41_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD42_REGISTER) && defined(INTERRUPT_ADCD42_BIT)
        case INTERRUPTS_ADCD42:
            interrupt_bit_set( INTERRUPT_ADCD42_REGISTER, INTERRUPT_ADCD42_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNH_REGISTER) && defined(INTERRUPT_CNH_BIT)
        case INTERRUPTS_CNH:
            interrupt_bit_set( INTERRUPT_CNH_REGISTER, INTERRUPT_CNH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNJ_REGISTER) && defined(INTERRUPT_CNJ_BIT)
        case INTERRUPTS_CNJ:
            interrupt_bit_set( INTERRUPT_CNJ_REGISTER, INTERRUPT_CNJ_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNK_REGISTER) && defined(INTERRUPT_CNK_BIT)
        case INTERRUPTS_CNK:
            interrupt_bit_set( INTERRUPT_CNK_REGISTER, INTERRUPT_CNK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRPT_REGISTER) && defined(INTERRUPT_CRPT_BIT)
        case INTERRUPTS_CRPT:
            interrupt_bit_set( INTERRUPT_CRPT_REGISTER, INTERRUPT_CRPT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC1_REGISTER) && defined(INTERRUPT_AD1DC1_BIT)
        case INTERRUPTS_AD1DC1:
            interrupt_bit_set( INTERRUPT_AD1DC1_REGISTER, INTERRUPT_AD1DC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC2_REGISTER) && defined(INTERRUPT_AD1DC2_BIT)
        case INTERRUPTS_AD1DC2:
            interrupt_bit_set( INTERRUPT_AD1DC2_REGISTER, INTERRUPT_AD1DC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC3_REGISTER) && defined(INTERRUPT_AD1DC3_BIT)
        case INTERRUPTS_AD1DC3:
            interrupt_bit_set( INTERRUPT_AD1DC3_REGISTER, INTERRUPT_AD1DC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC4_REGISTER) && defined(INTERRUPT_AD1DC4_BIT)
        case INTERRUPTS_AD1DC4:
            interrupt_bit_set( INTERRUPT_AD1DC4_REGISTER, INTERRUPT_AD1DC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC5_REGISTER) && defined(INTERRUPT_AD1DC5_BIT)
        case INTERRUPTS_AD1DC5:
            interrupt_bit_set( INTERRUPT_AD1DC5_REGISTER, INTERRUPT_AD1DC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC6_REGISTER) && defined(INTERRUPT_AD1DC6_BIT)
        case INTERRUPTS_AD1DC6:
            interrupt_bit_set( INTERRUPT_AD1DC6_REGISTER, INTERRUPT_AD1DC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF1_REGISTER) && defined(INTERRUPT_AD1DF1_BIT)
        case INTERRUPTS_AD1DF1:
            interrupt_bit_set( INTERRUPT_AD1DF1_REGISTER, INTERRUPT_AD1DF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF2_REGISTER) && defined(INTERRUPT_AD1DF2_BIT)
        case INTERRUPTS_AD1DF2:
            interrupt_bit_set( INTERRUPT_AD1DF2_REGISTER, INTERRUPT_AD1DF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF3_REGISTER) && defined(INTERRUPT_AD1DF3_BIT)
        case INTERRUPTS_AD1DF3:
            interrupt_bit_set( INTERRUPT_AD1DF3_REGISTER, INTERRUPT_AD1DF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF4_REGISTER) && defined(INTERRUPT_AD1DF4_BIT)
        case INTERRUPTS_AD1DF4:
            interrupt_bit_set( INTERRUPT_AD1DF4_REGISTER, INTERRUPT_AD1DF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF5_REGISTER) && defined(INTERRUPT_AD1DF5_BIT)
        case INTERRUPTS_AD1DF5:
            interrupt_bit_set( INTERRUPT_AD1DF5_REGISTER, INTERRUPT_AD1DF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF6_REGISTER) && defined(INTERRUPT_AD1DF6_BIT)
        case INTERRUPTS_AD1DF6:
            interrupt_bit_set( INTERRUPT_AD1DF6_REGISTER, INTERRUPT_AD1DF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D0_REGISTER) && defined(INTERRUPT_AD1D0_BIT)
        case INTERRUPTS_AD1D0:
            interrupt_bit_set( INTERRUPT_AD1D0_REGISTER, INTERRUPT_AD1D0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D1_REGISTER) && defined(INTERRUPT_AD1D1_BIT)
        case INTERRUPTS_AD1D1:
            interrupt_bit_set( INTERRUPT_AD1D1_REGISTER, INTERRUPT_AD1D1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D2_REGISTER) && defined(INTERRUPT_AD1D2_BIT)
        case INTERRUPTS_AD1D2:
            interrupt_bit_set( INTERRUPT_AD1D2_REGISTER, INTERRUPT_AD1D2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D3_REGISTER) && defined(INTERRUPT_AD1D3_BIT)
        case INTERRUPTS_AD1D3:
            interrupt_bit_set( INTERRUPT_AD1D3_REGISTER, INTERRUPT_AD1D3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D4_REGISTER) && defined(INTERRUPT_AD1D4_BIT)
        case INTERRUPTS_AD1D4:
            interrupt_bit_set( INTERRUPT_AD1D4_REGISTER, INTERRUPT_AD1D4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D5_REGISTER) && defined(INTERRUPT_AD1D5_BIT)
        case INTERRUPTS_AD1D5:
            interrupt_bit_set( INTERRUPT_AD1D5_REGISTER, INTERRUPT_AD1D5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D6_REGISTER) && defined(INTERRUPT_AD1D6_BIT)
        case INTERRUPTS_AD1D6:
            interrupt_bit_set( INTERRUPT_AD1D6_REGISTER, INTERRUPT_AD1D6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D7_REGISTER) && defined(INTERRUPT_AD1D7_BIT)
        case INTERRUPTS_AD1D7:
            interrupt_bit_set( INTERRUPT_AD1D7_REGISTER, INTERRUPT_AD1D7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D8_REGISTER) && defined(INTERRUPT_AD1D8_BIT)
        case INTERRUPTS_AD1D8:
            interrupt_bit_set( INTERRUPT_AD1D8_REGISTER, INTERRUPT_AD1D8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D9_REGISTER) && defined(INTERRUPT_AD1D9_BIT)
        case INTERRUPTS_AD1D9:
            interrupt_bit_set( INTERRUPT_AD1D9_REGISTER, INTERRUPT_AD1D9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D10_REGISTER) && defined(INTERRUPT_AD1D10_BIT)
        case INTERRUPTS_AD1D10:
            interrupt_bit_set( INTERRUPT_AD1D10_REGISTER, INTERRUPT_AD1D10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D11_REGISTER) && defined(INTERRUPT_AD1D11_BIT)
        case INTERRUPTS_AD1D11:
            interrupt_bit_set( INTERRUPT_AD1D11_REGISTER, INTERRUPT_AD1D11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D12_REGISTER) && defined(INTERRUPT_AD1D12_BIT)
        case INTERRUPTS_AD1D12:
            interrupt_bit_set( INTERRUPT_AD1D12_REGISTER, INTERRUPT_AD1D12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D13_REGISTER) && defined(INTERRUPT_AD1D13_BIT)
        case INTERRUPTS_AD1D13:
            interrupt_bit_set( INTERRUPT_AD1D13_REGISTER, INTERRUPT_AD1D13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D14_REGISTER) && defined(INTERRUPT_AD1D14_BIT)
        case INTERRUPTS_AD1D14:
            interrupt_bit_set( INTERRUPT_AD1D14_REGISTER, INTERRUPT_AD1D14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D15_REGISTER) && defined(INTERRUPT_AD1D15_BIT)
        case INTERRUPTS_AD1D15:
            interrupt_bit_set( INTERRUPT_AD1D15_REGISTER, INTERRUPT_AD1D15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D16_REGISTER) && defined(INTERRUPT_AD1D16_BIT)
        case INTERRUPTS_AD1D16:
            interrupt_bit_set( INTERRUPT_AD1D16_REGISTER, INTERRUPT_AD1D16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D17_REGISTER) && defined(INTERRUPT_AD1D17_BIT)
        case INTERRUPTS_AD1D17:
            interrupt_bit_set( INTERRUPT_AD1D17_REGISTER, INTERRUPT_AD1D17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D18_REGISTER) && defined(INTERRUPT_AD1D18_BIT)
        case INTERRUPTS_AD1D18:
            interrupt_bit_set( INTERRUPT_AD1D18_REGISTER, INTERRUPT_AD1D18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D43_REGISTER) && defined(INTERRUPT_AD1D43_BIT)
        case INTERRUPTS_AD1D43:
            interrupt_bit_set( INTERRUPT_AD1D43_REGISTER, INTERRUPT_AD1D43_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D44_REGISTER) && defined(INTERRUPT_AD1D44_BIT)
        case INTERRUPTS_AD1D44:
            interrupt_bit_set( INTERRUPT_AD1D44_REGISTER, INTERRUPT_AD1D44_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D19_REGISTER) && defined(INTERRUPT_AD1D19_BIT)
        case INTERRUPTS_AD1D19:
            interrupt_bit_set( INTERRUPT_AD1D19_REGISTER, INTERRUPT_AD1D19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D20_REGISTER) && defined(INTERRUPT_AD1D20_BIT)
        case INTERRUPTS_AD1D20:
            interrupt_bit_set( INTERRUPT_AD1D20_REGISTER, INTERRUPT_AD1D20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D21_REGISTER) && defined(INTERRUPT_AD1D21_BIT)
        case INTERRUPTS_AD1D21:
            interrupt_bit_set( INTERRUPT_AD1D21_REGISTER, INTERRUPT_AD1D21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D22_REGISTER) && defined(INTERRUPT_AD1D22_BIT)
        case INTERRUPTS_AD1D22:
            interrupt_bit_set( INTERRUPT_AD1D22_REGISTER, INTERRUPT_AD1D22_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D23_REGISTER) && defined(INTERRUPT_AD1D23_BIT)
        case INTERRUPTS_AD1D23:
            interrupt_bit_set( INTERRUPT_AD1D23_REGISTER, INTERRUPT_AD1D23_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D24_REGISTER) && defined(INTERRUPT_AD1D24_BIT)
        case INTERRUPTS_AD1D24:
            interrupt_bit_set( INTERRUPT_AD1D24_REGISTER, INTERRUPT_AD1D24_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D25_REGISTER) && defined(INTERRUPT_AD1D25_BIT)
        case INTERRUPTS_AD1D25:
            interrupt_bit_set( INTERRUPT_AD1D25_REGISTER, INTERRUPT_AD1D25_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D26_REGISTER) && defined(INTERRUPT_AD1D26_BIT)
        case INTERRUPTS_AD1D26:
            interrupt_bit_set( INTERRUPT_AD1D26_REGISTER, INTERRUPT_AD1D26_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D27_REGISTER) && defined(INTERRUPT_AD1D27_BIT)
        case INTERRUPTS_AD1D27:
            interrupt_bit_set( INTERRUPT_AD1D27_REGISTER, INTERRUPT_AD1D27_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D28_REGISTER) && defined(INTERRUPT_AD1D28_BIT)
        case INTERRUPTS_AD1D28:
            interrupt_bit_set( INTERRUPT_AD1D28_REGISTER, INTERRUPT_AD1D28_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D29_REGISTER) && defined(INTERRUPT_AD1D29_BIT)
        case INTERRUPTS_AD1D29:
            interrupt_bit_set( INTERRUPT_AD1D29_REGISTER, INTERRUPT_AD1D29_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D30_REGISTER) && defined(INTERRUPT_AD1D30_BIT)
        case INTERRUPTS_AD1D30:
            interrupt_bit_set( INTERRUPT_AD1D30_REGISTER, INTERRUPT_AD1D30_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D31_REGISTER) && defined(INTERRUPT_AD1D31_BIT)
        case INTERRUPTS_AD1D31:
            interrupt_bit_set( INTERRUPT_AD1D31_REGISTER, INTERRUPT_AD1D31_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D32_REGISTER) && defined(INTERRUPT_AD1D32_BIT)
        case INTERRUPTS_AD1D32:
            interrupt_bit_set( INTERRUPT_AD1D32_REGISTER, INTERRUPT_AD1D32_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D33_REGISTER) && defined(INTERRUPT_AD1D33_BIT)
        case INTERRUPTS_AD1D33:
            interrupt_bit_set( INTERRUPT_AD1D33_REGISTER, INTERRUPT_AD1D33_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D34_REGISTER) && defined(INTERRUPT_AD1D34_BIT)
        case INTERRUPTS_AD1D34:
            interrupt_bit_set( INTERRUPT_AD1D34_REGISTER, INTERRUPT_AD1D34_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D35_REGISTER) && defined(INTERRUPT_AD1D35_BIT)
        case INTERRUPTS_AD1D35:
            interrupt_bit_set( INTERRUPT_AD1D35_REGISTER, INTERRUPT_AD1D35_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D36_REGISTER) && defined(INTERRUPT_AD1D36_BIT)
        case INTERRUPTS_AD1D36:
            interrupt_bit_set( INTERRUPT_AD1D36_REGISTER, INTERRUPT_AD1D36_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D37_REGISTER) && defined(INTERRUPT_AD1D37_BIT)
        case INTERRUPTS_AD1D37:
            interrupt_bit_set( INTERRUPT_AD1D37_REGISTER, INTERRUPT_AD1D37_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D38_REGISTER) && defined(INTERRUPT_AD1D38_BIT)
        case INTERRUPTS_AD1D38:
            interrupt_bit_set( INTERRUPT_AD1D38_REGISTER, INTERRUPT_AD1D38_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D39_REGISTER) && defined(INTERRUPT_AD1D39_BIT)
        case INTERRUPTS_AD1D39:
            interrupt_bit_set( INTERRUPT_AD1D39_REGISTER, INTERRUPT_AD1D39_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D40_REGISTER) && defined(INTERRUPT_AD1D40_BIT)
        case INTERRUPTS_AD1D40:
            interrupt_bit_set( INTERRUPT_AD1D40_REGISTER, INTERRUPT_AD1D40_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D41_REGISTER) && defined(INTERRUPT_AD1D41_BIT)
        case INTERRUPTS_AD1D41:
            interrupt_bit_set( INTERRUPT_AD1D41_REGISTER, INTERRUPT_AD1D41_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D42_REGISTER) && defined(INTERRUPT_AD1D42_BIT)
        case INTERRUPTS_AD1D42:
            interrupt_bit_set( INTERRUPT_AD1D42_REGISTER, INTERRUPT_AD1D42_BIT );
            break;
        #endif

        default:
            break;
    }
}

void interrupt_disable( int interrupt ) {
    switch ( interrupt ) {
        #if defined(INTERRUPT_FCE_REGISTER) && defined(INTERRUPT_FCE_BIT)
        case INTERRUPTS_FCE:
            interrupt_bit_clear( INTERRUPT_FCE_REGISTER, INTERRUPT_FCE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_clear( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FSCM_REGISTER) && defined(INTERRUPT_FSCM_BIT)
        case INTERRUPTS_FSCM:
            interrupt_bit_clear( INTERRUPT_FSCM_REGISTER, INTERRUPT_FSCM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_clear( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC5_REGISTER) && defined(INTERRUPT_OC5_BIT)
        case INTERRUPTS_OC5:
            interrupt_bit_clear( INTERRUPT_OC5_REGISTER, INTERRUPT_OC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5_REGISTER) && defined(INTERRUPT_IC5_BIT)
        case INTERRUPTS_IC5:
            interrupt_bit_clear( INTERRUPT_IC5_REGISTER, INTERRUPT_IC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5E_REGISTER) && defined(INTERRUPT_IC5E_BIT)
        case INTERRUPTS_IC5E:
            interrupt_bit_clear( INTERRUPT_IC5E_REGISTER, INTERRUPT_IC5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T5_REGISTER) && defined(INTERRUPT_T5_BIT)
        case INTERRUPTS_T5:
            interrupt_bit_clear( INTERRUPT_T5_REGISTER, INTERRUPT_T5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT4_REGISTER) && defined(INTERRUPT_INT4_BIT)
        case INTERRUPTS_INT4:
            interrupt_bit_clear( INTERRUPT_INT4_REGISTER, INTERRUPT_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC4_REGISTER) && defined(INTERRUPT_OC4_BIT)
        case INTERRUPTS_OC4:
            interrupt_bit_clear( INTERRUPT_OC4_REGISTER, INTERRUPT_OC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4_REGISTER) && defined(INTERRUPT_IC4_BIT)
        case INTERRUPTS_IC4:
            interrupt_bit_clear( INTERRUPT_IC4_REGISTER, INTERRUPT_IC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4E_REGISTER) && defined(INTERRUPT_IC4E_BIT)
        case INTERRUPTS_IC4E:
            interrupt_bit_clear( INTERRUPT_IC4E_REGISTER, INTERRUPT_IC4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T4_REGISTER) && defined(INTERRUPT_T4_BIT)
        case INTERRUPTS_T4:
            interrupt_bit_clear( INTERRUPT_T4_REGISTER, INTERRUPT_T4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_clear( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC3_REGISTER) && defined(INTERRUPT_OC3_BIT)
        case INTERRUPTS_OC3:
            interrupt_bit_clear( INTERRUPT_OC3_REGISTER, INTERRUPT_OC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3_REGISTER) && defined(INTERRUPT_IC3_BIT)
        case INTERRUPTS_IC3:
            interrupt_bit_clear( INTERRUPT_IC3_REGISTER, INTERRUPT_IC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3E_REGISTER) && defined(INTERRUPT_IC3E_BIT)
        case INTERRUPTS_IC3E:
            interrupt_bit_clear( INTERRUPT_IC3E_REGISTER, INTERRUPT_IC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3_REGISTER) && defined(INTERRUPT_T3_BIT)
        case INTERRUPTS_T3:
            interrupt_bit_clear( INTERRUPT_T3_REGISTER, INTERRUPT_T3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_clear( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC2_REGISTER) && defined(INTERRUPT_OC2_BIT)
        case INTERRUPTS_OC2:
            interrupt_bit_clear( INTERRUPT_OC2_REGISTER, INTERRUPT_OC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2_REGISTER) && defined(INTERRUPT_IC2_BIT)
        case INTERRUPTS_IC2:
            interrupt_bit_clear( INTERRUPT_IC2_REGISTER, INTERRUPT_IC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2E_REGISTER) && defined(INTERRUPT_IC2E_BIT)
        case INTERRUPTS_IC2E:
            interrupt_bit_clear( INTERRUPT_IC2E_REGISTER, INTERRUPT_IC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_clear( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_clear( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC1_REGISTER) && defined(INTERRUPT_OC1_BIT)
        case INTERRUPTS_OC1:
            interrupt_bit_clear( INTERRUPT_OC1_REGISTER, INTERRUPT_OC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_clear( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1E_REGISTER) && defined(INTERRUPT_IC1E_BIT)
        case INTERRUPTS_IC1E:
            interrupt_bit_clear( INTERRUPT_IC1E_REGISTER, INTERRUPT_IC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_clear( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_clear( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CS1_REGISTER) && defined(INTERRUPT_CS1_BIT)
        case INTERRUPTS_CS1:
            interrupt_bit_clear( INTERRUPT_CS1_REGISTER, INTERRUPT_CS1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CS0_REGISTER) && defined(INTERRUPT_CS0_BIT)
        case INTERRUPTS_CS0:
            interrupt_bit_clear( INTERRUPT_CS0_REGISTER, INTERRUPT_CS0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CT_REGISTER) && defined(INTERRUPT_CT_BIT)
        case INTERRUPTS_CT:
            interrupt_bit_clear( INTERRUPT_CT_REGISTER, INTERRUPT_CT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3_REGISTER) && defined(INTERRUPT_DMA3_BIT)
        case INTERRUPTS_DMA3:
            interrupt_bit_clear( INTERRUPT_DMA3_REGISTER, INTERRUPT_DMA3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2_REGISTER) && defined(INTERRUPT_DMA2_BIT)
        case INTERRUPTS_DMA2:
            interrupt_bit_clear( INTERRUPT_DMA2_REGISTER, INTERRUPT_DMA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1_REGISTER) && defined(INTERRUPT_DMA1_BIT)
        case INTERRUPTS_DMA1:
            interrupt_bit_clear( INTERRUPT_DMA1_REGISTER, INTERRUPT_DMA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA0_REGISTER) && defined(INTERRUPT_DMA0_BIT)
        case INTERRUPTS_DMA0:
            interrupt_bit_clear( INTERRUPT_DMA0_REGISTER, INTERRUPT_DMA0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_clear( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2M_REGISTER) && defined(INTERRUPT_I2C2M_BIT)
        case INTERRUPTS_I2C2M:
            interrupt_bit_clear( INTERRUPT_I2C2M_REGISTER, INTERRUPT_I2C2M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2S_REGISTER) && defined(INTERRUPT_I2C2S_BIT)
        case INTERRUPTS_I2C2S:
            interrupt_bit_clear( INTERRUPT_I2C2S_REGISTER, INTERRUPT_I2C2S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2B_REGISTER) && defined(INTERRUPT_I2C2B_BIT)
        case INTERRUPTS_I2C2B:
            interrupt_bit_clear( INTERRUPT_I2C2B_REGISTER, INTERRUPT_I2C2B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2TX_REGISTER) && defined(INTERRUPT_U2TX_BIT)
        case INTERRUPTS_U2TX:
            interrupt_bit_clear( INTERRUPT_U2TX_REGISTER, INTERRUPT_U2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2RX_REGISTER) && defined(INTERRUPT_U2RX_BIT)
        case INTERRUPTS_U2RX:
            interrupt_bit_clear( INTERRUPT_U2RX_REGISTER, INTERRUPT_U2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_clear( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2TX_REGISTER) && defined(INTERRUPT_SPI2TX_BIT)
        case INTERRUPTS_SPI2TX:
            interrupt_bit_clear( INTERRUPT_SPI2TX_REGISTER, INTERRUPT_SPI2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2RX_REGISTER) && defined(INTERRUPT_SPI2RX_BIT)
        case INTERRUPTS_SPI2RX:
            interrupt_bit_clear( INTERRUPT_SPI2RX_REGISTER, INTERRUPT_SPI2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2E_REGISTER) && defined(INTERRUPT_SPI2E_BIT)
        case INTERRUPTS_SPI2E:
            interrupt_bit_clear( INTERRUPT_SPI2E_REGISTER, INTERRUPT_SPI2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMPE_REGISTER) && defined(INTERRUPT_PMPE_BIT)
        case INTERRUPTS_PMPE:
            interrupt_bit_clear( INTERRUPT_PMPE_REGISTER, INTERRUPT_PMPE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_clear( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNC_REGISTER) && defined(INTERRUPT_CNC_BIT)
        case INTERRUPTS_CNC:
            interrupt_bit_clear( INTERRUPT_CNC_REGISTER, INTERRUPT_CNC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNB_REGISTER) && defined(INTERRUPT_CNB_BIT)
        case INTERRUPTS_CNB:
            interrupt_bit_clear( INTERRUPT_CNB_REGISTER, INTERRUPT_CNB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNA_REGISTER) && defined(INTERRUPT_CNA_BIT)
        case INTERRUPTS_CNA:
            interrupt_bit_clear( INTERRUPT_CNA_REGISTER, INTERRUPT_CNA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1M_REGISTER) && defined(INTERRUPT_I2C1M_BIT)
        case INTERRUPTS_I2C1M:
            interrupt_bit_clear( INTERRUPT_I2C1M_REGISTER, INTERRUPT_I2C1M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1S_REGISTER) && defined(INTERRUPT_I2C1S_BIT)
        case INTERRUPTS_I2C1S:
            interrupt_bit_clear( INTERRUPT_I2C1S_REGISTER, INTERRUPT_I2C1S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1B_REGISTER) && defined(INTERRUPT_I2C1B_BIT)
        case INTERRUPTS_I2C1B:
            interrupt_bit_clear( INTERRUPT_I2C1B_REGISTER, INTERRUPT_I2C1B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1TX_REGISTER) && defined(INTERRUPT_U1TX_BIT)
        case INTERRUPTS_U1TX:
            interrupt_bit_clear( INTERRUPT_U1TX_REGISTER, INTERRUPT_U1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1RX_REGISTER) && defined(INTERRUPT_U1RX_BIT)
        case INTERRUPTS_U1RX:
            interrupt_bit_clear( INTERRUPT_U1RX_REGISTER, INTERRUPT_U1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_clear( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1TX_REGISTER) && defined(INTERRUPT_SPI1TX_BIT)
        case INTERRUPTS_SPI1TX:
            interrupt_bit_clear( INTERRUPT_SPI1TX_REGISTER, INTERRUPT_SPI1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1RX_REGISTER) && defined(INTERRUPT_SPI1RX_BIT)
        case INTERRUPTS_SPI1RX:
            interrupt_bit_clear( INTERRUPT_SPI1RX_REGISTER, INTERRUPT_SPI1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1E_REGISTER) && defined(INTERRUPT_SPI1E_BIT)
        case INTERRUPTS_SPI1E:
            interrupt_bit_clear( INTERRUPT_SPI1E_REGISTER, INTERRUPT_SPI1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP3_REGISTER) && defined(INTERRUPT_CMP3_BIT)
        case INTERRUPTS_CMP3:
            interrupt_bit_clear( INTERRUPT_CMP3_REGISTER, INTERRUPT_CMP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP2_REGISTER) && defined(INTERRUPT_CMP2_BIT)
        case INTERRUPTS_CMP2:
            interrupt_bit_clear( INTERRUPT_CMP2_REGISTER, INTERRUPT_CMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP1_REGISTER) && defined(INTERRUPT_CMP1_BIT)
        case INTERRUPTS_CMP1:
            interrupt_bit_clear( INTERRUPT_CMP1_REGISTER, INTERRUPT_CMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1EIECON_REGISTER) && defined(INTERRUPT_U1EIECON_BIT)
        case INTERRUPTS_U1EIECON:
            interrupt_bit_clear( INTERRUPT_U1EIECON_REGISTER, INTERRUPT_U1EIECON_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CND_REGISTER) && defined(INTERRUPT_CND_BIT)
        case INTERRUPTS_CND:
            interrupt_bit_clear( INTERRUPT_CND_REGISTER, INTERRUPT_CND_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNE_REGISTER) && defined(INTERRUPT_CNE_BIT)
        case INTERRUPTS_CNE:
            interrupt_bit_clear( INTERRUPT_CNE_REGISTER, INTERRUPT_CNE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNF_REGISTER) && defined(INTERRUPT_CNF_BIT)
        case INTERRUPTS_CNF:
            interrupt_bit_clear( INTERRUPT_CNF_REGISTER, INTERRUPT_CNF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNG_REGISTER) && defined(INTERRUPT_CNG_BIT)
        case INTERRUPTS_CNG:
            interrupt_bit_clear( INTERRUPT_CNG_REGISTER, INTERRUPT_CNG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_clear( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3RX_REGISTER) && defined(INTERRUPT_U3RX_BIT)
        case INTERRUPTS_U3RX:
            interrupt_bit_clear( INTERRUPT_U3RX_REGISTER, INTERRUPT_U3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3TX_REGISTER) && defined(INTERRUPT_U3TX_BIT)
        case INTERRUPTS_U3TX:
            interrupt_bit_clear( INTERRUPT_U3TX_REGISTER, INTERRUPT_U3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_clear( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4RX_REGISTER) && defined(INTERRUPT_U4RX_BIT)
        case INTERRUPTS_U4RX:
            interrupt_bit_clear( INTERRUPT_U4RX_REGISTER, INTERRUPT_U4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4TX_REGISTER) && defined(INTERRUPT_U4TX_BIT)
        case INTERRUPTS_U4TX:
            interrupt_bit_clear( INTERRUPT_U4TX_REGISTER, INTERRUPT_U4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3E_REGISTER) && defined(INTERRUPT_SPI3E_BIT)
        case INTERRUPTS_SPI3E:
            interrupt_bit_clear( INTERRUPT_SPI3E_REGISTER, INTERRUPT_SPI3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3RX_REGISTER) && defined(INTERRUPT_SPI3RX_BIT)
        case INTERRUPTS_SPI3RX:
            interrupt_bit_clear( INTERRUPT_SPI3RX_REGISTER, INTERRUPT_SPI3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3TX_REGISTER) && defined(INTERRUPT_SPI3TX_BIT)
        case INTERRUPTS_SPI3TX:
            interrupt_bit_clear( INTERRUPT_SPI3TX_REGISTER, INTERRUPT_SPI3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5E_REGISTER) && defined(INTERRUPT_U5E_BIT)
        case INTERRUPTS_U5E:
            interrupt_bit_clear( INTERRUPT_U5E_REGISTER, INTERRUPT_U5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5RX_REGISTER) && defined(INTERRUPT_U5RX_BIT)
        case INTERRUPTS_U5RX:
            interrupt_bit_clear( INTERRUPT_U5RX_REGISTER, INTERRUPT_U5RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5TX_REGISTER) && defined(INTERRUPT_U5TX_BIT)
        case INTERRUPTS_U5TX:
            interrupt_bit_clear( INTERRUPT_U5TX_REGISTER, INTERRUPT_U5TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4E_REGISTER) && defined(INTERRUPT_SPI4E_BIT)
        case INTERRUPTS_SPI4E:
            interrupt_bit_clear( INTERRUPT_SPI4E_REGISTER, INTERRUPT_SPI4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4RX_REGISTER) && defined(INTERRUPT_SPI4RX_BIT)
        case INTERRUPTS_SPI4RX:
            interrupt_bit_clear( INTERRUPT_SPI4RX_REGISTER, INTERRUPT_SPI4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4TX_REGISTER) && defined(INTERRUPT_SPI4TX_BIT)
        case INTERRUPTS_SPI4TX:
            interrupt_bit_clear( INTERRUPT_SPI4TX_REGISTER, INTERRUPT_SPI4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USB_REGISTER) && defined(INTERRUPT_USB_BIT)
        case INTERRUPTS_USB:
            interrupt_bit_clear( INTERRUPT_USB_REGISTER, INTERRUPT_USB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CN_REGISTER) && defined(INTERRUPT_CN_BIT)
        case INTERRUPTS_CN:
            interrupt_bit_clear( INTERRUPT_CN_REGISTER, INTERRUPT_CN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CAN1_REGISTER) && defined(INTERRUPT_CAN1_BIT)
        case INTERRUPTS_CAN1:
            interrupt_bit_clear( INTERRUPT_CAN1_REGISTER, INTERRUPT_CAN1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3M_REGISTER) && defined(INTERRUPT_I2C3M_BIT)
        case INTERRUPTS_I2C3M:
            interrupt_bit_clear( INTERRUPT_I2C3M_REGISTER, INTERRUPT_I2C3M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3S_REGISTER) && defined(INTERRUPT_I2C3S_BIT)
        case INTERRUPTS_I2C3S:
            interrupt_bit_clear( INTERRUPT_I2C3S_REGISTER, INTERRUPT_I2C3S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3B_REGISTER) && defined(INTERRUPT_I2C3B_BIT)
        case INTERRUPTS_I2C3B:
            interrupt_bit_clear( INTERRUPT_I2C3B_REGISTER, INTERRUPT_I2C3B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5M_REGISTER) && defined(INTERRUPT_I2C5M_BIT)
        case INTERRUPTS_I2C5M:
            interrupt_bit_clear( INTERRUPT_I2C5M_REGISTER, INTERRUPT_I2C5M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5S_REGISTER) && defined(INTERRUPT_I2C5S_BIT)
        case INTERRUPTS_I2C5S:
            interrupt_bit_clear( INTERRUPT_I2C5S_REGISTER, INTERRUPT_I2C5S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C5B_REGISTER) && defined(INTERRUPT_I2C5B_BIT)
        case INTERRUPTS_I2C5B:
            interrupt_bit_clear( INTERRUPT_I2C5B_REGISTER, INTERRUPT_I2C5B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4M_REGISTER) && defined(INTERRUPT_I2C4M_BIT)
        case INTERRUPTS_I2C4M:
            interrupt_bit_clear( INTERRUPT_I2C4M_REGISTER, INTERRUPT_I2C4M_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4S_REGISTER) && defined(INTERRUPT_I2C4S_BIT)
        case INTERRUPTS_I2C4S:
            interrupt_bit_clear( INTERRUPT_I2C4S_REGISTER, INTERRUPT_I2C4S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C4B_REGISTER) && defined(INTERRUPT_I2C4B_BIT)
        case INTERRUPTS_I2C4B:
            interrupt_bit_clear( INTERRUPT_I2C4B_REGISTER, INTERRUPT_I2C4B_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6TX_REGISTER) && defined(INTERRUPT_U6TX_BIT)
        case INTERRUPTS_U6TX:
            interrupt_bit_clear( INTERRUPT_U6TX_REGISTER, INTERRUPT_U6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6RX_REGISTER) && defined(INTERRUPT_U6RX_BIT)
        case INTERRUPTS_U6RX:
            interrupt_bit_clear( INTERRUPT_U6RX_REGISTER, INTERRUPT_U6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6E_REGISTER) && defined(INTERRUPT_U6E_BIT)
        case INTERRUPTS_U6E:
            interrupt_bit_clear( INTERRUPT_U6E_REGISTER, INTERRUPT_U6E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA7_REGISTER) && defined(INTERRUPT_DMA7_BIT)
        case INTERRUPTS_DMA7:
            interrupt_bit_clear( INTERRUPT_DMA7_REGISTER, INTERRUPT_DMA7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6_REGISTER) && defined(INTERRUPT_DMA6_BIT)
        case INTERRUPTS_DMA6:
            interrupt_bit_clear( INTERRUPT_DMA6_REGISTER, INTERRUPT_DMA6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5_REGISTER) && defined(INTERRUPT_DMA5_BIT)
        case INTERRUPTS_DMA5:
            interrupt_bit_clear( INTERRUPT_DMA5_REGISTER, INTERRUPT_DMA5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4_REGISTER) && defined(INTERRUPT_DMA4_BIT)
        case INTERRUPTS_DMA4:
            interrupt_bit_clear( INTERRUPT_DMA4_REGISTER, INTERRUPT_DMA4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETH_REGISTER) && defined(INTERRUPT_ETH_BIT)
        case INTERRUPTS_ETH:
            interrupt_bit_clear( INTERRUPT_ETH_REGISTER, INTERRUPT_ETH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CAN2_REGISTER) && defined(INTERRUPT_CAN2_BIT)
        case INTERRUPTS_CAN2:
            interrupt_bit_clear( INTERRUPT_CAN2_REGISTER, INTERRUPT_CAN2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T6_REGISTER) && defined(INTERRUPT_T6_BIT)
        case INTERRUPTS_T6:
            interrupt_bit_clear( INTERRUPT_T6_REGISTER, INTERRUPT_T6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6E_REGISTER) && defined(INTERRUPT_IC6E_BIT)
        case INTERRUPTS_IC6E:
            interrupt_bit_clear( INTERRUPT_IC6E_REGISTER, INTERRUPT_IC6E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6_REGISTER) && defined(INTERRUPT_IC6_BIT)
        case INTERRUPTS_IC6:
            interrupt_bit_clear( INTERRUPT_IC6_REGISTER, INTERRUPT_IC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC6_REGISTER) && defined(INTERRUPT_OC6_BIT)
        case INTERRUPTS_OC6:
            interrupt_bit_clear( INTERRUPT_OC6_REGISTER, INTERRUPT_OC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T7_REGISTER) && defined(INTERRUPT_T7_BIT)
        case INTERRUPTS_T7:
            interrupt_bit_clear( INTERRUPT_T7_REGISTER, INTERRUPT_T7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7E_REGISTER) && defined(INTERRUPT_IC7E_BIT)
        case INTERRUPTS_IC7E:
            interrupt_bit_clear( INTERRUPT_IC7E_REGISTER, INTERRUPT_IC7E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7_REGISTER) && defined(INTERRUPT_IC7_BIT)
        case INTERRUPTS_IC7:
            interrupt_bit_clear( INTERRUPT_IC7_REGISTER, INTERRUPT_IC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC7_REGISTER) && defined(INTERRUPT_OC7_BIT)
        case INTERRUPTS_OC7:
            interrupt_bit_clear( INTERRUPT_OC7_REGISTER, INTERRUPT_OC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T8_REGISTER) && defined(INTERRUPT_T8_BIT)
        case INTERRUPTS_T8:
            interrupt_bit_clear( INTERRUPT_T8_REGISTER, INTERRUPT_T8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8E_REGISTER) && defined(INTERRUPT_IC8E_BIT)
        case INTERRUPTS_IC8E:
            interrupt_bit_clear( INTERRUPT_IC8E_REGISTER, INTERRUPT_IC8E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8_REGISTER) && defined(INTERRUPT_IC8_BIT)
        case INTERRUPTS_IC8:
            interrupt_bit_clear( INTERRUPT_IC8_REGISTER, INTERRUPT_IC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC8_REGISTER) && defined(INTERRUPT_OC8_BIT)
        case INTERRUPTS_OC8:
            interrupt_bit_clear( INTERRUPT_OC8_REGISTER, INTERRUPT_OC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T9_REGISTER) && defined(INTERRUPT_T9_BIT)
        case INTERRUPTS_T9:
            interrupt_bit_clear( INTERRUPT_T9_REGISTER, INTERRUPT_T9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC9E_REGISTER) && defined(INTERRUPT_IC9E_BIT)
        case INTERRUPTS_IC9E:
            interrupt_bit_clear( INTERRUPT_IC9E_REGISTER, INTERRUPT_IC9E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC9_REGISTER) && defined(INTERRUPT_IC9_BIT)
        case INTERRUPTS_IC9:
            interrupt_bit_clear( INTERRUPT_IC9_REGISTER, INTERRUPT_IC9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC9_REGISTER) && defined(INTERRUPT_OC9_BIT)
        case INTERRUPTS_OC9:
            interrupt_bit_clear( INTERRUPT_OC9_REGISTER, INTERRUPT_OC9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC_REGISTER) && defined(INTERRUPT_ADC_BIT)
        case INTERRUPTS_ADC:
            interrupt_bit_clear( INTERRUPT_ADC_REGISTER, INTERRUPT_ADC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCFIFO_REGISTER) && defined(INTERRUPT_ADCFIFO_BIT)
        case INTERRUPTS_ADCFIFO:
            interrupt_bit_clear( INTERRUPT_ADCFIFO_REGISTER, INTERRUPT_ADCFIFO_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC1_REGISTER) && defined(INTERRUPT_ADCDC1_BIT)
        case INTERRUPTS_ADCDC1:
            interrupt_bit_clear( INTERRUPT_ADCDC1_REGISTER, INTERRUPT_ADCDC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC2_REGISTER) && defined(INTERRUPT_ADCDC2_BIT)
        case INTERRUPTS_ADCDC2:
            interrupt_bit_clear( INTERRUPT_ADCDC2_REGISTER, INTERRUPT_ADCDC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC3_REGISTER) && defined(INTERRUPT_ADCDC3_BIT)
        case INTERRUPTS_ADCDC3:
            interrupt_bit_clear( INTERRUPT_ADCDC3_REGISTER, INTERRUPT_ADCDC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC4_REGISTER) && defined(INTERRUPT_ADCDC4_BIT)
        case INTERRUPTS_ADCDC4:
            interrupt_bit_clear( INTERRUPT_ADCDC4_REGISTER, INTERRUPT_ADCDC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC5_REGISTER) && defined(INTERRUPT_ADCDC5_BIT)
        case INTERRUPTS_ADCDC5:
            interrupt_bit_clear( INTERRUPT_ADCDC5_REGISTER, INTERRUPT_ADCDC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDC6_REGISTER) && defined(INTERRUPT_ADCDC6_BIT)
        case INTERRUPTS_ADCDC6:
            interrupt_bit_clear( INTERRUPT_ADCDC6_REGISTER, INTERRUPT_ADCDC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF1_REGISTER) && defined(INTERRUPT_ADCDF1_BIT)
        case INTERRUPTS_ADCDF1:
            interrupt_bit_clear( INTERRUPT_ADCDF1_REGISTER, INTERRUPT_ADCDF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF2_REGISTER) && defined(INTERRUPT_ADCDF2_BIT)
        case INTERRUPTS_ADCDF2:
            interrupt_bit_clear( INTERRUPT_ADCDF2_REGISTER, INTERRUPT_ADCDF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF3_REGISTER) && defined(INTERRUPT_ADCDF3_BIT)
        case INTERRUPTS_ADCDF3:
            interrupt_bit_clear( INTERRUPT_ADCDF3_REGISTER, INTERRUPT_ADCDF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF4_REGISTER) && defined(INTERRUPT_ADCDF4_BIT)
        case INTERRUPTS_ADCDF4:
            interrupt_bit_clear( INTERRUPT_ADCDF4_REGISTER, INTERRUPT_ADCDF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF5_REGISTER) && defined(INTERRUPT_ADCDF5_BIT)
        case INTERRUPTS_ADCDF5:
            interrupt_bit_clear( INTERRUPT_ADCDF5_REGISTER, INTERRUPT_ADCDF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCDF6_REGISTER) && defined(INTERRUPT_ADCDF6_BIT)
        case INTERRUPTS_ADCDF6:
            interrupt_bit_clear( INTERRUPT_ADCDF6_REGISTER, INTERRUPT_ADCDF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCFLT_REGISTER) && defined(INTERRUPT_ADCFLT_BIT)
        case INTERRUPTS_ADCFLT:
            interrupt_bit_clear( INTERRUPT_ADCFLT_REGISTER, INTERRUPT_ADCFLT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD0_REGISTER) && defined(INTERRUPT_ADCD0_BIT)
        case INTERRUPTS_ADCD0:
            interrupt_bit_clear( INTERRUPT_ADCD0_REGISTER, INTERRUPT_ADCD0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD1_REGISTER) && defined(INTERRUPT_ADCD1_BIT)
        case INTERRUPTS_ADCD1:
            interrupt_bit_clear( INTERRUPT_ADCD1_REGISTER, INTERRUPT_ADCD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD2_REGISTER) && defined(INTERRUPT_ADCD2_BIT)
        case INTERRUPTS_ADCD2:
            interrupt_bit_clear( INTERRUPT_ADCD2_REGISTER, INTERRUPT_ADCD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD3_REGISTER) && defined(INTERRUPT_ADCD3_BIT)
        case INTERRUPTS_ADCD3:
            interrupt_bit_clear( INTERRUPT_ADCD3_REGISTER, INTERRUPT_ADCD3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD4_REGISTER) && defined(INTERRUPT_ADCD4_BIT)
        case INTERRUPTS_ADCD4:
            interrupt_bit_clear( INTERRUPT_ADCD4_REGISTER, INTERRUPT_ADCD4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD5_REGISTER) && defined(INTERRUPT_ADCD5_BIT)
        case INTERRUPTS_ADCD5:
            interrupt_bit_clear( INTERRUPT_ADCD5_REGISTER, INTERRUPT_ADCD5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD6_REGISTER) && defined(INTERRUPT_ADCD6_BIT)
        case INTERRUPTS_ADCD6:
            interrupt_bit_clear( INTERRUPT_ADCD6_REGISTER, INTERRUPT_ADCD6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD7_REGISTER) && defined(INTERRUPT_ADCD7_BIT)
        case INTERRUPTS_ADCD7:
            interrupt_bit_clear( INTERRUPT_ADCD7_REGISTER, INTERRUPT_ADCD7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD8_REGISTER) && defined(INTERRUPT_ADCD8_BIT)
        case INTERRUPTS_ADCD8:
            interrupt_bit_clear( INTERRUPT_ADCD8_REGISTER, INTERRUPT_ADCD8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD9_REGISTER) && defined(INTERRUPT_ADCD9_BIT)
        case INTERRUPTS_ADCD9:
            interrupt_bit_clear( INTERRUPT_ADCD9_REGISTER, INTERRUPT_ADCD9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD10_REGISTER) && defined(INTERRUPT_ADCD10_BIT)
        case INTERRUPTS_ADCD10:
            interrupt_bit_clear( INTERRUPT_ADCD10_REGISTER, INTERRUPT_ADCD10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD11_REGISTER) && defined(INTERRUPT_ADCD11_BIT)
        case INTERRUPTS_ADCD11:
            interrupt_bit_clear( INTERRUPT_ADCD11_REGISTER, INTERRUPT_ADCD11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD12_REGISTER) && defined(INTERRUPT_ADCD12_BIT)
        case INTERRUPTS_ADCD12:
            interrupt_bit_clear( INTERRUPT_ADCD12_REGISTER, INTERRUPT_ADCD12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD13_REGISTER) && defined(INTERRUPT_ADCD13_BIT)
        case INTERRUPTS_ADCD13:
            interrupt_bit_clear( INTERRUPT_ADCD13_REGISTER, INTERRUPT_ADCD13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD14_REGISTER) && defined(INTERRUPT_ADCD14_BIT)
        case INTERRUPTS_ADCD14:
            interrupt_bit_clear( INTERRUPT_ADCD14_REGISTER, INTERRUPT_ADCD14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD15_REGISTER) && defined(INTERRUPT_ADCD15_BIT)
        case INTERRUPTS_ADCD15:
            interrupt_bit_clear( INTERRUPT_ADCD15_REGISTER, INTERRUPT_ADCD15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD16_REGISTER) && defined(INTERRUPT_ADCD16_BIT)
        case INTERRUPTS_ADCD16:
            interrupt_bit_clear( INTERRUPT_ADCD16_REGISTER, INTERRUPT_ADCD16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD17_REGISTER) && defined(INTERRUPT_ADCD17_BIT)
        case INTERRUPTS_ADCD17:
            interrupt_bit_clear( INTERRUPT_ADCD17_REGISTER, INTERRUPT_ADCD17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD18_REGISTER) && defined(INTERRUPT_ADCD18_BIT)
        case INTERRUPTS_ADCD18:
            interrupt_bit_clear( INTERRUPT_ADCD18_REGISTER, INTERRUPT_ADCD18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD43_REGISTER) && defined(INTERRUPT_ADCD43_BIT)
        case INTERRUPTS_ADCD43:
            interrupt_bit_clear( INTERRUPT_ADCD43_REGISTER, INTERRUPT_ADCD43_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD44_REGISTER) && defined(INTERRUPT_ADCD44_BIT)
        case INTERRUPTS_ADCD44:
            interrupt_bit_clear( INTERRUPT_ADCD44_REGISTER, INTERRUPT_ADCD44_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CPC_REGISTER) && defined(INTERRUPT_CPC_BIT)
        case INTERRUPTS_CPC:
            interrupt_bit_clear( INTERRUPT_CPC_REGISTER, INTERRUPT_CPC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CFDC_REGISTER) && defined(INTERRUPT_CFDC_BIT)
        case INTERRUPTS_CFDC:
            interrupt_bit_clear( INTERRUPT_CFDC_REGISTER, INTERRUPT_CFDC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SB_REGISTER) && defined(INTERRUPT_SB_BIT)
        case INTERRUPTS_SB:
            interrupt_bit_clear( INTERRUPT_SB_REGISTER, INTERRUPT_SB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USBDMA_REGISTER) && defined(INTERRUPT_USBDMA_BIT)
        case INTERRUPTS_USBDMA:
            interrupt_bit_clear( INTERRUPT_USBDMA_REGISTER, INTERRUPT_USBDMA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PRE_REGISTER) && defined(INTERRUPT_PRE_BIT)
        case INTERRUPTS_PRE:
            interrupt_bit_clear( INTERRUPT_PRE_REGISTER, INTERRUPT_PRE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SQI1_REGISTER) && defined(INTERRUPT_SQI1_BIT)
        case INTERRUPTS_SQI1:
            interrupt_bit_clear( INTERRUPT_SQI1_REGISTER, INTERRUPT_SQI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCEOS_REGISTER) && defined(INTERRUPT_ADCEOS_BIT)
        case INTERRUPTS_ADCEOS:
            interrupt_bit_clear( INTERRUPT_ADCEOS_REGISTER, INTERRUPT_ADCEOS_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCARDY_REGISTER) && defined(INTERRUPT_ADCARDY_BIT)
        case INTERRUPTS_ADCARDY:
            interrupt_bit_clear( INTERRUPT_ADCARDY_REGISTER, INTERRUPT_ADCARDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCURDY_REGISTER) && defined(INTERRUPT_ADCURDY_BIT)
        case INTERRUPTS_ADCURDY:
            interrupt_bit_clear( INTERRUPT_ADCURDY_REGISTER, INTERRUPT_ADCURDY_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCGRP_REGISTER) && defined(INTERRUPT_ADCGRP_BIT)
        case INTERRUPTS_ADCGRP:
            interrupt_bit_clear( INTERRUPT_ADCGRP_REGISTER, INTERRUPT_ADCGRP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC0E_REGISTER) && defined(INTERRUPT_ADC0E_BIT)
        case INTERRUPTS_ADC0E:
            interrupt_bit_clear( INTERRUPT_ADC0E_REGISTER, INTERRUPT_ADC0E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC1E_REGISTER) && defined(INTERRUPT_ADC1E_BIT)
        case INTERRUPTS_ADC1E:
            interrupt_bit_clear( INTERRUPT_ADC1E_REGISTER, INTERRUPT_ADC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC2E_REGISTER) && defined(INTERRUPT_ADC2E_BIT)
        case INTERRUPTS_ADC2E:
            interrupt_bit_clear( INTERRUPT_ADC2E_REGISTER, INTERRUPT_ADC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC3E_REGISTER) && defined(INTERRUPT_ADC3E_BIT)
        case INTERRUPTS_ADC3E:
            interrupt_bit_clear( INTERRUPT_ADC3E_REGISTER, INTERRUPT_ADC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC4E_REGISTER) && defined(INTERRUPT_ADC4E_BIT)
        case INTERRUPTS_ADC4E:
            interrupt_bit_clear( INTERRUPT_ADC4E_REGISTER, INTERRUPT_ADC4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC7E_REGISTER) && defined(INTERRUPT_ADC7E_BIT)
        case INTERRUPTS_ADC7E:
            interrupt_bit_clear( INTERRUPT_ADC7E_REGISTER, INTERRUPT_ADC7E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC0W_REGISTER) && defined(INTERRUPT_ADC0W_BIT)
        case INTERRUPTS_ADC0W:
            interrupt_bit_clear( INTERRUPT_ADC0W_REGISTER, INTERRUPT_ADC0W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC1W_REGISTER) && defined(INTERRUPT_ADC1W_BIT)
        case INTERRUPTS_ADC1W:
            interrupt_bit_clear( INTERRUPT_ADC1W_REGISTER, INTERRUPT_ADC1W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC2W_REGISTER) && defined(INTERRUPT_ADC2W_BIT)
        case INTERRUPTS_ADC2W:
            interrupt_bit_clear( INTERRUPT_ADC2W_REGISTER, INTERRUPT_ADC2W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC3W_REGISTER) && defined(INTERRUPT_ADC3W_BIT)
        case INTERRUPTS_ADC3W:
            interrupt_bit_clear( INTERRUPT_ADC3W_REGISTER, INTERRUPT_ADC3W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC4W_REGISTER) && defined(INTERRUPT_ADC4W_BIT)
        case INTERRUPTS_ADC4W:
            interrupt_bit_clear( INTERRUPT_ADC4W_REGISTER, INTERRUPT_ADC4W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADC7W_REGISTER) && defined(INTERRUPT_ADC7W_BIT)
        case INTERRUPTS_ADC7W:
            interrupt_bit_clear( INTERRUPT_ADC7W_REGISTER, INTERRUPT_ADC7W_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD19_REGISTER) && defined(INTERRUPT_ADCD19_BIT)
        case INTERRUPTS_ADCD19:
            interrupt_bit_clear( INTERRUPT_ADCD19_REGISTER, INTERRUPT_ADCD19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD20_REGISTER) && defined(INTERRUPT_ADCD20_BIT)
        case INTERRUPTS_ADCD20:
            interrupt_bit_clear( INTERRUPT_ADCD20_REGISTER, INTERRUPT_ADCD20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD21_REGISTER) && defined(INTERRUPT_ADCD21_BIT)
        case INTERRUPTS_ADCD21:
            interrupt_bit_clear( INTERRUPT_ADCD21_REGISTER, INTERRUPT_ADCD21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD22_REGISTER) && defined(INTERRUPT_ADCD22_BIT)
        case INTERRUPTS_ADCD22:
            interrupt_bit_clear( INTERRUPT_ADCD22_REGISTER, INTERRUPT_ADCD22_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD23_REGISTER) && defined(INTERRUPT_ADCD23_BIT)
        case INTERRUPTS_ADCD23:
            interrupt_bit_clear( INTERRUPT_ADCD23_REGISTER, INTERRUPT_ADCD23_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD24_REGISTER) && defined(INTERRUPT_ADCD24_BIT)
        case INTERRUPTS_ADCD24:
            interrupt_bit_clear( INTERRUPT_ADCD24_REGISTER, INTERRUPT_ADCD24_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD25_REGISTER) && defined(INTERRUPT_ADCD25_BIT)
        case INTERRUPTS_ADCD25:
            interrupt_bit_clear( INTERRUPT_ADCD25_REGISTER, INTERRUPT_ADCD25_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD26_REGISTER) && defined(INTERRUPT_ADCD26_BIT)
        case INTERRUPTS_ADCD26:
            interrupt_bit_clear( INTERRUPT_ADCD26_REGISTER, INTERRUPT_ADCD26_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD27_REGISTER) && defined(INTERRUPT_ADCD27_BIT)
        case INTERRUPTS_ADCD27:
            interrupt_bit_clear( INTERRUPT_ADCD27_REGISTER, INTERRUPT_ADCD27_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD28_REGISTER) && defined(INTERRUPT_ADCD28_BIT)
        case INTERRUPTS_ADCD28:
            interrupt_bit_clear( INTERRUPT_ADCD28_REGISTER, INTERRUPT_ADCD28_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD29_REGISTER) && defined(INTERRUPT_ADCD29_BIT)
        case INTERRUPTS_ADCD29:
            interrupt_bit_clear( INTERRUPT_ADCD29_REGISTER, INTERRUPT_ADCD29_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD30_REGISTER) && defined(INTERRUPT_ADCD30_BIT)
        case INTERRUPTS_ADCD30:
            interrupt_bit_clear( INTERRUPT_ADCD30_REGISTER, INTERRUPT_ADCD30_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD31_REGISTER) && defined(INTERRUPT_ADCD31_BIT)
        case INTERRUPTS_ADCD31:
            interrupt_bit_clear( INTERRUPT_ADCD31_REGISTER, INTERRUPT_ADCD31_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD32_REGISTER) && defined(INTERRUPT_ADCD32_BIT)
        case INTERRUPTS_ADCD32:
            interrupt_bit_clear( INTERRUPT_ADCD32_REGISTER, INTERRUPT_ADCD32_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD33_REGISTER) && defined(INTERRUPT_ADCD33_BIT)
        case INTERRUPTS_ADCD33:
            interrupt_bit_clear( INTERRUPT_ADCD33_REGISTER, INTERRUPT_ADCD33_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD34_REGISTER) && defined(INTERRUPT_ADCD34_BIT)
        case INTERRUPTS_ADCD34:
            interrupt_bit_clear( INTERRUPT_ADCD34_REGISTER, INTERRUPT_ADCD34_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5E_REGISTER) && defined(INTERRUPT_SPI5E_BIT)
        case INTERRUPTS_SPI5E:
            interrupt_bit_clear( INTERRUPT_SPI5E_REGISTER, INTERRUPT_SPI5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5RX_REGISTER) && defined(INTERRUPT_SPI5RX_BIT)
        case INTERRUPTS_SPI5RX:
            interrupt_bit_clear( INTERRUPT_SPI5RX_REGISTER, INTERRUPT_SPI5RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI5TX_REGISTER) && defined(INTERRUPT_SPI5TX_BIT)
        case INTERRUPTS_SPI5TX:
            interrupt_bit_clear( INTERRUPT_SPI5TX_REGISTER, INTERRUPT_SPI5TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6_REGISTER) && defined(INTERRUPT_SPI6_BIT)
        case INTERRUPTS_SPI6:
            interrupt_bit_clear( INTERRUPT_SPI6_REGISTER, INTERRUPT_SPI6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6RX_REGISTER) && defined(INTERRUPT_SPI6RX_BIT)
        case INTERRUPTS_SPI6RX:
            interrupt_bit_clear( INTERRUPT_SPI6RX_REGISTER, INTERRUPT_SPI6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI6TX_REGISTER) && defined(INTERRUPT_SPI6TX_BIT)
        case INTERRUPTS_SPI6TX:
            interrupt_bit_clear( INTERRUPT_SPI6TX_REGISTER, INTERRUPT_SPI6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD35_REGISTER) && defined(INTERRUPT_ADCD35_BIT)
        case INTERRUPTS_ADCD35:
            interrupt_bit_clear( INTERRUPT_ADCD35_REGISTER, INTERRUPT_ADCD35_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD36_REGISTER) && defined(INTERRUPT_ADCD36_BIT)
        case INTERRUPTS_ADCD36:
            interrupt_bit_clear( INTERRUPT_ADCD36_REGISTER, INTERRUPT_ADCD36_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD37_REGISTER) && defined(INTERRUPT_ADCD37_BIT)
        case INTERRUPTS_ADCD37:
            interrupt_bit_clear( INTERRUPT_ADCD37_REGISTER, INTERRUPT_ADCD37_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD38_REGISTER) && defined(INTERRUPT_ADCD38_BIT)
        case INTERRUPTS_ADCD38:
            interrupt_bit_clear( INTERRUPT_ADCD38_REGISTER, INTERRUPT_ADCD38_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD39_REGISTER) && defined(INTERRUPT_ADCD39_BIT)
        case INTERRUPTS_ADCD39:
            interrupt_bit_clear( INTERRUPT_ADCD39_REGISTER, INTERRUPT_ADCD39_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD40_REGISTER) && defined(INTERRUPT_ADCD40_BIT)
        case INTERRUPTS_ADCD40:
            interrupt_bit_clear( INTERRUPT_ADCD40_REGISTER, INTERRUPT_ADCD40_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD41_REGISTER) && defined(INTERRUPT_ADCD41_BIT)
        case INTERRUPTS_ADCD41:
            interrupt_bit_clear( INTERRUPT_ADCD41_REGISTER, INTERRUPT_ADCD41_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCD42_REGISTER) && defined(INTERRUPT_ADCD42_BIT)
        case INTERRUPTS_ADCD42:
            interrupt_bit_clear( INTERRUPT_ADCD42_REGISTER, INTERRUPT_ADCD42_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNH_REGISTER) && defined(INTERRUPT_CNH_BIT)
        case INTERRUPTS_CNH:
            interrupt_bit_clear( INTERRUPT_CNH_REGISTER, INTERRUPT_CNH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNJ_REGISTER) && defined(INTERRUPT_CNJ_BIT)
        case INTERRUPTS_CNJ:
            interrupt_bit_clear( INTERRUPT_CNJ_REGISTER, INTERRUPT_CNJ_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CNK_REGISTER) && defined(INTERRUPT_CNK_BIT)
        case INTERRUPTS_CNK:
            interrupt_bit_clear( INTERRUPT_CNK_REGISTER, INTERRUPT_CNK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRPT_REGISTER) && defined(INTERRUPT_CRPT_BIT)
        case INTERRUPTS_CRPT:
            interrupt_bit_clear( INTERRUPT_CRPT_REGISTER, INTERRUPT_CRPT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC1_REGISTER) && defined(INTERRUPT_AD1DC1_BIT)
        case INTERRUPTS_AD1DC1:
            interrupt_bit_clear( INTERRUPT_AD1DC1_REGISTER, INTERRUPT_AD1DC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC2_REGISTER) && defined(INTERRUPT_AD1DC2_BIT)
        case INTERRUPTS_AD1DC2:
            interrupt_bit_clear( INTERRUPT_AD1DC2_REGISTER, INTERRUPT_AD1DC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC3_REGISTER) && defined(INTERRUPT_AD1DC3_BIT)
        case INTERRUPTS_AD1DC3:
            interrupt_bit_clear( INTERRUPT_AD1DC3_REGISTER, INTERRUPT_AD1DC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC4_REGISTER) && defined(INTERRUPT_AD1DC4_BIT)
        case INTERRUPTS_AD1DC4:
            interrupt_bit_clear( INTERRUPT_AD1DC4_REGISTER, INTERRUPT_AD1DC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC5_REGISTER) && defined(INTERRUPT_AD1DC5_BIT)
        case INTERRUPTS_AD1DC5:
            interrupt_bit_clear( INTERRUPT_AD1DC5_REGISTER, INTERRUPT_AD1DC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DC6_REGISTER) && defined(INTERRUPT_AD1DC6_BIT)
        case INTERRUPTS_AD1DC6:
            interrupt_bit_clear( INTERRUPT_AD1DC6_REGISTER, INTERRUPT_AD1DC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF1_REGISTER) && defined(INTERRUPT_AD1DF1_BIT)
        case INTERRUPTS_AD1DF1:
            interrupt_bit_clear( INTERRUPT_AD1DF1_REGISTER, INTERRUPT_AD1DF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF2_REGISTER) && defined(INTERRUPT_AD1DF2_BIT)
        case INTERRUPTS_AD1DF2:
            interrupt_bit_clear( INTERRUPT_AD1DF2_REGISTER, INTERRUPT_AD1DF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF3_REGISTER) && defined(INTERRUPT_AD1DF3_BIT)
        case INTERRUPTS_AD1DF3:
            interrupt_bit_clear( INTERRUPT_AD1DF3_REGISTER, INTERRUPT_AD1DF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF4_REGISTER) && defined(INTERRUPT_AD1DF4_BIT)
        case INTERRUPTS_AD1DF4:
            interrupt_bit_clear( INTERRUPT_AD1DF4_REGISTER, INTERRUPT_AD1DF4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF5_REGISTER) && defined(INTERRUPT_AD1DF5_BIT)
        case INTERRUPTS_AD1DF5:
            interrupt_bit_clear( INTERRUPT_AD1DF5_REGISTER, INTERRUPT_AD1DF5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1DF6_REGISTER) && defined(INTERRUPT_AD1DF6_BIT)
        case INTERRUPTS_AD1DF6:
            interrupt_bit_clear( INTERRUPT_AD1DF6_REGISTER, INTERRUPT_AD1DF6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D0_REGISTER) && defined(INTERRUPT_AD1D0_BIT)
        case INTERRUPTS_AD1D0:
            interrupt_bit_clear( INTERRUPT_AD1D0_REGISTER, INTERRUPT_AD1D0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D1_REGISTER) && defined(INTERRUPT_AD1D1_BIT)
        case INTERRUPTS_AD1D1:
            interrupt_bit_clear( INTERRUPT_AD1D1_REGISTER, INTERRUPT_AD1D1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D2_REGISTER) && defined(INTERRUPT_AD1D2_BIT)
        case INTERRUPTS_AD1D2:
            interrupt_bit_clear( INTERRUPT_AD1D2_REGISTER, INTERRUPT_AD1D2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D3_REGISTER) && defined(INTERRUPT_AD1D3_BIT)
        case INTERRUPTS_AD1D3:
            interrupt_bit_clear( INTERRUPT_AD1D3_REGISTER, INTERRUPT_AD1D3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D4_REGISTER) && defined(INTERRUPT_AD1D4_BIT)
        case INTERRUPTS_AD1D4:
            interrupt_bit_clear( INTERRUPT_AD1D4_REGISTER, INTERRUPT_AD1D4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D5_REGISTER) && defined(INTERRUPT_AD1D5_BIT)
        case INTERRUPTS_AD1D5:
            interrupt_bit_clear( INTERRUPT_AD1D5_REGISTER, INTERRUPT_AD1D5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D6_REGISTER) && defined(INTERRUPT_AD1D6_BIT)
        case INTERRUPTS_AD1D6:
            interrupt_bit_clear( INTERRUPT_AD1D6_REGISTER, INTERRUPT_AD1D6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D7_REGISTER) && defined(INTERRUPT_AD1D7_BIT)
        case INTERRUPTS_AD1D7:
            interrupt_bit_clear( INTERRUPT_AD1D7_REGISTER, INTERRUPT_AD1D7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D8_REGISTER) && defined(INTERRUPT_AD1D8_BIT)
        case INTERRUPTS_AD1D8:
            interrupt_bit_clear( INTERRUPT_AD1D8_REGISTER, INTERRUPT_AD1D8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D9_REGISTER) && defined(INTERRUPT_AD1D9_BIT)
        case INTERRUPTS_AD1D9:
            interrupt_bit_clear( INTERRUPT_AD1D9_REGISTER, INTERRUPT_AD1D9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D10_REGISTER) && defined(INTERRUPT_AD1D10_BIT)
        case INTERRUPTS_AD1D10:
            interrupt_bit_clear( INTERRUPT_AD1D10_REGISTER, INTERRUPT_AD1D10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D11_REGISTER) && defined(INTERRUPT_AD1D11_BIT)
        case INTERRUPTS_AD1D11:
            interrupt_bit_clear( INTERRUPT_AD1D11_REGISTER, INTERRUPT_AD1D11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D12_REGISTER) && defined(INTERRUPT_AD1D12_BIT)
        case INTERRUPTS_AD1D12:
            interrupt_bit_clear( INTERRUPT_AD1D12_REGISTER, INTERRUPT_AD1D12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D13_REGISTER) && defined(INTERRUPT_AD1D13_BIT)
        case INTERRUPTS_AD1D13:
            interrupt_bit_clear( INTERRUPT_AD1D13_REGISTER, INTERRUPT_AD1D13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D14_REGISTER) && defined(INTERRUPT_AD1D14_BIT)
        case INTERRUPTS_AD1D14:
            interrupt_bit_clear( INTERRUPT_AD1D14_REGISTER, INTERRUPT_AD1D14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D15_REGISTER) && defined(INTERRUPT_AD1D15_BIT)
        case INTERRUPTS_AD1D15:
            interrupt_bit_clear( INTERRUPT_AD1D15_REGISTER, INTERRUPT_AD1D15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D16_REGISTER) && defined(INTERRUPT_AD1D16_BIT)
        case INTERRUPTS_AD1D16:
            interrupt_bit_clear( INTERRUPT_AD1D16_REGISTER, INTERRUPT_AD1D16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D17_REGISTER) && defined(INTERRUPT_AD1D17_BIT)
        case INTERRUPTS_AD1D17:
            interrupt_bit_clear( INTERRUPT_AD1D17_REGISTER, INTERRUPT_AD1D17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D18_REGISTER) && defined(INTERRUPT_AD1D18_BIT)
        case INTERRUPTS_AD1D18:
            interrupt_bit_clear( INTERRUPT_AD1D18_REGISTER, INTERRUPT_AD1D18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D43_REGISTER) && defined(INTERRUPT_AD1D43_BIT)
        case INTERRUPTS_AD1D43:
            interrupt_bit_clear( INTERRUPT_AD1D43_REGISTER, INTERRUPT_AD1D43_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D44_REGISTER) && defined(INTERRUPT_AD1D44_BIT)
        case INTERRUPTS_AD1D44:
            interrupt_bit_clear( INTERRUPT_AD1D44_REGISTER, INTERRUPT_AD1D44_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D19_REGISTER) && defined(INTERRUPT_AD1D19_BIT)
        case INTERRUPTS_AD1D19:
            interrupt_bit_clear( INTERRUPT_AD1D19_REGISTER, INTERRUPT_AD1D19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D20_REGISTER) && defined(INTERRUPT_AD1D20_BIT)
        case INTERRUPTS_AD1D20:
            interrupt_bit_clear( INTERRUPT_AD1D20_REGISTER, INTERRUPT_AD1D20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D21_REGISTER) && defined(INTERRUPT_AD1D21_BIT)
        case INTERRUPTS_AD1D21:
            interrupt_bit_clear( INTERRUPT_AD1D21_REGISTER, INTERRUPT_AD1D21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D22_REGISTER) && defined(INTERRUPT_AD1D22_BIT)
        case INTERRUPTS_AD1D22:
            interrupt_bit_clear( INTERRUPT_AD1D22_REGISTER, INTERRUPT_AD1D22_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D23_REGISTER) && defined(INTERRUPT_AD1D23_BIT)
        case INTERRUPTS_AD1D23:
            interrupt_bit_clear( INTERRUPT_AD1D23_REGISTER, INTERRUPT_AD1D23_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D24_REGISTER) && defined(INTERRUPT_AD1D24_BIT)
        case INTERRUPTS_AD1D24:
            interrupt_bit_clear( INTERRUPT_AD1D24_REGISTER, INTERRUPT_AD1D24_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D25_REGISTER) && defined(INTERRUPT_AD1D25_BIT)
        case INTERRUPTS_AD1D25:
            interrupt_bit_clear( INTERRUPT_AD1D25_REGISTER, INTERRUPT_AD1D25_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D26_REGISTER) && defined(INTERRUPT_AD1D26_BIT)
        case INTERRUPTS_AD1D26:
            interrupt_bit_clear( INTERRUPT_AD1D26_REGISTER, INTERRUPT_AD1D26_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D27_REGISTER) && defined(INTERRUPT_AD1D27_BIT)
        case INTERRUPTS_AD1D27:
            interrupt_bit_clear( INTERRUPT_AD1D27_REGISTER, INTERRUPT_AD1D27_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D28_REGISTER) && defined(INTERRUPT_AD1D28_BIT)
        case INTERRUPTS_AD1D28:
            interrupt_bit_clear( INTERRUPT_AD1D28_REGISTER, INTERRUPT_AD1D28_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D29_REGISTER) && defined(INTERRUPT_AD1D29_BIT)
        case INTERRUPTS_AD1D29:
            interrupt_bit_clear( INTERRUPT_AD1D29_REGISTER, INTERRUPT_AD1D29_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D30_REGISTER) && defined(INTERRUPT_AD1D30_BIT)
        case INTERRUPTS_AD1D30:
            interrupt_bit_clear( INTERRUPT_AD1D30_REGISTER, INTERRUPT_AD1D30_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D31_REGISTER) && defined(INTERRUPT_AD1D31_BIT)
        case INTERRUPTS_AD1D31:
            interrupt_bit_clear( INTERRUPT_AD1D31_REGISTER, INTERRUPT_AD1D31_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D32_REGISTER) && defined(INTERRUPT_AD1D32_BIT)
        case INTERRUPTS_AD1D32:
            interrupt_bit_clear( INTERRUPT_AD1D32_REGISTER, INTERRUPT_AD1D32_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D33_REGISTER) && defined(INTERRUPT_AD1D33_BIT)
        case INTERRUPTS_AD1D33:
            interrupt_bit_clear( INTERRUPT_AD1D33_REGISTER, INTERRUPT_AD1D33_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D34_REGISTER) && defined(INTERRUPT_AD1D34_BIT)
        case INTERRUPTS_AD1D34:
            interrupt_bit_clear( INTERRUPT_AD1D34_REGISTER, INTERRUPT_AD1D34_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D35_REGISTER) && defined(INTERRUPT_AD1D35_BIT)
        case INTERRUPTS_AD1D35:
            interrupt_bit_clear( INTERRUPT_AD1D35_REGISTER, INTERRUPT_AD1D35_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D36_REGISTER) && defined(INTERRUPT_AD1D36_BIT)
        case INTERRUPTS_AD1D36:
            interrupt_bit_clear( INTERRUPT_AD1D36_REGISTER, INTERRUPT_AD1D36_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D37_REGISTER) && defined(INTERRUPT_AD1D37_BIT)
        case INTERRUPTS_AD1D37:
            interrupt_bit_clear( INTERRUPT_AD1D37_REGISTER, INTERRUPT_AD1D37_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D38_REGISTER) && defined(INTERRUPT_AD1D38_BIT)
        case INTERRUPTS_AD1D38:
            interrupt_bit_clear( INTERRUPT_AD1D38_REGISTER, INTERRUPT_AD1D38_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D39_REGISTER) && defined(INTERRUPT_AD1D39_BIT)
        case INTERRUPTS_AD1D39:
            interrupt_bit_clear( INTERRUPT_AD1D39_REGISTER, INTERRUPT_AD1D39_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D40_REGISTER) && defined(INTERRUPT_AD1D40_BIT)
        case INTERRUPTS_AD1D40:
            interrupt_bit_clear( INTERRUPT_AD1D40_REGISTER, INTERRUPT_AD1D40_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D41_REGISTER) && defined(INTERRUPT_AD1D41_BIT)
        case INTERRUPTS_AD1D41:
            interrupt_bit_clear( INTERRUPT_AD1D41_REGISTER, INTERRUPT_AD1D41_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1D42_REGISTER) && defined(INTERRUPT_AD1D42_BIT)
        case INTERRUPTS_AD1D42:
            interrupt_bit_clear( INTERRUPT_AD1D42_REGISTER, INTERRUPT_AD1D42_BIT );
            break;
        #endif

        default:
            break;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

static inline void interrupts_enable_asm( void ) {
    asm ("nop");
    asm ("EI");
    asm ("nop");
}

static inline void interrupts_disable_asm( void ) {
    asm ("nop");
    asm ("DI");
    asm ("nop");
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
