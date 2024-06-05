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

void interrupts_enable( void )
{
    interrupts_enable_asm();
}

void interrupts_disable( void )
{
    interrupts_disable_asm();
}

void interrupt_enable( int interrupt )
{
    switch ( interrupt ) {
        #if defined(INTERRUPT_TMR2_REGISTER) && defined(INTERRUPT_TMR2_BIT)
        case INTERRUPTS_TMR2:
            interrupt_bit_set( INTERRUPT_TMR2_REGISTER, INTERRUPT_TMR2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC1_REGISTER) && defined(INTERRUPT_CLC1_BIT)
        case INTERRUPTS_CLC1:
            interrupt_bit_set( INTERRUPT_CLC1_REGISTER, INTERRUPT_CLC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO1_REGISTER) && defined(INTERRUPT_NCO1_BIT)
        case INTERRUPTS_NCO1:
            interrupt_bit_set( INTERRUPT_NCO1_REGISTER, INTERRUPT_NCO1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD_REGISTER) && defined(INTERRUPT_AD_BIT)
        case INTERRUPTS_AD:
            interrupt_bit_set( INTERRUPT_AD_REGISTER, INTERRUPT_AD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR1_REGISTER) && defined(INTERRUPT_TMR1_BIT)
        case INTERRUPTS_TMR1:
            interrupt_bit_set( INTERRUPT_TMR1_REGISTER, INTERRUPT_TMR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR1G_REGISTER) && defined(INTERRUPT_TMR1G_BIT)
        case INTERRUPTS_TMR1G:
            interrupt_bit_set( INTERRUPT_TMR1G_REGISTER, INTERRUPT_TMR1G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1_REGISTER) && defined(INTERRUPT_C1_BIT)
        case INTERRUPTS_C1:
            interrupt_bit_set( INTERRUPT_C1_REGISTER, INTERRUPT_C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC2_REGISTER) && defined(INTERRUPT_CLC2_BIT)
        case INTERRUPTS_CLC2:
            interrupt_bit_set( INTERRUPT_CLC2_REGISTER, INTERRUPT_CLC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1_REGISTER) && defined(INTERRUPT_PWM1_BIT)
        case INTERRUPTS_PWM1:
            interrupt_bit_set( INTERRUPT_PWM1_REGISTER, INTERRUPT_PWM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2_REGISTER) && defined(INTERRUPT_PWM2_BIT)
        case INTERRUPTS_PWM2:
            interrupt_bit_set( INTERRUPT_PWM2_REGISTER, INTERRUPT_PWM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3_REGISTER) && defined(INTERRUPT_PWM3_BIT)
        case INTERRUPTS_PWM3:
            interrupt_bit_set( INTERRUPT_PWM3_REGISTER, INTERRUPT_PWM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX_REGISTER) && defined(INTERRUPT_TX_BIT)
        case INTERRUPTS_TX:
            interrupt_bit_set( INTERRUPT_TX_REGISTER, INTERRUPT_TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC_REGISTER) && defined(INTERRUPT_RC_BIT)
        case INTERRUPTS_RC:
            interrupt_bit_set( INTERRUPT_RC_REGISTER, INTERRUPT_RC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP1_REGISTER) && defined(INTERRUPT_CCP1_BIT)
        case INTERRUPTS_CCP1:
            interrupt_bit_set( INTERRUPT_CCP1_REGISTER, INTERRUPT_CCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP2_REGISTER) && defined(INTERRUPT_CCP2_BIT)
        case INTERRUPTS_CCP2:
            interrupt_bit_set( INTERRUPT_CCP2_REGISTER, INTERRUPT_CCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR4_REGISTER) && defined(INTERRUPT_TMR4_BIT)
        case INTERRUPTS_TMR4:
            interrupt_bit_set( INTERRUPT_TMR4_REGISTER, INTERRUPT_TMR4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR6_REGISTER) && defined(INTERRUPT_TMR6_BIT)
        case INTERRUPTS_TMR6:
            interrupt_bit_set( INTERRUPT_TMR6_REGISTER, INTERRUPT_TMR6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2_REGISTER) && defined(INTERRUPT_C2_BIT)
        case INTERRUPTS_C2:
            interrupt_bit_set( INTERRUPT_C2_REGISTER, INTERRUPT_C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ZCD_REGISTER) && defined(INTERRUPT_ZCD_BIT)
        case INTERRUPTS_ZCD:
            interrupt_bit_set( INTERRUPT_ZCD_REGISTER, INTERRUPT_ZCD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG_REGISTER) && defined(INTERRUPT_CWG_BIT)
        case INTERRUPTS_CWG:
            interrupt_bit_set( INTERRUPT_CWG_REGISTER, INTERRUPT_CWG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1_REGISTER) && defined(INTERRUPT_SMT1_BIT)
        case INTERRUPTS_SMT1:
            interrupt_bit_set( INTERRUPT_SMT1_REGISTER, INTERRUPT_SMT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1PRA_REGISTER) && defined(INTERRUPT_SMT1PRA_BIT)
        case INTERRUPTS_SMT1PRA:
            interrupt_bit_set( INTERRUPT_SMT1PRA_REGISTER, INTERRUPT_SMT1PRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1PWA_REGISTER) && defined(INTERRUPT_SMT1PWA_BIT)
        case INTERRUPTS_SMT1PWA:
            interrupt_bit_set( INTERRUPT_SMT1PWA_REGISTER, INTERRUPT_SMT1PWA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2_REGISTER) && defined(INTERRUPT_SMT2_BIT)
        case INTERRUPTS_SMT2:
            interrupt_bit_set( INTERRUPT_SMT2_REGISTER, INTERRUPT_SMT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2PRA_REGISTER) && defined(INTERRUPT_SMT2PRA_BIT)
        case INTERRUPTS_SMT2PRA:
            interrupt_bit_set( INTERRUPT_SMT2PRA_REGISTER, INTERRUPT_SMT2PRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2PWA_REGISTER) && defined(INTERRUPT_SMT2PWA_BIT)
        case INTERRUPTS_SMT2PWA:
            interrupt_bit_set( INTERRUPT_SMT2PWA_REGISTER, INTERRUPT_SMT2PWA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRC_REGISTER) && defined(INTERRUPT_CRC_BIT)
        case INTERRUPTS_CRC:
            interrupt_bit_set( INTERRUPT_CRC_REGISTER, INTERRUPT_CRC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCAN_REGISTER) && defined(INTERRUPT_SCAN_BIT)
        case INTERRUPTS_SCAN:
            interrupt_bit_set( INTERRUPT_SCAN_REGISTER, INTERRUPT_SCAN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP1_REGISTER) && defined(INTERRUPT_SSP1_BIT)
        case INTERRUPTS_SSP1:
            interrupt_bit_set( INTERRUPT_SSP1_REGISTER, INTERRUPT_SSP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL1_REGISTER) && defined(INTERRUPT_BCL1_BIT)
        case INTERRUPTS_BCL1:
            interrupt_bit_set( INTERRUPT_BCL1_REGISTER, INTERRUPT_BCL1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EE_REGISTER) && defined(INTERRUPT_EE_BIT)
        case INTERRUPTS_EE:
            interrupt_bit_set( INTERRUPT_EE_REGISTER, INTERRUPT_EE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OSF_REGISTER) && defined(INTERRUPT_OSF_BIT)
        case INTERRUPTS_OSF:
            interrupt_bit_set( INTERRUPT_OSF_REGISTER, INTERRUPT_OSF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_set( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM_REGISTER) && defined(INTERRUPT_CM_BIT)
        case INTERRUPTS_CM:
            interrupt_bit_set( INTERRUPT_CM_REGISTER, INTERRUPT_CM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP_REGISTER) && defined(INTERRUPT_ECCP_BIT)
        case INTERRUPTS_ECCP:
            interrupt_bit_set( INTERRUPT_ECCP_REGISTER, INTERRUPT_ECCP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_set( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP_REGISTER) && defined(INTERRUPT_CCP_BIT)
        case INTERRUPTS_CCP:
            interrupt_bit_set( INTERRUPT_CCP_REGISTER, INTERRUPT_CCP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CR_REGISTER) && defined(INTERRUPT_CR_BIT)
        case INTERRUPTS_CR:
            interrupt_bit_set( INTERRUPT_CR_REGISTER, INTERRUPT_CR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LVD_REGISTER) && defined(INTERRUPT_LVD_BIT)
        case INTERRUPTS_LVD:
            interrupt_bit_set( INTERRUPT_LVD_REGISTER, INTERRUPT_LVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLTMR1_REGISTER) && defined(INTERRUPT_HLTMR1_BIT)
        case INTERRUPTS_HLTMR1:
            interrupt_bit_set( INTERRUPT_HLTMR1_REGISTER, INTERRUPT_HLTMR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG1_REGISTER) && defined(INTERRUPT_COG1_BIT)
        case INTERRUPTS_COG1:
            interrupt_bit_set( INTERRUPT_COG1_REGISTER, INTERRUPT_COG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP_REGISTER) && defined(INTERRUPT_SSP_BIT)
        case INTERRUPTS_SSP:
            interrupt_bit_set( INTERRUPT_SSP_REGISTER, INTERRUPT_SSP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSP_REGISTER) && defined(INTERRUPT_PSP_BIT)
        case INTERRUPTS_PSP:
            interrupt_bit_set( INTERRUPT_PSP_REGISTER, INTERRUPT_PSP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL_REGISTER) && defined(INTERRUPT_BCL_BIT)
        case INTERRUPTS_BCL:
            interrupt_bit_set( INTERRUPT_BCL_REGISTER, INTERRUPT_BCL_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USB_REGISTER) && defined(INTERRUPT_USB_BIT)
        case INTERRUPTS_USB:
            interrupt_bit_set( INTERRUPT_USB_REGISTER, INTERRUPT_USB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCD_REGISTER) && defined(INTERRUPT_LCD_BIT)
        case INTERRUPTS_LCD:
            interrupt_bit_set( INTERRUPT_LCD_REGISTER, INTERRUPT_LCD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RBIE_REGISTER) && defined(INTERRUPT_RBIE_BIT)
        case INTERRUPTS_RBIE:
            interrupt_bit_set( INTERRUPT_RBIE_REGISTER, INTERRUPT_RBIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTE_REGISTER) && defined(INTERRUPT_INTE_BIT)
        case INTERRUPTS_INTE:
            interrupt_bit_set( INTERRUPT_INTE_REGISTER, INTERRUPT_INTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TOIE_REGISTER) && defined(INTERRUPT_TOIE_BIT)
        case INTERRUPTS_TOIE:
            interrupt_bit_set( INTERRUPT_TOIE_REGISTER, INTERRUPT_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EEIE_REGISTER) && defined(INTERRUPT_EEIE_BIT)
        case INTERRUPTS_EEIE:
            interrupt_bit_set( INTERRUPT_EEIE_REGISTER, INTERRUPT_EEIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACT_REGISTER) && defined(INTERRUPT_ACT_BIT)
        case INTERRUPTS_ACT:
            interrupt_bit_set( INTERRUPT_ACT_REGISTER, INTERRUPT_ACT_BIT );
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
        #if defined(INTERRUPT_TX1_REGISTER) && defined(INTERRUPT_TX1_BIT)
        case INTERRUPTS_TX1:
            interrupt_bit_set( INTERRUPT_TX1_REGISTER, INTERRUPT_TX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC1_REGISTER) && defined(INTERRUPT_RC1_BIT)
        case INTERRUPTS_RC1:
            interrupt_bit_set( INTERRUPT_RC1_REGISTER, INTERRUPT_RC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR8_REGISTER) && defined(INTERRUPT_TMR8_BIT)
        case INTERRUPTS_TMR8:
            interrupt_bit_set( INTERRUPT_TMR8_REGISTER, INTERRUPT_TMR8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR10_REGISTER) && defined(INTERRUPT_TMR10_BIT)
        case INTERRUPTS_TMR10:
            interrupt_bit_set( INTERRUPT_TMR10_REGISTER, INTERRUPT_TMR10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR3G_REGISTER) && defined(INTERRUPT_TMR3G_BIT)
        case INTERRUPTS_TMR3G:
            interrupt_bit_set( INTERRUPT_TMR3G_REGISTER, INTERRUPT_TMR3G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR5G_REGISTER) && defined(INTERRUPT_TMR5G_BIT)
        case INTERRUPTS_TMR5G:
            interrupt_bit_set( INTERRUPT_TMR5G_REGISTER, INTERRUPT_TMR5G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR3_REGISTER) && defined(INTERRUPT_TMR3_BIT)
        case INTERRUPTS_TMR3:
            interrupt_bit_set( INTERRUPT_TMR3_REGISTER, INTERRUPT_TMR3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR5_REGISTER) && defined(INTERRUPT_TMR5_BIT)
        case INTERRUPTS_TMR5:
            interrupt_bit_set( INTERRUPT_TMR5_REGISTER, INTERRUPT_TMR5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP3_REGISTER) && defined(INTERRUPT_CCP3_BIT)
        case INTERRUPTS_CCP3:
            interrupt_bit_set( INTERRUPT_CCP3_REGISTER, INTERRUPT_CCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP4_REGISTER) && defined(INTERRUPT_CCP4_BIT)
        case INTERRUPTS_CCP4:
            interrupt_bit_set( INTERRUPT_CCP4_REGISTER, INTERRUPT_CCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP5_REGISTER) && defined(INTERRUPT_CCP5_BIT)
        case INTERRUPTS_CCP5:
            interrupt_bit_set( INTERRUPT_CCP5_REGISTER, INTERRUPT_CCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP6_REGISTER) && defined(INTERRUPT_CCP6_BIT)
        case INTERRUPTS_CCP6:
            interrupt_bit_set( INTERRUPT_CCP6_REGISTER, INTERRUPT_CCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP2_REGISTER) && defined(INTERRUPT_SSP2_BIT)
        case INTERRUPTS_SSP2:
            interrupt_bit_set( INTERRUPT_SSP2_REGISTER, INTERRUPT_SSP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL2_REGISTER) && defined(INTERRUPT_BCL2_BIT)
        case INTERRUPTS_BCL2:
            interrupt_bit_set( INTERRUPT_BCL2_REGISTER, INTERRUPT_BCL2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP7_REGISTER) && defined(INTERRUPT_CCP7_BIT)
        case INTERRUPTS_CCP7:
            interrupt_bit_set( INTERRUPT_CCP7_REGISTER, INTERRUPT_CCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP8_REGISTER) && defined(INTERRUPT_CCP8_BIT)
        case INTERRUPTS_CCP8:
            interrupt_bit_set( INTERRUPT_CCP8_REGISTER, INTERRUPT_CCP8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX2_REGISTER) && defined(INTERRUPT_TX2_BIT)
        case INTERRUPTS_TX2:
            interrupt_bit_set( INTERRUPT_TX2_REGISTER, INTERRUPT_TX2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC2_REGISTER) && defined(INTERRUPT_RC2_BIT)
        case INTERRUPTS_RC2:
            interrupt_bit_set( INTERRUPT_RC2_REGISTER, INTERRUPT_RC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP9_REGISTER) && defined(INTERRUPT_CCP9_BIT)
        case INTERRUPTS_CCP9:
            interrupt_bit_set( INTERRUPT_CCP9_REGISTER, INTERRUPT_CCP9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP10_REGISTER) && defined(INTERRUPT_CCP10_BIT)
        case INTERRUPTS_CCP10:
            interrupt_bit_set( INTERRUPT_CCP10_REGISTER, INTERRUPT_CCP10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IN_REGISTER) && defined(INTERRUPT_IN_BIT)
        case INTERRUPTS_IN:
            interrupt_bit_set( INTERRUPT_IN_REGISTER, INTERRUPT_IN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IOC_REGISTER) && defined(INTERRUPT_IOC_BIT)
        case INTERRUPTS_IOC:
            interrupt_bit_set( INTERRUPT_IOC_REGISTER, INTERRUPT_IOC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR0_REGISTER) && defined(INTERRUPT_TMR0_BIT)
        case INTERRUPTS_TMR0:
            interrupt_bit_set( INTERRUPT_TMR0_REGISTER, INTERRUPT_TMR0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CSW_REGISTER) && defined(INTERRUPT_CSW_BIT)
        case INTERRUPTS_CSW:
            interrupt_bit_set( INTERRUPT_CSW_REGISTER, INTERRUPT_CSW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG1_REGISTER) && defined(INTERRUPT_CWG1_BIT)
        case INTERRUPTS_CWG1:
            interrupt_bit_set( INTERRUPT_CWG1_REGISTER, INTERRUPT_CWG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NVM_REGISTER) && defined(INTERRUPT_NVM_BIT)
        case INTERRUPTS_NVM:
            interrupt_bit_set( INTERRUPT_NVM_REGISTER, INTERRUPT_NVM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO_REGISTER) && defined(INTERRUPT_NCO_BIT)
        case INTERRUPTS_NCO:
            interrupt_bit_set( INTERRUPT_NCO_REGISTER, INTERRUPT_NCO_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADT_REGISTER) && defined(INTERRUPT_ADT_BIT)
        case INTERRUPTS_ADT:
            interrupt_bit_set( INTERRUPT_ADT_REGISTER, INTERRUPT_ADT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM4_REGISTER) && defined(INTERRUPT_PWM4_BIT)
        case INTERRUPTS_PWM4:
            interrupt_bit_set( INTERRUPT_PWM4_REGISTER, INTERRUPT_PWM4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PID1D_REGISTER) && defined(INTERRUPT_PID1D_BIT)
        case INTERRUPTS_PID1D:
            interrupt_bit_set( INTERRUPT_PID1D_REGISTER, INTERRUPT_PID1D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PID1E_REGISTER) && defined(INTERRUPT_PID1E_BIT)
        case INTERRUPTS_PID1E:
            interrupt_bit_set( INTERRUPT_PID1E_REGISTER, INTERRUPT_PID1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AT1_REGISTER) && defined(INTERRUPT_AT1_BIT)
        case INTERRUPTS_AT1:
            interrupt_bit_set( INTERRUPT_AT1_REGISTER, INTERRUPT_AT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OSCF_REGISTER) && defined(INTERRUPT_OSCF_BIT)
        case INTERRUPTS_OSCF:
            interrupt_bit_set( INTERRUPT_OSCF_REGISTER, INTERRUPT_OSCF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG_REGISTER) && defined(INTERRUPT_COG_BIT)
        case INTERRUPTS_COG:
            interrupt_bit_set( INTERRUPT_COG_REGISTER, INTERRUPT_COG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM5_REGISTER) && defined(INTERRUPT_PWM5_BIT)
        case INTERRUPTS_PWM5:
            interrupt_bit_set( INTERRUPT_PWM5_REGISTER, INTERRUPT_PWM5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C3_REGISTER) && defined(INTERRUPT_C3_BIT)
        case INTERRUPTS_C3:
            interrupt_bit_set( INTERRUPT_C3_REGISTER, INTERRUPT_C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C4_REGISTER) && defined(INTERRUPT_C4_BIT)
        case INTERRUPTS_C4:
            interrupt_bit_set( INTERRUPT_C4_REGISTER, INTERRUPT_C4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG2_REGISTER) && defined(INTERRUPT_COG2_BIT)
        case INTERRUPTS_COG2:
            interrupt_bit_set( INTERRUPT_COG2_REGISTER, INTERRUPT_COG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM6_REGISTER) && defined(INTERRUPT_PWM6_BIT)
        case INTERRUPTS_PWM6:
            interrupt_bit_set( INTERRUPT_PWM6_REGISTER, INTERRUPT_PWM6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C5_REGISTER) && defined(INTERRUPT_C5_BIT)
        case INTERRUPTS_C5:
            interrupt_bit_set( INTERRUPT_C5_REGISTER, INTERRUPT_C5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C6_REGISTER) && defined(INTERRUPT_C6_BIT)
        case INTERRUPTS_C6:
            interrupt_bit_set( INTERRUPT_C6_REGISTER, INTERRUPT_C6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG3_REGISTER) && defined(INTERRUPT_COG3_BIT)
        case INTERRUPTS_COG3:
            interrupt_bit_set( INTERRUPT_COG3_REGISTER, INTERRUPT_COG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM11_REGISTER) && defined(INTERRUPT_PWM11_BIT)
        case INTERRUPTS_PWM11:
            interrupt_bit_set( INTERRUPT_PWM11_REGISTER, INTERRUPT_PWM11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C7_REGISTER) && defined(INTERRUPT_C7_BIT)
        case INTERRUPTS_C7:
            interrupt_bit_set( INTERRUPT_C7_REGISTER, INTERRUPT_C7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C8_REGISTER) && defined(INTERRUPT_C8_BIT)
        case INTERRUPTS_C8:
            interrupt_bit_set( INTERRUPT_C8_REGISTER, INTERRUPT_C8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG4_REGISTER) && defined(INTERRUPT_COG4_BIT)
        case INTERRUPTS_COG4:
            interrupt_bit_set( INTERRUPT_COG4_REGISTER, INTERRUPT_COG4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM12_REGISTER) && defined(INTERRUPT_PWM12_BIT)
        case INTERRUPTS_PWM12:
            interrupt_bit_set( INTERRUPT_PWM12_REGISTER, INTERRUPT_PWM12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC1S_REGISTER) && defined(INTERRUPT_PSMC1S_BIT)
        case INTERRUPTS_PSMC1S:
            interrupt_bit_set( INTERRUPT_PSMC1S_REGISTER, INTERRUPT_PSMC1S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC2S_REGISTER) && defined(INTERRUPT_PSMC2S_BIT)
        case INTERRUPTS_PSMC2S:
            interrupt_bit_set( INTERRUPT_PSMC2S_REGISTER, INTERRUPT_PSMC2S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC1T_REGISTER) && defined(INTERRUPT_PSMC1T_BIT)
        case INTERRUPTS_PSMC1T:
            interrupt_bit_set( INTERRUPT_PSMC1T_REGISTER, INTERRUPT_PSMC1T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC2T_REGISTER) && defined(INTERRUPT_PSMC2T_BIT)
        case INTERRUPTS_PSMC2T:
            interrupt_bit_set( INTERRUPT_PSMC2T_REGISTER, INTERRUPT_PSMC2T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC3S_REGISTER) && defined(INTERRUPT_PSMC3S_BIT)
        case INTERRUPTS_PSMC3S:
            interrupt_bit_set( INTERRUPT_PSMC3S_REGISTER, INTERRUPT_PSMC3S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMSC3T_REGISTER) && defined(INTERRUPT_PMSC3T_BIT)
        case INTERRUPTS_PMSC3T:
            interrupt_bit_set( INTERRUPT_PMSC3T_REGISTER, INTERRUPT_PMSC3T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC4S_REGISTER) && defined(INTERRUPT_PSMC4S_BIT)
        case INTERRUPTS_PSMC4S:
            interrupt_bit_set( INTERRUPT_PSMC4S_REGISTER, INTERRUPT_PSMC4S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC4T_REGISTER) && defined(INTERRUPT_PSMC4T_BIT)
        case INTERRUPTS_PSMC4T:
            interrupt_bit_set( INTERRUPT_PSMC4T_REGISTER, INTERRUPT_PSMC4T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG2_REGISTER) && defined(INTERRUPT_CWG2_BIT)
        case INTERRUPTS_CWG2:
            interrupt_bit_set( INTERRUPT_CWG2_REGISTER, INTERRUPT_CWG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG3_REGISTER) && defined(INTERRUPT_CWG3_BIT)
        case INTERRUPTS_CWG3:
            interrupt_bit_set( INTERRUPT_CWG3_REGISTER, INTERRUPT_CWG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_set( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMRA_REGISTER) && defined(INTERRUPT_TMRA_BIT)
        case INTERRUPTS_TMRA:
            interrupt_bit_set( INTERRUPT_TMRA_REGISTER, INTERRUPT_TMRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMRB_REGISTER) && defined(INTERRUPT_TMRB_BIT)
        case INTERRUPTS_TMRB:
            interrupt_bit_set( INTERRUPT_TMRB_REGISTER, INTERRUPT_TMRB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR4A_REGISTER) && defined(INTERRUPT_TMR4A_BIT)
        case INTERRUPTS_TMR4A:
            interrupt_bit_set( INTERRUPT_TMR4A_REGISTER, INTERRUPT_TMR4A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR6A_REGISTER) && defined(INTERRUPT_TMR6A_BIT)
        case INTERRUPTS_TMR6A:
            interrupt_bit_set( INTERRUPT_TMR6A_REGISTER, INTERRUPT_TMR6A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ULPWU_REGISTER) && defined(INTERRUPT_ULPWU_BIT)
        case INTERRUPTS_ULPWU:
            interrupt_bit_set( INTERRUPT_ULPWU_REGISTER, INTERRUPT_ULPWU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_set( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD2_REGISTER) && defined(INTERRUPT_AD2_BIT)
        case INTERRUPTS_AD2:
            interrupt_bit_set( INTERRUPT_AD2_REGISTER, INTERRUPT_AD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB0_REGISTER) && defined(INTERRUPT_RXB0_BIT)
        case INTERRUPTS_RXB0:
            interrupt_bit_set( INTERRUPT_RXB0_REGISTER, INTERRUPT_RXB0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB1_REGISTER) && defined(INTERRUPT_RXB1_BIT)
        case INTERRUPTS_RXB1:
            interrupt_bit_set( INTERRUPT_RXB1_REGISTER, INTERRUPT_RXB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB0_REGISTER) && defined(INTERRUPT_TXB0_BIT)
        case INTERRUPTS_TXB0:
            interrupt_bit_set( INTERRUPT_TXB0_REGISTER, INTERRUPT_TXB0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB1_REGISTER) && defined(INTERRUPT_TXB1_BIT)
        case INTERRUPTS_TXB1:
            interrupt_bit_set( INTERRUPT_TXB1_REGISTER, INTERRUPT_TXB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB2_REGISTER) && defined(INTERRUPT_TXB2_BIT)
        case INTERRUPTS_TXB2:
            interrupt_bit_set( INTERRUPT_TXB2_REGISTER, INTERRUPT_TXB2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ERR_REGISTER) && defined(INTERRUPT_ERR_BIT)
        case INTERRUPTS_ERR:
            interrupt_bit_set( INTERRUPT_ERR_REGISTER, INTERRUPT_ERR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WAK_REGISTER) && defined(INTERRUPT_WAK_BIT)
        case INTERRUPTS_WAK:
            interrupt_bit_set( INTERRUPT_WAK_REGISTER, INTERRUPT_WAK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IRX_REGISTER) && defined(INTERRUPT_IRX_BIT)
        case INTERRUPTS_IRX:
            interrupt_bit_set( INTERRUPT_IRX_REGISTER, INTERRUPT_IRX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP0_REGISTER) && defined(INTERRUPT_CMP0_BIT)
        case INTERRUPTS_CMP0:
            interrupt_bit_set( INTERRUPT_CMP0_REGISTER, INTERRUPT_CMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP1_REGISTER) && defined(INTERRUPT_CMP1_BIT)
        case INTERRUPTS_CMP1:
            interrupt_bit_set( INTERRUPT_CMP1_REGISTER, INTERRUPT_CMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP2_REGISTER) && defined(INTERRUPT_CMP2_BIT)
        case INTERRUPTS_CMP2:
            interrupt_bit_set( INTERRUPT_CMP2_REGISTER, INTERRUPT_CMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PT_REGISTER) && defined(INTERRUPT_PT_BIT)
        case INTERRUPTS_PT:
            interrupt_bit_set( INTERRUPT_PT_REGISTER, INTERRUPT_PT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLVD_REGISTER) && defined(INTERRUPT_HLVD_BIT)
        case INTERRUPTS_HLVD:
            interrupt_bit_set( INTERRUPT_HLVD_REGISTER, INTERRUPT_HLVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TB_REGISTER) && defined(INTERRUPT_TB_BIT)
        case INTERRUPTS_TB:
            interrupt_bit_set( INTERRUPT_TB_REGISTER, INTERRUPT_TB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_set( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2QE_REGISTER) && defined(INTERRUPT_IC2QE_BIT)
        case INTERRUPTS_IC2QE:
            interrupt_bit_set( INTERRUPT_IC2QE_REGISTER, INTERRUPT_IC2QE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3DR_REGISTER) && defined(INTERRUPT_IC3DR_BIT)
        case INTERRUPTS_IC3DR:
            interrupt_bit_set( INTERRUPT_IC3DR_REGISTER, INTERRUPT_IC3DR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_set( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RX0_REGISTER) && defined(INTERRUPT_RX0_BIT)
        case INTERRUPTS_RX0:
            interrupt_bit_set( INTERRUPT_RX0_REGISTER, INTERRUPT_RX0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RX1_REGISTER) && defined(INTERRUPT_RX1_BIT)
        case INTERRUPTS_RX1:
            interrupt_bit_set( INTERRUPT_RX1_REGISTER, INTERRUPT_RX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX0_REGISTER) && defined(INTERRUPT_TX0_BIT)
        case INTERRUPTS_TX0:
            interrupt_bit_set( INTERRUPT_TX0_REGISTER, INTERRUPT_TX0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IV_REGISTER) && defined(INTERRUPT_IV_BIT)
        case INTERRUPTS_IV:
            interrupt_bit_set( INTERRUPT_IV_REGISTER, INTERRUPT_IV_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB0IEPI_REGISTER) && defined(INTERRUPT_RXB0IEPI_BIT)
        case INTERRUPTS_RXB0IEPI:
            interrupt_bit_set( INTERRUPT_RXB0IEPI_REGISTER, INTERRUPT_RXB0IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB1IEPI_REGISTER) && defined(INTERRUPT_RXB1IEPI_BIT)
        case INTERRUPTS_RXB1IEPI:
            interrupt_bit_set( INTERRUPT_RXB1IEPI_REGISTER, INTERRUPT_RXB1IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB0IEPI_REGISTER) && defined(INTERRUPT_TXB0IEPI_BIT)
        case INTERRUPTS_TXB0IEPI:
            interrupt_bit_set( INTERRUPT_TXB0IEPI_REGISTER, INTERRUPT_TXB0IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB1IEPI_REGISTER) && defined(INTERRUPT_TXB1IEPI_BIT)
        case INTERRUPTS_TXB1IEPI:
            interrupt_bit_set( INTERRUPT_TXB1IEPI_REGISTER, INTERRUPT_TXB1IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB2IEPI_REGISTER) && defined(INTERRUPT_TXB2IEPI_BIT)
        case INTERRUPTS_TXB2IEPI:
            interrupt_bit_set( INTERRUPT_TXB2IEPI_REGISTER, INTERRUPT_TXB2IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOWM_REGISTER) && defined(INTERRUPT_FIFOWM_BIT)
        case INTERRUPTS_FIFOWM:
            interrupt_bit_set( INTERRUPT_FIFOWM_REGISTER, INTERRUPT_FIFOWM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXBn_REGISTER) && defined(INTERRUPT_RXBn_BIT)
        case INTERRUPTS_RXBn:
            interrupt_bit_set( INTERRUPT_RXBn_REGISTER, INTERRUPT_RXBn_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXBn_REGISTER) && defined(INTERRUPT_TXBn_BIT)
        case INTERRUPTS_TXBn:
            interrupt_bit_set( INTERRUPT_TXBn_REGISTER, INTERRUPT_TXBn_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOMW_REGISTER) && defined(INTERRUPT_FIFOMW_BIT)
        case INTERRUPTS_FIFOMW:
            interrupt_bit_set( INTERRUPT_FIFOMW_REGISTER, INTERRUPT_FIFOMW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM1_REGISTER) && defined(INTERRUPT_CM1_BIT)
        case INTERRUPTS_CM1:
            interrupt_bit_set( INTERRUPT_CM1_REGISTER, INTERRUPT_CM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM2_REGISTER) && defined(INTERRUPT_CM2_BIT)
        case INTERRUPTS_CM2:
            interrupt_bit_set( INTERRUPT_CM2_REGISTER, INTERRUPT_CM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_set( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_set( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_set( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SW_REGISTER) && defined(INTERRUPT_SW_BIT)
        case INTERRUPTS_SW:
            interrupt_bit_set( INTERRUPT_SW_REGISTER, INTERRUPT_SW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1SCNT_REGISTER) && defined(INTERRUPT_DMA1SCNT_BIT)
        case INTERRUPTS_DMA1SCNT:
            interrupt_bit_set( INTERRUPT_DMA1SCNT_REGISTER, INTERRUPT_DMA1SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1DCNT_REGISTER) && defined(INTERRUPT_DMA1DCNT_BIT)
        case INTERRUPTS_DMA1DCNT:
            interrupt_bit_set( INTERRUPT_DMA1DCNT_REGISTER, INTERRUPT_DMA1DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1OR_REGISTER) && defined(INTERRUPT_DMA1OR_BIT)
        case INTERRUPTS_DMA1OR:
            interrupt_bit_set( INTERRUPT_DMA1OR_REGISTER, INTERRUPT_DMA1OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1A_REGISTER) && defined(INTERRUPT_DMA1A_BIT)
        case INTERRUPTS_DMA1A:
            interrupt_bit_set( INTERRUPT_DMA1A_REGISTER, INTERRUPT_DMA1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1RX_REGISTER) && defined(INTERRUPT_SPI1RX_BIT)
        case INTERRUPTS_SPI1RX:
            interrupt_bit_set( INTERRUPT_SPI1RX_REGISTER, INTERRUPT_SPI1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1TX_REGISTER) && defined(INTERRUPT_SPI1TX_BIT)
        case INTERRUPTS_SPI1TX:
            interrupt_bit_set( INTERRUPT_SPI1TX_REGISTER, INTERRUPT_SPI1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1RX_REGISTER) && defined(INTERRUPT_I2C1RX_BIT)
        case INTERRUPTS_I2C1RX:
            interrupt_bit_set( INTERRUPT_I2C1RX_REGISTER, INTERRUPT_I2C1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1_REGISTER) && defined(INTERRUPT_SPI1_BIT)
        case INTERRUPTS_SPI1:
            interrupt_bit_set( INTERRUPT_SPI1_REGISTER, INTERRUPT_SPI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1TX_REGISTER) && defined(INTERRUPT_I2C1TX_BIT)
        case INTERRUPTS_I2C1TX:
            interrupt_bit_set( INTERRUPT_I2C1TX_REGISTER, INTERRUPT_I2C1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1_REGISTER) && defined(INTERRUPT_I2C1_BIT)
        case INTERRUPTS_I2C1:
            interrupt_bit_set( INTERRUPT_I2C1_REGISTER, INTERRUPT_I2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1E_REGISTER) && defined(INTERRUPT_I2C1E_BIT)
        case INTERRUPTS_I2C1E:
            interrupt_bit_set( INTERRUPT_I2C1E_REGISTER, INTERRUPT_I2C1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_set( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1_REGISTER) && defined(INTERRUPT_U1_BIT)
        case INTERRUPTS_U1:
            interrupt_bit_set( INTERRUPT_U1_REGISTER, INTERRUPT_U1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1RX_REGISTER) && defined(INTERRUPT_U1RX_BIT)
        case INTERRUPTS_U1RX:
            interrupt_bit_set( INTERRUPT_U1RX_REGISTER, INTERRUPT_U1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1TX_REGISTER) && defined(INTERRUPT_U1TX_BIT)
        case INTERRUPTS_U1TX:
            interrupt_bit_set( INTERRUPT_U1TX_REGISTER, INTERRUPT_U1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2SCNT_REGISTER) && defined(INTERRUPT_DMA2SCNT_BIT)
        case INTERRUPTS_DMA2SCNT:
            interrupt_bit_set( INTERRUPT_DMA2SCNT_REGISTER, INTERRUPT_DMA2SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2DCNT_REGISTER) && defined(INTERRUPT_DMA2DCNT_BIT)
        case INTERRUPTS_DMA2DCNT:
            interrupt_bit_set( INTERRUPT_DMA2DCNT_REGISTER, INTERRUPT_DMA2DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2OR_REGISTER) && defined(INTERRUPT_DMA2OR_BIT)
        case INTERRUPTS_DMA2OR:
            interrupt_bit_set( INTERRUPT_DMA2OR_REGISTER, INTERRUPT_DMA2OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2A_REGISTER) && defined(INTERRUPT_DMA2A_BIT)
        case INTERRUPTS_DMA2A:
            interrupt_bit_set( INTERRUPT_DMA2A_REGISTER, INTERRUPT_DMA2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2RX_REGISTER) && defined(INTERRUPT_I2C2RX_BIT)
        case INTERRUPTS_I2C2RX:
            interrupt_bit_set( INTERRUPT_I2C2RX_REGISTER, INTERRUPT_I2C2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2TX_REGISTER) && defined(INTERRUPT_I2C2TX_BIT)
        case INTERRUPTS_I2C2TX:
            interrupt_bit_set( INTERRUPT_I2C2TX_REGISTER, INTERRUPT_I2C2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2_REGISTER) && defined(INTERRUPT_I2C2_BIT)
        case INTERRUPTS_I2C2:
            interrupt_bit_set( INTERRUPT_I2C2_REGISTER, INTERRUPT_I2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2E_REGISTER) && defined(INTERRUPT_I2C2E_BIT)
        case INTERRUPTS_I2C2E:
            interrupt_bit_set( INTERRUPT_I2C2E_REGISTER, INTERRUPT_I2C2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2RX_REGISTER) && defined(INTERRUPT_U2RX_BIT)
        case INTERRUPTS_U2RX:
            interrupt_bit_set( INTERRUPT_U2RX_REGISTER, INTERRUPT_U2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2TX_REGISTER) && defined(INTERRUPT_U2TX_BIT)
        case INTERRUPTS_U2TX:
            interrupt_bit_set( INTERRUPT_U2TX_REGISTER, INTERRUPT_U2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_set( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2_REGISTER) && defined(INTERRUPT_U2_BIT)
        case INTERRUPTS_U2:
            interrupt_bit_set( INTERRUPT_U2_REGISTER, INTERRUPT_U2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ST_REGISTER) && defined(INTERRUPT_ST_BIT)
        case INTERRUPTS_ST:
            interrupt_bit_set( INTERRUPT_ST_REGISTER, INTERRUPT_ST_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOF_REGISTER) && defined(INTERRUPT_FIFOF_BIT)
        case INTERRUPTS_FIFOF:
            interrupt_bit_set( INTERRUPT_FIFOF_REGISTER, INTERRUPT_FIFOF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXBnIEPI_REGISTER) && defined(INTERRUPT_RXBnIEPI_BIT)
        case INTERRUPTS_RXBnIEPI:
            interrupt_bit_set( INTERRUPT_RXBnIEPI_REGISTER, INTERRUPT_RXBnIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXBnIEPI_REGISTER) && defined(INTERRUPT_TXBnIEPI_BIT)
        case INTERRUPTS_TXBnIEPI:
            interrupt_bit_set( INTERRUPT_TXBnIEPI_REGISTER, INTERRUPT_TXBnIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM3_REGISTER) && defined(INTERRUPT_CM3_BIT)
        case INTERRUPTS_CM3:
            interrupt_bit_set( INTERRUPT_CM3_REGISTER, INTERRUPT_CM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPP_REGISTER) && defined(INTERRUPT_SPP_BIT)
        case INTERRUPTS_SPP:
            interrupt_bit_set( INTERRUPT_SPP_REGISTER, INTERRUPT_SPP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP1_REGISTER) && defined(INTERRUPT_ECCP1_BIT)
        case INTERRUPTS_ECCP1:
            interrupt_bit_set( INTERRUPT_ECCP1_REGISTER, INTERRUPT_ECCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_set( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC5_REGISTER) && defined(INTERRUPT_CLC5_BIT)
        case INTERRUPTS_CLC5:
            interrupt_bit_set( INTERRUPT_CLC5_REGISTER, INTERRUPT_CLC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC6_REGISTER) && defined(INTERRUPT_CLC6_BIT)
        case INTERRUPTS_CLC6:
            interrupt_bit_set( INTERRUPT_CLC6_REGISTER, INTERRUPT_CLC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC7_REGISTER) && defined(INTERRUPT_CLC7_BIT)
        case INTERRUPTS_CLC7:
            interrupt_bit_set( INTERRUPT_CLC7_REGISTER, INTERRUPT_CLC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC8_REGISTER) && defined(INTERRUPT_CLC8_BIT)
        case INTERRUPTS_CLC8:
            interrupt_bit_set( INTERRUPT_CLC8_REGISTER, INTERRUPT_CLC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1P_REGISTER) && defined(INTERRUPT_PWM1P_BIT)
        case INTERRUPTS_PWM1P:
            interrupt_bit_set( INTERRUPT_PWM1P_REGISTER, INTERRUPT_PWM1P_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2RX_REGISTER) && defined(INTERRUPT_SPI2RX_BIT)
        case INTERRUPTS_SPI2RX:
            interrupt_bit_set( INTERRUPT_SPI2RX_REGISTER, INTERRUPT_SPI2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2TX_REGISTER) && defined(INTERRUPT_SPI2TX_BIT)
        case INTERRUPTS_SPI2TX:
            interrupt_bit_set( INTERRUPT_SPI2TX_REGISTER, INTERRUPT_SPI2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2_REGISTER) && defined(INTERRUPT_SPI2_BIT)
        case INTERRUPTS_SPI2:
            interrupt_bit_set( INTERRUPT_SPI2_REGISTER, INTERRUPT_SPI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2P_REGISTER) && defined(INTERRUPT_PWM2P_BIT)
        case INTERRUPTS_PWM2P:
            interrupt_bit_set( INTERRUPT_PWM2P_REGISTER, INTERRUPT_PWM2P_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3P_REGISTER) && defined(INTERRUPT_PWM3P_BIT)
        case INTERRUPTS_PWM3P:
            interrupt_bit_set( INTERRUPT_PWM3P_REGISTER, INTERRUPT_PWM3P_BIT );
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
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_set( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3_REGISTER) && defined(INTERRUPT_U3_BIT)
        case INTERRUPTS_U3:
            interrupt_bit_set( INTERRUPT_U3_REGISTER, INTERRUPT_U3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO2_REGISTER) && defined(INTERRUPT_NCO2_BIT)
        case INTERRUPTS_NCO2:
            interrupt_bit_set( INTERRUPT_NCO2_REGISTER, INTERRUPT_NCO2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3SCNT_REGISTER) && defined(INTERRUPT_DMA3SCNT_BIT)
        case INTERRUPTS_DMA3SCNT:
            interrupt_bit_set( INTERRUPT_DMA3SCNT_REGISTER, INTERRUPT_DMA3SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3DCNT_REGISTER) && defined(INTERRUPT_DMA3DCNT_BIT)
        case INTERRUPTS_DMA3DCNT:
            interrupt_bit_set( INTERRUPT_DMA3DCNT_REGISTER, INTERRUPT_DMA3DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3OR_REGISTER) && defined(INTERRUPT_DMA3OR_BIT)
        case INTERRUPTS_DMA3OR:
            interrupt_bit_set( INTERRUPT_DMA3OR_REGISTER, INTERRUPT_DMA3OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3A_REGISTER) && defined(INTERRUPT_DMA3A_BIT)
        case INTERRUPTS_DMA3A:
            interrupt_bit_set( INTERRUPT_DMA3A_REGISTER, INTERRUPT_DMA3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4SCNT_REGISTER) && defined(INTERRUPT_DMA4SCNT_BIT)
        case INTERRUPTS_DMA4SCNT:
            interrupt_bit_set( INTERRUPT_DMA4SCNT_REGISTER, INTERRUPT_DMA4SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4DCNT_REGISTER) && defined(INTERRUPT_DMA4DCNT_BIT)
        case INTERRUPTS_DMA4DCNT:
            interrupt_bit_set( INTERRUPT_DMA4DCNT_REGISTER, INTERRUPT_DMA4DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4OR_REGISTER) && defined(INTERRUPT_DMA4OR_BIT)
        case INTERRUPTS_DMA4OR:
            interrupt_bit_set( INTERRUPT_DMA4OR_REGISTER, INTERRUPT_DMA4OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4A_REGISTER) && defined(INTERRUPT_DMA4A_BIT)
        case INTERRUPTS_DMA4A:
            interrupt_bit_set( INTERRUPT_DMA4A_REGISTER, INTERRUPT_DMA4A_BIT );
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
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_set( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4_REGISTER) && defined(INTERRUPT_U4_BIT)
        case INTERRUPTS_U4:
            interrupt_bit_set( INTERRUPT_U4_REGISTER, INTERRUPT_U4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5SCNT_REGISTER) && defined(INTERRUPT_DMA5SCNT_BIT)
        case INTERRUPTS_DMA5SCNT:
            interrupt_bit_set( INTERRUPT_DMA5SCNT_REGISTER, INTERRUPT_DMA5SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5DCNT_REGISTER) && defined(INTERRUPT_DMA5DCNT_BIT)
        case INTERRUPTS_DMA5DCNT:
            interrupt_bit_set( INTERRUPT_DMA5DCNT_REGISTER, INTERRUPT_DMA5DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5OR_REGISTER) && defined(INTERRUPT_DMA5OR_BIT)
        case INTERRUPTS_DMA5OR:
            interrupt_bit_set( INTERRUPT_DMA5OR_REGISTER, INTERRUPT_DMA5OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5A_REGISTER) && defined(INTERRUPT_DMA5A_BIT)
        case INTERRUPTS_DMA5A:
            interrupt_bit_set( INTERRUPT_DMA5A_REGISTER, INTERRUPT_DMA5A_BIT );
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
        #if defined(INTERRUPT_U5E_REGISTER) && defined(INTERRUPT_U5E_BIT)
        case INTERRUPTS_U5E:
            interrupt_bit_set( INTERRUPT_U5E_REGISTER, INTERRUPT_U5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5_REGISTER) && defined(INTERRUPT_U5_BIT)
        case INTERRUPTS_U5:
            interrupt_bit_set( INTERRUPT_U5_REGISTER, INTERRUPT_U5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6SCNT_REGISTER) && defined(INTERRUPT_DMA6SCNT_BIT)
        case INTERRUPTS_DMA6SCNT:
            interrupt_bit_set( INTERRUPT_DMA6SCNT_REGISTER, INTERRUPT_DMA6SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6DCNT_REGISTER) && defined(INTERRUPT_DMA6DCNT_BIT)
        case INTERRUPTS_DMA6DCNT:
            interrupt_bit_set( INTERRUPT_DMA6DCNT_REGISTER, INTERRUPT_DMA6DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6OR_REGISTER) && defined(INTERRUPT_DMA6OR_BIT)
        case INTERRUPTS_DMA6OR:
            interrupt_bit_set( INTERRUPT_DMA6OR_REGISTER, INTERRUPT_DMA6OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6A_REGISTER) && defined(INTERRUPT_DMA6A_BIT)
        case INTERRUPTS_DMA6A:
            interrupt_bit_set( INTERRUPT_DMA6A_REGISTER, INTERRUPT_DMA6A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO3_REGISTER) && defined(INTERRUPT_NCO3_BIT)
        case INTERRUPTS_NCO3:
            interrupt_bit_set( INTERRUPT_NCO3_REGISTER, INTERRUPT_NCO3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP3_REGISTER) && defined(INTERRUPT_CMP3_BIT)
        case INTERRUPTS_CMP3:
            interrupt_bit_set( INTERRUPT_CMP3_REGISTER, INTERRUPT_CMP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX3_REGISTER) && defined(INTERRUPT_TX3_BIT)
        case INTERRUPTS_TX3:
            interrupt_bit_set( INTERRUPT_TX3_REGISTER, INTERRUPT_TX3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC3_REGISTER) && defined(INTERRUPT_RC3_BIT)
        case INTERRUPTS_RC3:
            interrupt_bit_set( INTERRUPT_RC3_REGISTER, INTERRUPT_RC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX4_REGISTER) && defined(INTERRUPT_TX4_BIT)
        case INTERRUPTS_TX4:
            interrupt_bit_set( INTERRUPT_TX4_REGISTER, INTERRUPT_TX4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC4_REGISTER) && defined(INTERRUPT_RC4_BIT)
        case INTERRUPTS_RC4:
            interrupt_bit_set( INTERRUPT_RC4_REGISTER, INTERRUPT_RC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP3_REGISTER) && defined(INTERRUPT_ECCP3_BIT)
        case INTERRUPTS_ECCP3:
            interrupt_bit_set( INTERRUPT_ECCP3_REGISTER, INTERRUPT_ECCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACTLOCK_REGISTER) && defined(INTERRUPT_ACTLOCK_BIT)
        case INTERRUPTS_ACTLOCK:
            interrupt_bit_set( INTERRUPT_ACTLOCK_REGISTER, INTERRUPT_ACTLOCK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACTORS_REGISTER) && defined(INTERRUPT_ACTORS_BIT)
        case INTERRUPTS_ACTORS:
            interrupt_bit_set( INTERRUPT_ACTORS_REGISTER, INTERRUPT_ACTORS_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_set( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX5_REGISTER) && defined(INTERRUPT_TX5_BIT)
        case INTERRUPTS_TX5:
            interrupt_bit_set( INTERRUPT_TX5_REGISTER, INTERRUPT_TX5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC5_REGISTER) && defined(INTERRUPT_RC5_BIT)
        case INTERRUPTS_RC5:
            interrupt_bit_set( INTERRUPT_RC5_REGISTER, INTERRUPT_RC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR7_REGISTER) && defined(INTERRUPT_TMR7_BIT)
        case INTERRUPTS_TMR7:
            interrupt_bit_set( INTERRUPT_TMR7_REGISTER, INTERRUPT_TMR7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR7G_REGISTER) && defined(INTERRUPT_TMR7G_BIT)
        case INTERRUPTS_TMR7G:
            interrupt_bit_set( INTERRUPT_TMR7G_REGISTER, INTERRUPT_TMR7G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXIEPI_REGISTER) && defined(INTERRUPT_TXIEPI_BIT)
        case INTERRUPTS_TXIEPI:
            interrupt_bit_set( INTERRUPT_TXIEPI_REGISTER, INTERRUPT_TXIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETH_REGISTER) && defined(INTERRUPT_ETH_BIT)
        case INTERRUPTS_ETH:
            interrupt_bit_set( INTERRUPT_ETH_REGISTER, INTERRUPT_ETH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR12_REGISTER) && defined(INTERRUPT_TMR12_BIT)
        case INTERRUPTS_TMR12:
            interrupt_bit_set( INTERRUPT_TMR12_REGISTER, INTERRUPT_TMR12_BIT );
            break;
        #endif

        default:
            break;
    }
}

void interrupt_disable( int interrupt ) {
    switch ( interrupt ) {
        #if defined(INTERRUPT_TMR2_REGISTER) && defined(INTERRUPT_TMR2_BIT)
        case INTERRUPTS_TMR2:
            interrupt_bit_clear( INTERRUPT_TMR2_REGISTER, INTERRUPT_TMR2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC1_REGISTER) && defined(INTERRUPT_CLC1_BIT)
        case INTERRUPTS_CLC1:
            interrupt_bit_clear( INTERRUPT_CLC1_REGISTER, INTERRUPT_CLC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO1_REGISTER) && defined(INTERRUPT_NCO1_BIT)
        case INTERRUPTS_NCO1:
            interrupt_bit_clear( INTERRUPT_NCO1_REGISTER, INTERRUPT_NCO1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD_REGISTER) && defined(INTERRUPT_AD_BIT)
        case INTERRUPTS_AD:
            interrupt_bit_clear( INTERRUPT_AD_REGISTER, INTERRUPT_AD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR1_REGISTER) && defined(INTERRUPT_TMR1_BIT)
        case INTERRUPTS_TMR1:
            interrupt_bit_clear( INTERRUPT_TMR1_REGISTER, INTERRUPT_TMR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR1G_REGISTER) && defined(INTERRUPT_TMR1G_BIT)
        case INTERRUPTS_TMR1G:
            interrupt_bit_clear( INTERRUPT_TMR1G_REGISTER, INTERRUPT_TMR1G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C1_REGISTER) && defined(INTERRUPT_C1_BIT)
        case INTERRUPTS_C1:
            interrupt_bit_clear( INTERRUPT_C1_REGISTER, INTERRUPT_C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC2_REGISTER) && defined(INTERRUPT_CLC2_BIT)
        case INTERRUPTS_CLC2:
            interrupt_bit_clear( INTERRUPT_CLC2_REGISTER, INTERRUPT_CLC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1_REGISTER) && defined(INTERRUPT_PWM1_BIT)
        case INTERRUPTS_PWM1:
            interrupt_bit_clear( INTERRUPT_PWM1_REGISTER, INTERRUPT_PWM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2_REGISTER) && defined(INTERRUPT_PWM2_BIT)
        case INTERRUPTS_PWM2:
            interrupt_bit_clear( INTERRUPT_PWM2_REGISTER, INTERRUPT_PWM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3_REGISTER) && defined(INTERRUPT_PWM3_BIT)
        case INTERRUPTS_PWM3:
            interrupt_bit_clear( INTERRUPT_PWM3_REGISTER, INTERRUPT_PWM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX_REGISTER) && defined(INTERRUPT_TX_BIT)
        case INTERRUPTS_TX:
            interrupt_bit_clear( INTERRUPT_TX_REGISTER, INTERRUPT_TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC_REGISTER) && defined(INTERRUPT_RC_BIT)
        case INTERRUPTS_RC:
            interrupt_bit_clear( INTERRUPT_RC_REGISTER, INTERRUPT_RC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP1_REGISTER) && defined(INTERRUPT_CCP1_BIT)
        case INTERRUPTS_CCP1:
            interrupt_bit_clear( INTERRUPT_CCP1_REGISTER, INTERRUPT_CCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP2_REGISTER) && defined(INTERRUPT_CCP2_BIT)
        case INTERRUPTS_CCP2:
            interrupt_bit_clear( INTERRUPT_CCP2_REGISTER, INTERRUPT_CCP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR4_REGISTER) && defined(INTERRUPT_TMR4_BIT)
        case INTERRUPTS_TMR4:
            interrupt_bit_clear( INTERRUPT_TMR4_REGISTER, INTERRUPT_TMR4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR6_REGISTER) && defined(INTERRUPT_TMR6_BIT)
        case INTERRUPTS_TMR6:
            interrupt_bit_clear( INTERRUPT_TMR6_REGISTER, INTERRUPT_TMR6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C2_REGISTER) && defined(INTERRUPT_C2_BIT)
        case INTERRUPTS_C2:
            interrupt_bit_clear( INTERRUPT_C2_REGISTER, INTERRUPT_C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ZCD_REGISTER) && defined(INTERRUPT_ZCD_BIT)
        case INTERRUPTS_ZCD:
            interrupt_bit_clear( INTERRUPT_ZCD_REGISTER, INTERRUPT_ZCD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG_REGISTER) && defined(INTERRUPT_CWG_BIT)
        case INTERRUPTS_CWG:
            interrupt_bit_clear( INTERRUPT_CWG_REGISTER, INTERRUPT_CWG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1_REGISTER) && defined(INTERRUPT_SMT1_BIT)
        case INTERRUPTS_SMT1:
            interrupt_bit_clear( INTERRUPT_SMT1_REGISTER, INTERRUPT_SMT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1PRA_REGISTER) && defined(INTERRUPT_SMT1PRA_BIT)
        case INTERRUPTS_SMT1PRA:
            interrupt_bit_clear( INTERRUPT_SMT1PRA_REGISTER, INTERRUPT_SMT1PRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT1PWA_REGISTER) && defined(INTERRUPT_SMT1PWA_BIT)
        case INTERRUPTS_SMT1PWA:
            interrupt_bit_clear( INTERRUPT_SMT1PWA_REGISTER, INTERRUPT_SMT1PWA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2_REGISTER) && defined(INTERRUPT_SMT2_BIT)
        case INTERRUPTS_SMT2:
            interrupt_bit_clear( INTERRUPT_SMT2_REGISTER, INTERRUPT_SMT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2PRA_REGISTER) && defined(INTERRUPT_SMT2PRA_BIT)
        case INTERRUPTS_SMT2PRA:
            interrupt_bit_clear( INTERRUPT_SMT2PRA_REGISTER, INTERRUPT_SMT2PRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SMT2PWA_REGISTER) && defined(INTERRUPT_SMT2PWA_BIT)
        case INTERRUPTS_SMT2PWA:
            interrupt_bit_clear( INTERRUPT_SMT2PWA_REGISTER, INTERRUPT_SMT2PWA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CRC_REGISTER) && defined(INTERRUPT_CRC_BIT)
        case INTERRUPTS_CRC:
            interrupt_bit_clear( INTERRUPT_CRC_REGISTER, INTERRUPT_CRC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SCAN_REGISTER) && defined(INTERRUPT_SCAN_BIT)
        case INTERRUPTS_SCAN:
            interrupt_bit_clear( INTERRUPT_SCAN_REGISTER, INTERRUPT_SCAN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP1_REGISTER) && defined(INTERRUPT_SSP1_BIT)
        case INTERRUPTS_SSP1:
            interrupt_bit_clear( INTERRUPT_SSP1_REGISTER, INTERRUPT_SSP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL1_REGISTER) && defined(INTERRUPT_BCL1_BIT)
        case INTERRUPTS_BCL1:
            interrupt_bit_clear( INTERRUPT_BCL1_REGISTER, INTERRUPT_BCL1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EE_REGISTER) && defined(INTERRUPT_EE_BIT)
        case INTERRUPTS_EE:
            interrupt_bit_clear( INTERRUPT_EE_REGISTER, INTERRUPT_EE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OSF_REGISTER) && defined(INTERRUPT_OSF_BIT)
        case INTERRUPTS_OSF:
            interrupt_bit_clear( INTERRUPT_OSF_REGISTER, INTERRUPT_OSF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T1_REGISTER) && defined(INTERRUPT_T1_BIT)
        case INTERRUPTS_T1:
            interrupt_bit_clear( INTERRUPT_T1_REGISTER, INTERRUPT_T1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM_REGISTER) && defined(INTERRUPT_CM_BIT)
        case INTERRUPTS_CM:
            interrupt_bit_clear( INTERRUPT_CM_REGISTER, INTERRUPT_CM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP_REGISTER) && defined(INTERRUPT_ECCP_BIT)
        case INTERRUPTS_ECCP:
            interrupt_bit_clear( INTERRUPT_ECCP_REGISTER, INTERRUPT_ECCP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_T2_REGISTER) && defined(INTERRUPT_T2_BIT)
        case INTERRUPTS_T2:
            interrupt_bit_clear( INTERRUPT_T2_REGISTER, INTERRUPT_T2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP_REGISTER) && defined(INTERRUPT_CCP_BIT)
        case INTERRUPTS_CCP:
            interrupt_bit_clear( INTERRUPT_CCP_REGISTER, INTERRUPT_CCP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CR_REGISTER) && defined(INTERRUPT_CR_BIT)
        case INTERRUPTS_CR:
            interrupt_bit_clear( INTERRUPT_CR_REGISTER, INTERRUPT_CR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LVD_REGISTER) && defined(INTERRUPT_LVD_BIT)
        case INTERRUPTS_LVD:
            interrupt_bit_clear( INTERRUPT_LVD_REGISTER, INTERRUPT_LVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLTMR1_REGISTER) && defined(INTERRUPT_HLTMR1_BIT)
        case INTERRUPTS_HLTMR1:
            interrupt_bit_clear( INTERRUPT_HLTMR1_REGISTER, INTERRUPT_HLTMR1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG1_REGISTER) && defined(INTERRUPT_COG1_BIT)
        case INTERRUPTS_COG1:
            interrupt_bit_clear( INTERRUPT_COG1_REGISTER, INTERRUPT_COG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP_REGISTER) && defined(INTERRUPT_SSP_BIT)
        case INTERRUPTS_SSP:
            interrupt_bit_clear( INTERRUPT_SSP_REGISTER, INTERRUPT_SSP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSP_REGISTER) && defined(INTERRUPT_PSP_BIT)
        case INTERRUPTS_PSP:
            interrupt_bit_clear( INTERRUPT_PSP_REGISTER, INTERRUPT_PSP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL_REGISTER) && defined(INTERRUPT_BCL_BIT)
        case INTERRUPTS_BCL:
            interrupt_bit_clear( INTERRUPT_BCL_REGISTER, INTERRUPT_BCL_BIT );
            break;
        #endif
        #if defined(INTERRUPT_USB_REGISTER) && defined(INTERRUPT_USB_BIT)
        case INTERRUPTS_USB:
            interrupt_bit_clear( INTERRUPT_USB_REGISTER, INTERRUPT_USB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_LCD_REGISTER) && defined(INTERRUPT_LCD_BIT)
        case INTERRUPTS_LCD:
            interrupt_bit_clear( INTERRUPT_LCD_REGISTER, INTERRUPT_LCD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RBIE_REGISTER) && defined(INTERRUPT_RBIE_BIT)
        case INTERRUPTS_RBIE:
            interrupt_bit_clear( INTERRUPT_RBIE_REGISTER, INTERRUPT_RBIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INTE_REGISTER) && defined(INTERRUPT_INTE_BIT)
        case INTERRUPTS_INTE:
            interrupt_bit_clear( INTERRUPT_INTE_REGISTER, INTERRUPT_INTE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TOIE_REGISTER) && defined(INTERRUPT_TOIE_BIT)
        case INTERRUPTS_TOIE:
            interrupt_bit_clear( INTERRUPT_TOIE_REGISTER, INTERRUPT_TOIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_EEIE_REGISTER) && defined(INTERRUPT_EEIE_BIT)
        case INTERRUPTS_EEIE:
            interrupt_bit_clear( INTERRUPT_EEIE_REGISTER, INTERRUPT_EEIE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACT_REGISTER) && defined(INTERRUPT_ACT_BIT)
        case INTERRUPTS_ACT:
            interrupt_bit_clear( INTERRUPT_ACT_REGISTER, INTERRUPT_ACT_BIT );
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
        #if defined(INTERRUPT_TX1_REGISTER) && defined(INTERRUPT_TX1_BIT)
        case INTERRUPTS_TX1:
            interrupt_bit_clear( INTERRUPT_TX1_REGISTER, INTERRUPT_TX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC1_REGISTER) && defined(INTERRUPT_RC1_BIT)
        case INTERRUPTS_RC1:
            interrupt_bit_clear( INTERRUPT_RC1_REGISTER, INTERRUPT_RC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR8_REGISTER) && defined(INTERRUPT_TMR8_BIT)
        case INTERRUPTS_TMR8:
            interrupt_bit_clear( INTERRUPT_TMR8_REGISTER, INTERRUPT_TMR8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR10_REGISTER) && defined(INTERRUPT_TMR10_BIT)
        case INTERRUPTS_TMR10:
            interrupt_bit_clear( INTERRUPT_TMR10_REGISTER, INTERRUPT_TMR10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR3G_REGISTER) && defined(INTERRUPT_TMR3G_BIT)
        case INTERRUPTS_TMR3G:
            interrupt_bit_clear( INTERRUPT_TMR3G_REGISTER, INTERRUPT_TMR3G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR5G_REGISTER) && defined(INTERRUPT_TMR5G_BIT)
        case INTERRUPTS_TMR5G:
            interrupt_bit_clear( INTERRUPT_TMR5G_REGISTER, INTERRUPT_TMR5G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR3_REGISTER) && defined(INTERRUPT_TMR3_BIT)
        case INTERRUPTS_TMR3:
            interrupt_bit_clear( INTERRUPT_TMR3_REGISTER, INTERRUPT_TMR3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR5_REGISTER) && defined(INTERRUPT_TMR5_BIT)
        case INTERRUPTS_TMR5:
            interrupt_bit_clear( INTERRUPT_TMR5_REGISTER, INTERRUPT_TMR5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP3_REGISTER) && defined(INTERRUPT_CCP3_BIT)
        case INTERRUPTS_CCP3:
            interrupt_bit_clear( INTERRUPT_CCP3_REGISTER, INTERRUPT_CCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP4_REGISTER) && defined(INTERRUPT_CCP4_BIT)
        case INTERRUPTS_CCP4:
            interrupt_bit_clear( INTERRUPT_CCP4_REGISTER, INTERRUPT_CCP4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP5_REGISTER) && defined(INTERRUPT_CCP5_BIT)
        case INTERRUPTS_CCP5:
            interrupt_bit_clear( INTERRUPT_CCP5_REGISTER, INTERRUPT_CCP5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP6_REGISTER) && defined(INTERRUPT_CCP6_BIT)
        case INTERRUPTS_CCP6:
            interrupt_bit_clear( INTERRUPT_CCP6_REGISTER, INTERRUPT_CCP6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SSP2_REGISTER) && defined(INTERRUPT_SSP2_BIT)
        case INTERRUPTS_SSP2:
            interrupt_bit_clear( INTERRUPT_SSP2_REGISTER, INTERRUPT_SSP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_BCL2_REGISTER) && defined(INTERRUPT_BCL2_BIT)
        case INTERRUPTS_BCL2:
            interrupt_bit_clear( INTERRUPT_BCL2_REGISTER, INTERRUPT_BCL2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP7_REGISTER) && defined(INTERRUPT_CCP7_BIT)
        case INTERRUPTS_CCP7:
            interrupt_bit_clear( INTERRUPT_CCP7_REGISTER, INTERRUPT_CCP7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP8_REGISTER) && defined(INTERRUPT_CCP8_BIT)
        case INTERRUPTS_CCP8:
            interrupt_bit_clear( INTERRUPT_CCP8_REGISTER, INTERRUPT_CCP8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX2_REGISTER) && defined(INTERRUPT_TX2_BIT)
        case INTERRUPTS_TX2:
            interrupt_bit_clear( INTERRUPT_TX2_REGISTER, INTERRUPT_TX2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC2_REGISTER) && defined(INTERRUPT_RC2_BIT)
        case INTERRUPTS_RC2:
            interrupt_bit_clear( INTERRUPT_RC2_REGISTER, INTERRUPT_RC2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP9_REGISTER) && defined(INTERRUPT_CCP9_BIT)
        case INTERRUPTS_CCP9:
            interrupt_bit_clear( INTERRUPT_CCP9_REGISTER, INTERRUPT_CCP9_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CCP10_REGISTER) && defined(INTERRUPT_CCP10_BIT)
        case INTERRUPTS_CCP10:
            interrupt_bit_clear( INTERRUPT_CCP10_REGISTER, INTERRUPT_CCP10_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IN_REGISTER) && defined(INTERRUPT_IN_BIT)
        case INTERRUPTS_IN:
            interrupt_bit_clear( INTERRUPT_IN_REGISTER, INTERRUPT_IN_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IOC_REGISTER) && defined(INTERRUPT_IOC_BIT)
        case INTERRUPTS_IOC:
            interrupt_bit_clear( INTERRUPT_IOC_REGISTER, INTERRUPT_IOC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR0_REGISTER) && defined(INTERRUPT_TMR0_BIT)
        case INTERRUPTS_TMR0:
            interrupt_bit_clear( INTERRUPT_TMR0_REGISTER, INTERRUPT_TMR0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CSW_REGISTER) && defined(INTERRUPT_CSW_BIT)
        case INTERRUPTS_CSW:
            interrupt_bit_clear( INTERRUPT_CSW_REGISTER, INTERRUPT_CSW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG1_REGISTER) && defined(INTERRUPT_CWG1_BIT)
        case INTERRUPTS_CWG1:
            interrupt_bit_clear( INTERRUPT_CWG1_REGISTER, INTERRUPT_CWG1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NVM_REGISTER) && defined(INTERRUPT_NVM_BIT)
        case INTERRUPTS_NVM:
            interrupt_bit_clear( INTERRUPT_NVM_REGISTER, INTERRUPT_NVM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO_REGISTER) && defined(INTERRUPT_NCO_BIT)
        case INTERRUPTS_NCO:
            interrupt_bit_clear( INTERRUPT_NCO_REGISTER, INTERRUPT_NCO_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ADT_REGISTER) && defined(INTERRUPT_ADT_BIT)
        case INTERRUPTS_ADT:
            interrupt_bit_clear( INTERRUPT_ADT_REGISTER, INTERRUPT_ADT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM4_REGISTER) && defined(INTERRUPT_PWM4_BIT)
        case INTERRUPTS_PWM4:
            interrupt_bit_clear( INTERRUPT_PWM4_REGISTER, INTERRUPT_PWM4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PID1D_REGISTER) && defined(INTERRUPT_PID1D_BIT)
        case INTERRUPTS_PID1D:
            interrupt_bit_clear( INTERRUPT_PID1D_REGISTER, INTERRUPT_PID1D_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PID1E_REGISTER) && defined(INTERRUPT_PID1E_BIT)
        case INTERRUPTS_PID1E:
            interrupt_bit_clear( INTERRUPT_PID1E_REGISTER, INTERRUPT_PID1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AT1_REGISTER) && defined(INTERRUPT_AT1_BIT)
        case INTERRUPTS_AT1:
            interrupt_bit_clear( INTERRUPT_AT1_REGISTER, INTERRUPT_AT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_OSCF_REGISTER) && defined(INTERRUPT_OSCF_BIT)
        case INTERRUPTS_OSCF:
            interrupt_bit_clear( INTERRUPT_OSCF_REGISTER, INTERRUPT_OSCF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG_REGISTER) && defined(INTERRUPT_COG_BIT)
        case INTERRUPTS_COG:
            interrupt_bit_clear( INTERRUPT_COG_REGISTER, INTERRUPT_COG_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM5_REGISTER) && defined(INTERRUPT_PWM5_BIT)
        case INTERRUPTS_PWM5:
            interrupt_bit_clear( INTERRUPT_PWM5_REGISTER, INTERRUPT_PWM5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C3_REGISTER) && defined(INTERRUPT_C3_BIT)
        case INTERRUPTS_C3:
            interrupt_bit_clear( INTERRUPT_C3_REGISTER, INTERRUPT_C3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C4_REGISTER) && defined(INTERRUPT_C4_BIT)
        case INTERRUPTS_C4:
            interrupt_bit_clear( INTERRUPT_C4_REGISTER, INTERRUPT_C4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG2_REGISTER) && defined(INTERRUPT_COG2_BIT)
        case INTERRUPTS_COG2:
            interrupt_bit_clear( INTERRUPT_COG2_REGISTER, INTERRUPT_COG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM6_REGISTER) && defined(INTERRUPT_PWM6_BIT)
        case INTERRUPTS_PWM6:
            interrupt_bit_clear( INTERRUPT_PWM6_REGISTER, INTERRUPT_PWM6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C5_REGISTER) && defined(INTERRUPT_C5_BIT)
        case INTERRUPTS_C5:
            interrupt_bit_clear( INTERRUPT_C5_REGISTER, INTERRUPT_C5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C6_REGISTER) && defined(INTERRUPT_C6_BIT)
        case INTERRUPTS_C6:
            interrupt_bit_clear( INTERRUPT_C6_REGISTER, INTERRUPT_C6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG3_REGISTER) && defined(INTERRUPT_COG3_BIT)
        case INTERRUPTS_COG3:
            interrupt_bit_clear( INTERRUPT_COG3_REGISTER, INTERRUPT_COG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM11_REGISTER) && defined(INTERRUPT_PWM11_BIT)
        case INTERRUPTS_PWM11:
            interrupt_bit_clear( INTERRUPT_PWM11_REGISTER, INTERRUPT_PWM11_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C7_REGISTER) && defined(INTERRUPT_C7_BIT)
        case INTERRUPTS_C7:
            interrupt_bit_clear( INTERRUPT_C7_REGISTER, INTERRUPT_C7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_C8_REGISTER) && defined(INTERRUPT_C8_BIT)
        case INTERRUPTS_C8:
            interrupt_bit_clear( INTERRUPT_C8_REGISTER, INTERRUPT_C8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_COG4_REGISTER) && defined(INTERRUPT_COG4_BIT)
        case INTERRUPTS_COG4:
            interrupt_bit_clear( INTERRUPT_COG4_REGISTER, INTERRUPT_COG4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM12_REGISTER) && defined(INTERRUPT_PWM12_BIT)
        case INTERRUPTS_PWM12:
            interrupt_bit_clear( INTERRUPT_PWM12_REGISTER, INTERRUPT_PWM12_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC1S_REGISTER) && defined(INTERRUPT_PSMC1S_BIT)
        case INTERRUPTS_PSMC1S:
            interrupt_bit_clear( INTERRUPT_PSMC1S_REGISTER, INTERRUPT_PSMC1S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC2S_REGISTER) && defined(INTERRUPT_PSMC2S_BIT)
        case INTERRUPTS_PSMC2S:
            interrupt_bit_clear( INTERRUPT_PSMC2S_REGISTER, INTERRUPT_PSMC2S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC1T_REGISTER) && defined(INTERRUPT_PSMC1T_BIT)
        case INTERRUPTS_PSMC1T:
            interrupt_bit_clear( INTERRUPT_PSMC1T_REGISTER, INTERRUPT_PSMC1T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC2T_REGISTER) && defined(INTERRUPT_PSMC2T_BIT)
        case INTERRUPTS_PSMC2T:
            interrupt_bit_clear( INTERRUPT_PSMC2T_REGISTER, INTERRUPT_PSMC2T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC3S_REGISTER) && defined(INTERRUPT_PSMC3S_BIT)
        case INTERRUPTS_PSMC3S:
            interrupt_bit_clear( INTERRUPT_PSMC3S_REGISTER, INTERRUPT_PSMC3S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMSC3T_REGISTER) && defined(INTERRUPT_PMSC3T_BIT)
        case INTERRUPTS_PMSC3T:
            interrupt_bit_clear( INTERRUPT_PMSC3T_REGISTER, INTERRUPT_PMSC3T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC4S_REGISTER) && defined(INTERRUPT_PSMC4S_BIT)
        case INTERRUPTS_PSMC4S:
            interrupt_bit_clear( INTERRUPT_PSMC4S_REGISTER, INTERRUPT_PSMC4S_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PSMC4T_REGISTER) && defined(INTERRUPT_PSMC4T_BIT)
        case INTERRUPTS_PSMC4T:
            interrupt_bit_clear( INTERRUPT_PSMC4T_REGISTER, INTERRUPT_PSMC4T_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG2_REGISTER) && defined(INTERRUPT_CWG2_BIT)
        case INTERRUPTS_CWG2:
            interrupt_bit_clear( INTERRUPT_CWG2_REGISTER, INTERRUPT_CWG2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CWG3_REGISTER) && defined(INTERRUPT_CWG3_BIT)
        case INTERRUPTS_CWG3:
            interrupt_bit_clear( INTERRUPT_CWG3_REGISTER, INTERRUPT_CWG3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RTCC_REGISTER) && defined(INTERRUPT_RTCC_BIT)
        case INTERRUPTS_RTCC:
            interrupt_bit_clear( INTERRUPT_RTCC_REGISTER, INTERRUPT_RTCC_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMRA_REGISTER) && defined(INTERRUPT_TMRA_BIT)
        case INTERRUPTS_TMRA:
            interrupt_bit_clear( INTERRUPT_TMRA_REGISTER, INTERRUPT_TMRA_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMRB_REGISTER) && defined(INTERRUPT_TMRB_BIT)
        case INTERRUPTS_TMRB:
            interrupt_bit_clear( INTERRUPT_TMRB_REGISTER, INTERRUPT_TMRB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR4A_REGISTER) && defined(INTERRUPT_TMR4A_BIT)
        case INTERRUPTS_TMR4A:
            interrupt_bit_clear( INTERRUPT_TMR4A_REGISTER, INTERRUPT_TMR4A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR6A_REGISTER) && defined(INTERRUPT_TMR6A_BIT)
        case INTERRUPTS_TMR6A:
            interrupt_bit_clear( INTERRUPT_TMR6A_REGISTER, INTERRUPT_TMR6A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ULPWU_REGISTER) && defined(INTERRUPT_ULPWU_BIT)
        case INTERRUPTS_ULPWU:
            interrupt_bit_clear( INTERRUPT_ULPWU_REGISTER, INTERRUPT_ULPWU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD1_REGISTER) && defined(INTERRUPT_AD1_BIT)
        case INTERRUPTS_AD1:
            interrupt_bit_clear( INTERRUPT_AD1_REGISTER, INTERRUPT_AD1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_AD2_REGISTER) && defined(INTERRUPT_AD2_BIT)
        case INTERRUPTS_AD2:
            interrupt_bit_clear( INTERRUPT_AD2_REGISTER, INTERRUPT_AD2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB0_REGISTER) && defined(INTERRUPT_RXB0_BIT)
        case INTERRUPTS_RXB0:
            interrupt_bit_clear( INTERRUPT_RXB0_REGISTER, INTERRUPT_RXB0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB1_REGISTER) && defined(INTERRUPT_RXB1_BIT)
        case INTERRUPTS_RXB1:
            interrupt_bit_clear( INTERRUPT_RXB1_REGISTER, INTERRUPT_RXB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB0_REGISTER) && defined(INTERRUPT_TXB0_BIT)
        case INTERRUPTS_TXB0:
            interrupt_bit_clear( INTERRUPT_TXB0_REGISTER, INTERRUPT_TXB0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB1_REGISTER) && defined(INTERRUPT_TXB1_BIT)
        case INTERRUPTS_TXB1:
            interrupt_bit_clear( INTERRUPT_TXB1_REGISTER, INTERRUPT_TXB1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB2_REGISTER) && defined(INTERRUPT_TXB2_BIT)
        case INTERRUPTS_TXB2:
            interrupt_bit_clear( INTERRUPT_TXB2_REGISTER, INTERRUPT_TXB2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ERR_REGISTER) && defined(INTERRUPT_ERR_BIT)
        case INTERRUPTS_ERR:
            interrupt_bit_clear( INTERRUPT_ERR_REGISTER, INTERRUPT_ERR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_WAK_REGISTER) && defined(INTERRUPT_WAK_BIT)
        case INTERRUPTS_WAK:
            interrupt_bit_clear( INTERRUPT_WAK_REGISTER, INTERRUPT_WAK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IRX_REGISTER) && defined(INTERRUPT_IRX_BIT)
        case INTERRUPTS_IRX:
            interrupt_bit_clear( INTERRUPT_IRX_REGISTER, INTERRUPT_IRX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP0_REGISTER) && defined(INTERRUPT_CMP0_BIT)
        case INTERRUPTS_CMP0:
            interrupt_bit_clear( INTERRUPT_CMP0_REGISTER, INTERRUPT_CMP0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP1_REGISTER) && defined(INTERRUPT_CMP1_BIT)
        case INTERRUPTS_CMP1:
            interrupt_bit_clear( INTERRUPT_CMP1_REGISTER, INTERRUPT_CMP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP2_REGISTER) && defined(INTERRUPT_CMP2_BIT)
        case INTERRUPTS_CMP2:
            interrupt_bit_clear( INTERRUPT_CMP2_REGISTER, INTERRUPT_CMP2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PT_REGISTER) && defined(INTERRUPT_PT_BIT)
        case INTERRUPTS_PT:
            interrupt_bit_clear( INTERRUPT_PT_REGISTER, INTERRUPT_PT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_HLVD_REGISTER) && defined(INTERRUPT_HLVD_BIT)
        case INTERRUPTS_HLVD:
            interrupt_bit_clear( INTERRUPT_HLVD_REGISTER, INTERRUPT_HLVD_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TB_REGISTER) && defined(INTERRUPT_TB_BIT)
        case INTERRUPTS_TB:
            interrupt_bit_clear( INTERRUPT_TB_REGISTER, INTERRUPT_TB_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC1_REGISTER) && defined(INTERRUPT_IC1_BIT)
        case INTERRUPTS_IC1:
            interrupt_bit_clear( INTERRUPT_IC1_REGISTER, INTERRUPT_IC1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC2QE_REGISTER) && defined(INTERRUPT_IC2QE_BIT)
        case INTERRUPTS_IC2QE:
            interrupt_bit_clear( INTERRUPT_IC2QE_REGISTER, INTERRUPT_IC2QE_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IC3DR_REGISTER) && defined(INTERRUPT_IC3DR_BIT)
        case INTERRUPTS_IC3DR:
            interrupt_bit_clear( INTERRUPT_IC3DR_REGISTER, INTERRUPT_IC3DR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CTMU_REGISTER) && defined(INTERRUPT_CTMU_BIT)
        case INTERRUPTS_CTMU:
            interrupt_bit_clear( INTERRUPT_CTMU_REGISTER, INTERRUPT_CTMU_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RX0_REGISTER) && defined(INTERRUPT_RX0_BIT)
        case INTERRUPTS_RX0:
            interrupt_bit_clear( INTERRUPT_RX0_REGISTER, INTERRUPT_RX0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RX1_REGISTER) && defined(INTERRUPT_RX1_BIT)
        case INTERRUPTS_RX1:
            interrupt_bit_clear( INTERRUPT_RX1_REGISTER, INTERRUPT_RX1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX0_REGISTER) && defined(INTERRUPT_TX0_BIT)
        case INTERRUPTS_TX0:
            interrupt_bit_clear( INTERRUPT_TX0_REGISTER, INTERRUPT_TX0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_IV_REGISTER) && defined(INTERRUPT_IV_BIT)
        case INTERRUPTS_IV:
            interrupt_bit_clear( INTERRUPT_IV_REGISTER, INTERRUPT_IV_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB0IEPI_REGISTER) && defined(INTERRUPT_RXB0IEPI_BIT)
        case INTERRUPTS_RXB0IEPI:
            interrupt_bit_clear( INTERRUPT_RXB0IEPI_REGISTER, INTERRUPT_RXB0IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXB1IEPI_REGISTER) && defined(INTERRUPT_RXB1IEPI_BIT)
        case INTERRUPTS_RXB1IEPI:
            interrupt_bit_clear( INTERRUPT_RXB1IEPI_REGISTER, INTERRUPT_RXB1IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB0IEPI_REGISTER) && defined(INTERRUPT_TXB0IEPI_BIT)
        case INTERRUPTS_TXB0IEPI:
            interrupt_bit_clear( INTERRUPT_TXB0IEPI_REGISTER, INTERRUPT_TXB0IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB1IEPI_REGISTER) && defined(INTERRUPT_TXB1IEPI_BIT)
        case INTERRUPTS_TXB1IEPI:
            interrupt_bit_clear( INTERRUPT_TXB1IEPI_REGISTER, INTERRUPT_TXB1IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXB2IEPI_REGISTER) && defined(INTERRUPT_TXB2IEPI_BIT)
        case INTERRUPTS_TXB2IEPI:
            interrupt_bit_clear( INTERRUPT_TXB2IEPI_REGISTER, INTERRUPT_TXB2IEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOWM_REGISTER) && defined(INTERRUPT_FIFOWM_BIT)
        case INTERRUPTS_FIFOWM:
            interrupt_bit_clear( INTERRUPT_FIFOWM_REGISTER, INTERRUPT_FIFOWM_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXBn_REGISTER) && defined(INTERRUPT_RXBn_BIT)
        case INTERRUPTS_RXBn:
            interrupt_bit_clear( INTERRUPT_RXBn_REGISTER, INTERRUPT_RXBn_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXBn_REGISTER) && defined(INTERRUPT_TXBn_BIT)
        case INTERRUPTS_TXBn:
            interrupt_bit_clear( INTERRUPT_TXBn_REGISTER, INTERRUPT_TXBn_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOMW_REGISTER) && defined(INTERRUPT_FIFOMW_BIT)
        case INTERRUPTS_FIFOMW:
            interrupt_bit_clear( INTERRUPT_FIFOMW_REGISTER, INTERRUPT_FIFOMW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM1_REGISTER) && defined(INTERRUPT_CM1_BIT)
        case INTERRUPTS_CM1:
            interrupt_bit_clear( INTERRUPT_CM1_REGISTER, INTERRUPT_CM1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM2_REGISTER) && defined(INTERRUPT_CM2_BIT)
        case INTERRUPTS_CM2:
            interrupt_bit_clear( INTERRUPT_CM2_REGISTER, INTERRUPT_CM2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT0_REGISTER) && defined(INTERRUPT_INT0_BIT)
        case INTERRUPTS_INT0:
            interrupt_bit_clear( INTERRUPT_INT0_REGISTER, INTERRUPT_INT0_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT1_REGISTER) && defined(INTERRUPT_INT1_BIT)
        case INTERRUPTS_INT1:
            interrupt_bit_clear( INTERRUPT_INT1_REGISTER, INTERRUPT_INT1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT2_REGISTER) && defined(INTERRUPT_INT2_BIT)
        case INTERRUPTS_INT2:
            interrupt_bit_clear( INTERRUPT_INT2_REGISTER, INTERRUPT_INT2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SW_REGISTER) && defined(INTERRUPT_SW_BIT)
        case INTERRUPTS_SW:
            interrupt_bit_clear( INTERRUPT_SW_REGISTER, INTERRUPT_SW_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1SCNT_REGISTER) && defined(INTERRUPT_DMA1SCNT_BIT)
        case INTERRUPTS_DMA1SCNT:
            interrupt_bit_clear( INTERRUPT_DMA1SCNT_REGISTER, INTERRUPT_DMA1SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1DCNT_REGISTER) && defined(INTERRUPT_DMA1DCNT_BIT)
        case INTERRUPTS_DMA1DCNT:
            interrupt_bit_clear( INTERRUPT_DMA1DCNT_REGISTER, INTERRUPT_DMA1DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1OR_REGISTER) && defined(INTERRUPT_DMA1OR_BIT)
        case INTERRUPTS_DMA1OR:
            interrupt_bit_clear( INTERRUPT_DMA1OR_REGISTER, INTERRUPT_DMA1OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA1A_REGISTER) && defined(INTERRUPT_DMA1A_BIT)
        case INTERRUPTS_DMA1A:
            interrupt_bit_clear( INTERRUPT_DMA1A_REGISTER, INTERRUPT_DMA1A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1RX_REGISTER) && defined(INTERRUPT_SPI1RX_BIT)
        case INTERRUPTS_SPI1RX:
            interrupt_bit_clear( INTERRUPT_SPI1RX_REGISTER, INTERRUPT_SPI1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1TX_REGISTER) && defined(INTERRUPT_SPI1TX_BIT)
        case INTERRUPTS_SPI1TX:
            interrupt_bit_clear( INTERRUPT_SPI1TX_REGISTER, INTERRUPT_SPI1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1RX_REGISTER) && defined(INTERRUPT_I2C1RX_BIT)
        case INTERRUPTS_I2C1RX:
            interrupt_bit_clear( INTERRUPT_I2C1RX_REGISTER, INTERRUPT_I2C1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI1_REGISTER) && defined(INTERRUPT_SPI1_BIT)
        case INTERRUPTS_SPI1:
            interrupt_bit_clear( INTERRUPT_SPI1_REGISTER, INTERRUPT_SPI1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1TX_REGISTER) && defined(INTERRUPT_I2C1TX_BIT)
        case INTERRUPTS_I2C1TX:
            interrupt_bit_clear( INTERRUPT_I2C1TX_REGISTER, INTERRUPT_I2C1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1_REGISTER) && defined(INTERRUPT_I2C1_BIT)
        case INTERRUPTS_I2C1:
            interrupt_bit_clear( INTERRUPT_I2C1_REGISTER, INTERRUPT_I2C1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C1E_REGISTER) && defined(INTERRUPT_I2C1E_BIT)
        case INTERRUPTS_I2C1E:
            interrupt_bit_clear( INTERRUPT_I2C1E_REGISTER, INTERRUPT_I2C1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1E_REGISTER) && defined(INTERRUPT_U1E_BIT)
        case INTERRUPTS_U1E:
            interrupt_bit_clear( INTERRUPT_U1E_REGISTER, INTERRUPT_U1E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1_REGISTER) && defined(INTERRUPT_U1_BIT)
        case INTERRUPTS_U1:
            interrupt_bit_clear( INTERRUPT_U1_REGISTER, INTERRUPT_U1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1RX_REGISTER) && defined(INTERRUPT_U1RX_BIT)
        case INTERRUPTS_U1RX:
            interrupt_bit_clear( INTERRUPT_U1RX_REGISTER, INTERRUPT_U1RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U1TX_REGISTER) && defined(INTERRUPT_U1TX_BIT)
        case INTERRUPTS_U1TX:
            interrupt_bit_clear( INTERRUPT_U1TX_REGISTER, INTERRUPT_U1TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2SCNT_REGISTER) && defined(INTERRUPT_DMA2SCNT_BIT)
        case INTERRUPTS_DMA2SCNT:
            interrupt_bit_clear( INTERRUPT_DMA2SCNT_REGISTER, INTERRUPT_DMA2SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2DCNT_REGISTER) && defined(INTERRUPT_DMA2DCNT_BIT)
        case INTERRUPTS_DMA2DCNT:
            interrupt_bit_clear( INTERRUPT_DMA2DCNT_REGISTER, INTERRUPT_DMA2DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2OR_REGISTER) && defined(INTERRUPT_DMA2OR_BIT)
        case INTERRUPTS_DMA2OR:
            interrupt_bit_clear( INTERRUPT_DMA2OR_REGISTER, INTERRUPT_DMA2OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA2A_REGISTER) && defined(INTERRUPT_DMA2A_BIT)
        case INTERRUPTS_DMA2A:
            interrupt_bit_clear( INTERRUPT_DMA2A_REGISTER, INTERRUPT_DMA2A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2RX_REGISTER) && defined(INTERRUPT_I2C2RX_BIT)
        case INTERRUPTS_I2C2RX:
            interrupt_bit_clear( INTERRUPT_I2C2RX_REGISTER, INTERRUPT_I2C2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2TX_REGISTER) && defined(INTERRUPT_I2C2TX_BIT)
        case INTERRUPTS_I2C2TX:
            interrupt_bit_clear( INTERRUPT_I2C2TX_REGISTER, INTERRUPT_I2C2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2_REGISTER) && defined(INTERRUPT_I2C2_BIT)
        case INTERRUPTS_I2C2:
            interrupt_bit_clear( INTERRUPT_I2C2_REGISTER, INTERRUPT_I2C2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_I2C2E_REGISTER) && defined(INTERRUPT_I2C2E_BIT)
        case INTERRUPTS_I2C2E:
            interrupt_bit_clear( INTERRUPT_I2C2E_REGISTER, INTERRUPT_I2C2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2RX_REGISTER) && defined(INTERRUPT_U2RX_BIT)
        case INTERRUPTS_U2RX:
            interrupt_bit_clear( INTERRUPT_U2RX_REGISTER, INTERRUPT_U2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2TX_REGISTER) && defined(INTERRUPT_U2TX_BIT)
        case INTERRUPTS_U2TX:
            interrupt_bit_clear( INTERRUPT_U2TX_REGISTER, INTERRUPT_U2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2E_REGISTER) && defined(INTERRUPT_U2E_BIT)
        case INTERRUPTS_U2E:
            interrupt_bit_clear( INTERRUPT_U2E_REGISTER, INTERRUPT_U2E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U2_REGISTER) && defined(INTERRUPT_U2_BIT)
        case INTERRUPTS_U2:
            interrupt_bit_clear( INTERRUPT_U2_REGISTER, INTERRUPT_U2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ST_REGISTER) && defined(INTERRUPT_ST_BIT)
        case INTERRUPTS_ST:
            interrupt_bit_clear( INTERRUPT_ST_REGISTER, INTERRUPT_ST_BIT );
            break;
        #endif
        #if defined(INTERRUPT_FIFOF_REGISTER) && defined(INTERRUPT_FIFOF_BIT)
        case INTERRUPTS_FIFOF:
            interrupt_bit_clear( INTERRUPT_FIFOF_REGISTER, INTERRUPT_FIFOF_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RXBnIEPI_REGISTER) && defined(INTERRUPT_RXBnIEPI_BIT)
        case INTERRUPTS_RXBnIEPI:
            interrupt_bit_clear( INTERRUPT_RXBnIEPI_REGISTER, INTERRUPT_RXBnIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXBnIEPI_REGISTER) && defined(INTERRUPT_TXBnIEPI_BIT)
        case INTERRUPTS_TXBnIEPI:
            interrupt_bit_clear( INTERRUPT_TXBnIEPI_REGISTER, INTERRUPT_TXBnIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CM3_REGISTER) && defined(INTERRUPT_CM3_BIT)
        case INTERRUPTS_CM3:
            interrupt_bit_clear( INTERRUPT_CM3_REGISTER, INTERRUPT_CM3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPP_REGISTER) && defined(INTERRUPT_SPP_BIT)
        case INTERRUPTS_SPP:
            interrupt_bit_clear( INTERRUPT_SPP_REGISTER, INTERRUPT_SPP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP1_REGISTER) && defined(INTERRUPT_ECCP1_BIT)
        case INTERRUPTS_ECCP1:
            interrupt_bit_clear( INTERRUPT_ECCP1_REGISTER, INTERRUPT_ECCP1_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PMP_REGISTER) && defined(INTERRUPT_PMP_BIT)
        case INTERRUPTS_PMP:
            interrupt_bit_clear( INTERRUPT_PMP_REGISTER, INTERRUPT_PMP_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC5_REGISTER) && defined(INTERRUPT_CLC5_BIT)
        case INTERRUPTS_CLC5:
            interrupt_bit_clear( INTERRUPT_CLC5_REGISTER, INTERRUPT_CLC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC6_REGISTER) && defined(INTERRUPT_CLC6_BIT)
        case INTERRUPTS_CLC6:
            interrupt_bit_clear( INTERRUPT_CLC6_REGISTER, INTERRUPT_CLC6_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC7_REGISTER) && defined(INTERRUPT_CLC7_BIT)
        case INTERRUPTS_CLC7:
            interrupt_bit_clear( INTERRUPT_CLC7_REGISTER, INTERRUPT_CLC7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CLC8_REGISTER) && defined(INTERRUPT_CLC8_BIT)
        case INTERRUPTS_CLC8:
            interrupt_bit_clear( INTERRUPT_CLC8_REGISTER, INTERRUPT_CLC8_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM1P_REGISTER) && defined(INTERRUPT_PWM1P_BIT)
        case INTERRUPTS_PWM1P:
            interrupt_bit_clear( INTERRUPT_PWM1P_REGISTER, INTERRUPT_PWM1P_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2RX_REGISTER) && defined(INTERRUPT_SPI2RX_BIT)
        case INTERRUPTS_SPI2RX:
            interrupt_bit_clear( INTERRUPT_SPI2RX_REGISTER, INTERRUPT_SPI2RX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2TX_REGISTER) && defined(INTERRUPT_SPI2TX_BIT)
        case INTERRUPTS_SPI2TX:
            interrupt_bit_clear( INTERRUPT_SPI2TX_REGISTER, INTERRUPT_SPI2TX_BIT );
            break;
        #endif
        #if defined(INTERRUPT_SPI2_REGISTER) && defined(INTERRUPT_SPI2_BIT)
        case INTERRUPTS_SPI2:
            interrupt_bit_clear( INTERRUPT_SPI2_REGISTER, INTERRUPT_SPI2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM2P_REGISTER) && defined(INTERRUPT_PWM2P_BIT)
        case INTERRUPTS_PWM2P:
            interrupt_bit_clear( INTERRUPT_PWM2P_REGISTER, INTERRUPT_PWM2P_BIT );
            break;
        #endif
        #if defined(INTERRUPT_PWM3P_REGISTER) && defined(INTERRUPT_PWM3P_BIT)
        case INTERRUPTS_PWM3P:
            interrupt_bit_clear( INTERRUPT_PWM3P_REGISTER, INTERRUPT_PWM3P_BIT );
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
        #if defined(INTERRUPT_U3E_REGISTER) && defined(INTERRUPT_U3E_BIT)
        case INTERRUPTS_U3E:
            interrupt_bit_clear( INTERRUPT_U3E_REGISTER, INTERRUPT_U3E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U3_REGISTER) && defined(INTERRUPT_U3_BIT)
        case INTERRUPTS_U3:
            interrupt_bit_clear( INTERRUPT_U3_REGISTER, INTERRUPT_U3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO2_REGISTER) && defined(INTERRUPT_NCO2_BIT)
        case INTERRUPTS_NCO2:
            interrupt_bit_clear( INTERRUPT_NCO2_REGISTER, INTERRUPT_NCO2_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3SCNT_REGISTER) && defined(INTERRUPT_DMA3SCNT_BIT)
        case INTERRUPTS_DMA3SCNT:
            interrupt_bit_clear( INTERRUPT_DMA3SCNT_REGISTER, INTERRUPT_DMA3SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3DCNT_REGISTER) && defined(INTERRUPT_DMA3DCNT_BIT)
        case INTERRUPTS_DMA3DCNT:
            interrupt_bit_clear( INTERRUPT_DMA3DCNT_REGISTER, INTERRUPT_DMA3DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3OR_REGISTER) && defined(INTERRUPT_DMA3OR_BIT)
        case INTERRUPTS_DMA3OR:
            interrupt_bit_clear( INTERRUPT_DMA3OR_REGISTER, INTERRUPT_DMA3OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA3A_REGISTER) && defined(INTERRUPT_DMA3A_BIT)
        case INTERRUPTS_DMA3A:
            interrupt_bit_clear( INTERRUPT_DMA3A_REGISTER, INTERRUPT_DMA3A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4SCNT_REGISTER) && defined(INTERRUPT_DMA4SCNT_BIT)
        case INTERRUPTS_DMA4SCNT:
            interrupt_bit_clear( INTERRUPT_DMA4SCNT_REGISTER, INTERRUPT_DMA4SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4DCNT_REGISTER) && defined(INTERRUPT_DMA4DCNT_BIT)
        case INTERRUPTS_DMA4DCNT:
            interrupt_bit_clear( INTERRUPT_DMA4DCNT_REGISTER, INTERRUPT_DMA4DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4OR_REGISTER) && defined(INTERRUPT_DMA4OR_BIT)
        case INTERRUPTS_DMA4OR:
            interrupt_bit_clear( INTERRUPT_DMA4OR_REGISTER, INTERRUPT_DMA4OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA4A_REGISTER) && defined(INTERRUPT_DMA4A_BIT)
        case INTERRUPTS_DMA4A:
            interrupt_bit_clear( INTERRUPT_DMA4A_REGISTER, INTERRUPT_DMA4A_BIT );
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
        #if defined(INTERRUPT_U4E_REGISTER) && defined(INTERRUPT_U4E_BIT)
        case INTERRUPTS_U4E:
            interrupt_bit_clear( INTERRUPT_U4E_REGISTER, INTERRUPT_U4E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U4_REGISTER) && defined(INTERRUPT_U4_BIT)
        case INTERRUPTS_U4:
            interrupt_bit_clear( INTERRUPT_U4_REGISTER, INTERRUPT_U4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5SCNT_REGISTER) && defined(INTERRUPT_DMA5SCNT_BIT)
        case INTERRUPTS_DMA5SCNT:
            interrupt_bit_clear( INTERRUPT_DMA5SCNT_REGISTER, INTERRUPT_DMA5SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5DCNT_REGISTER) && defined(INTERRUPT_DMA5DCNT_BIT)
        case INTERRUPTS_DMA5DCNT:
            interrupt_bit_clear( INTERRUPT_DMA5DCNT_REGISTER, INTERRUPT_DMA5DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5OR_REGISTER) && defined(INTERRUPT_DMA5OR_BIT)
        case INTERRUPTS_DMA5OR:
            interrupt_bit_clear( INTERRUPT_DMA5OR_REGISTER, INTERRUPT_DMA5OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA5A_REGISTER) && defined(INTERRUPT_DMA5A_BIT)
        case INTERRUPTS_DMA5A:
            interrupt_bit_clear( INTERRUPT_DMA5A_REGISTER, INTERRUPT_DMA5A_BIT );
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
        #if defined(INTERRUPT_U5E_REGISTER) && defined(INTERRUPT_U5E_BIT)
        case INTERRUPTS_U5E:
            interrupt_bit_clear( INTERRUPT_U5E_REGISTER, INTERRUPT_U5E_BIT );
            break;
        #endif
        #if defined(INTERRUPT_U5_REGISTER) && defined(INTERRUPT_U5_BIT)
        case INTERRUPTS_U5:
            interrupt_bit_clear( INTERRUPT_U5_REGISTER, INTERRUPT_U5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6SCNT_REGISTER) && defined(INTERRUPT_DMA6SCNT_BIT)
        case INTERRUPTS_DMA6SCNT:
            interrupt_bit_clear( INTERRUPT_DMA6SCNT_REGISTER, INTERRUPT_DMA6SCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6DCNT_REGISTER) && defined(INTERRUPT_DMA6DCNT_BIT)
        case INTERRUPTS_DMA6DCNT:
            interrupt_bit_clear( INTERRUPT_DMA6DCNT_REGISTER, INTERRUPT_DMA6DCNT_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6OR_REGISTER) && defined(INTERRUPT_DMA6OR_BIT)
        case INTERRUPTS_DMA6OR:
            interrupt_bit_clear( INTERRUPT_DMA6OR_REGISTER, INTERRUPT_DMA6OR_BIT );
            break;
        #endif
        #if defined(INTERRUPT_DMA6A_REGISTER) && defined(INTERRUPT_DMA6A_BIT)
        case INTERRUPTS_DMA6A:
            interrupt_bit_clear( INTERRUPT_DMA6A_REGISTER, INTERRUPT_DMA6A_BIT );
            break;
        #endif
        #if defined(INTERRUPT_NCO3_REGISTER) && defined(INTERRUPT_NCO3_BIT)
        case INTERRUPTS_NCO3:
            interrupt_bit_clear( INTERRUPT_NCO3_REGISTER, INTERRUPT_NCO3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_CMP3_REGISTER) && defined(INTERRUPT_CMP3_BIT)
        case INTERRUPTS_CMP3:
            interrupt_bit_clear( INTERRUPT_CMP3_REGISTER, INTERRUPT_CMP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX3_REGISTER) && defined(INTERRUPT_TX3_BIT)
        case INTERRUPTS_TX3:
            interrupt_bit_clear( INTERRUPT_TX3_REGISTER, INTERRUPT_TX3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC3_REGISTER) && defined(INTERRUPT_RC3_BIT)
        case INTERRUPTS_RC3:
            interrupt_bit_clear( INTERRUPT_RC3_REGISTER, INTERRUPT_RC3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX4_REGISTER) && defined(INTERRUPT_TX4_BIT)
        case INTERRUPTS_TX4:
            interrupt_bit_clear( INTERRUPT_TX4_REGISTER, INTERRUPT_TX4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC4_REGISTER) && defined(INTERRUPT_RC4_BIT)
        case INTERRUPTS_RC4:
            interrupt_bit_clear( INTERRUPT_RC4_REGISTER, INTERRUPT_RC4_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ECCP3_REGISTER) && defined(INTERRUPT_ECCP3_BIT)
        case INTERRUPTS_ECCP3:
            interrupt_bit_clear( INTERRUPT_ECCP3_REGISTER, INTERRUPT_ECCP3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACTLOCK_REGISTER) && defined(INTERRUPT_ACTLOCK_BIT)
        case INTERRUPTS_ACTLOCK:
            interrupt_bit_clear( INTERRUPT_ACTLOCK_REGISTER, INTERRUPT_ACTLOCK_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ACTORS_REGISTER) && defined(INTERRUPT_ACTORS_BIT)
        case INTERRUPTS_ACTORS:
            interrupt_bit_clear( INTERRUPT_ACTORS_REGISTER, INTERRUPT_ACTORS_BIT );
            break;
        #endif
        #if defined(INTERRUPT_INT3_REGISTER) && defined(INTERRUPT_INT3_BIT)
        case INTERRUPTS_INT3:
            interrupt_bit_clear( INTERRUPT_INT3_REGISTER, INTERRUPT_INT3_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TX5_REGISTER) && defined(INTERRUPT_TX5_BIT)
        case INTERRUPTS_TX5:
            interrupt_bit_clear( INTERRUPT_TX5_REGISTER, INTERRUPT_TX5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_RC5_REGISTER) && defined(INTERRUPT_RC5_BIT)
        case INTERRUPTS_RC5:
            interrupt_bit_clear( INTERRUPT_RC5_REGISTER, INTERRUPT_RC5_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR7_REGISTER) && defined(INTERRUPT_TMR7_BIT)
        case INTERRUPTS_TMR7:
            interrupt_bit_clear( INTERRUPT_TMR7_REGISTER, INTERRUPT_TMR7_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR7G_REGISTER) && defined(INTERRUPT_TMR7G_BIT)
        case INTERRUPTS_TMR7G:
            interrupt_bit_clear( INTERRUPT_TMR7G_REGISTER, INTERRUPT_TMR7G_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TXIEPI_REGISTER) && defined(INTERRUPT_TXIEPI_BIT)
        case INTERRUPTS_TXIEPI:
            interrupt_bit_clear( INTERRUPT_TXIEPI_REGISTER, INTERRUPT_TXIEPI_BIT );
            break;
        #endif
        #if defined(INTERRUPT_ETH_REGISTER) && defined(INTERRUPT_ETH_BIT)
        case INTERRUPTS_ETH:
            interrupt_bit_clear( INTERRUPT_ETH_REGISTER, INTERRUPT_ETH_BIT );
            break;
        #endif
        #if defined(INTERRUPT_TMR12_REGISTER) && defined(INTERRUPT_TMR12_BIT)
        case INTERRUPTS_TMR12:
            interrupt_bit_clear( INTERRUPT_TMR12_REGISTER, INTERRUPT_TMR12_BIT );
            break;
        #endif

        default:
            break;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

static inline void interrupts_enable_asm( void )
{
    asm("BSF INTCON,GIE");
}

static inline void interrupts_disable_asm( void )
{
    asm("BCF INTCON,GIE");
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
