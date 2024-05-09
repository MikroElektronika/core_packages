/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2023, MikroElektonika - www.mikroe.com

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
    interrupts_enable_asm();
}

void interrupts_disable( void ) {
    interrupts_disable_asm();
}

void interrupt_enable( int interrupt ) {
    switch ( interrupt ) {
        #if defined(INTERRUPT_MI2C_REGISTER) && defined(INTERRUPT_MI2C_BIT)
        case INTERRUPTS_MI2C:
            interrupt_bit_set( INTERRUPT_MI2C_REGISTER, INTERRUPT_MI2C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C_REGISTER) && defined(INTERRUPT_SI2C_BIT)
        case INTERRUPTS_SI2C:
            interrupt_bit_set( INTERRUPT_SI2C_REGISTER, INTERRUPT_SI2C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NVM_REGISTER) && defined(INTERRUPT_NVM_BIT)
        case INTERRUPTS_NVM:
            interrupt_bit_set( INTERRUPT_NVM_REGISTER, INTERRUPT_NVM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD_REGISTER) && defined(INTERRUPT_AD_BIT)
        case INTERRUPTS_AD:
            interrupt_bit_set( INTERRUPT_AD_REGISTER, INTERRUPT_AD_BIT );
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
        #if defined(INTERRUPT_SPI1_REGISTER) && defined(INTERRUPT_SPI1_BIT)
        case INTERRUPTS_SPI1:
            interrupt_bit_set( INTERRUPT_SPI1_REGISTER, INTERRUPT_SPI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_set( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_set( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC1_REGISTER) && defined(INTERRUPT_OC1_BIT)
        case INTERRUPTS_OC1:
            interrupt_bit_set( INTERRUPT_OC1_REGISTER, INTERRUPT_OC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_set( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC2_REGISTER) && defined(INTERRUPT_AC2_BIT)
        case INTERRUPTS_AC2:
            interrupt_bit_set( INTERRUPT_AC2_REGISTER, INTERRUPT_AC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC1_REGISTER) && defined(INTERRUPT_AC1_BIT)
        case INTERRUPTS_AC1:
            interrupt_bit_set( INTERRUPT_AC1_REGISTER, INTERRUPT_AC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CN_REGISTER) && defined(INTERRUPT_CN_BIT)
        case INTERRUPTS_CN:
            interrupt_bit_set( INTERRUPT_CN_REGISTER, INTERRUPT_CN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2_REGISTER) && defined(INTERRUPT_PWM2_BIT)
        case INTERRUPTS_PWM2:
            interrupt_bit_set( INTERRUPT_PWM2_REGISTER, INTERRUPT_PWM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1_REGISTER) && defined(INTERRUPT_PWM1_BIT)
        case INTERRUPTS_PWM1:
            interrupt_bit_set( INTERRUPT_PWM1_REGISTER, INTERRUPT_PWM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSEM_REGISTER) && defined(INTERRUPT_PSEM_BIT)
        case INTERRUPTS_PSEM:
            interrupt_bit_set( INTERRUPT_PSEM_REGISTER, INTERRUPT_PSEM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_set( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_set( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP2_REGISTER) && defined(INTERRUPT_ADCP2_BIT)
        case INTERRUPTS_ADCP2:
            interrupt_bit_set( INTERRUPT_ADCP2_REGISTER, INTERRUPT_ADCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP1_REGISTER) && defined(INTERRUPT_ADCP1_BIT)
        case INTERRUPTS_ADCP1:
            interrupt_bit_set( INTERRUPT_ADCP1_REGISTER, INTERRUPT_ADCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP0_REGISTER) && defined(INTERRUPT_ADCP0_BIT)
        case INTERRUPTS_ADCP0:
            interrupt_bit_set( INTERRUPT_ADCP0_REGISTER, INTERRUPT_ADCP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3_REGISTER) && defined(INTERRUPT_T3_BIT)
        case INTERRUPTS_T3:
            interrupt_bit_set( INTERRUPT_T3_REGISTER, INTERRUPT_T3_BIT );
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
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_set( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8_REGISTER) && defined(INTERRUPT_IC8_BIT)
        case INTERRUPTS_IC8:
            interrupt_bit_set( INTERRUPT_IC8_REGISTER, INTERRUPT_IC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7_REGISTER) && defined(INTERRUPT_IC7_BIT)
        case INTERRUPTS_IC7:
            interrupt_bit_set( INTERRUPT_IC7_REGISTER, INTERRUPT_IC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA_REGISTER) && defined(INTERRUPT_FLTA_BIT)
        case INTERRUPTS_FLTA:
            interrupt_bit_set( INTERRUPT_FLTA_REGISTER, INTERRUPT_FLTA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI_REGISTER) && defined(INTERRUPT_QEI_BIT)
        case INTERRUPTS_QEI:
            interrupt_bit_set( INTERRUPT_QEI_REGISTER, INTERRUPT_QEI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM_REGISTER) && defined(INTERRUPT_PWM_BIT)
        case INTERRUPTS_PWM:
            interrupt_bit_set( INTERRUPT_PWM_REGISTER, INTERRUPT_PWM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LVD_REGISTER) && defined(INTERRUPT_LVD_BIT)
        case INTERRUPTS_LVD:
            interrupt_bit_set( INTERRUPT_LVD_REGISTER, INTERRUPT_LVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC3_REGISTER) && defined(INTERRUPT_AC3_BIT)
        case INTERRUPTS_AC3:
            interrupt_bit_set( INTERRUPT_AC3_REGISTER, INTERRUPT_AC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM4_REGISTER) && defined(INTERRUPT_PWM4_BIT)
        case INTERRUPTS_PWM4:
            interrupt_bit_set( INTERRUPT_PWM4_REGISTER, INTERRUPT_PWM4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3_REGISTER) && defined(INTERRUPT_PWM3_BIT)
        case INTERRUPTS_PWM3:
            interrupt_bit_set( INTERRUPT_PWM3_REGISTER, INTERRUPT_PWM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP3_REGISTER) && defined(INTERRUPT_ADCP3_BIT)
        case INTERRUPTS_ADCP3:
            interrupt_bit_set( INTERRUPT_ADCP3_REGISTER, INTERRUPT_ADCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC4_REGISTER) && defined(INTERRUPT_AC4_BIT)
        case INTERRUPTS_AC4:
            interrupt_bit_set( INTERRUPT_AC4_REGISTER, INTERRUPT_AC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP5_REGISTER) && defined(INTERRUPT_ADCP5_BIT)
        case INTERRUPTS_ADCP5:
            interrupt_bit_set( INTERRUPT_ADCP5_REGISTER, INTERRUPT_ADCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP4_REGISTER) && defined(INTERRUPT_ADCP4_BIT)
        case INTERRUPTS_ADCP4:
            interrupt_bit_set( INTERRUPT_ADCP4_REGISTER, INTERRUPT_ADCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T5_REGISTER) && defined(INTERRUPT_T5_BIT)
        case INTERRUPTS_T5:
            interrupt_bit_set( INTERRUPT_T5_REGISTER, INTERRUPT_T5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T4_REGISTER) && defined(INTERRUPT_T4_BIT)
        case INTERRUPTS_T4:
            interrupt_bit_set( INTERRUPT_T4_REGISTER, INTERRUPT_T4_BIT );
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
        #if defined(INTERRUPT_OC4_REGISTER) && defined(INTERRUPT_OC4_BIT)
        case INTERRUPTS_OC4:
            interrupt_bit_set( INTERRUPT_OC4_REGISTER, INTERRUPT_OC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC3_REGISTER) && defined(INTERRUPT_OC3_BIT)
        case INTERRUPTS_OC3:
            interrupt_bit_set( INTERRUPT_OC3_REGISTER, INTERRUPT_OC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1_REGISTER) && defined(INTERRUPT_C1_BIT)
        case INTERRUPTS_C1:
            interrupt_bit_set( INTERRUPT_C1_REGISTER, INTERRUPT_C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DCI_REGISTER) && defined(INTERRUPT_DCI_BIT)
        case INTERRUPTS_DCI:
            interrupt_bit_set( INTERRUPT_DCI_REGISTER, INTERRUPT_DCI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6_REGISTER) && defined(INTERRUPT_IC6_BIT)
        case INTERRUPTS_IC6:
            interrupt_bit_set( INTERRUPT_IC6_REGISTER, INTERRUPT_IC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5_REGISTER) && defined(INTERRUPT_IC5_BIT)
        case INTERRUPTS_IC5:
            interrupt_bit_set( INTERRUPT_IC5_REGISTER, INTERRUPT_IC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4_REGISTER) && defined(INTERRUPT_IC4_BIT)
        case INTERRUPTS_IC4:
            interrupt_bit_set( INTERRUPT_IC4_REGISTER, INTERRUPT_IC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3_REGISTER) && defined(INTERRUPT_IC3_BIT)
        case INTERRUPTS_IC3:
            interrupt_bit_set( INTERRUPT_IC3_REGISTER, INTERRUPT_IC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2_REGISTER) && defined(INTERRUPT_SPI2_BIT)
        case INTERRUPTS_SPI2:
            interrupt_bit_set( INTERRUPT_SPI2_REGISTER, INTERRUPT_SPI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2_REGISTER) && defined(INTERRUPT_C2_BIT)
        case INTERRUPTS_C2:
            interrupt_bit_set( INTERRUPT_C2_REGISTER, INTERRUPT_C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT4_REGISTER) && defined(INTERRUPT_INT4_BIT)
        case INTERRUPTS_INT4:
            interrupt_bit_set( INTERRUPT_INT4_REGISTER, INTERRUPT_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_set( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC8_REGISTER) && defined(INTERRUPT_OC8_BIT)
        case INTERRUPTS_OC8:
            interrupt_bit_set( INTERRUPT_OC8_REGISTER, INTERRUPT_OC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC7_REGISTER) && defined(INTERRUPT_OC7_BIT)
        case INTERRUPTS_OC7:
            interrupt_bit_set( INTERRUPT_OC7_REGISTER, INTERRUPT_OC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC6_REGISTER) && defined(INTERRUPT_OC6_BIT)
        case INTERRUPTS_OC6:
            interrupt_bit_set( INTERRUPT_OC6_REGISTER, INTERRUPT_OC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC5_REGISTER) && defined(INTERRUPT_OC5_BIT)
        case INTERRUPTS_OC5:
            interrupt_bit_set( INTERRUPT_OC5_REGISTER, INTERRUPT_OC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTB_REGISTER) && defined(INTERRUPT_FLTB_BIT)
        case INTERRUPTS_FLTB:
            interrupt_bit_set( INTERRUPT_FLTB_REGISTER, INTERRUPT_FLTB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1_REGISTER) && defined(INTERRUPT_DMA1_BIT)
        case INTERRUPTS_DMA1:
            interrupt_bit_set( INTERRUPT_DMA1_REGISTER, INTERRUPT_DMA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_set( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1E_REGISTER) && defined(INTERRUPT_SPI1E_BIT)
        case INTERRUPTS_SPI1E:
            interrupt_bit_set( INTERRUPT_SPI1E_REGISTER, INTERRUPT_SPI1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA0_REGISTER) && defined(INTERRUPT_DMA0_BIT)
        case INTERRUPTS_DMA0:
            interrupt_bit_set( INTERRUPT_DMA0_REGISTER, INTERRUPT_DMA0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2_REGISTER) && defined(INTERRUPT_DMA2_BIT)
        case INTERRUPTS_DMA2:
            interrupt_bit_set( INTERRUPT_DMA2_REGISTER, INTERRUPT_DMA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD2_REGISTER) && defined(INTERRUPT_AD2_BIT)
        case INTERRUPTS_AD2:
            interrupt_bit_set( INTERRUPT_AD2_REGISTER, INTERRUPT_AD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM_REGISTER) && defined(INTERRUPT_CM_BIT)
        case INTERRUPTS_CM:
            interrupt_bit_set( INTERRUPT_CM_REGISTER, INTERRUPT_CM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C1_REGISTER) && defined(INTERRUPT_MI2C1_BIT)
        case INTERRUPTS_MI2C1:
            interrupt_bit_set( INTERRUPT_MI2C1_REGISTER, INTERRUPT_MI2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C1_REGISTER) && defined(INTERRUPT_SI2C1_BIT)
        case INTERRUPTS_SI2C1:
            interrupt_bit_set( INTERRUPT_SI2C1_REGISTER, INTERRUPT_SI2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T6_REGISTER) && defined(INTERRUPT_T6_BIT)
        case INTERRUPTS_T6:
            interrupt_bit_set( INTERRUPT_T6_REGISTER, INTERRUPT_T6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3_REGISTER) && defined(INTERRUPT_DMA3_BIT)
        case INTERRUPTS_DMA3:
            interrupt_bit_set( INTERRUPT_DMA3_REGISTER, INTERRUPT_DMA3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1RX_REGISTER) && defined(INTERRUPT_C1RX_BIT)
        case INTERRUPTS_C1RX:
            interrupt_bit_set( INTERRUPT_C1RX_REGISTER, INTERRUPT_C1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2E_REGISTER) && defined(INTERRUPT_SPI2E_BIT)
        case INTERRUPTS_SPI2E:
            interrupt_bit_set( INTERRUPT_SPI2E_REGISTER, INTERRUPT_SPI2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_set( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DCIE_REGISTER) && defined(INTERRUPT_DCIE_BIT)
        case INTERRUPTS_DCIE:
            interrupt_bit_set( INTERRUPT_DCIE_REGISTER, INTERRUPT_DCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI1_REGISTER) && defined(INTERRUPT_QEI1_BIT)
        case INTERRUPTS_QEI1:
            interrupt_bit_set( INTERRUPT_QEI1_REGISTER, INTERRUPT_QEI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2RX_REGISTER) && defined(INTERRUPT_C2RX_BIT)
        case INTERRUPTS_C2RX:
            interrupt_bit_set( INTERRUPT_C2RX_REGISTER, INTERRUPT_C2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T9_REGISTER) && defined(INTERRUPT_T9_BIT)
        case INTERRUPTS_T9:
            interrupt_bit_set( INTERRUPT_T9_REGISTER, INTERRUPT_T9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T8_REGISTER) && defined(INTERRUPT_T8_BIT)
        case INTERRUPTS_T8:
            interrupt_bit_set( INTERRUPT_T8_REGISTER, INTERRUPT_T8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C2_REGISTER) && defined(INTERRUPT_MI2C2_BIT)
        case INTERRUPTS_MI2C2:
            interrupt_bit_set( INTERRUPT_MI2C2_REGISTER, INTERRUPT_MI2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C2_REGISTER) && defined(INTERRUPT_SI2C2_BIT)
        case INTERRUPTS_SI2C2:
            interrupt_bit_set( INTERRUPT_SI2C2_REGISTER, INTERRUPT_SI2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T7_REGISTER) && defined(INTERRUPT_T7_BIT)
        case INTERRUPTS_T7:
            interrupt_bit_set( INTERRUPT_T7_REGISTER, INTERRUPT_T7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_set( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI2_REGISTER) && defined(INTERRUPT_QEI2_BIT)
        case INTERRUPTS_QEI2:
            interrupt_bit_set( INTERRUPT_QEI2_REGISTER, INTERRUPT_QEI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSESM_REGISTER) && defined(INTERRUPT_PSESM_BIT)
        case INTERRUPTS_PSESM:
            interrupt_bit_set( INTERRUPT_PSESM_REGISTER, INTERRUPT_PSESM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2TX_REGISTER) && defined(INTERRUPT_C2TX_BIT)
        case INTERRUPTS_C2TX:
            interrupt_bit_set( INTERRUPT_C2TX_REGISTER, INTERRUPT_C2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1TX_REGISTER) && defined(INTERRUPT_C1TX_BIT)
        case INTERRUPTS_C1TX:
            interrupt_bit_set( INTERRUPT_C1TX_REGISTER, INTERRUPT_C1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRC_REGISTER) && defined(INTERRUPT_CRC_BIT)
        case INTERRUPTS_CRC:
            interrupt_bit_set( INTERRUPT_CRC_REGISTER, INTERRUPT_CRC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_set( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_set( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3_REGISTER) && defined(INTERRUPT_SPI3_BIT)
        case INTERRUPTS_SPI3:
            interrupt_bit_set( INTERRUPT_SPI3_REGISTER, INTERRUPT_SPI3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3E_REGISTER) && defined(INTERRUPT_SPI3E_BIT)
        case INTERRUPTS_SPI3E:
            interrupt_bit_set( INTERRUPT_SPI3E_REGISTER, INTERRUPT_SPI3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4TX_REGISTER) && defined(INTERRUPT_U4TX_BIT)
        case INTERRUPTS_U4TX:
            interrupt_bit_set( INTERRUPT_U4TX_REGISTER, INTERRUPT_U4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4RX_REGISTER) && defined(INTERRUPT_U4RX_BIT)
        case INTERRUPTS_U4RX:
            interrupt_bit_set( INTERRUPT_U4RX_REGISTER, INTERRUPT_U4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_set( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3TX_REGISTER) && defined(INTERRUPT_U3TX_BIT)
        case INTERRUPTS_U3TX:
            interrupt_bit_set( INTERRUPT_U3TX_REGISTER, INTERRUPT_U3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3RX_REGISTER) && defined(INTERRUPT_U3RX_BIT)
        case INTERRUPTS_U3RX:
            interrupt_bit_set( INTERRUPT_U3RX_REGISTER, INTERRUPT_U3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_set( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM6_REGISTER) && defined(INTERRUPT_PWM6_BIT)
        case INTERRUPTS_PWM6:
            interrupt_bit_set( INTERRUPT_PWM6_REGISTER, INTERRUPT_PWM6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM5_REGISTER) && defined(INTERRUPT_PWM5_BIT)
        case INTERRUPTS_PWM5:
            interrupt_bit_set( INTERRUPT_PWM5_REGISTER, INTERRUPT_PWM5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_JTAG_REGISTER) && defined(INTERRUPT_JTAG_BIT)
        case INTERRUPTS_JTAG:
            interrupt_bit_set( INTERRUPT_JTAG_REGISTER, INTERRUPT_JTAG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ICDIFIE_REGISTER) && defined(INTERRUPT_ICDIFIE_BIT)
        case INTERRUPTS_ICDIFIE:
            interrupt_bit_set( INTERRUPT_ICDIFIE_REGISTER, INTERRUPT_ICDIFIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG3_REGISTER) && defined(INTERRUPT_PTG3_BIT)
        case INTERRUPTS_PTG3:
            interrupt_bit_set( INTERRUPT_PTG3_REGISTER, INTERRUPT_PTG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG2_REGISTER) && defined(INTERRUPT_PTG2_BIT)
        case INTERRUPTS_PTG2:
            interrupt_bit_set( INTERRUPT_PTG2_REGISTER, INTERRUPT_PTG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG1_REGISTER) && defined(INTERRUPT_PTG1_BIT)
        case INTERRUPTS_PTG1:
            interrupt_bit_set( INTERRUPT_PTG1_REGISTER, INTERRUPT_PTG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG0_REGISTER) && defined(INTERRUPT_PTG0_BIT)
        case INTERRUPTS_PTG0:
            interrupt_bit_set( INTERRUPT_PTG0_REGISTER, INTERRUPT_PTG0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTGWDT_REGISTER) && defined(INTERRUPT_PTGWDT_BIT)
        case INTERRUPTS_PTGWDT:
            interrupt_bit_set( INTERRUPT_PTGWDT_REGISTER, INTERRUPT_PTGWDT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTGSTEP_REGISTER) && defined(INTERRUPT_PTGSTEP_BIT)
        case INTERRUPTS_PTGSTEP:
            interrupt_bit_set( INTERRUPT_PTGSTEP_REGISTER, INTERRUPT_PTGSTEP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_set( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
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
        #if defined(INTERRUPT_ADC_REGISTER) && defined(INTERRUPT_ADC_BIT)
        case INTERRUPTS_ADC:
            interrupt_bit_set( INTERRUPT_ADC_REGISTER, INTERRUPT_ADC_BIT );
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
        #if defined(INTERRUPT_PSES_REGISTER) && defined(INTERRUPT_PSES_BIT)
        case INTERRUPTS_PSES:
            interrupt_bit_set( INTERRUPT_PSES_REGISTER, INTERRUPT_PSES_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3TX_REGISTER) && defined(INTERRUPT_SPI3TX_BIT)
        case INTERRUPTS_SPI3TX:
            interrupt_bit_set( INTERRUPT_SPI3TX_REGISTER, INTERRUPT_SPI3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3RX_REGISTER) && defined(INTERRUPT_SPI3RX_BIT)
        case INTERRUPTS_SPI3RX:
            interrupt_bit_set( INTERRUPT_SPI3RX_REGISTER, INTERRUPT_SPI3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM7_REGISTER) && defined(INTERRUPT_PWM7_BIT)
        case INTERRUPTS_PWM7:
            interrupt_bit_set( INTERRUPT_PWM7_REGISTER, INTERRUPT_PWM7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM8_REGISTER) && defined(INTERRUPT_PWM8_BIT)
        case INTERRUPTS_PWM8:
            interrupt_bit_set( INTERRUPT_PWM8_REGISTER, INTERRUPT_PWM8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN0_REGISTER) && defined(INTERRUPT_ADCAN0_BIT)
        case INTERRUPTS_ADCAN0:
            interrupt_bit_set( INTERRUPT_ADCAN0_REGISTER, INTERRUPT_ADCAN0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN1_REGISTER) && defined(INTERRUPT_ADCAN1_BIT)
        case INTERRUPTS_ADCAN1:
            interrupt_bit_set( INTERRUPT_ADCAN1_REGISTER, INTERRUPT_ADCAN1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN2_REGISTER) && defined(INTERRUPT_ADCAN2_BIT)
        case INTERRUPTS_ADCAN2:
            interrupt_bit_set( INTERRUPT_ADCAN2_REGISTER, INTERRUPT_ADCAN2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN3_REGISTER) && defined(INTERRUPT_ADCAN3_BIT)
        case INTERRUPTS_ADCAN3:
            interrupt_bit_set( INTERRUPT_ADCAN3_REGISTER, INTERRUPT_ADCAN3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN4_REGISTER) && defined(INTERRUPT_ADCAN4_BIT)
        case INTERRUPTS_ADCAN4:
            interrupt_bit_set( INTERRUPT_ADCAN4_REGISTER, INTERRUPT_ADCAN4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN6_REGISTER) && defined(INTERRUPT_ADCAN6_BIT)
        case INTERRUPTS_ADCAN6:
            interrupt_bit_set( INTERRUPT_ADCAN6_REGISTER, INTERRUPT_ADCAN6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN7_REGISTER) && defined(INTERRUPT_ADCAN7_BIT)
        case INTERRUPTS_ADCAN7:
            interrupt_bit_set( INTERRUPT_ADCAN7_REGISTER, INTERRUPT_ADCAN7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC1_REGISTER) && defined(INTERRUPT_CLC1_BIT)
        case INTERRUPTS_CLC1:
            interrupt_bit_set( INTERRUPT_CLC1_REGISTER, INTERRUPT_CLC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC2_REGISTER) && defined(INTERRUPT_CLC2_BIT)
        case INTERRUPTS_CLC2:
            interrupt_bit_set( INTERRUPT_CLC2_REGISTER, INTERRUPT_CLC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC3_REGISTER) && defined(INTERRUPT_CLC3_BIT)
        case INTERRUPTS_CLC3:
            interrupt_bit_set( INTERRUPT_CLC3_REGISTER, INTERRUPT_CLC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC4_REGISTER) && defined(INTERRUPT_CLC4_BIT)
        case INTERRUPTS_CLC4:
            interrupt_bit_set( INTERRUPT_CLC4_REGISTER, INTERRUPT_CLC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN8_REGISTER) && defined(INTERRUPT_ADCAN8_BIT)
        case INTERRUPTS_ADCAN8:
            interrupt_bit_set( INTERRUPT_ADCAN8_REGISTER, INTERRUPT_ADCAN8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN9_REGISTER) && defined(INTERRUPT_ADCAN9_BIT)
        case INTERRUPTS_ADCAN9:
            interrupt_bit_set( INTERRUPT_ADCAN9_REGISTER, INTERRUPT_ADCAN9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN10_REGISTER) && defined(INTERRUPT_ADCAN10_BIT)
        case INTERRUPTS_ADCAN10:
            interrupt_bit_set( INTERRUPT_ADCAN10_REGISTER, INTERRUPT_ADCAN10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN11_REGISTER) && defined(INTERRUPT_ADCAN11_BIT)
        case INTERRUPTS_ADCAN11:
            interrupt_bit_set( INTERRUPT_ADCAN11_REGISTER, INTERRUPT_ADCAN11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN12_REGISTER) && defined(INTERRUPT_ADCAN12_BIT)
        case INTERRUPTS_ADCAN12:
            interrupt_bit_set( INTERRUPT_ADCAN12_REGISTER, INTERRUPT_ADCAN12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN13_REGISTER) && defined(INTERRUPT_ADCAN13_BIT)
        case INTERRUPTS_ADCAN13:
            interrupt_bit_set( INTERRUPT_ADCAN13_REGISTER, INTERRUPT_ADCAN13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN14_REGISTER) && defined(INTERRUPT_ADCAN14_BIT)
        case INTERRUPTS_ADCAN14:
            interrupt_bit_set( INTERRUPT_ADCAN14_REGISTER, INTERRUPT_ADCAN14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN15_REGISTER) && defined(INTERRUPT_ADCAN15_BIT)
        case INTERRUPTS_ADCAN15:
            interrupt_bit_set( INTERRUPT_ADCAN15_REGISTER, INTERRUPT_ADCAN15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN16_REGISTER) && defined(INTERRUPT_ADCAN16_BIT)
        case INTERRUPTS_ADCAN16:
            interrupt_bit_set( INTERRUPT_ADCAN16_REGISTER, INTERRUPT_ADCAN16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN18_REGISTER) && defined(INTERRUPT_ADCAN18_BIT)
        case INTERRUPTS_ADCAN18:
            interrupt_bit_set( INTERRUPT_ADCAN18_REGISTER, INTERRUPT_ADCAN18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN19_REGISTER) && defined(INTERRUPT_ADCAN19_BIT)
        case INTERRUPTS_ADCAN19:
            interrupt_bit_set( INTERRUPT_ADCAN19_REGISTER, INTERRUPT_ADCAN19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN20_REGISTER) && defined(INTERRUPT_ADCAN20_BIT)
        case INTERRUPTS_ADCAN20:
            interrupt_bit_set( INTERRUPT_ADCAN20_REGISTER, INTERRUPT_ADCAN20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN21_REGISTER) && defined(INTERRUPT_ADCAN21_BIT)
        case INTERRUPTS_ADCAN21:
            interrupt_bit_set( INTERRUPT_ADCAN21_REGISTER, INTERRUPT_ADCAN21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1BC_REGISTER) && defined(INTERRUPT_I2C1BC_BIT)
        case INTERRUPTS_I2C1BC:
            interrupt_bit_set( INTERRUPT_I2C1BC_REGISTER, INTERRUPT_I2C1BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2BC_REGISTER) && defined(INTERRUPT_I2C2BC_BIT)
        case INTERRUPTS_I2C2BC:
            interrupt_bit_set( INTERRUPT_I2C2BC_REGISTER, INTERRUPT_I2C2BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCMP0_REGISTER) && defined(INTERRUPT_ADCMP0_BIT)
        case INTERRUPTS_ADCMP0:
            interrupt_bit_set( INTERRUPT_ADCMP0_REGISTER, INTERRUPT_ADCMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCMP1_REGISTER) && defined(INTERRUPT_ADCMP1_BIT)
        case INTERRUPTS_ADCMP1:
            interrupt_bit_set( INTERRUPT_ADCMP1_REGISTER, INTERRUPT_ADCMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFLTR0_REGISTER) && defined(INTERRUPT_ADFLTR0_BIT)
        case INTERRUPTS_ADFLTR0:
            interrupt_bit_set( INTERRUPT_ADFLTR0_REGISTER, INTERRUPT_ADFLTR0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFLTR1_REGISTER) && defined(INTERRUPT_ADFLTR1_BIT)
        case INTERRUPTS_ADFLTR1:
            interrupt_bit_set( INTERRUPT_ADFLTR1_REGISTER, INTERRUPT_ADFLTR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC0E_REGISTER) && defined(INTERRUPT_ADCC0E_BIT)
        case INTERRUPTS_ADCC0E:
            interrupt_bit_set( INTERRUPT_ADCC0E_REGISTER, INTERRUPT_ADCC0E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC1E_REGISTER) && defined(INTERRUPT_ADCC1E_BIT)
        case INTERRUPTS_ADCC1E:
            interrupt_bit_set( INTERRUPT_ADCC1E_REGISTER, INTERRUPT_ADCC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC2E_REGISTER) && defined(INTERRUPT_ADCC2E_BIT)
        case INTERRUPTS_ADCC2E:
            interrupt_bit_set( INTERRUPT_ADCC2E_REGISTER, INTERRUPT_ADCC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC3E_REGISTER) && defined(INTERRUPT_ADCC3E_BIT)
        case INTERRUPTS_ADCC3E:
            interrupt_bit_set( INTERRUPT_ADCC3E_REGISTER, INTERRUPT_ADCC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN17_REGISTER) && defined(INTERRUPT_ADCAN17_BIT)
        case INTERRUPTS_ADCAN17:
            interrupt_bit_set( INTERRUPT_ADCAN17_REGISTER, INTERRUPT_ADCAN17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN5_REGISTER) && defined(INTERRUPT_ADCAN5_BIT)
        case INTERRUPTS_ADCAN5:
            interrupt_bit_set( INTERRUPT_ADCAN5_REGISTER, INTERRUPT_ADCAN5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFL0_REGISTER) && defined(INTERRUPT_ADFL0_BIT)
        case INTERRUPTS_ADFL0:
            interrupt_bit_set( INTERRUPT_ADFL0_REGISTER, INTERRUPT_ADFL0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4_REGISTER) && defined(INTERRUPT_DMA4_BIT)
        case INTERRUPTS_DMA4:
            interrupt_bit_set( INTERRUPT_DMA4_REGISTER, INTERRUPT_DMA4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTC_REGISTER) && defined(INTERRUPT_RTC_BIT)
        case INTERRUPTS_RTC:
            interrupt_bit_set( INTERRUPT_RTC_REGISTER, INTERRUPT_RTC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5_REGISTER) && defined(INTERRUPT_DMA5_BIT)
        case INTERRUPTS_DMA5:
            interrupt_bit_set( INTERRUPT_DMA5_REGISTER, INTERRUPT_DMA5_BIT );
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
        #if defined(INTERRUPT_USB1_REGISTER) && defined(INTERRUPT_USB1_BIT)
        case INTERRUPTS_USB1:
            interrupt_bit_set( INTERRUPT_USB1_REGISTER, INTERRUPT_USB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC11_REGISTER) && defined(INTERRUPT_IC11_BIT)
        case INTERRUPTS_IC11:
            interrupt_bit_set( INTERRUPT_IC11_REGISTER, INTERRUPT_IC11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC11_REGISTER) && defined(INTERRUPT_OC11_BIT)
        case INTERRUPTS_OC11:
            interrupt_bit_set( INTERRUPT_OC11_REGISTER, INTERRUPT_OC11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC10_REGISTER) && defined(INTERRUPT_IC10_BIT)
        case INTERRUPTS_IC10:
            interrupt_bit_set( INTERRUPT_IC10_REGISTER, INTERRUPT_IC10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC10_REGISTER) && defined(INTERRUPT_OC10_BIT)
        case INTERRUPTS_OC10:
            interrupt_bit_set( INTERRUPT_OC10_REGISTER, INTERRUPT_OC10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4_REGISTER) && defined(INTERRUPT_SPI4_BIT)
        case INTERRUPTS_SPI4:
            interrupt_bit_set( INTERRUPT_SPI4_REGISTER, INTERRUPT_SPI4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4E_REGISTER) && defined(INTERRUPT_SPI4E_BIT)
        case INTERRUPTS_SPI4E:
            interrupt_bit_set( INTERRUPT_SPI4E_REGISTER, INTERRUPT_SPI4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA11_REGISTER) && defined(INTERRUPT_DMA11_BIT)
        case INTERRUPTS_DMA11:
            interrupt_bit_set( INTERRUPT_DMA11_REGISTER, INTERRUPT_DMA11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA10_REGISTER) && defined(INTERRUPT_DMA10_BIT)
        case INTERRUPTS_DMA10:
            interrupt_bit_set( INTERRUPT_DMA10_REGISTER, INTERRUPT_DMA10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA9_REGISTER) && defined(INTERRUPT_DMA9_BIT)
        case INTERRUPTS_DMA9:
            interrupt_bit_set( INTERRUPT_DMA9_REGISTER, INTERRUPT_DMA9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA8_REGISTER) && defined(INTERRUPT_DMA8_BIT)
        case INTERRUPTS_DMA8:
            interrupt_bit_set( INTERRUPT_DMA8_REGISTER, INTERRUPT_DMA8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC16_REGISTER) && defined(INTERRUPT_IC16_BIT)
        case INTERRUPTS_IC16:
            interrupt_bit_set( INTERRUPT_IC16_REGISTER, INTERRUPT_IC16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC16_REGISTER) && defined(INTERRUPT_OC16_BIT)
        case INTERRUPTS_OC16:
            interrupt_bit_set( INTERRUPT_OC16_REGISTER, INTERRUPT_OC16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC15_REGISTER) && defined(INTERRUPT_IC15_BIT)
        case INTERRUPTS_IC15:
            interrupt_bit_set( INTERRUPT_IC15_REGISTER, INTERRUPT_IC15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC15_REGISTER) && defined(INTERRUPT_OC15_BIT)
        case INTERRUPTS_OC15:
            interrupt_bit_set( INTERRUPT_OC15_REGISTER, INTERRUPT_OC15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC14_REGISTER) && defined(INTERRUPT_IC14_BIT)
        case INTERRUPTS_IC14:
            interrupt_bit_set( INTERRUPT_IC14_REGISTER, INTERRUPT_IC14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC14_REGISTER) && defined(INTERRUPT_OC14_BIT)
        case INTERRUPTS_OC14:
            interrupt_bit_set( INTERRUPT_OC14_REGISTER, INTERRUPT_OC14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC13_REGISTER) && defined(INTERRUPT_IC13_BIT)
        case INTERRUPTS_IC13:
            interrupt_bit_set( INTERRUPT_IC13_REGISTER, INTERRUPT_IC13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC13_REGISTER) && defined(INTERRUPT_OC13_BIT)
        case INTERRUPTS_OC13:
            interrupt_bit_set( INTERRUPT_OC13_REGISTER, INTERRUPT_OC13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA14_REGISTER) && defined(INTERRUPT_DMA14_BIT)
        case INTERRUPTS_DMA14:
            interrupt_bit_set( INTERRUPT_DMA14_REGISTER, INTERRUPT_DMA14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA13_REGISTER) && defined(INTERRUPT_DMA13_BIT)
        case INTERRUPTS_DMA13:
            interrupt_bit_set( INTERRUPT_DMA13_REGISTER, INTERRUPT_DMA13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA12_REGISTER) && defined(INTERRUPT_DMA12_BIT)
        case INTERRUPTS_DMA12:
            interrupt_bit_set( INTERRUPT_DMA12_REGISTER, INTERRUPT_DMA12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC12_REGISTER) && defined(INTERRUPT_IC12_BIT)
        case INTERRUPTS_IC12:
            interrupt_bit_set( INTERRUPT_IC12_REGISTER, INTERRUPT_IC12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC12_REGISTER) && defined(INTERRUPT_OC12_BIT)
        case INTERRUPTS_OC12:
            interrupt_bit_set( INTERRUPT_OC12_REGISTER, INTERRUPT_OC12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP_REGISTER) && defined(INTERRUPT_CMP_BIT)
        case INTERRUPTS_CMP:
            interrupt_bit_set( INTERRUPT_CMP_REGISTER, INTERRUPT_CMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ICD_REGISTER) && defined(INTERRUPT_ICD_BIT)
        case INTERRUPTS_ICD:
            interrupt_bit_set( INTERRUPT_ICD_REGISTER, INTERRUPT_ICD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT1E_REGISTER) && defined(INTERRUPT_SENT1E_BIT)
        case INTERRUPTS_SENT1E:
            interrupt_bit_set( INTERRUPT_SENT1E_REGISTER, INTERRUPT_SENT1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT1_REGISTER) && defined(INTERRUPT_SENT1_BIT)
        case INTERRUPTS_SENT1:
            interrupt_bit_set( INTERRUPT_SENT1_REGISTER, INTERRUPT_SENT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT2E_REGISTER) && defined(INTERRUPT_SENT2E_BIT)
        case INTERRUPTS_SENT2E:
            interrupt_bit_set( INTERRUPT_SENT2E_REGISTER, INTERRUPT_SENT2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT2_REGISTER) && defined(INTERRUPT_SENT2_BIT)
        case INTERRUPTS_SENT2:
            interrupt_bit_set( INTERRUPT_SENT2_REGISTER, INTERRUPT_SENT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCSBE_REGISTER) && defined(INTERRUPT_ECCSBE_BIT)
        case INTERRUPTS_ECCSBE:
            interrupt_bit_set( INTERRUPT_ECCSBE_REGISTER, INTERRUPT_ECCSBE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP6_REGISTER) && defined(INTERRUPT_ADCP6_BIT)
        case INTERRUPTS_ADCP6:
            interrupt_bit_set( INTERRUPT_ADCP6_REGISTER, INTERRUPT_ADCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1L_REGISTER) && defined(INTERRUPT_DAC1L_BIT)
        case INTERRUPTS_DAC1L:
            interrupt_bit_set( INTERRUPT_DAC1L_REGISTER, INTERRUPT_DAC1L_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1R_REGISTER) && defined(INTERRUPT_DAC1R_BIT)
        case INTERRUPTS_DAC1R:
            interrupt_bit_set( INTERRUPT_DAC1R_REGISTER, INTERRUPT_DAC1R_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA1_REGISTER) && defined(INTERRUPT_FLTA1_BIT)
        case INTERRUPTS_FLTA1:
            interrupt_bit_set( INTERRUPT_FLTA1_REGISTER, INTERRUPT_FLTA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA2_REGISTER) && defined(INTERRUPT_FLTA2_BIT)
        case INTERRUPTS_FLTA2:
            interrupt_bit_set( INTERRUPT_FLTA2_REGISTER, INTERRUPT_FLTA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTB1_REGISTER) && defined(INTERRUPT_FLTB1_BIT)
        case INTERRUPTS_FLTB1:
            interrupt_bit_set( INTERRUPT_FLTB1_REGISTER, INTERRUPT_FLTB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP12_REGISTER) && defined(INTERRUPT_ADCP12_BIT)
        case INTERRUPTS_ADCP12:
            interrupt_bit_set( INTERRUPT_ADCP12_REGISTER, INTERRUPT_ADCP12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP7_REGISTER) && defined(INTERRUPT_ADCP7_BIT)
        case INTERRUPTS_ADCP7:
            interrupt_bit_set( INTERRUPT_ADCP7_REGISTER, INTERRUPT_ADCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP8_REGISTER) && defined(INTERRUPT_ADCP8_BIT)
        case INTERRUPTS_ADCP8:
            interrupt_bit_set( INTERRUPT_ADCP8_REGISTER, INTERRUPT_ADCP8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP11_REGISTER) && defined(INTERRUPT_ADCP11_BIT)
        case INTERRUPTS_ADCP11:
            interrupt_bit_set( INTERRUPT_ADCP11_REGISTER, INTERRUPT_ADCP11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP10_REGISTER) && defined(INTERRUPT_ADCP10_BIT)
        case INTERRUPTS_ADCP10:
            interrupt_bit_set( INTERRUPT_ADCP10_REGISTER, INTERRUPT_ADCP10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP9_REGISTER) && defined(INTERRUPT_ADCP9_BIT)
        case INTERRUPTS_ADCP9:
            interrupt_bit_set( INTERRUPT_ADCP9_REGISTER, INTERRUPT_ADCP9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM9_REGISTER) && defined(INTERRUPT_PWM9_BIT)
        case INTERRUPTS_PWM9:
            interrupt_bit_set( INTERRUPT_PWM9_REGISTER, INTERRUPT_PWM9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF1_REGISTER) && defined(INTERRUPT_SPF1_BIT)
        case INTERRUPTS_SPF1:
            interrupt_bit_set( INTERRUPT_SPF1_REGISTER, INTERRUPT_SPF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLVD_REGISTER) && defined(INTERRUPT_HLVD_BIT)
        case INTERRUPTS_HLVD:
            interrupt_bit_set( INTERRUPT_HLVD_REGISTER, INTERRUPT_HLVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1ER_REGISTER) && defined(INTERRUPT_U1ER_BIT)
        case INTERRUPTS_U1ER:
            interrupt_bit_set( INTERRUPT_U1ER_REGISTER, INTERRUPT_U1ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP2_REGISTER) && defined(INTERRUPT_CCP2_BIT)
        case INTERRUPTS_CCP2:
            interrupt_bit_set( INTERRUPT_CCP2_REGISTER, INTERRUPT_CCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP1_REGISTER) && defined(INTERRUPT_CCP1_BIT)
        case INTERRUPTS_CCP1:
            interrupt_bit_set( INTERRUPT_CCP1_REGISTER, INTERRUPT_CCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL1_REGISTER) && defined(INTERRUPT_BCL1_BIT)
        case INTERRUPTS_BCL1:
            interrupt_bit_set( INTERRUPT_BCL1_REGISTER, INTERRUPT_BCL1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP1_REGISTER) && defined(INTERRUPT_SSP1_BIT)
        case INTERRUPTS_SSP1:
            interrupt_bit_set( INTERRUPT_SSP1_REGISTER, INTERRUPT_SSP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3G_REGISTER) && defined(INTERRUPT_T3G_BIT)
        case INTERRUPTS_T3G:
            interrupt_bit_set( INTERRUPT_T3G_REGISTER, INTERRUPT_T3G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ULPWU_REGISTER) && defined(INTERRUPT_ULPWU_BIT)
        case INTERRUPTS_ULPWU:
            interrupt_bit_set( INTERRUPT_ULPWU_REGISTER, INTERRUPT_ULPWU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2ER_REGISTER) && defined(INTERRUPT_U2ER_BIT)
        case INTERRUPTS_U2ER:
            interrupt_bit_set( INTERRUPT_U2ER_REGISTER, INTERRUPT_U2ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP3_REGISTER) && defined(INTERRUPT_CCP3_BIT)
        case INTERRUPTS_CCP3:
            interrupt_bit_set( INTERRUPT_CCP3_REGISTER, INTERRUPT_CCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL2_REGISTER) && defined(INTERRUPT_BCL2_BIT)
        case INTERRUPTS_BCL2:
            interrupt_bit_set( INTERRUPT_BCL2_REGISTER, INTERRUPT_BCL2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP2_REGISTER) && defined(INTERRUPT_SSP2_BIT)
        case INTERRUPTS_SSP2:
            interrupt_bit_set( INTERRUPT_SSP2_REGISTER, INTERRUPT_SSP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT2_REGISTER) && defined(INTERRUPT_CCT2_BIT)
        case INTERRUPTS_CCT2:
            interrupt_bit_set( INTERRUPT_CCT2_REGISTER, INTERRUPT_CCT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT1_REGISTER) && defined(INTERRUPT_CCT1_BIT)
        case INTERRUPTS_CCT1:
            interrupt_bit_set( INTERRUPT_CCT1_REGISTER, INTERRUPT_CCT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP4_REGISTER) && defined(INTERRUPT_CCP4_BIT)
        case INTERRUPTS_CCP4:
            interrupt_bit_set( INTERRUPT_CCP4_REGISTER, INTERRUPT_CCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT4_REGISTER) && defined(INTERRUPT_CCT4_BIT)
        case INTERRUPTS_CCT4:
            interrupt_bit_set( INTERRUPT_CCT4_REGISTER, INTERRUPT_CCT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT3_REGISTER) && defined(INTERRUPT_CCT3_BIT)
        case INTERRUPTS_CCT3:
            interrupt_bit_set( INTERRUPT_CCT3_REGISTER, INTERRUPT_CCT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP5_REGISTER) && defined(INTERRUPT_CCP5_BIT)
        case INTERRUPTS_CCP5:
            interrupt_bit_set( INTERRUPT_CCP5_REGISTER, INTERRUPT_CCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT5_REGISTER) && defined(INTERRUPT_CCT5_BIT)
        case INTERRUPTS_CCT5:
            interrupt_bit_set( INTERRUPT_CCT5_REGISTER, INTERRUPT_CCT5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC2_REGISTER) && defined(INTERRUPT_DAC2_BIT)
        case INTERRUPTS_DAC2:
            interrupt_bit_set( INTERRUPT_DAC2_REGISTER, INTERRUPT_DAC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1_REGISTER) && defined(INTERRUPT_DAC1_BIT)
        case INTERRUPTS_DAC1:
            interrupt_bit_set( INTERRUPT_DAC1_REGISTER, INTERRUPT_DAC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF2_REGISTER) && defined(INTERRUPT_SPF2_BIT)
        case INTERRUPTS_SPF2:
            interrupt_bit_set( INTERRUPT_SPF2_REGISTER, INTERRUPT_SPF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IOC_REGISTER) && defined(INTERRUPT_IOC_BIT)
        case INTERRUPTS_IOC:
            interrupt_bit_set( INTERRUPT_IOC_REGISTER, INTERRUPT_IOC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP6_REGISTER) && defined(INTERRUPT_CCP6_BIT)
        case INTERRUPTS_CCP6:
            interrupt_bit_set( INTERRUPT_CCP6_REGISTER, INTERRUPT_CCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT6_REGISTER) && defined(INTERRUPT_CCT6_BIT)
        case INTERRUPTS_CCT6:
            interrupt_bit_set( INTERRUPT_CCT6_REGISTER, INTERRUPT_CCT6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT7_REGISTER) && defined(INTERRUPT_CCT7_BIT)
        case INTERRUPTS_CCT7:
            interrupt_bit_set( INTERRUPT_CCT7_REGISTER, INTERRUPT_CCT7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C3_REGISTER) && defined(INTERRUPT_SI2C3_BIT)
        case INTERRUPTS_SI2C3:
            interrupt_bit_set( INTERRUPT_SI2C3_REGISTER, INTERRUPT_SI2C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C3_REGISTER) && defined(INTERRUPT_MI2C3_BIT)
        case INTERRUPTS_MI2C3:
            interrupt_bit_set( INTERRUPT_MI2C3_REGISTER, INTERRUPT_MI2C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP7_REGISTER) && defined(INTERRUPT_CCP7_BIT)
        case INTERRUPTS_CCP7:
            interrupt_bit_set( INTERRUPT_CCP7_REGISTER, INTERRUPT_CCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3ER_REGISTER) && defined(INTERRUPT_U3ER_BIT)
        case INTERRUPTS_U3ER:
            interrupt_bit_set( INTERRUPT_U3ER_REGISTER, INTERRUPT_U3ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4ER_REGISTER) && defined(INTERRUPT_U4ER_BIT)
        case INTERRUPTS_U4ER:
            interrupt_bit_set( INTERRUPT_U4ER_REGISTER, INTERRUPT_U4ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FST_REGISTER) && defined(INTERRUPT_FST_BIT)
        case INTERRUPTS_FST:
            interrupt_bit_set( INTERRUPT_FST_REGISTER, INTERRUPT_FST_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3BC_REGISTER) && defined(INTERRUPT_I2C3BC_BIT)
        case INTERRUPTS_I2C3BC:
            interrupt_bit_set( INTERRUPT_I2C3BC_REGISTER, INTERRUPT_I2C3BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCCTS_REGISTER) && defined(INTERRUPT_RTCCTS_BIT)
        case INTERRUPTS_RTCCTS:
            interrupt_bit_set( INTERRUPT_RTCCTS_REGISTER, INTERRUPT_RTCCTS_BIT );
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
        #if defined(INTERRUPT_U5ER_REGISTER) && defined(INTERRUPT_U5ER_BIT)
        case INTERRUPTS_U5ER:
            interrupt_bit_set( INTERRUPT_U5ER_REGISTER, INTERRUPT_U5ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6RX_REGISTER) && defined(INTERRUPT_U6RX_BIT)
        case INTERRUPTS_U6RX:
            interrupt_bit_set( INTERRUPT_U6RX_REGISTER, INTERRUPT_U6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6TX_REGISTER) && defined(INTERRUPT_U6TX_BIT)
        case INTERRUPTS_U6TX:
            interrupt_bit_set( INTERRUPT_U6TX_REGISTER, INTERRUPT_U6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6ER_REGISTER) && defined(INTERRUPT_U6ER_BIT)
        case INTERRUPTS_U6ER:
            interrupt_bit_set( INTERRUPT_U6ER_REGISTER, INTERRUPT_U6ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF3_REGISTER) && defined(INTERRUPT_SPF3_BIT)
        case INTERRUPTS_SPF3:
            interrupt_bit_set( INTERRUPT_SPF3_REGISTER, INTERRUPT_SPF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GFX1_REGISTER) && defined(INTERRUPT_GFX1_BIT)
        case INTERRUPTS_GFX1:
            interrupt_bit_set( INTERRUPT_GFX1_REGISTER, INTERRUPT_GFX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYFREE_REGISTER) && defined(INTERRUPT_CRYFREE_BIT)
        case INTERRUPTS_CRYFREE:
            interrupt_bit_set( INTERRUPT_CRYFREE_REGISTER, INTERRUPT_CRYFREE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYROLL_REGISTER) && defined(INTERRUPT_CRYROLL_BIT)
        case INTERRUPTS_CRYROLL:
            interrupt_bit_set( INTERRUPT_CRYROLL_REGISTER, INTERRUPT_CRYROLL_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYDN_REGISTER) && defined(INTERRUPT_CRYDN_BIT)
        case INTERRUPTS_CRYDN:
            interrupt_bit_set( INTERRUPT_CRYDN_REGISTER, INTERRUPT_CRYDN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_KEYSTR_REGISTER) && defined(INTERRUPT_KEYSTR_BIT)
        case INTERRUPTS_KEYSTR:
            interrupt_bit_set( INTERRUPT_KEYSTR_REGISTER, INTERRUPT_KEYSTR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCD_REGISTER) && defined(INTERRUPT_LCD_BIT)
        case INTERRUPTS_LCD:
            interrupt_bit_set( INTERRUPT_LCD_REGISTER, INTERRUPT_LCD_BIT );
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
        #if defined(INTERRUPT_ECC_REGISTER) && defined(INTERRUPT_ECC_BIT)
        case INTERRUPTS_ECC:
            interrupt_bit_set( INTERRUPT_ECC_REGISTER, INTERRUPT_ECC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SDA1_REGISTER) && defined(INTERRUPT_SDA1_BIT)
        case INTERRUPTS_SDA1:
            interrupt_bit_set( INTERRUPT_SDA1_REGISTER, INTERRUPT_SDA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AMP2_REGISTER) && defined(INTERRUPT_AMP2_BIT)
        case INTERRUPTS_AMP2:
            interrupt_bit_set( INTERRUPT_AMP2_REGISTER, INTERRUPT_AMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AMP1_REGISTER) && defined(INTERRUPT_AMP1_BIT)
        case INTERRUPTS_AMP1:
            interrupt_bit_set( INTERRUPT_AMP1_REGISTER, INTERRUPT_AMP1_BIT );
            break;
        #endif

        default:
            break;
    }
}

void interrupt_disable( int interrupt ) {
    switch ( interrupt ) {
        #if defined(INTERRUPT_MI2C_REGISTER) && defined(INTERRUPT_MI2C_BIT)
        case INTERRUPTS_MI2C:
            interrupt_bit_clear( INTERRUPT_MI2C_REGISTER, INTERRUPT_MI2C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C_REGISTER) && defined(INTERRUPT_SI2C_BIT)
        case INTERRUPTS_SI2C:
            interrupt_bit_clear( INTERRUPT_SI2C_REGISTER, INTERRUPT_SI2C_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NVM_REGISTER) && defined(INTERRUPT_NVM_BIT)
        case INTERRUPTS_NVM:
            interrupt_bit_clear( INTERRUPT_NVM_REGISTER, INTERRUPT_NVM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD_REGISTER) && defined(INTERRUPT_AD_BIT)
        case INTERRUPTS_AD:
            interrupt_bit_clear( INTERRUPT_AD_REGISTER, INTERRUPT_AD_BIT );
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
        #if defined(INTERRUPT_SPI1_REGISTER) && defined(INTERRUPT_SPI1_BIT)
        case INTERRUPTS_SPI1:
            interrupt_bit_clear( INTERRUPT_SPI1_REGISTER, INTERRUPT_SPI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_clear( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_clear( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC1_REGISTER) && defined(INTERRUPT_OC1_BIT)
        case INTERRUPTS_OC1:
            interrupt_bit_clear( INTERRUPT_OC1_REGISTER, INTERRUPT_OC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_clear( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC2_REGISTER) && defined(INTERRUPT_AC2_BIT)
        case INTERRUPTS_AC2:
            interrupt_bit_clear( INTERRUPT_AC2_REGISTER, INTERRUPT_AC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC1_REGISTER) && defined(INTERRUPT_AC1_BIT)
        case INTERRUPTS_AC1:
            interrupt_bit_clear( INTERRUPT_AC1_REGISTER, INTERRUPT_AC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CN_REGISTER) && defined(INTERRUPT_CN_BIT)
        case INTERRUPTS_CN:
            interrupt_bit_clear( INTERRUPT_CN_REGISTER, INTERRUPT_CN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2_REGISTER) && defined(INTERRUPT_PWM2_BIT)
        case INTERRUPTS_PWM2:
            interrupt_bit_clear( INTERRUPT_PWM2_REGISTER, INTERRUPT_PWM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1_REGISTER) && defined(INTERRUPT_PWM1_BIT)
        case INTERRUPTS_PWM1:
            interrupt_bit_clear( INTERRUPT_PWM1_REGISTER, INTERRUPT_PWM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSEM_REGISTER) && defined(INTERRUPT_PSEM_BIT)
        case INTERRUPTS_PSEM:
            interrupt_bit_clear( INTERRUPT_PSEM_REGISTER, INTERRUPT_PSEM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_clear( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_clear( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP2_REGISTER) && defined(INTERRUPT_ADCP2_BIT)
        case INTERRUPTS_ADCP2:
            interrupt_bit_clear( INTERRUPT_ADCP2_REGISTER, INTERRUPT_ADCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP1_REGISTER) && defined(INTERRUPT_ADCP1_BIT)
        case INTERRUPTS_ADCP1:
            interrupt_bit_clear( INTERRUPT_ADCP1_REGISTER, INTERRUPT_ADCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP0_REGISTER) && defined(INTERRUPT_ADCP0_BIT)
        case INTERRUPTS_ADCP0:
            interrupt_bit_clear( INTERRUPT_ADCP0_REGISTER, INTERRUPT_ADCP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3_REGISTER) && defined(INTERRUPT_T3_BIT)
        case INTERRUPTS_T3:
            interrupt_bit_clear( INTERRUPT_T3_REGISTER, INTERRUPT_T3_BIT );
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
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_clear( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC8_REGISTER) && defined(INTERRUPT_IC8_BIT)
        case INTERRUPTS_IC8:
            interrupt_bit_clear( INTERRUPT_IC8_REGISTER, INTERRUPT_IC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC7_REGISTER) && defined(INTERRUPT_IC7_BIT)
        case INTERRUPTS_IC7:
            interrupt_bit_clear( INTERRUPT_IC7_REGISTER, INTERRUPT_IC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA_REGISTER) && defined(INTERRUPT_FLTA_BIT)
        case INTERRUPTS_FLTA:
            interrupt_bit_clear( INTERRUPT_FLTA_REGISTER, INTERRUPT_FLTA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI_REGISTER) && defined(INTERRUPT_QEI_BIT)
        case INTERRUPTS_QEI:
            interrupt_bit_clear( INTERRUPT_QEI_REGISTER, INTERRUPT_QEI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM_REGISTER) && defined(INTERRUPT_PWM_BIT)
        case INTERRUPTS_PWM:
            interrupt_bit_clear( INTERRUPT_PWM_REGISTER, INTERRUPT_PWM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LVD_REGISTER) && defined(INTERRUPT_LVD_BIT)
        case INTERRUPTS_LVD:
            interrupt_bit_clear( INTERRUPT_LVD_REGISTER, INTERRUPT_LVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC3_REGISTER) && defined(INTERRUPT_AC3_BIT)
        case INTERRUPTS_AC3:
            interrupt_bit_clear( INTERRUPT_AC3_REGISTER, INTERRUPT_AC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM4_REGISTER) && defined(INTERRUPT_PWM4_BIT)
        case INTERRUPTS_PWM4:
            interrupt_bit_clear( INTERRUPT_PWM4_REGISTER, INTERRUPT_PWM4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3_REGISTER) && defined(INTERRUPT_PWM3_BIT)
        case INTERRUPTS_PWM3:
            interrupt_bit_clear( INTERRUPT_PWM3_REGISTER, INTERRUPT_PWM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP3_REGISTER) && defined(INTERRUPT_ADCP3_BIT)
        case INTERRUPTS_ADCP3:
            interrupt_bit_clear( INTERRUPT_ADCP3_REGISTER, INTERRUPT_ADCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AC4_REGISTER) && defined(INTERRUPT_AC4_BIT)
        case INTERRUPTS_AC4:
            interrupt_bit_clear( INTERRUPT_AC4_REGISTER, INTERRUPT_AC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP5_REGISTER) && defined(INTERRUPT_ADCP5_BIT)
        case INTERRUPTS_ADCP5:
            interrupt_bit_clear( INTERRUPT_ADCP5_REGISTER, INTERRUPT_ADCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP4_REGISTER) && defined(INTERRUPT_ADCP4_BIT)
        case INTERRUPTS_ADCP4:
            interrupt_bit_clear( INTERRUPT_ADCP4_REGISTER, INTERRUPT_ADCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T5_REGISTER) && defined(INTERRUPT_T5_BIT)
        case INTERRUPTS_T5:
            interrupt_bit_clear( INTERRUPT_T5_REGISTER, INTERRUPT_T5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T4_REGISTER) && defined(INTERRUPT_T4_BIT)
        case INTERRUPTS_T4:
            interrupt_bit_clear( INTERRUPT_T4_REGISTER, INTERRUPT_T4_BIT );
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
        #if defined(INTERRUPT_OC4_REGISTER) && defined(INTERRUPT_OC4_BIT)
        case INTERRUPTS_OC4:
            interrupt_bit_clear( INTERRUPT_OC4_REGISTER, INTERRUPT_OC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC3_REGISTER) && defined(INTERRUPT_OC3_BIT)
        case INTERRUPTS_OC3:
            interrupt_bit_clear( INTERRUPT_OC3_REGISTER, INTERRUPT_OC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1_REGISTER) && defined(INTERRUPT_C1_BIT)
        case INTERRUPTS_C1:
            interrupt_bit_clear( INTERRUPT_C1_REGISTER, INTERRUPT_C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DCI_REGISTER) && defined(INTERRUPT_DCI_BIT)
        case INTERRUPTS_DCI:
            interrupt_bit_clear( INTERRUPT_DCI_REGISTER, INTERRUPT_DCI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC6_REGISTER) && defined(INTERRUPT_IC6_BIT)
        case INTERRUPTS_IC6:
            interrupt_bit_clear( INTERRUPT_IC6_REGISTER, INTERRUPT_IC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC5_REGISTER) && defined(INTERRUPT_IC5_BIT)
        case INTERRUPTS_IC5:
            interrupt_bit_clear( INTERRUPT_IC5_REGISTER, INTERRUPT_IC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC4_REGISTER) && defined(INTERRUPT_IC4_BIT)
        case INTERRUPTS_IC4:
            interrupt_bit_clear( INTERRUPT_IC4_REGISTER, INTERRUPT_IC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3_REGISTER) && defined(INTERRUPT_IC3_BIT)
        case INTERRUPTS_IC3:
            interrupt_bit_clear( INTERRUPT_IC3_REGISTER, INTERRUPT_IC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2_REGISTER) && defined(INTERRUPT_SPI2_BIT)
        case INTERRUPTS_SPI2:
            interrupt_bit_clear( INTERRUPT_SPI2_REGISTER, INTERRUPT_SPI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2_REGISTER) && defined(INTERRUPT_C2_BIT)
        case INTERRUPTS_C2:
            interrupt_bit_clear( INTERRUPT_C2_REGISTER, INTERRUPT_C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT4_REGISTER) && defined(INTERRUPT_INT4_BIT)
        case INTERRUPTS_INT4:
            interrupt_bit_clear( INTERRUPT_INT4_REGISTER, INTERRUPT_INT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_clear( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC8_REGISTER) && defined(INTERRUPT_OC8_BIT)
        case INTERRUPTS_OC8:
            interrupt_bit_clear( INTERRUPT_OC8_REGISTER, INTERRUPT_OC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC7_REGISTER) && defined(INTERRUPT_OC7_BIT)
        case INTERRUPTS_OC7:
            interrupt_bit_clear( INTERRUPT_OC7_REGISTER, INTERRUPT_OC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC6_REGISTER) && defined(INTERRUPT_OC6_BIT)
        case INTERRUPTS_OC6:
            interrupt_bit_clear( INTERRUPT_OC6_REGISTER, INTERRUPT_OC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC5_REGISTER) && defined(INTERRUPT_OC5_BIT)
        case INTERRUPTS_OC5:
            interrupt_bit_clear( INTERRUPT_OC5_REGISTER, INTERRUPT_OC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTB_REGISTER) && defined(INTERRUPT_FLTB_BIT)
        case INTERRUPTS_FLTB:
            interrupt_bit_clear( INTERRUPT_FLTB_REGISTER, INTERRUPT_FLTB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1_REGISTER) && defined(INTERRUPT_DMA1_BIT)
        case INTERRUPTS_DMA1:
            interrupt_bit_clear( INTERRUPT_DMA1_REGISTER, INTERRUPT_DMA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_clear( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1E_REGISTER) && defined(INTERRUPT_SPI1E_BIT)
        case INTERRUPTS_SPI1E:
            interrupt_bit_clear( INTERRUPT_SPI1E_REGISTER, INTERRUPT_SPI1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA0_REGISTER) && defined(INTERRUPT_DMA0_BIT)
        case INTERRUPTS_DMA0:
            interrupt_bit_clear( INTERRUPT_DMA0_REGISTER, INTERRUPT_DMA0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2_REGISTER) && defined(INTERRUPT_DMA2_BIT)
        case INTERRUPTS_DMA2:
            interrupt_bit_clear( INTERRUPT_DMA2_REGISTER, INTERRUPT_DMA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD2_REGISTER) && defined(INTERRUPT_AD2_BIT)
        case INTERRUPTS_AD2:
            interrupt_bit_clear( INTERRUPT_AD2_REGISTER, INTERRUPT_AD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM_REGISTER) && defined(INTERRUPT_CM_BIT)
        case INTERRUPTS_CM:
            interrupt_bit_clear( INTERRUPT_CM_REGISTER, INTERRUPT_CM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C1_REGISTER) && defined(INTERRUPT_MI2C1_BIT)
        case INTERRUPTS_MI2C1:
            interrupt_bit_clear( INTERRUPT_MI2C1_REGISTER, INTERRUPT_MI2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C1_REGISTER) && defined(INTERRUPT_SI2C1_BIT)
        case INTERRUPTS_SI2C1:
            interrupt_bit_clear( INTERRUPT_SI2C1_REGISTER, INTERRUPT_SI2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T6_REGISTER) && defined(INTERRUPT_T6_BIT)
        case INTERRUPTS_T6:
            interrupt_bit_clear( INTERRUPT_T6_REGISTER, INTERRUPT_T6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3_REGISTER) && defined(INTERRUPT_DMA3_BIT)
        case INTERRUPTS_DMA3:
            interrupt_bit_clear( INTERRUPT_DMA3_REGISTER, INTERRUPT_DMA3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1RX_REGISTER) && defined(INTERRUPT_C1RX_BIT)
        case INTERRUPTS_C1RX:
            interrupt_bit_clear( INTERRUPT_C1RX_REGISTER, INTERRUPT_C1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2E_REGISTER) && defined(INTERRUPT_SPI2E_BIT)
        case INTERRUPTS_SPI2E:
            interrupt_bit_clear( INTERRUPT_SPI2E_REGISTER, INTERRUPT_SPI2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_clear( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DCIE_REGISTER) && defined(INTERRUPT_DCIE_BIT)
        case INTERRUPTS_DCIE:
            interrupt_bit_clear( INTERRUPT_DCIE_REGISTER, INTERRUPT_DCIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI1_REGISTER) && defined(INTERRUPT_QEI1_BIT)
        case INTERRUPTS_QEI1:
            interrupt_bit_clear( INTERRUPT_QEI1_REGISTER, INTERRUPT_QEI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2RX_REGISTER) && defined(INTERRUPT_C2RX_BIT)
        case INTERRUPTS_C2RX:
            interrupt_bit_clear( INTERRUPT_C2RX_REGISTER, INTERRUPT_C2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T9_REGISTER) && defined(INTERRUPT_T9_BIT)
        case INTERRUPTS_T9:
            interrupt_bit_clear( INTERRUPT_T9_REGISTER, INTERRUPT_T9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T8_REGISTER) && defined(INTERRUPT_T8_BIT)
        case INTERRUPTS_T8:
            interrupt_bit_clear( INTERRUPT_T8_REGISTER, INTERRUPT_T8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C2_REGISTER) && defined(INTERRUPT_MI2C2_BIT)
        case INTERRUPTS_MI2C2:
            interrupt_bit_clear( INTERRUPT_MI2C2_REGISTER, INTERRUPT_MI2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C2_REGISTER) && defined(INTERRUPT_SI2C2_BIT)
        case INTERRUPTS_SI2C2:
            interrupt_bit_clear( INTERRUPT_SI2C2_REGISTER, INTERRUPT_SI2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T7_REGISTER) && defined(INTERRUPT_T7_BIT)
        case INTERRUPTS_T7:
            interrupt_bit_clear( INTERRUPT_T7_REGISTER, INTERRUPT_T7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_clear( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_QEI2_REGISTER) && defined(INTERRUPT_QEI2_BIT)
        case INTERRUPTS_QEI2:
            interrupt_bit_clear( INTERRUPT_QEI2_REGISTER, INTERRUPT_QEI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSESM_REGISTER) && defined(INTERRUPT_PSESM_BIT)
        case INTERRUPTS_PSESM:
            interrupt_bit_clear( INTERRUPT_PSESM_REGISTER, INTERRUPT_PSESM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2TX_REGISTER) && defined(INTERRUPT_C2TX_BIT)
        case INTERRUPTS_C2TX:
            interrupt_bit_clear( INTERRUPT_C2TX_REGISTER, INTERRUPT_C2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1TX_REGISTER) && defined(INTERRUPT_C1TX_BIT)
        case INTERRUPTS_C1TX:
            interrupt_bit_clear( INTERRUPT_C1TX_REGISTER, INTERRUPT_C1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRC_REGISTER) && defined(INTERRUPT_CRC_BIT)
        case INTERRUPTS_CRC:
            interrupt_bit_clear( INTERRUPT_CRC_REGISTER, INTERRUPT_CRC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_clear( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_clear( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3_REGISTER) && defined(INTERRUPT_SPI3_BIT)
        case INTERRUPTS_SPI3:
            interrupt_bit_clear( INTERRUPT_SPI3_REGISTER, INTERRUPT_SPI3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3E_REGISTER) && defined(INTERRUPT_SPI3E_BIT)
        case INTERRUPTS_SPI3E:
            interrupt_bit_clear( INTERRUPT_SPI3E_REGISTER, INTERRUPT_SPI3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4TX_REGISTER) && defined(INTERRUPT_U4TX_BIT)
        case INTERRUPTS_U4TX:
            interrupt_bit_clear( INTERRUPT_U4TX_REGISTER, INTERRUPT_U4TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4RX_REGISTER) && defined(INTERRUPT_U4RX_BIT)
        case INTERRUPTS_U4RX:
            interrupt_bit_clear( INTERRUPT_U4RX_REGISTER, INTERRUPT_U4RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_clear( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3TX_REGISTER) && defined(INTERRUPT_U3TX_BIT)
        case INTERRUPTS_U3TX:
            interrupt_bit_clear( INTERRUPT_U3TX_REGISTER, INTERRUPT_U3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3RX_REGISTER) && defined(INTERRUPT_U3RX_BIT)
        case INTERRUPTS_U3RX:
            interrupt_bit_clear( INTERRUPT_U3RX_REGISTER, INTERRUPT_U3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_clear( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM6_REGISTER) && defined(INTERRUPT_PWM6_BIT)
        case INTERRUPTS_PWM6:
            interrupt_bit_clear( INTERRUPT_PWM6_REGISTER, INTERRUPT_PWM6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM5_REGISTER) && defined(INTERRUPT_PWM5_BIT)
        case INTERRUPTS_PWM5:
            interrupt_bit_clear( INTERRUPT_PWM5_REGISTER, INTERRUPT_PWM5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_JTAG_REGISTER) && defined(INTERRUPT_JTAG_BIT)
        case INTERRUPTS_JTAG:
            interrupt_bit_clear( INTERRUPT_JTAG_REGISTER, INTERRUPT_JTAG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ICDIFIE_REGISTER) && defined(INTERRUPT_ICDIFIE_BIT)
        case INTERRUPTS_ICDIFIE:
            interrupt_bit_clear( INTERRUPT_ICDIFIE_REGISTER, INTERRUPT_ICDIFIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG3_REGISTER) && defined(INTERRUPT_PTG3_BIT)
        case INTERRUPTS_PTG3:
            interrupt_bit_clear( INTERRUPT_PTG3_REGISTER, INTERRUPT_PTG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG2_REGISTER) && defined(INTERRUPT_PTG2_BIT)
        case INTERRUPTS_PTG2:
            interrupt_bit_clear( INTERRUPT_PTG2_REGISTER, INTERRUPT_PTG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG1_REGISTER) && defined(INTERRUPT_PTG1_BIT)
        case INTERRUPTS_PTG1:
            interrupt_bit_clear( INTERRUPT_PTG1_REGISTER, INTERRUPT_PTG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTG0_REGISTER) && defined(INTERRUPT_PTG0_BIT)
        case INTERRUPTS_PTG0:
            interrupt_bit_clear( INTERRUPT_PTG0_REGISTER, INTERRUPT_PTG0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTGWDT_REGISTER) && defined(INTERRUPT_PTGWDT_BIT)
        case INTERRUPTS_PTGWDT:
            interrupt_bit_clear( INTERRUPT_PTGWDT_REGISTER, INTERRUPT_PTGWDT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PTGSTEP_REGISTER) && defined(INTERRUPT_PTGSTEP_BIT)
        case INTERRUPTS_PTGSTEP:
            interrupt_bit_clear( INTERRUPT_PTGSTEP_REGISTER, INTERRUPT_PTGSTEP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_clear( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
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
        #if defined(INTERRUPT_ADC_REGISTER) && defined(INTERRUPT_ADC_BIT)
        case INTERRUPTS_ADC:
            interrupt_bit_clear( INTERRUPT_ADC_REGISTER, INTERRUPT_ADC_BIT );
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
        #if defined(INTERRUPT_PSES_REGISTER) && defined(INTERRUPT_PSES_BIT)
        case INTERRUPTS_PSES:
            interrupt_bit_clear( INTERRUPT_PSES_REGISTER, INTERRUPT_PSES_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3TX_REGISTER) && defined(INTERRUPT_SPI3TX_BIT)
        case INTERRUPTS_SPI3TX:
            interrupt_bit_clear( INTERRUPT_SPI3TX_REGISTER, INTERRUPT_SPI3TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI3RX_REGISTER) && defined(INTERRUPT_SPI3RX_BIT)
        case INTERRUPTS_SPI3RX:
            interrupt_bit_clear( INTERRUPT_SPI3RX_REGISTER, INTERRUPT_SPI3RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM7_REGISTER) && defined(INTERRUPT_PWM7_BIT)
        case INTERRUPTS_PWM7:
            interrupt_bit_clear( INTERRUPT_PWM7_REGISTER, INTERRUPT_PWM7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM8_REGISTER) && defined(INTERRUPT_PWM8_BIT)
        case INTERRUPTS_PWM8:
            interrupt_bit_clear( INTERRUPT_PWM8_REGISTER, INTERRUPT_PWM8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN0_REGISTER) && defined(INTERRUPT_ADCAN0_BIT)
        case INTERRUPTS_ADCAN0:
            interrupt_bit_clear( INTERRUPT_ADCAN0_REGISTER, INTERRUPT_ADCAN0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN1_REGISTER) && defined(INTERRUPT_ADCAN1_BIT)
        case INTERRUPTS_ADCAN1:
            interrupt_bit_clear( INTERRUPT_ADCAN1_REGISTER, INTERRUPT_ADCAN1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN2_REGISTER) && defined(INTERRUPT_ADCAN2_BIT)
        case INTERRUPTS_ADCAN2:
            interrupt_bit_clear( INTERRUPT_ADCAN2_REGISTER, INTERRUPT_ADCAN2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN3_REGISTER) && defined(INTERRUPT_ADCAN3_BIT)
        case INTERRUPTS_ADCAN3:
            interrupt_bit_clear( INTERRUPT_ADCAN3_REGISTER, INTERRUPT_ADCAN3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN4_REGISTER) && defined(INTERRUPT_ADCAN4_BIT)
        case INTERRUPTS_ADCAN4:
            interrupt_bit_clear( INTERRUPT_ADCAN4_REGISTER, INTERRUPT_ADCAN4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN6_REGISTER) && defined(INTERRUPT_ADCAN6_BIT)
        case INTERRUPTS_ADCAN6:
            interrupt_bit_clear( INTERRUPT_ADCAN6_REGISTER, INTERRUPT_ADCAN6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN7_REGISTER) && defined(INTERRUPT_ADCAN7_BIT)
        case INTERRUPTS_ADCAN7:
            interrupt_bit_clear( INTERRUPT_ADCAN7_REGISTER, INTERRUPT_ADCAN7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC1_REGISTER) && defined(INTERRUPT_CLC1_BIT)
        case INTERRUPTS_CLC1:
            interrupt_bit_clear( INTERRUPT_CLC1_REGISTER, INTERRUPT_CLC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC2_REGISTER) && defined(INTERRUPT_CLC2_BIT)
        case INTERRUPTS_CLC2:
            interrupt_bit_clear( INTERRUPT_CLC2_REGISTER, INTERRUPT_CLC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC3_REGISTER) && defined(INTERRUPT_CLC3_BIT)
        case INTERRUPTS_CLC3:
            interrupt_bit_clear( INTERRUPT_CLC3_REGISTER, INTERRUPT_CLC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC4_REGISTER) && defined(INTERRUPT_CLC4_BIT)
        case INTERRUPTS_CLC4:
            interrupt_bit_clear( INTERRUPT_CLC4_REGISTER, INTERRUPT_CLC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN8_REGISTER) && defined(INTERRUPT_ADCAN8_BIT)
        case INTERRUPTS_ADCAN8:
            interrupt_bit_clear( INTERRUPT_ADCAN8_REGISTER, INTERRUPT_ADCAN8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN9_REGISTER) && defined(INTERRUPT_ADCAN9_BIT)
        case INTERRUPTS_ADCAN9:
            interrupt_bit_clear( INTERRUPT_ADCAN9_REGISTER, INTERRUPT_ADCAN9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN10_REGISTER) && defined(INTERRUPT_ADCAN10_BIT)
        case INTERRUPTS_ADCAN10:
            interrupt_bit_clear( INTERRUPT_ADCAN10_REGISTER, INTERRUPT_ADCAN10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN11_REGISTER) && defined(INTERRUPT_ADCAN11_BIT)
        case INTERRUPTS_ADCAN11:
            interrupt_bit_clear( INTERRUPT_ADCAN11_REGISTER, INTERRUPT_ADCAN11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN12_REGISTER) && defined(INTERRUPT_ADCAN12_BIT)
        case INTERRUPTS_ADCAN12:
            interrupt_bit_clear( INTERRUPT_ADCAN12_REGISTER, INTERRUPT_ADCAN12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN13_REGISTER) && defined(INTERRUPT_ADCAN13_BIT)
        case INTERRUPTS_ADCAN13:
            interrupt_bit_clear( INTERRUPT_ADCAN13_REGISTER, INTERRUPT_ADCAN13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN14_REGISTER) && defined(INTERRUPT_ADCAN14_BIT)
        case INTERRUPTS_ADCAN14:
            interrupt_bit_clear( INTERRUPT_ADCAN14_REGISTER, INTERRUPT_ADCAN14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN15_REGISTER) && defined(INTERRUPT_ADCAN15_BIT)
        case INTERRUPTS_ADCAN15:
            interrupt_bit_clear( INTERRUPT_ADCAN15_REGISTER, INTERRUPT_ADCAN15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN16_REGISTER) && defined(INTERRUPT_ADCAN16_BIT)
        case INTERRUPTS_ADCAN16:
            interrupt_bit_clear( INTERRUPT_ADCAN16_REGISTER, INTERRUPT_ADCAN16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN18_REGISTER) && defined(INTERRUPT_ADCAN18_BIT)
        case INTERRUPTS_ADCAN18:
            interrupt_bit_clear( INTERRUPT_ADCAN18_REGISTER, INTERRUPT_ADCAN18_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN19_REGISTER) && defined(INTERRUPT_ADCAN19_BIT)
        case INTERRUPTS_ADCAN19:
            interrupt_bit_clear( INTERRUPT_ADCAN19_REGISTER, INTERRUPT_ADCAN19_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN20_REGISTER) && defined(INTERRUPT_ADCAN20_BIT)
        case INTERRUPTS_ADCAN20:
            interrupt_bit_clear( INTERRUPT_ADCAN20_REGISTER, INTERRUPT_ADCAN20_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN21_REGISTER) && defined(INTERRUPT_ADCAN21_BIT)
        case INTERRUPTS_ADCAN21:
            interrupt_bit_clear( INTERRUPT_ADCAN21_REGISTER, INTERRUPT_ADCAN21_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1BC_REGISTER) && defined(INTERRUPT_I2C1BC_BIT)
        case INTERRUPTS_I2C1BC:
            interrupt_bit_clear( INTERRUPT_I2C1BC_REGISTER, INTERRUPT_I2C1BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2BC_REGISTER) && defined(INTERRUPT_I2C2BC_BIT)
        case INTERRUPTS_I2C2BC:
            interrupt_bit_clear( INTERRUPT_I2C2BC_REGISTER, INTERRUPT_I2C2BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCMP0_REGISTER) && defined(INTERRUPT_ADCMP0_BIT)
        case INTERRUPTS_ADCMP0:
            interrupt_bit_clear( INTERRUPT_ADCMP0_REGISTER, INTERRUPT_ADCMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCMP1_REGISTER) && defined(INTERRUPT_ADCMP1_BIT)
        case INTERRUPTS_ADCMP1:
            interrupt_bit_clear( INTERRUPT_ADCMP1_REGISTER, INTERRUPT_ADCMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFLTR0_REGISTER) && defined(INTERRUPT_ADFLTR0_BIT)
        case INTERRUPTS_ADFLTR0:
            interrupt_bit_clear( INTERRUPT_ADFLTR0_REGISTER, INTERRUPT_ADFLTR0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFLTR1_REGISTER) && defined(INTERRUPT_ADFLTR1_BIT)
        case INTERRUPTS_ADFLTR1:
            interrupt_bit_clear( INTERRUPT_ADFLTR1_REGISTER, INTERRUPT_ADFLTR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC0E_REGISTER) && defined(INTERRUPT_ADCC0E_BIT)
        case INTERRUPTS_ADCC0E:
            interrupt_bit_clear( INTERRUPT_ADCC0E_REGISTER, INTERRUPT_ADCC0E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC1E_REGISTER) && defined(INTERRUPT_ADCC1E_BIT)
        case INTERRUPTS_ADCC1E:
            interrupt_bit_clear( INTERRUPT_ADCC1E_REGISTER, INTERRUPT_ADCC1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC2E_REGISTER) && defined(INTERRUPT_ADCC2E_BIT)
        case INTERRUPTS_ADCC2E:
            interrupt_bit_clear( INTERRUPT_ADCC2E_REGISTER, INTERRUPT_ADCC2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCC3E_REGISTER) && defined(INTERRUPT_ADCC3E_BIT)
        case INTERRUPTS_ADCC3E:
            interrupt_bit_clear( INTERRUPT_ADCC3E_REGISTER, INTERRUPT_ADCC3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN17_REGISTER) && defined(INTERRUPT_ADCAN17_BIT)
        case INTERRUPTS_ADCAN17:
            interrupt_bit_clear( INTERRUPT_ADCAN17_REGISTER, INTERRUPT_ADCAN17_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCAN5_REGISTER) && defined(INTERRUPT_ADCAN5_BIT)
        case INTERRUPTS_ADCAN5:
            interrupt_bit_clear( INTERRUPT_ADCAN5_REGISTER, INTERRUPT_ADCAN5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADFL0_REGISTER) && defined(INTERRUPT_ADFL0_BIT)
        case INTERRUPTS_ADFL0:
            interrupt_bit_clear( INTERRUPT_ADFL0_REGISTER, INTERRUPT_ADFL0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4_REGISTER) && defined(INTERRUPT_DMA4_BIT)
        case INTERRUPTS_DMA4:
            interrupt_bit_clear( INTERRUPT_DMA4_REGISTER, INTERRUPT_DMA4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTC_REGISTER) && defined(INTERRUPT_RTC_BIT)
        case INTERRUPTS_RTC:
            interrupt_bit_clear( INTERRUPT_RTC_REGISTER, INTERRUPT_RTC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5_REGISTER) && defined(INTERRUPT_DMA5_BIT)
        case INTERRUPTS_DMA5:
            interrupt_bit_clear( INTERRUPT_DMA5_REGISTER, INTERRUPT_DMA5_BIT );
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
        #if defined(INTERRUPT_USB1_REGISTER) && defined(INTERRUPT_USB1_BIT)
        case INTERRUPTS_USB1:
            interrupt_bit_clear( INTERRUPT_USB1_REGISTER, INTERRUPT_USB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC11_REGISTER) && defined(INTERRUPT_IC11_BIT)
        case INTERRUPTS_IC11:
            interrupt_bit_clear( INTERRUPT_IC11_REGISTER, INTERRUPT_IC11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC11_REGISTER) && defined(INTERRUPT_OC11_BIT)
        case INTERRUPTS_OC11:
            interrupt_bit_clear( INTERRUPT_OC11_REGISTER, INTERRUPT_OC11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC10_REGISTER) && defined(INTERRUPT_IC10_BIT)
        case INTERRUPTS_IC10:
            interrupt_bit_clear( INTERRUPT_IC10_REGISTER, INTERRUPT_IC10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC10_REGISTER) && defined(INTERRUPT_OC10_BIT)
        case INTERRUPTS_OC10:
            interrupt_bit_clear( INTERRUPT_OC10_REGISTER, INTERRUPT_OC10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4_REGISTER) && defined(INTERRUPT_SPI4_BIT)
        case INTERRUPTS_SPI4:
            interrupt_bit_clear( INTERRUPT_SPI4_REGISTER, INTERRUPT_SPI4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI4E_REGISTER) && defined(INTERRUPT_SPI4E_BIT)
        case INTERRUPTS_SPI4E:
            interrupt_bit_clear( INTERRUPT_SPI4E_REGISTER, INTERRUPT_SPI4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA11_REGISTER) && defined(INTERRUPT_DMA11_BIT)
        case INTERRUPTS_DMA11:
            interrupt_bit_clear( INTERRUPT_DMA11_REGISTER, INTERRUPT_DMA11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA10_REGISTER) && defined(INTERRUPT_DMA10_BIT)
        case INTERRUPTS_DMA10:
            interrupt_bit_clear( INTERRUPT_DMA10_REGISTER, INTERRUPT_DMA10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA9_REGISTER) && defined(INTERRUPT_DMA9_BIT)
        case INTERRUPTS_DMA9:
            interrupt_bit_clear( INTERRUPT_DMA9_REGISTER, INTERRUPT_DMA9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA8_REGISTER) && defined(INTERRUPT_DMA8_BIT)
        case INTERRUPTS_DMA8:
            interrupt_bit_clear( INTERRUPT_DMA8_REGISTER, INTERRUPT_DMA8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC16_REGISTER) && defined(INTERRUPT_IC16_BIT)
        case INTERRUPTS_IC16:
            interrupt_bit_clear( INTERRUPT_IC16_REGISTER, INTERRUPT_IC16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC16_REGISTER) && defined(INTERRUPT_OC16_BIT)
        case INTERRUPTS_OC16:
            interrupt_bit_clear( INTERRUPT_OC16_REGISTER, INTERRUPT_OC16_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC15_REGISTER) && defined(INTERRUPT_IC15_BIT)
        case INTERRUPTS_IC15:
            interrupt_bit_clear( INTERRUPT_IC15_REGISTER, INTERRUPT_IC15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC15_REGISTER) && defined(INTERRUPT_OC15_BIT)
        case INTERRUPTS_OC15:
            interrupt_bit_clear( INTERRUPT_OC15_REGISTER, INTERRUPT_OC15_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC14_REGISTER) && defined(INTERRUPT_IC14_BIT)
        case INTERRUPTS_IC14:
            interrupt_bit_clear( INTERRUPT_IC14_REGISTER, INTERRUPT_IC14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC14_REGISTER) && defined(INTERRUPT_OC14_BIT)
        case INTERRUPTS_OC14:
            interrupt_bit_clear( INTERRUPT_OC14_REGISTER, INTERRUPT_OC14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC13_REGISTER) && defined(INTERRUPT_IC13_BIT)
        case INTERRUPTS_IC13:
            interrupt_bit_clear( INTERRUPT_IC13_REGISTER, INTERRUPT_IC13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC13_REGISTER) && defined(INTERRUPT_OC13_BIT)
        case INTERRUPTS_OC13:
            interrupt_bit_clear( INTERRUPT_OC13_REGISTER, INTERRUPT_OC13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA14_REGISTER) && defined(INTERRUPT_DMA14_BIT)
        case INTERRUPTS_DMA14:
            interrupt_bit_clear( INTERRUPT_DMA14_REGISTER, INTERRUPT_DMA14_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA13_REGISTER) && defined(INTERRUPT_DMA13_BIT)
        case INTERRUPTS_DMA13:
            interrupt_bit_clear( INTERRUPT_DMA13_REGISTER, INTERRUPT_DMA13_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA12_REGISTER) && defined(INTERRUPT_DMA12_BIT)
        case INTERRUPTS_DMA12:
            interrupt_bit_clear( INTERRUPT_DMA12_REGISTER, INTERRUPT_DMA12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC12_REGISTER) && defined(INTERRUPT_IC12_BIT)
        case INTERRUPTS_IC12:
            interrupt_bit_clear( INTERRUPT_IC12_REGISTER, INTERRUPT_IC12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OC12_REGISTER) && defined(INTERRUPT_OC12_BIT)
        case INTERRUPTS_OC12:
            interrupt_bit_clear( INTERRUPT_OC12_REGISTER, INTERRUPT_OC12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP_REGISTER) && defined(INTERRUPT_CMP_BIT)
        case INTERRUPTS_CMP:
            interrupt_bit_clear( INTERRUPT_CMP_REGISTER, INTERRUPT_CMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ICD_REGISTER) && defined(INTERRUPT_ICD_BIT)
        case INTERRUPTS_ICD:
            interrupt_bit_clear( INTERRUPT_ICD_REGISTER, INTERRUPT_ICD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT1E_REGISTER) && defined(INTERRUPT_SENT1E_BIT)
        case INTERRUPTS_SENT1E:
            interrupt_bit_clear( INTERRUPT_SENT1E_REGISTER, INTERRUPT_SENT1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT1_REGISTER) && defined(INTERRUPT_SENT1_BIT)
        case INTERRUPTS_SENT1:
            interrupt_bit_clear( INTERRUPT_SENT1_REGISTER, INTERRUPT_SENT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT2E_REGISTER) && defined(INTERRUPT_SENT2E_BIT)
        case INTERRUPTS_SENT2E:
            interrupt_bit_clear( INTERRUPT_SENT2E_REGISTER, INTERRUPT_SENT2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SENT2_REGISTER) && defined(INTERRUPT_SENT2_BIT)
        case INTERRUPTS_SENT2:
            interrupt_bit_clear( INTERRUPT_SENT2_REGISTER, INTERRUPT_SENT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCSBE_REGISTER) && defined(INTERRUPT_ECCSBE_BIT)
        case INTERRUPTS_ECCSBE:
            interrupt_bit_clear( INTERRUPT_ECCSBE_REGISTER, INTERRUPT_ECCSBE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP6_REGISTER) && defined(INTERRUPT_ADCP6_BIT)
        case INTERRUPTS_ADCP6:
            interrupt_bit_clear( INTERRUPT_ADCP6_REGISTER, INTERRUPT_ADCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1L_REGISTER) && defined(INTERRUPT_DAC1L_BIT)
        case INTERRUPTS_DAC1L:
            interrupt_bit_clear( INTERRUPT_DAC1L_REGISTER, INTERRUPT_DAC1L_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1R_REGISTER) && defined(INTERRUPT_DAC1R_BIT)
        case INTERRUPTS_DAC1R:
            interrupt_bit_clear( INTERRUPT_DAC1R_REGISTER, INTERRUPT_DAC1R_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA1_REGISTER) && defined(INTERRUPT_FLTA1_BIT)
        case INTERRUPTS_FLTA1:
            interrupt_bit_clear( INTERRUPT_FLTA1_REGISTER, INTERRUPT_FLTA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTA2_REGISTER) && defined(INTERRUPT_FLTA2_BIT)
        case INTERRUPTS_FLTA2:
            interrupt_bit_clear( INTERRUPT_FLTA2_REGISTER, INTERRUPT_FLTA2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FLTB1_REGISTER) && defined(INTERRUPT_FLTB1_BIT)
        case INTERRUPTS_FLTB1:
            interrupt_bit_clear( INTERRUPT_FLTB1_REGISTER, INTERRUPT_FLTB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP12_REGISTER) && defined(INTERRUPT_ADCP12_BIT)
        case INTERRUPTS_ADCP12:
            interrupt_bit_clear( INTERRUPT_ADCP12_REGISTER, INTERRUPT_ADCP12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP7_REGISTER) && defined(INTERRUPT_ADCP7_BIT)
        case INTERRUPTS_ADCP7:
            interrupt_bit_clear( INTERRUPT_ADCP7_REGISTER, INTERRUPT_ADCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP8_REGISTER) && defined(INTERRUPT_ADCP8_BIT)
        case INTERRUPTS_ADCP8:
            interrupt_bit_clear( INTERRUPT_ADCP8_REGISTER, INTERRUPT_ADCP8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP11_REGISTER) && defined(INTERRUPT_ADCP11_BIT)
        case INTERRUPTS_ADCP11:
            interrupt_bit_clear( INTERRUPT_ADCP11_REGISTER, INTERRUPT_ADCP11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP10_REGISTER) && defined(INTERRUPT_ADCP10_BIT)
        case INTERRUPTS_ADCP10:
            interrupt_bit_clear( INTERRUPT_ADCP10_REGISTER, INTERRUPT_ADCP10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADCP9_REGISTER) && defined(INTERRUPT_ADCP9_BIT)
        case INTERRUPTS_ADCP9:
            interrupt_bit_clear( INTERRUPT_ADCP9_REGISTER, INTERRUPT_ADCP9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM9_REGISTER) && defined(INTERRUPT_PWM9_BIT)
        case INTERRUPTS_PWM9:
            interrupt_bit_clear( INTERRUPT_PWM9_REGISTER, INTERRUPT_PWM9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF1_REGISTER) && defined(INTERRUPT_SPF1_BIT)
        case INTERRUPTS_SPF1:
            interrupt_bit_clear( INTERRUPT_SPF1_REGISTER, INTERRUPT_SPF1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLVD_REGISTER) && defined(INTERRUPT_HLVD_BIT)
        case INTERRUPTS_HLVD:
            interrupt_bit_clear( INTERRUPT_HLVD_REGISTER, INTERRUPT_HLVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1ER_REGISTER) && defined(INTERRUPT_U1ER_BIT)
        case INTERRUPTS_U1ER:
            interrupt_bit_clear( INTERRUPT_U1ER_REGISTER, INTERRUPT_U1ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP2_REGISTER) && defined(INTERRUPT_CCP2_BIT)
        case INTERRUPTS_CCP2:
            interrupt_bit_clear( INTERRUPT_CCP2_REGISTER, INTERRUPT_CCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP1_REGISTER) && defined(INTERRUPT_CCP1_BIT)
        case INTERRUPTS_CCP1:
            interrupt_bit_clear( INTERRUPT_CCP1_REGISTER, INTERRUPT_CCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL1_REGISTER) && defined(INTERRUPT_BCL1_BIT)
        case INTERRUPTS_BCL1:
            interrupt_bit_clear( INTERRUPT_BCL1_REGISTER, INTERRUPT_BCL1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP1_REGISTER) && defined(INTERRUPT_SSP1_BIT)
        case INTERRUPTS_SSP1:
            interrupt_bit_clear( INTERRUPT_SSP1_REGISTER, INTERRUPT_SSP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T3G_REGISTER) && defined(INTERRUPT_T3G_BIT)
        case INTERRUPTS_T3G:
            interrupt_bit_clear( INTERRUPT_T3G_REGISTER, INTERRUPT_T3G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ULPWU_REGISTER) && defined(INTERRUPT_ULPWU_BIT)
        case INTERRUPTS_ULPWU:
            interrupt_bit_clear( INTERRUPT_ULPWU_REGISTER, INTERRUPT_ULPWU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2ER_REGISTER) && defined(INTERRUPT_U2ER_BIT)
        case INTERRUPTS_U2ER:
            interrupt_bit_clear( INTERRUPT_U2ER_REGISTER, INTERRUPT_U2ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP3_REGISTER) && defined(INTERRUPT_CCP3_BIT)
        case INTERRUPTS_CCP3:
            interrupt_bit_clear( INTERRUPT_CCP3_REGISTER, INTERRUPT_CCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL2_REGISTER) && defined(INTERRUPT_BCL2_BIT)
        case INTERRUPTS_BCL2:
            interrupt_bit_clear( INTERRUPT_BCL2_REGISTER, INTERRUPT_BCL2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP2_REGISTER) && defined(INTERRUPT_SSP2_BIT)
        case INTERRUPTS_SSP2:
            interrupt_bit_clear( INTERRUPT_SSP2_REGISTER, INTERRUPT_SSP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT2_REGISTER) && defined(INTERRUPT_CCT2_BIT)
        case INTERRUPTS_CCT2:
            interrupt_bit_clear( INTERRUPT_CCT2_REGISTER, INTERRUPT_CCT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT1_REGISTER) && defined(INTERRUPT_CCT1_BIT)
        case INTERRUPTS_CCT1:
            interrupt_bit_clear( INTERRUPT_CCT1_REGISTER, INTERRUPT_CCT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP4_REGISTER) && defined(INTERRUPT_CCP4_BIT)
        case INTERRUPTS_CCP4:
            interrupt_bit_clear( INTERRUPT_CCP4_REGISTER, INTERRUPT_CCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT4_REGISTER) && defined(INTERRUPT_CCT4_BIT)
        case INTERRUPTS_CCT4:
            interrupt_bit_clear( INTERRUPT_CCT4_REGISTER, INTERRUPT_CCT4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT3_REGISTER) && defined(INTERRUPT_CCT3_BIT)
        case INTERRUPTS_CCT3:
            interrupt_bit_clear( INTERRUPT_CCT3_REGISTER, INTERRUPT_CCT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP5_REGISTER) && defined(INTERRUPT_CCP5_BIT)
        case INTERRUPTS_CCP5:
            interrupt_bit_clear( INTERRUPT_CCP5_REGISTER, INTERRUPT_CCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT5_REGISTER) && defined(INTERRUPT_CCT5_BIT)
        case INTERRUPTS_CCT5:
            interrupt_bit_clear( INTERRUPT_CCT5_REGISTER, INTERRUPT_CCT5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC2_REGISTER) && defined(INTERRUPT_DAC2_BIT)
        case INTERRUPTS_DAC2:
            interrupt_bit_clear( INTERRUPT_DAC2_REGISTER, INTERRUPT_DAC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DAC1_REGISTER) && defined(INTERRUPT_DAC1_BIT)
        case INTERRUPTS_DAC1:
            interrupt_bit_clear( INTERRUPT_DAC1_REGISTER, INTERRUPT_DAC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF2_REGISTER) && defined(INTERRUPT_SPF2_BIT)
        case INTERRUPTS_SPF2:
            interrupt_bit_clear( INTERRUPT_SPF2_REGISTER, INTERRUPT_SPF2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IOC_REGISTER) && defined(INTERRUPT_IOC_BIT)
        case INTERRUPTS_IOC:
            interrupt_bit_clear( INTERRUPT_IOC_REGISTER, INTERRUPT_IOC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP6_REGISTER) && defined(INTERRUPT_CCP6_BIT)
        case INTERRUPTS_CCP6:
            interrupt_bit_clear( INTERRUPT_CCP6_REGISTER, INTERRUPT_CCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT6_REGISTER) && defined(INTERRUPT_CCT6_BIT)
        case INTERRUPTS_CCT6:
            interrupt_bit_clear( INTERRUPT_CCT6_REGISTER, INTERRUPT_CCT6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCT7_REGISTER) && defined(INTERRUPT_CCT7_BIT)
        case INTERRUPTS_CCT7:
            interrupt_bit_clear( INTERRUPT_CCT7_REGISTER, INTERRUPT_CCT7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SI2C3_REGISTER) && defined(INTERRUPT_SI2C3_BIT)
        case INTERRUPTS_SI2C3:
            interrupt_bit_clear( INTERRUPT_SI2C3_REGISTER, INTERRUPT_SI2C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_MI2C3_REGISTER) && defined(INTERRUPT_MI2C3_BIT)
        case INTERRUPTS_MI2C3:
            interrupt_bit_clear( INTERRUPT_MI2C3_REGISTER, INTERRUPT_MI2C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP7_REGISTER) && defined(INTERRUPT_CCP7_BIT)
        case INTERRUPTS_CCP7:
            interrupt_bit_clear( INTERRUPT_CCP7_REGISTER, INTERRUPT_CCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3ER_REGISTER) && defined(INTERRUPT_U3ER_BIT)
        case INTERRUPTS_U3ER:
            interrupt_bit_clear( INTERRUPT_U3ER_REGISTER, INTERRUPT_U3ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4ER_REGISTER) && defined(INTERRUPT_U4ER_BIT)
        case INTERRUPTS_U4ER:
            interrupt_bit_clear( INTERRUPT_U4ER_REGISTER, INTERRUPT_U4ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FST_REGISTER) && defined(INTERRUPT_FST_BIT)
        case INTERRUPTS_FST:
            interrupt_bit_clear( INTERRUPT_FST_REGISTER, INTERRUPT_FST_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C3BC_REGISTER) && defined(INTERRUPT_I2C3BC_BIT)
        case INTERRUPTS_I2C3BC:
            interrupt_bit_clear( INTERRUPT_I2C3BC_REGISTER, INTERRUPT_I2C3BC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCCTS_REGISTER) && defined(INTERRUPT_RTCCTS_BIT)
        case INTERRUPTS_RTCCTS:
            interrupt_bit_clear( INTERRUPT_RTCCTS_REGISTER, INTERRUPT_RTCCTS_BIT );
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
        #if defined(INTERRUPT_U5ER_REGISTER) && defined(INTERRUPT_U5ER_BIT)
        case INTERRUPTS_U5ER:
            interrupt_bit_clear( INTERRUPT_U5ER_REGISTER, INTERRUPT_U5ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6RX_REGISTER) && defined(INTERRUPT_U6RX_BIT)
        case INTERRUPTS_U6RX:
            interrupt_bit_clear( INTERRUPT_U6RX_REGISTER, INTERRUPT_U6RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6TX_REGISTER) && defined(INTERRUPT_U6TX_BIT)
        case INTERRUPTS_U6TX:
            interrupt_bit_clear( INTERRUPT_U6TX_REGISTER, INTERRUPT_U6TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U6ER_REGISTER) && defined(INTERRUPT_U6ER_BIT)
        case INTERRUPTS_U6ER:
            interrupt_bit_clear( INTERRUPT_U6ER_REGISTER, INTERRUPT_U6ER_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPF3_REGISTER) && defined(INTERRUPT_SPF3_BIT)
        case INTERRUPTS_SPF3:
            interrupt_bit_clear( INTERRUPT_SPF3_REGISTER, INTERRUPT_SPF3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_GFX1_REGISTER) && defined(INTERRUPT_GFX1_BIT)
        case INTERRUPTS_GFX1:
            interrupt_bit_clear( INTERRUPT_GFX1_REGISTER, INTERRUPT_GFX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYFREE_REGISTER) && defined(INTERRUPT_CRYFREE_BIT)
        case INTERRUPTS_CRYFREE:
            interrupt_bit_clear( INTERRUPT_CRYFREE_REGISTER, INTERRUPT_CRYFREE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYROLL_REGISTER) && defined(INTERRUPT_CRYROLL_BIT)
        case INTERRUPTS_CRYROLL:
            interrupt_bit_clear( INTERRUPT_CRYROLL_REGISTER, INTERRUPT_CRYROLL_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRYDN_REGISTER) && defined(INTERRUPT_CRYDN_BIT)
        case INTERRUPTS_CRYDN:
            interrupt_bit_clear( INTERRUPT_CRYDN_REGISTER, INTERRUPT_CRYDN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_KEYSTR_REGISTER) && defined(INTERRUPT_KEYSTR_BIT)
        case INTERRUPTS_KEYSTR:
            interrupt_bit_clear( INTERRUPT_KEYSTR_REGISTER, INTERRUPT_KEYSTR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCD_REGISTER) && defined(INTERRUPT_LCD_BIT)
        case INTERRUPTS_LCD:
            interrupt_bit_clear( INTERRUPT_LCD_REGISTER, INTERRUPT_LCD_BIT );
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
        #if defined(INTERRUPT_ECC_REGISTER) && defined(INTERRUPT_ECC_BIT)
        case INTERRUPTS_ECC:
            interrupt_bit_clear( INTERRUPT_ECC_REGISTER, INTERRUPT_ECC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SDA1_REGISTER) && defined(INTERRUPT_SDA1_BIT)
        case INTERRUPTS_SDA1:
            interrupt_bit_clear( INTERRUPT_SDA1_REGISTER, INTERRUPT_SDA1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AMP2_REGISTER) && defined(INTERRUPT_AMP2_BIT)
        case INTERRUPTS_AMP2:
            interrupt_bit_clear( INTERRUPT_AMP2_REGISTER, INTERRUPT_AMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AMP1_REGISTER) && defined(INTERRUPT_AMP1_BIT)
        case INTERRUPTS_AMP1:
            interrupt_bit_clear( INTERRUPT_AMP1_REGISTER, INTERRUPT_AMP1_BIT );
            break;
        #endif

        default:
            break;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

static inline void interrupts_enable_asm( void ) {
    asm {
        MOV #0xFF1F, W1
        MOV #lo_addr(SR), W0
        AND W1, [W0], [W0]
        nop
    }
}

static inline void interrupts_disable_asm( void ) {
    asm {
        MOV #lo_addr(SR), W0
        MOV #0xE0, W1
        IOR W1, [W0], [W0]
        nop
    }
}

// ----------------------------------------------------------------------------
/*
    interrupts.c

    Copyright (c) 2023, MikroElektronika - www.mikroe.com

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
