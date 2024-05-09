/*
 * Linker script for PIC24FJ256GB406
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


OUTPUT_ARCH("24FJ256GB406")
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
  data  (a!xr)   : ORIGIN = 0x800,         LENGTH = 0x4000

/*
 * Memory regions that are always present
 */

  FBOOT          : ORIGIN = 0x801800,      LENGTH = 0x2

/*
 * Single panel memory regions
 */

#ifndef __DUAL_PARTITION
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0xFC
  program (xr)   : ORIGIN = 0x100,         LENGTH = 0x2AE80
  FSEC           : ORIGIN = 0x2AF80,       LENGTH = 0x2
  FBSLIM         : ORIGIN = 0x2AF90,       LENGTH = 0x2
  FSIGN          : ORIGIN = 0x2AF94,       LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0x2AF98,       LENGTH = 0x2
  FOSC           : ORIGIN = 0x2AF9C,       LENGTH = 0x2
  FWDT           : ORIGIN = 0x2AFA0,       LENGTH = 0x2
  FPOR           : ORIGIN = 0x2AFA4,       LENGTH = 0x2
  FICD           : ORIGIN = 0x2AFA8,       LENGTH = 0x2
  FDS            : ORIGIN = 0x2AFAC,       LENGTH = 0x2
  FDEVOPT1       : ORIGIN = 0x2AFB0,       LENGTH = 0x2
  FBTSEQ         : ORIGIN = 0x2AFFC,       LENGTH = 0x2
#endif


/*
 * Dual panel memory regions
 */

#ifdef __DUAL_PARTITION
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0xFC
  program (xr)   : ORIGIN = 0x100,         LENGTH = 0x15680
  FSEC           : ORIGIN = 0x15780,       LENGTH = 0x2
  FBSLIM         : ORIGIN = 0x15790,       LENGTH = 0x2
  FSIGN          : ORIGIN = 0x15794,       LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0x15798,       LENGTH = 0x2
  FOSC           : ORIGIN = 0x1579C,       LENGTH = 0x2
  FWDT           : ORIGIN = 0x157A0,       LENGTH = 0x2
  FPOR           : ORIGIN = 0x157A4,       LENGTH = 0x2
  FICD           : ORIGIN = 0x157A8,       LENGTH = 0x2
  FDS            : ORIGIN = 0x157AC,       LENGTH = 0x2
  FDEVOPT1       : ORIGIN = 0x157B0,       LENGTH = 0x2
  FBTSEQ         : ORIGIN = 0x157FC,       LENGTH = 0x2
#endif

}


/*
 * Configuration words that are always present
 */

__FBOOT = 0x801800;

/*
 * Single panel configuration words
 */

#ifndef __DUAL_PARTITION
__FSEC = 0x2AF80;
__FBSLIM = 0x2AF90;
__FSIGN = 0x2AF94;
__FOSCSEL = 0x2AF98;
__FOSC = 0x2AF9C;
__FWDT = 0x2AFA0;
__FPOR = 0x2AFA4;
__FICD = 0x2AFA8;
__FDS = 0x2AFAC;
__FDEVOPT1 = 0x2AFB0;
__FBTSEQ = 0x2AFFC;
#endif


/*
 * Dual panel configuration words
 */

#ifdef __DUAL_PARTITION
__FLASH_PARTITION = __DUAL_PARTITION;
__FSEC = 0x15780;
__FBSLIM = 0x15790;
__FSIGN = 0x15794;
__FOSCSEL = 0x15798;
__FOSC = 0x1579C;
__FWDT = 0x157A0;
__FPOR = 0x157A4;
__FICD = 0x157A8;
__FDS = 0x157AC;
__FDEVOPT1 = 0x157B0;
__FBTSEQ = 0x157FC;
#endif



/*
 * Single panel memory regions
 */

#ifndef __DUAL_PARTITION
__CODE_BASE = 0x100;
__CODE_LENGTH = 0x2AE80;
__IVT_BASE  = 0x4;
#endif


/*
 * Dual panel memory regions
 */

#ifdef __DUAL_PARTITION
__CODE_BASE = 0x100;
__CODE_LENGTH = 0x15680;
__IVT_BASE  = 0x4;
#endif

__DATA_BASE = 0x800;
__DATA_LENGTH = 0x4000;


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

/*
 * Configuration words that are always present
 */

  __FBOOT :
  { KEEP (*(__FBOOT.sec*))    } >FBOOT



/*
 * Single panel configuration words
 */

#ifndef __DUAL_PARTITION
  __FSEC :
  { KEEP (*(__FSEC.sec*))    } >FSEC
  __FBSLIM :
  { KEEP (*(__FBSLIM.sec*))    } >FBSLIM
  __FSIGN :
  { KEEP (*(__FSIGN.sec*))    } >FSIGN
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
  __FDS :
  { KEEP (*(__FDS.sec*))    } >FDS
  __FDEVOPT1 :
  { KEEP (*(__FDEVOPT1.sec*))    } >FDEVOPT1
  __FBTSEQ :
  { KEEP (*(__FBTSEQ.sec*))    } >FBTSEQ
#endif




/*
 * Dual panel configuration words
 */

#ifdef __DUAL_PARTITION
  __FSEC :
  { KEEP (*(__FSEC.sec*))    } >FSEC
  __FBSLIM :
  { KEEP (*(__FBSLIM.sec*))    } >FBSLIM
  __FSIGN :
  { KEEP (*(__FSIGN.sec*))    } >FSIGN
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
  __FDS :
  { KEEP (*(__FDS.sec*))    } >FDS
  __FDEVOPT1 :
  { KEEP (*(__FDEVOPT1.sec*))    } >FDEVOPT1
  __FBTSEQ :
  { KEEP (*(__FBTSEQ.sec*))    } >FBTSEQ
#endif



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
    LONG( DEFINED(__OscillatorFail)    ? ABSOLUTE(__OscillatorFail)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__AddressError)    ? ABSOLUTE(__AddressError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__GeneralHardError)    ? ABSOLUTE(__GeneralHardError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__StackError)    ? ABSOLUTE(__StackError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MathError)    ? ABSOLUTE(__MathError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ReservedTrap5)    ? ABSOLUTE(__ReservedTrap5)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__GeneralSoftError)    ? ABSOLUTE(__GeneralSoftError)    :
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
    LONG( DEFINED(__NVMInterrupt)    ? ABSOLUTE(__NVMInterrupt)    :
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
    LONG( DEFINED(__CCP5Interrupt)    ? ABSOLUTE(__CCP5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCP6Interrupt)    ? ABSOLUTE(__CCP6Interrupt)    :
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
    LONG( DEFINED(__CRYPTOBufferReadyInterrupt)    ? ABSOLUTE(__CRYPTOBufferReadyInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CRYPTORolloverInterrupt)    ? ABSOLUTE(__CRYPTORolloverInterrupt)    :
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
    LONG( DEFINED(__CCT3Interrupt)    ? ABSOLUTE(__CCT3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT4Interrupt)    ? ABSOLUTE(__CCT4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PMPInterrupt)    ? ABSOLUTE(__PMPInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA4Interrupt)    ? ABSOLUTE(__DMA4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT5Interrupt)    ? ABSOLUTE(__CCT5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT6Interrupt)    ? ABSOLUTE(__CCT6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C2Interrupt)    ? ABSOLUTE(__SI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C2Interrupt)    ? ABSOLUTE(__MI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT7Interrupt)    ? ABSOLUTE(__CCT7Interrupt)    :
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
    LONG( DEFINED(__SPI4RXInterrupt)    ? ABSOLUTE(__SPI4RXInterrupt)    :
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
    LONG( DEFINED(__CCP1Interrupt)    ? ABSOLUTE(__CCP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCP2Interrupt)    ? ABSOLUTE(__CCP2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1ErrInterrupt)    ? ABSOLUTE(__U1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2ErrInterrupt)    ? ABSOLUTE(__U2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CRCInterrupt)    ? ABSOLUTE(__CRCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA6Interrupt)    ? ABSOLUTE(__DMA6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA7Interrupt)    ? ABSOLUTE(__DMA7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C3Interrupt)    ? ABSOLUTE(__SI2C3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C3Interrupt)    ? ABSOLUTE(__MI2C3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__LVDInterrupt)    ? ABSOLUTE(__LVDInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCP7Interrupt)    ? ABSOLUTE(__CCP7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt74)    ? ABSOLUTE(__Interrupt74)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt75)    ? ABSOLUTE(__Interrupt75)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt76)    ? ABSOLUTE(__Interrupt76)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CTMUInterrupt)    ? ABSOLUTE(__CTMUInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DAC1Interrupt)    ? ABSOLUTE(__DAC1Interrupt)    :
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
    LONG( DEFINED(__SPI4Interrupt)    ? ABSOLUTE(__SPI4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI4TXInterrupt)    ? ABSOLUTE(__SPI4TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCP3Interrupt)    ? ABSOLUTE(__CCP3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCP4Interrupt)    ? ABSOLUTE(__CCP4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC1Interrupt)    ? ABSOLUTE(__CLC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC2Interrupt)    ? ABSOLUTE(__CLC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC3Interrupt)    ? ABSOLUTE(__CLC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC4Interrupt)    ? ABSOLUTE(__CLC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__LCDInterrupt)    ? ABSOLUTE(__LCDInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT1Interrupt)    ? ABSOLUTE(__CCT1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CCT2Interrupt)    ? ABSOLUTE(__CCT2Interrupt)    :
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
    LONG( DEFINED(__I2C3BCLInterrupt)    ? ABSOLUTE(__I2C3BCLInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__RTCCTSInterrupt)    ? ABSOLUTE(__RTCCTSInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U5RXInterrupt)    ? ABSOLUTE(__U5RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U5TXInterrupt)    ? ABSOLUTE(__U5TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U5ErrInterrupt)    ? ABSOLUTE(__U5ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U6RXInterrupt)    ? ABSOLUTE(__U6RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U6TXInterrupt)    ? ABSOLUTE(__U6TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U6ErrInterrupt)    ? ABSOLUTE(__U6ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__JTAGInterrupt)    ? ABSOLUTE(__JTAGInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
  } >ivt


/*
** Alternate Interrupt Vector Table
*/
.aivt :
  {
    LONG(0); /* RESERVED */
    LONG(0); /* RESERVED */
    LONG( DEFINED(__AltOscillatorFail)    ? ABSOLUTE(__AltOscillatorFail)    :
         (DEFINED(__OscillatorFail)       ? ABSOLUTE(__OscillatorFail)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltAddressError)    ? ABSOLUTE(__AltAddressError)    :
         (DEFINED(__AddressError)       ? ABSOLUTE(__AddressError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltGeneralHardError)    ? ABSOLUTE(__AltGeneralHardError)    :
         (DEFINED(__GeneralHardError)       ? ABSOLUTE(__GeneralHardError)       :
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
    LONG( DEFINED(__AltGeneralSoftError)    ? ABSOLUTE(__AltGeneralSoftError)    :
         (DEFINED(__GeneralSoftError)       ? ABSOLUTE(__GeneralSoftError)       :
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
    LONG( DEFINED(__AltNVMInterrupt)    ? ABSOLUTE(__AltNVMInterrupt)    :
         (DEFINED(__NVMInterrupt)       ? ABSOLUTE(__NVMInterrupt)       :
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
    LONG( DEFINED(__AltCCP5Interrupt)    ? ABSOLUTE(__AltCCP5Interrupt)    :
         (DEFINED(__CCP5Interrupt)       ? ABSOLUTE(__CCP5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCP6Interrupt)    ? ABSOLUTE(__AltCCP6Interrupt)    :
         (DEFINED(__CCP6Interrupt)       ? ABSOLUTE(__CCP6Interrupt)       :
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
    LONG( DEFINED(__AltCRYPTOBufferReadyInterrupt)    ? ABSOLUTE(__AltCRYPTOBufferReadyInterrupt)    :
         (DEFINED(__CRYPTOBufferReadyInterrupt)       ? ABSOLUTE(__CRYPTOBufferReadyInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCRYPTORolloverInterrupt)    ? ABSOLUTE(__AltCRYPTORolloverInterrupt)    :
         (DEFINED(__CRYPTORolloverInterrupt)       ? ABSOLUTE(__CRYPTORolloverInterrupt)       :
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
    LONG( DEFINED(__AltCCT3Interrupt)    ? ABSOLUTE(__AltCCT3Interrupt)    :
         (DEFINED(__CCT3Interrupt)       ? ABSOLUTE(__CCT3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT4Interrupt)    ? ABSOLUTE(__AltCCT4Interrupt)    :
         (DEFINED(__CCT4Interrupt)       ? ABSOLUTE(__CCT4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPMPInterrupt)    ? ABSOLUTE(__AltPMPInterrupt)    :
         (DEFINED(__PMPInterrupt)       ? ABSOLUTE(__PMPInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA4Interrupt)    ? ABSOLUTE(__AltDMA4Interrupt)    :
         (DEFINED(__DMA4Interrupt)       ? ABSOLUTE(__DMA4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT5Interrupt)    ? ABSOLUTE(__AltCCT5Interrupt)    :
         (DEFINED(__CCT5Interrupt)       ? ABSOLUTE(__CCT5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT6Interrupt)    ? ABSOLUTE(__AltCCT6Interrupt)    :
         (DEFINED(__CCT6Interrupt)       ? ABSOLUTE(__CCT6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C2Interrupt)    ? ABSOLUTE(__AltSI2C2Interrupt)    :
         (DEFINED(__SI2C2Interrupt)       ? ABSOLUTE(__SI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C2Interrupt)    ? ABSOLUTE(__AltMI2C2Interrupt)    :
         (DEFINED(__MI2C2Interrupt)       ? ABSOLUTE(__MI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT7Interrupt)    ? ABSOLUTE(__AltCCT7Interrupt)    :
         (DEFINED(__CCT7Interrupt)       ? ABSOLUTE(__CCT7Interrupt)       :
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
    LONG( DEFINED(__AltSPI4RXInterrupt)    ? ABSOLUTE(__AltSPI4RXInterrupt)    :
         (DEFINED(__SPI4RXInterrupt)       ? ABSOLUTE(__SPI4RXInterrupt)       :
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
    LONG( DEFINED(__AltCCP1Interrupt)    ? ABSOLUTE(__AltCCP1Interrupt)    :
         (DEFINED(__CCP1Interrupt)       ? ABSOLUTE(__CCP1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCP2Interrupt)    ? ABSOLUTE(__AltCCP2Interrupt)    :
         (DEFINED(__CCP2Interrupt)       ? ABSOLUTE(__CCP2Interrupt)       :
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
    LONG( DEFINED(__AltDMA6Interrupt)    ? ABSOLUTE(__AltDMA6Interrupt)    :
         (DEFINED(__DMA6Interrupt)       ? ABSOLUTE(__DMA6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA7Interrupt)    ? ABSOLUTE(__AltDMA7Interrupt)    :
         (DEFINED(__DMA7Interrupt)       ? ABSOLUTE(__DMA7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C3Interrupt)    ? ABSOLUTE(__AltSI2C3Interrupt)    :
         (DEFINED(__SI2C3Interrupt)       ? ABSOLUTE(__SI2C3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C3Interrupt)    ? ABSOLUTE(__AltMI2C3Interrupt)    :
         (DEFINED(__MI2C3Interrupt)       ? ABSOLUTE(__MI2C3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltLVDInterrupt)    ? ABSOLUTE(__AltLVDInterrupt)    :
         (DEFINED(__LVDInterrupt)       ? ABSOLUTE(__LVDInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCP7Interrupt)    ? ABSOLUTE(__AltCCP7Interrupt)    :
         (DEFINED(__CCP7Interrupt)       ? ABSOLUTE(__CCP7Interrupt)       :
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
    LONG( DEFINED(__AltDAC1Interrupt)    ? ABSOLUTE(__AltDAC1Interrupt)    :
         (DEFINED(__DAC1Interrupt)       ? ABSOLUTE(__DAC1Interrupt)       :
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
    LONG( DEFINED(__AltSPI4Interrupt)    ? ABSOLUTE(__AltSPI4Interrupt)    :
         (DEFINED(__SPI4Interrupt)       ? ABSOLUTE(__SPI4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI4TXInterrupt)    ? ABSOLUTE(__AltSPI4TXInterrupt)    :
         (DEFINED(__SPI4TXInterrupt)       ? ABSOLUTE(__SPI4TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCP3Interrupt)    ? ABSOLUTE(__AltCCP3Interrupt)    :
         (DEFINED(__CCP3Interrupt)       ? ABSOLUTE(__CCP3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCP4Interrupt)    ? ABSOLUTE(__AltCCP4Interrupt)    :
         (DEFINED(__CCP4Interrupt)       ? ABSOLUTE(__CCP4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCLC1Interrupt)    ? ABSOLUTE(__AltCLC1Interrupt)    :
         (DEFINED(__CLC1Interrupt)       ? ABSOLUTE(__CLC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCLC2Interrupt)    ? ABSOLUTE(__AltCLC2Interrupt)    :
         (DEFINED(__CLC2Interrupt)       ? ABSOLUTE(__CLC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCLC3Interrupt)    ? ABSOLUTE(__AltCLC3Interrupt)    :
         (DEFINED(__CLC3Interrupt)       ? ABSOLUTE(__CLC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCLC4Interrupt)    ? ABSOLUTE(__AltCLC4Interrupt)    :
         (DEFINED(__CLC4Interrupt)       ? ABSOLUTE(__CLC4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltLCDInterrupt)    ? ABSOLUTE(__AltLCDInterrupt)    :
         (DEFINED(__LCDInterrupt)       ? ABSOLUTE(__LCDInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT1Interrupt)    ? ABSOLUTE(__AltCCT1Interrupt)    :
         (DEFINED(__CCT1Interrupt)       ? ABSOLUTE(__CCT1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCCT2Interrupt)    ? ABSOLUTE(__AltCCT2Interrupt)    :
         (DEFINED(__CCT2Interrupt)       ? ABSOLUTE(__CCT2Interrupt)       :
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
    LONG( DEFINED(__AltI2C3BCLInterrupt)    ? ABSOLUTE(__AltI2C3BCLInterrupt)    :
         (DEFINED(__I2C3BCLInterrupt)       ? ABSOLUTE(__I2C3BCLInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltRTCCTSInterrupt)    ? ABSOLUTE(__AltRTCCTSInterrupt)    :
         (DEFINED(__RTCCTSInterrupt)       ? ABSOLUTE(__RTCCTSInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU5RXInterrupt)    ? ABSOLUTE(__AltU5RXInterrupt)    :
         (DEFINED(__U5RXInterrupt)       ? ABSOLUTE(__U5RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU5TXInterrupt)    ? ABSOLUTE(__AltU5TXInterrupt)    :
         (DEFINED(__U5TXInterrupt)       ? ABSOLUTE(__U5TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU5ErrInterrupt)    ? ABSOLUTE(__AltU5ErrInterrupt)    :
         (DEFINED(__U5ErrInterrupt)       ? ABSOLUTE(__U5ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU6RXInterrupt)    ? ABSOLUTE(__AltU6RXInterrupt)    :
         (DEFINED(__U6RXInterrupt)       ? ABSOLUTE(__U6RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU6TXInterrupt)    ? ABSOLUTE(__AltU6TXInterrupt)    :
         (DEFINED(__U6TXInterrupt)       ? ABSOLUTE(__U6TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU6ErrInterrupt)    ? ABSOLUTE(__AltU6ErrInterrupt)    :
         (DEFINED(__U6ErrInterrupt)       ? ABSOLUTE(__U6ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltJTAGInterrupt)    ? ABSOLUTE(__AltJTAGInterrupt)    :
         (DEFINED(__JTAGInterrupt)       ? ABSOLUTE(__JTAGInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
  } >program
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
 INTCON1      = 0x80;
_INTCON1      = 0x80;
_INTCON1bits  = 0x80;
 INTCON2      = 0x82;
_INTCON2      = 0x82;
_INTCON2bits  = 0x82;
 INTCON3      = 0x84;
_INTCON3      = 0x84;
 INTCON4      = 0x86;
_INTCON4      = 0x86;
_INTCON4bits  = 0x86;
 IFS0         = 0x88;
_IFS0         = 0x88;
_IFS0bits     = 0x88;
 IFS1         = 0x8A;
_IFS1         = 0x8A;
_IFS1bits     = 0x8A;
 IFS2         = 0x8C;
_IFS2         = 0x8C;
_IFS2bits     = 0x8C;
 IFS3         = 0x8E;
_IFS3         = 0x8E;
_IFS3bits     = 0x8E;
 IFS4         = 0x90;
_IFS4         = 0x90;
_IFS4bits     = 0x90;
 IFS5         = 0x92;
_IFS5         = 0x92;
_IFS5bits     = 0x92;
 IFS6         = 0x94;
_IFS6         = 0x94;
_IFS6bits     = 0x94;
 IFS7         = 0x96;
_IFS7         = 0x96;
_IFS7bits     = 0x96;
 IEC0         = 0x98;
_IEC0         = 0x98;
_IEC0bits     = 0x98;
 IEC1         = 0x9A;
_IEC1         = 0x9A;
_IEC1bits     = 0x9A;
 IEC2         = 0x9C;
_IEC2         = 0x9C;
_IEC2bits     = 0x9C;
 IEC3         = 0x9E;
_IEC3         = 0x9E;
_IEC3bits     = 0x9E;
 IEC4         = 0xA0;
_IEC4         = 0xA0;
_IEC4bits     = 0xA0;
 IEC5         = 0xA2;
_IEC5         = 0xA2;
_IEC5bits     = 0xA2;
 IEC6         = 0xA4;
_IEC6         = 0xA4;
_IEC6bits     = 0xA4;
 IEC7         = 0xA6;
_IEC7         = 0xA6;
_IEC7bits     = 0xA6;
 IPC0         = 0xA8;
_IPC0         = 0xA8;
_IPC0bits     = 0xA8;
 IPC1         = 0xAA;
_IPC1         = 0xAA;
_IPC1bits     = 0xAA;
 IPC2         = 0xAC;
_IPC2         = 0xAC;
_IPC2bits     = 0xAC;
 IPC3         = 0xAE;
_IPC3         = 0xAE;
_IPC3bits     = 0xAE;
 IPC4         = 0xB0;
_IPC4         = 0xB0;
_IPC4bits     = 0xB0;
 IPC5         = 0xB2;
_IPC5         = 0xB2;
_IPC5bits     = 0xB2;
 IPC6         = 0xB4;
_IPC6         = 0xB4;
_IPC6bits     = 0xB4;
 IPC7         = 0xB6;
_IPC7         = 0xB6;
_IPC7bits     = 0xB6;
 IPC8         = 0xB8;
_IPC8         = 0xB8;
_IPC8bits     = 0xB8;
 IPC9         = 0xBA;
_IPC9         = 0xBA;
_IPC9bits     = 0xBA;
 IPC10        = 0xBC;
_IPC10        = 0xBC;
_IPC10bits    = 0xBC;
 IPC11        = 0xBE;
_IPC11        = 0xBE;
_IPC11bits    = 0xBE;
 IPC12        = 0xC0;
_IPC12        = 0xC0;
_IPC12bits    = 0xC0;
 IPC13        = 0xC2;
_IPC13        = 0xC2;
_IPC13bits    = 0xC2;
 IPC14        = 0xC4;
_IPC14        = 0xC4;
_IPC14bits    = 0xC4;
 IPC15        = 0xC6;
_IPC15        = 0xC6;
_IPC15bits    = 0xC6;
 IPC16        = 0xC8;
_IPC16        = 0xC8;
_IPC16bits    = 0xC8;
 IPC17        = 0xCA;
_IPC17        = 0xCA;
_IPC17bits    = 0xCA;
 IPC18        = 0xCC;
_IPC18        = 0xCC;
_IPC18bits    = 0xCC;
 IPC19        = 0xCE;
_IPC19        = 0xCE;
_IPC19bits    = 0xCE;
 IPC20        = 0xD0;
_IPC20        = 0xD0;
_IPC20bits    = 0xD0;
 IPC21        = 0xD2;
_IPC21        = 0xD2;
_IPC21bits    = 0xD2;
 IPC22        = 0xD4;
_IPC22        = 0xD4;
_IPC22bits    = 0xD4;
 IPC23        = 0xD6;
_IPC23        = 0xD6;
_IPC23bits    = 0xD6;
 IPC24        = 0xD8;
_IPC24        = 0xD8;
_IPC24bits    = 0xD8;
 IPC25        = 0xDA;
_IPC25        = 0xDA;
_IPC25bits    = 0xDA;
 IPC26        = 0xDC;
_IPC26        = 0xDC;
_IPC26bits    = 0xDC;
 IPC27        = 0xDE;
_IPC27        = 0xDE;
_IPC27bits    = 0xDE;
 IPC28        = 0xE0;
_IPC28        = 0xE0;
_IPC28bits    = 0xE0;
 IPC29        = 0xE2;
_IPC29        = 0xE2;
_IPC29bits    = 0xE2;
 INTTREG      = 0xE4;
_INTTREG      = 0xE4;
_INTTREGbits  = 0xE4;
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
 CLKDIV2      = 0x104;
_CLKDIV2      = 0x104;
 OSCTUN       = 0x106;
_OSCTUN       = 0x106;
_OSCTUNbits   = 0x106;
 RCON         = 0x10C;
_RCON         = 0x10C;
_RCONbits     = 0x10C;
 RCON2        = 0x10E;
_RCON2        = 0x10E;
_RCON2bits    = 0x10E;
 HLVDCON      = 0x110;
_HLVDCON      = 0x110;
_HLVDCONbits  = 0x110;
 DSCON        = 0x112;
_DSCON        = 0x112;
_DSCONbits    = 0x112;
 DSWAKE       = 0x114;
_DSWAKE       = 0x114;
_DSWAKEbits   = 0x114;
 DSGPR0       = 0x116;
_DSGPR0       = 0x116;
 DSGPR1       = 0x118;
_DSGPR1       = 0x118;
 PMCON1       = 0x128;
_PMCON1       = 0x128;
_PMCON1bits   = 0x128;
 PMCON2       = 0x12A;
_PMCON2       = 0x12A;
_PMCON2bits   = 0x12A;
 PMCON3       = 0x12C;
_PMCON3       = 0x12C;
_PMCON3bits   = 0x12C;
 PMCON4       = 0x12E;
_PMCON4       = 0x12E;
_PMCON4bits   = 0x12E;
 PMCS1CF      = 0x130;
_PMCS1CF      = 0x130;
_PMCS1CFbits  = 0x130;
 PMCS1BS      = 0x132;
_PMCS1BS      = 0x132;
_PMCS1BSbits  = 0x132;
 PMCS1MD      = 0x134;
_PMCS1MD      = 0x134;
_PMCS1MDbits  = 0x134;
 PMCS2CF      = 0x136;
_PMCS2CF      = 0x136;
_PMCS2CFbits  = 0x136;
 PMCS2BS      = 0x138;
_PMCS2BS      = 0x138;
_PMCS2BSbits  = 0x138;
 PMCS2MD      = 0x13A;
_PMCS2MD      = 0x13A;
_PMCS2MDbits  = 0x13A;
 PMDOUT1      = 0x13C;
_PMDOUT1      = 0x13C;
 PMDOUT2      = 0x13E;
_PMDOUT2      = 0x13E;
 PMDIN1       = 0x140;
_PMDIN1       = 0x140;
 PMDIN2       = 0x142;
_PMDIN2       = 0x142;
 PMSTAT       = 0x144;
_PMSTAT       = 0x144;
_PMSTATbits   = 0x144;
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
 PMD1         = 0x178;
_PMD1         = 0x178;
_PMD1bits     = 0x178;
 PMD2         = 0x17A;
_PMD2         = 0x17A;
_PMD2bits     = 0x17A;
 PMD3         = 0x17C;
_PMD3         = 0x17C;
_PMD3bits     = 0x17C;
 PMD4         = 0x17E;
_PMD4         = 0x17E;
_PMD4bits     = 0x17E;
 PMD5         = 0x180;
_PMD5         = 0x180;
_PMD5bits     = 0x180;
 PMD6         = 0x182;
_PMD6         = 0x182;
_PMD6bits     = 0x182;
 PMD7         = 0x184;
_PMD7         = 0x184;
_PMD7bits     = 0x184;
 PMD8         = 0x186;
_PMD8         = 0x186;
_PMD8bits     = 0x186;
 TMR1         = 0x190;
_TMR1         = 0x190;
 PR1          = 0x192;
_PR1          = 0x192;
 T1CON        = 0x194;
_T1CON        = 0x194;
_T1CONbits    = 0x194;
 TMR2         = 0x196;
_TMR2         = 0x196;
 TMR3HLD      = 0x198;
_TMR3HLD      = 0x198;
 TMR3         = 0x19A;
_TMR3         = 0x19A;
 PR2          = 0x19C;
_PR2          = 0x19C;
 PR3          = 0x19E;
_PR3          = 0x19E;
 T2CON        = 0x1A0;
_T2CON        = 0x1A0;
_T2CONbits    = 0x1A0;
 T3CON        = 0x1A2;
_T3CON        = 0x1A2;
_T3CONbits    = 0x1A2;
 TMR4         = 0x1A4;
_TMR4         = 0x1A4;
 TMR5HLD      = 0x1A6;
_TMR5HLD      = 0x1A6;
 TMR5         = 0x1A8;
_TMR5         = 0x1A8;
 PR4          = 0x1AA;
_PR4          = 0x1AA;
 PR5          = 0x1AC;
_PR5          = 0x1AC;
 T4CON        = 0x1AE;
_T4CON        = 0x1AE;
_T4CONbits    = 0x1AE;
 T5CON        = 0x1B0;
_T5CON        = 0x1B0;
_T5CONbits    = 0x1B0;
 CTMUCON1L    = 0x1C0;
_CTMUCON1L    = 0x1C0;
_CTMUCON1Lbits = 0x1C0;
 CTMUCON1H    = 0x1C2;
_CTMUCON1H    = 0x1C2;
_CTMUCON1Hbits = 0x1C2;
 CTMUCON2     = 0x1C4;
_CTMUCON2     = 0x1C4;
_CTMUCON2bits = 0x1C4;
 CTMUCON2L    = 0x1C4;
_CTMUCON2L    = 0x1C4;
_CTMUCON2Lbits = 0x1C4;
 CTMUCON2H    = 0x1C6;
_CTMUCON2H    = 0x1C6;
 RTCCON1L     = 0x1CC;
_RTCCON1L     = 0x1CC;
_RTCCON1Lbits = 0x1CC;
 RTCCON1H     = 0x1CE;
_RTCCON1H     = 0x1CE;
_RTCCON1Hbits = 0x1CE;
 RTCCON2L     = 0x1D0;
_RTCCON2L     = 0x1D0;
_RTCCON2Lbits = 0x1D0;
 RTCCON2H     = 0x1D2;
_RTCCON2H     = 0x1D2;
 RTCCON3L     = 0x1D4;
_RTCCON3L     = 0x1D4;
_RTCCON3Lbits = 0x1D4;
 RTCCON3H     = 0x1D6;
_RTCCON3H     = 0x1D6;
 RTCSTATL     = 0x1D8;
_RTCSTATL     = 0x1D8;
_RTCSTATLbits = 0x1D8;
 RTCSTATH     = 0x1DA;
_RTCSTATH     = 0x1DA;
 TIMEL        = 0x1DC;
_TIMEL        = 0x1DC;
_TIMELbits    = 0x1DC;
 TIMEH        = 0x1DE;
_TIMEH        = 0x1DE;
_TIMEHbits    = 0x1DE;
 DATEL        = 0x1E0;
_DATEL        = 0x1E0;
_DATELbits    = 0x1E0;
 DATEH        = 0x1E2;
_DATEH        = 0x1E2;
_DATEHbits    = 0x1E2;
 ALMTIMEL     = 0x1E4;
_ALMTIMEL     = 0x1E4;
_ALMTIMELbits = 0x1E4;
 ALMTIMEH     = 0x1E6;
_ALMTIMEH     = 0x1E6;
_ALMTIMEHbits = 0x1E6;
 ALMDATEL     = 0x1E8;
_ALMDATEL     = 0x1E8;
_ALMDATELbits = 0x1E8;
 ALMDATEH     = 0x1EA;
_ALMDATEH     = 0x1EA;
_ALMDATEHbits = 0x1EA;
 TSATIMEL     = 0x1EC;
_TSATIMEL     = 0x1EC;
_TSATIMELbits = 0x1EC;
 TSATIMEH     = 0x1EE;
_TSATIMEH     = 0x1EE;
_TSATIMEHbits = 0x1EE;
 TSADATEL     = 0x1F0;
_TSADATEL     = 0x1F0;
_TSADATELbits = 0x1F0;
 TSADATEH     = 0x1F2;
_TSADATEH     = 0x1F2;
_TSADATEHbits = 0x1F2;
 TSBTIMEL     = 0x1F4;
_TSBTIMEL     = 0x1F4;
_TSBTIMELbits = 0x1F4;
 TSBTIMEH     = 0x1F6;
_TSBTIMEH     = 0x1F6;
_TSBTIMEHbits = 0x1F6;
 TSBDATEL     = 0x1F8;
_TSBDATEL     = 0x1F8;
_TSBDATELbits = 0x1F8;
 TSBDATEH     = 0x1FA;
_TSBDATEH     = 0x1FA;
_TSBDATEHbits = 0x1FA;
 IC1CON1      = 0x200;
_IC1CON1      = 0x200;
_IC1CON1bits  = 0x200;
 IC1CON2      = 0x202;
_IC1CON2      = 0x202;
_IC1CON2bits  = 0x202;
 IC1BUF       = 0x204;
_IC1BUF       = 0x204;
 IC1TMR       = 0x206;
_IC1TMR       = 0x206;
 IC2CON1      = 0x208;
_IC2CON1      = 0x208;
_IC2CON1bits  = 0x208;
 IC2CON2      = 0x20A;
_IC2CON2      = 0x20A;
_IC2CON2bits  = 0x20A;
 IC2BUF       = 0x20C;
_IC2BUF       = 0x20C;
 IC2TMR       = 0x20E;
_IC2TMR       = 0x20E;
 IC3CON1      = 0x210;
_IC3CON1      = 0x210;
_IC3CON1bits  = 0x210;
 IC3CON2      = 0x212;
_IC3CON2      = 0x212;
_IC3CON2bits  = 0x212;
 IC3BUF       = 0x214;
_IC3BUF       = 0x214;
 IC3TMR       = 0x216;
_IC3TMR       = 0x216;
 IC4CON1      = 0x218;
_IC4CON1      = 0x218;
_IC4CON1bits  = 0x218;
 IC4CON2      = 0x21A;
_IC4CON2      = 0x21A;
_IC4CON2bits  = 0x21A;
 IC4BUF       = 0x21C;
_IC4BUF       = 0x21C;
 IC4TMR       = 0x21E;
_IC4TMR       = 0x21E;
 IC5CON1      = 0x220;
_IC5CON1      = 0x220;
_IC5CON1bits  = 0x220;
 IC5CON2      = 0x222;
_IC5CON2      = 0x222;
_IC5CON2bits  = 0x222;
 IC5BUF       = 0x224;
_IC5BUF       = 0x224;
 IC5TMR       = 0x226;
_IC5TMR       = 0x226;
 IC6CON1      = 0x228;
_IC6CON1      = 0x228;
_IC6CON1bits  = 0x228;
 IC6CON2      = 0x22A;
_IC6CON2      = 0x22A;
_IC6CON2bits  = 0x22A;
 IC6BUF       = 0x22C;
_IC6BUF       = 0x22C;
 IC6TMR       = 0x22E;
_IC6TMR       = 0x22E;
 OC1CON1      = 0x230;
_OC1CON1      = 0x230;
_OC1CON1bits  = 0x230;
 OC1CON2      = 0x232;
_OC1CON2      = 0x232;
_OC1CON2bits  = 0x232;
 OC1RS        = 0x234;
_OC1RS        = 0x234;
 OC1R         = 0x236;
_OC1R         = 0x236;
 OC1TMR       = 0x238;
_OC1TMR       = 0x238;
 OC2CON1      = 0x23A;
_OC2CON1      = 0x23A;
_OC2CON1bits  = 0x23A;
 OC2CON2      = 0x23C;
_OC2CON2      = 0x23C;
_OC2CON2bits  = 0x23C;
 OC2RS        = 0x23E;
_OC2RS        = 0x23E;
 OC2R         = 0x240;
_OC2R         = 0x240;
 OC2TMR       = 0x242;
_OC2TMR       = 0x242;
 OC3CON1      = 0x244;
_OC3CON1      = 0x244;
_OC3CON1bits  = 0x244;
 OC3CON2      = 0x246;
_OC3CON2      = 0x246;
_OC3CON2bits  = 0x246;
 OC3RS        = 0x248;
_OC3RS        = 0x248;
 OC3R         = 0x24A;
_OC3R         = 0x24A;
 OC3TMR       = 0x24C;
_OC3TMR       = 0x24C;
 OC4CON1      = 0x24E;
_OC4CON1      = 0x24E;
_OC4CON1bits  = 0x24E;
 OC4CON2      = 0x250;
_OC4CON2      = 0x250;
_OC4CON2bits  = 0x250;
 OC4RS        = 0x252;
_OC4RS        = 0x252;
 OC4R         = 0x254;
_OC4R         = 0x254;
 OC4TMR       = 0x256;
_OC4TMR       = 0x256;
 OC5CON1      = 0x258;
_OC5CON1      = 0x258;
_OC5CON1bits  = 0x258;
 OC5CON2      = 0x25A;
_OC5CON2      = 0x25A;
_OC5CON2bits  = 0x25A;
 OC5RS        = 0x25C;
_OC5RS        = 0x25C;
 OC5R         = 0x25E;
_OC5R         = 0x25E;
 OC5TMR       = 0x260;
_OC5TMR       = 0x260;
 OC6CON1      = 0x262;
_OC6CON1      = 0x262;
_OC6CON1bits  = 0x262;
 OC6CON2      = 0x264;
_OC6CON2      = 0x264;
_OC6CON2bits  = 0x264;
 OC6RS        = 0x266;
_OC6RS        = 0x266;
 OC6R         = 0x268;
_OC6R         = 0x268;
 OC6TMR       = 0x26A;
_OC6TMR       = 0x26A;
 CCP1CON1L    = 0x26C;
_CCP1CON1L    = 0x26C;
_CCP1CON1Lbits = 0x26C;
 CCP1CON1H    = 0x26E;
_CCP1CON1H    = 0x26E;
_CCP1CON1Hbits = 0x26E;
 CCP1CON2L    = 0x270;
_CCP1CON2L    = 0x270;
_CCP1CON2Lbits = 0x270;
 CCP1CON2H    = 0x272;
_CCP1CON2H    = 0x272;
_CCP1CON2Hbits = 0x272;
 CCP1CON3L    = 0x274;
_CCP1CON3L    = 0x274;
_CCP1CON3Lbits = 0x274;
 CCP1CON3H    = 0x276;
_CCP1CON3H    = 0x276;
_CCP1CON3Hbits = 0x276;
 CCP1STAT     = 0x278;
_CCP1STAT     = 0x278;
_CCP1STATbits = 0x278;
 CCP1STATL    = 0x278;
_CCP1STATL    = 0x278;
_CCP1STATLbits = 0x278;
 CCP1STATH    = 0x27A;
_CCP1STATH    = 0x27A;
_CCP1STATHbits = 0x27A;
 CCP1TMRL     = 0x27C;
_CCP1TMRL     = 0x27C;
 CCP1TMRH     = 0x27E;
_CCP1TMRH     = 0x27E;
 CCP1PRL      = 0x280;
_CCP1PRL      = 0x280;
 CCP1PRH      = 0x282;
_CCP1PRH      = 0x282;
 CCP1RA       = 0x284;
_CCP1RA       = 0x284;
 CCP1RAL      = 0x284;
_CCP1RAL      = 0x284;
 CCP1RAH      = 0x286;
_CCP1RAH      = 0x286;
 CCP1RB       = 0x288;
_CCP1RB       = 0x288;
 CCP1RBL      = 0x288;
_CCP1RBL      = 0x288;
 CCP1RBH      = 0x28A;
_CCP1RBH      = 0x28A;
 CCP1BUFL     = 0x28C;
_CCP1BUFL     = 0x28C;
 CCP1BUFH     = 0x28E;
_CCP1BUFH     = 0x28E;
 CCP2CON1L    = 0x290;
_CCP2CON1L    = 0x290;
_CCP2CON1Lbits = 0x290;
 CCP2CON1H    = 0x292;
_CCP2CON1H    = 0x292;
_CCP2CON1Hbits = 0x292;
 CCP2CON2L    = 0x294;
_CCP2CON2L    = 0x294;
_CCP2CON2Lbits = 0x294;
 CCP2CON2H    = 0x296;
_CCP2CON2H    = 0x296;
_CCP2CON2Hbits = 0x296;
 CCP2CON3L    = 0x298;
_CCP2CON3L    = 0x298;
_CCP2CON3Lbits = 0x298;
 CCP2CON3H    = 0x29A;
_CCP2CON3H    = 0x29A;
_CCP2CON3Hbits = 0x29A;
 CCP2STAT     = 0x29C;
_CCP2STAT     = 0x29C;
_CCP2STATbits = 0x29C;
 CCP2STATL    = 0x29C;
_CCP2STATL    = 0x29C;
_CCP2STATLbits = 0x29C;
 CCP2STATH    = 0x29E;
_CCP2STATH    = 0x29E;
_CCP2STATHbits = 0x29E;
 CCP2TMRL     = 0x2A0;
_CCP2TMRL     = 0x2A0;
 CCP2TMRH     = 0x2A2;
_CCP2TMRH     = 0x2A2;
 CCP2PRL      = 0x2A4;
_CCP2PRL      = 0x2A4;
 CCP2PRH      = 0x2A6;
_CCP2PRH      = 0x2A6;
 CCP2RA       = 0x2A8;
_CCP2RA       = 0x2A8;
 CCP2RAL      = 0x2A8;
_CCP2RAL      = 0x2A8;
 CCP2RAH      = 0x2AA;
_CCP2RAH      = 0x2AA;
 CCP2RB       = 0x2AC;
_CCP2RB       = 0x2AC;
 CCP2RBL      = 0x2AC;
_CCP2RBL      = 0x2AC;
 CCP2RBH      = 0x2AE;
_CCP2RBH      = 0x2AE;
 CCP2BUFL     = 0x2B0;
_CCP2BUFL     = 0x2B0;
 CCP2BUFH     = 0x2B2;
_CCP2BUFH     = 0x2B2;
 CCP3CON1L    = 0x2B4;
_CCP3CON1L    = 0x2B4;
_CCP3CON1Lbits = 0x2B4;
 CCP3CON1H    = 0x2B6;
_CCP3CON1H    = 0x2B6;
_CCP3CON1Hbits = 0x2B6;
 CCP3CON2L    = 0x2B8;
_CCP3CON2L    = 0x2B8;
_CCP3CON2Lbits = 0x2B8;
 CCP3CON2H    = 0x2BA;
_CCP3CON2H    = 0x2BA;
_CCP3CON2Hbits = 0x2BA;
 CCP3CON3L    = 0x2BC;
_CCP3CON3L    = 0x2BC;
_CCP3CON3Lbits = 0x2BC;
 CCP3CON3H    = 0x2BE;
_CCP3CON3H    = 0x2BE;
_CCP3CON3Hbits = 0x2BE;
 CCP3STAT     = 0x2C0;
_CCP3STAT     = 0x2C0;
_CCP3STATbits = 0x2C0;
 CCP3STATL    = 0x2C0;
_CCP3STATL    = 0x2C0;
_CCP3STATLbits = 0x2C0;
 CCP3STATH    = 0x2C2;
_CCP3STATH    = 0x2C2;
_CCP3STATHbits = 0x2C2;
 CCP3TMRL     = 0x2C4;
_CCP3TMRL     = 0x2C4;
 CCP3TMRH     = 0x2C6;
_CCP3TMRH     = 0x2C6;
 CCP3PRL      = 0x2C8;
_CCP3PRL      = 0x2C8;
 CCP3PRH      = 0x2CA;
_CCP3PRH      = 0x2CA;
 CCP3RA       = 0x2CC;
_CCP3RA       = 0x2CC;
 CCP3RAL      = 0x2CC;
_CCP3RAL      = 0x2CC;
 CCP3RAH      = 0x2CE;
_CCP3RAH      = 0x2CE;
 CCP3RB       = 0x2D0;
_CCP3RB       = 0x2D0;
 CCP3RBL      = 0x2D0;
_CCP3RBL      = 0x2D0;
 CCP3RBH      = 0x2D2;
_CCP3RBH      = 0x2D2;
 CCP3BUFL     = 0x2D4;
_CCP3BUFL     = 0x2D4;
 CCP3BUFH     = 0x2D6;
_CCP3BUFH     = 0x2D6;
 CMSTAT       = 0x2E6;
_CMSTAT       = 0x2E6;
_CMSTATbits   = 0x2E6;
 CVRCON       = 0x2E8;
_CVRCON       = 0x2E8;
_CVRCONbits   = 0x2E8;
 CM1CON       = 0x2EA;
_CM1CON       = 0x2EA;
_CM1CONbits   = 0x2EA;
 CM2CON       = 0x2EC;
_CM2CON       = 0x2EC;
_CM2CONbits   = 0x2EC;
 CM3CON       = 0x2EE;
_CM3CON       = 0x2EE;
_CM3CONbits   = 0x2EE;
 ANCFG        = 0x2F4;
_ANCFG        = 0x2F4;
_ANCFGbits    = 0x2F4;
 DAC1CON      = 0x2F8;
_DAC1CON      = 0x2F8;
_DAC1CONbits  = 0x2F8;
 DAC1DAT      = 0x2FA;
_DAC1DAT      = 0x2FA;
 CCP4CON1L    = 0x300;
_CCP4CON1L    = 0x300;
_CCP4CON1Lbits = 0x300;
 CCP4CON1H    = 0x302;
_CCP4CON1H    = 0x302;
_CCP4CON1Hbits = 0x302;
 CCP4CON2L    = 0x304;
_CCP4CON2L    = 0x304;
_CCP4CON2Lbits = 0x304;
 CCP4CON2H    = 0x306;
_CCP4CON2H    = 0x306;
_CCP4CON2Hbits = 0x306;
 CCP4CON3L    = 0x308;
_CCP4CON3L    = 0x308;
 CCP4CON3H    = 0x30A;
_CCP4CON3H    = 0x30A;
_CCP4CON3Hbits = 0x30A;
 CCP4STAT     = 0x30C;
_CCP4STAT     = 0x30C;
_CCP4STATbits = 0x30C;
 CCP4STATL    = 0x30C;
_CCP4STATL    = 0x30C;
_CCP4STATLbits = 0x30C;
 CCP4STATH    = 0x30E;
_CCP4STATH    = 0x30E;
_CCP4STATHbits = 0x30E;
 CCP4TMRL     = 0x310;
_CCP4TMRL     = 0x310;
 CCP4TMRH     = 0x312;
_CCP4TMRH     = 0x312;
 CCP4PRL      = 0x314;
_CCP4PRL      = 0x314;
 CCP4PRH      = 0x316;
_CCP4PRH      = 0x316;
 CCP4RA       = 0x318;
_CCP4RA       = 0x318;
 CCP4RAL      = 0x318;
_CCP4RAL      = 0x318;
 CCP4RAH      = 0x31A;
_CCP4RAH      = 0x31A;
 CCP4RB       = 0x31C;
_CCP4RB       = 0x31C;
 CCP4RBL      = 0x31C;
_CCP4RBL      = 0x31C;
 CCP4RBH      = 0x31E;
_CCP4RBH      = 0x31E;
 CCP4BUFL     = 0x320;
_CCP4BUFL     = 0x320;
 CCP4BUFH     = 0x322;
_CCP4BUFH     = 0x322;
 CCP5CON1L    = 0x324;
_CCP5CON1L    = 0x324;
_CCP5CON1Lbits = 0x324;
 CCP5CON1H    = 0x326;
_CCP5CON1H    = 0x326;
_CCP5CON1Hbits = 0x326;
 CCP5CON2L    = 0x328;
_CCP5CON2L    = 0x328;
_CCP5CON2Lbits = 0x328;
 CCP5CON2H    = 0x32A;
_CCP5CON2H    = 0x32A;
_CCP5CON2Hbits = 0x32A;
 CCP5CON3L    = 0x32C;
_CCP5CON3L    = 0x32C;
_CCP5CON3Lbits = 0x32C;
 CCP5CON3H    = 0x32E;
_CCP5CON3H    = 0x32E;
_CCP5CON3Hbits = 0x32E;
 CCP5STAT     = 0x330;
_CCP5STAT     = 0x330;
_CCP5STATbits = 0x330;
 CCP5STATL    = 0x330;
_CCP5STATL    = 0x330;
_CCP5STATLbits = 0x330;
 CCP5STATH    = 0x332;
_CCP5STATH    = 0x332;
_CCP5STATHbits = 0x332;
 CCP5TMRL     = 0x334;
_CCP5TMRL     = 0x334;
 CCP5TMRH     = 0x336;
_CCP5TMRH     = 0x336;
 CCP5PRL      = 0x338;
_CCP5PRL      = 0x338;
 CCP5PRH      = 0x33A;
_CCP5PRH      = 0x33A;
 CCP5RA       = 0x33C;
_CCP5RA       = 0x33C;
 CCP5RAL      = 0x33C;
_CCP5RAL      = 0x33C;
 CCP5RAH      = 0x33E;
_CCP5RAH      = 0x33E;
 CCP5RB       = 0x340;
_CCP5RB       = 0x340;
 CCP5RBL      = 0x340;
_CCP5RBL      = 0x340;
 CCP5RBH      = 0x342;
_CCP5RBH      = 0x342;
 CCP5BUFL     = 0x344;
_CCP5BUFL     = 0x344;
 CCP5BUFH     = 0x346;
_CCP5BUFH     = 0x346;
 CCP6CON1L    = 0x348;
_CCP6CON1L    = 0x348;
_CCP6CON1Lbits = 0x348;
 CCP6CON1H    = 0x34A;
_CCP6CON1H    = 0x34A;
_CCP6CON1Hbits = 0x34A;
 CCP6CON2L    = 0x34C;
_CCP6CON2L    = 0x34C;
_CCP6CON2Lbits = 0x34C;
 CCP6CON2H    = 0x34E;
_CCP6CON2H    = 0x34E;
_CCP6CON2Hbits = 0x34E;
 CCP6CON3L    = 0x350;
_CCP6CON3L    = 0x350;
_CCP6CON3Lbits = 0x350;
 CCP6CON3H    = 0x352;
_CCP6CON3H    = 0x352;
_CCP6CON3Hbits = 0x352;
 CCP6STAT     = 0x354;
_CCP6STAT     = 0x354;
_CCP6STATbits = 0x354;
 CCP6STATL    = 0x354;
_CCP6STATL    = 0x354;
_CCP6STATLbits = 0x354;
 CCP6STATH    = 0x356;
_CCP6STATH    = 0x356;
_CCP6STATHbits = 0x356;
 CCP6TMRL     = 0x358;
_CCP6TMRL     = 0x358;
 CCP6TMRH     = 0x35A;
_CCP6TMRH     = 0x35A;
 CCP6PRL      = 0x35C;
_CCP6PRL      = 0x35C;
 CCP6PRH      = 0x35E;
_CCP6PRH      = 0x35E;
 CCP6RA       = 0x360;
_CCP6RA       = 0x360;
 CCP6RAL      = 0x360;
_CCP6RAL      = 0x360;
 CCP6RAH      = 0x362;
_CCP6RAH      = 0x362;
 CCP6RB       = 0x364;
_CCP6RB       = 0x364;
 CCP6RBL      = 0x364;
_CCP6RBL      = 0x364;
 CCP6RBH      = 0x366;
_CCP6RBH      = 0x366;
 CCP6BUFL     = 0x368;
_CCP6BUFL     = 0x368;
 CCP6BUFH     = 0x36A;
_CCP6BUFH     = 0x36A;
 CCP7CON1L    = 0x36C;
_CCP7CON1L    = 0x36C;
_CCP7CON1Lbits = 0x36C;
 CCP7CON1H    = 0x36E;
_CCP7CON1H    = 0x36E;
_CCP7CON1Hbits = 0x36E;
 CCP7CON2L    = 0x370;
_CCP7CON2L    = 0x370;
_CCP7CON2Lbits = 0x370;
 CCP7CON2H    = 0x372;
_CCP7CON2H    = 0x372;
_CCP7CON2Hbits = 0x372;
 CCP7CON3L    = 0x374;
_CCP7CON3L    = 0x374;
_CCP7CON3Lbits = 0x374;
 CCP7CON3H    = 0x376;
_CCP7CON3H    = 0x376;
_CCP7CON3Hbits = 0x376;
 CCP7STAT     = 0x378;
_CCP7STAT     = 0x378;
_CCP7STATbits = 0x378;
 CCP7STATL    = 0x378;
_CCP7STATL    = 0x378;
_CCP7STATLbits = 0x378;
 CCP7STATH    = 0x37A;
_CCP7STATH    = 0x37A;
_CCP7STATHbits = 0x37A;
 CCP7TMRL     = 0x37C;
_CCP7TMRL     = 0x37C;
 CCP7TMRH     = 0x37E;
_CCP7TMRH     = 0x37E;
 CCP7PRL      = 0x380;
_CCP7PRL      = 0x380;
 CCP7PRH      = 0x382;
_CCP7PRH      = 0x382;
 CCP7RA       = 0x384;
_CCP7RA       = 0x384;
 CCP7RAL      = 0x384;
_CCP7RAL      = 0x384;
 CCP7RAH      = 0x386;
_CCP7RAH      = 0x386;
 CCP7RB       = 0x388;
_CCP7RB       = 0x388;
 CCP7RBL      = 0x388;
_CCP7RBL      = 0x388;
 CCP7RBH      = 0x38A;
_CCP7RBH      = 0x38A;
 CCP7BUFL     = 0x38C;
_CCP7BUFL     = 0x38C;
 CCP7BUFH     = 0x38E;
_CCP7BUFH     = 0x38E;
 U1MODE       = 0x398;
_U1MODE       = 0x398;
_U1MODEbits   = 0x398;
 U1STA        = 0x39A;
_U1STA        = 0x39A;
_U1STAbits    = 0x39A;
 U1TXREG      = 0x39C;
_U1TXREG      = 0x39C;
_U1TXREGbits  = 0x39C;
 U1RXREG      = 0x39E;
_U1RXREG      = 0x39E;
 U1BRG        = 0x3A0;
_U1BRG        = 0x3A0;
 U1ADMD       = 0x3A2;
_U1ADMD       = 0x3A2;
_U1ADMDbits   = 0x3A2;
 U1SCCON      = 0x3A4;
_U1SCCON      = 0x3A4;
_U1SCCONbits  = 0x3A4;
 U1SCINT      = 0x3A6;
_U1SCINT      = 0x3A6;
_U1SCINTbits  = 0x3A6;
 U1GTC        = 0x3A8;
_U1GTC        = 0x3A8;
_U1GTCbits    = 0x3A8;
 U1WTCH       = 0x3AA;
_U1WTCH       = 0x3AA;
_U1WTCHbits   = 0x3AA;
 U1WTCL       = 0x3AC;
_U1WTCL       = 0x3AC;
_U1WTCLbits   = 0x3AC;
 U2MODE       = 0x3AE;
_U2MODE       = 0x3AE;
_U2MODEbits   = 0x3AE;
 U2STA        = 0x3B0;
_U2STA        = 0x3B0;
_U2STAbits    = 0x3B0;
 U2TXREG      = 0x3B2;
_U2TXREG      = 0x3B2;
_U2TXREGbits  = 0x3B2;
 U2RXREG      = 0x3B4;
_U2RXREG      = 0x3B4;
 U2BRG        = 0x3B6;
_U2BRG        = 0x3B6;
 U2ADMD       = 0x3B8;
_U2ADMD       = 0x3B8;
_U2ADMDbits   = 0x3B8;
 U2SCCON      = 0x3BA;
_U2SCCON      = 0x3BA;
_U2SCCONbits  = 0x3BA;
 U2SCINT      = 0x3BC;
_U2SCINT      = 0x3BC;
_U2SCINTbits  = 0x3BC;
 U2GTC        = 0x3BE;
_U2GTC        = 0x3BE;
_U2GTCbits    = 0x3BE;
 U2WTCH       = 0x3C0;
_U2WTCH       = 0x3C0;
_U2WTCHbits   = 0x3C0;
 U2WTCL       = 0x3C2;
_U2WTCL       = 0x3C2;
_U2WTCLbits   = 0x3C2;
 U3MODE       = 0x3C4;
_U3MODE       = 0x3C4;
_U3MODEbits   = 0x3C4;
 U3STA        = 0x3C6;
_U3STA        = 0x3C6;
_U3STAbits    = 0x3C6;
 U3TXREG      = 0x3C8;
_U3TXREG      = 0x3C8;
_U3TXREGbits  = 0x3C8;
 U3RXREG      = 0x3CA;
_U3RXREG      = 0x3CA;
 U3BRG        = 0x3CC;
_U3BRG        = 0x3CC;
 U3ADMD       = 0x3CE;
_U3ADMD       = 0x3CE;
_U3ADMDbits   = 0x3CE;
 U4MODE       = 0x3D0;
_U4MODE       = 0x3D0;
_U4MODEbits   = 0x3D0;
 U4STA        = 0x3D2;
_U4STA        = 0x3D2;
_U4STAbits    = 0x3D2;
 U4TXREG      = 0x3D4;
_U4TXREG      = 0x3D4;
_U4TXREGbits  = 0x3D4;
 U4RXREG      = 0x3D6;
_U4RXREG      = 0x3D6;
 U4BRG        = 0x3D8;
_U4BRG        = 0x3D8;
 U4ADMD       = 0x3DA;
_U4ADMD       = 0x3DA;
_U4ADMDbits   = 0x3DA;
 U5MODE       = 0x3DC;
_U5MODE       = 0x3DC;
_U5MODEbits   = 0x3DC;
 U5STA        = 0x3DE;
_U5STA        = 0x3DE;
_U5STAbits    = 0x3DE;
 U5TXREG      = 0x3E0;
_U5TXREG      = 0x3E0;
_U5TXREGbits  = 0x3E0;
 U5RXREG      = 0x3E2;
_U5RXREG      = 0x3E2;
 U5BRG        = 0x3E4;
_U5BRG        = 0x3E4;
 U5ADMD       = 0x3E6;
_U5ADMD       = 0x3E6;
_U5ADMDbits   = 0x3E6;
 U6MODE       = 0x3E8;
_U6MODE       = 0x3E8;
_U6MODEbits   = 0x3E8;
 U6STA        = 0x3EA;
_U6STA        = 0x3EA;
_U6STAbits    = 0x3EA;
 U6TXREG      = 0x3EC;
_U6TXREG      = 0x3EC;
_U6TXREGbits  = 0x3EC;
 U6RXREG      = 0x3EE;
_U6RXREG      = 0x3EE;
 U6BRG        = 0x3F0;
_U6BRG        = 0x3F0;
 U6ADMD       = 0x3F2;
_U6ADMD       = 0x3F2;
_U6ADMDbits   = 0x3F2;
 SPI1CON1     = 0x3F4;
_SPI1CON1     = 0x3F4;
_SPI1CON1bits = 0x3F4;
 SPI1CON1L    = 0x3F4;
_SPI1CON1L    = 0x3F4;
_SPI1CON1Lbits = 0x3F4;
 SPI1CON1H    = 0x3F6;
_SPI1CON1H    = 0x3F6;
_SPI1CON1Hbits = 0x3F6;
 SPI1CON2     = 0x3F6;
_SPI1CON2     = 0x3F6;
_SPI1CON2bits = 0x3F6;
 SPI1CON2L    = 0x3F8;
_SPI1CON2L    = 0x3F8;
_SPI1CON2Lbits = 0x3F8;
 SPI1CON3     = 0x3F8;
_SPI1CON3     = 0x3F8;
_SPI1CON3bits = 0x3F8;
 SPI1CON2H    = 0x3FA;
_SPI1CON2H    = 0x3FA;
 SPI1CON4     = 0x3FA;
_SPI1CON4     = 0x3FA;
 SPI1STATL    = 0x3FC;
_SPI1STATL    = 0x3FC;
_SPI1STATLbits = 0x3FC;
 SPI1STATH    = 0x3FE;
_SPI1STATH    = 0x3FE;
_SPI1STATHbits = 0x3FE;
 SPI1BUFL     = 0x400;
_SPI1BUFL     = 0x400;
_SPI1BUFLbits = 0x400;
 SPI1BUFH     = 0x402;
_SPI1BUFH     = 0x402;
_SPI1BUFHbits = 0x402;
 SPI1BRGL     = 0x404;
_SPI1BRGL     = 0x404;
_SPI1BRGLbits = 0x404;
 SPI1BRGH     = 0x406;
_SPI1BRGH     = 0x406;
 SPI1IMSK1    = 0x408;
_SPI1IMSK1    = 0x408;
_SPI1IMSK1bits = 0x408;
 SPI1IMSKL    = 0x408;
_SPI1IMSKL    = 0x408;
_SPI1IMSKLbits = 0x408;
 SPI1IMSK2    = 0x40A;
_SPI1IMSK2    = 0x40A;
_SPI1IMSK2bits = 0x40A;
 SPI1IMSKH    = 0x40A;
_SPI1IMSKH    = 0x40A;
_SPI1IMSKHbits = 0x40A;
 SPI1URDTL    = 0x40C;
_SPI1URDTL    = 0x40C;
_SPI1URDTLbits = 0x40C;
 SPI1URDTH    = 0x40E;
_SPI1URDTH    = 0x40E;
_SPI1URDTHbits = 0x40E;
 SPI2CON1     = 0x410;
_SPI2CON1     = 0x410;
_SPI2CON1bits = 0x410;
 SPI2CON1L    = 0x410;
_SPI2CON1L    = 0x410;
_SPI2CON1Lbits = 0x410;
 SPI2CON1H    = 0x412;
_SPI2CON1H    = 0x412;
_SPI2CON1Hbits = 0x412;
 SPI2CON2     = 0x412;
_SPI2CON2     = 0x412;
_SPI2CON2bits = 0x412;
 SPI2CON2L    = 0x414;
_SPI2CON2L    = 0x414;
_SPI2CON2Lbits = 0x414;
 SPI2CON3     = 0x414;
_SPI2CON3     = 0x414;
_SPI2CON3bits = 0x414;
 SPI2CON2H    = 0x416;
_SPI2CON2H    = 0x416;
 SPI2CON4     = 0x416;
_SPI2CON4     = 0x416;
 SPI2STATL    = 0x418;
_SPI2STATL    = 0x418;
_SPI2STATLbits = 0x418;
 SPI2STATH    = 0x41A;
_SPI2STATH    = 0x41A;
_SPI2STATHbits = 0x41A;
 SPI2BUFL     = 0x41C;
_SPI2BUFL     = 0x41C;
_SPI2BUFLbits = 0x41C;
 SPI2BUFH     = 0x41E;
_SPI2BUFH     = 0x41E;
_SPI2BUFHbits = 0x41E;
 SPI2BRGL     = 0x420;
_SPI2BRGL     = 0x420;
_SPI2BRGLbits = 0x420;
 SPI2BRGH     = 0x422;
_SPI2BRGH     = 0x422;
 SPI2IMSK1    = 0x424;
_SPI2IMSK1    = 0x424;
_SPI2IMSK1bits = 0x424;
 SPI2IMSKL    = 0x424;
_SPI2IMSKL    = 0x424;
_SPI2IMSKLbits = 0x424;
 SPI2IMSK2    = 0x426;
_SPI2IMSK2    = 0x426;
_SPI2IMSK2bits = 0x426;
 SPI2IMSKH    = 0x426;
_SPI2IMSKH    = 0x426;
_SPI2IMSKHbits = 0x426;
 SPI2URDTL    = 0x428;
_SPI2URDTL    = 0x428;
_SPI2URDTLbits = 0x428;
 SPI2URDTH    = 0x42A;
_SPI2URDTH    = 0x42A;
_SPI2URDTHbits = 0x42A;
 SPI3CON1     = 0x42C;
_SPI3CON1     = 0x42C;
_SPI3CON1bits = 0x42C;
 SPI3CON1L    = 0x42C;
_SPI3CON1L    = 0x42C;
_SPI3CON1Lbits = 0x42C;
 SPI3CON1H    = 0x42E;
_SPI3CON1H    = 0x42E;
_SPI3CON1Hbits = 0x42E;
 SPI3CON2     = 0x42E;
_SPI3CON2     = 0x42E;
_SPI3CON2bits = 0x42E;
 SPI3CON2L    = 0x430;
_SPI3CON2L    = 0x430;
_SPI3CON2Lbits = 0x430;
 SPI3CON3     = 0x430;
_SPI3CON3     = 0x430;
_SPI3CON3bits = 0x430;
 SPI3CON2H    = 0x432;
_SPI3CON2H    = 0x432;
 SPI3CON4     = 0x432;
_SPI3CON4     = 0x432;
 SPI3STATL    = 0x434;
_SPI3STATL    = 0x434;
_SPI3STATLbits = 0x434;
 SPI3STATH    = 0x436;
_SPI3STATH    = 0x436;
_SPI3STATHbits = 0x436;
 SPI3BUFL     = 0x438;
_SPI3BUFL     = 0x438;
_SPI3BUFLbits = 0x438;
 SPI3BUFH     = 0x43A;
_SPI3BUFH     = 0x43A;
_SPI3BUFHbits = 0x43A;
 SPI3BRGL     = 0x43C;
_SPI3BRGL     = 0x43C;
_SPI3BRGLbits = 0x43C;
 SPI3BRGH     = 0x43E;
_SPI3BRGH     = 0x43E;
 SPI3IMSK1    = 0x440;
_SPI3IMSK1    = 0x440;
_SPI3IMSK1bits = 0x440;
 SPI3IMSKL    = 0x440;
_SPI3IMSKL    = 0x440;
_SPI3IMSKLbits = 0x440;
 SPI3IMSK2    = 0x442;
_SPI3IMSK2    = 0x442;
_SPI3IMSK2bits = 0x442;
 SPI3IMSKH    = 0x442;
_SPI3IMSKH    = 0x442;
_SPI3IMSKHbits = 0x442;
 SPI3URDTL    = 0x444;
_SPI3URDTL    = 0x444;
_SPI3URDTLbits = 0x444;
 SPI3URDTH    = 0x446;
_SPI3URDTH    = 0x446;
_SPI3URDTHbits = 0x446;
 SPI4CON1     = 0x448;
_SPI4CON1     = 0x448;
_SPI4CON1bits = 0x448;
 SPI4CON1L    = 0x448;
_SPI4CON1L    = 0x448;
_SPI4CON1Lbits = 0x448;
 SPI4CON1H    = 0x44A;
_SPI4CON1H    = 0x44A;
_SPI4CON1Hbits = 0x44A;
 SPI4CON2     = 0x44A;
_SPI4CON2     = 0x44A;
_SPI4CON2bits = 0x44A;
 SPI4CON2L    = 0x44C;
_SPI4CON2L    = 0x44C;
_SPI4CON2Lbits = 0x44C;
 SPI4CON3     = 0x44C;
_SPI4CON3     = 0x44C;
_SPI4CON3bits = 0x44C;
 SPI4CON2H    = 0x44E;
_SPI4CON2H    = 0x44E;
 SPI4CON4     = 0x44E;
_SPI4CON4     = 0x44E;
 SPI4STATL    = 0x450;
_SPI4STATL    = 0x450;
_SPI4STATLbits = 0x450;
 SPI4STATH    = 0x452;
_SPI4STATH    = 0x452;
_SPI4STATHbits = 0x452;
 SPI4BUFL     = 0x454;
_SPI4BUFL     = 0x454;
_SPI4BUFLbits = 0x454;
 SPI4BUFH     = 0x456;
_SPI4BUFH     = 0x456;
_SPI4BUFHbits = 0x456;
 SPI4BRGL     = 0x458;
_SPI4BRGL     = 0x458;
_SPI4BRGLbits = 0x458;
 SPI4BRGH     = 0x45A;
_SPI4BRGH     = 0x45A;
 SPI4IMSK1    = 0x45C;
_SPI4IMSK1    = 0x45C;
_SPI4IMSK1bits = 0x45C;
 SPI4IMSKL    = 0x45C;
_SPI4IMSKL    = 0x45C;
_SPI4IMSKLbits = 0x45C;
 SPI4IMSK2    = 0x45E;
_SPI4IMSK2    = 0x45E;
_SPI4IMSK2bits = 0x45E;
 SPI4IMSKH    = 0x45E;
_SPI4IMSKH    = 0x45E;
_SPI4IMSKHbits = 0x45E;
 SPI4URDTL    = 0x460;
_SPI4URDTL    = 0x460;
_SPI4URDTLbits = 0x460;
 SPI4URDTH    = 0x462;
_SPI4URDTH    = 0x462;
_SPI4URDTHbits = 0x462;
 CLC1CONL     = 0x464;
_CLC1CONL     = 0x464;
_CLC1CONLbits = 0x464;
 CLC1CONH     = 0x466;
_CLC1CONH     = 0x466;
_CLC1CONHbits = 0x466;
 CLC1SEL      = 0x468;
_CLC1SEL      = 0x468;
_CLC1SELbits  = 0x468;
 CLC1SELL     = 0x468;
_CLC1SELL     = 0x468;
_CLC1SELLbits = 0x468;
 CLC1GLSL     = 0x46C;
_CLC1GLSL     = 0x46C;
_CLC1GLSLbits = 0x46C;
 CLC1GLSH     = 0x46E;
_CLC1GLSH     = 0x46E;
_CLC1GLSHbits = 0x46E;
 CLC2CONL     = 0x470;
_CLC2CONL     = 0x470;
_CLC2CONLbits = 0x470;
 CLC2CONH     = 0x472;
_CLC2CONH     = 0x472;
_CLC2CONHbits = 0x472;
 CLC2SEL      = 0x474;
_CLC2SEL      = 0x474;
_CLC2SELbits  = 0x474;
 CLC2SELL     = 0x474;
_CLC2SELL     = 0x474;
_CLC2SELLbits = 0x474;
 CLC2GLSL     = 0x478;
_CLC2GLSL     = 0x478;
_CLC2GLSLbits = 0x478;
 CLC2GLSH     = 0x47A;
_CLC2GLSH     = 0x47A;
_CLC2GLSHbits = 0x47A;
 CLC3CONL     = 0x47C;
_CLC3CONL     = 0x47C;
_CLC3CONLbits = 0x47C;
 CLC3CONH     = 0x47E;
_CLC3CONH     = 0x47E;
_CLC3CONHbits = 0x47E;
 CLC3SEL      = 0x480;
_CLC3SEL      = 0x480;
_CLC3SELbits  = 0x480;
 CLC3SELL     = 0x480;
_CLC3SELL     = 0x480;
_CLC3SELLbits = 0x480;
 CLC3GLSL     = 0x484;
_CLC3GLSL     = 0x484;
_CLC3GLSLbits = 0x484;
 CLC3GLSH     = 0x486;
_CLC3GLSH     = 0x486;
_CLC3GLSHbits = 0x486;
 CLC4CONL     = 0x488;
_CLC4CONL     = 0x488;
_CLC4CONLbits = 0x488;
 CLC4CONH     = 0x48A;
_CLC4CONH     = 0x48A;
_CLC4CONHbits = 0x48A;
 CLC4SEL      = 0x48C;
_CLC4SEL      = 0x48C;
_CLC4SELbits  = 0x48C;
 CLC4SELL     = 0x48C;
_CLC4SELL     = 0x48C;
_CLC4SELLbits = 0x48C;
 CLC4GLSL     = 0x490;
_CLC4GLSL     = 0x490;
_CLC4GLSLbits = 0x490;
 CLC4GLSH     = 0x492;
_CLC4GLSH     = 0x492;
_CLC4GLSHbits = 0x492;
 I2C1RCV      = 0x494;
_I2C1RCV      = 0x494;
_I2C1RCVbits  = 0x494;
 I2C1TRN      = 0x496;
_I2C1TRN      = 0x496;
_I2C1TRNbits  = 0x496;
 I2C1BRG      = 0x498;
_I2C1BRG      = 0x498;
 I2C1CON1     = 0x49A;
_I2C1CON1     = 0x49A;
_I2C1CON1bits = 0x49A;
 I2C1CONL     = 0x49A;
_I2C1CONL     = 0x49A;
_I2C1CONLbits = 0x49A;
 I2C1CON2     = 0x49C;
_I2C1CON2     = 0x49C;
_I2C1CON2bits = 0x49C;
 I2C1CONH     = 0x49C;
_I2C1CONH     = 0x49C;
_I2C1CONHbits = 0x49C;
 I2C1STAT     = 0x49E;
_I2C1STAT     = 0x49E;
_I2C1STATbits = 0x49E;
 I2C1ADD      = 0x4A0;
_I2C1ADD      = 0x4A0;
_I2C1ADDbits  = 0x4A0;
 I2C1MSK      = 0x4A2;
_I2C1MSK      = 0x4A2;
_I2C1MSKbits  = 0x4A2;
 I2C2RCV      = 0x4A4;
_I2C2RCV      = 0x4A4;
_I2C2RCVbits  = 0x4A4;
 I2C2TRN      = 0x4A6;
_I2C2TRN      = 0x4A6;
_I2C2TRNbits  = 0x4A6;
 I2C2BRG      = 0x4A8;
_I2C2BRG      = 0x4A8;
 I2C2CON1     = 0x4AA;
_I2C2CON1     = 0x4AA;
_I2C2CON1bits = 0x4AA;
 I2C2CONL     = 0x4AA;
_I2C2CONL     = 0x4AA;
_I2C2CONLbits = 0x4AA;
 I2C2CON2     = 0x4AC;
_I2C2CON2     = 0x4AC;
_I2C2CON2bits = 0x4AC;
 I2C2CONH     = 0x4AC;
_I2C2CONH     = 0x4AC;
_I2C2CONHbits = 0x4AC;
 I2C2STAT     = 0x4AE;
_I2C2STAT     = 0x4AE;
_I2C2STATbits = 0x4AE;
 I2C2ADD      = 0x4B0;
_I2C2ADD      = 0x4B0;
_I2C2ADDbits  = 0x4B0;
 I2C2MSK      = 0x4B2;
_I2C2MSK      = 0x4B2;
_I2C2MSKbits  = 0x4B2;
 I2C3RCV      = 0x4B4;
_I2C3RCV      = 0x4B4;
_I2C3RCVbits  = 0x4B4;
 I2C3TRN      = 0x4B6;
_I2C3TRN      = 0x4B6;
_I2C3TRNbits  = 0x4B6;
 I2C3BRG      = 0x4B8;
_I2C3BRG      = 0x4B8;
 I2C3CON1     = 0x4BA;
_I2C3CON1     = 0x4BA;
_I2C3CON1bits = 0x4BA;
 I2C3CONL     = 0x4BA;
_I2C3CONL     = 0x4BA;
_I2C3CONLbits = 0x4BA;
 I2C3CON2     = 0x4BC;
_I2C3CON2     = 0x4BC;
_I2C3CON2bits = 0x4BC;
 I2C3CONH     = 0x4BC;
_I2C3CONH     = 0x4BC;
_I2C3CONHbits = 0x4BC;
 I2C3STAT     = 0x4BE;
_I2C3STAT     = 0x4BE;
_I2C3STATbits = 0x4BE;
 I2C3ADD      = 0x4C0;
_I2C3ADD      = 0x4C0;
_I2C3ADDbits  = 0x4C0;
 I2C3MSK      = 0x4C2;
_I2C3MSK      = 0x4C2;
_I2C3MSKbits  = 0x4C2;
 DMACON       = 0x4C4;
_DMACON       = 0x4C4;
_DMACONbits   = 0x4C4;
 DMABUF       = 0x4C6;
_DMABUF       = 0x4C6;
 DMAL         = 0x4C8;
_DMAL         = 0x4C8;
 DMAH         = 0x4CA;
_DMAH         = 0x4CA;
 DMACH0       = 0x4CC;
_DMACH0       = 0x4CC;
_DMACH0bits   = 0x4CC;
 DMAINT0      = 0x4CE;
_DMAINT0      = 0x4CE;
_DMAINT0bits  = 0x4CE;
 DMASRC0      = 0x4D0;
_DMASRC0      = 0x4D0;
 DMADST0      = 0x4D2;
_DMADST0      = 0x4D2;
 DMACNT0      = 0x4D4;
_DMACNT0      = 0x4D4;
 DMACH1       = 0x4D6;
_DMACH1       = 0x4D6;
_DMACH1bits   = 0x4D6;
 DMAINT1      = 0x4D8;
_DMAINT1      = 0x4D8;
_DMAINT1bits  = 0x4D8;
 DMASRC1      = 0x4DA;
_DMASRC1      = 0x4DA;
 DMADST1      = 0x4DC;
_DMADST1      = 0x4DC;
 DMACNT1      = 0x4DE;
_DMACNT1      = 0x4DE;
 DMACH2       = 0x4E0;
_DMACH2       = 0x4E0;
_DMACH2bits   = 0x4E0;
 DMAINT2      = 0x4E2;
_DMAINT2      = 0x4E2;
_DMAINT2bits  = 0x4E2;
 DMASRC2      = 0x4E4;
_DMASRC2      = 0x4E4;
 DMADST2      = 0x4E6;
_DMADST2      = 0x4E6;
 DMACNT2      = 0x4E8;
_DMACNT2      = 0x4E8;
 DMACH3       = 0x4EA;
_DMACH3       = 0x4EA;
_DMACH3bits   = 0x4EA;
 DMAINT3      = 0x4EC;
_DMAINT3      = 0x4EC;
_DMAINT3bits  = 0x4EC;
 DMASRC3      = 0x4EE;
_DMASRC3      = 0x4EE;
 DMADST3      = 0x4F0;
_DMADST3      = 0x4F0;
 DMACNT3      = 0x4F2;
_DMACNT3      = 0x4F2;
 DMACH4       = 0x4F4;
_DMACH4       = 0x4F4;
_DMACH4bits   = 0x4F4;
 DMAINT4      = 0x4F6;
_DMAINT4      = 0x4F6;
_DMAINT4bits  = 0x4F6;
 DMASRC4      = 0x4F8;
_DMASRC4      = 0x4F8;
 DMADST4      = 0x4FA;
_DMADST4      = 0x4FA;
 DMACNT4      = 0x4FC;
_DMACNT4      = 0x4FC;
 DMACH5       = 0x4FE;
_DMACH5       = 0x4FE;
_DMACH5bits   = 0x4FE;
 DMAINT5      = 0x500;
_DMAINT5      = 0x500;
_DMAINT5bits  = 0x500;
 DMASRC5      = 0x502;
_DMASRC5      = 0x502;
 DMADST5      = 0x504;
_DMADST5      = 0x504;
 DMACNT5      = 0x506;
_DMACNT5      = 0x506;
 CRYCONL      = 0x51C;
_CRYCONL      = 0x51C;
_CRYCONLbits  = 0x51C;
 CRYCONH      = 0x51E;
_CRYCONH      = 0x51E;
_CRYCONHbits  = 0x51E;
 CRYSTAT      = 0x520;
_CRYSTAT      = 0x520;
_CRYSTATbits  = 0x520;
 CRYOTP       = 0x524;
_CRYOTP       = 0x524;
_CRYOTPbits   = 0x524;
 CRYKEY       = 0x528;
_CRYKEY       = 0x528;
 CRYKEY0      = 0x528;
_CRYKEY0      = 0x528;
 CRYKEY1      = 0x52A;
_CRYKEY1      = 0x52A;
 CRYKEY2      = 0x52C;
_CRYKEY2      = 0x52C;
 CRYKEY3      = 0x52E;
_CRYKEY3      = 0x52E;
 CRYKEY4      = 0x530;
_CRYKEY4      = 0x530;
 CRYKEY5      = 0x532;
_CRYKEY5      = 0x532;
 CRYKEY6      = 0x534;
_CRYKEY6      = 0x534;
 CRYKEY7      = 0x536;
_CRYKEY7      = 0x536;
 CRYKEY8      = 0x538;
_CRYKEY8      = 0x538;
 CRYKEY9      = 0x53A;
_CRYKEY9      = 0x53A;
 CRYKEY10     = 0x53C;
_CRYKEY10     = 0x53C;
 CRYKEY11     = 0x53E;
_CRYKEY11     = 0x53E;
 CRYKEY12     = 0x540;
_CRYKEY12     = 0x540;
 CRYKEY13     = 0x542;
_CRYKEY13     = 0x542;
 CRYKEY14     = 0x544;
_CRYKEY14     = 0x544;
 CRYKEY15     = 0x546;
_CRYKEY15     = 0x546;
 CRYTXTA      = 0x548;
_CRYTXTA      = 0x548;
 CRYTXTA0     = 0x548;
_CRYTXTA0     = 0x548;
 CRYTXTA1     = 0x54A;
_CRYTXTA1     = 0x54A;
 CRYTXTA2     = 0x54C;
_CRYTXTA2     = 0x54C;
 CRYTXTA3     = 0x54E;
_CRYTXTA3     = 0x54E;
 CRYTXTA4     = 0x550;
_CRYTXTA4     = 0x550;
 CRYTXTA5     = 0x552;
_CRYTXTA5     = 0x552;
 CRYTXTA6     = 0x554;
_CRYTXTA6     = 0x554;
 CRYTXTA7     = 0x556;
_CRYTXTA7     = 0x556;
 CRYTXTB      = 0x558;
_CRYTXTB      = 0x558;
 CRYTXTB0     = 0x558;
_CRYTXTB0     = 0x558;
 CRYTXTB1     = 0x55A;
_CRYTXTB1     = 0x55A;
 CRYTXTB2     = 0x55C;
_CRYTXTB2     = 0x55C;
 CRYTXTB3     = 0x55E;
_CRYTXTB3     = 0x55E;
 CRYTXTB4     = 0x560;
_CRYTXTB4     = 0x560;
 CRYTXTB5     = 0x562;
_CRYTXTB5     = 0x562;
 CRYTXTB6     = 0x564;
_CRYTXTB6     = 0x564;
 CRYTXTB7     = 0x566;
_CRYTXTB7     = 0x566;
 CRYTXTC      = 0x568;
_CRYTXTC      = 0x568;
 CRYTXTC0     = 0x568;
_CRYTXTC0     = 0x568;
 CRYTXTC1     = 0x56A;
_CRYTXTC1     = 0x56A;
 CRYTXTC2     = 0x56C;
_CRYTXTC2     = 0x56C;
 CRYTXTC3     = 0x56E;
_CRYTXTC3     = 0x56E;
 CRYTXTC4     = 0x570;
_CRYTXTC4     = 0x570;
 CRYTXTC5     = 0x572;
_CRYTXTC5     = 0x572;
 CRYTXTC6     = 0x574;
_CRYTXTC6     = 0x574;
 CRYTXTC7     = 0x576;
_CRYTXTC7     = 0x576;
 U1OTGIR      = 0x578;
_U1OTGIR      = 0x578;
_U1OTGIRbits  = 0x578;
 U1OTGIE      = 0x57A;
_U1OTGIE      = 0x57A;
_U1OTGIEbits  = 0x57A;
 U1OTGSTAT    = 0x57C;
_U1OTGSTAT    = 0x57C;
_U1OTGSTATbits = 0x57C;
 U1OTGCON     = 0x57E;
_U1OTGCON     = 0x57E;
_U1OTGCONbits = 0x57E;
 U1PWRC       = 0x580;
_U1PWRC       = 0x580;
_U1PWRCbits   = 0x580;
 U1IR         = 0x582;
_U1IR         = 0x582;
_U1IRbits     = 0x582;
 U1IE         = 0x584;
_U1IE         = 0x584;
_U1IEbits     = 0x584;
 U1EIR        = 0x586;
_U1EIR        = 0x586;
_U1EIRbits    = 0x586;
 U1EIE        = 0x588;
_U1EIE        = 0x588;
_U1EIEbits    = 0x588;
 U1STAT       = 0x58A;
_U1STAT       = 0x58A;
_U1STATbits   = 0x58A;
 U1CON        = 0x58C;
_U1CON        = 0x58C;
_U1CONbits    = 0x58C;
 U1ADDR       = 0x58E;
_U1ADDR       = 0x58E;
_U1ADDRbits   = 0x58E;
 U1BDTP1      = 0x590;
_U1BDTP1      = 0x590;
_U1BDTP1bits  = 0x590;
 U1FRML       = 0x592;
_U1FRML       = 0x592;
_U1FRMLbits   = 0x592;
 U1FRMH       = 0x594;
_U1FRMH       = 0x594;
_U1FRMHbits   = 0x594;
 U1TOK        = 0x596;
_U1TOK        = 0x596;
_U1TOKbits    = 0x596;
 U1SOF        = 0x598;
_U1SOF        = 0x598;
_U1SOFbits    = 0x598;
 U1BDTP2      = 0x59A;
_U1BDTP2      = 0x59A;
_U1BDTP2bits  = 0x59A;
 U1BDTP3      = 0x59C;
_U1BDTP3      = 0x59C;
_U1BDTP3bits  = 0x59C;
 U1CNFG1      = 0x59E;
_U1CNFG1      = 0x59E;
_U1CNFG1bits  = 0x59E;
 U1CNFG2      = 0x5A0;
_U1CNFG2      = 0x5A0;
_U1CNFG2bits  = 0x5A0;
 U1EP0        = 0x5A2;
_U1EP0        = 0x5A2;
_U1EP0bits    = 0x5A2;
 U1EP1        = 0x5A4;
_U1EP1        = 0x5A4;
_U1EP1bits    = 0x5A4;
 U1EP2        = 0x5A6;
_U1EP2        = 0x5A6;
_U1EP2bits    = 0x5A6;
 U1EP3        = 0x5A8;
_U1EP3        = 0x5A8;
_U1EP3bits    = 0x5A8;
 U1EP4        = 0x5AA;
_U1EP4        = 0x5AA;
_U1EP4bits    = 0x5AA;
 U1EP5        = 0x5AC;
_U1EP5        = 0x5AC;
_U1EP5bits    = 0x5AC;
 U1EP6        = 0x5AE;
_U1EP6        = 0x5AE;
_U1EP6bits    = 0x5AE;
 U1EP7        = 0x5B0;
_U1EP7        = 0x5B0;
_U1EP7bits    = 0x5B0;
 U1EP8        = 0x5B2;
_U1EP8        = 0x5B2;
_U1EP8bits    = 0x5B2;
 U1EP9        = 0x5B4;
_U1EP9        = 0x5B4;
_U1EP9bits    = 0x5B4;
 U1EP10       = 0x5B6;
_U1EP10       = 0x5B6;
_U1EP10bits   = 0x5B6;
 U1EP11       = 0x5B8;
_U1EP11       = 0x5B8;
_U1EP11bits   = 0x5B8;
 U1EP12       = 0x5BA;
_U1EP12       = 0x5BA;
_U1EP12bits   = 0x5BA;
 U1EP13       = 0x5BC;
_U1EP13       = 0x5BC;
_U1EP13bits   = 0x5BC;
 U1EP14       = 0x5BE;
_U1EP14       = 0x5BE;
_U1EP14bits   = 0x5BE;
 U1EP15       = 0x5C0;
_U1EP15       = 0x5C0;
_U1EP15bits   = 0x5C0;
 LCDCON       = 0x5C2;
_LCDCON       = 0x5C2;
_LCDCONbits   = 0x5C2;
 LCDREF       = 0x5C4;
_LCDREF       = 0x5C4;
_LCDREFbits   = 0x5C4;
 LCDPS        = 0x5C6;
_LCDPS        = 0x5C6;
_LCDPSbits    = 0x5C6;
 LCDDATA0     = 0x5C8;
_LCDDATA0     = 0x5C8;
_LCDDATA0bits = 0x5C8;
 LCDDATA1     = 0x5CA;
_LCDDATA1     = 0x5CA;
_LCDDATA1bits = 0x5CA;
 LCDDATA2     = 0x5CC;
_LCDDATA2     = 0x5CC;
_LCDDATA2bits = 0x5CC;
 LCDDATA3     = 0x5CE;
_LCDDATA3     = 0x5CE;
_LCDDATA3bits = 0x5CE;
 LCDDATA4     = 0x5D0;
_LCDDATA4     = 0x5D0;
_LCDDATA4bits = 0x5D0;
 LCDDATA5     = 0x5D2;
_LCDDATA5     = 0x5D2;
_LCDDATA5bits = 0x5D2;
 LCDDATA6     = 0x5D4;
_LCDDATA6     = 0x5D4;
_LCDDATA6bits = 0x5D4;
 LCDDATA7     = 0x5D6;
_LCDDATA7     = 0x5D6;
_LCDDATA7bits = 0x5D6;
 LCDDATA8     = 0x5D8;
_LCDDATA8     = 0x5D8;
_LCDDATA8bits = 0x5D8;
 LCDDATA9     = 0x5DA;
_LCDDATA9     = 0x5DA;
_LCDDATA9bits = 0x5DA;
 LCDDATA10    = 0x5DC;
_LCDDATA10    = 0x5DC;
_LCDDATA10bits = 0x5DC;
 LCDDATA11    = 0x5DE;
_LCDDATA11    = 0x5DE;
_LCDDATA11bits = 0x5DE;
 LCDDATA12    = 0x5E0;
_LCDDATA12    = 0x5E0;
_LCDDATA12bits = 0x5E0;
 LCDDATA13    = 0x5E2;
_LCDDATA13    = 0x5E2;
_LCDDATA13bits = 0x5E2;
 LCDDATA14    = 0x5E4;
_LCDDATA14    = 0x5E4;
_LCDDATA14bits = 0x5E4;
 LCDDATA15    = 0x5E6;
_LCDDATA15    = 0x5E6;
_LCDDATA15bits = 0x5E6;
 LCDDATA16    = 0x5E8;
_LCDDATA16    = 0x5E8;
_LCDDATA16bits = 0x5E8;
 LCDDATA17    = 0x5EA;
_LCDDATA17    = 0x5EA;
_LCDDATA17bits = 0x5EA;
 LCDDATA18    = 0x5EC;
_LCDDATA18    = 0x5EC;
_LCDDATA18bits = 0x5EC;
 LCDDATA19    = 0x5EE;
_LCDDATA19    = 0x5EE;
_LCDDATA19bits = 0x5EE;
 LCDDATA20    = 0x5F0;
_LCDDATA20    = 0x5F0;
_LCDDATA20bits = 0x5F0;
 LCDDATA21    = 0x5F2;
_LCDDATA21    = 0x5F2;
_LCDDATA21bits = 0x5F2;
 LCDDATA22    = 0x5F4;
_LCDDATA22    = 0x5F4;
_LCDDATA22bits = 0x5F4;
 LCDDATA23    = 0x5F6;
_LCDDATA23    = 0x5F6;
_LCDDATA23bits = 0x5F6;
 LCDDATA24    = 0x5F8;
_LCDDATA24    = 0x5F8;
_LCDDATA24bits = 0x5F8;
 LCDDATA25    = 0x5FA;
_LCDDATA25    = 0x5FA;
_LCDDATA25bits = 0x5FA;
 LCDDATA26    = 0x5FC;
_LCDDATA26    = 0x5FC;
_LCDDATA26bits = 0x5FC;
 LCDDATA27    = 0x5FE;
_LCDDATA27    = 0x5FE;
_LCDDATA27bits = 0x5FE;
 LCDDATA28    = 0x600;
_LCDDATA28    = 0x600;
_LCDDATA28bits = 0x600;
 LCDDATA29    = 0x602;
_LCDDATA29    = 0x602;
_LCDDATA29bits = 0x602;
 LCDDATA30    = 0x604;
_LCDDATA30    = 0x604;
_LCDDATA30bits = 0x604;
 LCDDATA31    = 0x606;
_LCDDATA31    = 0x606;
_LCDDATA31bits = 0x606;
 LCDSE0       = 0x608;
_LCDSE0       = 0x608;
_LCDSE0bits   = 0x608;
 LCDSE1       = 0x60A;
_LCDSE1       = 0x60A;
_LCDSE1bits   = 0x60A;
 LCDSE2       = 0x60C;
_LCDSE2       = 0x60C;
_LCDSE2bits   = 0x60C;
 LCDSE3       = 0x60E;
_LCDSE3       = 0x60E;
_LCDSE3bits   = 0x60E;
 LCDREG       = 0x610;
_LCDREG       = 0x610;
_LCDREGbits   = 0x610;
 PADCON       = 0x65A;
_PADCON       = 0x65A;
_PADCONbits   = 0x65A;
 IOCSTAT      = 0x65C;
_IOCSTAT      = 0x65C;
_IOCSTATbits  = 0x65C;
 TRISA        = 0x65E;
_TRISA        = 0x65E;
_TRISAbits    = 0x65E;
 PORTA        = 0x660;
_PORTA        = 0x660;
_PORTAbits    = 0x660;
 LATA         = 0x662;
_LATA         = 0x662;
_LATAbits     = 0x662;
 ODCA         = 0x664;
_ODCA         = 0x664;
_ODCAbits     = 0x664;
 ANSA         = 0x666;
_ANSA         = 0x666;
_ANSAbits     = 0x666;
 ANSELA       = 0x666;
_ANSELA       = 0x666;
_ANSELAbits   = 0x666;
 IOCPA        = 0x668;
_IOCPA        = 0x668;
_IOCPAbits    = 0x668;
 IOCNA        = 0x66A;
_IOCNA        = 0x66A;
_IOCNAbits    = 0x66A;
 IOCFA        = 0x66C;
_IOCFA        = 0x66C;
_IOCFAbits    = 0x66C;
 CNPUA        = 0x66E;
_CNPUA        = 0x66E;
_CNPUAbits    = 0x66E;
 IOCPUA       = 0x66E;
_IOCPUA       = 0x66E;
_IOCPUAbits   = 0x66E;
 CNPDA        = 0x670;
_CNPDA        = 0x670;
_CNPDAbits    = 0x670;
 IOCPDA       = 0x670;
_IOCPDA       = 0x670;
_IOCPDAbits   = 0x670;
 TRISB        = 0x672;
_TRISB        = 0x672;
_TRISBbits    = 0x672;
 PORTB        = 0x674;
_PORTB        = 0x674;
_PORTBbits    = 0x674;
 LATB         = 0x676;
_LATB         = 0x676;
_LATBbits     = 0x676;
 ODCB         = 0x678;
_ODCB         = 0x678;
_ODCBbits     = 0x678;
 ANSB         = 0x67A;
_ANSB         = 0x67A;
_ANSBbits     = 0x67A;
 ANSELB       = 0x67A;
_ANSELB       = 0x67A;
_ANSELBbits   = 0x67A;
 IOCPB        = 0x67C;
_IOCPB        = 0x67C;
_IOCPBbits    = 0x67C;
 IOCNB        = 0x67E;
_IOCNB        = 0x67E;
_IOCNBbits    = 0x67E;
 IOCFB        = 0x680;
_IOCFB        = 0x680;
_IOCFBbits    = 0x680;
 CNPUB        = 0x682;
_CNPUB        = 0x682;
_CNPUBbits    = 0x682;
 IOCPUB       = 0x682;
_IOCPUB       = 0x682;
_IOCPUBbits   = 0x682;
 CNPDB        = 0x684;
_CNPDB        = 0x684;
_CNPDBbits    = 0x684;
 IOCPDB       = 0x684;
_IOCPDB       = 0x684;
_IOCPDBbits   = 0x684;
 TRISC        = 0x686;
_TRISC        = 0x686;
_TRISCbits    = 0x686;
 PORTC        = 0x688;
_PORTC        = 0x688;
_PORTCbits    = 0x688;
 LATC         = 0x68A;
_LATC         = 0x68A;
_LATCbits     = 0x68A;
 ODCC         = 0x68C;
_ODCC         = 0x68C;
_ODCCbits     = 0x68C;
 ANSC         = 0x68E;
_ANSC         = 0x68E;
 ANSELC       = 0x68E;
_ANSELC       = 0x68E;
 IOCPC        = 0x690;
_IOCPC        = 0x690;
_IOCPCbits    = 0x690;
 IOCNC        = 0x692;
_IOCNC        = 0x692;
_IOCNCbits    = 0x692;
 IOCFC        = 0x694;
_IOCFC        = 0x694;
_IOCFCbits    = 0x694;
 CNPUC        = 0x696;
_CNPUC        = 0x696;
_CNPUCbits    = 0x696;
 IOCPUC       = 0x696;
_IOCPUC       = 0x696;
_IOCPUCbits   = 0x696;
 CNPDC        = 0x698;
_CNPDC        = 0x698;
_CNPDCbits    = 0x698;
 IOCPDC       = 0x698;
_IOCPDC       = 0x698;
_IOCPDCbits   = 0x698;
 TRISD        = 0x69A;
_TRISD        = 0x69A;
_TRISDbits    = 0x69A;
 PORTD        = 0x69C;
_PORTD        = 0x69C;
_PORTDbits    = 0x69C;
 LATD         = 0x69E;
_LATD         = 0x69E;
_LATDbits     = 0x69E;
 ODCD         = 0x6A0;
_ODCD         = 0x6A0;
_ODCDbits     = 0x6A0;
 ANSD         = 0x6A2;
_ANSD         = 0x6A2;
_ANSDbits     = 0x6A2;
 ANSELD       = 0x6A2;
_ANSELD       = 0x6A2;
_ANSELDbits   = 0x6A2;
 IOCPD        = 0x6A4;
_IOCPD        = 0x6A4;
_IOCPDbits    = 0x6A4;
 IOCND        = 0x6A6;
_IOCND        = 0x6A6;
_IOCNDbits    = 0x6A6;
 IOCFD        = 0x6A8;
_IOCFD        = 0x6A8;
_IOCFDbits    = 0x6A8;
 CNPUD        = 0x6AA;
_CNPUD        = 0x6AA;
_CNPUDbits    = 0x6AA;
 IOCPUD       = 0x6AA;
_IOCPUD       = 0x6AA;
_IOCPUDbits   = 0x6AA;
 CNPDD        = 0x6AC;
_CNPDD        = 0x6AC;
_CNPDDbits    = 0x6AC;
 IOCPDD       = 0x6AC;
_IOCPDD       = 0x6AC;
_IOCPDDbits   = 0x6AC;
 TRISE        = 0x6AE;
_TRISE        = 0x6AE;
_TRISEbits    = 0x6AE;
 PORTE        = 0x6B0;
_PORTE        = 0x6B0;
_PORTEbits    = 0x6B0;
 LATE         = 0x6B2;
_LATE         = 0x6B2;
_LATEbits     = 0x6B2;
 ODCE         = 0x6B4;
_ODCE         = 0x6B4;
_ODCEbits     = 0x6B4;
 ANSE         = 0x6B6;
_ANSE         = 0x6B6;
_ANSEbits     = 0x6B6;
 ANSELE       = 0x6B6;
_ANSELE       = 0x6B6;
_ANSELEbits   = 0x6B6;
 IOCPE        = 0x6B8;
_IOCPE        = 0x6B8;
_IOCPEbits    = 0x6B8;
 IOCNE        = 0x6BA;
_IOCNE        = 0x6BA;
_IOCNEbits    = 0x6BA;
 IOCFE        = 0x6BC;
_IOCFE        = 0x6BC;
_IOCFEbits    = 0x6BC;
 CNPUE        = 0x6BE;
_CNPUE        = 0x6BE;
_CNPUEbits    = 0x6BE;
 IOCPUE       = 0x6BE;
_IOCPUE       = 0x6BE;
_IOCPUEbits   = 0x6BE;
 CNPDE        = 0x6C0;
_CNPDE        = 0x6C0;
_CNPDEbits    = 0x6C0;
 IOCPDE       = 0x6C0;
_IOCPDE       = 0x6C0;
_IOCPDEbits   = 0x6C0;
 TRISF        = 0x6C2;
_TRISF        = 0x6C2;
_TRISFbits    = 0x6C2;
 PORTF        = 0x6C4;
_PORTF        = 0x6C4;
_PORTFbits    = 0x6C4;
 LATF         = 0x6C6;
_LATF         = 0x6C6;
_LATFbits     = 0x6C6;
 ODCF         = 0x6C8;
_ODCF         = 0x6C8;
_ODCFbits     = 0x6C8;
 ANSELF       = 0x6CA;
_ANSELF       = 0x6CA;
_ANSELFbits   = 0x6CA;
 ANSF         = 0x6CA;
_ANSF         = 0x6CA;
_ANSFbits     = 0x6CA;
 IOCPF        = 0x6CC;
_IOCPF        = 0x6CC;
_IOCPFbits    = 0x6CC;
 IOCNF        = 0x6CE;
_IOCNF        = 0x6CE;
_IOCNFbits    = 0x6CE;
 IOCFF        = 0x6D0;
_IOCFF        = 0x6D0;
_IOCFFbits    = 0x6D0;
 CNPUF        = 0x6D2;
_CNPUF        = 0x6D2;
_CNPUFbits    = 0x6D2;
 IOCPUF       = 0x6D2;
_IOCPUF       = 0x6D2;
_IOCPUFbits   = 0x6D2;
 CNPDF        = 0x6D4;
_CNPDF        = 0x6D4;
_CNPDFbits    = 0x6D4;
 IOCPDF       = 0x6D4;
_IOCPDF       = 0x6D4;
_IOCPDFbits   = 0x6D4;
 TRISG        = 0x6D6;
_TRISG        = 0x6D6;
_TRISGbits    = 0x6D6;
 PORTG        = 0x6D8;
_PORTG        = 0x6D8;
_PORTGbits    = 0x6D8;
 LATG         = 0x6DA;
_LATG         = 0x6DA;
_LATGbits     = 0x6DA;
 ODCG         = 0x6DC;
_ODCG         = 0x6DC;
_ODCGbits     = 0x6DC;
 ANSELG       = 0x6DE;
_ANSELG       = 0x6DE;
_ANSELGbits   = 0x6DE;
 ANSG         = 0x6DE;
_ANSG         = 0x6DE;
_ANSGbits     = 0x6DE;
 IOCPG        = 0x6E0;
_IOCPG        = 0x6E0;
_IOCPGbits    = 0x6E0;
 IOCNG        = 0x6E2;
_IOCNG        = 0x6E2;
_IOCNGbits    = 0x6E2;
 IOCFG        = 0x6E4;
_IOCFG        = 0x6E4;
_IOCFGbits    = 0x6E4;
 CNPUG        = 0x6E6;
_CNPUG        = 0x6E6;
_CNPUGbits    = 0x6E6;
 IOCPUG       = 0x6E6;
_IOCPUG       = 0x6E6;
_IOCPUGbits   = 0x6E6;
 CNPDG        = 0x6E8;
_CNPDG        = 0x6E8;
_CNPDGbits    = 0x6E8;
 IOCPDG       = 0x6E8;
_IOCPDG       = 0x6E8;
_IOCPDGbits   = 0x6E8;
 TRISH        = 0x6EA;
_TRISH        = 0x6EA;
_TRISHbits    = 0x6EA;
 PORTH        = 0x6EC;
_PORTH        = 0x6EC;
_PORTHbits    = 0x6EC;
 LATH         = 0x6EE;
_LATH         = 0x6EE;
_LATHbits     = 0x6EE;
 ODCH         = 0x6F0;
_ODCH         = 0x6F0;
_ODCHbits     = 0x6F0;
 ANSELH       = 0x6F2;
_ANSELH       = 0x6F2;
_ANSELHbits   = 0x6F2;
 ANSH         = 0x6F2;
_ANSH         = 0x6F2;
_ANSHbits     = 0x6F2;
 IOCPH        = 0x6F4;
_IOCPH        = 0x6F4;
_IOCPHbits    = 0x6F4;
 IOCNH        = 0x6F6;
_IOCNH        = 0x6F6;
_IOCNHbits    = 0x6F6;
 IOCFH        = 0x6F8;
_IOCFH        = 0x6F8;
_IOCFHbits    = 0x6F8;
 CNPUH        = 0x6FA;
_CNPUH        = 0x6FA;
_CNPUHbits    = 0x6FA;
 IOCPUH       = 0x6FA;
_IOCPUH       = 0x6FA;
_IOCPUHbits   = 0x6FA;
 CNPDH        = 0x6FC;
_CNPDH        = 0x6FC;
_CNPDHbits    = 0x6FC;
 IOCPDH       = 0x6FC;
_IOCPDH       = 0x6FC;
_IOCPDHbits   = 0x6FC;
 TRISJ        = 0x6FE;
_TRISJ        = 0x6FE;
_TRISJbits    = 0x6FE;
 PORTJ        = 0x700;
_PORTJ        = 0x700;
_PORTJbits    = 0x700;
 LATJ         = 0x702;
_LATJ         = 0x702;
_LATJbits     = 0x702;
 ODCJ         = 0x704;
_ODCJ         = 0x704;
_ODCJbits     = 0x704;
 ANSELJ       = 0x706;
_ANSELJ       = 0x706;
 ANSJ         = 0x706;
_ANSJ         = 0x706;
 IOCPJ        = 0x708;
_IOCPJ        = 0x708;
_IOCPJbits    = 0x708;
 IOCNJ        = 0x70A;
_IOCNJ        = 0x70A;
_IOCNJbits    = 0x70A;
 IOCFJ        = 0x70C;
_IOCFJ        = 0x70C;
_IOCFJbits    = 0x70C;
 CNPUJ        = 0x70E;
_CNPUJ        = 0x70E;
_CNPUJbits    = 0x70E;
 IOCPUJ       = 0x70E;
_IOCPUJ       = 0x70E;
_IOCPUJbits   = 0x70E;
 CNPDJ        = 0x710;
_CNPDJ        = 0x710;
_CNPDJbits    = 0x710;
 IOCPDJ       = 0x710;
_IOCPDJ       = 0x710;
_IOCPDJbits   = 0x710;
 ADC1BUF0     = 0x712;
_ADC1BUF0     = 0x712;
 ADC1BUF1     = 0x714;
_ADC1BUF1     = 0x714;
 ADC1BUF2     = 0x716;
_ADC1BUF2     = 0x716;
 ADC1BUF3     = 0x718;
_ADC1BUF3     = 0x718;
 ADC1BUF4     = 0x71A;
_ADC1BUF4     = 0x71A;
 ADC1BUF5     = 0x71C;
_ADC1BUF5     = 0x71C;
 ADC1BUF6     = 0x71E;
_ADC1BUF6     = 0x71E;
 ADC1BUF7     = 0x720;
_ADC1BUF7     = 0x720;
 ADC1BUF8     = 0x722;
_ADC1BUF8     = 0x722;
 ADC1BUF9     = 0x724;
_ADC1BUF9     = 0x724;
 ADC1BUF10    = 0x726;
_ADC1BUF10    = 0x726;
 ADC1BUF11    = 0x728;
_ADC1BUF11    = 0x728;
 ADC1BUF12    = 0x72A;
_ADC1BUF12    = 0x72A;
 ADC1BUF13    = 0x72C;
_ADC1BUF13    = 0x72C;
 ADC1BUF14    = 0x72E;
_ADC1BUF14    = 0x72E;
 ADC1BUF15    = 0x730;
_ADC1BUF15    = 0x730;
 ADC1BUF16    = 0x732;
_ADC1BUF16    = 0x732;
 ADC1BUF17    = 0x734;
_ADC1BUF17    = 0x734;
 ADC1BUF18    = 0x736;
_ADC1BUF18    = 0x736;
 ADC1BUF19    = 0x738;
_ADC1BUF19    = 0x738;
 ADC1BUF20    = 0x73A;
_ADC1BUF20    = 0x73A;
 ADC1BUF21    = 0x73C;
_ADC1BUF21    = 0x73C;
 ADC1BUF22    = 0x73E;
_ADC1BUF22    = 0x73E;
 ADC1BUF23    = 0x740;
_ADC1BUF23    = 0x740;
 ADC1BUF24    = 0x742;
_ADC1BUF24    = 0x742;
 ADC1BUF25    = 0x744;
_ADC1BUF25    = 0x744;
 AD1CON1      = 0x746;
_AD1CON1      = 0x746;
_AD1CON1bits  = 0x746;
 AD1CON2      = 0x748;
_AD1CON2      = 0x748;
_AD1CON2bits  = 0x748;
 AD1CON3      = 0x74A;
_AD1CON3      = 0x74A;
_AD1CON3bits  = 0x74A;
 AD1CHS       = 0x74C;
_AD1CHS       = 0x74C;
_AD1CHSbits   = 0x74C;
 AD1CHS0      = 0x74C;
_AD1CHS0      = 0x74C;
_AD1CHS0bits  = 0x74C;
 AD1CSSH      = 0x74E;
_AD1CSSH      = 0x74E;
_AD1CSSHbits  = 0x74E;
 AD1CSSL      = 0x750;
_AD1CSSL      = 0x750;
_AD1CSSLbits  = 0x750;
 AD1CON4      = 0x752;
_AD1CON4      = 0x752;
_AD1CON4bits  = 0x752;
 AD1CON5      = 0x754;
_AD1CON5      = 0x754;
_AD1CON5bits  = 0x754;
 AD1CHITH     = 0x756;
_AD1CHITH     = 0x756;
_AD1CHITHbits = 0x756;
 AD1CHITL     = 0x758;
_AD1CHITL     = 0x758;
_AD1CHITLbits = 0x758;
 AD1CTMENH    = 0x75A;
_AD1CTMENH    = 0x75A;
_AD1CTMENHbits = 0x75A;
 AD1CTMENL    = 0x75C;
_AD1CTMENL    = 0x75C;
_AD1CTMENLbits = 0x75C;
 AD1DMBUF     = 0x75E;
_AD1DMBUF     = 0x75E;
_AD1DMBUFbits = 0x75E;
 AD1RESDMA    = 0x75E;
_AD1RESDMA    = 0x75E;
_AD1RESDMAbits = 0x75E;
 NVMCON       = 0x760;
_NVMCON       = 0x760;
_NVMCONbits   = 0x760;
 NVMADR       = 0x762;
_NVMADR       = 0x762;
_NVMADRbits   = 0x762;
 NVMADRL      = 0x762;
_NVMADRL      = 0x762;
_NVMADRLbits  = 0x762;
 NVMADRH      = 0x764;
_NVMADRH      = 0x764;
_NVMADRHbits  = 0x764;
 NVMADRU      = 0x764;
_NVMADRU      = 0x764;
_NVMADRUbits  = 0x764;
 NVMKEY       = 0x766;
_NVMKEY       = 0x766;
 NVMSRCADDR   = 0x768;
_NVMSRCADDR   = 0x768;
_NVMSRCADDRbits = 0x768;
 NVMSRCADR    = 0x768;
_NVMSRCADR    = 0x768;
_NVMSRCADRbits = 0x768;
 NVMSRCADRL   = 0x768;
_NVMSRCADRL   = 0x768;
_NVMSRCADRLbits = 0x768;
 NVMSRCADRH   = 0x76A;
_NVMSRCADRH   = 0x76A;
_NVMSRCADRHbits = 0x76A;
 JDATAL       = 0x77C;
_JDATAL       = 0x77C;
 JDATAH       = 0x77E;
_JDATAH       = 0x77E;
 RPINR0       = 0x790;
_RPINR0       = 0x790;
_RPINR0bits   = 0x790;
 RPINR1       = 0x792;
_RPINR1       = 0x792;
_RPINR1bits   = 0x792;
 RPINR2       = 0x794;
_RPINR2       = 0x794;
_RPINR2bits   = 0x794;
 RPINR3       = 0x796;
_RPINR3       = 0x796;
_RPINR3bits   = 0x796;
 RPINR4       = 0x798;
_RPINR4       = 0x798;
_RPINR4bits   = 0x798;
 RPINR7       = 0x79E;
_RPINR7       = 0x79E;
_RPINR7bits   = 0x79E;
 RPINR8       = 0x7A0;
_RPINR8       = 0x7A0;
_RPINR8bits   = 0x7A0;
 RPINR11      = 0x7A6;
_RPINR11      = 0x7A6;
_RPINR11bits  = 0x7A6;
 RPINR12      = 0x7A8;
_RPINR12      = 0x7A8;
_RPINR12bits  = 0x7A8;
 RPINR17      = 0x7B2;
_RPINR17      = 0x7B2;
_RPINR17bits  = 0x7B2;
 RPINR18      = 0x7B4;
_RPINR18      = 0x7B4;
_RPINR18bits  = 0x7B4;
 RPINR19      = 0x7B6;
_RPINR19      = 0x7B6;
_RPINR19bits  = 0x7B6;
 RPINR20      = 0x7B8;
_RPINR20      = 0x7B8;
_RPINR20bits  = 0x7B8;
 RPINR21      = 0x7BA;
_RPINR21      = 0x7BA;
_RPINR21bits  = 0x7BA;
 RPINR22      = 0x7BC;
_RPINR22      = 0x7BC;
_RPINR22bits  = 0x7BC;
 RPINR23      = 0x7BE;
_RPINR23      = 0x7BE;
_RPINR23bits  = 0x7BE;
 RPINR25      = 0x7C2;
_RPINR25      = 0x7C2;
_RPINR25bits  = 0x7C2;
 RPINR27      = 0x7C6;
_RPINR27      = 0x7C6;
_RPINR27bits  = 0x7C6;
 RPINR28      = 0x7C8;
_RPINR28      = 0x7C8;
_RPINR28bits  = 0x7C8;
 RPINR29      = 0x7CA;
_RPINR29      = 0x7CA;
_RPINR29bits  = 0x7CA;
 RPOR0        = 0x7D4;
_RPOR0        = 0x7D4;
_RPOR0bits    = 0x7D4;
 RPOR1        = 0x7D6;
_RPOR1        = 0x7D6;
_RPOR1bits    = 0x7D6;
 RPOR2        = 0x7D8;
_RPOR2        = 0x7D8;
_RPOR2bits    = 0x7D8;
 RPOR3        = 0x7DA;
_RPOR3        = 0x7DA;
_RPOR3bits    = 0x7DA;
 RPOR4        = 0x7DC;
_RPOR4        = 0x7DC;
_RPOR4bits    = 0x7DC;
 RPOR5        = 0x7DE;
_RPOR5        = 0x7DE;
_RPOR5bits    = 0x7DE;
 RPOR6        = 0x7E0;
_RPOR6        = 0x7E0;
_RPOR6bits    = 0x7E0;
 RPOR7        = 0x7E2;
_RPOR7        = 0x7E2;
_RPOR7bits    = 0x7E2;
 RPOR8        = 0x7E4;
_RPOR8        = 0x7E4;
_RPOR8bits    = 0x7E4;
 RPOR9        = 0x7E6;
_RPOR9        = 0x7E6;
_RPOR9bits    = 0x7E6;
 RPOR10       = 0x7E8;
_RPOR10       = 0x7E8;
_RPOR10bits   = 0x7E8;
 RPOR11       = 0x7EA;
_RPOR11       = 0x7EA;
_RPOR11bits   = 0x7EA;
 RPOR12       = 0x7EC;
_RPOR12       = 0x7EC;
_RPOR12bits   = 0x7EC;
 RPOR13       = 0x7EE;
_RPOR13       = 0x7EE;
_RPOR13bits   = 0x7EE;
 RPOR14       = 0x7F0;
_RPOR14       = 0x7F0;
_RPOR14bits   = 0x7F0;
 RPOR15       = 0x7F2;
_RPOR15       = 0x7F2;
_RPOR15bits   = 0x7F2;
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 IC1          = 0x204;
_IC1          = 0x204;
 IC2          = 0x20C;
_IC2          = 0x20C;
 IC3          = 0x214;
_IC3          = 0x214;
 IC4          = 0x21C;
_IC4          = 0x21C;
 IC5          = 0x224;
_IC5          = 0x224;
 IC6          = 0x22C;
_IC6          = 0x22C;
 OC1          = 0x234;
_OC1          = 0x234;
 OC2          = 0x23E;
_OC2          = 0x23E;
 OC3          = 0x248;
_OC3          = 0x248;
 OC4          = 0x252;
_OC4          = 0x252;
 OC5          = 0x25C;
_OC5          = 0x25C;
 OC6          = 0x266;
_OC6          = 0x266;
 SPI1         = 0x3FE;
_SPI1         = 0x3FE;
 SPI2         = 0x41A;
_SPI2         = 0x41A;
 SPI3         = 0x436;
_SPI3         = 0x436;
 SPI4         = 0x452;
_SPI4         = 0x452;
 UART1        = 0x398;
_UART1        = 0x398;
 UART2        = 0x3AE;
_UART2        = 0x3AE;
 UART3        = 0x3C4;
_UART3        = 0x3C4;
 UART4        = 0x3D0;
_UART4        = 0x3D0;
 UART5        = 0x3DC;
_UART5        = 0x3DC;
 UART6        = 0x3E8;
_UART6        = 0x3E8;
