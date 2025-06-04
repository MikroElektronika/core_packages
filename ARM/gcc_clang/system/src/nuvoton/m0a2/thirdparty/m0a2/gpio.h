/**************************************************************************//**
 * @file     gpio.h
 * @version  V0.10
 * $Revision: 6 $
 * $Date: 20/06/24 11:59a $
 * @brief    M0A21 Series GPIO Driver Header File
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup GPIO_Driver GPIO Driver
  @{
*/

/** @addtogroup GPIO_EXPORTED_CONSTANTS GPIO Exported Constants
  @{
*/

#define GPIO_PIN_MAX            16 /*!< Specify Maximum Pins of Each GPIO Port */


/* Define GPIO Pin Data Input/Output. It could be used to control each I/O pin by pin address mapping.
   Example 1:

       PA0 = 1;

   It is used to set GPIO PA.0 to high;

   Example 2:

       if (PA0)
           PA0 = 0;

   If GPIO PA.0 pin status is high, then set GPIO PA.0 data output to low.
 */
#define GPIO_PIN_DATA(port, pin)    (*((volatile uint32_t *)((GPIO_PIN_DATA_BASE+(0x40*(port))) + ((pin)<<2))))
#define PA0             GPIO_PIN_DATA(0, 0 ) /*!< Specify PA.0  Pin Data Input/Output \hideinitializer */
#define PA1             GPIO_PIN_DATA(0, 1 ) /*!< Specify PA.1  Pin Data Input/Output \hideinitializer */
#define PA2             GPIO_PIN_DATA(0, 2 ) /*!< Specify PA.2  Pin Data Input/Output \hideinitializer */
#define PA3             GPIO_PIN_DATA(0, 3 ) /*!< Specify PA.3  Pin Data Input/Output \hideinitializer */
#define PA4             GPIO_PIN_DATA(0, 4 ) /*!< Specify PA.4  Pin Data Input/Output \hideinitializer */
#define PA5             GPIO_PIN_DATA(0, 5 ) /*!< Specify PA.5  Pin Data Input/Output \hideinitializer */
#define PB4             GPIO_PIN_DATA(1, 4 ) /*!< Specify PB.4  Pin Data Input/Output \hideinitializer */
#define PB5             GPIO_PIN_DATA(1, 5 ) /*!< Specify PB.5  Pin Data Input/Output \hideinitializer */
#define PB6             GPIO_PIN_DATA(1, 6 ) /*!< Specify PB.6  Pin Data Input/Output \hideinitializer */
#define PB7             GPIO_PIN_DATA(1, 7 ) /*!< Specify PB.7  Pin Data Input/Output \hideinitializer */
#define PC0             GPIO_PIN_DATA(2, 0 ) /*!< Specify PC.0  Pin Data Input/Output \hideinitializer */
#define PC1             GPIO_PIN_DATA(2, 1 ) /*!< Specify PC.1  Pin Data Input/Output \hideinitializer */
#define PC2             GPIO_PIN_DATA(2, 2 ) /*!< Specify PC.2  Pin Data Input/Output \hideinitializer */
#define PC3             GPIO_PIN_DATA(2, 3 ) /*!< Specify PC.3  Pin Data Input/Output \hideinitializer */
#define PC4             GPIO_PIN_DATA(2, 4 ) /*!< Specify PC.4  Pin Data Input/Output \hideinitializer */
#define PC5             GPIO_PIN_DATA(2, 5 ) /*!< Specify PC.5  Pin Data Input/Output \hideinitializer */
#define PC6             GPIO_PIN_DATA(2, 6 ) /*!< Specify PC.6  Pin Data Input/Output \hideinitializer */
#define PC7             GPIO_PIN_DATA(2, 7 ) /*!< Specify PC.7  Pin Data Input/Output \hideinitializer */
#define PD0             GPIO_PIN_DATA(3, 0 ) /*!< Specify PD.0  Pin Data Input/Output \hideinitializer */
#define PD1             GPIO_PIN_DATA(3, 1 ) /*!< Specify PD.1  Pin Data Input/Output \hideinitializer */
#define PD2             GPIO_PIN_DATA(3, 2 ) /*!< Specify PD.2  Pin Data Input/Output \hideinitializer */
#define PD3             GPIO_PIN_DATA(3, 3 ) /*!< Specify PD.3  Pin Data Input/Output \hideinitializer */
#define PD4             GPIO_PIN_DATA(3, 4 ) /*!< Specify PD.4  Pin Data Input/Output \hideinitializer */
#define PD5             GPIO_PIN_DATA(3, 5 ) /*!< Specify PD.5  Pin Data Input/Output \hideinitializer */
#define PD6             GPIO_PIN_DATA(3, 6 ) /*!< Specify PD.6  Pin Data Input/Output \hideinitializer */
#define PD7             GPIO_PIN_DATA(3, 7 ) /*!< Specify PD.7  Pin Data Input/Output \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  PMD Constant Definitions                                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define GPIO_MODE_INPUT         0x0UL                  /*!< Input Mode \hideinitializer */
#define GPIO_MODE_OUTPUT        0x1UL                  /*!< Output Mode \hideinitializer */
#define GPIO_MODE_OPEN_DRAIN    0x2UL                  /*!< Open-Drain Mode \hideinitializer */
#define GPIO_MODE_QUASI         0x3UL                  /*!< Quasi-bidirectional Mode \hideinitializer */
#define GPIO_MODE(pin, mode)    ((mode) << ((pin)<<1)) /*!< Generate the PMD mode setting for each pin  \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  GPIO Interrupt Type Constant Definitions                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define GPIO_INT_RISING         0x00010000UL /*!< Interrupt enable by Input Rising Edge \hideinitializer */
#define GPIO_INT_FALLING        0x00000001UL /*!< Interrupt enable by Input Falling Edge \hideinitializer */
#define GPIO_INT_BOTH_EDGE      0x00010001UL /*!< Interrupt enable by both Rising Edge and Falling Edge \hideinitializer */
#define GPIO_INT_HIGH           0x01010000UL /*!< Interrupt enable by Level-High \hideinitializer */
#define GPIO_INT_LOW            0x01000001UL /*!< Interrupt enable by Level-Level \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  GPIO_INTTYPE Constant Definitions                                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define GPIO_INTTYPE_EDGE       0UL /*!< GPIO_INTTYPE Setting for Edge Trigger Mode \hideinitializer */
#define GPIO_INTTYPE_LEVEL      1UL /*!< GPIO_INTTYPE Setting for Edge Level Mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  GPIO Pull-up And Pull-down Type Constant Definitions                                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define GPIO_PUSEL_DISABLE          0x0UL           /*!< GPIO PUSEL setting for Disable Mode \hideinitializer */
#define GPIO_PUSEL_PULL_UP          0x1UL           /*!< GPIO PUSEL setting for Pull-up Mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  GPIO_DBCTL Constant Definitions                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#define GPIO_DBCTL_ICLK_ON_A          0x00010000UL /*!< GPIO_DBCTL setting for GPA IO pins edge detection circuit is always active after reset \hideinitializer */
#define GPIO_DBCTL_ICLK_OFF_A         0x00000000UL /*!< GPIO_DBCTL setting for GPA IO pins Edge detection circuit is active only if I/O pin corresponding RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]) bit is set to 1 \hideinitializer */
#define GPIO_DBCTL_ICLK_ON_B          0x00020000UL /*!< GPIO_DBCTL setting for GPB IO pins edge detection circuit is always active after reset \hideinitializer */
#define GPIO_DBCTL_ICLK_OFF_B         0x00000000UL /*!< GPIO_DBCTL setting for GPB IO pins edge detection circuit is active only if I/O pin corresponding RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]) bit is set to 1 \hideinitializer */
#define GPIO_DBCTL_ICLK_ON_C          0x00040000UL /*!< GPIO_DBCTL setting for GPC IO pins edge detection circuit is always active after reset \hideinitializer */
#define GPIO_DBCTL_ICLK_OFF_C         0x00000000UL /*!< GPIO_DBCTL setting for GPC IO pins edge detection circuit is active only if I/O pin corresponding RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]) bit is set to 1 \hideinitializer */
#define GPIO_DBCTL_ICLK_ON_D          0x00080000UL /*!< GPIO_DBCTL setting for GPD IO pins edge detection circuit is always active after reset \hideinitializer */
#define GPIO_DBCTL_ICLK_OFF_D         0x00000000UL /*!< GPIO_DBCTL setting for GPD IO pins edge detection circuit is active only if I/O pin corresponding RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]) bit is set to 1 \hideinitializer */

#define GPIO_DBCTL_DBCLKSRC_LIRC      0x00000010UL /*!< GPIO_DBCTL setting for de-bounce counter clock source is the internal 32k Hz \hideinitializer */
#define GPIO_DBCTL_DBCLKSRC_HCLK      0x00000000UL /*!< GPIO_DBCTL setting for de-bounce counter clock source is the HCLK \hideinitializer */

#define GPIO_DBCTL_DBCLKSEL_1         0x00000000UL /*!< GPIO_DBCTL setting for sampling cycle = 1 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_2         0x00000001UL /*!< GPIO_DBCTL setting for sampling cycle = 2 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_4         0x00000002UL /*!< GPIO_DBCTL setting for sampling cycle = 4 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_8         0x00000003UL /*!< GPIO_DBCTL setting for sampling cycle = 8 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_16        0x00000004UL /*!< GPIO_DBCTL setting for sampling cycle = 16 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_32        0x00000005UL /*!< GPIO_DBCTL setting for sampling cycle = 32 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_64        0x00000006UL /*!< GPIO_DBCTL setting for sampling cycle = 64 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_128       0x00000007UL /*!< GPIO_DBCTL setting for sampling cycle = 128 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_256       0x00000008UL /*!< GPIO_DBCTL setting for sampling cycle = 256 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_512       0x00000009UL /*!< GPIO_DBCTL setting for sampling cycle = 512 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_1024      0x0000000AUL /*!< GPIO_DBCTL setting for sampling cycle = 1024 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_2048      0x0000000BUL /*!< GPIO_DBCTL setting for sampling cycle = 2048 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_4096      0x0000000CUL /*!< GPIO_DBCTL setting for sampling cycle = 4096 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_8192      0x0000000DUL /*!< GPIO_DBCTL setting for sampling cycle = 8192 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_16384     0x0000000EUL /*!< GPIO_DBCTL setting for sampling cycle = 16384 clocks \hideinitializer */
#define GPIO_DBCTL_DBCLKSEL_32768     0x0000000FUL /*!< GPIO_DBCTL setting for sampling cycle = 32768 clocks \hideinitializer */

/**
 * @brief       Set GPIO Pin Mode
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   pin         The pin of specified GPIO port.
 *                          It could be 0 ~ 5 for PA
 *                          It could be 4 ~ 7 for PB
 *                          It could be 0 ~ 7 for PC
 *                          It could be 0 ~ 7 for PD
 * @param[in]   mode        The pin mode of specified GPIO pin. It could be
 *                              - \ref GPIO_MODE_INPUT
 *                              - \ref GPIO_MODE_OUTPUT
 *                              - \ref GPIO_MODE_OPEN_DRAIN
 *                              - \ref GPIO_MODE_QUASI
 * @return      None
 * @details     Set the pin mode of specified GPIO pin.
 * \hideinitializer
 */
#define _GPIO_SET_PIN_MODE(port, pin, mode)     ((port)->MODE = ((port)->MODE & ~GPIO_MODE(pin, GPIO_MODE_QUASI)) | GPIO_MODE(pin, mode))

/**
 * @brief       Clear GPIO Pin Interrupt Flag
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Clear the interrupt status of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_CLR_INT_FLAG(port, u32PinMask)         ((port)->INTSRC = (u32PinMask))

/**
 * @brief       Disable Pin De-bounce Function
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Disable the interrupt de-bounce function of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_DISABLE_DEBOUNCE(port, u32PinMask)     ((port)->DBEN &= ~(u32PinMask))

/**
 * @brief       Enable Pin De-bounce Function
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Enable the interrupt de-bounce function of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_ENABLE_DEBOUNCE(port, u32PinMask)      ((port)->DBEN |= (u32PinMask))

/**
 * @brief       Disable I/O Digital Input Path
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Disable I/O digital input path of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_DISABLE_DIGITAL_PATH(port, u32PinMask) ((port)->DINOFF |= ((u32PinMask)<<16))

/**
 * @brief       Enable I/O Digital Input Path
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Enable I/O digital input path of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_ENABLE_DIGITAL_PATH(port, u32PinMask)  ((port)->DINOFF &= ~((u32PinMask)<<16))

/**
 * @brief       Disable I/O DOUT mask
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Disable I/O DOUT mask of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_DISABLE_DOUT_MASK(port, u32PinMask)    ((port)->DATMSK &= ~(u32PinMask))

/**
 * @brief       Enable I/O DOUT mask
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @return      None
 * @details     Enable I/O DOUT mask of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_ENABLE_DOUT_MASK(port, u32PinMask) ((port)->DATMSK |= (u32PinMask))

/**
 * @brief       Get GPIO Pin Interrupt Flag
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT5 for PA
 *                          It could be BIT4 ~ BIT7 for PB
 *                          It could be BIT0 ~ BIT7 for PC
 *                          It could be BIT0 ~ BIT7 for PD
 * @retval      0           No interrupt at specified GPIO pin
 * @retval      1           The specified GPIO pin generate an interrupt
 * @details     Get the interrupt status of specified GPIO pin.
 * \hideinitializer
 */
#define GPIO_GET_INT_FLAG(port, u32PinMask)     ((port)->INTSRC & (u32PinMask))

/**
 * @brief       Set De-bounce Sampling Cycle Time
 * @param[in]   u32ClkSrc   The de-bounce counter clock source. It could be 
 *                            - \ref GPIO_DBCTL_DBCLKSRC_HCLK
 *                            - \ref GPIO_DBCTL_DBCLKSRC_LIRC.
 * @param[in]   u32ClkSel   The de-bounce sampling cycle selection. It could be
 *                            - \ref GPIO_DBCTL_DBCLKSEL_1
 *                            - \ref GPIO_DBCTL_DBCLKSEL_2
 *                            - \ref GPIO_DBCTL_DBCLKSEL_4
 *                            - \ref GPIO_DBCTL_DBCLKSEL_8
 *                            - \ref GPIO_DBCTL_DBCLKSEL_16
 *                            - \ref GPIO_DBCTL_DBCLKSEL_32
 *                            - \ref GPIO_DBCTL_DBCLKSEL_64
 *                            - \ref GPIO_DBCTL_DBCLKSEL_128
 *                            - \ref GPIO_DBCTL_DBCLKSEL_256
 *                            - \ref GPIO_DBCTL_DBCLKSEL_512
 *                            - \ref GPIO_DBCTL_DBCLKSEL_1024
 *                            - \ref GPIO_DBCTL_DBCLKSEL_2048
 *                            - \ref GPIO_DBCTL_DBCLKSEL_4096
 *                            - \ref GPIO_DBCTL_DBCLKSEL_8192
 *                            - \ref GPIO_DBCTL_DBCLKSEL_16384
 *                            - \ref GPIO_DBCTL_DBCLKSEL_32768
 * @return      None
 * @details     Set the interrupt de-bounce sampling cycle time based on the debounce counter clock source. \n
 *              Example: _GPIO_SET_DEBOUNCE_TIME(GPIO_DBCTL_DBCLKSRC_LIRC, GPIO_DBCTL_DBCLKSEL_4). \n
 *              It's meaning the De-debounce counter clock source is internal 10 KHz and sampling cycle selection is 4. \n
 *              Then the target de-bounce sampling cycle time is (4)*(1/(10*1000)) s = 4*0.0001 s = 400 us,
 *              and system will sampling interrupt input once per 00 us.
 * \hideinitializer
 */
#define GPIO_SET_DEBOUNCE_TIME(u32ClkSrc, u32ClkSel)    (GPIO->DBCTL = (GPIO_DBCTL_ICLKONA_Msk | GPIO_DBCTL_ICLKONB_Msk | GPIO_DBCTL_ICLKONC_Msk | GPIO_DBCTL_ICLKOND_Msk | (u32ClkSrc) | (u32ClkSel)))

/**
 * @brief       Set GPIO Interrupt Clock on bit
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @return      None
 * @details     Set the I/O pins edge detection circuit always active after reset for specified port.
 * \hideinitializer
 */
#define GPIO_SET_DEBOUNCE_ICLKON(port)  (GPIO->DBCTL |= ((0x1UL << ((((uint32_t)(port) - (uint32_t)GPIO_BASE) / 0x40) + 16))))

/**
 * @brief       Clear GPIO Interrupt Clock on bit
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @return      None
 * @details     Set edge detection circuit active only if I/O pin edge interrupt enabled for specified port
 * \hideinitializer
 */
#define GPIO_CLR_DEBOUNCE_ICLKON(port)  (GPIO->DBCTL &= ~((0x1UL << ((((uint32_t)(port) - (uint32_t)GPIO_BASE) / 0x40) + 16))))

/**
 * @brief       Get GPIO Port IN Data
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @return      The specified port data
 * @details     Get the PIN register of specified GPIO port.
 * \hideinitializer
 */
#define GPIO_GET_IN_DATA(port)  ((port)->PIN)

/**
 * @brief       Set GPIO Port OUT Data
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32Data     GPIO port data.
 * @return      None
 * @details     Set the Data into specified GPIO port.
 * \hideinitializer
 */
#define GPIO_SET_OUT_DATA(port, u32Data)    ((port)->DOUT = (u32Data))

/**
 * @brief       Toggle Specified GPIO pin
 * @param[in]   u32Pin      Pxy
 * @return      None
 * @details     Toggle the specified GPIO pint.
 * \hideinitializer
 */
#define GPIO_TOGGLE(u32Pin) ((u32Pin) ^= 1)

/**
 * @brief       Enable GPIO interrupt
 * @param[in]   port            GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32Pin          The pin of specified GPIO port.
 *                              It could be 0 ~ 5 for PA
 *                              It could be 4 ~ 7 for PB
 *                              It could be 0 ~ 7 for PC
 *                              It could be 0 ~ 7 for PD

 * @param[in]   u32IntAttribs   The interrupt attribute of specified GPIO pin. It could be
 *                            - \ref GPIO_INT_RISING
 *                            - \ref GPIO_INT_FALLING
 *                            - \ref GPIO_INT_BOTH_EDGE
 *                            - \ref GPIO_INT_HIGH
 *                            - \ref GPIO_INT_LOW
 * @return      None
 * @details     This function is used to enable specified GPIO pin interrupt.
 * \hideinitializer
 */
#define GPIO_EnableEINT     GPIO_EnableInt

/**
 * @brief       Disable GPIO interrupt
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD.
 * @param[in]   u32Pin      The pin of specified GPIO port. \n
 *                          It could be 0 ~ 5 for PA
 *                          It could be 4 ~ 7 for PB
 *                          It could be 0 ~ 7 for PC
 *                          It could be 0 ~ 7 for PD
 * @return      None
 * @details     This function is used to enable specified GPIO pin interrupt.
 * \hideinitializer
 */
#define GPIO_DisableEINT    GPIO_DisableInt


void GPIO_SetMode(GPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode);
void GPIO_EnableInt(GPIO_T *port, uint32_t u32Pin, uint32_t u32IntAttribs);
void GPIO_DisableInt(GPIO_T *port, uint32_t u32Pin);
void GPIO_SetPullCtl(GPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode);
/*@}*/ /* end of group GPIO_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group GPIO_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __GPIO_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
