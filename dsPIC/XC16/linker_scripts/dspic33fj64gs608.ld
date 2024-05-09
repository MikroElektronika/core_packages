/*
 * Linker script for PIC33FJ64GS608
 * (c) Copyright 2013 Microchip Technology, Inc
 * Part support version 2.10.A(27-Mar-2023)
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when
 *         this file is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */


OUTPUT_ARCH("33FJ64GS608")
CRT0_STARTUP(crt0_standard.o)
CRT1_STARTUP(crt1_standard.o)
#if __XC16_VERSION__ > 1027
/*
 * Define how to startup, by default we initialize
 * everything as normal; change to crt_start_mode to
 * preserve preserved data on a restart
 *
 * Or define your own __crt_start_mode fucntion
 */
CRT_STARTMODE(crt_start_mode_normal)
#endif

OPTIONAL(-lp33FJ64GS608)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x800,         LENGTH = 0x2400
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0xFC
  _reserved      : ORIGIN = 0x100,         LENGTH = 0x4
  aivt           : ORIGIN = 0x104,         LENGTH = 0xFC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0xAA00
  FBS            : ORIGIN = 0xF80000,      LENGTH = 0x2
  FGS            : ORIGIN = 0xF80004,      LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0xF80006,      LENGTH = 0x2
  FOSC           : ORIGIN = 0xF80008,      LENGTH = 0x2
  FWDT           : ORIGIN = 0xF8000A,      LENGTH = 0x2
  FPOR           : ORIGIN = 0xF8000C,      LENGTH = 0x2
  FICD           : ORIGIN = 0xF8000E,      LENGTH = 0x2
  FCMP           : ORIGIN = 0xF80010,      LENGTH = 0x2
}

__FBS = 0xF80000;
__FGS = 0xF80004;
__FOSCSEL = 0xF80006;
__FOSC = 0xF80008;
__FWDT = 0xF8000A;
__FPOR = 0xF8000C;
__FICD = 0xF8000E;
__FCMP = 0xF80010;

__NO_HANDLES = 1;          /* Suppress handles on this device  */
__CODE_BASE = 0x200;
__CODE_LENGTH = 0xAA00;
__IVT_BASE  = 0x4;
__AIVT_BASE = 0x104;
__DATA_BASE = 0x800;
__DATA_LENGTH = 0x2400;
__YDATA_BASE = 0x1800;
__YDATA_END = 0x2C00;
__DMA_BASE = 0x2800;
__DMA_END = 0x2BFF;


/*
** ==================== Section Map ======================
*/
SECTIONS
{
  /*
  ** ========== Program Memory ==========
  */


#if !defined(__CORESIDENT) || defined(__DEFINE_RESET)
  /*
  ** Reset Instruction
  */
  .reset :
  {
        SHORT(ABSOLUTE(__reset));
        SHORT(0x04);
        SHORT((ABSOLUTE(__reset) >> 16) & 0x7F);
        SHORT(0);
  } >reset
#endif


  /*
  ** Interrupt Vector Tables
  **
  ** The primary and alternate tables are loaded
  ** here, between sections .reset and .text.
  ** Vector table source code appears below.
  */


  /*
  ** User Code and Library Code
  **
  ** This section must not be assigned to __CODE_BASE,
  ** because CodeGuard(tm) sections may be located there.
  **
  ** Note that input sections *(.text) are not mapped here.
  ** The best-fit allocator locates them, so that .text
  ** may flow around PSV sections as needed.
  **
  ** Define __USE_BFA to force the following sections to
  ** to also be linked by the best-fit allocator.
  */
#if !defined(__USE_BFA)
  .text :
  {
        *(.init);
        *(.user_init);
        KEEP (*(.handle));
        KEEP (*(.isr*));
        *(.libc) *(.libm) *(.libdsp);  /* keep together in this order */
        *(.lib*);
  } >program
#endif


  /*
  ** User-Defined Section in Program Memory
  **
  ** note: can specify an address using
  **       the following syntax:
  **
  **       usercode 0x1234 :
  **         {
  **           *(usercode);
  **         } >program
  */
  usercode :
  {
        *(usercode);
  } >program


  /*
  ** User-Defined Constants in Program Memory
  **
  ** For PSV type sections, the Load Memory Address (LMA)
  ** should be specified as follows:
  **
  **       userconst : AT(0x1234)
  **         {
  **           *(userconst);
  **         } >program
  **
  ** Note that mapping PSV sections in linker scripts
  ** is not generally recommended.
  **
  ** Because of page alignment restrictions, memory is
  ** often used more efficiently when PSV sections
  ** do not appear in the linker script.
  **
  ** For more information on memory allocation,
  ** please refer to chapter 10, 'Linker Processing'
  ** in the Assembler, Linker manual (DS51317).
  */


  /*
  ** Configuration Words
  */
  __FBS :
  { KEEP (*(__FBS.sec*))    } >FBS
  __FGS :
  { KEEP (*(__FGS.sec*))    } >FGS
  __FOSCSEL :
  { KEEP (*(__FOSCSEL.sec*))    } >FOSCSEL
  __FOSC :
  { KEEP (*(__FOSC.sec*))    } >FOSC
  __FWDT :
  { KEEP (*(__FWDT.sec*))    } >FWDT
  __FPOR :
  { KEEP (*(__FPOR.sec*))    } >FPOR
  __FICD :
  { KEEP (*(__FICD.sec*))    } >FICD
  __FCMP :
  { KEEP (*(__FCMP.sec*))    } >FCMP






  /*
  ** =========== Data Memory ===========
  */


  /*
  ** ICD Debug Exec
  **
  ** This section provides optional storage for
  ** the ICD2 debugger. Define a global symbol
  ** named __ICD2RAM to enable ICD2. This section
  ** must be loaded at data address 0x800.
  */
  .icd __DATA_BASE (NOLOAD):
  {
    . += (DEFINED (__ICD2RAM) ? 0x50 : 0 );
  } > data


  /*
  ** Other sections in data memory are not explicitly mapped.
  ** Instead they are allocated according to their section
  ** attributes, which is most efficient.
  ** 
  ** If a specific arrangement of sections is required
  ** (other than what can be achieved using attributes)
  ** additional sections may be defined here. See chapter
  ** 10.5 in the MPLAB ASM30/LINK30 User's Guide (DS51317)
  ** for more information.
  */


  /*
  ** ========== Debug Info ==============
  */

  .comment        0 : { *(.comment) }

  /*
  ** DWARF-2
  */
  .debug_info     0 : { *(.debug_info) *(.gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  .debug_ranges   0 : { *(.debug_ranges) }
  .debug_aranges  0 : { *(.debug_aranges) }

} /* SECTIONS */

/*
** ================= End of Section Map ================
*/

#if __XC16_VERSION < 1026
/*
** These definitions are not required for XC16 versions
** later than XC16 v1.25 as the linker defines the addresses.
**
*/
/*
** Section Map for Interrupt Vector Tables
*/
SECTIONS
{

/*
** Interrupt Vector Table
*/
.ivt __IVT_BASE :
  {
    LONG( DEFINED(__ReservedTrap0)    ? ABSOLUTE(__ReservedTrap0)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OscillatorFail)    ? ABSOLUTE(__OscillatorFail)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__AddressError)    ? ABSOLUTE(__AddressError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__StackError)    ? ABSOLUTE(__StackError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MathError)    ? ABSOLUTE(__MathError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMACError)    ? ABSOLUTE(__DMACError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ReservedTrap6)    ? ABSOLUTE(__ReservedTrap6)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ReservedTrap7)    ? ABSOLUTE(__ReservedTrap7)    :
         ABSOLUTE(__DefaultInterrupt));

    LONG( DEFINED(__INT0Interrupt)    ? ABSOLUTE(__INT0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC1Interrupt)    ? ABSOLUTE(__IC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC1Interrupt)    ? ABSOLUTE(__OC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T1Interrupt)    ? ABSOLUTE(__T1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA0Interrupt)    ? ABSOLUTE(__DMA0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC2Interrupt)    ? ABSOLUTE(__IC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC2Interrupt)    ? ABSOLUTE(__OC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T2Interrupt)    ? ABSOLUTE(__T2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T3Interrupt)    ? ABSOLUTE(__T3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1ErrInterrupt)    ? ABSOLUTE(__SPI1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1Interrupt)    ? ABSOLUTE(__SPI1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1RXInterrupt)    ? ABSOLUTE(__U1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1TXInterrupt)    ? ABSOLUTE(__U1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCInterrupt)    ? ABSOLUTE(__ADCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA1Interrupt)    ? ABSOLUTE(__DMA1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt15)    ? ABSOLUTE(__Interrupt15)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C1Interrupt)    ? ABSOLUTE(__SI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C1Interrupt)    ? ABSOLUTE(__MI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP1Interrupt)    ? ABSOLUTE(__CMP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CNInterrupt)    ? ABSOLUTE(__CNInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT1Interrupt)    ? ABSOLUTE(__INT1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt21)    ? ABSOLUTE(__Interrupt21)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt22)    ? ABSOLUTE(__Interrupt22)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt23)    ? ABSOLUTE(__Interrupt23)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA2Interrupt)    ? ABSOLUTE(__DMA2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC3Interrupt)    ? ABSOLUTE(__OC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC4Interrupt)    ? ABSOLUTE(__OC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T4Interrupt)    ? ABSOLUTE(__T4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T5Interrupt)    ? ABSOLUTE(__T5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT2Interrupt)    ? ABSOLUTE(__INT2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2RXInterrupt)    ? ABSOLUTE(__U2RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2TXInterrupt)    ? ABSOLUTE(__U2TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2ErrInterrupt)    ? ABSOLUTE(__SPI2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2Interrupt)    ? ABSOLUTE(__SPI2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1RxRdyInterrupt)    ? ABSOLUTE(__C1RxRdyInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1Interrupt)    ? ABSOLUTE(__C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA3Interrupt)    ? ABSOLUTE(__DMA3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC3Interrupt)    ? ABSOLUTE(__IC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC4Interrupt)    ? ABSOLUTE(__IC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt39)    ? ABSOLUTE(__Interrupt39)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt40)    ? ABSOLUTE(__Interrupt40)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt41)    ? ABSOLUTE(__Interrupt41)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt42)    ? ABSOLUTE(__Interrupt42)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt43)    ? ABSOLUTE(__Interrupt43)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt44)    ? ABSOLUTE(__Interrupt44)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt45)    ? ABSOLUTE(__Interrupt45)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt46)    ? ABSOLUTE(__Interrupt46)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt47)    ? ABSOLUTE(__Interrupt47)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt48)    ? ABSOLUTE(__Interrupt48)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C2Interrupt)    ? ABSOLUTE(__SI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C2Interrupt)    ? ABSOLUTE(__MI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt51)    ? ABSOLUTE(__Interrupt51)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt52)    ? ABSOLUTE(__Interrupt52)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT3Interrupt)    ? ABSOLUTE(__INT3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT4Interrupt)    ? ABSOLUTE(__INT4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt55)    ? ABSOLUTE(__Interrupt55)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt56)    ? ABSOLUTE(__Interrupt56)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWMSpEventMatchInterrupt)    ? ABSOLUTE(__PWMSpEventMatchInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__QEI1Interrupt)    ? ABSOLUTE(__QEI1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt59)    ? ABSOLUTE(__Interrupt59)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt60)    ? ABSOLUTE(__Interrupt60)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt61)    ? ABSOLUTE(__Interrupt61)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt62)    ? ABSOLUTE(__Interrupt62)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt63)    ? ABSOLUTE(__Interrupt63)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt64)    ? ABSOLUTE(__Interrupt64)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1ErrInterrupt)    ? ABSOLUTE(__U1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2ErrInterrupt)    ? ABSOLUTE(__U2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt67)    ? ABSOLUTE(__Interrupt67)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt68)    ? ABSOLUTE(__Interrupt68)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt69)    ? ABSOLUTE(__Interrupt69)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1TxReqInterrupt)    ? ABSOLUTE(__C1TxReqInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt71)    ? ABSOLUTE(__Interrupt71)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt72)    ? ABSOLUTE(__Interrupt72)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWMSecSpEventMatchInterrupt)    ? ABSOLUTE(__PWMSecSpEventMatchInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt74)    ? ABSOLUTE(__Interrupt74)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__QEI2Interrupt)    ? ABSOLUTE(__QEI2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt76)    ? ABSOLUTE(__Interrupt76)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt77)    ? ABSOLUTE(__Interrupt77)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt78)    ? ABSOLUTE(__Interrupt78)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt79)    ? ABSOLUTE(__Interrupt79)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt80)    ? ABSOLUTE(__Interrupt80)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP8Interrupt)    ? ABSOLUTE(__ADCP8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt82)    ? ABSOLUTE(__Interrupt82)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt83)    ? ABSOLUTE(__Interrupt83)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt84)    ? ABSOLUTE(__Interrupt84)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP12Interrupt)    ? ABSOLUTE(__ADCP12Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt86)    ? ABSOLUTE(__Interrupt86)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt87)    ? ABSOLUTE(__Interrupt87)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt88)    ? ABSOLUTE(__Interrupt88)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt89)    ? ABSOLUTE(__Interrupt89)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt90)    ? ABSOLUTE(__Interrupt90)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt91)    ? ABSOLUTE(__Interrupt91)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt92)    ? ABSOLUTE(__Interrupt92)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt93)    ? ABSOLUTE(__Interrupt93)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM1Interrupt)    ? ABSOLUTE(__PWM1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM2Interrupt)    ? ABSOLUTE(__PWM2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM3Interrupt)    ? ABSOLUTE(__PWM3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM4Interrupt)    ? ABSOLUTE(__PWM4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM5Interrupt)    ? ABSOLUTE(__PWM5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM6Interrupt)    ? ABSOLUTE(__PWM6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM7Interrupt)    ? ABSOLUTE(__PWM7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM8Interrupt)    ? ABSOLUTE(__PWM8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt102)    ? ABSOLUTE(__Interrupt102)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP2Interrupt)    ? ABSOLUTE(__CMP2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP3Interrupt)    ? ABSOLUTE(__CMP3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP4Interrupt)    ? ABSOLUTE(__CMP4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt106)    ? ABSOLUTE(__Interrupt106)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt107)    ? ABSOLUTE(__Interrupt107)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt108)    ? ABSOLUTE(__Interrupt108)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt109)    ? ABSOLUTE(__Interrupt109)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP0Interrupt)    ? ABSOLUTE(__ADCP0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP1Interrupt)    ? ABSOLUTE(__ADCP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP2Interrupt)    ? ABSOLUTE(__ADCP2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP3Interrupt)    ? ABSOLUTE(__ADCP3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP4Interrupt)    ? ABSOLUTE(__ADCP4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP5Interrupt)    ? ABSOLUTE(__ADCP5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP6Interrupt)    ? ABSOLUTE(__ADCP6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCP7Interrupt)    ? ABSOLUTE(__ADCP7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
  } >ivt


/*
** Alternate Interrupt Vector Table
*/
.aivt __AIVT_BASE :
  {
    LONG( DEFINED(__AltReservedTrap0)    ? ABSOLUTE(__AltReservedTrap0)    :
         (DEFINED(__ReservedTrap0)       ? ABSOLUTE(__ReservedTrap0)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOscillatorFail)    ? ABSOLUTE(__AltOscillatorFail)    :
         (DEFINED(__OscillatorFail)       ? ABSOLUTE(__OscillatorFail)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltAddressError)    ? ABSOLUTE(__AltAddressError)    :
         (DEFINED(__AddressError)       ? ABSOLUTE(__AddressError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltStackError)    ? ABSOLUTE(__AltStackError)    :
         (DEFINED(__StackError)       ? ABSOLUTE(__StackError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMathError)    ? ABSOLUTE(__AltMathError)    :
         (DEFINED(__MathError)       ? ABSOLUTE(__MathError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMACError)    ? ABSOLUTE(__AltDMACError)    :
         (DEFINED(__DMACError)       ? ABSOLUTE(__DMACError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltReservedTrap6)    ? ABSOLUTE(__AltReservedTrap6)    :
         (DEFINED(__ReservedTrap6)       ? ABSOLUTE(__ReservedTrap6)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltReservedTrap7)    ? ABSOLUTE(__AltReservedTrap7)    :
         (DEFINED(__ReservedTrap7)       ? ABSOLUTE(__ReservedTrap7)       :
         ABSOLUTE(__DefaultInterrupt)));

    LONG( DEFINED(__AltINT0Interrupt)    ? ABSOLUTE(__AltINT0Interrupt)    :
         (DEFINED(__INT0Interrupt)       ? ABSOLUTE(__INT0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC1Interrupt)    ? ABSOLUTE(__AltIC1Interrupt)    :
         (DEFINED(__IC1Interrupt)       ? ABSOLUTE(__IC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC1Interrupt)    ? ABSOLUTE(__AltOC1Interrupt)    :
         (DEFINED(__OC1Interrupt)       ? ABSOLUTE(__OC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT1Interrupt)    ? ABSOLUTE(__AltT1Interrupt)    :
         (DEFINED(__T1Interrupt)       ? ABSOLUTE(__T1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA0Interrupt)    ? ABSOLUTE(__AltDMA0Interrupt)    :
         (DEFINED(__DMA0Interrupt)       ? ABSOLUTE(__DMA0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC2Interrupt)    ? ABSOLUTE(__AltIC2Interrupt)    :
         (DEFINED(__IC2Interrupt)       ? ABSOLUTE(__IC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC2Interrupt)    ? ABSOLUTE(__AltOC2Interrupt)    :
         (DEFINED(__OC2Interrupt)       ? ABSOLUTE(__OC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT2Interrupt)    ? ABSOLUTE(__AltT2Interrupt)    :
         (DEFINED(__T2Interrupt)       ? ABSOLUTE(__T2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT3Interrupt)    ? ABSOLUTE(__AltT3Interrupt)    :
         (DEFINED(__T3Interrupt)       ? ABSOLUTE(__T3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1ErrInterrupt)    ? ABSOLUTE(__AltSPI1ErrInterrupt)    :
         (DEFINED(__SPI1ErrInterrupt)       ? ABSOLUTE(__SPI1ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1Interrupt)    ? ABSOLUTE(__AltSPI1Interrupt)    :
         (DEFINED(__SPI1Interrupt)       ? ABSOLUTE(__SPI1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1RXInterrupt)    ? ABSOLUTE(__AltU1RXInterrupt)    :
         (DEFINED(__U1RXInterrupt)       ? ABSOLUTE(__U1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1TXInterrupt)    ? ABSOLUTE(__AltU1TXInterrupt)    :
         (DEFINED(__U1TXInterrupt)       ? ABSOLUTE(__U1TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCInterrupt)    ? ABSOLUTE(__AltADCInterrupt)    :
         (DEFINED(__ADCInterrupt)       ? ABSOLUTE(__ADCInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA1Interrupt)    ? ABSOLUTE(__AltDMA1Interrupt)    :
         (DEFINED(__DMA1Interrupt)       ? ABSOLUTE(__DMA1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt15)    ? ABSOLUTE(__AltInterrupt15)    :
         (DEFINED(__Interrupt15)       ? ABSOLUTE(__Interrupt15)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C1Interrupt)    ? ABSOLUTE(__AltSI2C1Interrupt)    :
         (DEFINED(__SI2C1Interrupt)       ? ABSOLUTE(__SI2C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C1Interrupt)    ? ABSOLUTE(__AltMI2C1Interrupt)    :
         (DEFINED(__MI2C1Interrupt)       ? ABSOLUTE(__MI2C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCMP1Interrupt)    ? ABSOLUTE(__AltCMP1Interrupt)    :
         (DEFINED(__CMP1Interrupt)       ? ABSOLUTE(__CMP1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCNInterrupt)    ? ABSOLUTE(__AltCNInterrupt)    :
         (DEFINED(__CNInterrupt)       ? ABSOLUTE(__CNInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT1Interrupt)    ? ABSOLUTE(__AltINT1Interrupt)    :
         (DEFINED(__INT1Interrupt)       ? ABSOLUTE(__INT1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt21)    ? ABSOLUTE(__AltInterrupt21)    :
         (DEFINED(__Interrupt21)       ? ABSOLUTE(__Interrupt21)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt22)    ? ABSOLUTE(__AltInterrupt22)    :
         (DEFINED(__Interrupt22)       ? ABSOLUTE(__Interrupt22)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt23)    ? ABSOLUTE(__AltInterrupt23)    :
         (DEFINED(__Interrupt23)       ? ABSOLUTE(__Interrupt23)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA2Interrupt)    ? ABSOLUTE(__AltDMA2Interrupt)    :
         (DEFINED(__DMA2Interrupt)       ? ABSOLUTE(__DMA2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC3Interrupt)    ? ABSOLUTE(__AltOC3Interrupt)    :
         (DEFINED(__OC3Interrupt)       ? ABSOLUTE(__OC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC4Interrupt)    ? ABSOLUTE(__AltOC4Interrupt)    :
         (DEFINED(__OC4Interrupt)       ? ABSOLUTE(__OC4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT4Interrupt)    ? ABSOLUTE(__AltT4Interrupt)    :
         (DEFINED(__T4Interrupt)       ? ABSOLUTE(__T4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT5Interrupt)    ? ABSOLUTE(__AltT5Interrupt)    :
         (DEFINED(__T5Interrupt)       ? ABSOLUTE(__T5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT2Interrupt)    ? ABSOLUTE(__AltINT2Interrupt)    :
         (DEFINED(__INT2Interrupt)       ? ABSOLUTE(__INT2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2RXInterrupt)    ? ABSOLUTE(__AltU2RXInterrupt)    :
         (DEFINED(__U2RXInterrupt)       ? ABSOLUTE(__U2RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2TXInterrupt)    ? ABSOLUTE(__AltU2TXInterrupt)    :
         (DEFINED(__U2TXInterrupt)       ? ABSOLUTE(__U2TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2ErrInterrupt)    ? ABSOLUTE(__AltSPI2ErrInterrupt)    :
         (DEFINED(__SPI2ErrInterrupt)       ? ABSOLUTE(__SPI2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2Interrupt)    ? ABSOLUTE(__AltSPI2Interrupt)    :
         (DEFINED(__SPI2Interrupt)       ? ABSOLUTE(__SPI2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1RxRdyInterrupt)    ? ABSOLUTE(__AltC1RxRdyInterrupt)    :
         (DEFINED(__C1RxRdyInterrupt)       ? ABSOLUTE(__C1RxRdyInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1Interrupt)    ? ABSOLUTE(__AltC1Interrupt)    :
         (DEFINED(__C1Interrupt)       ? ABSOLUTE(__C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA3Interrupt)    ? ABSOLUTE(__AltDMA3Interrupt)    :
         (DEFINED(__DMA3Interrupt)       ? ABSOLUTE(__DMA3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC3Interrupt)    ? ABSOLUTE(__AltIC3Interrupt)    :
         (DEFINED(__IC3Interrupt)       ? ABSOLUTE(__IC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC4Interrupt)    ? ABSOLUTE(__AltIC4Interrupt)    :
         (DEFINED(__IC4Interrupt)       ? ABSOLUTE(__IC4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt39)    ? ABSOLUTE(__AltInterrupt39)    :
         (DEFINED(__Interrupt39)       ? ABSOLUTE(__Interrupt39)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt40)    ? ABSOLUTE(__AltInterrupt40)    :
         (DEFINED(__Interrupt40)       ? ABSOLUTE(__Interrupt40)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt41)    ? ABSOLUTE(__AltInterrupt41)    :
         (DEFINED(__Interrupt41)       ? ABSOLUTE(__Interrupt41)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt42)    ? ABSOLUTE(__AltInterrupt42)    :
         (DEFINED(__Interrupt42)       ? ABSOLUTE(__Interrupt42)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt43)    ? ABSOLUTE(__AltInterrupt43)    :
         (DEFINED(__Interrupt43)       ? ABSOLUTE(__Interrupt43)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt44)    ? ABSOLUTE(__AltInterrupt44)    :
         (DEFINED(__Interrupt44)       ? ABSOLUTE(__Interrupt44)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt45)    ? ABSOLUTE(__AltInterrupt45)    :
         (DEFINED(__Interrupt45)       ? ABSOLUTE(__Interrupt45)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt46)    ? ABSOLUTE(__AltInterrupt46)    :
         (DEFINED(__Interrupt46)       ? ABSOLUTE(__Interrupt46)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt47)    ? ABSOLUTE(__AltInterrupt47)    :
         (DEFINED(__Interrupt47)       ? ABSOLUTE(__Interrupt47)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt48)    ? ABSOLUTE(__AltInterrupt48)    :
         (DEFINED(__Interrupt48)       ? ABSOLUTE(__Interrupt48)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C2Interrupt)    ? ABSOLUTE(__AltSI2C2Interrupt)    :
         (DEFINED(__SI2C2Interrupt)       ? ABSOLUTE(__SI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C2Interrupt)    ? ABSOLUTE(__AltMI2C2Interrupt)    :
         (DEFINED(__MI2C2Interrupt)       ? ABSOLUTE(__MI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt51)    ? ABSOLUTE(__AltInterrupt51)    :
         (DEFINED(__Interrupt51)       ? ABSOLUTE(__Interrupt51)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt52)    ? ABSOLUTE(__AltInterrupt52)    :
         (DEFINED(__Interrupt52)       ? ABSOLUTE(__Interrupt52)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT3Interrupt)    ? ABSOLUTE(__AltINT3Interrupt)    :
         (DEFINED(__INT3Interrupt)       ? ABSOLUTE(__INT3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT4Interrupt)    ? ABSOLUTE(__AltINT4Interrupt)    :
         (DEFINED(__INT4Interrupt)       ? ABSOLUTE(__INT4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt55)    ? ABSOLUTE(__AltInterrupt55)    :
         (DEFINED(__Interrupt55)       ? ABSOLUTE(__Interrupt55)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt56)    ? ABSOLUTE(__AltInterrupt56)    :
         (DEFINED(__Interrupt56)       ? ABSOLUTE(__Interrupt56)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWMSpEventMatchInterrupt)    ? ABSOLUTE(__AltPWMSpEventMatchInterrupt)    :
         (DEFINED(__PWMSpEventMatchInterrupt)       ? ABSOLUTE(__PWMSpEventMatchInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltQEI1Interrupt)    ? ABSOLUTE(__AltQEI1Interrupt)    :
         (DEFINED(__QEI1Interrupt)       ? ABSOLUTE(__QEI1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt59)    ? ABSOLUTE(__AltInterrupt59)    :
         (DEFINED(__Interrupt59)       ? ABSOLUTE(__Interrupt59)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt60)    ? ABSOLUTE(__AltInterrupt60)    :
         (DEFINED(__Interrupt60)       ? ABSOLUTE(__Interrupt60)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt61)    ? ABSOLUTE(__AltInterrupt61)    :
         (DEFINED(__Interrupt61)       ? ABSOLUTE(__Interrupt61)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt62)    ? ABSOLUTE(__AltInterrupt62)    :
         (DEFINED(__Interrupt62)       ? ABSOLUTE(__Interrupt62)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt63)    ? ABSOLUTE(__AltInterrupt63)    :
         (DEFINED(__Interrupt63)       ? ABSOLUTE(__Interrupt63)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt64)    ? ABSOLUTE(__AltInterrupt64)    :
         (DEFINED(__Interrupt64)       ? ABSOLUTE(__Interrupt64)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1ErrInterrupt)    ? ABSOLUTE(__AltU1ErrInterrupt)    :
         (DEFINED(__U1ErrInterrupt)       ? ABSOLUTE(__U1ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2ErrInterrupt)    ? ABSOLUTE(__AltU2ErrInterrupt)    :
         (DEFINED(__U2ErrInterrupt)       ? ABSOLUTE(__U2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt67)    ? ABSOLUTE(__AltInterrupt67)    :
         (DEFINED(__Interrupt67)       ? ABSOLUTE(__Interrupt67)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt68)    ? ABSOLUTE(__AltInterrupt68)    :
         (DEFINED(__Interrupt68)       ? ABSOLUTE(__Interrupt68)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt69)    ? ABSOLUTE(__AltInterrupt69)    :
         (DEFINED(__Interrupt69)       ? ABSOLUTE(__Interrupt69)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1TxReqInterrupt)    ? ABSOLUTE(__AltC1TxReqInterrupt)    :
         (DEFINED(__C1TxReqInterrupt)       ? ABSOLUTE(__C1TxReqInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt71)    ? ABSOLUTE(__AltInterrupt71)    :
         (DEFINED(__Interrupt71)       ? ABSOLUTE(__Interrupt71)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt72)    ? ABSOLUTE(__AltInterrupt72)    :
         (DEFINED(__Interrupt72)       ? ABSOLUTE(__Interrupt72)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWMSecSpEventMatchInterrupt)    ? ABSOLUTE(__AltPWMSecSpEventMatchInterrupt)    :
         (DEFINED(__PWMSecSpEventMatchInterrupt)       ? ABSOLUTE(__PWMSecSpEventMatchInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt74)    ? ABSOLUTE(__AltInterrupt74)    :
         (DEFINED(__Interrupt74)       ? ABSOLUTE(__Interrupt74)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltQEI2Interrupt)    ? ABSOLUTE(__AltQEI2Interrupt)    :
         (DEFINED(__QEI2Interrupt)       ? ABSOLUTE(__QEI2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt76)    ? ABSOLUTE(__AltInterrupt76)    :
         (DEFINED(__Interrupt76)       ? ABSOLUTE(__Interrupt76)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt77)    ? ABSOLUTE(__AltInterrupt77)    :
         (DEFINED(__Interrupt77)       ? ABSOLUTE(__Interrupt77)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt78)    ? ABSOLUTE(__AltInterrupt78)    :
         (DEFINED(__Interrupt78)       ? ABSOLUTE(__Interrupt78)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt79)    ? ABSOLUTE(__AltInterrupt79)    :
         (DEFINED(__Interrupt79)       ? ABSOLUTE(__Interrupt79)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt80)    ? ABSOLUTE(__AltInterrupt80)    :
         (DEFINED(__Interrupt80)       ? ABSOLUTE(__Interrupt80)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP8Interrupt)    ? ABSOLUTE(__AltADCP8Interrupt)    :
         (DEFINED(__ADCP8Interrupt)       ? ABSOLUTE(__ADCP8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt82)    ? ABSOLUTE(__AltInterrupt82)    :
         (DEFINED(__Interrupt82)       ? ABSOLUTE(__Interrupt82)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt83)    ? ABSOLUTE(__AltInterrupt83)    :
         (DEFINED(__Interrupt83)       ? ABSOLUTE(__Interrupt83)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt84)    ? ABSOLUTE(__AltInterrupt84)    :
         (DEFINED(__Interrupt84)       ? ABSOLUTE(__Interrupt84)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP12Interrupt)    ? ABSOLUTE(__AltADCP12Interrupt)    :
         (DEFINED(__ADCP12Interrupt)       ? ABSOLUTE(__ADCP12Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt86)    ? ABSOLUTE(__AltInterrupt86)    :
         (DEFINED(__Interrupt86)       ? ABSOLUTE(__Interrupt86)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt87)    ? ABSOLUTE(__AltInterrupt87)    :
         (DEFINED(__Interrupt87)       ? ABSOLUTE(__Interrupt87)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt88)    ? ABSOLUTE(__AltInterrupt88)    :
         (DEFINED(__Interrupt88)       ? ABSOLUTE(__Interrupt88)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt89)    ? ABSOLUTE(__AltInterrupt89)    :
         (DEFINED(__Interrupt89)       ? ABSOLUTE(__Interrupt89)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt90)    ? ABSOLUTE(__AltInterrupt90)    :
         (DEFINED(__Interrupt90)       ? ABSOLUTE(__Interrupt90)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt91)    ? ABSOLUTE(__AltInterrupt91)    :
         (DEFINED(__Interrupt91)       ? ABSOLUTE(__Interrupt91)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt92)    ? ABSOLUTE(__AltInterrupt92)    :
         (DEFINED(__Interrupt92)       ? ABSOLUTE(__Interrupt92)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt93)    ? ABSOLUTE(__AltInterrupt93)    :
         (DEFINED(__Interrupt93)       ? ABSOLUTE(__Interrupt93)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM1Interrupt)    ? ABSOLUTE(__AltPWM1Interrupt)    :
         (DEFINED(__PWM1Interrupt)       ? ABSOLUTE(__PWM1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM2Interrupt)    ? ABSOLUTE(__AltPWM2Interrupt)    :
         (DEFINED(__PWM2Interrupt)       ? ABSOLUTE(__PWM2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM3Interrupt)    ? ABSOLUTE(__AltPWM3Interrupt)    :
         (DEFINED(__PWM3Interrupt)       ? ABSOLUTE(__PWM3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM4Interrupt)    ? ABSOLUTE(__AltPWM4Interrupt)    :
         (DEFINED(__PWM4Interrupt)       ? ABSOLUTE(__PWM4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM5Interrupt)    ? ABSOLUTE(__AltPWM5Interrupt)    :
         (DEFINED(__PWM5Interrupt)       ? ABSOLUTE(__PWM5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM6Interrupt)    ? ABSOLUTE(__AltPWM6Interrupt)    :
         (DEFINED(__PWM6Interrupt)       ? ABSOLUTE(__PWM6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM7Interrupt)    ? ABSOLUTE(__AltPWM7Interrupt)    :
         (DEFINED(__PWM7Interrupt)       ? ABSOLUTE(__PWM7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM8Interrupt)    ? ABSOLUTE(__AltPWM8Interrupt)    :
         (DEFINED(__PWM8Interrupt)       ? ABSOLUTE(__PWM8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt102)    ? ABSOLUTE(__AltInterrupt102)    :
         (DEFINED(__Interrupt102)       ? ABSOLUTE(__Interrupt102)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCMP2Interrupt)    ? ABSOLUTE(__AltCMP2Interrupt)    :
         (DEFINED(__CMP2Interrupt)       ? ABSOLUTE(__CMP2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCMP3Interrupt)    ? ABSOLUTE(__AltCMP3Interrupt)    :
         (DEFINED(__CMP3Interrupt)       ? ABSOLUTE(__CMP3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCMP4Interrupt)    ? ABSOLUTE(__AltCMP4Interrupt)    :
         (DEFINED(__CMP4Interrupt)       ? ABSOLUTE(__CMP4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt106)    ? ABSOLUTE(__AltInterrupt106)    :
         (DEFINED(__Interrupt106)       ? ABSOLUTE(__Interrupt106)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt107)    ? ABSOLUTE(__AltInterrupt107)    :
         (DEFINED(__Interrupt107)       ? ABSOLUTE(__Interrupt107)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt108)    ? ABSOLUTE(__AltInterrupt108)    :
         (DEFINED(__Interrupt108)       ? ABSOLUTE(__Interrupt108)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt109)    ? ABSOLUTE(__AltInterrupt109)    :
         (DEFINED(__Interrupt109)       ? ABSOLUTE(__Interrupt109)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP0Interrupt)    ? ABSOLUTE(__AltADCP0Interrupt)    :
         (DEFINED(__ADCP0Interrupt)       ? ABSOLUTE(__ADCP0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP1Interrupt)    ? ABSOLUTE(__AltADCP1Interrupt)    :
         (DEFINED(__ADCP1Interrupt)       ? ABSOLUTE(__ADCP1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP2Interrupt)    ? ABSOLUTE(__AltADCP2Interrupt)    :
         (DEFINED(__ADCP2Interrupt)       ? ABSOLUTE(__ADCP2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP3Interrupt)    ? ABSOLUTE(__AltADCP3Interrupt)    :
         (DEFINED(__ADCP3Interrupt)       ? ABSOLUTE(__ADCP3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP4Interrupt)    ? ABSOLUTE(__AltADCP4Interrupt)    :
         (DEFINED(__ADCP4Interrupt)       ? ABSOLUTE(__ADCP4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP5Interrupt)    ? ABSOLUTE(__AltADCP5Interrupt)    :
         (DEFINED(__ADCP5Interrupt)       ? ABSOLUTE(__ADCP5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP6Interrupt)    ? ABSOLUTE(__AltADCP6Interrupt)    :
         (DEFINED(__ADCP6Interrupt)       ? ABSOLUTE(__ADCP6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCP7Interrupt)    ? ABSOLUTE(__AltADCP7Interrupt)    :
         (DEFINED(__ADCP7Interrupt)       ? ABSOLUTE(__ADCP7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
  } >aivt
} /* SECTIONS */
#endif


/*
** ============== Equates for SFR Addresses =============
*/

 WREG0        = 0x0;
_WREG0        = 0x0;
 WREG1        = 0x2;
_WREG1        = 0x2;
 WREG2        = 0x4;
_WREG2        = 0x4;
 WREG3        = 0x6;
_WREG3        = 0x6;
 WREG4        = 0x8;
_WREG4        = 0x8;
 WREG5        = 0xA;
_WREG5        = 0xA;
 WREG6        = 0xC;
_WREG6        = 0xC;
 WREG7        = 0xE;
_WREG7        = 0xE;
 WREG8        = 0x10;
_WREG8        = 0x10;
 WREG9        = 0x12;
_WREG9        = 0x12;
 WREG10       = 0x14;
_WREG10       = 0x14;
 WREG11       = 0x16;
_WREG11       = 0x16;
 WREG12       = 0x18;
_WREG12       = 0x18;
 WREG13       = 0x1A;
_WREG13       = 0x1A;
 WREG14       = 0x1C;
_WREG14       = 0x1C;
 WREG15       = 0x1E;
_WREG15       = 0x1E;
 SPLIM        = 0x20;
_SPLIM        = 0x20;
 ACCAL        = 0x22;
_ACCAL        = 0x22;
 ACCAH        = 0x24;
_ACCAH        = 0x24;
 ACCAU        = 0x26;
_ACCAU        = 0x26;
 ACCBL        = 0x28;
_ACCBL        = 0x28;
 ACCBH        = 0x2A;
_ACCBH        = 0x2A;
 ACCBU        = 0x2C;
_ACCBU        = 0x2C;
 PCL          = 0x2E;
_PCL          = 0x2E;
 PCH          = 0x30;
_PCH          = 0x30;
 TBLPAG       = 0x32;
_TBLPAG       = 0x32;
 PSVPAG       = 0x34;
_PSVPAG       = 0x34;
 RCOUNT       = 0x36;
_RCOUNT       = 0x36;
 DCOUNT       = 0x38;
_DCOUNT       = 0x38;
 DOSTARTL     = 0x3A;
_DOSTARTL     = 0x3A;
 DOSTARTH     = 0x3C;
_DOSTARTH     = 0x3C;
 DOENDL       = 0x3E;
_DOENDL       = 0x3E;
 DOENDH       = 0x40;
_DOENDH       = 0x40;
 SR           = 0x42;
_SR           = 0x42;
_SRbits       = 0x42;
 CORCON       = 0x44;
_CORCON       = 0x44;
_CORCONbits   = 0x44;
 MODCON       = 0x46;
_MODCON       = 0x46;
_MODCONbits   = 0x46;
 XMODSRT      = 0x48;
_XMODSRT      = 0x48;
 XMODEND      = 0x4A;
_XMODEND      = 0x4A;
 YMODSRT      = 0x4C;
_YMODSRT      = 0x4C;
 YMODEND      = 0x4E;
_YMODEND      = 0x4E;
 XBREV        = 0x50;
_XBREV        = 0x50;
_XBREVbits    = 0x50;
 DISICNT      = 0x52;
_DISICNT      = 0x52;
 CNEN1        = 0x60;
_CNEN1        = 0x60;
_CNEN1bits    = 0x60;
 CNEN2        = 0x62;
_CNEN2        = 0x62;
_CNEN2bits    = 0x62;
 CNPU1        = 0x68;
_CNPU1        = 0x68;
_CNPU1bits    = 0x68;
 CNPU2        = 0x6A;
_CNPU2        = 0x6A;
_CNPU2bits    = 0x6A;
 INTCON1      = 0x80;
_INTCON1      = 0x80;
_INTCON1bits  = 0x80;
 INTCON2      = 0x82;
_INTCON2      = 0x82;
_INTCON2bits  = 0x82;
 IFS0         = 0x84;
_IFS0         = 0x84;
_IFS0bits     = 0x84;
 IFS1         = 0x86;
_IFS1         = 0x86;
_IFS1bits     = 0x86;
 IFS2         = 0x88;
_IFS2         = 0x88;
_IFS2bits     = 0x88;
 IFS3         = 0x8A;
_IFS3         = 0x8A;
_IFS3bits     = 0x8A;
 IFS4         = 0x8C;
_IFS4         = 0x8C;
_IFS4bits     = 0x8C;
 IFS5         = 0x8E;
_IFS5         = 0x8E;
_IFS5bits     = 0x8E;
 IFS6         = 0x90;
_IFS6         = 0x90;
_IFS6bits     = 0x90;
 IFS7         = 0x92;
_IFS7         = 0x92;
_IFS7bits     = 0x92;
 IEC0         = 0x94;
_IEC0         = 0x94;
_IEC0bits     = 0x94;
 IEC1         = 0x96;
_IEC1         = 0x96;
_IEC1bits     = 0x96;
 IEC2         = 0x98;
_IEC2         = 0x98;
_IEC2bits     = 0x98;
 IEC3         = 0x9A;
_IEC3         = 0x9A;
_IEC3bits     = 0x9A;
 IEC4         = 0x9C;
_IEC4         = 0x9C;
_IEC4bits     = 0x9C;
 IEC5         = 0x9E;
_IEC5         = 0x9E;
_IEC5bits     = 0x9E;
 IEC6         = 0xA0;
_IEC6         = 0xA0;
_IEC6bits     = 0xA0;
 IEC7         = 0xA2;
_IEC7         = 0xA2;
_IEC7bits     = 0xA2;
 IPC0         = 0xA4;
_IPC0         = 0xA4;
_IPC0bits     = 0xA4;
 IPC1         = 0xA6;
_IPC1         = 0xA6;
_IPC1bits     = 0xA6;
 IPC2         = 0xA8;
_IPC2         = 0xA8;
_IPC2bits     = 0xA8;
 IPC3         = 0xAA;
_IPC3         = 0xAA;
_IPC3bits     = 0xAA;
 IPC4         = 0xAC;
_IPC4         = 0xAC;
_IPC4bits     = 0xAC;
 IPC5         = 0xAE;
_IPC5         = 0xAE;
_IPC5bits     = 0xAE;
 IPC6         = 0xB0;
_IPC6         = 0xB0;
_IPC6bits     = 0xB0;
 IPC7         = 0xB2;
_IPC7         = 0xB2;
_IPC7bits     = 0xB2;
 IPC8         = 0xB4;
_IPC8         = 0xB4;
_IPC8bits     = 0xB4;
 IPC9         = 0xB6;
_IPC9         = 0xB6;
_IPC9bits     = 0xB6;
 IPC12        = 0xBC;
_IPC12        = 0xBC;
_IPC12bits    = 0xBC;
 IPC13        = 0xBE;
_IPC13        = 0xBE;
_IPC13bits    = 0xBE;
 IPC14        = 0xC0;
_IPC14        = 0xC0;
_IPC14bits    = 0xC0;
 IPC16        = 0xC4;
_IPC16        = 0xC4;
_IPC16bits    = 0xC4;
 IPC17        = 0xC6;
_IPC17        = 0xC6;
_IPC17bits    = 0xC6;
 IPC18        = 0xC8;
_IPC18        = 0xC8;
_IPC18bits    = 0xC8;
 IPC20        = 0xCC;
_IPC20        = 0xCC;
_IPC20bits    = 0xCC;
 IPC21        = 0xCE;
_IPC21        = 0xCE;
_IPC21bits    = 0xCE;
 IPC23        = 0xD2;
_IPC23        = 0xD2;
_IPC23bits    = 0xD2;
 IPC24        = 0xD4;
_IPC24        = 0xD4;
_IPC24bits    = 0xD4;
 IPC25        = 0xD6;
_IPC25        = 0xD6;
_IPC25bits    = 0xD6;
 IPC26        = 0xD8;
_IPC26        = 0xD8;
_IPC26bits    = 0xD8;
 IPC27        = 0xDA;
_IPC27        = 0xDA;
_IPC27bits    = 0xDA;
 IPC28        = 0xDC;
_IPC28        = 0xDC;
_IPC28bits    = 0xDC;
 IPC29        = 0xDE;
_IPC29        = 0xDE;
_IPC29bits    = 0xDE;
 INTTREG      = 0xE0;
_INTTREG      = 0xE0;
_INTTREGbits  = 0xE0;
 TMR1         = 0x100;
_TMR1         = 0x100;
 PR1          = 0x102;
_PR1          = 0x102;
 T1CON        = 0x104;
_T1CON        = 0x104;
_T1CONbits    = 0x104;
 TMR2         = 0x106;
_TMR2         = 0x106;
 TMR3HLD      = 0x108;
_TMR3HLD      = 0x108;
 TMR3         = 0x10A;
_TMR3         = 0x10A;
 PR2          = 0x10C;
_PR2          = 0x10C;
 PR3          = 0x10E;
_PR3          = 0x10E;
 T2CON        = 0x110;
_T2CON        = 0x110;
_T2CONbits    = 0x110;
 T3CON        = 0x112;
_T3CON        = 0x112;
_T3CONbits    = 0x112;
 TMR4         = 0x114;
_TMR4         = 0x114;
 TMR5HLD      = 0x116;
_TMR5HLD      = 0x116;
 TMR5         = 0x118;
_TMR5         = 0x118;
 PR4          = 0x11A;
_PR4          = 0x11A;
 PR5          = 0x11C;
_PR5          = 0x11C;
 T4CON        = 0x11E;
_T4CON        = 0x11E;
_T4CONbits    = 0x11E;
 T5CON        = 0x120;
_T5CON        = 0x120;
_T5CONbits    = 0x120;
 IC1BUF       = 0x140;
_IC1BUF       = 0x140;
 IC1CON       = 0x142;
_IC1CON       = 0x142;
_IC1CONbits   = 0x142;
 IC2BUF       = 0x144;
_IC2BUF       = 0x144;
 IC2CON       = 0x146;
_IC2CON       = 0x146;
_IC2CONbits   = 0x146;
 IC3BUF       = 0x148;
_IC3BUF       = 0x148;
 IC3CON       = 0x14A;
_IC3CON       = 0x14A;
_IC3CONbits   = 0x14A;
 IC4BUF       = 0x14C;
_IC4BUF       = 0x14C;
 IC4CON       = 0x14E;
_IC4CON       = 0x14E;
_IC4CONbits   = 0x14E;
 OC1RS        = 0x180;
_OC1RS        = 0x180;
 OC1R         = 0x182;
_OC1R         = 0x182;
 OC1CON       = 0x184;
_OC1CON       = 0x184;
_OC1CONbits   = 0x184;
 OC2RS        = 0x186;
_OC2RS        = 0x186;
 OC2R         = 0x188;
_OC2R         = 0x188;
 OC2CON       = 0x18A;
_OC2CON       = 0x18A;
_OC2CONbits   = 0x18A;
 OC3RS        = 0x18C;
_OC3RS        = 0x18C;
 OC3R         = 0x18E;
_OC3R         = 0x18E;
 OC3CON       = 0x190;
_OC3CON       = 0x190;
_OC3CONbits   = 0x190;
 OC4RS        = 0x192;
_OC4RS        = 0x192;
 OC4R         = 0x194;
_OC4R         = 0x194;
 OC4CON       = 0x196;
_OC4CON       = 0x196;
_OC4CONbits   = 0x196;
 QEI1CON      = 0x1E0;
_QEI1CON      = 0x1E0;
_QEI1CONbits  = 0x1E0;
 DFLT1CON     = 0x1E2;
_DFLT1CON     = 0x1E2;
_DFLT1CONbits = 0x1E2;
 POS1CNT      = 0x1E4;
_POS1CNT      = 0x1E4;
 MAX1CNT      = 0x1E6;
_MAX1CNT      = 0x1E6;
 QEI2CON      = 0x1F0;
_QEI2CON      = 0x1F0;
_QEI2CONbits  = 0x1F0;
 DFLT2CON     = 0x1F2;
_DFLT2CON     = 0x1F2;
_DFLT2CONbits = 0x1F2;
 POS2CNT      = 0x1F4;
_POS2CNT      = 0x1F4;
 MAX2CNT      = 0x1F6;
_MAX2CNT      = 0x1F6;
 I2C1RCV      = 0x200;
_I2C1RCV      = 0x200;
 I2CRCV       = 0x200;
_I2CRCV       = 0x200;
 I2C1TRN      = 0x202;
_I2C1TRN      = 0x202;
 I2CTRN       = 0x202;
_I2CTRN       = 0x202;
 I2C1BRG      = 0x204;
_I2C1BRG      = 0x204;
 I2C1CON      = 0x206;
_I2C1CON      = 0x206;
_I2C1CONbits  = 0x206;
 I2CCON       = 0x206;
_I2CCON       = 0x206;
_I2CCONbits   = 0x206;
 I2C1STAT     = 0x208;
_I2C1STAT     = 0x208;
_I2C1STATbits = 0x208;
 I2CSTAT      = 0x208;
_I2CSTAT      = 0x208;
_I2CSTATbits  = 0x208;
 I2C1ADD      = 0x20A;
_I2C1ADD      = 0x20A;
 I2CADD       = 0x20A;
_I2CADD       = 0x20A;
 I2C1MSK      = 0x20C;
_I2C1MSK      = 0x20C;
 I2C2RCV      = 0x210;
_I2C2RCV      = 0x210;
 I2C2TRN      = 0x212;
_I2C2TRN      = 0x212;
 I2C2BRG      = 0x214;
_I2C2BRG      = 0x214;
 I2C2CON      = 0x216;
_I2C2CON      = 0x216;
_I2C2CONbits  = 0x216;
 I2C2STAT     = 0x218;
_I2C2STAT     = 0x218;
_I2C2STATbits = 0x218;
 I2C2ADD      = 0x21A;
_I2C2ADD      = 0x21A;
 I2C2MSK      = 0x21C;
_I2C2MSK      = 0x21C;
 U1MODE       = 0x220;
_U1MODE       = 0x220;
_U1MODEbits   = 0x220;
 U1STA        = 0x222;
_U1STA        = 0x222;
_U1STAbits    = 0x222;
 U1TXREG      = 0x224;
_U1TXREG      = 0x224;
_U1TXREGbits  = 0x224;
 U1RXREG      = 0x226;
_U1RXREG      = 0x226;
_U1RXREGbits  = 0x226;
 U1BRG        = 0x228;
_U1BRG        = 0x228;
 U2MODE       = 0x230;
_U2MODE       = 0x230;
_U2MODEbits   = 0x230;
 U2STA        = 0x232;
_U2STA        = 0x232;
_U2STAbits    = 0x232;
 U2TXREG      = 0x234;
_U2TXREG      = 0x234;
_U2TXREGbits  = 0x234;
 U2RXREG      = 0x236;
_U2RXREG      = 0x236;
_U2RXREGbits  = 0x236;
 U2BRG        = 0x238;
_U2BRG        = 0x238;
 SPI1STAT     = 0x240;
_SPI1STAT     = 0x240;
_SPI1STATbits = 0x240;
 SPI1CON1     = 0x242;
_SPI1CON1     = 0x242;
_SPI1CON1bits = 0x242;
 SPI1CON2     = 0x244;
_SPI1CON2     = 0x244;
_SPI1CON2bits = 0x244;
 SPI1BUF      = 0x248;
_SPI1BUF      = 0x248;
 SPI2STAT     = 0x260;
_SPI2STAT     = 0x260;
_SPI2STATbits = 0x260;
 SPI2CON1     = 0x262;
_SPI2CON1     = 0x262;
_SPI2CON1bits = 0x262;
 SPI2CON2     = 0x264;
_SPI2CON2     = 0x264;
_SPI2CON2bits = 0x264;
 SPI2BUF      = 0x268;
_SPI2BUF      = 0x268;
 TRISA        = 0x2C0;
_TRISA        = 0x2C0;
_TRISAbits    = 0x2C0;
 PORTA        = 0x2C2;
_PORTA        = 0x2C2;
_PORTAbits    = 0x2C2;
 LATA         = 0x2C4;
_LATA         = 0x2C4;
_LATAbits     = 0x2C4;
 ODCA         = 0x2C6;
_ODCA         = 0x2C6;
_ODCAbits     = 0x2C6;
 TRISB        = 0x2C8;
_TRISB        = 0x2C8;
_TRISBbits    = 0x2C8;
 PORTB        = 0x2CA;
_PORTB        = 0x2CA;
_PORTBbits    = 0x2CA;
 LATB         = 0x2CC;
_LATB         = 0x2CC;
_LATBbits     = 0x2CC;
 TRISC        = 0x2D0;
_TRISC        = 0x2D0;
_TRISCbits    = 0x2D0;
 PORTC        = 0x2D2;
_PORTC        = 0x2D2;
_PORTCbits    = 0x2D2;
 LATC         = 0x2D4;
_LATC         = 0x2D4;
_LATCbits     = 0x2D4;
 TRISD        = 0x2D8;
_TRISD        = 0x2D8;
_TRISDbits    = 0x2D8;
 PORTD        = 0x2DA;
_PORTD        = 0x2DA;
_PORTDbits    = 0x2DA;
 LATD         = 0x2DC;
_LATD         = 0x2DC;
_LATDbits     = 0x2DC;
 ODCD         = 0x2DE;
_ODCD         = 0x2DE;
_ODCDbits     = 0x2DE;
 TRISE        = 0x2E0;
_TRISE        = 0x2E0;
_TRISEbits    = 0x2E0;
 PORTE        = 0x2E2;
_PORTE        = 0x2E2;
_PORTEbits    = 0x2E2;
 LATE         = 0x2E4;
_LATE         = 0x2E4;
_LATEbits     = 0x2E4;
 ODCE         = 0x2E6;
_ODCE         = 0x2E6;
_ODCEbits     = 0x2E6;
 TRISF        = 0x2E8;
_TRISF        = 0x2E8;
_TRISFbits    = 0x2E8;
 PORTF        = 0x2EA;
_PORTF        = 0x2EA;
_PORTFbits    = 0x2EA;
 LATF         = 0x2EC;
_LATF         = 0x2EC;
_LATFbits     = 0x2EC;
 ODCF         = 0x2EE;
_ODCF         = 0x2EE;
_ODCFbits     = 0x2EE;
 TRISG        = 0x2F0;
_TRISG        = 0x2F0;
_TRISGbits    = 0x2F0;
 PORTG        = 0x2F2;
_PORTG        = 0x2F2;
_PORTGbits    = 0x2F2;
 LATG         = 0x2F4;
_LATG         = 0x2F4;
_LATGbits     = 0x2F4;
 ODCG         = 0x2F6;
_ODCG         = 0x2F6;
_ODCGbits     = 0x2F6;
 ADCON        = 0x300;
_ADCON        = 0x300;
_ADCONbits    = 0x300;
 ADPCFG       = 0x302;
_ADPCFG       = 0x302;
_ADPCFGbits   = 0x302;
 ADPCFG2      = 0x304;
_ADPCFG2      = 0x304;
_ADPCFG2bits  = 0x304;
 ADSTAT       = 0x306;
_ADSTAT       = 0x306;
_ADSTATbits   = 0x306;
 ADBASE       = 0x308;
_ADBASE       = 0x308;
 ADCPC0       = 0x30A;
_ADCPC0       = 0x30A;
_ADCPC0bits   = 0x30A;
 ADCPC1       = 0x30C;
_ADCPC1       = 0x30C;
_ADCPC1bits   = 0x30C;
 ADCPC2       = 0x30E;
_ADCPC2       = 0x30E;
_ADCPC2bits   = 0x30E;
 ADCPC3       = 0x310;
_ADCPC3       = 0x310;
_ADCPC3bits   = 0x310;
 ADCPC4       = 0x312;
_ADCPC4       = 0x312;
_ADCPC4bits   = 0x312;
 ADCPC6       = 0x316;
_ADCPC6       = 0x316;
_ADCPC6bits   = 0x316;
 ADCBUF0      = 0x340;
_ADCBUF0      = 0x340;
 ADCBUF1      = 0x342;
_ADCBUF1      = 0x342;
 ADCBUF2      = 0x344;
_ADCBUF2      = 0x344;
 ADCBUF3      = 0x346;
_ADCBUF3      = 0x346;
 ADCBUF4      = 0x348;
_ADCBUF4      = 0x348;
 ADCBUF5      = 0x34A;
_ADCBUF5      = 0x34A;
 ADCBUF6      = 0x34C;
_ADCBUF6      = 0x34C;
 ADCBUF7      = 0x34E;
_ADCBUF7      = 0x34E;
 ADCBUF8      = 0x350;
_ADCBUF8      = 0x350;
 ADCBUF9      = 0x352;
_ADCBUF9      = 0x352;
 ADCBUF10     = 0x354;
_ADCBUF10     = 0x354;
 ADCBUF11     = 0x356;
_ADCBUF11     = 0x356;
 ADCBUF12     = 0x358;
_ADCBUF12     = 0x358;
 ADCBUF13     = 0x35A;
_ADCBUF13     = 0x35A;
 ADCBUF14     = 0x35C;
_ADCBUF14     = 0x35C;
 ADCBUF15     = 0x35E;
_ADCBUF15     = 0x35E;
 ADCBUF16     = 0x360;
_ADCBUF16     = 0x360;
 ADCBUF17     = 0x362;
_ADCBUF17     = 0x362;
 ADCBUF24     = 0x370;
_ADCBUF24     = 0x370;
 ADCBUF25     = 0x372;
_ADCBUF25     = 0x372;
 DMA0CON      = 0x380;
_DMA0CON      = 0x380;
_DMA0CONbits  = 0x380;
 DMA0REQ      = 0x382;
_DMA0REQ      = 0x382;
_DMA0REQbits  = 0x382;
 DMA0STA      = 0x384;
_DMA0STA      = 0x384;
 DMA0STB      = 0x386;
_DMA0STB      = 0x386;
 DMA0PAD      = 0x388;
_DMA0PAD      = 0x388;
 DMA0CNT      = 0x38A;
_DMA0CNT      = 0x38A;
 DMA1CON      = 0x38C;
_DMA1CON      = 0x38C;
_DMA1CONbits  = 0x38C;
 DMA1REQ      = 0x38E;
_DMA1REQ      = 0x38E;
_DMA1REQbits  = 0x38E;
 DMA1STA      = 0x390;
_DMA1STA      = 0x390;
 DMA1STB      = 0x392;
_DMA1STB      = 0x392;
 DMA1PAD      = 0x394;
_DMA1PAD      = 0x394;
 DMA1CNT      = 0x396;
_DMA1CNT      = 0x396;
 DMA2CON      = 0x398;
_DMA2CON      = 0x398;
_DMA2CONbits  = 0x398;
 DMA2REQ      = 0x39A;
_DMA2REQ      = 0x39A;
_DMA2REQbits  = 0x39A;
 DMA2STA      = 0x39C;
_DMA2STA      = 0x39C;
 DMA2STB      = 0x39E;
_DMA2STB      = 0x39E;
 DMA2PAD      = 0x3A0;
_DMA2PAD      = 0x3A0;
 DMA2CNT      = 0x3A2;
_DMA2CNT      = 0x3A2;
 DMA3CON      = 0x3A4;
_DMA3CON      = 0x3A4;
_DMA3CONbits  = 0x3A4;
 DMA3REQ      = 0x3A6;
_DMA3REQ      = 0x3A6;
_DMA3REQbits  = 0x3A6;
 DMA3STA      = 0x3A8;
_DMA3STA      = 0x3A8;
 DMA3STB      = 0x3AA;
_DMA3STB      = 0x3AA;
 DMA3PAD      = 0x3AC;
_DMA3PAD      = 0x3AC;
 DMA3CNT      = 0x3AE;
_DMA3CNT      = 0x3AE;
 DMACS0       = 0x3E0;
_DMACS0       = 0x3E0;
_DMACS0bits   = 0x3E0;
 DMACS1       = 0x3E2;
_DMACS1       = 0x3E2;
_DMACS1bits   = 0x3E2;
 DSADR        = 0x3E4;
_DSADR        = 0x3E4;
 PTCON        = 0x400;
_PTCON        = 0x400;
_PTCONbits    = 0x400;
 PTCON2       = 0x402;
_PTCON2       = 0x402;
_PTCON2bits   = 0x402;
 PTPER        = 0x404;
_PTPER        = 0x404;
 SEVTCMP      = 0x406;
_SEVTCMP      = 0x406;
 MDC          = 0x40A;
_MDC          = 0x40A;
 STCON        = 0x40E;
_STCON        = 0x40E;
_STCONbits    = 0x40E;
 STCON2       = 0x410;
_STCON2       = 0x410;
_STCON2bits   = 0x410;
 STPER        = 0x412;
_STPER        = 0x412;
 SSEVTCMP     = 0x414;
_SSEVTCMP     = 0x414;
 CHOP         = 0x41A;
_CHOP         = 0x41A;
_CHOPbits     = 0x41A;
 PWMCON1      = 0x420;
_PWMCON1      = 0x420;
_PWMCON1bits  = 0x420;
 IOCON1       = 0x422;
_IOCON1       = 0x422;
_IOCON1bits   = 0x422;
 FCLCON1      = 0x424;
_FCLCON1      = 0x424;
_FCLCON1bits  = 0x424;
 PDC1         = 0x426;
_PDC1         = 0x426;
 PHASE1       = 0x428;
_PHASE1       = 0x428;
 DTR1         = 0x42A;
_DTR1         = 0x42A;
 ALTDTR1      = 0x42C;
_ALTDTR1      = 0x42C;
 SDC1         = 0x42E;
_SDC1         = 0x42E;
 SPHASE1      = 0x430;
_SPHASE1      = 0x430;
 TRIG1        = 0x432;
_TRIG1        = 0x432;
_TRIG1bits    = 0x432;
 TRGCON1      = 0x434;
_TRGCON1      = 0x434;
_TRGCON1bits  = 0x434;
 STRIG1       = 0x436;
_STRIG1       = 0x436;
_STRIG1bits   = 0x436;
 PWMCAP1      = 0x438;
_PWMCAP1      = 0x438;
_PWMCAP1bits  = 0x438;
 LEBCON1      = 0x43A;
_LEBCON1      = 0x43A;
_LEBCON1bits  = 0x43A;
 LEBDLY1      = 0x43C;
_LEBDLY1      = 0x43C;
_LEBDLY1bits  = 0x43C;
 AUXCON1      = 0x43E;
_AUXCON1      = 0x43E;
_AUXCON1bits  = 0x43E;
 PWMCON2      = 0x440;
_PWMCON2      = 0x440;
_PWMCON2bits  = 0x440;
 IOCON2       = 0x442;
_IOCON2       = 0x442;
_IOCON2bits   = 0x442;
 FCLCON2      = 0x444;
_FCLCON2      = 0x444;
_FCLCON2bits  = 0x444;
 PDC2         = 0x446;
_PDC2         = 0x446;
 PHASE2       = 0x448;
_PHASE2       = 0x448;
 DTR2         = 0x44A;
_DTR2         = 0x44A;
 ALTDTR2      = 0x44C;
_ALTDTR2      = 0x44C;
 SDC2         = 0x44E;
_SDC2         = 0x44E;
 SPHASE2      = 0x450;
_SPHASE2      = 0x450;
 TRIG2        = 0x452;
_TRIG2        = 0x452;
_TRIG2bits    = 0x452;
 TRGCON2      = 0x454;
_TRGCON2      = 0x454;
_TRGCON2bits  = 0x454;
 STRIG2       = 0x456;
_STRIG2       = 0x456;
_STRIG2bits   = 0x456;
 PWMCAP2      = 0x458;
_PWMCAP2      = 0x458;
 LEBCON2      = 0x45A;
_LEBCON2      = 0x45A;
_LEBCON2bits  = 0x45A;
 LEBDLY2      = 0x45C;
_LEBDLY2      = 0x45C;
_LEBDLY2bits  = 0x45C;
 AUXCON2      = 0x45E;
_AUXCON2      = 0x45E;
_AUXCON2bits  = 0x45E;
 PWMCON3      = 0x460;
_PWMCON3      = 0x460;
_PWMCON3bits  = 0x460;
 IOCON3       = 0x462;
_IOCON3       = 0x462;
_IOCON3bits   = 0x462;
 FCLCON3      = 0x464;
_FCLCON3      = 0x464;
_FCLCON3bits  = 0x464;
 PDC3         = 0x466;
_PDC3         = 0x466;
 PHASE3       = 0x468;
_PHASE3       = 0x468;
 DTR3         = 0x46A;
_DTR3         = 0x46A;
 ALTDTR3      = 0x46C;
_ALTDTR3      = 0x46C;
 SDC3         = 0x46E;
_SDC3         = 0x46E;
 SPHASE3      = 0x470;
_SPHASE3      = 0x470;
 TRIG3        = 0x472;
_TRIG3        = 0x472;
_TRIG3bits    = 0x472;
 TRGCON3      = 0x474;
_TRGCON3      = 0x474;
_TRGCON3bits  = 0x474;
 STRIG3       = 0x476;
_STRIG3       = 0x476;
_STRIG3bits   = 0x476;
 PWMCAP3      = 0x478;
_PWMCAP3      = 0x478;
 LEBCON3      = 0x47A;
_LEBCON3      = 0x47A;
_LEBCON3bits  = 0x47A;
 LEBDLY3      = 0x47C;
_LEBDLY3      = 0x47C;
_LEBDLY3bits  = 0x47C;
 AUXCON3      = 0x47E;
_AUXCON3      = 0x47E;
_AUXCON3bits  = 0x47E;
 PWMCON4      = 0x480;
_PWMCON4      = 0x480;
_PWMCON4bits  = 0x480;
 IOCON4       = 0x482;
_IOCON4       = 0x482;
_IOCON4bits   = 0x482;
 FCLCON4      = 0x484;
_FCLCON4      = 0x484;
_FCLCON4bits  = 0x484;
 PDC4         = 0x486;
_PDC4         = 0x486;
 PHASE4       = 0x488;
_PHASE4       = 0x488;
 DTR4         = 0x48A;
_DTR4         = 0x48A;
 ALTDTR4      = 0x48C;
_ALTDTR4      = 0x48C;
 SDC4         = 0x48E;
_SDC4         = 0x48E;
 SPHASE4      = 0x490;
_SPHASE4      = 0x490;
 TRIG4        = 0x492;
_TRIG4        = 0x492;
_TRIG4bits    = 0x492;
 TRGCON4      = 0x494;
_TRGCON4      = 0x494;
_TRGCON4bits  = 0x494;
 STRIG4       = 0x496;
_STRIG4       = 0x496;
_STRIG4bits   = 0x496;
 PWMCAP4      = 0x498;
_PWMCAP4      = 0x498;
 LEBCON4      = 0x49A;
_LEBCON4      = 0x49A;
_LEBCON4bits  = 0x49A;
 LEBDLY4      = 0x49C;
_LEBDLY4      = 0x49C;
_LEBDLY4bits  = 0x49C;
 AUXCON4      = 0x49E;
_AUXCON4      = 0x49E;
_AUXCON4bits  = 0x49E;
 PWMCON5      = 0x4A0;
_PWMCON5      = 0x4A0;
_PWMCON5bits  = 0x4A0;
 IOCON5       = 0x4A2;
_IOCON5       = 0x4A2;
_IOCON5bits   = 0x4A2;
 FCLCON5      = 0x4A4;
_FCLCON5      = 0x4A4;
_FCLCON5bits  = 0x4A4;
 PDC5         = 0x4A6;
_PDC5         = 0x4A6;
 PHASE5       = 0x4A8;
_PHASE5       = 0x4A8;
 DTR5         = 0x4AA;
_DTR5         = 0x4AA;
 ALTDTR5      = 0x4AC;
_ALTDTR5      = 0x4AC;
 SDC5         = 0x4AE;
_SDC5         = 0x4AE;
 SPHASE5      = 0x4B0;
_SPHASE5      = 0x4B0;
 TRIG5        = 0x4B2;
_TRIG5        = 0x4B2;
_TRIG5bits    = 0x4B2;
 TRGCON5      = 0x4B4;
_TRGCON5      = 0x4B4;
_TRGCON5bits  = 0x4B4;
 STRIG5       = 0x4B6;
_STRIG5       = 0x4B6;
_STRIG5bits   = 0x4B6;
 PWMCAP5      = 0x4B8;
_PWMCAP5      = 0x4B8;
 LEBCON5      = 0x4BA;
_LEBCON5      = 0x4BA;
_LEBCON5bits  = 0x4BA;
 LEBDLY5      = 0x4BC;
_LEBDLY5      = 0x4BC;
_LEBDLY5bits  = 0x4BC;
 AUXCON5      = 0x4BE;
_AUXCON5      = 0x4BE;
_AUXCON5bits  = 0x4BE;
 PWMCON6      = 0x4C0;
_PWMCON6      = 0x4C0;
_PWMCON6bits  = 0x4C0;
 IOCON6       = 0x4C2;
_IOCON6       = 0x4C2;
_IOCON6bits   = 0x4C2;
 FCLCON6      = 0x4C4;
_FCLCON6      = 0x4C4;
_FCLCON6bits  = 0x4C4;
 PDC6         = 0x4C6;
_PDC6         = 0x4C6;
 PHASE6       = 0x4C8;
_PHASE6       = 0x4C8;
 DTR6         = 0x4CA;
_DTR6         = 0x4CA;
 ALTDTR6      = 0x4CC;
_ALTDTR6      = 0x4CC;
 SDC6         = 0x4CE;
_SDC6         = 0x4CE;
 SPHASE6      = 0x4D0;
_SPHASE6      = 0x4D0;
 TRIG6        = 0x4D2;
_TRIG6        = 0x4D2;
_TRIG6bits    = 0x4D2;
 TRGCON6      = 0x4D4;
_TRGCON6      = 0x4D4;
_TRGCON6bits  = 0x4D4;
 STRIG6       = 0x4D6;
_STRIG6       = 0x4D6;
_STRIG6bits   = 0x4D6;
 PWMCAP6      = 0x4D8;
_PWMCAP6      = 0x4D8;
 LEBCON6      = 0x4DA;
_LEBCON6      = 0x4DA;
_LEBCON6bits  = 0x4DA;
 LEBDLY6      = 0x4DC;
_LEBDLY6      = 0x4DC;
_LEBDLY6bits  = 0x4DC;
 AUXCON6      = 0x4DE;
_AUXCON6      = 0x4DE;
_AUXCON6bits  = 0x4DE;
 PWMCON7      = 0x4E0;
_PWMCON7      = 0x4E0;
_PWMCON7bits  = 0x4E0;
 IOCON7       = 0x4E2;
_IOCON7       = 0x4E2;
_IOCON7bits   = 0x4E2;
 FCLCON7      = 0x4E4;
_FCLCON7      = 0x4E4;
_FCLCON7bits  = 0x4E4;
 PDC7         = 0x4E6;
_PDC7         = 0x4E6;
 PHASE7       = 0x4E8;
_PHASE7       = 0x4E8;
 DTR7         = 0x4EA;
_DTR7         = 0x4EA;
 ALTDTR7      = 0x4EC;
_ALTDTR7      = 0x4EC;
 SDC7         = 0x4EE;
_SDC7         = 0x4EE;
 SPHASE7      = 0x4F0;
_SPHASE7      = 0x4F0;
 TRIG7        = 0x4F2;
_TRIG7        = 0x4F2;
_TRIG7bits    = 0x4F2;
 TRGCON7      = 0x4F4;
_TRGCON7      = 0x4F4;
_TRGCON7bits  = 0x4F4;
 STRIG7       = 0x4F6;
_STRIG7       = 0x4F6;
_STRIG7bits   = 0x4F6;
 PWMCAP7      = 0x4F8;
_PWMCAP7      = 0x4F8;
 LEBCON7      = 0x4FA;
_LEBCON7      = 0x4FA;
_LEBCON7bits  = 0x4FA;
 LEBDLY7      = 0x4FC;
_LEBDLY7      = 0x4FC;
_LEBDLY7bits  = 0x4FC;
 AUXCON7      = 0x4FE;
_AUXCON7      = 0x4FE;
_AUXCON7bits  = 0x4FE;
 PWMCON8      = 0x500;
_PWMCON8      = 0x500;
_PWMCON8bits  = 0x500;
 IOCON8       = 0x502;
_IOCON8       = 0x502;
_IOCON8bits   = 0x502;
 FCLCON8      = 0x504;
_FCLCON8      = 0x504;
_FCLCON8bits  = 0x504;
 PDC8         = 0x506;
_PDC8         = 0x506;
 PHASE8       = 0x508;
_PHASE8       = 0x508;
 DTR8         = 0x50A;
_DTR8         = 0x50A;
 ALTDTR8      = 0x50C;
_ALTDTR8      = 0x50C;
 SDC8         = 0x50E;
_SDC8         = 0x50E;
 SPHASE8      = 0x510;
_SPHASE8      = 0x510;
 TRIG8        = 0x512;
_TRIG8        = 0x512;
_TRIG8bits    = 0x512;
 TRGCON8      = 0x514;
_TRGCON8      = 0x514;
_TRGCON8bits  = 0x514;
 STRIG8       = 0x516;
_STRIG8       = 0x516;
_STRIG8bits   = 0x516;
 PWMCAP8      = 0x518;
_PWMCAP8      = 0x518;
 LEBCON8      = 0x51A;
_LEBCON8      = 0x51A;
_LEBCON8bits  = 0x51A;
 LEBDLY8      = 0x51C;
_LEBDLY8      = 0x51C;
_LEBDLY8bits  = 0x51C;
 AUXCON8      = 0x51E;
_AUXCON8      = 0x51E;
_AUXCON8bits  = 0x51E;
 CMPCON1      = 0x540;
_CMPCON1      = 0x540;
_CMPCON1bits  = 0x540;
 CMPDAC1      = 0x542;
_CMPDAC1      = 0x542;
_CMPDAC1bits  = 0x542;
 CMPCON2      = 0x544;
_CMPCON2      = 0x544;
_CMPCON2bits  = 0x544;
 CMPDAC2      = 0x546;
_CMPDAC2      = 0x546;
_CMPDAC2bits  = 0x546;
 CMPCON3      = 0x548;
_CMPCON3      = 0x548;
_CMPCON3bits  = 0x548;
 CMPDAC3      = 0x54A;
_CMPDAC3      = 0x54A;
_CMPDAC3bits  = 0x54A;
 CMPCON4      = 0x54C;
_CMPCON4      = 0x54C;
_CMPCON4bits  = 0x54C;
 CMPDAC4      = 0x54E;
_CMPDAC4      = 0x54E;
_CMPDAC4bits  = 0x54E;
 C1CTRL1      = 0x600;
_C1CTRL1      = 0x600;
_C1CTRL1bits  = 0x600;
 C1CTRL2      = 0x602;
_C1CTRL2      = 0x602;
_C1CTRL2bits  = 0x602;
 C1VEC        = 0x604;
_C1VEC        = 0x604;
_C1VECbits    = 0x604;
 C1FCTRL      = 0x606;
_C1FCTRL      = 0x606;
_C1FCTRLbits  = 0x606;
 C1FIFO       = 0x608;
_C1FIFO       = 0x608;
_C1FIFObits   = 0x608;
 C1INTF       = 0x60A;
_C1INTF       = 0x60A;
_C1INTFbits   = 0x60A;
 C1INTE       = 0x60C;
_C1INTE       = 0x60C;
_C1INTEbits   = 0x60C;
 C1EC         = 0x60E;
_C1EC         = 0x60E;
_C1ECbits     = 0x60E;
 C1RERRCNT    = 0x60E;
_C1RERRCNT    = 0x60E;
 C1TERRCNT    = 0x60F;
_C1TERRCNT    = 0x60F;
 C1CFG1       = 0x610;
_C1CFG1       = 0x610;
_C1CFG1bits   = 0x610;
 C1CFG2       = 0x612;
_C1CFG2       = 0x612;
_C1CFG2bits   = 0x612;
 C1FEN1       = 0x614;
_C1FEN1       = 0x614;
_C1FEN1bits   = 0x614;
 C1FMSKSEL1   = 0x618;
_C1FMSKSEL1   = 0x618;
_C1FMSKSEL1bits = 0x618;
 C1FMSKSEL2   = 0x61A;
_C1FMSKSEL2   = 0x61A;
_C1FMSKSEL2bits = 0x61A;
 C1BUFPNT1    = 0x620;
_C1BUFPNT1    = 0x620;
_C1BUFPNT1bits = 0x620;
 C1RXFUL1     = 0x620;
_C1RXFUL1     = 0x620;
_C1RXFUL1bits = 0x620;
 C1BUFPNT2    = 0x622;
_C1BUFPNT2    = 0x622;
_C1BUFPNT2bits = 0x622;
 C1RXFUL2     = 0x622;
_C1RXFUL2     = 0x622;
_C1RXFUL2bits = 0x622;
 C1BUFPNT3    = 0x624;
_C1BUFPNT3    = 0x624;
_C1BUFPNT3bits = 0x624;
 C1BUFPNT4    = 0x626;
_C1BUFPNT4    = 0x626;
_C1BUFPNT4bits = 0x626;
 C1RXOVF1     = 0x628;
_C1RXOVF1     = 0x628;
_C1RXOVF1bits = 0x628;
 C1RXOVF2     = 0x62A;
_C1RXOVF2     = 0x62A;
_C1RXOVF2bits = 0x62A;
 C1RXM0SID    = 0x630;
_C1RXM0SID    = 0x630;
_C1RXM0SIDbits = 0x630;
 C1TR01CON    = 0x630;
_C1TR01CON    = 0x630;
_C1TR01CONbits = 0x630;
 C1RXM0EID    = 0x632;
_C1RXM0EID    = 0x632;
_C1RXM0EIDbits = 0x632;
 C1TR23CON    = 0x632;
_C1TR23CON    = 0x632;
_C1TR23CONbits = 0x632;
 C1RXM1SID    = 0x634;
_C1RXM1SID    = 0x634;
_C1RXM1SIDbits = 0x634;
 C1TR45CON    = 0x634;
_C1TR45CON    = 0x634;
_C1TR45CONbits = 0x634;
 C1RXM1EID    = 0x636;
_C1RXM1EID    = 0x636;
_C1RXM1EIDbits = 0x636;
 C1TR67CON    = 0x636;
_C1TR67CON    = 0x636;
_C1TR67CONbits = 0x636;
 C1RXM2SID    = 0x638;
_C1RXM2SID    = 0x638;
_C1RXM2SIDbits = 0x638;
 C1RXM2EID    = 0x63A;
_C1RXM2EID    = 0x63A;
_C1RXM2EIDbits = 0x63A;
 C1RXD        = 0x640;
_C1RXD        = 0x640;
 C1RXF0SID    = 0x640;
_C1RXF0SID    = 0x640;
_C1RXF0SIDbits = 0x640;
 C1RXF0EID    = 0x642;
_C1RXF0EID    = 0x642;
_C1RXF0EIDbits = 0x642;
 C1TXD        = 0x642;
_C1TXD        = 0x642;
 C1RXF1SID    = 0x644;
_C1RXF1SID    = 0x644;
_C1RXF1SIDbits = 0x644;
 C1RXF1EID    = 0x646;
_C1RXF1EID    = 0x646;
_C1RXF1EIDbits = 0x646;
 C1RXF2SID    = 0x648;
_C1RXF2SID    = 0x648;
_C1RXF2SIDbits = 0x648;
 C1RXF2EID    = 0x64A;
_C1RXF2EID    = 0x64A;
_C1RXF2EIDbits = 0x64A;
 C1RXF3SID    = 0x64C;
_C1RXF3SID    = 0x64C;
_C1RXF3SIDbits = 0x64C;
 C1RXF3EID    = 0x64E;
_C1RXF3EID    = 0x64E;
_C1RXF3EIDbits = 0x64E;
 C1RXF4SID    = 0x650;
_C1RXF4SID    = 0x650;
_C1RXF4SIDbits = 0x650;
 C1RXF4EID    = 0x652;
_C1RXF4EID    = 0x652;
_C1RXF4EIDbits = 0x652;
 C1RXF5SID    = 0x654;
_C1RXF5SID    = 0x654;
_C1RXF5SIDbits = 0x654;
 C1RXF5EID    = 0x656;
_C1RXF5EID    = 0x656;
_C1RXF5EIDbits = 0x656;
 C1RXF6SID    = 0x658;
_C1RXF6SID    = 0x658;
_C1RXF6SIDbits = 0x658;
 C1RXF6EID    = 0x65A;
_C1RXF6EID    = 0x65A;
_C1RXF6EIDbits = 0x65A;
 C1RXF7SID    = 0x65C;
_C1RXF7SID    = 0x65C;
_C1RXF7SIDbits = 0x65C;
 C1RXF7EID    = 0x65E;
_C1RXF7EID    = 0x65E;
_C1RXF7EIDbits = 0x65E;
 C1RXF8SID    = 0x660;
_C1RXF8SID    = 0x660;
_C1RXF8SIDbits = 0x660;
 C1RXF8EID    = 0x662;
_C1RXF8EID    = 0x662;
_C1RXF8EIDbits = 0x662;
 C1RXF9SID    = 0x664;
_C1RXF9SID    = 0x664;
_C1RXF9SIDbits = 0x664;
 C1RXF9EID    = 0x666;
_C1RXF9EID    = 0x666;
_C1RXF9EIDbits = 0x666;
 C1RXF10SID   = 0x668;
_C1RXF10SID   = 0x668;
_C1RXF10SIDbits = 0x668;
 C1RXF10EID   = 0x66A;
_C1RXF10EID   = 0x66A;
_C1RXF10EIDbits = 0x66A;
 C1RXF11SID   = 0x66C;
_C1RXF11SID   = 0x66C;
_C1RXF11SIDbits = 0x66C;
 C1RXF11EID   = 0x66E;
_C1RXF11EID   = 0x66E;
_C1RXF11EIDbits = 0x66E;
 C1RXF12SID   = 0x670;
_C1RXF12SID   = 0x670;
_C1RXF12SIDbits = 0x670;
 C1RXF12EID   = 0x672;
_C1RXF12EID   = 0x672;
_C1RXF12EIDbits = 0x672;
 C1RXF13SID   = 0x674;
_C1RXF13SID   = 0x674;
_C1RXF13SIDbits = 0x674;
 C1RXF13EID   = 0x676;
_C1RXF13EID   = 0x676;
_C1RXF13EIDbits = 0x676;
 C1RXF14SID   = 0x678;
_C1RXF14SID   = 0x678;
_C1RXF14SIDbits = 0x678;
 C1RXF14EID   = 0x67A;
_C1RXF14EID   = 0x67A;
_C1RXF14EIDbits = 0x67A;
 C1RXF15SID   = 0x67C;
_C1RXF15SID   = 0x67C;
_C1RXF15SIDbits = 0x67C;
 C1RXF15EID   = 0x67E;
_C1RXF15EID   = 0x67E;
_C1RXF15EIDbits = 0x67E;
 RCON         = 0x740;
_RCON         = 0x740;
_RCONbits     = 0x740;
 OSCCON       = 0x742;
_OSCCON       = 0x742;
_OSCCONbits   = 0x742;
 OSCCONL      = 0x742;
_OSCCONL      = 0x742;
 OSCCONH      = 0x743;
_OSCCONH      = 0x743;
 CLKDIV       = 0x744;
_CLKDIV       = 0x744;
_CLKDIVbits   = 0x744;
 PLLFBD       = 0x746;
_PLLFBD       = 0x746;
_PLLFBDbits   = 0x746;
 OSCTUN       = 0x748;
_OSCTUN       = 0x748;
_OSCTUNbits   = 0x748;
 OSCTUN2      = 0x74A;
_OSCTUN2      = 0x74A;
_OSCTUN2bits  = 0x74A;
 LFSR         = 0x74C;
_LFSR         = 0x74C;
 REFOCON      = 0x74E;
_REFOCON      = 0x74E;
_REFOCONbits  = 0x74E;
 ACLKCON      = 0x750;
_ACLKCON      = 0x750;
_ACLKCONbits  = 0x750;
 NVMCON       = 0x760;
_NVMCON       = 0x760;
_NVMCONbits   = 0x760;
 NVMKEY       = 0x766;
_NVMKEY       = 0x766;
 PMD1         = 0x770;
_PMD1         = 0x770;
_PMD1bits     = 0x770;
 PMD2         = 0x772;
_PMD2         = 0x772;
_PMD2bits     = 0x772;
 PMD3         = 0x774;
_PMD3         = 0x774;
_PMD3bits     = 0x774;
 PMD4         = 0x776;
_PMD4         = 0x776;
_PMD4bits     = 0x776;
 PMD6         = 0x77A;
_PMD6         = 0x77A;
_PMD6bits     = 0x77A;
 PMD7         = 0x77C;
_PMD7         = 0x77C;
_PMD7bits     = 0x77C;
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 ACCA         = 0x22;
_ACCA         = 0x22;
 ACCB         = 0x28;
_ACCB         = 0x28;
 CAN1         = 0x640;
_CAN1         = 0x640;
 IC1          = 0x140;
_IC1          = 0x140;
 IC2          = 0x144;
_IC2          = 0x144;
 IC3          = 0x148;
_IC3          = 0x148;
 IC4          = 0x14C;
_IC4          = 0x14C;
 OC1          = 0x180;
_OC1          = 0x180;
 OC2          = 0x186;
_OC2          = 0x186;
 OC3          = 0x18C;
_OC3          = 0x18C;
 OC4          = 0x192;
_OC4          = 0x192;
 SPI1         = 0x240;
_SPI1         = 0x240;
 SPI2         = 0x260;
_SPI2         = 0x260;
 UART1        = 0x220;
_UART1        = 0x220;
 UART2        = 0x230;
_UART2        = 0x230;
