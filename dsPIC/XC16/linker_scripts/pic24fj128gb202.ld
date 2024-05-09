/*
 * Linker script for PIC24FJ128GB202
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


OUTPUT_ARCH("24FJ128GB202")
#if __XC16_VERSION__ > 1027
CRT0_STARTUP(crt0_extended24.o)
CRT1_STARTUP(crt1_extended24.o)
#else
CRT0_STARTUP(crt0_extended.o)
CRT1_STARTUP(crt1_extended.o)
#endif
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

OPTIONAL(-lpPIC24Fxxx)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x800,         LENGTH = 0x2000
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0xFC
  _reserved      : ORIGIN = 0x100,         LENGTH = 0x4
  aivt           : ORIGIN = 0x104,         LENGTH = 0xFC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0x155F8
  CONFIG4        : ORIGIN = 0x157F8,       LENGTH = 0x2
  CONFIG3        : ORIGIN = 0x157FA,       LENGTH = 0x2
  CONFIG2        : ORIGIN = 0x157FC,       LENGTH = 0x2
  CONFIG1        : ORIGIN = 0x157FE,       LENGTH = 0x2
}

__CONFIG4 = 0x157F8;
__CONFIG3 = 0x157FA;
__CONFIG2 = 0x157FC;
__CONFIG1 = 0x157FE;

__CODE_BASE = 0x200;
__CODE_LENGTH = 0x155F8;
__IVT_BASE  = 0x4;
__AIVT_BASE = 0x104;
__DATA_BASE = 0x800;
__DATA_LENGTH = 0x2000;


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
  __CONFIG4 :
  { KEEP (*(__CONFIG4.sec*))    } >CONFIG4
  __CONFIG3 :
  { KEEP (*(__CONFIG3.sec*))    } >CONFIG3
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
    LONG( DEFINED(__SPI1Interrupt)    ? ABSOLUTE(__SPI1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1TXInterrupt)    ? ABSOLUTE(__SPI1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1RXInterrupt)    ? ABSOLUTE(__U1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1TXInterrupt)    ? ABSOLUTE(__U1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADC1Interrupt)    ? ABSOLUTE(__ADC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA1Interrupt)    ? ABSOLUTE(__DMA1Interrupt)    :
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
    LONG( DEFINED(__SPI2Interrupt)    ? ABSOLUTE(__SPI2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2TXInterrupt)    ? ABSOLUTE(__SPI2TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt34)    ? ABSOLUTE(__Interrupt34)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt35)    ? ABSOLUTE(__Interrupt35)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA3Interrupt)    ? ABSOLUTE(__DMA3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC3Interrupt)    ? ABSOLUTE(__IC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC4Interrupt)    ? ABSOLUTE(__IC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC5Interrupt)    ? ABSOLUTE(__IC5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC6Interrupt)    ? ABSOLUTE(__IC6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC5Interrupt)    ? ABSOLUTE(__OC5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC6Interrupt)    ? ABSOLUTE(__OC6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt43)    ? ABSOLUTE(__Interrupt43)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt44)    ? ABSOLUTE(__Interrupt44)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PMPInterrupt)    ? ABSOLUTE(__PMPInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA4Interrupt)    ? ABSOLUTE(__DMA4Interrupt)    :
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
    LONG( DEFINED(__CRYPTOInterrupt)    ? ABSOLUTE(__CRYPTOInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CRYPTOKeyInterrupt)    ? ABSOLUTE(__CRYPTOKeyInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt57)    ? ABSOLUTE(__Interrupt57)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1RXInterrupt)    ? ABSOLUTE(__SPI1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2RXInterrupt)    ? ABSOLUTE(__SPI2RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI3RXInterrupt)    ? ABSOLUTE(__SPI3RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA5Interrupt)    ? ABSOLUTE(__DMA5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__RTCCInterrupt)    ? ABSOLUTE(__RTCCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt63)    ? ABSOLUTE(__Interrupt63)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt64)    ? ABSOLUTE(__Interrupt64)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1ErrInterrupt)    ? ABSOLUTE(__U1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2ErrInterrupt)    ? ABSOLUTE(__U2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CRCInterrupt)    ? ABSOLUTE(__CRCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt68)    ? ABSOLUTE(__Interrupt68)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt69)    ? ABSOLUTE(__Interrupt69)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt70)    ? ABSOLUTE(__Interrupt70)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt71)    ? ABSOLUTE(__Interrupt71)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__LVDInterrupt)    ? ABSOLUTE(__LVDInterrupt)    :
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
    LONG( DEFINED(__U3ErrInterrupt)    ? ABSOLUTE(__U3ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U3RXInterrupt)    ? ABSOLUTE(__U3RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U3TXInterrupt)    ? ABSOLUTE(__U3TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__I2C1BCLInterrupt)    ? ABSOLUTE(__I2C1BCLInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__I2C2BCLInterrupt)    ? ABSOLUTE(__I2C2BCLInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__USB1Interrupt)    ? ABSOLUTE(__USB1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U4ErrInterrupt)    ? ABSOLUTE(__U4ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U4RXInterrupt)    ? ABSOLUTE(__U4RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U4TXInterrupt)    ? ABSOLUTE(__U4TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI3Interrupt)    ? ABSOLUTE(__SPI3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI3TXInterrupt)    ? ABSOLUTE(__SPI3TXInterrupt)    :
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
    LONG( DEFINED(__FSTInterrupt)    ? ABSOLUTE(__FSTInterrupt)    :
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
    LONG( DEFINED(__JTAGInterrupt)    ? ABSOLUTE(__JTAGInterrupt)    :
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
    LONG( DEFINED(__AltSPI1Interrupt)    ? ABSOLUTE(__AltSPI1Interrupt)    :
         (DEFINED(__SPI1Interrupt)       ? ABSOLUTE(__SPI1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1TXInterrupt)    ? ABSOLUTE(__AltSPI1TXInterrupt)    :
         (DEFINED(__SPI1TXInterrupt)       ? ABSOLUTE(__SPI1TXInterrupt)       :
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
    LONG( DEFINED(__AltSPI2Interrupt)    ? ABSOLUTE(__AltSPI2Interrupt)    :
         (DEFINED(__SPI2Interrupt)       ? ABSOLUTE(__SPI2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2TXInterrupt)    ? ABSOLUTE(__AltSPI2TXInterrupt)    :
         (DEFINED(__SPI2TXInterrupt)       ? ABSOLUTE(__SPI2TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt34)    ? ABSOLUTE(__AltInterrupt34)    :
         (DEFINED(__Interrupt34)       ? ABSOLUTE(__Interrupt34)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt35)    ? ABSOLUTE(__AltInterrupt35)    :
         (DEFINED(__Interrupt35)       ? ABSOLUTE(__Interrupt35)       :
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
    LONG( DEFINED(__AltIC5Interrupt)    ? ABSOLUTE(__AltIC5Interrupt)    :
         (DEFINED(__IC5Interrupt)       ? ABSOLUTE(__IC5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC6Interrupt)    ? ABSOLUTE(__AltIC6Interrupt)    :
         (DEFINED(__IC6Interrupt)       ? ABSOLUTE(__IC6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC5Interrupt)    ? ABSOLUTE(__AltOC5Interrupt)    :
         (DEFINED(__OC5Interrupt)       ? ABSOLUTE(__OC5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC6Interrupt)    ? ABSOLUTE(__AltOC6Interrupt)    :
         (DEFINED(__OC6Interrupt)       ? ABSOLUTE(__OC6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt43)    ? ABSOLUTE(__AltInterrupt43)    :
         (DEFINED(__Interrupt43)       ? ABSOLUTE(__Interrupt43)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt44)    ? ABSOLUTE(__AltInterrupt44)    :
         (DEFINED(__Interrupt44)       ? ABSOLUTE(__Interrupt44)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPMPInterrupt)    ? ABSOLUTE(__AltPMPInterrupt)    :
         (DEFINED(__PMPInterrupt)       ? ABSOLUTE(__PMPInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA4Interrupt)    ? ABSOLUTE(__AltDMA4Interrupt)    :
         (DEFINED(__DMA4Interrupt)       ? ABSOLUTE(__DMA4Interrupt)       :
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
    LONG( DEFINED(__AltCRYPTOInterrupt)    ? ABSOLUTE(__AltCRYPTOInterrupt)    :
         (DEFINED(__CRYPTOInterrupt)       ? ABSOLUTE(__CRYPTOInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCRYPTOKeyInterrupt)    ? ABSOLUTE(__AltCRYPTOKeyInterrupt)    :
         (DEFINED(__CRYPTOKeyInterrupt)       ? ABSOLUTE(__CRYPTOKeyInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt57)    ? ABSOLUTE(__AltInterrupt57)    :
         (DEFINED(__Interrupt57)       ? ABSOLUTE(__Interrupt57)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1RXInterrupt)    ? ABSOLUTE(__AltSPI1RXInterrupt)    :
         (DEFINED(__SPI1RXInterrupt)       ? ABSOLUTE(__SPI1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2RXInterrupt)    ? ABSOLUTE(__AltSPI2RXInterrupt)    :
         (DEFINED(__SPI2RXInterrupt)       ? ABSOLUTE(__SPI2RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI3RXInterrupt)    ? ABSOLUTE(__AltSPI3RXInterrupt)    :
         (DEFINED(__SPI3RXInterrupt)       ? ABSOLUTE(__SPI3RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA5Interrupt)    ? ABSOLUTE(__AltDMA5Interrupt)    :
         (DEFINED(__DMA5Interrupt)       ? ABSOLUTE(__DMA5Interrupt)       :
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
    LONG( DEFINED(__AltU2ErrInterrupt)    ? ABSOLUTE(__AltU2ErrInterrupt)    :
         (DEFINED(__U2ErrInterrupt)       ? ABSOLUTE(__U2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCRCInterrupt)    ? ABSOLUTE(__AltCRCInterrupt)    :
         (DEFINED(__CRCInterrupt)       ? ABSOLUTE(__CRCInterrupt)       :
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
    LONG( DEFINED(__AltLVDInterrupt)    ? ABSOLUTE(__AltLVDInterrupt)    :
         (DEFINED(__LVDInterrupt)       ? ABSOLUTE(__LVDInterrupt)       :
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
    LONG( DEFINED(__AltU3ErrInterrupt)    ? ABSOLUTE(__AltU3ErrInterrupt)    :
         (DEFINED(__U3ErrInterrupt)       ? ABSOLUTE(__U3ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU3RXInterrupt)    ? ABSOLUTE(__AltU3RXInterrupt)    :
         (DEFINED(__U3RXInterrupt)       ? ABSOLUTE(__U3RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU3TXInterrupt)    ? ABSOLUTE(__AltU3TXInterrupt)    :
         (DEFINED(__U3TXInterrupt)       ? ABSOLUTE(__U3TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltI2C1BCLInterrupt)    ? ABSOLUTE(__AltI2C1BCLInterrupt)    :
         (DEFINED(__I2C1BCLInterrupt)       ? ABSOLUTE(__I2C1BCLInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltI2C2BCLInterrupt)    ? ABSOLUTE(__AltI2C2BCLInterrupt)    :
         (DEFINED(__I2C2BCLInterrupt)       ? ABSOLUTE(__I2C2BCLInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltUSB1Interrupt)    ? ABSOLUTE(__AltUSB1Interrupt)    :
         (DEFINED(__USB1Interrupt)       ? ABSOLUTE(__USB1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU4ErrInterrupt)    ? ABSOLUTE(__AltU4ErrInterrupt)    :
         (DEFINED(__U4ErrInterrupt)       ? ABSOLUTE(__U4ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU4RXInterrupt)    ? ABSOLUTE(__AltU4RXInterrupt)    :
         (DEFINED(__U4RXInterrupt)       ? ABSOLUTE(__U4RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU4TXInterrupt)    ? ABSOLUTE(__AltU4TXInterrupt)    :
         (DEFINED(__U4TXInterrupt)       ? ABSOLUTE(__U4TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI3Interrupt)    ? ABSOLUTE(__AltSPI3Interrupt)    :
         (DEFINED(__SPI3Interrupt)       ? ABSOLUTE(__SPI3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI3TXInterrupt)    ? ABSOLUTE(__AltSPI3TXInterrupt)    :
         (DEFINED(__SPI3TXInterrupt)       ? ABSOLUTE(__SPI3TXInterrupt)       :
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
    LONG( DEFINED(__AltFSTInterrupt)    ? ABSOLUTE(__AltFSTInterrupt)    :
         (DEFINED(__FSTInterrupt)       ? ABSOLUTE(__FSTInterrupt)       :
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
    LONG( DEFINED(__AltJTAGInterrupt)    ? ABSOLUTE(__AltJTAGInterrupt)    :
         (DEFINED(__JTAGInterrupt)       ? ABSOLUTE(__JTAGInterrupt)       :
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
 PCL          = 0x2E;
_PCL          = 0x2E;
 PCH          = 0x30;
_PCH          = 0x30;
 DSRPAG       = 0x32;
_DSRPAG       = 0x32;
_DSRPAGbits   = 0x32;
 DSWPAG       = 0x34;
_DSWPAG       = 0x34;
_DSWPAGbits   = 0x34;
 RCOUNT       = 0x36;
_RCOUNT       = 0x36;
 SR           = 0x42;
_SR           = 0x42;
_SRbits       = 0x42;
 CORCON       = 0x44;
_CORCON       = 0x44;
_CORCONbits   = 0x44;
 DISICNT      = 0x52;
_DISICNT      = 0x52;
_DISICNTbits  = 0x52;
 TBLPAG       = 0x54;
_TBLPAG       = 0x54;
_TBLPAGbits   = 0x54;
 CNPD1        = 0x56;
_CNPD1        = 0x56;
_CNPD1bits    = 0x56;
 CNPD2        = 0x58;
_CNPD2        = 0x58;
_CNPD2bits    = 0x58;
 CNPD3        = 0x5A;
_CNPD3        = 0x5A;
 CNEN1        = 0x62;
_CNEN1        = 0x62;
_CNEN1bits    = 0x62;
 CNEN2        = 0x64;
_CNEN2        = 0x64;
_CNEN2bits    = 0x64;
 CNEN3        = 0x66;
_CNEN3        = 0x66;
 CNPU1        = 0x6E;
_CNPU1        = 0x6E;
_CNPU1bits    = 0x6E;
 CNPU2        = 0x70;
_CNPU2        = 0x70;
_CNPU2bits    = 0x70;
 CNPU3        = 0x72;
_CNPU3        = 0x72;
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
 IPC10        = 0xB8;
_IPC10        = 0xB8;
_IPC10bits    = 0xB8;
 IPC11        = 0xBA;
_IPC11        = 0xBA;
_IPC11bits    = 0xBA;
 IPC12        = 0xBC;
_IPC12        = 0xBC;
_IPC12bits    = 0xBC;
 IPC13        = 0xBE;
_IPC13        = 0xBE;
_IPC13bits    = 0xBE;
 IPC14        = 0xC0;
_IPC14        = 0xC0;
_IPC14bits    = 0xC0;
 IPC15        = 0xC2;
_IPC15        = 0xC2;
_IPC15bits    = 0xC2;
 IPC16        = 0xC4;
_IPC16        = 0xC4;
_IPC16bits    = 0xC4;
 IPC18        = 0xC8;
_IPC18        = 0xC8;
_IPC18bits    = 0xC8;
 IPC19        = 0xCA;
_IPC19        = 0xCA;
_IPC19bits    = 0xCA;
 IPC20        = 0xCC;
_IPC20        = 0xCC;
_IPC20bits    = 0xCC;
 IPC21        = 0xCE;
_IPC21        = 0xCE;
_IPC21bits    = 0xCE;
 IPC22        = 0xD0;
_IPC22        = 0xD0;
_IPC22bits    = 0xD0;
 IPC23        = 0xD2;
_IPC23        = 0xD2;
 IPC25        = 0xD6;
_IPC25        = 0xD6;
 IPC26        = 0xD8;
_IPC26        = 0xD8;
_IPC26bits    = 0xD8;
 IPC29        = 0xDE;
_IPC29        = 0xDE;
_IPC29bits    = 0xDE;
 INTTREG      = 0xE0;
_INTTREG      = 0xE0;
_INTTREGbits  = 0xE0;
 OSCCON       = 0x100;
_OSCCON       = 0x100;
_OSCCONbits   = 0x100;
 OSCCONL      = 0x100;
_OSCCONL      = 0x100;
 OSCCONH      = 0x101;
_OSCCONH      = 0x101;
 CLKDIV       = 0x102;
_CLKDIV       = 0x102;
_CLKDIVbits   = 0x102;
 OSCTUN       = 0x106;
_OSCTUN       = 0x106;
_OSCTUNbits   = 0x106;
 RCON         = 0x108;
_RCON         = 0x108;
_RCONbits     = 0x108;
 RCON2        = 0x10A;
_RCON2        = 0x10A;
_RCON2bits    = 0x10A;
 HLVDCON      = 0x10C;
_HLVDCON      = 0x10C;
_HLVDCONbits  = 0x10C;
 DSCON        = 0x10E;
_DSCON        = 0x10E;
_DSCONbits    = 0x10E;
 DSWAKE       = 0x110;
_DSWAKE       = 0x110;
_DSWAKEbits   = 0x110;
 DSGPR0       = 0x112;
_DSGPR0       = 0x112;
 DSGPR1       = 0x114;
_DSGPR1       = 0x114;
 ALRMVAL      = 0x11E;
_ALRMVAL      = 0x11E;
 ALCFGRPT     = 0x120;
_ALCFGRPT     = 0x120;
_ALCFGRPTbits = 0x120;
 RTCVAL       = 0x122;
_RTCVAL       = 0x122;
 RCFGCAL      = 0x124;
_RCFGCAL      = 0x124;
_RCFGCALbits  = 0x124;
 RTCPWC       = 0x126;
_RTCPWC       = 0x126;
_RTCPWCbits   = 0x126;
 CRCCON1      = 0x158;
_CRCCON1      = 0x158;
_CRCCON1bits  = 0x158;
 CRCCON2      = 0x15A;
_CRCCON2      = 0x15A;
_CRCCON2bits  = 0x15A;
 CRCXORL      = 0x15C;
_CRCXORL      = 0x15C;
_CRCXORLbits  = 0x15C;
 CRCXORH      = 0x15E;
_CRCXORH      = 0x15E;
_CRCXORHbits  = 0x15E;
 CRCDAT       = 0x160;
_CRCDAT       = 0x160;
 CRCDATL      = 0x160;
_CRCDATL      = 0x160;
 CRCDATH      = 0x162;
_CRCDATH      = 0x162;
 CRCWDAT      = 0x164;
_CRCWDAT      = 0x164;
 CRCWDATL     = 0x164;
_CRCWDATL     = 0x164;
 CRCWDATH     = 0x166;
_CRCWDATH     = 0x166;
 REFOCON1     = 0x168;
_REFOCON1     = 0x168;
_REFOCON1bits = 0x168;
 REFOCONL     = 0x168;
_REFOCONL     = 0x168;
_REFOCONLbits = 0x168;
 REFOCON2     = 0x16A;
_REFOCON2     = 0x16A;
_REFOCON2bits = 0x16A;
 REFOCONH     = 0x16A;
_REFOCONH     = 0x16A;
_REFOCONHbits = 0x16A;
 REFOTRIMH    = 0x16E;
_REFOTRIMH    = 0x16E;
_REFOTRIMHbits = 0x16E;
 PMD1         = 0x170;
_PMD1         = 0x170;
_PMD1bits     = 0x170;
 PMD2         = 0x172;
_PMD2         = 0x172;
_PMD2bits     = 0x172;
 PMD3         = 0x174;
_PMD3         = 0x174;
_PMD3bits     = 0x174;
 PMD4         = 0x176;
_PMD4         = 0x176;
_PMD4bits     = 0x176;
 PMD5         = 0x178;
_PMD5         = 0x178;
 PMD6         = 0x17A;
_PMD6         = 0x17A;
_PMD6bits     = 0x17A;
 PMD7         = 0x17C;
_PMD7         = 0x17C;
_PMD7bits     = 0x17C;
 PMD8         = 0x17E;
_PMD8         = 0x17E;
_PMD8bits     = 0x17E;
 TRISA        = 0x180;
_TRISA        = 0x180;
_TRISAbits    = 0x180;
 PORTA        = 0x182;
_PORTA        = 0x182;
_PORTAbits    = 0x182;
 LATA         = 0x184;
_LATA         = 0x184;
_LATAbits     = 0x184;
 ODCA         = 0x186;
_ODCA         = 0x186;
_ODCAbits     = 0x186;
 ANSA         = 0x188;
_ANSA         = 0x188;
_ANSAbits     = 0x188;
 ANSELA       = 0x188;
_ANSELA       = 0x188;
_ANSELAbits   = 0x188;
 TRISB        = 0x18A;
_TRISB        = 0x18A;
_TRISBbits    = 0x18A;
 PORTB        = 0x18C;
_PORTB        = 0x18C;
_PORTBbits    = 0x18C;
 LATB         = 0x18E;
_LATB         = 0x18E;
_LATBbits     = 0x18E;
 ODCB         = 0x190;
_ODCB         = 0x190;
_ODCBbits     = 0x190;
 ANSB         = 0x192;
_ANSB         = 0x192;
_ANSBbits     = 0x192;
 ANSELB       = 0x192;
_ANSELB       = 0x192;
_ANSELBbits   = 0x192;
 ANCFG        = 0x19E;
_ANCFG        = 0x19E;
_ANCFGbits    = 0x19E;
 CRYCON1      = 0x1A4;
_CRYCON1      = 0x1A4;
_CRYCON1bits  = 0x1A4;
 CRYCONL      = 0x1A4;
_CRYCONL      = 0x1A4;
_CRYCONLbits  = 0x1A4;
 CRYCON2      = 0x1A6;
_CRYCON2      = 0x1A6;
_CRYCON2bits  = 0x1A6;
 CRYCONH      = 0x1A6;
_CRYCONH      = 0x1A6;
_CRYCONHbits  = 0x1A6;
 CRYSTAT      = 0x1A8;
_CRYSTAT      = 0x1A8;
_CRYSTATbits  = 0x1A8;
 CRYOTP       = 0x1AC;
_CRYOTP       = 0x1AC;
_CRYOTPbits   = 0x1AC;
 CRYTXTA      = 0x1B0;
_CRYTXTA      = 0x1B0;
 CRYTXTA0     = 0x1B0;
_CRYTXTA0     = 0x1B0;
 CRYTXTA1     = 0x1B2;
_CRYTXTA1     = 0x1B2;
 CRYTXTA2     = 0x1B4;
_CRYTXTA2     = 0x1B4;
 CRYTXTA3     = 0x1B6;
_CRYTXTA3     = 0x1B6;
 CRYTXTA4     = 0x1B8;
_CRYTXTA4     = 0x1B8;
 CRYTXTA5     = 0x1BA;
_CRYTXTA5     = 0x1BA;
 CRYTXTA6     = 0x1BC;
_CRYTXTA6     = 0x1BC;
 CRYTXTA7     = 0x1BE;
_CRYTXTA7     = 0x1BE;
 CRYKEY       = 0x1C0;
_CRYKEY       = 0x1C0;
 CRYKEY0      = 0x1C0;
_CRYKEY0      = 0x1C0;
 CRYKEY1      = 0x1C2;
_CRYKEY1      = 0x1C2;
 CRYKEY2      = 0x1C4;
_CRYKEY2      = 0x1C4;
 CRYKEY3      = 0x1C6;
_CRYKEY3      = 0x1C6;
 CRYKEY4      = 0x1C8;
_CRYKEY4      = 0x1C8;
 CRYKEY5      = 0x1CA;
_CRYKEY5      = 0x1CA;
 CRYKEY6      = 0x1CC;
_CRYKEY6      = 0x1CC;
 CRYKEY7      = 0x1CE;
_CRYKEY7      = 0x1CE;
 CRYKEY8      = 0x1D0;
_CRYKEY8      = 0x1D0;
 CRYKEY9      = 0x1D2;
_CRYKEY9      = 0x1D2;
 CRYKEY10     = 0x1D4;
_CRYKEY10     = 0x1D4;
 CRYKEY11     = 0x1D6;
_CRYKEY11     = 0x1D6;
 CRYKEY12     = 0x1D8;
_CRYKEY12     = 0x1D8;
 CRYKEY13     = 0x1DA;
_CRYKEY13     = 0x1DA;
 CRYKEY14     = 0x1DC;
_CRYKEY14     = 0x1DC;
 CRYKEY15     = 0x1DE;
_CRYKEY15     = 0x1DE;
 CRYTXTB      = 0x1E0;
_CRYTXTB      = 0x1E0;
 CRYTXTB0     = 0x1E0;
_CRYTXTB0     = 0x1E0;
 CRYTXTB1     = 0x1E2;
_CRYTXTB1     = 0x1E2;
 CRYTXTB2     = 0x1E4;
_CRYTXTB2     = 0x1E4;
 CRYTXTB3     = 0x1E6;
_CRYTXTB3     = 0x1E6;
 CRYTXTB4     = 0x1E8;
_CRYTXTB4     = 0x1E8;
 CRYTXTB5     = 0x1EA;
_CRYTXTB5     = 0x1EA;
 CRYTXTB6     = 0x1EC;
_CRYTXTB6     = 0x1EC;
 CRYTXTB7     = 0x1EE;
_CRYTXTB7     = 0x1EE;
 CRYTXTC      = 0x1F0;
_CRYTXTC      = 0x1F0;
 CRYTXTC0     = 0x1F0;
_CRYTXTC0     = 0x1F0;
 CRYTXTC1     = 0x1F2;
_CRYTXTC1     = 0x1F2;
 CRYTXTC2     = 0x1F4;
_CRYTXTC2     = 0x1F4;
 CRYTXTC3     = 0x1F6;
_CRYTXTC3     = 0x1F6;
 CRYTXTC4     = 0x1F8;
_CRYTXTC4     = 0x1F8;
 CRYTXTC5     = 0x1FA;
_CRYTXTC5     = 0x1FA;
 CRYTXTC6     = 0x1FC;
_CRYTXTC6     = 0x1FC;
 CRYTXTC7     = 0x1FE;
_CRYTXTC7     = 0x1FE;
 ADC1BUF0     = 0x200;
_ADC1BUF0     = 0x200;
 ADC1BUF1     = 0x202;
_ADC1BUF1     = 0x202;
 ADC1BUF2     = 0x204;
_ADC1BUF2     = 0x204;
 ADC1BUF3     = 0x206;
_ADC1BUF3     = 0x206;
 ADC1BUF4     = 0x208;
_ADC1BUF4     = 0x208;
 ADC1BUF5     = 0x20A;
_ADC1BUF5     = 0x20A;
 ADC1BUF6     = 0x20C;
_ADC1BUF6     = 0x20C;
 ADC1BUF7     = 0x20E;
_ADC1BUF7     = 0x20E;
 ADC1BUF8     = 0x210;
_ADC1BUF8     = 0x210;
 ADC1BUF9     = 0x212;
_ADC1BUF9     = 0x212;
 ADC1BUF10    = 0x214;
_ADC1BUF10    = 0x214;
 ADC1BUF11    = 0x216;
_ADC1BUF11    = 0x216;
 ADC1BUF12    = 0x218;
_ADC1BUF12    = 0x218;
 ADC1BUF13    = 0x21A;
_ADC1BUF13    = 0x21A;
 ADC1BUF14    = 0x21C;
_ADC1BUF14    = 0x21C;
 ADC1BUF15    = 0x21E;
_ADC1BUF15    = 0x21E;
 AD1CON1      = 0x220;
_AD1CON1      = 0x220;
_AD1CON1bits  = 0x220;
 AD1CON2      = 0x222;
_AD1CON2      = 0x222;
_AD1CON2bits  = 0x222;
 AD1CON3      = 0x224;
_AD1CON3      = 0x224;
_AD1CON3bits  = 0x224;
 AD1CHS       = 0x228;
_AD1CHS       = 0x228;
_AD1CHSbits   = 0x228;
 AD1CHS0      = 0x228;
_AD1CHS0      = 0x228;
_AD1CHS0bits  = 0x228;
 AD1CSSH      = 0x22A;
_AD1CSSH      = 0x22A;
_AD1CSSHbits  = 0x22A;
 AD1CSSL      = 0x22C;
_AD1CSSL      = 0x22C;
_AD1CSSLbits  = 0x22C;
 AD1CON4      = 0x22E;
_AD1CON4      = 0x22E;
_AD1CON4bits  = 0x22E;
 AD1CON5      = 0x230;
_AD1CON5      = 0x230;
_AD1CON5bits  = 0x230;
 AD1CHITL     = 0x234;
_AD1CHITL     = 0x234;
_AD1CHITLbits = 0x234;
 AD1CTMENL    = 0x238;
_AD1CTMENL    = 0x238;
_AD1CTMENLbits = 0x238;
 AD1DMBUF     = 0x23A;
_AD1DMBUF     = 0x23A;
 AD1RESDMA    = 0x23A;
_AD1RESDMA    = 0x23A;
 CTMUCON1     = 0x23C;
_CTMUCON1     = 0x23C;
_CTMUCON1bits = 0x23C;
 CTMUCON2     = 0x23E;
_CTMUCON2     = 0x23E;
_CTMUCON2bits = 0x23E;
 CTMUICON     = 0x240;
_CTMUICON     = 0x240;
_CTMUICONbits = 0x240;
 CMSTAT       = 0x242;
_CMSTAT       = 0x242;
_CMSTATbits   = 0x242;
 CVRCON       = 0x244;
_CVRCON       = 0x244;
_CVRCONbits   = 0x244;
 CM1CON       = 0x246;
_CM1CON       = 0x246;
_CM1CONbits   = 0x246;
 CM2CON       = 0x248;
_CM2CON       = 0x248;
_CM2CONbits   = 0x248;
 CM3CON       = 0x24A;
_CM3CON       = 0x24A;
_CM3CONbits   = 0x24A;
 TMR1         = 0x24C;
_TMR1         = 0x24C;
 PR1          = 0x24E;
_PR1          = 0x24E;
 T1CON        = 0x250;
_T1CON        = 0x250;
_T1CONbits    = 0x250;
 TMR2         = 0x252;
_TMR2         = 0x252;
 TMR3HLD      = 0x254;
_TMR3HLD      = 0x254;
 TMR3         = 0x256;
_TMR3         = 0x256;
 PR2          = 0x258;
_PR2          = 0x258;
 PR3          = 0x25A;
_PR3          = 0x25A;
 T2CON        = 0x25C;
_T2CON        = 0x25C;
_T2CONbits    = 0x25C;
 T3CON        = 0x25E;
_T3CON        = 0x25E;
_T3CONbits    = 0x25E;
 TMR4         = 0x260;
_TMR4         = 0x260;
 TMR5HLD      = 0x262;
_TMR5HLD      = 0x262;
 TMR5         = 0x264;
_TMR5         = 0x264;
 PR4          = 0x266;
_PR4          = 0x266;
 PR5          = 0x268;
_PR5          = 0x268;
 T4CON        = 0x26A;
_T4CON        = 0x26A;
_T4CONbits    = 0x26A;
 T5CON        = 0x26C;
_T5CON        = 0x26C;
_T5CONbits    = 0x26C;
 OC1CON1      = 0x26E;
_OC1CON1      = 0x26E;
_OC1CON1bits  = 0x26E;
 OC1CON2      = 0x270;
_OC1CON2      = 0x270;
_OC1CON2bits  = 0x270;
 OC1RS        = 0x272;
_OC1RS        = 0x272;
 OC1R         = 0x274;
_OC1R         = 0x274;
 OC1TMR       = 0x276;
_OC1TMR       = 0x276;
 OC2CON1      = 0x278;
_OC2CON1      = 0x278;
_OC2CON1bits  = 0x278;
 OC2CON2      = 0x27A;
_OC2CON2      = 0x27A;
_OC2CON2bits  = 0x27A;
 OC2RS        = 0x27C;
_OC2RS        = 0x27C;
 OC2R         = 0x27E;
_OC2R         = 0x27E;
 OC2TMR       = 0x280;
_OC2TMR       = 0x280;
 OC3CON1      = 0x282;
_OC3CON1      = 0x282;
_OC3CON1bits  = 0x282;
 OC3CON2      = 0x284;
_OC3CON2      = 0x284;
_OC3CON2bits  = 0x284;
 OC3RS        = 0x286;
_OC3RS        = 0x286;
 OC3R         = 0x288;
_OC3R         = 0x288;
 OC3TMR       = 0x28A;
_OC3TMR       = 0x28A;
 OC4CON1      = 0x28C;
_OC4CON1      = 0x28C;
_OC4CON1bits  = 0x28C;
 OC4CON2      = 0x28E;
_OC4CON2      = 0x28E;
_OC4CON2bits  = 0x28E;
 OC4RS        = 0x290;
_OC4RS        = 0x290;
 OC4R         = 0x292;
_OC4R         = 0x292;
 OC4TMR       = 0x294;
_OC4TMR       = 0x294;
 OC5CON1      = 0x296;
_OC5CON1      = 0x296;
_OC5CON1bits  = 0x296;
 OC5CON2      = 0x298;
_OC5CON2      = 0x298;
_OC5CON2bits  = 0x298;
 OC5RS        = 0x29A;
_OC5RS        = 0x29A;
 OC5R         = 0x29C;
_OC5R         = 0x29C;
 OC5TMR       = 0x29E;
_OC5TMR       = 0x29E;
 OC6CON1      = 0x2A0;
_OC6CON1      = 0x2A0;
_OC6CON1bits  = 0x2A0;
 OC6CON2      = 0x2A2;
_OC6CON2      = 0x2A2;
_OC6CON2bits  = 0x2A2;
 OC6RS        = 0x2A4;
_OC6RS        = 0x2A4;
 OC6R         = 0x2A6;
_OC6R         = 0x2A6;
 OC6TMR       = 0x2A8;
_OC6TMR       = 0x2A8;
 IC1CON1      = 0x2AA;
_IC1CON1      = 0x2AA;
_IC1CON1bits  = 0x2AA;
 IC1CON2      = 0x2AC;
_IC1CON2      = 0x2AC;
_IC1CON2bits  = 0x2AC;
 IC1BUF       = 0x2AE;
_IC1BUF       = 0x2AE;
 IC1TMR       = 0x2B0;
_IC1TMR       = 0x2B0;
 IC2CON1      = 0x2B2;
_IC2CON1      = 0x2B2;
_IC2CON1bits  = 0x2B2;
 IC2CON2      = 0x2B4;
_IC2CON2      = 0x2B4;
_IC2CON2bits  = 0x2B4;
 IC2BUF       = 0x2B6;
_IC2BUF       = 0x2B6;
 IC2TMR       = 0x2B8;
_IC2TMR       = 0x2B8;
 IC3CON1      = 0x2BA;
_IC3CON1      = 0x2BA;
_IC3CON1bits  = 0x2BA;
 IC3CON2      = 0x2BC;
_IC3CON2      = 0x2BC;
_IC3CON2bits  = 0x2BC;
 IC3BUF       = 0x2BE;
_IC3BUF       = 0x2BE;
 IC3TMR       = 0x2C0;
_IC3TMR       = 0x2C0;
 IC4CON1      = 0x2C2;
_IC4CON1      = 0x2C2;
_IC4CON1bits  = 0x2C2;
 IC4CON2      = 0x2C4;
_IC4CON2      = 0x2C4;
_IC4CON2bits  = 0x2C4;
 IC4BUF       = 0x2C6;
_IC4BUF       = 0x2C6;
 IC4TMR       = 0x2C8;
_IC4TMR       = 0x2C8;
 IC5CON1      = 0x2CA;
_IC5CON1      = 0x2CA;
_IC5CON1bits  = 0x2CA;
 IC5CON2      = 0x2CC;
_IC5CON2      = 0x2CC;
_IC5CON2bits  = 0x2CC;
 IC5BUF       = 0x2CE;
_IC5BUF       = 0x2CE;
 IC5TMR       = 0x2D0;
_IC5TMR       = 0x2D0;
 IC6CON1      = 0x2D2;
_IC6CON1      = 0x2D2;
_IC6CON1bits  = 0x2D2;
 IC6CON2      = 0x2D4;
_IC6CON2      = 0x2D4;
_IC6CON2bits  = 0x2D4;
 IC6BUF       = 0x2D6;
_IC6BUF       = 0x2D6;
 IC6TMR       = 0x2D8;
_IC6TMR       = 0x2D8;
 I2C1RCV      = 0x2DA;
_I2C1RCV      = 0x2DA;
_I2C1RCVbits  = 0x2DA;
 I2C1TRN      = 0x2DC;
_I2C1TRN      = 0x2DC;
_I2C1TRNbits  = 0x2DC;
 I2C1BRG      = 0x2DE;
_I2C1BRG      = 0x2DE;
 I2C1CON1     = 0x2E0;
_I2C1CON1     = 0x2E0;
_I2C1CON1bits = 0x2E0;
 I2C1CONL     = 0x2E0;
_I2C1CONL     = 0x2E0;
_I2C1CONLbits = 0x2E0;
 I2C1CON2     = 0x2E2;
_I2C1CON2     = 0x2E2;
_I2C1CON2bits = 0x2E2;
 I2C1CONH     = 0x2E2;
_I2C1CONH     = 0x2E2;
_I2C1CONHbits = 0x2E2;
 I2C1STAT     = 0x2E4;
_I2C1STAT     = 0x2E4;
_I2C1STATbits = 0x2E4;
 I2C1ADD      = 0x2E6;
_I2C1ADD      = 0x2E6;
_I2C1ADDbits  = 0x2E6;
 I2C1MSK      = 0x2E8;
_I2C1MSK      = 0x2E8;
_I2C1MSKbits  = 0x2E8;
 I2C2RCV      = 0x2EA;
_I2C2RCV      = 0x2EA;
_I2C2RCVbits  = 0x2EA;
 I2C2TRN      = 0x2EC;
_I2C2TRN      = 0x2EC;
_I2C2TRNbits  = 0x2EC;
 I2C2BRG      = 0x2EE;
_I2C2BRG      = 0x2EE;
 I2C2CON1     = 0x2F0;
_I2C2CON1     = 0x2F0;
_I2C2CON1bits = 0x2F0;
 I2C2CONL     = 0x2F0;
_I2C2CONL     = 0x2F0;
_I2C2CONLbits = 0x2F0;
 I2C2CON2     = 0x2F2;
_I2C2CON2     = 0x2F2;
_I2C2CON2bits = 0x2F2;
 I2C2CONH     = 0x2F2;
_I2C2CONH     = 0x2F2;
_I2C2CONHbits = 0x2F2;
 I2C2STAT     = 0x2F4;
_I2C2STAT     = 0x2F4;
_I2C2STATbits = 0x2F4;
 I2C2ADD      = 0x2F6;
_I2C2ADD      = 0x2F6;
_I2C2ADDbits  = 0x2F6;
 I2C2MSK      = 0x2F8;
_I2C2MSK      = 0x2F8;
_I2C2MSKbits  = 0x2F8;
 MDCON        = 0x2FA;
_MDCON        = 0x2FA;
_MDCONbits    = 0x2FA;
 MDSRC        = 0x2FC;
_MDSRC        = 0x2FC;
_MDSRCbits    = 0x2FC;
 MDCAR        = 0x2FE;
_MDCAR        = 0x2FE;
_MDCARbits    = 0x2FE;
 SPI1CON1     = 0x300;
_SPI1CON1     = 0x300;
_SPI1CON1bits = 0x300;
 SPI1CON1L    = 0x300;
_SPI1CON1L    = 0x300;
_SPI1CON1Lbits = 0x300;
 SPI1CON1H    = 0x302;
_SPI1CON1H    = 0x302;
_SPI1CON1Hbits = 0x302;
 SPI1CON2     = 0x302;
_SPI1CON2     = 0x302;
_SPI1CON2bits = 0x302;
 SPI1CON2L    = 0x304;
_SPI1CON2L    = 0x304;
_SPI1CON2Lbits = 0x304;
 SPI1CON3     = 0x304;
_SPI1CON3     = 0x304;
_SPI1CON3bits = 0x304;
 SPI1CON2H    = 0x306;
_SPI1CON2H    = 0x306;
 SPI1CON4     = 0x306;
_SPI1CON4     = 0x306;
 SPI1STATL    = 0x308;
_SPI1STATL    = 0x308;
_SPI1STATLbits = 0x308;
 SPI1STATH    = 0x30A;
_SPI1STATH    = 0x30A;
_SPI1STATHbits = 0x30A;
 SPI1BUFL     = 0x30C;
_SPI1BUFL     = 0x30C;
_SPI1BUFLbits = 0x30C;
 SPI1BUFH     = 0x30E;
_SPI1BUFH     = 0x30E;
_SPI1BUFHbits = 0x30E;
 SPI1BRGL     = 0x310;
_SPI1BRGL     = 0x310;
_SPI1BRGLbits = 0x310;
 SPI1BRGH     = 0x312;
_SPI1BRGH     = 0x312;
 SPI1IMSK1    = 0x314;
_SPI1IMSK1    = 0x314;
_SPI1IMSK1bits = 0x314;
 SPI1IMSKL    = 0x314;
_SPI1IMSKL    = 0x314;
_SPI1IMSKLbits = 0x314;
 SPI1IMSK2    = 0x316;
_SPI1IMSK2    = 0x316;
_SPI1IMSK2bits = 0x316;
 SPI1IMSKH    = 0x316;
_SPI1IMSKH    = 0x316;
_SPI1IMSKHbits = 0x316;
 SPI1URDTL    = 0x318;
_SPI1URDTL    = 0x318;
_SPI1URDTLbits = 0x318;
 SPI1URDTH    = 0x31A;
_SPI1URDTH    = 0x31A;
_SPI1URDTHbits = 0x31A;
 SPI2CON1     = 0x31C;
_SPI2CON1     = 0x31C;
_SPI2CON1bits = 0x31C;
 SPI2CON1L    = 0x31C;
_SPI2CON1L    = 0x31C;
_SPI2CON1Lbits = 0x31C;
 SPI2CON1H    = 0x31E;
_SPI2CON1H    = 0x31E;
_SPI2CON1Hbits = 0x31E;
 SPI2CON2     = 0x31E;
_SPI2CON2     = 0x31E;
_SPI2CON2bits = 0x31E;
 SPI2CON2L    = 0x320;
_SPI2CON2L    = 0x320;
_SPI2CON2Lbits = 0x320;
 SPI2CON3     = 0x320;
_SPI2CON3     = 0x320;
_SPI2CON3bits = 0x320;
 SPI2CON2H    = 0x322;
_SPI2CON2H    = 0x322;
 SPI2CON4     = 0x322;
_SPI2CON4     = 0x322;
 SPI2STATL    = 0x324;
_SPI2STATL    = 0x324;
_SPI2STATLbits = 0x324;
 SPI2STATH    = 0x326;
_SPI2STATH    = 0x326;
_SPI2STATHbits = 0x326;
 SPI2BUFL     = 0x328;
_SPI2BUFL     = 0x328;
_SPI2BUFLbits = 0x328;
 SPI2BUFH     = 0x32A;
_SPI2BUFH     = 0x32A;
_SPI2BUFHbits = 0x32A;
 SPI2BRGL     = 0x32C;
_SPI2BRGL     = 0x32C;
_SPI2BRGLbits = 0x32C;
 SPI2BRGH     = 0x32E;
_SPI2BRGH     = 0x32E;
 SPI2IMSK1    = 0x330;
_SPI2IMSK1    = 0x330;
_SPI2IMSK1bits = 0x330;
 SPI2IMSKL    = 0x330;
_SPI2IMSKL    = 0x330;
_SPI2IMSKLbits = 0x330;
 SPI2IMSK2    = 0x332;
_SPI2IMSK2    = 0x332;
_SPI2IMSK2bits = 0x332;
 SPI2IMSKH    = 0x332;
_SPI2IMSKH    = 0x332;
_SPI2IMSKHbits = 0x332;
 SPI2URDTL    = 0x334;
_SPI2URDTL    = 0x334;
_SPI2URDTLbits = 0x334;
 SPI2URDTH    = 0x336;
_SPI2URDTH    = 0x336;
_SPI2URDTHbits = 0x336;
 SPI3CON1     = 0x338;
_SPI3CON1     = 0x338;
_SPI3CON1bits = 0x338;
 SPI3CON1L    = 0x338;
_SPI3CON1L    = 0x338;
_SPI3CON1Lbits = 0x338;
 SPI3CON1H    = 0x33A;
_SPI3CON1H    = 0x33A;
_SPI3CON1Hbits = 0x33A;
 SPI3CON2     = 0x33A;
_SPI3CON2     = 0x33A;
_SPI3CON2bits = 0x33A;
 SPI3CON2L    = 0x33C;
_SPI3CON2L    = 0x33C;
_SPI3CON2Lbits = 0x33C;
 SPI3CON3     = 0x33C;
_SPI3CON3     = 0x33C;
_SPI3CON3bits = 0x33C;
 SPI3CON2H    = 0x33E;
_SPI3CON2H    = 0x33E;
 SPI3CON4     = 0x33E;
_SPI3CON4     = 0x33E;
 SPI3STATL    = 0x340;
_SPI3STATL    = 0x340;
_SPI3STATLbits = 0x340;
 SPI3STATH    = 0x342;
_SPI3STATH    = 0x342;
_SPI3STATHbits = 0x342;
 SPI3BUFL     = 0x344;
_SPI3BUFL     = 0x344;
_SPI3BUFLbits = 0x344;
 SPI3BUFH     = 0x346;
_SPI3BUFH     = 0x346;
_SPI3BUFHbits = 0x346;
 SPI3BRGL     = 0x348;
_SPI3BRGL     = 0x348;
_SPI3BRGLbits = 0x348;
 SPI3BRGH     = 0x34A;
_SPI3BRGH     = 0x34A;
 SPI3IMSK1    = 0x34C;
_SPI3IMSK1    = 0x34C;
_SPI3IMSK1bits = 0x34C;
 SPI3IMSKL    = 0x34C;
_SPI3IMSKL    = 0x34C;
_SPI3IMSKLbits = 0x34C;
 SPI3IMSK2    = 0x34E;
_SPI3IMSK2    = 0x34E;
_SPI3IMSK2bits = 0x34E;
 SPI3IMSKH    = 0x34E;
_SPI3IMSKH    = 0x34E;
_SPI3IMSKHbits = 0x34E;
 SPI3URDTL    = 0x350;
_SPI3URDTL    = 0x350;
_SPI3URDTLbits = 0x350;
 SPI3URDTH    = 0x352;
_SPI3URDTH    = 0x352;
_SPI3URDTHbits = 0x352;
 RPINR0       = 0x38C;
_RPINR0       = 0x38C;
_RPINR0bits   = 0x38C;
 RPINR1       = 0x38E;
_RPINR1       = 0x38E;
_RPINR1bits   = 0x38E;
 RPINR2       = 0x390;
_RPINR2       = 0x390;
_RPINR2bits   = 0x390;
 RPINR7       = 0x39A;
_RPINR7       = 0x39A;
_RPINR7bits   = 0x39A;
 RPINR8       = 0x39C;
_RPINR8       = 0x39C;
_RPINR8bits   = 0x39C;
 RPINR9       = 0x39E;
_RPINR9       = 0x39E;
_RPINR9bits   = 0x39E;
 RPINR11      = 0x3A2;
_RPINR11      = 0x3A2;
_RPINR11bits  = 0x3A2;
 RPINR17      = 0x3AE;
_RPINR17      = 0x3AE;
_RPINR17bits  = 0x3AE;
 RPINR18      = 0x3B0;
_RPINR18      = 0x3B0;
_RPINR18bits  = 0x3B0;
 RPINR19      = 0x3B2;
_RPINR19      = 0x3B2;
_RPINR19bits  = 0x3B2;
 RPINR20      = 0x3B4;
_RPINR20      = 0x3B4;
_RPINR20bits  = 0x3B4;
 RPINR21      = 0x3B6;
_RPINR21      = 0x3B6;
_RPINR21bits  = 0x3B6;
 RPINR22      = 0x3B8;
_RPINR22      = 0x3B8;
_RPINR22bits  = 0x3B8;
 RPINR23      = 0x3BA;
_RPINR23      = 0x3BA;
_RPINR23bits  = 0x3BA;
 RPINR27      = 0x3C2;
_RPINR27      = 0x3C2;
_RPINR27bits  = 0x3C2;
 RPINR28      = 0x3C4;
_RPINR28      = 0x3C4;
_RPINR28bits  = 0x3C4;
 RPINR29      = 0x3C6;
_RPINR29      = 0x3C6;
_RPINR29bits  = 0x3C6;
 RPINR30      = 0x3C8;
_RPINR30      = 0x3C8;
_RPINR30bits  = 0x3C8;
 RPINR31      = 0x3CA;
_RPINR31      = 0x3CA;
_RPINR31bits  = 0x3CA;
 RPOR0        = 0x3D6;
_RPOR0        = 0x3D6;
_RPOR0bits    = 0x3D6;
 RPOR1        = 0x3D8;
_RPOR1        = 0x3D8;
_RPOR1bits    = 0x3D8;
 RPOR2        = 0x3DA;
_RPOR2        = 0x3DA;
_RPOR2bits    = 0x3DA;
 RPOR3        = 0x3DC;
_RPOR3        = 0x3DC;
_RPOR3bits    = 0x3DC;
 RPOR4        = 0x3DE;
_RPOR4        = 0x3DE;
_RPOR4bits    = 0x3DE;
 RPOR5        = 0x3E0;
_RPOR5        = 0x3E0;
_RPOR5bits    = 0x3E0;
 RPOR6        = 0x3E2;
_RPOR6        = 0x3E2;
_RPOR6bits    = 0x3E2;
 RPOR7        = 0x3E4;
_RPOR7        = 0x3E4;
_RPOR7bits    = 0x3E4;
 U1OTGIR      = 0x400;
_U1OTGIR      = 0x400;
_U1OTGIRbits  = 0x400;
 U1OTGIE      = 0x402;
_U1OTGIE      = 0x402;
_U1OTGIEbits  = 0x402;
 U1OTGSTAT    = 0x404;
_U1OTGSTAT    = 0x404;
_U1OTGSTATbits = 0x404;
 U1OTGCON     = 0x406;
_U1OTGCON     = 0x406;
_U1OTGCONbits = 0x406;
 U1PWRC       = 0x408;
_U1PWRC       = 0x408;
_U1PWRCbits   = 0x408;
 U1IR         = 0x40A;
_U1IR         = 0x40A;
_U1IRbits     = 0x40A;
 U1IE         = 0x40C;
_U1IE         = 0x40C;
_U1IEbits     = 0x40C;
 U1EIR        = 0x40E;
_U1EIR        = 0x40E;
_U1EIRbits    = 0x40E;
 U1EIE        = 0x410;
_U1EIE        = 0x410;
_U1EIEbits    = 0x410;
 U1STAT       = 0x412;
_U1STAT       = 0x412;
_U1STATbits   = 0x412;
 U1CON        = 0x414;
_U1CON        = 0x414;
_U1CONbits    = 0x414;
 U1ADDR       = 0x416;
_U1ADDR       = 0x416;
_U1ADDRbits   = 0x416;
 U1BDTP1      = 0x418;
_U1BDTP1      = 0x418;
_U1BDTP1bits  = 0x418;
 U1FRML       = 0x41A;
_U1FRML       = 0x41A;
_U1FRMLbits   = 0x41A;
 U1FRMH       = 0x41C;
_U1FRMH       = 0x41C;
_U1FRMHbits   = 0x41C;
 U1TOK        = 0x41E;
_U1TOK        = 0x41E;
_U1TOKbits    = 0x41E;
 U1SOF        = 0x420;
_U1SOF        = 0x420;
_U1SOFbits    = 0x420;
 U1BDTP2      = 0x422;
_U1BDTP2      = 0x422;
_U1BDTP2bits  = 0x422;
 U1BDTP3      = 0x424;
_U1BDTP3      = 0x424;
_U1BDTP3bits  = 0x424;
 U1CNFG1      = 0x426;
_U1CNFG1      = 0x426;
_U1CNFG1bits  = 0x426;
 U1CNFG2      = 0x428;
_U1CNFG2      = 0x428;
_U1CNFG2bits  = 0x428;
 U1EP0        = 0x42A;
_U1EP0        = 0x42A;
_U1EP0bits    = 0x42A;
 U1EP1        = 0x42C;
_U1EP1        = 0x42C;
_U1EP1bits    = 0x42C;
 U1EP2        = 0x42E;
_U1EP2        = 0x42E;
_U1EP2bits    = 0x42E;
 U1EP3        = 0x430;
_U1EP3        = 0x430;
_U1EP3bits    = 0x430;
 U1EP4        = 0x432;
_U1EP4        = 0x432;
_U1EP4bits    = 0x432;
 U1EP5        = 0x434;
_U1EP5        = 0x434;
_U1EP5bits    = 0x434;
 U1EP6        = 0x436;
_U1EP6        = 0x436;
_U1EP6bits    = 0x436;
 U1EP7        = 0x438;
_U1EP7        = 0x438;
_U1EP7bits    = 0x438;
 U1EP8        = 0x43A;
_U1EP8        = 0x43A;
_U1EP8bits    = 0x43A;
 U1EP9        = 0x43C;
_U1EP9        = 0x43C;
_U1EP9bits    = 0x43C;
 U1EP10       = 0x43E;
_U1EP10       = 0x43E;
_U1EP10bits   = 0x43E;
 U1EP11       = 0x440;
_U1EP11       = 0x440;
_U1EP11bits   = 0x440;
 U1EP12       = 0x442;
_U1EP12       = 0x442;
_U1EP12bits   = 0x442;
 U1EP13       = 0x444;
_U1EP13       = 0x444;
_U1EP13bits   = 0x444;
 U1EP14       = 0x446;
_U1EP14       = 0x446;
_U1EP14bits   = 0x446;
 U1EP15       = 0x448;
_U1EP15       = 0x448;
_U1EP15bits   = 0x448;
 DMACON       = 0x450;
_DMACON       = 0x450;
_DMACONbits   = 0x450;
 DMABUF       = 0x452;
_DMABUF       = 0x452;
 DMAL         = 0x454;
_DMAL         = 0x454;
 DMAH         = 0x456;
_DMAH         = 0x456;
 DMACH0       = 0x458;
_DMACH0       = 0x458;
_DMACH0bits   = 0x458;
 DMAINT0      = 0x45A;
_DMAINT0      = 0x45A;
_DMAINT0bits  = 0x45A;
 DMASRC0      = 0x45C;
_DMASRC0      = 0x45C;
 DMADST0      = 0x45E;
_DMADST0      = 0x45E;
 DMACNT0      = 0x460;
_DMACNT0      = 0x460;
 DMACH1       = 0x462;
_DMACH1       = 0x462;
_DMACH1bits   = 0x462;
 DMAINT1      = 0x464;
_DMAINT1      = 0x464;
_DMAINT1bits  = 0x464;
 DMASRC1      = 0x466;
_DMASRC1      = 0x466;
 DMADST1      = 0x468;
_DMADST1      = 0x468;
 DMACNT1      = 0x46A;
_DMACNT1      = 0x46A;
 DMACH2       = 0x46C;
_DMACH2       = 0x46C;
_DMACH2bits   = 0x46C;
 DMAINT2      = 0x46E;
_DMAINT2      = 0x46E;
_DMAINT2bits  = 0x46E;
 DMASRC2      = 0x470;
_DMASRC2      = 0x470;
 DMADST2      = 0x472;
_DMADST2      = 0x472;
 DMACNT2      = 0x474;
_DMACNT2      = 0x474;
 DMACH3       = 0x476;
_DMACH3       = 0x476;
_DMACH3bits   = 0x476;
 DMAINT3      = 0x478;
_DMAINT3      = 0x478;
_DMAINT3bits  = 0x478;
 DMASRC3      = 0x47A;
_DMASRC3      = 0x47A;
 DMADST3      = 0x47C;
_DMADST3      = 0x47C;
 DMACNT3      = 0x47E;
_DMACNT3      = 0x47E;
 DMACH4       = 0x480;
_DMACH4       = 0x480;
_DMACH4bits   = 0x480;
 DMAINT4      = 0x482;
_DMAINT4      = 0x482;
_DMAINT4bits  = 0x482;
 DMASRC4      = 0x484;
_DMASRC4      = 0x484;
 DMADST4      = 0x486;
_DMADST4      = 0x486;
 DMACNT4      = 0x488;
_DMACNT4      = 0x488;
 DMACH5       = 0x48A;
_DMACH5       = 0x48A;
_DMACH5bits   = 0x48A;
 DMAINT5      = 0x48C;
_DMAINT5      = 0x48C;
_DMAINT5bits  = 0x48C;
 DMASRC5      = 0x48E;
_DMASRC5      = 0x48E;
 DMADST5      = 0x490;
_DMADST5      = 0x490;
 DMACNT5      = 0x492;
_DMACNT5      = 0x492;
 U1MODE       = 0x500;
_U1MODE       = 0x500;
_U1MODEbits   = 0x500;
 U1STA        = 0x502;
_U1STA        = 0x502;
_U1STAbits    = 0x502;
 U1TXREG      = 0x504;
_U1TXREG      = 0x504;
_U1TXREGbits  = 0x504;
 U1RXREG      = 0x506;
_U1RXREG      = 0x506;
 U1BRG        = 0x508;
_U1BRG        = 0x508;
 U1ADMD       = 0x50A;
_U1ADMD       = 0x50A;
_U1ADMDbits   = 0x50A;
 U1SCCON      = 0x50C;
_U1SCCON      = 0x50C;
_U1SCCONbits  = 0x50C;
 U1SCINT      = 0x50E;
_U1SCINT      = 0x50E;
_U1SCINTbits  = 0x50E;
 U1GTC        = 0x510;
_U1GTC        = 0x510;
_U1GTCbits    = 0x510;
 U1WTCL       = 0x512;
_U1WTCL       = 0x512;
_U1WTCLbits   = 0x512;
 U1WTCH       = 0x514;
_U1WTCH       = 0x514;
_U1WTCHbits   = 0x514;
 U2MODE       = 0x516;
_U2MODE       = 0x516;
_U2MODEbits   = 0x516;
 U2STA        = 0x518;
_U2STA        = 0x518;
_U2STAbits    = 0x518;
 U2TXREG      = 0x51A;
_U2TXREG      = 0x51A;
_U2TXREGbits  = 0x51A;
 U2RXREG      = 0x51C;
_U2RXREG      = 0x51C;
 U2BRG        = 0x51E;
_U2BRG        = 0x51E;
 U2ADMD       = 0x520;
_U2ADMD       = 0x520;
_U2ADMDbits   = 0x520;
 U2SCCON      = 0x522;
_U2SCCON      = 0x522;
_U2SCCONbits  = 0x522;
 U2SCINT      = 0x524;
_U2SCINT      = 0x524;
_U2SCINTbits  = 0x524;
 U2GTC        = 0x526;
_U2GTC        = 0x526;
_U2GTCbits    = 0x526;
 U2WTCL       = 0x528;
_U2WTCL       = 0x528;
_U2WTCLbits   = 0x528;
 U2WTCH       = 0x52A;
_U2WTCH       = 0x52A;
_U2WTCHbits   = 0x52A;
 U3MODE       = 0x52C;
_U3MODE       = 0x52C;
_U3MODEbits   = 0x52C;
 U3STA        = 0x52E;
_U3STA        = 0x52E;
_U3STAbits    = 0x52E;
 U3TXREG      = 0x530;
_U3TXREG      = 0x530;
_U3TXREGbits  = 0x530;
 U3RXREG      = 0x532;
_U3RXREG      = 0x532;
 U3BRG        = 0x534;
_U3BRG        = 0x534;
 U3ADMD       = 0x536;
_U3ADMD       = 0x536;
_U3ADMDbits   = 0x536;
 U4MODE       = 0x538;
_U4MODE       = 0x538;
_U4MODEbits   = 0x538;
 U4STA        = 0x53A;
_U4STA        = 0x53A;
_U4STAbits    = 0x53A;
 U4TXREG      = 0x53C;
_U4TXREG      = 0x53C;
_U4TXREGbits  = 0x53C;
 U4RXREG      = 0x53E;
_U4RXREG      = 0x53E;
 U4BRG        = 0x540;
_U4BRG        = 0x540;
 U4ADMD       = 0x542;
_U4ADMD       = 0x542;
_U4ADMDbits   = 0x542;
 NVMCON       = 0x760;
_NVMCON       = 0x760;
_NVMCONbits   = 0x760;
 NVMKEY       = 0x766;
_NVMKEY       = 0x766;
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 IC1          = 0x2AE;
_IC1          = 0x2AE;
 IC2          = 0x2B6;
_IC2          = 0x2B6;
 IC3          = 0x2BE;
_IC3          = 0x2BE;
 IC4          = 0x2C6;
_IC4          = 0x2C6;
 IC5          = 0x2CE;
_IC5          = 0x2CE;
 IC6          = 0x2D6;
_IC6          = 0x2D6;
 OC1          = 0x272;
_OC1          = 0x272;
 OC2          = 0x27C;
_OC2          = 0x27C;
 OC3          = 0x286;
_OC3          = 0x286;
 OC4          = 0x290;
_OC4          = 0x290;
 OC5          = 0x29A;
_OC5          = 0x29A;
 OC6          = 0x2A4;
_OC6          = 0x2A4;
 SPI1         = 0x30A;
_SPI1         = 0x30A;
 SPI2         = 0x326;
_SPI2         = 0x326;
 SPI3         = 0x342;
_SPI3         = 0x342;
 UART1        = 0x500;
_UART1        = 0x500;
 UART2        = 0x516;
_UART2        = 0x516;
 UART3        = 0x52C;
_UART3        = 0x52C;
 UART4        = 0x538;
_UART4        = 0x538;
