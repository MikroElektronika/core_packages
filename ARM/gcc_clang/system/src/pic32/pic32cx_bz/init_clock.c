/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

/*
 * PIC32CX-BZ2 (PIC32CX1012BZ24/25), PIC32CX-BZ3 (PIC32CX5109BZ31) and
 * PIC32CX-BZ6 (PIC32CX2051BZ62) share this file.
 *
 * Clock system (CRU):
 *  - FRC      : internal 8 MHz RC oscillator, divided by OSCCON.FRCDIV.
 *  - POSC     : 16 MHz crystal of the RF subsystem (BTZBSYS reports xtal_ready).
 *  - SPLL1    : RF PLL (SPLL3) / SPLLCON.SPLLPOSTDIV1. The RF PLL multiplies
 *               the 16 MHz crystal (BZ2: x6 = 96 MHz, BZ3: x4 = 64 MHz,
 *               BZ6: x8 = 128 MHz) and can NOT run from the FRC.
 *               On BZ2, SPLLPOSTDIV1 = 1 divides by 1.5.
 *  - SYSCLK   : OSCCON.NOSC (FRC/FRCDIV, SPLL1 or POSC), max 64/64/128 MHz.
 *  - PBCLKx   : SYSCLK / (PBxDIV.PBDIV + 1).
 *
 * The CRU, CFG and BLE register layouts differ between the sub-families
 * (the device headers of this library are the BZ3 ones), so the CRU
 * registers are accessed through the NECTO generated ADDRESS_* macros and
 * the few CFG/BLE registers through sub-family specific offsets.
 */

#include "mcu.h"
#include "core_header.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/* Sub-family detection from the memory map of mcu.h. */
#if defined(ETH_BASE_ADDRESS)
#define _BZ_FAMILY    6   /* PIC32CX-BZ6: Ethernet, CAN, USB, 128 MHz. */
#elif defined(BOOT_FLASH_ADDR)
#define _BZ_FAMILY    2   /* PIC32CX-BZ2: boot flash at 0, no secure boot ROM. */
#else
#define _BZ_FAMILY    3   /* PIC32CX-BZ3: secure boot ROM. */
#endif

/**
 * System clock frequency. The FRC (8 MHz) is the system clock source after
 * reset. The configured value is taken from the NECTO generated
 * FOSC_KHZ_VALUE.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

#define _REG32(address)   (*(volatile uint32_t *)(address))
#define _REG16(address)   (*(volatile uint16_t *)(address))

/* PIC32 style SET register (offset +8 from the register). */
#define _SET_OFST         (8UL)

/* CRU registers (addresses from the MCU definition). */
#define _OSCCON           _REG32(ADDRESS_OSCCON)
#define _OSCCONSET        _REG32(ADDRESS_OSCCON + _SET_OFST)
#define _SPLLCON          _REG32(ADDRESS_SPLLCON)
#define _CHECON           _REG32(ADDRESS_CHECON)

/* CFG registers. */
#if _BZ_FAMILY == 6
#define _CFG_SYSKEY_OFST      (0xD0UL)
#define _CFG_MISCSTAT_OFST    (0x120UL)
#else
#define _CFG_SYSKEY_OFST      (0xB0UL)
#define _CFG_MISCSTAT_OFST    (0x100UL)
#endif
#define _CFG_CFGPGQOS_OFST    (0x50UL)   /* CFGPGQOS (BZ3), CFGPGQOS1 (BZ6) */
#define _CFG_SYSKEY           _REG32(CFG_BASE_ADDRESS + _CFG_SYSKEY_OFST)
#define _CFG_MISCSTAT         _REG32(CFG_BASE_ADDRESS + _CFG_MISCSTAT_OFST)
#define _CFG_CFGPGQOS         _REG32(CFG_BASE_ADDRESS + _CFG_CFGPGQOS_OFST)
#define _CFG_MISCSTAT_CLDORDY (1UL << 9)
#define _CFG_QOS_CPU_FC_Msk   ((3UL << 28) | (3UL << 2))

/* BTZBSYS bits that are not in the BZ3 headers (BZ2 only). */
#define _BTZB_BYPASS_XTAL_READY  (1UL << 8)
#define _BTZB_BYPASS_PLL_LOCK    (1UL << 9)
#define _BTZB_XTAL_READY         BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk
#define _BTZB_PLL_LOCKED         (BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk | \
                                  BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Msk)
#define _BTZB_READY_RETRIES      (8000UL)

/* RF PLL disable bit in BLE_DPLL_RG2. */
#define _BLE_DPLL_DISABLE        (0x02U)

#if _BZ_FAMILY == 6
/* RF register SPI interface of the BLE block (BZ6 only). */
#define _BLE_SPI_WR_DATA         _REG16(BLE_BASE_ADDRESS + 0x1000UL)
#define _BLE_SPI_REG_ADDR        _REG16(BLE_BASE_ADDRESS + 0x1002UL)
#define _BLE_RFPWRMGMT           _REG32(BLE_BASE_ADDRESS + 0x1004UL)
#define _BLE_RFPWRMGMT_RF_PROG   (1UL << 20)
#endif

/* ROM routine that writes CHECON on the parts with a secure boot ROM. */
#define _ROM_PCHE_SETUP_PTR      (0xF2D0UL)

#define _CHECON_WS_Msk     (PCHE_CHECON_PFMWS_Msk | PCHE_CHECON_ADRWS_Msk)
#define _CHECON_CFG_Msk    (PCHE_CHECON_PFMWS_Msk | PCHE_CHECON_ADRWS_Msk | PCHE_CHECON_PREFEN_Msk)
#define _OSCCON_CFG_Msk    (CRU_OSCCON_NOSC_Msk | CRU_OSCCON_FRCDIV_Msk | CRU_OSCCON_WAKE2SPD_Msk)
#define _PBDIV_CFG_Msk     (CRU_PB1DIV_PBDIV_Msk | CRU_PB1DIV_PBDIVON_Msk)

#define _NOSC(value)       (((value) & CRU_OSCCON_NOSC_Msk) >> CRU_OSCCON_NOSC_Pos)
#define _COSC()            ((_OSCCON & CRU_OSCCON_COSC_Msk) >> CRU_OSCCON_COSC_Pos)
#define _SPLL_BYP(value)   (((value) & CRU_SPLLCON_SPLL_BYP_Msk) >> CRU_SPLLCON_SPLL_BYP_Pos)

/* Peripheral bus clock dividers (index 0 = PB1). */
static const uint32_t _pbdiv_address[] = {
    ADDRESS_PB1DIV, ADDRESS_PB2DIV, ADDRESS_PB3DIV,
#if _BZ_FAMILY == 6
    ADDRESS_PB4DIV, ADDRESS_PB5DIV,
#endif
};
static const uint32_t _pbdiv_value[] = {
    VALUE_PB1DIV, VALUE_PB2DIV, VALUE_PB3DIV,
#if _BZ_FAMILY == 6
    VALUE_PB4DIV, VALUE_PB5DIV,
#endif
};
#define _PB_NUM    (sizeof(_pbdiv_address) / sizeof(_pbdiv_address[0]))

/**
 * \brief Unlock the system registers (OSCCON, SPLLCON, PBxDIV) for writing.
 */
static void _sys_unlock(void)
{
    _CFG_SYSKEY = 0x00000000UL;
    _CFG_SYSKEY = 0xAA996655UL;
    _CFG_SYSKEY = 0x556699AAUL;
}

/**
 * \brief Lock the system registers again.
 */
static void _sys_lock(void)
{
    _CFG_SYSKEY = 0x33333333UL;
}

/**
 * \brief Write the PCHE CHECON register.
 *
 * On BZ3/BZ6 CHECON is written by a boot ROM routine whose address is
 * stored at 0xF2D0 (as done by MPLAB Harmony).
 */
static void _pche_write(uint32_t value)
{
#if _BZ_FAMILY == 2
    _CHECON = value;
#else
    typedef void (*pche_setup_t)(uint32_t setup);
    ((pche_setup_t)(*(volatile uint32_t *)_ROM_PCHE_SETUP_PTR))(value);
#endif
}

/**
 * \brief Set the flash wait states and the predictive prefetch.
 *
 * \param only_increase Only add wait states (before the clock is raised),
 *                      otherwise apply the configuration exactly.
 */
static void _pche_set_wait_states(uint8_t only_increase)
{
    static const uint32_t config = VALUE_CHECON;
    uint32_t current = _CHECON;
    uint32_t value;

    if (only_increase) {
        uint32_t pfmws = current & PCHE_CHECON_PFMWS_Msk;
        uint32_t adrws = current & PCHE_CHECON_ADRWS_Msk;

        if ((config & PCHE_CHECON_PFMWS_Msk) > pfmws) {
            pfmws = config & PCHE_CHECON_PFMWS_Msk;
        }
        if ((config & PCHE_CHECON_ADRWS_Msk) > adrws) {
            adrws = config & PCHE_CHECON_ADRWS_Msk;
        }
        value = (current & ~_CHECON_WS_Msk) | pfmws | adrws;
    } else {
        value = (current & ~_CHECON_CFG_Msk) | (config & _CHECON_CFG_Msk);
    }

    if (value != current) {
        _pche_write(value);
    }
}

/**
 * \brief Write a peripheral bus clock divider and wait until it is applied.
 */
static void _pb_write(uint32_t address, uint32_t value)
{
    if (_REG32(address) & CRU_PB1DIV_PBDIVON_Msk) {
        while (!(_REG32(address) & CRU_PB1DIV_PBDIVRDY_Msk)) {
            /* Wait until the divider may be written */
        }
    }
    _REG32(address) = value;
    if (value & CRU_PB1DIV_PBDIVON_Msk) {
        while (!(_REG32(address) & CRU_PB1DIV_PBDIVRDY_Msk)) {
            /* Wait until the new divider is applied */
        }
    }
}

/**
 * \brief Set the peripheral bus clock dividers.
 *
 * PB1 (system peripherals, debug access) is always kept enabled.
 *
 * \param only_increase Only raise dividers (before the system clock is
 *                      raised), otherwise apply the configuration exactly.
 */
static void _pb_init(uint8_t only_increase)
{
    uint32_t n;
    uint32_t current;
    uint32_t value;

    for (n = 0; n < _PB_NUM; n++) {
        current = _REG32(_pbdiv_address[n]) & _PBDIV_CFG_Msk;
        value = _pbdiv_value[n] & _PBDIV_CFG_Msk;
        if (0 == n) {
            value |= CRU_PB1DIV_PBDIVON_Msk;
        }
        if (only_increase) {
            if ((value & CRU_PB1DIV_PBDIV_Msk) <= (current & CRU_PB1DIV_PBDIV_Msk)) {
                continue;
            }
            value = (value & CRU_PB1DIV_PBDIV_Msk) | (current & CRU_PB1DIV_PBDIVON_Msk);
        }
        if (value != current) {
            _pb_write(_pbdiv_address[n], value);
        }
    }
}

/**
 * \brief Switch the system clock (OSCCON.NOSC) and wait until it runs.
 *
 * \param osccon OSCCON value; only NOSC, FRCDIV and WAKE2SPD are used.
 */
static void _osc_switch(uint32_t osccon)
{
    _OSCCON = (_OSCCON & ~(_OSCCON_CFG_Msk | CRU_OSCCON_OSWEN_Msk)) | (osccon & _OSCCON_CFG_Msk);

    if (_COSC() != _NOSC(osccon)) {
        // Request the oscillator switch.
        _OSCCONSET = CRU_OSCCON_OSWEN_Msk;
        while (_OSCCON & CRU_OSCCON_OSWEN_Msk) {
            /* Wait for the clock switch */
        }
        while (_COSC() != _NOSC(osccon)) {
            /* Wait until the new clock is the system clock */
        }
    }
}

#if _BZ_FAMILY == 6
/**
 * \brief Write a RF register through the BLE SPI interface (BZ6).
 */
static void _rf_write(uint16_t address, uint16_t value)
{
    _BLE_SPI_REG_ADDR = address;
    _BLE_SPI_WR_DATA = value;
    _BLE_RFPWRMGMT |= _BLE_RFPWRMGMT_RF_PROG;
    while (_BLE_RFPWRMGMT & _BLE_RFPWRMGMT_RF_PROG) {
        /* Wait until the RF register is written */
    }
}
#endif

/**
 * \brief Wait until the 16 MHz crystal (POSC) of the RF subsystem is ready.
 *
 * \param rf_pll The RF PLL is started afterwards.
 */
static void _xtal_wait(uint8_t rf_pll)
{
#if _BZ_FAMILY == 2
    uint32_t tries = 0;

    (void)rf_pll;
    while (!(BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_XTAL_READY) &&
           (tries < _BTZB_READY_RETRIES)) {
        tries++;
    }
    if (!(BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_XTAL_READY)) {
        // Do not wait for the RF subsystem crystal ready counter any more.
        BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 |= _BTZB_BYPASS_XTAL_READY;
    }
#elif _BZ_FAMILY == 3
    (void)rf_pll;
    // Crystal ready delay: 4 ms.
    BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 =
        (BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 & ~BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Msk) |
        (1UL << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Pos);
#else
    _rf_write(0x27U, 0x2078U);
    if (rf_pll && (CRU_OSCCON_COSC_SPLL_Val != _COSC())) {
        // RF PLL setup for 128 MHz.
        _rf_write(0x2EU, 0x4328U);
    }
#endif
    while (!(BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_XTAL_READY)) {
        /* Wait until the crystal is ready */
    }
}

/**
 * \brief Start the RF PLL (SPLL3) and program SPLLCON.
 *
 * The system runs from the crystal (POSC) while the PLL is (re)started.
 * The crystal must be ready and the system registers unlocked.
 */
static void _rf_pll_init(void)
{
#if _BZ_FAMILY == 2
    uint32_t tries = 0;

    if (CRU_OSCCON_COSC_SPLL_Val == _COSC()) {
        _osc_switch(CRU_OSCCON_NOSC_POSC);
    }

    // Enable the RF PLL.
    BLE_REGS->BLE_DPLL_RG2 &= (uint16_t)~_BLE_DPLL_DISABLE;

    while (((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_PLL_LOCKED) != _BTZB_PLL_LOCKED) &&
           (tries < _BTZB_READY_RETRIES)) {
        tries++;
    }
    if ((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_PLL_LOCKED) != _BTZB_PLL_LOCKED) {
        // Do not wait for the RF subsystem PLL lock counter any more.
        BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 |= _BTZB_BYPASS_PLL_LOCK;
        while ((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_PLL_LOCKED) != _BTZB_PLL_LOCKED) {
            /* Wait for the PLL lock */
        }
    }

    _SPLLCON = VALUE_SPLLCON;
#else
    _osc_switch(CRU_OSCCON_NOSC_POSC);

    // Restart the RF PLL.
    BLE_REGS->BLE_DPLL_RG2 |= _BLE_DPLL_DISABLE;
    BLE_REGS->BLE_DPLL_RG2 &= (uint16_t)~_BLE_DPLL_DISABLE;

    // Release the clock generator PLL reset (MISCSTAT[24]).
    _CFG_MISCSTAT &= 0x00FFFFFFUL;

    // CPU and flash controller bus QoS at the same priority.
    _CFG_CFGPGQOS = (_CFG_CFGPGQOS & ~_CFG_QOS_CPU_FC_Msk) | _CFG_QOS_CPU_FC_Msk;

    // PLL ready delay: 2 x 32 us steps.
    BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG3 =
        (BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG3 & ~BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Msk) |
        (2UL << BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Pos);

    _SPLLCON = VALUE_SPLLCON;

    while ((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & _BTZB_PLL_LOCKED) != _BTZB_PLL_LOCKED) {
        /* Wait for the PLL lock */
    }
#endif
}

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

void SystemCoreClockUpdate(void);

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    uint8_t posc_used;
    uint8_t rf_pll_used;

    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();

    // The clock configuration is locked (OSCCON.CLKLOCK): keep the reset clocks.
    if (_OSCCON & CRU_OSCCON_CLKLOCK_Msk) {
        SystemCoreClockUpdate();
        return;
    }

    // Wait until the core LDO is ready.
    while (!(_CFG_MISCSTAT & _CFG_MISCSTAT_CLDORDY)) {
        /* Wait for CLDO ready */
    }

    rf_pll_used = (CRU_OSCCON_NOSC_SPLL_Val == _NOSC(VALUE_OSCCON)) ||
                  (CRU_SPLLCON_SPLL_BYP_SPLL3_Val == _SPLL_BYP(VALUE_SPLLCON));
    posc_used = rf_pll_used || (CRU_OSCCON_NOSC_POSC_Val == _NOSC(VALUE_OSCCON)) ||
                (CRU_SPLLCON_SPLL_BYP_POSC_Val == _SPLL_BYP(VALUE_SPLLCON));

    // Add flash wait states before the clock frequency is raised.
    _pche_set_wait_states(1);

    if (posc_used) {
        _xtal_wait(rf_pll_used);
    }

    _sys_unlock();

    // Finish a clock switch that is still in progress.
    while (_OSCCON & CRU_OSCCON_OSWEN_Msk) {
        /* Wait for the clock switch */
    }

    // Raise the peripheral bus dividers before the clock frequency is raised.
    _pb_init(1);

    if (rf_pll_used) {
        _rf_pll_init();
        _osc_switch(VALUE_OSCCON);
    } else {
        // Leave the SPLL before SPLLCON is written.
        _osc_switch(VALUE_OSCCON);
        _SPLLCON = VALUE_SPLLCON;
    }

    // Final peripheral bus dividers.
    _pb_init(0);

    _sys_lock();

    if (rf_pll_used) {
        // RF subsystem clock source: PLL clock; release the ACLB reset.
        BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 |= BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel(1);
        BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG0 |= BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Msk;
    }

    // Final flash wait states (may remove wait states for lower frequencies).
    _pche_set_wait_states(0);

    // The configured clock is now active.
    SystemCoreClockUpdate();

    return;
}

/**
 * Update SystemCoreClock variable
 *
 * \brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
    /*
     * FOSC_KHZ_VALUE is generated from the JSON top-level "clock" value.
     * For the default configuration it is 8000 kHz
     * (FRC 8 MHz -> FRCDIV /1 -> SYSCLK). The SPLL needs the 16 MHz crystal
     * (BZ2: 96 MHz / 1.5 = 64 MHz, BZ3: 64 MHz, BZ6: 128 MHz).
     */
    SystemCoreClock = __SYSTEM_CLOCK;
    return;
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */
