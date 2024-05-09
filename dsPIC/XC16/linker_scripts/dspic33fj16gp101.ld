/*
 * Linker script for PIC33FJ16GP101
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


OUTPUT_ARCH("33FJ16GP101")
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

OPTIONAL(-lp33FJ16GP101)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x800,         LENGTH = 0x400
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0xFC
  _reserved      : ORIGIN = 0x100,         LENGTH = 0x4
  aivt           : ORIGIN = 0x104,         LENGTH = 0xFC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0x29FC
  CONFIG2        : ORIGIN = 0x2BFC,        LENGTH = 0x2
  CONFIG1        : ORIGIN = 0x2BFE,        LENGTH = 0x2
}

__CONFIG2 = 0x2BFC;
__CONFIG1 = 0x2BFE;

__NO_HANDLES = 1;          /* Suppress handles on this device  */
__CODE_BASE = 0x200;
__CODE_LENGTH = 0x29FC;
__IVT_BASE  = 0x4;
__AIVT_BASE = 0x104;
__DATA_BASE = 0x800;
__DATA_LENGTH = 0x400;
__YDATA_BASE = 0xA00;
__YDATA_END = 0xC00;


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
  __CONFIG2 :
  { KEEP (*(__CONFIG2.sec*))    } >CONFIG2
  __CONFIG1 :
  { KEEP (*(__CONFIG1.sec*))    } >CONFIG1






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
    LONG( DEFINED(__ReservedTrap5)    ? ABSOLUTE(__ReservedTrap5)    :
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
    LONG( DEFINED(__Interrupt4)    ? ABSOLUTE(__Interrupt4)    :
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
    LONG( DEFINED(__ADC1Interrupt)    ? ABSOLUTE(__ADC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt14)    ? ABSOLUTE(__Interrupt14)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt15)    ? ABSOLUTE(__Interrupt15)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C1Interrupt)    ? ABSOLUTE(__SI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C1Interrupt)    ? ABSOLUTE(__MI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CompInterrupt)    ? ABSOLUTE(__CompInterrupt)    :
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
    LONG( DEFINED(__Interrupt24)    ? ABSOLUTE(__Interrupt24)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt25)    ? ABSOLUTE(__Interrupt25)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt26)    ? ABSOLUTE(__Interrupt26)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt27)    ? ABSOLUTE(__Interrupt27)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt28)    ? ABSOLUTE(__Interrupt28)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT2Interrupt)    ? ABSOLUTE(__INT2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt30)    ? ABSOLUTE(__Interrupt30)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt31)    ? ABSOLUTE(__Interrupt31)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt32)    ? ABSOLUTE(__Interrupt32)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt33)    ? ABSOLUTE(__Interrupt33)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt34)    ? ABSOLUTE(__Interrupt34)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt35)    ? ABSOLUTE(__Interrupt35)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt36)    ? ABSOLUTE(__Interrupt36)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC3Interrupt)    ? ABSOLUTE(__IC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt38)    ? ABSOLUTE(__Interrupt38)    :
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
    LONG( DEFINED(__Interrupt49)    ? ABSOLUTE(__Interrupt49)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt50)    ? ABSOLUTE(__Interrupt50)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt51)    ? ABSOLUTE(__Interrupt51)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt52)    ? ABSOLUTE(__Interrupt52)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt53)    ? ABSOLUTE(__Interrupt53)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt54)    ? ABSOLUTE(__Interrupt54)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt55)    ? ABSOLUTE(__Interrupt55)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt56)    ? ABSOLUTE(__Interrupt56)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt57)    ? ABSOLUTE(__Interrupt57)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt58)    ? ABSOLUTE(__Interrupt58)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt59)    ? ABSOLUTE(__Interrupt59)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt60)    ? ABSOLUTE(__Interrupt60)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt61)    ? ABSOLUTE(__Interrupt61)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__RTCCInterrupt)    ? ABSOLUTE(__RTCCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt63)    ? ABSOLUTE(__Interrupt63)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt64)    ? ABSOLUTE(__Interrupt64)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1ErrInterrupt)    ? ABSOLUTE(__U1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt66)    ? ABSOLUTE(__Interrupt66)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt67)    ? ABSOLUTE(__Interrupt67)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt68)    ? ABSOLUTE(__Interrupt68)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt69)    ? ABSOLUTE(__Interrupt69)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt70)    ? ABSOLUTE(__Interrupt70)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt71)    ? ABSOLUTE(__Interrupt71)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt72)    ? ABSOLUTE(__Interrupt72)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt73)    ? ABSOLUTE(__Interrupt73)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt74)    ? ABSOLUTE(__Interrupt74)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt75)    ? ABSOLUTE(__Interrupt75)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt76)    ? ABSOLUTE(__Interrupt76)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CTMUInterrupt)    ? ABSOLUTE(__CTMUInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt78)    ? ABSOLUTE(__Interrupt78)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt79)    ? ABSOLUTE(__Interrupt79)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt80)    ? ABSOLUTE(__Interrupt80)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt81)    ? ABSOLUTE(__Interrupt81)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt82)    ? ABSOLUTE(__Interrupt82)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt83)    ? ABSOLUTE(__Interrupt83)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt84)    ? ABSOLUTE(__Interrupt84)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt85)    ? ABSOLUTE(__Interrupt85)    :
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
    LONG( DEFINED(__Interrupt94)    ? ABSOLUTE(__Interrupt94)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt95)    ? ABSOLUTE(__Interrupt95)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt96)    ? ABSOLUTE(__Interrupt96)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt97)    ? ABSOLUTE(__Interrupt97)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt98)    ? ABSOLUTE(__Interrupt98)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt99)    ? ABSOLUTE(__Interrupt99)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt100)    ? ABSOLUTE(__Interrupt100)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt101)    ? ABSOLUTE(__Interrupt101)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt102)    ? ABSOLUTE(__Interrupt102)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt103)    ? ABSOLUTE(__Interrupt103)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt104)    ? ABSOLUTE(__Interrupt104)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt105)    ? ABSOLUTE(__Interrupt105)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt106)    ? ABSOLUTE(__Interrupt106)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt107)    ? ABSOLUTE(__Interrupt107)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt108)    ? ABSOLUTE(__Interrupt108)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt109)    ? ABSOLUTE(__Interrupt109)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt110)    ? ABSOLUTE(__Interrupt110)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt111)    ? ABSOLUTE(__Interrupt111)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt112)    ? ABSOLUTE(__Interrupt112)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt113)    ? ABSOLUTE(__Interrupt113)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt114)    ? ABSOLUTE(__Interrupt114)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt115)    ? ABSOLUTE(__Interrupt115)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt116)    ? ABSOLUTE(__Interrupt116)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt117)    ? ABSOLUTE(__Interrupt117)    :
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
    LONG( DEFINED(__AltReservedTrap5)    ? ABSOLUTE(__AltReservedTrap5)    :
         (DEFINED(__ReservedTrap5)       ? ABSOLUTE(__ReservedTrap5)       :
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
    LONG( DEFINED(__AltInterrupt4)    ? ABSOLUTE(__AltInterrupt4)    :
         (DEFINED(__Interrupt4)       ? ABSOLUTE(__Interrupt4)       :
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
    LONG( DEFINED(__AltADC1Interrupt)    ? ABSOLUTE(__AltADC1Interrupt)    :
         (DEFINED(__ADC1Interrupt)       ? ABSOLUTE(__ADC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt14)    ? ABSOLUTE(__AltInterrupt14)    :
         (DEFINED(__Interrupt14)       ? ABSOLUTE(__Interrupt14)       :
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
    LONG( DEFINED(__AltCompInterrupt)    ? ABSOLUTE(__AltCompInterrupt)    :
         (DEFINED(__CompInterrupt)       ? ABSOLUTE(__CompInterrupt)       :
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
    LONG( DEFINED(__AltInterrupt24)    ? ABSOLUTE(__AltInterrupt24)    :
         (DEFINED(__Interrupt24)       ? ABSOLUTE(__Interrupt24)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt25)    ? ABSOLUTE(__AltInterrupt25)    :
         (DEFINED(__Interrupt25)       ? ABSOLUTE(__Interrupt25)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt26)    ? ABSOLUTE(__AltInterrupt26)    :
         (DEFINED(__Interrupt26)       ? ABSOLUTE(__Interrupt26)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt27)    ? ABSOLUTE(__AltInterrupt27)    :
         (DEFINED(__Interrupt27)       ? ABSOLUTE(__Interrupt27)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt28)    ? ABSOLUTE(__AltInterrupt28)    :
         (DEFINED(__Interrupt28)       ? ABSOLUTE(__Interrupt28)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT2Interrupt)    ? ABSOLUTE(__AltINT2Interrupt)    :
         (DEFINED(__INT2Interrupt)       ? ABSOLUTE(__INT2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt30)    ? ABSOLUTE(__AltInterrupt30)    :
         (DEFINED(__Interrupt30)       ? ABSOLUTE(__Interrupt30)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt31)    ? ABSOLUTE(__AltInterrupt31)    :
         (DEFINED(__Interrupt31)       ? ABSOLUTE(__Interrupt31)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt32)    ? ABSOLUTE(__AltInterrupt32)    :
         (DEFINED(__Interrupt32)       ? ABSOLUTE(__Interrupt32)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt33)    ? ABSOLUTE(__AltInterrupt33)    :
         (DEFINED(__Interrupt33)       ? ABSOLUTE(__Interrupt33)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt34)    ? ABSOLUTE(__AltInterrupt34)    :
         (DEFINED(__Interrupt34)       ? ABSOLUTE(__Interrupt34)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt35)    ? ABSOLUTE(__AltInterrupt35)    :
         (DEFINED(__Interrupt35)       ? ABSOLUTE(__Interrupt35)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt36)    ? ABSOLUTE(__AltInterrupt36)    :
         (DEFINED(__Interrupt36)       ? ABSOLUTE(__Interrupt36)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC3Interrupt)    ? ABSOLUTE(__AltIC3Interrupt)    :
         (DEFINED(__IC3Interrupt)       ? ABSOLUTE(__IC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt38)    ? ABSOLUTE(__AltInterrupt38)    :
         (DEFINED(__Interrupt38)       ? ABSOLUTE(__Interrupt38)       :
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
    LONG( DEFINED(__AltInterrupt49)    ? ABSOLUTE(__AltInterrupt49)    :
         (DEFINED(__Interrupt49)       ? ABSOLUTE(__Interrupt49)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt50)    ? ABSOLUTE(__AltInterrupt50)    :
         (DEFINED(__Interrupt50)       ? ABSOLUTE(__Interrupt50)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt51)    ? ABSOLUTE(__AltInterrupt51)    :
         (DEFINED(__Interrupt51)       ? ABSOLUTE(__Interrupt51)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt52)    ? ABSOLUTE(__AltInterrupt52)    :
         (DEFINED(__Interrupt52)       ? ABSOLUTE(__Interrupt52)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt53)    ? ABSOLUTE(__AltInterrupt53)    :
         (DEFINED(__Interrupt53)       ? ABSOLUTE(__Interrupt53)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt54)    ? ABSOLUTE(__AltInterrupt54)    :
         (DEFINED(__Interrupt54)       ? ABSOLUTE(__Interrupt54)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt55)    ? ABSOLUTE(__AltInterrupt55)    :
         (DEFINED(__Interrupt55)       ? ABSOLUTE(__Interrupt55)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt56)    ? ABSOLUTE(__AltInterrupt56)    :
         (DEFINED(__Interrupt56)       ? ABSOLUTE(__Interrupt56)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt57)    ? ABSOLUTE(__AltInterrupt57)    :
         (DEFINED(__Interrupt57)       ? ABSOLUTE(__Interrupt57)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt58)    ? ABSOLUTE(__AltInterrupt58)    :
         (DEFINED(__Interrupt58)       ? ABSOLUTE(__Interrupt58)       :
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
    LONG( DEFINED(__AltRTCCInterrupt)    ? ABSOLUTE(__AltRTCCInterrupt)    :
         (DEFINED(__RTCCInterrupt)       ? ABSOLUTE(__RTCCInterrupt)       :
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
    LONG( DEFINED(__AltInterrupt66)    ? ABSOLUTE(__AltInterrupt66)    :
         (DEFINED(__Interrupt66)       ? ABSOLUTE(__Interrupt66)       :
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
    LONG( DEFINED(__AltInterrupt70)    ? ABSOLUTE(__AltInterrupt70)    :
         (DEFINED(__Interrupt70)       ? ABSOLUTE(__Interrupt70)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt71)    ? ABSOLUTE(__AltInterrupt71)    :
         (DEFINED(__Interrupt71)       ? ABSOLUTE(__Interrupt71)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt72)    ? ABSOLUTE(__AltInterrupt72)    :
         (DEFINED(__Interrupt72)       ? ABSOLUTE(__Interrupt72)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt73)    ? ABSOLUTE(__AltInterrupt73)    :
         (DEFINED(__Interrupt73)       ? ABSOLUTE(__Interrupt73)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt74)    ? ABSOLUTE(__AltInterrupt74)    :
         (DEFINED(__Interrupt74)       ? ABSOLUTE(__Interrupt74)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt75)    ? ABSOLUTE(__AltInterrupt75)    :
         (DEFINED(__Interrupt75)       ? ABSOLUTE(__Interrupt75)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt76)    ? ABSOLUTE(__AltInterrupt76)    :
         (DEFINED(__Interrupt76)       ? ABSOLUTE(__Interrupt76)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCTMUInterrupt)    ? ABSOLUTE(__AltCTMUInterrupt)    :
         (DEFINED(__CTMUInterrupt)       ? ABSOLUTE(__CTMUInterrupt)       :
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
    LONG( DEFINED(__AltInterrupt81)    ? ABSOLUTE(__AltInterrupt81)    :
         (DEFINED(__Interrupt81)       ? ABSOLUTE(__Interrupt81)       :
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
    LONG( DEFINED(__AltInterrupt85)    ? ABSOLUTE(__AltInterrupt85)    :
         (DEFINED(__Interrupt85)       ? ABSOLUTE(__Interrupt85)       :
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
    LONG( DEFINED(__AltInterrupt94)    ? ABSOLUTE(__AltInterrupt94)    :
         (DEFINED(__Interrupt94)       ? ABSOLUTE(__Interrupt94)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt95)    ? ABSOLUTE(__AltInterrupt95)    :
         (DEFINED(__Interrupt95)       ? ABSOLUTE(__Interrupt95)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt96)    ? ABSOLUTE(__AltInterrupt96)    :
         (DEFINED(__Interrupt96)       ? ABSOLUTE(__Interrupt96)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt97)    ? ABSOLUTE(__AltInterrupt97)    :
         (DEFINED(__Interrupt97)       ? ABSOLUTE(__Interrupt97)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt98)    ? ABSOLUTE(__AltInterrupt98)    :
         (DEFINED(__Interrupt98)       ? ABSOLUTE(__Interrupt98)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt99)    ? ABSOLUTE(__AltInterrupt99)    :
         (DEFINED(__Interrupt99)       ? ABSOLUTE(__Interrupt99)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt100)    ? ABSOLUTE(__AltInterrupt100)    :
         (DEFINED(__Interrupt100)       ? ABSOLUTE(__Interrupt100)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt101)    ? ABSOLUTE(__AltInterrupt101)    :
         (DEFINED(__Interrupt101)       ? ABSOLUTE(__Interrupt101)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt102)    ? ABSOLUTE(__AltInterrupt102)    :
         (DEFINED(__Interrupt102)       ? ABSOLUTE(__Interrupt102)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt103)    ? ABSOLUTE(__AltInterrupt103)    :
         (DEFINED(__Interrupt103)       ? ABSOLUTE(__Interrupt103)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt104)    ? ABSOLUTE(__AltInterrupt104)    :
         (DEFINED(__Interrupt104)       ? ABSOLUTE(__Interrupt104)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt105)    ? ABSOLUTE(__AltInterrupt105)    :
         (DEFINED(__Interrupt105)       ? ABSOLUTE(__Interrupt105)       :
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
    LONG( DEFINED(__AltInterrupt110)    ? ABSOLUTE(__AltInterrupt110)    :
         (DEFINED(__Interrupt110)       ? ABSOLUTE(__Interrupt110)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt111)    ? ABSOLUTE(__AltInterrupt111)    :
         (DEFINED(__Interrupt111)       ? ABSOLUTE(__Interrupt111)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt112)    ? ABSOLUTE(__AltInterrupt112)    :
         (DEFINED(__Interrupt112)       ? ABSOLUTE(__Interrupt112)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt113)    ? ABSOLUTE(__AltInterrupt113)    :
         (DEFINED(__Interrupt113)       ? ABSOLUTE(__Interrupt113)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt114)    ? ABSOLUTE(__AltInterrupt114)    :
         (DEFINED(__Interrupt114)       ? ABSOLUTE(__Interrupt114)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt115)    ? ABSOLUTE(__AltInterrupt115)    :
         (DEFINED(__Interrupt115)       ? ABSOLUTE(__Interrupt115)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt116)    ? ABSOLUTE(__AltInterrupt116)    :
         (DEFINED(__Interrupt116)       ? ABSOLUTE(__Interrupt116)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt117)    ? ABSOLUTE(__AltInterrupt117)    :
         (DEFINED(__Interrupt117)       ? ABSOLUTE(__Interrupt117)       :
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
 IPC7         = 0xB2;
_IPC7         = 0xB2;
_IPC7bits     = 0xB2;
 IPC9         = 0xB6;
_IPC9         = 0xB6;
_IPC9bits     = 0xB6;
 IPC15        = 0xC2;
_IPC15        = 0xC2;
_IPC15bits    = 0xC2;
 IPC16        = 0xC4;
_IPC16        = 0xC4;
_IPC16bits    = 0xC4;
 IPC19        = 0xCA;
_IPC19        = 0xCA;
_IPC19bits    = 0xCA;
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
 I2C1RCV      = 0x200;
_I2C1RCV      = 0x200;
 I2C1TRN      = 0x202;
_I2C1TRN      = 0x202;
 I2C1BRG      = 0x204;
_I2C1BRG      = 0x204;
 I2C1CON      = 0x206;
_I2C1CON      = 0x206;
_I2C1CONbits  = 0x206;
 I2C1STAT     = 0x208;
_I2C1STAT     = 0x208;
_I2C1STATbits = 0x208;
 I2C1ADD      = 0x20A;
_I2C1ADD      = 0x20A;
 I2C1MSK      = 0x20C;
_I2C1MSK      = 0x20C;
 U1MODE       = 0x220;
_U1MODE       = 0x220;
_U1MODEbits   = 0x220;
 U1STA        = 0x222;
_U1STA        = 0x222;
_U1STAbits    = 0x222;
 U1TXREG      = 0x224;
_U1TXREG      = 0x224;
 U1RXREG      = 0x226;
_U1RXREG      = 0x226;
 U1BRG        = 0x228;
_U1BRG        = 0x228;
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
 ODCB         = 0x2CE;
_ODCB         = 0x2CE;
_ODCBbits     = 0x2CE;
 PADCFG1      = 0x2FC;
_PADCFG1      = 0x2FC;
_PADCFG1bits  = 0x2FC;
 ADC1BUF0     = 0x300;
_ADC1BUF0     = 0x300;
 ADC1BUF1     = 0x302;
_ADC1BUF1     = 0x302;
 ADC1BUF2     = 0x304;
_ADC1BUF2     = 0x304;
 ADC1BUF3     = 0x306;
_ADC1BUF3     = 0x306;
 ADC1BUF4     = 0x308;
_ADC1BUF4     = 0x308;
 ADC1BUF5     = 0x30A;
_ADC1BUF5     = 0x30A;
 ADC1BUF6     = 0x30C;
_ADC1BUF6     = 0x30C;
 ADC1BUF7     = 0x30E;
_ADC1BUF7     = 0x30E;
 ADC1BUF8     = 0x310;
_ADC1BUF8     = 0x310;
 ADC1BUF9     = 0x312;
_ADC1BUF9     = 0x312;
 ADC1BUFA     = 0x314;
_ADC1BUFA     = 0x314;
 ADC1BUFB     = 0x316;
_ADC1BUFB     = 0x316;
 ADC1BUFC     = 0x318;
_ADC1BUFC     = 0x318;
 ADC1BUFD     = 0x31A;
_ADC1BUFD     = 0x31A;
 ADC1BUFE     = 0x31C;
_ADC1BUFE     = 0x31C;
 ADC1BUFF     = 0x31E;
_ADC1BUFF     = 0x31E;
 AD1CON1      = 0x320;
_AD1CON1      = 0x320;
_AD1CON1bits  = 0x320;
 AD1CON2      = 0x322;
_AD1CON2      = 0x322;
_AD1CON2bits  = 0x322;
 AD1CON3      = 0x324;
_AD1CON3      = 0x324;
_AD1CON3bits  = 0x324;
 AD1CHS123    = 0x326;
_AD1CHS123    = 0x326;
_AD1CHS123bits = 0x326;
 AD1CHS0      = 0x328;
_AD1CHS0      = 0x328;
_AD1CHS0bits  = 0x328;
 AD1PCFGL     = 0x32C;
_AD1PCFGL     = 0x32C;
_AD1PCFGLbits = 0x32C;
 AD1CSSL      = 0x330;
_AD1CSSL      = 0x330;
_AD1CSSLbits  = 0x330;
 CTMUCON1     = 0x33A;
_CTMUCON1     = 0x33A;
_CTMUCON1bits = 0x33A;
 CTMUCON2     = 0x33C;
_CTMUCON2     = 0x33C;
_CTMUCON2bits = 0x33C;
 CTMUICON     = 0x33E;
_CTMUICON     = 0x33E;
_CTMUICONbits = 0x33E;
 ALRMVAL      = 0x620;
_ALRMVAL      = 0x620;
 ALCFGRPT     = 0x622;
_ALCFGRPT     = 0x622;
_ALCFGRPTbits = 0x622;
 RTCVAL       = 0x624;
_RTCVAL       = 0x624;
 RCFGCAL      = 0x626;
_RCFGCAL      = 0x626;
_RCFGCALbits  = 0x626;
 CMSTAT       = 0x650;
_CMSTAT       = 0x650;
_CMSTATbits   = 0x650;
 CVRCON       = 0x652;
_CVRCON       = 0x652;
_CVRCONbits   = 0x652;
 CM1CON       = 0x654;
_CM1CON       = 0x654;
_CM1CONbits   = 0x654;
 CM1MSKSRC    = 0x656;
_CM1MSKSRC    = 0x656;
_CM1MSKSRCbits = 0x656;
 CM1MSKCON    = 0x658;
_CM1MSKCON    = 0x658;
_CM1MSKCONbits = 0x658;
 CM1FLTR      = 0x65A;
_CM1FLTR      = 0x65A;
_CM1FLTRbits  = 0x65A;
 CM2CON       = 0x65C;
_CM2CON       = 0x65C;
_CM2CONbits   = 0x65C;
 CM2MSKSRC    = 0x65E;
_CM2MSKSRC    = 0x65E;
_CM2MSKSRCbits = 0x65E;
 CM2MSKCON    = 0x660;
_CM2MSKCON    = 0x660;
_CM2MSKCONbits = 0x660;
 CM2FLTR      = 0x662;
_CM2FLTR      = 0x662;
_CM2FLTRbits  = 0x662;
 CM3CON       = 0x664;
_CM3CON       = 0x664;
_CM3CONbits   = 0x664;
 CM3MSKSRC    = 0x666;
_CM3MSKSRC    = 0x666;
_CM3MSKSRCbits = 0x666;
 CM3MSKCON    = 0x668;
_CM3MSKCON    = 0x668;
_CM3MSKCONbits = 0x668;
 CM3FLTR      = 0x66A;
_CM3FLTR      = 0x66A;
_CM3FLTRbits  = 0x66A;
 RPINR0       = 0x680;
_RPINR0       = 0x680;
_RPINR0bits   = 0x680;
 RPINR1       = 0x682;
_RPINR1       = 0x682;
_RPINR1bits   = 0x682;
 RPINR3       = 0x686;
_RPINR3       = 0x686;
_RPINR3bits   = 0x686;
 RPINR7       = 0x68E;
_RPINR7       = 0x68E;
_RPINR7bits   = 0x68E;
 RPINR8       = 0x690;
_RPINR8       = 0x690;
_RPINR8bits   = 0x690;
 RPINR11      = 0x696;
_RPINR11      = 0x696;
_RPINR11bits  = 0x696;
 RPINR18      = 0x6A4;
_RPINR18      = 0x6A4;
_RPINR18bits  = 0x6A4;
 RPINR21      = 0x6AA;
_RPINR21      = 0x6AA;
_RPINR21bits  = 0x6AA;
 RPOR0        = 0x6C0;
_RPOR0        = 0x6C0;
_RPOR0bits    = 0x6C0;
 RPOR2        = 0x6C4;
_RPOR2        = 0x6C4;
_RPOR2bits    = 0x6C4;
 RPOR3        = 0x6C6;
_RPOR3        = 0x6C6;
_RPOR3bits    = 0x6C6;
 RPOR4        = 0x6C8;
_RPOR4        = 0x6C8;
_RPOR4bits    = 0x6C8;
 RPOR7        = 0x6CE;
_RPOR7        = 0x6CE;
_RPOR7bits    = 0x6CE;
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
 OSCTUN       = 0x748;
_OSCTUN       = 0x748;
_OSCTUNbits   = 0x748;
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
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 ACCA         = 0x22;
_ACCA         = 0x22;
 ACCB         = 0x28;
_ACCB         = 0x28;
 IC1          = 0x140;
_IC1          = 0x140;
 IC2          = 0x144;
_IC2          = 0x144;
 IC3          = 0x148;
_IC3          = 0x148;
 OC1          = 0x180;
_OC1          = 0x180;
 OC2          = 0x186;
_OC2          = 0x186;
 SPI1         = 0x240;
_SPI1         = 0x240;
 UART1        = 0x220;
_UART1        = 0x220;
