/*
 * Linker script for PIC33EP128GS705
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


OUTPUT_ARCH("33EP128GS705")
CRT0_STARTUP(crt0_extendedep.o)
CRT1_STARTUP(crt1_extendedep.o)
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

OPTIONAL(-lp33EP128GS705)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x1000,        LENGTH = 0x2000

/*
 * Memory regions that are always present
 */

  pga1cal        : ORIGIN = 0x800E48,      LENGTH = 0x2
  pga2cal        : ORIGIN = 0x800E4C,      LENGTH = 0x2
  isrccal        : ORIGIN = 0x800E78,      LENGTH = 0x2
  FBOOT          : ORIGIN = 0x801000,      LENGTH = 0x2

/*
 * Single panel memory regions
 */

#ifndef __DUAL_PARTITION
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0x1FC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0x15580
  FSEC           : ORIGIN = 0x15780,       LENGTH = 0x2
  FBSLIM         : ORIGIN = 0x15790,       LENGTH = 0x2
  FSIGN          : ORIGIN = 0x15794,       LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0x15798,       LENGTH = 0x2
  FOSC           : ORIGIN = 0x1579C,       LENGTH = 0x2
  FWDT           : ORIGIN = 0x157A0,       LENGTH = 0x2
  FPOR           : ORIGIN = 0x157A4,       LENGTH = 0x2
  FICD           : ORIGIN = 0x157A8,       LENGTH = 0x2
  FDEVOPT        : ORIGIN = 0x157AC,       LENGTH = 0x2
  FALTREG        : ORIGIN = 0x157B0,       LENGTH = 0x2
  FBTSEQ         : ORIGIN = 0x157FC,       LENGTH = 0x2
#endif


/*
 * Dual panel memory regions
 */

#ifdef __DUAL_PARTITION
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0x1FC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0xA980
  FSEC           : ORIGIN = 0xAB80,        LENGTH = 0x2
  FBSLIM         : ORIGIN = 0xAB90,        LENGTH = 0x2
  FSIGN          : ORIGIN = 0xAB94,        LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0xAB98,        LENGTH = 0x2
  FOSC           : ORIGIN = 0xAB9C,        LENGTH = 0x2
  FWDT           : ORIGIN = 0xABA0,        LENGTH = 0x2
  FPOR           : ORIGIN = 0xABA4,        LENGTH = 0x2
  FICD           : ORIGIN = 0xABA8,        LENGTH = 0x2
  FDEVOPT        : ORIGIN = 0xABAC,        LENGTH = 0x2
  FALTREG        : ORIGIN = 0xABB0,        LENGTH = 0x2
  FBTSEQ         : ORIGIN = 0xABFC,        LENGTH = 0x2
#endif

}


/*
 * Configuration words that are always present
 */

__FBOOT = 0x801000;

/*
 * Single panel configuration words
 */

#ifndef __DUAL_PARTITION
__FSEC = 0x15780;
__FBSLIM = 0x15790;
__FSIGN = 0x15794;
__FOSCSEL = 0x15798;
__FOSC = 0x1579C;
__FWDT = 0x157A0;
__FPOR = 0x157A4;
__FICD = 0x157A8;
__FDEVOPT = 0x157AC;
__FALTREG = 0x157B0;
__FBTSEQ = 0x157FC;
#endif


/*
 * Dual panel configuration words
 */

#ifdef __DUAL_PARTITION
__FLASH_PARTITION = __DUAL_PARTITION;
__FSEC = 0xAB80;
__FBSLIM = 0xAB90;
__FSIGN = 0xAB94;
__FOSCSEL = 0xAB98;
__FOSC = 0xAB9C;
__FWDT = 0xABA0;
__FPOR = 0xABA4;
__FICD = 0xABA8;
__FDEVOPT = 0xABAC;
__FALTREG = 0xABB0;
__FBTSEQ = 0xABFC;
#endif



/*
 * Single panel memory regions
 */

#ifndef __DUAL_PARTITION
__CODE_BASE = 0x200;
__CODE_LENGTH = 0x15580;
__IVT_BASE  = 0x4;
#endif


/*
 * Dual panel memory regions
 */

#ifdef __DUAL_PARTITION
__NO_HANDLES = 1;          /* Suppress handles on this device  */
__CODE_BASE = 0x200;
__CODE_LENGTH = 0xA980;
__IVT_BASE  = 0x4;
#endif

__DATA_BASE = 0x1000;
__DATA_LENGTH = 0x2000;
__YDATA_BASE = 0x2000;
__YDATA_END = 0x3000;


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
  __FDEVOPT :
  { KEEP (*(__FDEVOPT.sec*))    } >FDEVOPT
  __FALTREG :
  { KEEP (*(__FALTREG.sec*))    } >FALTREG
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
  __FDEVOPT :
  { KEEP (*(__FDEVOPT.sec*))    } >FDEVOPT
  __FALTREG :
  { KEEP (*(__FALTREG.sec*))    } >FALTREG
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
  ** must be loaded at data address 0x1000.
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
    LONG( DEFINED(__HardTrapError)    ? ABSOLUTE(__HardTrapError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__StackError)    ? ABSOLUTE(__StackError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MathError)    ? ABSOLUTE(__MathError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMACError)    ? ABSOLUTE(__DMACError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SoftTrapError)    ? ABSOLUTE(__SoftTrapError)    :
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
    LONG( DEFINED(__SPI1TXInterrupt)    ? ABSOLUTE(__SPI1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1RXInterrupt)    ? ABSOLUTE(__SPI1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1RXInterrupt)    ? ABSOLUTE(__U1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1TXInterrupt)    ? ABSOLUTE(__U1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__AD1Interrupt)    ? ABSOLUTE(__AD1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA1Interrupt)    ? ABSOLUTE(__DMA1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__NVMInterrupt)    ? ABSOLUTE(__NVMInterrupt)    :
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
    LONG( DEFINED(__SPI2TXInterrupt)    ? ABSOLUTE(__SPI2TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2RXInterrupt)    ? ABSOLUTE(__SPI2RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1RxInterrupt)    ? ABSOLUTE(__C1RxInterrupt)    :
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
    LONG( DEFINED(__Interrupt53)    ? ABSOLUTE(__Interrupt53)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT4Interrupt)    ? ABSOLUTE(__INT4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2RxInterrupt)    ? ABSOLUTE(__C2RxInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2Interrupt)    ? ABSOLUTE(__C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWMSpEventMatchInterrupt)    ? ABSOLUTE(__PWMSpEventMatchInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt58)    ? ABSOLUTE(__Interrupt58)    :
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
    LONG( DEFINED(__C1TxInterrupt)    ? ABSOLUTE(__C1TxInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2TxInterrupt)    ? ABSOLUTE(__C2TxInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt72)    ? ABSOLUTE(__Interrupt72)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWMSecSpEventMatchInterrupt)    ? ABSOLUTE(__PWMSecSpEventMatchInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt74)    ? ABSOLUTE(__Interrupt74)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt75)    ? ABSOLUTE(__Interrupt75)    :
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
    LONG( DEFINED(__SPI3TXInterrupt)    ? ABSOLUTE(__SPI3TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI3RXInterrupt)    ? ABSOLUTE(__SPI3RXInterrupt)    :
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
    LONG( DEFINED(__ADCAN0Interrupt)    ? ABSOLUTE(__ADCAN0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN1Interrupt)    ? ABSOLUTE(__ADCAN1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN2Interrupt)    ? ABSOLUTE(__ADCAN2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN3Interrupt)    ? ABSOLUTE(__ADCAN3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN4Interrupt)    ? ABSOLUTE(__ADCAN4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN5Interrupt)    ? ABSOLUTE(__ADCAN5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN6Interrupt)    ? ABSOLUTE(__ADCAN6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN7Interrupt)    ? ABSOLUTE(__ADCAN7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt118)    ? ABSOLUTE(__Interrupt118)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt119)    ? ABSOLUTE(__Interrupt119)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt120)    ? ABSOLUTE(__Interrupt120)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt121)    ? ABSOLUTE(__Interrupt121)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt122)    ? ABSOLUTE(__Interrupt122)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt123)    ? ABSOLUTE(__Interrupt123)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1GInterrupt)    ? ABSOLUTE(__SPI1GInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2GInterrupt)    ? ABSOLUTE(__SPI2GInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI3GInterrupt)    ? ABSOLUTE(__SPI3GInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt127)    ? ABSOLUTE(__Interrupt127)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt128)    ? ABSOLUTE(__Interrupt128)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt129)    ? ABSOLUTE(__Interrupt129)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt130)    ? ABSOLUTE(__Interrupt130)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt131)    ? ABSOLUTE(__Interrupt131)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt132)    ? ABSOLUTE(__Interrupt132)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt133)    ? ABSOLUTE(__Interrupt133)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt134)    ? ABSOLUTE(__Interrupt134)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt135)    ? ABSOLUTE(__Interrupt135)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt136)    ? ABSOLUTE(__Interrupt136)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt137)    ? ABSOLUTE(__Interrupt137)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC1Interrupt)    ? ABSOLUTE(__CLC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC2Interrupt)    ? ABSOLUTE(__CLC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC3Interrupt)    ? ABSOLUTE(__CLC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CLC4Interrupt)    ? ABSOLUTE(__CLC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ICDInterrupt)    ? ABSOLUTE(__ICDInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__JTAGInterrupt)    ? ABSOLUTE(__JTAGInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt144)    ? ABSOLUTE(__Interrupt144)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTGStepInterrupt)    ? ABSOLUTE(__PTGStepInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTGWDTInterrupt)    ? ABSOLUTE(__PTGWDTInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTG0Interrupt)    ? ABSOLUTE(__PTG0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTG1Interrupt)    ? ABSOLUTE(__PTG1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTG2Interrupt)    ? ABSOLUTE(__PTG2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PTG3Interrupt)    ? ABSOLUTE(__PTG3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN8Interrupt)    ? ABSOLUTE(__ADCAN8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN9Interrupt)    ? ABSOLUTE(__ADCAN9Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN10Interrupt)    ? ABSOLUTE(__ADCAN10Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN11Interrupt)    ? ABSOLUTE(__ADCAN11Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN12Interrupt)    ? ABSOLUTE(__ADCAN12Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN13Interrupt)    ? ABSOLUTE(__ADCAN13Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN14Interrupt)    ? ABSOLUTE(__ADCAN14Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN15Interrupt)    ? ABSOLUTE(__ADCAN15Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN16Interrupt)    ? ABSOLUTE(__ADCAN16Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN17Interrupt)    ? ABSOLUTE(__ADCAN17Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN18Interrupt)    ? ABSOLUTE(__ADCAN18Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN19Interrupt)    ? ABSOLUTE(__ADCAN19Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN20Interrupt)    ? ABSOLUTE(__ADCAN20Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCAN21Interrupt)    ? ABSOLUTE(__ADCAN21Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt165)    ? ABSOLUTE(__Interrupt165)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt166)    ? ABSOLUTE(__Interrupt166)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt167)    ? ABSOLUTE(__Interrupt167)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt168)    ? ABSOLUTE(__Interrupt168)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt169)    ? ABSOLUTE(__Interrupt169)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt170)    ? ABSOLUTE(__Interrupt170)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt171)    ? ABSOLUTE(__Interrupt171)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt172)    ? ABSOLUTE(__Interrupt172)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__I2C1BCInterrupt)    ? ABSOLUTE(__I2C1BCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__I2C2BCInterrupt)    ? ABSOLUTE(__I2C2BCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt175)    ? ABSOLUTE(__Interrupt175)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt176)    ? ABSOLUTE(__Interrupt176)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCMP0Interrupt)    ? ABSOLUTE(__ADCMP0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCMP1Interrupt)    ? ABSOLUTE(__ADCMP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADFLTR0Interrupt)    ? ABSOLUTE(__ADFLTR0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADFLTR1Interrupt)    ? ABSOLUTE(__ADFLTR1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt181)    ? ABSOLUTE(__Interrupt181)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt182)    ? ABSOLUTE(__Interrupt182)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt183)    ? ABSOLUTE(__Interrupt183)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt184)    ? ABSOLUTE(__Interrupt184)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt185)    ? ABSOLUTE(__Interrupt185)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt186)    ? ABSOLUTE(__Interrupt186)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCCore0Interrupt)    ? ABSOLUTE(__ADCCore0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCCore1Interrupt)    ? ABSOLUTE(__ADCCore1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCCore2Interrupt)    ? ABSOLUTE(__ADCCore2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCCore3Interrupt)    ? ABSOLUTE(__ADCCore3Interrupt)    :
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
    LONG( DEFINED(__AltHardTrapError)    ? ABSOLUTE(__AltHardTrapError)    :
         (DEFINED(__HardTrapError)       ? ABSOLUTE(__HardTrapError)       :
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
    LONG( DEFINED(__AltSoftTrapError)    ? ABSOLUTE(__AltSoftTrapError)    :
         (DEFINED(__SoftTrapError)       ? ABSOLUTE(__SoftTrapError)       :
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
    LONG( DEFINED(__AltSPI1TXInterrupt)    ? ABSOLUTE(__AltSPI1TXInterrupt)    :
         (DEFINED(__SPI1TXInterrupt)       ? ABSOLUTE(__SPI1TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1RXInterrupt)    ? ABSOLUTE(__AltSPI1RXInterrupt)    :
         (DEFINED(__SPI1RXInterrupt)       ? ABSOLUTE(__SPI1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1RXInterrupt)    ? ABSOLUTE(__AltU1RXInterrupt)    :
         (DEFINED(__U1RXInterrupt)       ? ABSOLUTE(__U1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1TXInterrupt)    ? ABSOLUTE(__AltU1TXInterrupt)    :
         (DEFINED(__U1TXInterrupt)       ? ABSOLUTE(__U1TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltAD1Interrupt)    ? ABSOLUTE(__AltAD1Interrupt)    :
         (DEFINED(__AD1Interrupt)       ? ABSOLUTE(__AD1Interrupt)       :
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
    LONG( DEFINED(__AltSPI2TXInterrupt)    ? ABSOLUTE(__AltSPI2TXInterrupt)    :
         (DEFINED(__SPI2TXInterrupt)       ? ABSOLUTE(__SPI2TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2RXInterrupt)    ? ABSOLUTE(__AltSPI2RXInterrupt)    :
         (DEFINED(__SPI2RXInterrupt)       ? ABSOLUTE(__SPI2RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1RxInterrupt)    ? ABSOLUTE(__AltC1RxInterrupt)    :
         (DEFINED(__C1RxInterrupt)       ? ABSOLUTE(__C1RxInterrupt)       :
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
    LONG( DEFINED(__AltInterrupt53)    ? ABSOLUTE(__AltInterrupt53)    :
         (DEFINED(__Interrupt53)       ? ABSOLUTE(__Interrupt53)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT4Interrupt)    ? ABSOLUTE(__AltINT4Interrupt)    :
         (DEFINED(__INT4Interrupt)       ? ABSOLUTE(__INT4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2RxInterrupt)    ? ABSOLUTE(__AltC2RxInterrupt)    :
         (DEFINED(__C2RxInterrupt)       ? ABSOLUTE(__C2RxInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2Interrupt)    ? ABSOLUTE(__AltC2Interrupt)    :
         (DEFINED(__C2Interrupt)       ? ABSOLUTE(__C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWMSpEventMatchInterrupt)    ? ABSOLUTE(__AltPWMSpEventMatchInterrupt)    :
         (DEFINED(__PWMSpEventMatchInterrupt)       ? ABSOLUTE(__PWMSpEventMatchInterrupt)       :
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
    LONG( DEFINED(__AltC1TxInterrupt)    ? ABSOLUTE(__AltC1TxInterrupt)    :
         (DEFINED(__C1TxInterrupt)       ? ABSOLUTE(__C1TxInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2TxInterrupt)    ? ABSOLUTE(__AltC2TxInterrupt)    :
         (DEFINED(__C2TxInterrupt)       ? ABSOLUTE(__C2TxInterrupt)       :
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
    LONG( DEFINED(__AltInterrupt75)    ? ABSOLUTE(__AltInterrupt75)    :
         (DEFINED(__Interrupt75)       ? ABSOLUTE(__Interrupt75)       :
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
    LONG( DEFINED(__AltSPI3TXInterrupt)    ? ABSOLUTE(__AltSPI3TXInterrupt)    :
         (DEFINED(__SPI3TXInterrupt)       ? ABSOLUTE(__SPI3TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI3RXInterrupt)    ? ABSOLUTE(__AltSPI3RXInterrupt)    :
         (DEFINED(__SPI3RXInterrupt)       ? ABSOLUTE(__SPI3RXInterrupt)       :
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
    LONG( DEFINED(__AltADCAN0Interrupt)    ? ABSOLUTE(__AltADCAN0Interrupt)    :
         (DEFINED(__ADCAN0Interrupt)       ? ABSOLUTE(__ADCAN0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN1Interrupt)    ? ABSOLUTE(__AltADCAN1Interrupt)    :
         (DEFINED(__ADCAN1Interrupt)       ? ABSOLUTE(__ADCAN1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN2Interrupt)    ? ABSOLUTE(__AltADCAN2Interrupt)    :
         (DEFINED(__ADCAN2Interrupt)       ? ABSOLUTE(__ADCAN2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN3Interrupt)    ? ABSOLUTE(__AltADCAN3Interrupt)    :
         (DEFINED(__ADCAN3Interrupt)       ? ABSOLUTE(__ADCAN3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN4Interrupt)    ? ABSOLUTE(__AltADCAN4Interrupt)    :
         (DEFINED(__ADCAN4Interrupt)       ? ABSOLUTE(__ADCAN4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN5Interrupt)    ? ABSOLUTE(__AltADCAN5Interrupt)    :
         (DEFINED(__ADCAN5Interrupt)       ? ABSOLUTE(__ADCAN5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN6Interrupt)    ? ABSOLUTE(__AltADCAN6Interrupt)    :
         (DEFINED(__ADCAN6Interrupt)       ? ABSOLUTE(__ADCAN6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN7Interrupt)    ? ABSOLUTE(__AltADCAN7Interrupt)    :
         (DEFINED(__ADCAN7Interrupt)       ? ABSOLUTE(__ADCAN7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt118)    ? ABSOLUTE(__AltInterrupt118)    :
         (DEFINED(__Interrupt118)       ? ABSOLUTE(__Interrupt118)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt119)    ? ABSOLUTE(__AltInterrupt119)    :
         (DEFINED(__Interrupt119)       ? ABSOLUTE(__Interrupt119)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt120)    ? ABSOLUTE(__AltInterrupt120)    :
         (DEFINED(__Interrupt120)       ? ABSOLUTE(__Interrupt120)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt121)    ? ABSOLUTE(__AltInterrupt121)    :
         (DEFINED(__Interrupt121)       ? ABSOLUTE(__Interrupt121)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt122)    ? ABSOLUTE(__AltInterrupt122)    :
         (DEFINED(__Interrupt122)       ? ABSOLUTE(__Interrupt122)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt123)    ? ABSOLUTE(__AltInterrupt123)    :
         (DEFINED(__Interrupt123)       ? ABSOLUTE(__Interrupt123)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1GInterrupt)    ? ABSOLUTE(__AltSPI1GInterrupt)    :
         (DEFINED(__SPI1GInterrupt)       ? ABSOLUTE(__SPI1GInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2GInterrupt)    ? ABSOLUTE(__AltSPI2GInterrupt)    :
         (DEFINED(__SPI2GInterrupt)       ? ABSOLUTE(__SPI2GInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI3GInterrupt)    ? ABSOLUTE(__AltSPI3GInterrupt)    :
         (DEFINED(__SPI3GInterrupt)       ? ABSOLUTE(__SPI3GInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt127)    ? ABSOLUTE(__AltInterrupt127)    :
         (DEFINED(__Interrupt127)       ? ABSOLUTE(__Interrupt127)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt128)    ? ABSOLUTE(__AltInterrupt128)    :
         (DEFINED(__Interrupt128)       ? ABSOLUTE(__Interrupt128)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt129)    ? ABSOLUTE(__AltInterrupt129)    :
         (DEFINED(__Interrupt129)       ? ABSOLUTE(__Interrupt129)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt130)    ? ABSOLUTE(__AltInterrupt130)    :
         (DEFINED(__Interrupt130)       ? ABSOLUTE(__Interrupt130)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt131)    ? ABSOLUTE(__AltInterrupt131)    :
         (DEFINED(__Interrupt131)       ? ABSOLUTE(__Interrupt131)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt132)    ? ABSOLUTE(__AltInterrupt132)    :
         (DEFINED(__Interrupt132)       ? ABSOLUTE(__Interrupt132)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt133)    ? ABSOLUTE(__AltInterrupt133)    :
         (DEFINED(__Interrupt133)       ? ABSOLUTE(__Interrupt133)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt134)    ? ABSOLUTE(__AltInterrupt134)    :
         (DEFINED(__Interrupt134)       ? ABSOLUTE(__Interrupt134)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt135)    ? ABSOLUTE(__AltInterrupt135)    :
         (DEFINED(__Interrupt135)       ? ABSOLUTE(__Interrupt135)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt136)    ? ABSOLUTE(__AltInterrupt136)    :
         (DEFINED(__Interrupt136)       ? ABSOLUTE(__Interrupt136)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt137)    ? ABSOLUTE(__AltInterrupt137)    :
         (DEFINED(__Interrupt137)       ? ABSOLUTE(__Interrupt137)       :
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
    LONG( DEFINED(__AltICDInterrupt)    ? ABSOLUTE(__AltICDInterrupt)    :
         (DEFINED(__ICDInterrupt)       ? ABSOLUTE(__ICDInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltJTAGInterrupt)    ? ABSOLUTE(__AltJTAGInterrupt)    :
         (DEFINED(__JTAGInterrupt)       ? ABSOLUTE(__JTAGInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt144)    ? ABSOLUTE(__AltInterrupt144)    :
         (DEFINED(__Interrupt144)       ? ABSOLUTE(__Interrupt144)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTGStepInterrupt)    ? ABSOLUTE(__AltPTGStepInterrupt)    :
         (DEFINED(__PTGStepInterrupt)       ? ABSOLUTE(__PTGStepInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTGWDTInterrupt)    ? ABSOLUTE(__AltPTGWDTInterrupt)    :
         (DEFINED(__PTGWDTInterrupt)       ? ABSOLUTE(__PTGWDTInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTG0Interrupt)    ? ABSOLUTE(__AltPTG0Interrupt)    :
         (DEFINED(__PTG0Interrupt)       ? ABSOLUTE(__PTG0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTG1Interrupt)    ? ABSOLUTE(__AltPTG1Interrupt)    :
         (DEFINED(__PTG1Interrupt)       ? ABSOLUTE(__PTG1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTG2Interrupt)    ? ABSOLUTE(__AltPTG2Interrupt)    :
         (DEFINED(__PTG2Interrupt)       ? ABSOLUTE(__PTG2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPTG3Interrupt)    ? ABSOLUTE(__AltPTG3Interrupt)    :
         (DEFINED(__PTG3Interrupt)       ? ABSOLUTE(__PTG3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN8Interrupt)    ? ABSOLUTE(__AltADCAN8Interrupt)    :
         (DEFINED(__ADCAN8Interrupt)       ? ABSOLUTE(__ADCAN8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN9Interrupt)    ? ABSOLUTE(__AltADCAN9Interrupt)    :
         (DEFINED(__ADCAN9Interrupt)       ? ABSOLUTE(__ADCAN9Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN10Interrupt)    ? ABSOLUTE(__AltADCAN10Interrupt)    :
         (DEFINED(__ADCAN10Interrupt)       ? ABSOLUTE(__ADCAN10Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN11Interrupt)    ? ABSOLUTE(__AltADCAN11Interrupt)    :
         (DEFINED(__ADCAN11Interrupt)       ? ABSOLUTE(__ADCAN11Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN12Interrupt)    ? ABSOLUTE(__AltADCAN12Interrupt)    :
         (DEFINED(__ADCAN12Interrupt)       ? ABSOLUTE(__ADCAN12Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN13Interrupt)    ? ABSOLUTE(__AltADCAN13Interrupt)    :
         (DEFINED(__ADCAN13Interrupt)       ? ABSOLUTE(__ADCAN13Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN14Interrupt)    ? ABSOLUTE(__AltADCAN14Interrupt)    :
         (DEFINED(__ADCAN14Interrupt)       ? ABSOLUTE(__ADCAN14Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN15Interrupt)    ? ABSOLUTE(__AltADCAN15Interrupt)    :
         (DEFINED(__ADCAN15Interrupt)       ? ABSOLUTE(__ADCAN15Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN16Interrupt)    ? ABSOLUTE(__AltADCAN16Interrupt)    :
         (DEFINED(__ADCAN16Interrupt)       ? ABSOLUTE(__ADCAN16Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN17Interrupt)    ? ABSOLUTE(__AltADCAN17Interrupt)    :
         (DEFINED(__ADCAN17Interrupt)       ? ABSOLUTE(__ADCAN17Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN18Interrupt)    ? ABSOLUTE(__AltADCAN18Interrupt)    :
         (DEFINED(__ADCAN18Interrupt)       ? ABSOLUTE(__ADCAN18Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN19Interrupt)    ? ABSOLUTE(__AltADCAN19Interrupt)    :
         (DEFINED(__ADCAN19Interrupt)       ? ABSOLUTE(__ADCAN19Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN20Interrupt)    ? ABSOLUTE(__AltADCAN20Interrupt)    :
         (DEFINED(__ADCAN20Interrupt)       ? ABSOLUTE(__ADCAN20Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCAN21Interrupt)    ? ABSOLUTE(__AltADCAN21Interrupt)    :
         (DEFINED(__ADCAN21Interrupt)       ? ABSOLUTE(__ADCAN21Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt165)    ? ABSOLUTE(__AltInterrupt165)    :
         (DEFINED(__Interrupt165)       ? ABSOLUTE(__Interrupt165)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt166)    ? ABSOLUTE(__AltInterrupt166)    :
         (DEFINED(__Interrupt166)       ? ABSOLUTE(__Interrupt166)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt167)    ? ABSOLUTE(__AltInterrupt167)    :
         (DEFINED(__Interrupt167)       ? ABSOLUTE(__Interrupt167)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt168)    ? ABSOLUTE(__AltInterrupt168)    :
         (DEFINED(__Interrupt168)       ? ABSOLUTE(__Interrupt168)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt169)    ? ABSOLUTE(__AltInterrupt169)    :
         (DEFINED(__Interrupt169)       ? ABSOLUTE(__Interrupt169)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt170)    ? ABSOLUTE(__AltInterrupt170)    :
         (DEFINED(__Interrupt170)       ? ABSOLUTE(__Interrupt170)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt171)    ? ABSOLUTE(__AltInterrupt171)    :
         (DEFINED(__Interrupt171)       ? ABSOLUTE(__Interrupt171)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt172)    ? ABSOLUTE(__AltInterrupt172)    :
         (DEFINED(__Interrupt172)       ? ABSOLUTE(__Interrupt172)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltI2C1BCInterrupt)    ? ABSOLUTE(__AltI2C1BCInterrupt)    :
         (DEFINED(__I2C1BCInterrupt)       ? ABSOLUTE(__I2C1BCInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltI2C2BCInterrupt)    ? ABSOLUTE(__AltI2C2BCInterrupt)    :
         (DEFINED(__I2C2BCInterrupt)       ? ABSOLUTE(__I2C2BCInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt175)    ? ABSOLUTE(__AltInterrupt175)    :
         (DEFINED(__Interrupt175)       ? ABSOLUTE(__Interrupt175)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt176)    ? ABSOLUTE(__AltInterrupt176)    :
         (DEFINED(__Interrupt176)       ? ABSOLUTE(__Interrupt176)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCMP0Interrupt)    ? ABSOLUTE(__AltADCMP0Interrupt)    :
         (DEFINED(__ADCMP0Interrupt)       ? ABSOLUTE(__ADCMP0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCMP1Interrupt)    ? ABSOLUTE(__AltADCMP1Interrupt)    :
         (DEFINED(__ADCMP1Interrupt)       ? ABSOLUTE(__ADCMP1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADFLTR0Interrupt)    ? ABSOLUTE(__AltADFLTR0Interrupt)    :
         (DEFINED(__ADFLTR0Interrupt)       ? ABSOLUTE(__ADFLTR0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADFLTR1Interrupt)    ? ABSOLUTE(__AltADFLTR1Interrupt)    :
         (DEFINED(__ADFLTR1Interrupt)       ? ABSOLUTE(__ADFLTR1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt181)    ? ABSOLUTE(__AltInterrupt181)    :
         (DEFINED(__Interrupt181)       ? ABSOLUTE(__Interrupt181)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt182)    ? ABSOLUTE(__AltInterrupt182)    :
         (DEFINED(__Interrupt182)       ? ABSOLUTE(__Interrupt182)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt183)    ? ABSOLUTE(__AltInterrupt183)    :
         (DEFINED(__Interrupt183)       ? ABSOLUTE(__Interrupt183)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt184)    ? ABSOLUTE(__AltInterrupt184)    :
         (DEFINED(__Interrupt184)       ? ABSOLUTE(__Interrupt184)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt185)    ? ABSOLUTE(__AltInterrupt185)    :
         (DEFINED(__Interrupt185)       ? ABSOLUTE(__Interrupt185)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt186)    ? ABSOLUTE(__AltInterrupt186)    :
         (DEFINED(__Interrupt186)       ? ABSOLUTE(__Interrupt186)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCCore0Interrupt)    ? ABSOLUTE(__AltADCCore0Interrupt)    :
         (DEFINED(__ADCCore0Interrupt)       ? ABSOLUTE(__ADCCore0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCCore1Interrupt)    ? ABSOLUTE(__AltADCCore1Interrupt)    :
         (DEFINED(__ADCCore1Interrupt)       ? ABSOLUTE(__ADCCore1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCCore2Interrupt)    ? ABSOLUTE(__AltADCCore2Interrupt)    :
         (DEFINED(__ADCCore2Interrupt)       ? ABSOLUTE(__ADCCore2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCCore3Interrupt)    ? ABSOLUTE(__AltADCCore3Interrupt)    :
         (DEFINED(__ADCCore3Interrupt)       ? ABSOLUTE(__ADCCore3Interrupt)       :
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
 DSRPAG       = 0x32;
_DSRPAG       = 0x32;
_DSRPAGbits   = 0x32;
 DSWPAG       = 0x34;
_DSWPAG       = 0x34;
_DSWPAGbits   = 0x34;
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
 TBLPAG       = 0x54;
_TBLPAG       = 0x54;
_TBLPAGbits   = 0x54;
 CTXTSTAT     = 0x5A;
_CTXTSTAT     = 0x5A;
_CTXTSTATbits = 0x5A;
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
 IC1CON1      = 0x140;
_IC1CON1      = 0x140;
_IC1CON1bits  = 0x140;
 IC1CON2      = 0x142;
_IC1CON2      = 0x142;
_IC1CON2bits  = 0x142;
 IC1BUF       = 0x144;
_IC1BUF       = 0x144;
 IC1TMR       = 0x146;
_IC1TMR       = 0x146;
 IC2CON1      = 0x148;
_IC2CON1      = 0x148;
_IC2CON1bits  = 0x148;
 IC2CON2      = 0x14A;
_IC2CON2      = 0x14A;
_IC2CON2bits  = 0x14A;
 IC2BUF       = 0x14C;
_IC2BUF       = 0x14C;
 IC2TMR       = 0x14E;
_IC2TMR       = 0x14E;
 IC3CON1      = 0x150;
_IC3CON1      = 0x150;
_IC3CON1bits  = 0x150;
 IC3CON2      = 0x152;
_IC3CON2      = 0x152;
_IC3CON2bits  = 0x152;
 IC3BUF       = 0x154;
_IC3BUF       = 0x154;
 IC3TMR       = 0x156;
_IC3TMR       = 0x156;
 IC4CON1      = 0x158;
_IC4CON1      = 0x158;
_IC4CON1bits  = 0x158;
 IC4CON2      = 0x15A;
_IC4CON2      = 0x15A;
_IC4CON2bits  = 0x15A;
 IC4BUF       = 0x15C;
_IC4BUF       = 0x15C;
 IC4TMR       = 0x15E;
_IC4TMR       = 0x15E;
 I2C1CON1     = 0x200;
_I2C1CON1     = 0x200;
_I2C1CON1bits = 0x200;
 I2C1CONL     = 0x200;
_I2C1CONL     = 0x200;
_I2C1CONLbits = 0x200;
 I2C1CON2     = 0x202;
_I2C1CON2     = 0x202;
_I2C1CON2bits = 0x202;
 I2C1CONH     = 0x202;
_I2C1CONH     = 0x202;
_I2C1CONHbits = 0x202;
 I2C1STAT     = 0x204;
_I2C1STAT     = 0x204;
_I2C1STATbits = 0x204;
 I2C1ADD      = 0x206;
_I2C1ADD      = 0x206;
_I2C1ADDbits  = 0x206;
 I2C1MSK      = 0x208;
_I2C1MSK      = 0x208;
_I2C1MSKbits  = 0x208;
 I2C1BRG      = 0x20A;
_I2C1BRG      = 0x20A;
 I2C1TRN      = 0x20C;
_I2C1TRN      = 0x20C;
_I2C1TRNbits  = 0x20C;
 I2C1RCV      = 0x20E;
_I2C1RCV      = 0x20E;
_I2C1RCVbits  = 0x20E;
 I2C2CON1     = 0x210;
_I2C2CON1     = 0x210;
_I2C2CON1bits = 0x210;
 I2C2CONL     = 0x210;
_I2C2CONL     = 0x210;
_I2C2CONLbits = 0x210;
 I2C2CON2     = 0x212;
_I2C2CON2     = 0x212;
_I2C2CON2bits = 0x212;
 I2C2CONH     = 0x212;
_I2C2CONH     = 0x212;
_I2C2CONHbits = 0x212;
 I2C2STAT     = 0x214;
_I2C2STAT     = 0x214;
_I2C2STATbits = 0x214;
 I2C2ADD      = 0x216;
_I2C2ADD      = 0x216;
_I2C2ADDbits  = 0x216;
 I2C2MSK      = 0x218;
_I2C2MSK      = 0x218;
_I2C2MSKbits  = 0x218;
 I2C2BRG      = 0x21A;
_I2C2BRG      = 0x21A;
 I2C2TRN      = 0x21C;
_I2C2TRN      = 0x21C;
_I2C2TRNbits  = 0x21C;
 I2C2RCV      = 0x21E;
_I2C2RCV      = 0x21E;
_I2C2RCVbits  = 0x21E;
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
 U2MODE       = 0x230;
_U2MODE       = 0x230;
_U2MODEbits   = 0x230;
 U2STA        = 0x232;
_U2STA        = 0x232;
_U2STAbits    = 0x232;
 U2TXREG      = 0x234;
_U2TXREG      = 0x234;
 U2RXREG      = 0x236;
_U2RXREG      = 0x236;
 U2BRG        = 0x238;
_U2BRG        = 0x238;
 SPI1CON1     = 0x240;
_SPI1CON1     = 0x240;
_SPI1CON1bits = 0x240;
 SPI1CON1L    = 0x240;
_SPI1CON1L    = 0x240;
_SPI1CON1Lbits = 0x240;
 SPI1CON1H    = 0x242;
_SPI1CON1H    = 0x242;
_SPI1CON1Hbits = 0x242;
 SPI1CON2     = 0x242;
_SPI1CON2     = 0x242;
_SPI1CON2bits = 0x242;
 SPI1CON2L    = 0x244;
_SPI1CON2L    = 0x244;
_SPI1CON2Lbits = 0x244;
 SPI1CON3     = 0x244;
_SPI1CON3     = 0x244;
_SPI1CON3bits = 0x244;
 SPI1STATL    = 0x248;
_SPI1STATL    = 0x248;
_SPI1STATLbits = 0x248;
 SPI1STATH    = 0x24A;
_SPI1STATH    = 0x24A;
_SPI1STATHbits = 0x24A;
 SPI1BUFL     = 0x24C;
_SPI1BUFL     = 0x24C;
_SPI1BUFLbits = 0x24C;
 SPI1BUFH     = 0x24E;
_SPI1BUFH     = 0x24E;
_SPI1BUFHbits = 0x24E;
 SPI1BRGL     = 0x250;
_SPI1BRGL     = 0x250;
_SPI1BRGLbits = 0x250;
 SPI1BRGH     = 0x252;
_SPI1BRGH     = 0x252;
 SPI1IMSK1    = 0x254;
_SPI1IMSK1    = 0x254;
_SPI1IMSK1bits = 0x254;
 SPI1IMSKL    = 0x254;
_SPI1IMSKL    = 0x254;
_SPI1IMSKLbits = 0x254;
 SPI1IMSK2    = 0x256;
_SPI1IMSK2    = 0x256;
_SPI1IMSK2bits = 0x256;
 SPI1IMSKH    = 0x256;
_SPI1IMSKH    = 0x256;
_SPI1IMSKHbits = 0x256;
 SPI1URDTL    = 0x258;
_SPI1URDTL    = 0x258;
_SPI1URDTLbits = 0x258;
 SPI1URDTH    = 0x25A;
_SPI1URDTH    = 0x25A;
_SPI1URDTHbits = 0x25A;
 SPI2CON1     = 0x260;
_SPI2CON1     = 0x260;
_SPI2CON1bits = 0x260;
 SPI2CON1L    = 0x260;
_SPI2CON1L    = 0x260;
_SPI2CON1Lbits = 0x260;
 SPI2CON1H    = 0x262;
_SPI2CON1H    = 0x262;
_SPI2CON1Hbits = 0x262;
 SPI2CON2     = 0x262;
_SPI2CON2     = 0x262;
_SPI2CON2bits = 0x262;
 SPI2CON2L    = 0x264;
_SPI2CON2L    = 0x264;
_SPI2CON2Lbits = 0x264;
 SPI2CON3     = 0x264;
_SPI2CON3     = 0x264;
_SPI2CON3bits = 0x264;
 SPI2CON2H    = 0x266;
_SPI2CON2H    = 0x266;
 SPI2CON4     = 0x266;
_SPI2CON4     = 0x266;
 SPI2STATL    = 0x268;
_SPI2STATL    = 0x268;
_SPI2STATLbits = 0x268;
 SPI2STATH    = 0x26A;
_SPI2STATH    = 0x26A;
_SPI2STATHbits = 0x26A;
 SPI2BUFL     = 0x26C;
_SPI2BUFL     = 0x26C;
_SPI2BUFLbits = 0x26C;
 SPI2BUFH     = 0x26E;
_SPI2BUFH     = 0x26E;
_SPI2BUFHbits = 0x26E;
 SPI2BRGL     = 0x270;
_SPI2BRGL     = 0x270;
_SPI2BRGLbits = 0x270;
 SPI2BRGH     = 0x272;
_SPI2BRGH     = 0x272;
 SPI2IMSK1    = 0x274;
_SPI2IMSK1    = 0x274;
_SPI2IMSK1bits = 0x274;
 SPI2IMSKL    = 0x274;
_SPI2IMSKL    = 0x274;
_SPI2IMSKLbits = 0x274;
 SPI2IMSK2    = 0x276;
_SPI2IMSK2    = 0x276;
_SPI2IMSK2bits = 0x276;
 SPI2IMSKH    = 0x276;
_SPI2IMSKH    = 0x276;
_SPI2IMSKHbits = 0x276;
 SPI2URDTL    = 0x278;
_SPI2URDTL    = 0x278;
_SPI2URDTLbits = 0x278;
 SPI2URDTH    = 0x27A;
_SPI2URDTH    = 0x27A;
_SPI2URDTHbits = 0x27A;
 ADCON1L      = 0x300;
_ADCON1L      = 0x300;
_ADCON1Lbits  = 0x300;
 ADCON1H      = 0x302;
_ADCON1H      = 0x302;
_ADCON1Hbits  = 0x302;
 ADCON2L      = 0x304;
_ADCON2L      = 0x304;
_ADCON2Lbits  = 0x304;
 ADCON2H      = 0x306;
_ADCON2H      = 0x306;
_ADCON2Hbits  = 0x306;
 ADCON3L      = 0x308;
_ADCON3L      = 0x308;
_ADCON3Lbits  = 0x308;
 ADCON3H      = 0x30A;
_ADCON3H      = 0x30A;
_ADCON3Hbits  = 0x30A;
 ADCON4L      = 0x30C;
_ADCON4L      = 0x30C;
_ADCON4Lbits  = 0x30C;
 ADCON4H      = 0x30E;
_ADCON4H      = 0x30E;
_ADCON4Hbits  = 0x30E;
 ADMOD0L      = 0x310;
_ADMOD0L      = 0x310;
_ADMOD0Lbits  = 0x310;
 ADMOD0H      = 0x312;
_ADMOD0H      = 0x312;
_ADMOD0Hbits  = 0x312;
 ADMOD1L      = 0x314;
_ADMOD1L      = 0x314;
_ADMOD1Lbits  = 0x314;
 ADIEL        = 0x320;
_ADIEL        = 0x320;
_ADIELbits    = 0x320;
 ADIEH        = 0x322;
_ADIEH        = 0x322;
_ADIEHbits    = 0x322;
 ADCSSL       = 0x328;
_ADCSSL       = 0x328;
_ADCSSLbits   = 0x328;
 ADCSSH       = 0x32A;
_ADCSSH       = 0x32A;
_ADCSSHbits   = 0x32A;
 ADSTATL      = 0x330;
_ADSTATL      = 0x330;
_ADSTATLbits  = 0x330;
 ADSTATH      = 0x332;
_ADSTATH      = 0x332;
_ADSTATHbits  = 0x332;
 ADCMP0ENL    = 0x338;
_ADCMP0ENL    = 0x338;
_ADCMP0ENLbits = 0x338;
 ADCMP0ENH    = 0x33A;
_ADCMP0ENH    = 0x33A;
_ADCMP0ENHbits = 0x33A;
 ADCMP0LO     = 0x33C;
_ADCMP0LO     = 0x33C;
 ADCMP0HI     = 0x33E;
_ADCMP0HI     = 0x33E;
 ADCMP1ENL    = 0x340;
_ADCMP1ENL    = 0x340;
_ADCMP1ENLbits = 0x340;
 ADCMP1ENH    = 0x342;
_ADCMP1ENH    = 0x342;
_ADCMP1ENHbits = 0x342;
 ADCMP1LO     = 0x344;
_ADCMP1LO     = 0x344;
 ADCMP1HI     = 0x346;
_ADCMP1HI     = 0x346;
 ADFL0DAT     = 0x368;
_ADFL0DAT     = 0x368;
 ADFL0CON     = 0x36A;
_ADFL0CON     = 0x36A;
_ADFL0CONbits = 0x36A;
 ADFL1DAT     = 0x36C;
_ADFL1DAT     = 0x36C;
 ADFL1CON     = 0x36E;
_ADFL1CON     = 0x36E;
_ADFL1CONbits = 0x36E;
 ADTRIG0L     = 0x380;
_ADTRIG0L     = 0x380;
_ADTRIG0Lbits = 0x380;
 ADTRIG0H     = 0x382;
_ADTRIG0H     = 0x382;
_ADTRIG0Hbits = 0x382;
 ADTRIG1L     = 0x384;
_ADTRIG1L     = 0x384;
_ADTRIG1Lbits = 0x384;
 ADTRIG1H     = 0x386;
_ADTRIG1H     = 0x386;
_ADTRIG1Hbits = 0x386;
 ADTRIG2L     = 0x388;
_ADTRIG2L     = 0x388;
_ADTRIG2Lbits = 0x388;
 ADTRIG2H     = 0x38A;
_ADTRIG2H     = 0x38A;
_ADTRIG2Hbits = 0x38A;
 ADTRIG3L     = 0x38C;
_ADTRIG3L     = 0x38C;
 ADTRIG3H     = 0x38E;
_ADTRIG3H     = 0x38E;
_ADTRIG3Hbits = 0x38E;
 ADTRIG4L     = 0x390;
_ADTRIG4L     = 0x390;
_ADTRIG4Lbits = 0x390;
 ADTRIG4H     = 0x392;
_ADTRIG4H     = 0x392;
_ADTRIG4Hbits = 0x392;
 ADTRIG5L     = 0x394;
_ADTRIG5L     = 0x394;
_ADTRIG5Lbits = 0x394;
 ADCMP0CON    = 0x3A0;
_ADCMP0CON    = 0x3A0;
_ADCMP0CONbits = 0x3A0;
 ADCMP1CON    = 0x3A4;
_ADCMP1CON    = 0x3A4;
_ADCMP1CONbits = 0x3A4;
 ADBASE       = 0x3C0;
_ADBASE       = 0x3C0;
_ADBASEbits   = 0x3C0;
 ADLVLTRGL    = 0x3D0;
_ADLVLTRGL    = 0x3D0;
_ADLVLTRGLbits = 0x3D0;
 ADLVLTRGH    = 0x3D2;
_ADLVLTRGH    = 0x3D2;
_ADLVLTRGHbits = 0x3D2;
 ADCORE0L     = 0x3D4;
_ADCORE0L     = 0x3D4;
_ADCORE0Lbits = 0x3D4;
 ADCORE0H     = 0x3D6;
_ADCORE0H     = 0x3D6;
_ADCORE0Hbits = 0x3D6;
 ADCORE1L     = 0x3D8;
_ADCORE1L     = 0x3D8;
_ADCORE1Lbits = 0x3D8;
 ADCORE1H     = 0x3DA;
_ADCORE1H     = 0x3DA;
_ADCORE1Hbits = 0x3DA;
 ADCORE2L     = 0x3DC;
_ADCORE2L     = 0x3DC;
_ADCORE2Lbits = 0x3DC;
 ADCORE2H     = 0x3DE;
_ADCORE2H     = 0x3DE;
_ADCORE2Hbits = 0x3DE;
 ADCORE3L     = 0x3E0;
_ADCORE3L     = 0x3E0;
_ADCORE3Lbits = 0x3E0;
 ADCORE3H     = 0x3E2;
_ADCORE3H     = 0x3E2;
_ADCORE3Hbits = 0x3E2;
 ADEIEL       = 0x3F0;
_ADEIEL       = 0x3F0;
_ADEIELbits   = 0x3F0;
 ADEIEH       = 0x3F2;
_ADEIEH       = 0x3F2;
_ADEIEHbits   = 0x3F2;
 ADEISTATL    = 0x3F8;
_ADEISTATL    = 0x3F8;
_ADEISTATLbits = 0x3F8;
 ADEISTATH    = 0x3FA;
_ADEISTATH    = 0x3FA;
_ADEISTATHbits = 0x3FA;
 ADCON5L      = 0x400;
_ADCON5L      = 0x400;
_ADCON5Lbits  = 0x400;
 ADCON5H      = 0x402;
_ADCON5H      = 0x402;
_ADCON5Hbits  = 0x402;
 ADCAL0L      = 0x404;
_ADCAL0L      = 0x404;
_ADCAL0Lbits  = 0x404;
 ADCAL0H      = 0x406;
_ADCAL0H      = 0x406;
_ADCAL0Hbits  = 0x406;
 ADCAL1H      = 0x40A;
_ADCAL1H      = 0x40A;
_ADCAL1Hbits  = 0x40A;
 ADCBUF0      = 0x40C;
_ADCBUF0      = 0x40C;
 ADCBUF1      = 0x40E;
_ADCBUF1      = 0x40E;
 ADCBUF2      = 0x410;
_ADCBUF2      = 0x410;
 ADCBUF3      = 0x412;
_ADCBUF3      = 0x412;
 ADCBUF4      = 0x414;
_ADCBUF4      = 0x414;
 ADCBUF6      = 0x418;
_ADCBUF6      = 0x418;
 ADCBUF7      = 0x41A;
_ADCBUF7      = 0x41A;
 ADCBUF8      = 0x41C;
_ADCBUF8      = 0x41C;
 ADCBUF9      = 0x41E;
_ADCBUF9      = 0x41E;
 ADCBUF10     = 0x420;
_ADCBUF10     = 0x420;
 ADCBUF11     = 0x422;
_ADCBUF11     = 0x422;
 ADCBUF14     = 0x428;
_ADCBUF14     = 0x428;
 ADCBUF17     = 0x42E;
_ADCBUF17     = 0x42E;
 ADCBUF18     = 0x430;
_ADCBUF18     = 0x430;
 ADCBUF19     = 0x432;
_ADCBUF19     = 0x432;
 ADCBUF20     = 0x434;
_ADCBUF20     = 0x434;
 ADCBUF21     = 0x436;
_ADCBUF21     = 0x436;
 ISRCCON      = 0x500;
_ISRCCON      = 0x500;
_ISRCCONbits  = 0x500;
 PGA1CON      = 0x504;
_PGA1CON      = 0x504;
_PGA1CONbits  = 0x504;
 PGA1CAL      = 0x506;
_PGA1CAL      = 0x506;
_PGA1CALbits  = 0x506;
 PGA2CON      = 0x508;
_PGA2CON      = 0x508;
_PGA2CONbits  = 0x508;
 PGA2CAL      = 0x50A;
_PGA2CAL      = 0x50A;
_PGA2CALbits  = 0x50A;
 CMP1CON      = 0x540;
_CMP1CON      = 0x540;
_CMP1CONbits  = 0x540;
 CMP1DAC      = 0x542;
_CMP1DAC      = 0x542;
_CMP1DACbits  = 0x542;
 CMP2CON      = 0x544;
_CMP2CON      = 0x544;
_CMP2CONbits  = 0x544;
 CMP2DAC      = 0x546;
_CMP2DAC      = 0x546;
_CMP2DACbits  = 0x546;
 CMP3CON      = 0x548;
_CMP3CON      = 0x548;
_CMP3CONbits  = 0x548;
 CMP3DAC      = 0x54A;
_CMP3DAC      = 0x54A;
_CMP3DACbits  = 0x54A;
 CMP4CON      = 0x54C;
_CMP4CON      = 0x54C;
_CMP4CONbits  = 0x54C;
 CMP4DAC      = 0x54E;
_CMP4DAC      = 0x54E;
_CMP4DACbits  = 0x54E;
 SPI3CON1     = 0x600;
_SPI3CON1     = 0x600;
_SPI3CON1bits = 0x600;
 SPI3CON1L    = 0x600;
_SPI3CON1L    = 0x600;
_SPI3CON1Lbits = 0x600;
 SPI3CON1H    = 0x602;
_SPI3CON1H    = 0x602;
_SPI3CON1Hbits = 0x602;
 SPI3CON2     = 0x602;
_SPI3CON2     = 0x602;
_SPI3CON2bits = 0x602;
 SPI3CON2L    = 0x604;
_SPI3CON2L    = 0x604;
_SPI3CON2Lbits = 0x604;
 SPI3CON3     = 0x604;
_SPI3CON3     = 0x604;
_SPI3CON3bits = 0x604;
 SPI3CON2H    = 0x606;
_SPI3CON2H    = 0x606;
 SPI3CON4     = 0x606;
_SPI3CON4     = 0x606;
 SPI3STATL    = 0x608;
_SPI3STATL    = 0x608;
_SPI3STATLbits = 0x608;
 SPI3STATH    = 0x60A;
_SPI3STATH    = 0x60A;
_SPI3STATHbits = 0x60A;
 SPI3BUFL     = 0x60C;
_SPI3BUFL     = 0x60C;
_SPI3BUFLbits = 0x60C;
 SPI3BUFH     = 0x60E;
_SPI3BUFH     = 0x60E;
_SPI3BUFHbits = 0x60E;
 SPI3BRGL     = 0x610;
_SPI3BRGL     = 0x610;
_SPI3BRGLbits = 0x610;
 SPI3BRGH     = 0x612;
_SPI3BRGH     = 0x612;
 SPI3IMSK1    = 0x614;
_SPI3IMSK1    = 0x614;
_SPI3IMSK1bits = 0x614;
 SPI3IMSKL    = 0x614;
_SPI3IMSKL    = 0x614;
_SPI3IMSKLbits = 0x614;
 SPI3IMSK2    = 0x616;
_SPI3IMSK2    = 0x616;
_SPI3IMSK2bits = 0x616;
 SPI3IMSKH    = 0x616;
_SPI3IMSKH    = 0x616;
_SPI3IMSKHbits = 0x616;
 SPI3URDTL    = 0x618;
_SPI3URDTL    = 0x618;
_SPI3URDTLbits = 0x618;
 SPI3URDTH    = 0x61A;
_SPI3URDTH    = 0x61A;
_SPI3URDTHbits = 0x61A;
 RPOR0        = 0x668;
_RPOR0        = 0x668;
_RPOR0bits    = 0x668;
 RPOR1        = 0x66A;
_RPOR1        = 0x66A;
_RPOR1bits    = 0x66A;
 RPOR2        = 0x66C;
_RPOR2        = 0x66C;
_RPOR2bits    = 0x66C;
 RPOR3        = 0x66E;
_RPOR3        = 0x66E;
_RPOR3bits    = 0x66E;
 RPOR4        = 0x670;
_RPOR4        = 0x670;
_RPOR4bits    = 0x670;
 RPOR5        = 0x672;
_RPOR5        = 0x672;
_RPOR5bits    = 0x672;
 RPOR6        = 0x674;
_RPOR6        = 0x674;
_RPOR6bits    = 0x674;
 RPOR7        = 0x676;
_RPOR7        = 0x676;
_RPOR7bits    = 0x676;
 RPOR8        = 0x678;
_RPOR8        = 0x678;
_RPOR8bits    = 0x678;
 RPOR9        = 0x67A;
_RPOR9        = 0x67A;
_RPOR9bits    = 0x67A;
 RPOR10       = 0x67C;
_RPOR10       = 0x67C;
_RPOR10bits   = 0x67C;
 RPOR11       = 0x67E;
_RPOR11       = 0x67E;
_RPOR11bits   = 0x67E;
 RPOR12       = 0x680;
_RPOR12       = 0x680;
_RPOR12bits   = 0x680;
 RPOR13       = 0x682;
_RPOR13       = 0x682;
_RPOR13bits   = 0x682;
 RPOR14       = 0x684;
_RPOR14       = 0x684;
_RPOR14bits   = 0x684;
 RPOR15       = 0x686;
_RPOR15       = 0x686;
_RPOR15bits   = 0x686;
 RPOR16       = 0x688;
_RPOR16       = 0x688;
_RPOR16bits   = 0x688;
 RPOR17       = 0x68A;
_RPOR17       = 0x68A;
_RPOR17bits   = 0x68A;
 RPOR18       = 0x68C;
_RPOR18       = 0x68C;
_RPOR18bits   = 0x68C;
 RPOR19       = 0x68E;
_RPOR19       = 0x68E;
_RPOR19bits   = 0x68E;
 RPOR20       = 0x690;
_RPOR20       = 0x690;
_RPOR20bits   = 0x690;
 RPOR21       = 0x692;
_RPOR21       = 0x692;
_RPOR21bits   = 0x692;
 RPOR22       = 0x694;
_RPOR22       = 0x694;
_RPOR22bits   = 0x694;
 RPOR23       = 0x696;
_RPOR23       = 0x696;
_RPOR23bits   = 0x696;
 RPOR24       = 0x698;
_RPOR24       = 0x698;
_RPOR24bits   = 0x698;
 RPOR25       = 0x69A;
_RPOR25       = 0x69A;
_RPOR25bits   = 0x69A;
 RPOR26       = 0x69C;
_RPOR26       = 0x69C;
_RPOR26bits   = 0x69C;
 RPINR0       = 0x6A0;
_RPINR0       = 0x6A0;
_RPINR0bits   = 0x6A0;
 RPINR1       = 0x6A2;
_RPINR1       = 0x6A2;
_RPINR1bits   = 0x6A2;
 RPINR2       = 0x6A4;
_RPINR2       = 0x6A4;
_RPINR2bits   = 0x6A4;
 RPINR3       = 0x6A6;
_RPINR3       = 0x6A6;
_RPINR3bits   = 0x6A6;
 RPINR7       = 0x6AE;
_RPINR7       = 0x6AE;
_RPINR7bits   = 0x6AE;
 RPINR8       = 0x6B0;
_RPINR8       = 0x6B0;
_RPINR8bits   = 0x6B0;
 RPINR11      = 0x6B6;
_RPINR11      = 0x6B6;
_RPINR11bits  = 0x6B6;
 RPINR12      = 0x6B8;
_RPINR12      = 0x6B8;
_RPINR12bits  = 0x6B8;
 RPINR13      = 0x6BA;
_RPINR13      = 0x6BA;
_RPINR13bits  = 0x6BA;
 RPINR18      = 0x6C4;
_RPINR18      = 0x6C4;
_RPINR18bits  = 0x6C4;
 RPINR19      = 0x6C6;
_RPINR19      = 0x6C6;
_RPINR19bits  = 0x6C6;
 RPINR20      = 0x6C8;
_RPINR20      = 0x6C8;
_RPINR20bits  = 0x6C8;
 RPINR21      = 0x6CA;
_RPINR21      = 0x6CA;
_RPINR21bits  = 0x6CA;
 RPINR22      = 0x6CC;
_RPINR22      = 0x6CC;
_RPINR22bits  = 0x6CC;
 RPINR23      = 0x6CE;
_RPINR23      = 0x6CE;
_RPINR23bits  = 0x6CE;
 RPINR26      = 0x6D4;
_RPINR26      = 0x6D4;
_RPINR26bits  = 0x6D4;
 RPINR29      = 0x6DA;
_RPINR29      = 0x6DA;
_RPINR29bits  = 0x6DA;
 RPINR30      = 0x6DC;
_RPINR30      = 0x6DC;
_RPINR30bits  = 0x6DC;
 RPINR37      = 0x6EA;
_RPINR37      = 0x6EA;
_RPINR37bits  = 0x6EA;
 RPINR38      = 0x6EC;
_RPINR38      = 0x6EC;
_RPINR38bits  = 0x6EC;
 RPINR42      = 0x6F4;
_RPINR42      = 0x6F4;
_RPINR42bits  = 0x6F4;
 RPINR43      = 0x6F6;
_RPINR43      = 0x6F6;
_RPINR43bits  = 0x6F6;
 RPINR45      = 0x6FA;
_RPINR45      = 0x6FA;
_RPINR45bits  = 0x6FA;
 RPINR46      = 0x6FC;
_RPINR46      = 0x6FC;
_RPINR46bits  = 0x6FC;
 NVMCON       = 0x728;
_NVMCON       = 0x728;
_NVMCONbits   = 0x728;
 NVMADR       = 0x72A;
_NVMADR       = 0x72A;
_NVMADRbits   = 0x72A;
 NVMADRL      = 0x72A;
_NVMADRL      = 0x72A;
_NVMADRLbits  = 0x72A;
 NVMADRH      = 0x72C;
_NVMADRH      = 0x72C;
_NVMADRHbits  = 0x72C;
 NVMADRU      = 0x72C;
_NVMADRU      = 0x72C;
_NVMADRUbits  = 0x72C;
 NVMKEY       = 0x72E;
_NVMKEY       = 0x72E;
 NVMSRCADDR   = 0x730;
_NVMSRCADDR   = 0x730;
_NVMSRCADDRbits = 0x730;
 NVMSRCADR    = 0x730;
_NVMSRCADR    = 0x730;
_NVMSRCADRbits = 0x730;
 NVMSRCADRL   = 0x730;
_NVMSRCADRL   = 0x730;
_NVMSRCADRLbits = 0x730;
 NVMSRCADRH   = 0x732;
_NVMSRCADRH   = 0x732;
_NVMSRCADRHbits = 0x732;
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
 LFSR         = 0x74C;
_LFSR         = 0x74C;
_LFSRbits     = 0x74C;
 REFOCON      = 0x74E;
_REFOCON      = 0x74E;
_REFOCONbits  = 0x74E;
 ACLKCON      = 0x750;
_ACLKCON      = 0x750;
_ACLKCONbits  = 0x750;
 PMD1         = 0x760;
_PMD1         = 0x760;
_PMD1bits     = 0x760;
 PMD2         = 0x762;
_PMD2         = 0x762;
_PMD2bits     = 0x762;
 PMD3         = 0x764;
_PMD3         = 0x764;
_PMD3bits     = 0x764;
 PMD4         = 0x766;
_PMD4         = 0x766;
_PMD4bits     = 0x766;
 PMD6         = 0x76A;
_PMD6         = 0x76A;
_PMD6bits     = 0x76A;
 PMD7         = 0x76C;
_PMD7         = 0x76C;
_PMD7bits     = 0x76C;
 PMD8         = 0x76E;
_PMD8         = 0x76E;
_PMD8bits     = 0x76E;
 IFS0         = 0x800;
_IFS0         = 0x800;
_IFS0bits     = 0x800;
 IFS1         = 0x802;
_IFS1         = 0x802;
_IFS1bits     = 0x802;
 IFS2         = 0x804;
_IFS2         = 0x804;
_IFS2bits     = 0x804;
 IFS3         = 0x806;
_IFS3         = 0x806;
_IFS3bits     = 0x806;
 IFS4         = 0x808;
_IFS4         = 0x808;
_IFS4bits     = 0x808;
 IFS5         = 0x80A;
_IFS5         = 0x80A;
_IFS5bits     = 0x80A;
 IFS6         = 0x80C;
_IFS6         = 0x80C;
_IFS6bits     = 0x80C;
 IFS7         = 0x80E;
_IFS7         = 0x80E;
_IFS7bits     = 0x80E;
 IFS8         = 0x810;
_IFS8         = 0x810;
_IFS8bits     = 0x810;
 IFS9         = 0x812;
_IFS9         = 0x812;
_IFS9bits     = 0x812;
 IFS10        = 0x814;
_IFS10        = 0x814;
_IFS10bits    = 0x814;
 IFS11        = 0x816;
_IFS11        = 0x816;
_IFS11bits    = 0x816;
 IEC0         = 0x820;
_IEC0         = 0x820;
_IEC0bits     = 0x820;
 IEC1         = 0x822;
_IEC1         = 0x822;
_IEC1bits     = 0x822;
 IEC2         = 0x824;
_IEC2         = 0x824;
_IEC2bits     = 0x824;
 IEC3         = 0x826;
_IEC3         = 0x826;
_IEC3bits     = 0x826;
 IEC4         = 0x828;
_IEC4         = 0x828;
_IEC4bits     = 0x828;
 IEC5         = 0x82A;
_IEC5         = 0x82A;
_IEC5bits     = 0x82A;
 IEC6         = 0x82C;
_IEC6         = 0x82C;
_IEC6bits     = 0x82C;
 IEC7         = 0x82E;
_IEC7         = 0x82E;
_IEC7bits     = 0x82E;
 IEC8         = 0x830;
_IEC8         = 0x830;
_IEC8bits     = 0x830;
 IEC9         = 0x832;
_IEC9         = 0x832;
_IEC9bits     = 0x832;
 IEC10        = 0x834;
_IEC10        = 0x834;
_IEC10bits    = 0x834;
 IEC11        = 0x836;
_IEC11        = 0x836;
_IEC11bits    = 0x836;
 IPC0         = 0x840;
_IPC0         = 0x840;
_IPC0bits     = 0x840;
 IPC1         = 0x842;
_IPC1         = 0x842;
_IPC1bits     = 0x842;
 IPC2         = 0x844;
_IPC2         = 0x844;
_IPC2bits     = 0x844;
 IPC3         = 0x846;
_IPC3         = 0x846;
_IPC3bits     = 0x846;
 IPC4         = 0x848;
_IPC4         = 0x848;
_IPC4bits     = 0x848;
 IPC5         = 0x84A;
_IPC5         = 0x84A;
_IPC5bits     = 0x84A;
 IPC6         = 0x84C;
_IPC6         = 0x84C;
_IPC6bits     = 0x84C;
 IPC7         = 0x84E;
_IPC7         = 0x84E;
_IPC7bits     = 0x84E;
 IPC8         = 0x850;
_IPC8         = 0x850;
_IPC8bits     = 0x850;
 IPC9         = 0x852;
_IPC9         = 0x852;
_IPC9bits     = 0x852;
 IPC12        = 0x858;
_IPC12        = 0x858;
_IPC12bits    = 0x858;
 IPC13        = 0x85A;
_IPC13        = 0x85A;
_IPC13bits    = 0x85A;
 IPC14        = 0x85C;
_IPC14        = 0x85C;
_IPC14bits    = 0x85C;
 IPC16        = 0x860;
_IPC16        = 0x860;
_IPC16bits    = 0x860;
 IPC17        = 0x862;
_IPC17        = 0x862;
 IPC18        = 0x864;
_IPC18        = 0x864;
_IPC18bits    = 0x864;
 IPC22        = 0x86C;
_IPC22        = 0x86C;
_IPC22bits    = 0x86C;
 IPC23        = 0x86E;
_IPC23        = 0x86E;
_IPC23bits    = 0x86E;
 IPC24        = 0x870;
_IPC24        = 0x870;
_IPC24bits    = 0x870;
 IPC25        = 0x872;
_IPC25        = 0x872;
_IPC25bits    = 0x872;
 IPC26        = 0x874;
_IPC26        = 0x874;
_IPC26bits    = 0x874;
 IPC27        = 0x876;
_IPC27        = 0x876;
_IPC27bits    = 0x876;
 IPC28        = 0x878;
_IPC28        = 0x878;
_IPC28bits    = 0x878;
 IPC29        = 0x87A;
_IPC29        = 0x87A;
_IPC29bits    = 0x87A;
 IPC31        = 0x87E;
_IPC31        = 0x87E;
_IPC31bits    = 0x87E;
 IPC34        = 0x884;
_IPC34        = 0x884;
_IPC34bits    = 0x884;
 IPC35        = 0x886;
_IPC35        = 0x886;
_IPC35bits    = 0x886;
 IPC36        = 0x888;
_IPC36        = 0x888;
_IPC36bits    = 0x888;
 IPC37        = 0x88A;
_IPC37        = 0x88A;
_IPC37bits    = 0x88A;
 IPC38        = 0x88C;
_IPC38        = 0x88C;
_IPC38bits    = 0x88C;
 IPC39        = 0x88E;
_IPC39        = 0x88E;
_IPC39bits    = 0x88E;
 IPC40        = 0x890;
_IPC40        = 0x890;
_IPC40bits    = 0x890;
 IPC41        = 0x892;
_IPC41        = 0x892;
_IPC41bits    = 0x892;
 IPC42        = 0x894;
_IPC42        = 0x894;
 IPC43        = 0x896;
_IPC43        = 0x896;
_IPC43bits    = 0x896;
 IPC44        = 0x898;
_IPC44        = 0x898;
_IPC44bits    = 0x898;
 IPC45        = 0x89A;
_IPC45        = 0x89A;
_IPC45bits    = 0x89A;
 IPC46        = 0x89C;
_IPC46        = 0x89C;
_IPC46bits    = 0x89C;
 IPC47        = 0x89E;
_IPC47        = 0x89E;
_IPC47bits    = 0x89E;
 INTCON1      = 0x8C0;
_INTCON1      = 0x8C0;
_INTCON1bits  = 0x8C0;
 INTCON2      = 0x8C2;
_INTCON2      = 0x8C2;
_INTCON2bits  = 0x8C2;
 INTCON3      = 0x8C4;
_INTCON3      = 0x8C4;
_INTCON3bits  = 0x8C4;
 INTCON4      = 0x8C6;
_INTCON4      = 0x8C6;
_INTCON4bits  = 0x8C6;
 INTTREG      = 0x8C8;
_INTTREG      = 0x8C8;
_INTTREGbits  = 0x8C8;
 OC1CON1      = 0x900;
_OC1CON1      = 0x900;
_OC1CON1bits  = 0x900;
 OC1CON2      = 0x902;
_OC1CON2      = 0x902;
_OC1CON2bits  = 0x902;
 OC1RS        = 0x904;
_OC1RS        = 0x904;
 OC1R         = 0x906;
_OC1R         = 0x906;
 OC1TMR       = 0x908;
_OC1TMR       = 0x908;
 OC2CON1      = 0x90A;
_OC2CON1      = 0x90A;
_OC2CON1bits  = 0x90A;
 OC2CON2      = 0x90C;
_OC2CON2      = 0x90C;
_OC2CON2bits  = 0x90C;
 OC2RS        = 0x90E;
_OC2RS        = 0x90E;
 OC2R         = 0x910;
_OC2R         = 0x910;
 OC2TMR       = 0x912;
_OC2TMR       = 0x912;
 OC3CON1      = 0x914;
_OC3CON1      = 0x914;
_OC3CON1bits  = 0x914;
 OC3CON2      = 0x916;
_OC3CON2      = 0x916;
_OC3CON2bits  = 0x916;
 OC3RS        = 0x918;
_OC3RS        = 0x918;
 OC3R         = 0x91A;
_OC3R         = 0x91A;
 OC3TMR       = 0x91C;
_OC3TMR       = 0x91C;
 OC4CON1      = 0x91E;
_OC4CON1      = 0x91E;
_OC4CON1bits  = 0x91E;
 OC4CON2      = 0x920;
_OC4CON2      = 0x920;
_OC4CON2bits  = 0x920;
 OC4RS        = 0x922;
_OC4RS        = 0x922;
 OC4R         = 0x924;
_OC4R         = 0x924;
 OC4TMR       = 0x926;
_OC4TMR       = 0x926;
 CLC1CONL     = 0x9C0;
_CLC1CONL     = 0x9C0;
_CLC1CONLbits = 0x9C0;
 CLC1CONH     = 0x9C2;
_CLC1CONH     = 0x9C2;
_CLC1CONHbits = 0x9C2;
 CLC1SEL      = 0x9C4;
_CLC1SEL      = 0x9C4;
_CLC1SELbits  = 0x9C4;
 CLC1SELL     = 0x9C4;
_CLC1SELL     = 0x9C4;
_CLC1SELLbits = 0x9C4;
 CLC1GLSL     = 0x9C8;
_CLC1GLSL     = 0x9C8;
_CLC1GLSLbits = 0x9C8;
 CLC1GLSH     = 0x9CA;
_CLC1GLSH     = 0x9CA;
_CLC1GLSHbits = 0x9CA;
 CLC2CONL     = 0x9CC;
_CLC2CONL     = 0x9CC;
_CLC2CONLbits = 0x9CC;
 CLC2CONH     = 0x9CE;
_CLC2CONH     = 0x9CE;
_CLC2CONHbits = 0x9CE;
 CLC2SEL      = 0x9D0;
_CLC2SEL      = 0x9D0;
_CLC2SELbits  = 0x9D0;
 CLC2SELL     = 0x9D0;
_CLC2SELL     = 0x9D0;
_CLC2SELLbits = 0x9D0;
 CLC2GLSL     = 0x9D4;
_CLC2GLSL     = 0x9D4;
_CLC2GLSLbits = 0x9D4;
 CLC2GLSH     = 0x9D6;
_CLC2GLSH     = 0x9D6;
_CLC2GLSHbits = 0x9D6;
 CLC3CONL     = 0x9D8;
_CLC3CONL     = 0x9D8;
_CLC3CONLbits = 0x9D8;
 CLC3CONH     = 0x9DA;
_CLC3CONH     = 0x9DA;
_CLC3CONHbits = 0x9DA;
 CLC3SEL      = 0x9DC;
_CLC3SEL      = 0x9DC;
_CLC3SELbits  = 0x9DC;
 CLC3SELL     = 0x9DC;
_CLC3SELL     = 0x9DC;
_CLC3SELLbits = 0x9DC;
 CLC3GLSL     = 0x9E0;
_CLC3GLSL     = 0x9E0;
_CLC3GLSLbits = 0x9E0;
 CLC3GLSH     = 0x9E2;
_CLC3GLSH     = 0x9E2;
_CLC3GLSHbits = 0x9E2;
 CLC4CONL     = 0x9E4;
_CLC4CONL     = 0x9E4;
_CLC4CONLbits = 0x9E4;
 CLC4CONH     = 0x9E6;
_CLC4CONH     = 0x9E6;
_CLC4CONHbits = 0x9E6;
 CLC4SEL      = 0x9E8;
_CLC4SEL      = 0x9E8;
_CLC4SELbits  = 0x9E8;
 CLC4SELL     = 0x9E8;
_CLC4SELL     = 0x9E8;
_CLC4SELLbits = 0x9E8;
 CLC4GLSL     = 0x9EC;
_CLC4GLSL     = 0x9EC;
_CLC4GLSLbits = 0x9EC;
 CLC4GLSH     = 0x9EE;
_CLC4GLSH     = 0x9EE;
_CLC4GLSHbits = 0x9EE;
 PTGCST       = 0xAC0;
_PTGCST       = 0xAC0;
_PTGCSTbits   = 0xAC0;
 PTGCON       = 0xAC2;
_PTGCON       = 0xAC2;
_PTGCONbits   = 0xAC2;
 PTGBTE       = 0xAC4;
_PTGBTE       = 0xAC4;
_PTGBTEbits   = 0xAC4;
 PTGHOLD      = 0xAC6;
_PTGHOLD      = 0xAC6;
 PTGT0LIM     = 0xAC8;
_PTGT0LIM     = 0xAC8;
 PTGT1LIM     = 0xACA;
_PTGT1LIM     = 0xACA;
 PTGSDLIM     = 0xACC;
_PTGSDLIM     = 0xACC;
 PTGC0LIM     = 0xACE;
_PTGC0LIM     = 0xACE;
 PTGC1LIM     = 0xAD0;
_PTGC1LIM     = 0xAD0;
 PTGADJ       = 0xAD2;
_PTGADJ       = 0xAD2;
 PTGL0        = 0xAD4;
_PTGL0        = 0xAD4;
 PTGQPTR      = 0xAD6;
_PTGQPTR      = 0xAD6;
_PTGQPTRbits  = 0xAD6;
 PTGQUE0      = 0xAD8;
_PTGQUE0      = 0xAD8;
_PTGQUE0bits  = 0xAD8;
 PTGQUE1      = 0xADA;
_PTGQUE1      = 0xADA;
_PTGQUE1bits  = 0xADA;
 PTGQUE2      = 0xADC;
_PTGQUE2      = 0xADC;
_PTGQUE2bits  = 0xADC;
 PTGQUE3      = 0xADE;
_PTGQUE3      = 0xADE;
_PTGQUE3bits  = 0xADE;
 PTGQUE4      = 0xAE0;
_PTGQUE4      = 0xAE0;
_PTGQUE4bits  = 0xAE0;
 PTGQUE5      = 0xAE2;
_PTGQUE5      = 0xAE2;
_PTGQUE5bits  = 0xAE2;
 PTGQUE6      = 0xAE4;
_PTGQUE6      = 0xAE4;
_PTGQUE6bits  = 0xAE4;
 PTGQUE7      = 0xAE6;
_PTGQUE7      = 0xAE6;
_PTGQUE7bits  = 0xAE6;
 PTGQUE8      = 0xAE8;
_PTGQUE8      = 0xAE8;
_PTGQUE8bits  = 0xAE8;
 PTGQUE9      = 0xAEA;
_PTGQUE9      = 0xAEA;
_PTGQUE9bits  = 0xAEA;
 PTGQUE10     = 0xAEC;
_PTGQUE10     = 0xAEC;
_PTGQUE10bits = 0xAEC;
 PTGQUE11     = 0xAEE;
_PTGQUE11     = 0xAEE;
_PTGQUE11bits = 0xAEE;
 PTGQUE12     = 0xAF0;
_PTGQUE12     = 0xAF0;
_PTGQUE12bits = 0xAF0;
 PTGQUE13     = 0xAF2;
_PTGQUE13     = 0xAF2;
_PTGQUE13bits = 0xAF2;
 PTGQUE14     = 0xAF4;
_PTGQUE14     = 0xAF4;
_PTGQUE14bits = 0xAF4;
 PTGQUE15     = 0xAF6;
_PTGQUE15     = 0xAF6;
_PTGQUE15bits = 0xAF6;
 PTCON        = 0xC00;
_PTCON        = 0xC00;
_PTCONbits    = 0xC00;
 PTCON2       = 0xC02;
_PTCON2       = 0xC02;
_PTCON2bits   = 0xC02;
 PTPER        = 0xC04;
_PTPER        = 0xC04;
 SEVTCMP      = 0xC06;
_SEVTCMP      = 0xC06;
_SEVTCMPbits  = 0xC06;
 MDC          = 0xC0A;
_MDC          = 0xC0A;
 STCON        = 0xC0E;
_STCON        = 0xC0E;
_STCONbits    = 0xC0E;
 STCON2       = 0xC10;
_STCON2       = 0xC10;
_STCON2bits   = 0xC10;
 STPER        = 0xC12;
_STPER        = 0xC12;
 SSEVTCMP     = 0xC14;
_SSEVTCMP     = 0xC14;
_SSEVTCMPbits = 0xC14;
 CHOP         = 0xC1A;
_CHOP         = 0xC1A;
_CHOPbits     = 0xC1A;
 PWMKEY       = 0xC1E;
_PWMKEY       = 0xC1E;
 PWMCON1      = 0xC20;
_PWMCON1      = 0xC20;
_PWMCON1bits  = 0xC20;
 IOCON1       = 0xC22;
_IOCON1       = 0xC22;
_IOCON1bits   = 0xC22;
 FCLCON1      = 0xC24;
_FCLCON1      = 0xC24;
_FCLCON1bits  = 0xC24;
 PDC1         = 0xC26;
_PDC1         = 0xC26;
 PHASE1       = 0xC28;
_PHASE1       = 0xC28;
 DTR1         = 0xC2A;
_DTR1         = 0xC2A;
 ALTDTR1      = 0xC2C;
_ALTDTR1      = 0xC2C;
 SDC1         = 0xC2E;
_SDC1         = 0xC2E;
 SPHASE1      = 0xC30;
_SPHASE1      = 0xC30;
 TRIG1        = 0xC32;
_TRIG1        = 0xC32;
_TRIG1bits    = 0xC32;
 TRGCON1      = 0xC34;
_TRGCON1      = 0xC34;
_TRGCON1bits  = 0xC34;
 STRIG1       = 0xC36;
_STRIG1       = 0xC36;
_STRIG1bits   = 0xC36;
 PWMCAP1      = 0xC38;
_PWMCAP1      = 0xC38;
_PWMCAP1bits  = 0xC38;
 LEBCON1      = 0xC3A;
_LEBCON1      = 0xC3A;
_LEBCON1bits  = 0xC3A;
 LEBDLY1      = 0xC3C;
_LEBDLY1      = 0xC3C;
_LEBDLY1bits  = 0xC3C;
 AUXCON1      = 0xC3E;
_AUXCON1      = 0xC3E;
_AUXCON1bits  = 0xC3E;
 PWMCON2      = 0xC40;
_PWMCON2      = 0xC40;
_PWMCON2bits  = 0xC40;
 IOCON2       = 0xC42;
_IOCON2       = 0xC42;
_IOCON2bits   = 0xC42;
 FCLCON2      = 0xC44;
_FCLCON2      = 0xC44;
_FCLCON2bits  = 0xC44;
 PDC2         = 0xC46;
_PDC2         = 0xC46;
 PHASE2       = 0xC48;
_PHASE2       = 0xC48;
 DTR2         = 0xC4A;
_DTR2         = 0xC4A;
 ALTDTR2      = 0xC4C;
_ALTDTR2      = 0xC4C;
 SDC2         = 0xC4E;
_SDC2         = 0xC4E;
 SPHASE2      = 0xC50;
_SPHASE2      = 0xC50;
 TRIG2        = 0xC52;
_TRIG2        = 0xC52;
_TRIG2bits    = 0xC52;
 TRGCON2      = 0xC54;
_TRGCON2      = 0xC54;
_TRGCON2bits  = 0xC54;
 STRIG2       = 0xC56;
_STRIG2       = 0xC56;
_STRIG2bits   = 0xC56;
 PWMCAP2      = 0xC58;
_PWMCAP2      = 0xC58;
_PWMCAP2bits  = 0xC58;
 LEBCON2      = 0xC5A;
_LEBCON2      = 0xC5A;
_LEBCON2bits  = 0xC5A;
 LEBDLY2      = 0xC5C;
_LEBDLY2      = 0xC5C;
_LEBDLY2bits  = 0xC5C;
 AUXCON2      = 0xC5E;
_AUXCON2      = 0xC5E;
_AUXCON2bits  = 0xC5E;
 PWMCON3      = 0xC60;
_PWMCON3      = 0xC60;
_PWMCON3bits  = 0xC60;
 IOCON3       = 0xC62;
_IOCON3       = 0xC62;
_IOCON3bits   = 0xC62;
 FCLCON3      = 0xC64;
_FCLCON3      = 0xC64;
_FCLCON3bits  = 0xC64;
 PDC3         = 0xC66;
_PDC3         = 0xC66;
 PHASE3       = 0xC68;
_PHASE3       = 0xC68;
 DTR3         = 0xC6A;
_DTR3         = 0xC6A;
 ALTDTR3      = 0xC6C;
_ALTDTR3      = 0xC6C;
 SDC3         = 0xC6E;
_SDC3         = 0xC6E;
 SPHASE3      = 0xC70;
_SPHASE3      = 0xC70;
 TRIG3        = 0xC72;
_TRIG3        = 0xC72;
_TRIG3bits    = 0xC72;
 TRGCON3      = 0xC74;
_TRGCON3      = 0xC74;
_TRGCON3bits  = 0xC74;
 STRIG3       = 0xC76;
_STRIG3       = 0xC76;
_STRIG3bits   = 0xC76;
 PWMCAP3      = 0xC78;
_PWMCAP3      = 0xC78;
_PWMCAP3bits  = 0xC78;
 LEBCON3      = 0xC7A;
_LEBCON3      = 0xC7A;
_LEBCON3bits  = 0xC7A;
 LEBDLY3      = 0xC7C;
_LEBDLY3      = 0xC7C;
_LEBDLY3bits  = 0xC7C;
 AUXCON3      = 0xC7E;
_AUXCON3      = 0xC7E;
_AUXCON3bits  = 0xC7E;
 PWMCON4      = 0xC80;
_PWMCON4      = 0xC80;
_PWMCON4bits  = 0xC80;
 IOCON4       = 0xC82;
_IOCON4       = 0xC82;
_IOCON4bits   = 0xC82;
 FCLCON4      = 0xC84;
_FCLCON4      = 0xC84;
_FCLCON4bits  = 0xC84;
 PDC4         = 0xC86;
_PDC4         = 0xC86;
 PHASE4       = 0xC88;
_PHASE4       = 0xC88;
 DTR4         = 0xC8A;
_DTR4         = 0xC8A;
 ALTDTR4      = 0xC8C;
_ALTDTR4      = 0xC8C;
 SDC4         = 0xC8E;
_SDC4         = 0xC8E;
 SPHASE4      = 0xC90;
_SPHASE4      = 0xC90;
 TRIG4        = 0xC92;
_TRIG4        = 0xC92;
_TRIG4bits    = 0xC92;
 TRGCON4      = 0xC94;
_TRGCON4      = 0xC94;
_TRGCON4bits  = 0xC94;
 STRIG4       = 0xC96;
_STRIG4       = 0xC96;
_STRIG4bits   = 0xC96;
 PWMCAP4      = 0xC98;
_PWMCAP4      = 0xC98;
_PWMCAP4bits  = 0xC98;
 LEBCON4      = 0xC9A;
_LEBCON4      = 0xC9A;
_LEBCON4bits  = 0xC9A;
 LEBDLY4      = 0xC9C;
_LEBDLY4      = 0xC9C;
_LEBDLY4bits  = 0xC9C;
 AUXCON4      = 0xC9E;
_AUXCON4      = 0xC9E;
_AUXCON4bits  = 0xC9E;
 PWMCON5      = 0xCA0;
_PWMCON5      = 0xCA0;
_PWMCON5bits  = 0xCA0;
 IOCON5       = 0xCA2;
_IOCON5       = 0xCA2;
_IOCON5bits   = 0xCA2;
 FCLCON5      = 0xCA4;
_FCLCON5      = 0xCA4;
_FCLCON5bits  = 0xCA4;
 PDC5         = 0xCA6;
_PDC5         = 0xCA6;
 PHASE5       = 0xCA8;
_PHASE5       = 0xCA8;
 DTR5         = 0xCAA;
_DTR5         = 0xCAA;
 ALTDTR5      = 0xCAC;
_ALTDTR5      = 0xCAC;
 SDC5         = 0xCAE;
_SDC5         = 0xCAE;
 SPHASE5      = 0xCB0;
_SPHASE5      = 0xCB0;
 TRIG5        = 0xCB2;
_TRIG5        = 0xCB2;
_TRIG5bits    = 0xCB2;
 TRGCON5      = 0xCB4;
_TRGCON5      = 0xCB4;
_TRGCON5bits  = 0xCB4;
 STRIG5       = 0xCB6;
_STRIG5       = 0xCB6;
_STRIG5bits   = 0xCB6;
 PWMCAP5      = 0xCB8;
_PWMCAP5      = 0xCB8;
_PWMCAP5bits  = 0xCB8;
 LEBCON5      = 0xCBA;
_LEBCON5      = 0xCBA;
_LEBCON5bits  = 0xCBA;
 LEBDLY5      = 0xCBC;
_LEBDLY5      = 0xCBC;
_LEBDLY5bits  = 0xCBC;
 AUXCON5      = 0xCBE;
_AUXCON5      = 0xCBE;
_AUXCON5bits  = 0xCBE;
 PWMCON6      = 0xCC0;
_PWMCON6      = 0xCC0;
_PWMCON6bits  = 0xCC0;
 IOCON6       = 0xCC2;
_IOCON6       = 0xCC2;
_IOCON6bits   = 0xCC2;
 FCLCON6      = 0xCC4;
_FCLCON6      = 0xCC4;
_FCLCON6bits  = 0xCC4;
 PDC6         = 0xCC6;
_PDC6         = 0xCC6;
 PHASE6       = 0xCC8;
_PHASE6       = 0xCC8;
 DTR6         = 0xCCA;
_DTR6         = 0xCCA;
 ALTDTR6      = 0xCCC;
_ALTDTR6      = 0xCCC;
 SDC6         = 0xCCE;
_SDC6         = 0xCCE;
 SPHASE6      = 0xCD0;
_SPHASE6      = 0xCD0;
 TRIG6        = 0xCD2;
_TRIG6        = 0xCD2;
_TRIG6bits    = 0xCD2;
 TRGCON6      = 0xCD4;
_TRGCON6      = 0xCD4;
_TRGCON6bits  = 0xCD4;
 STRIG6       = 0xCD6;
_STRIG6       = 0xCD6;
_STRIG6bits   = 0xCD6;
 PWMCAP6      = 0xCD8;
_PWMCAP6      = 0xCD8;
_PWMCAP6bits  = 0xCD8;
 LEBCON6      = 0xCDA;
_LEBCON6      = 0xCDA;
_LEBCON6bits  = 0xCDA;
 LEBDLY6      = 0xCDC;
_LEBDLY6      = 0xCDC;
_LEBDLY6bits  = 0xCDC;
 AUXCON6      = 0xCDE;
_AUXCON6      = 0xCDE;
_AUXCON6bits  = 0xCDE;
 PWMCON7      = 0xCE0;
_PWMCON7      = 0xCE0;
_PWMCON7bits  = 0xCE0;
 IOCON7       = 0xCE2;
_IOCON7       = 0xCE2;
_IOCON7bits   = 0xCE2;
 FCLCON7      = 0xCE4;
_FCLCON7      = 0xCE4;
_FCLCON7bits  = 0xCE4;
 PDC7         = 0xCE6;
_PDC7         = 0xCE6;
 PHASE7       = 0xCE8;
_PHASE7       = 0xCE8;
 DTR7         = 0xCEA;
_DTR7         = 0xCEA;
 ALTDTR7      = 0xCEC;
_ALTDTR7      = 0xCEC;
 SDC7         = 0xCEE;
_SDC7         = 0xCEE;
 SPHASE7      = 0xCF0;
_SPHASE7      = 0xCF0;
 TRIG7        = 0xCF2;
_TRIG7        = 0xCF2;
_TRIG7bits    = 0xCF2;
 TRGCON7      = 0xCF4;
_TRGCON7      = 0xCF4;
_TRGCON7bits  = 0xCF4;
 STRIG7       = 0xCF6;
_STRIG7       = 0xCF6;
_STRIG7bits   = 0xCF6;
 PWMCAP7      = 0xCF8;
_PWMCAP7      = 0xCF8;
_PWMCAP7bits  = 0xCF8;
 LEBCON7      = 0xCFA;
_LEBCON7      = 0xCFA;
_LEBCON7bits  = 0xCFA;
 LEBDLY7      = 0xCFC;
_LEBDLY7      = 0xCFC;
_LEBDLY7bits  = 0xCFC;
 AUXCON7      = 0xCFE;
_AUXCON7      = 0xCFE;
_AUXCON7bits  = 0xCFE;
 PWMCON8      = 0xD00;
_PWMCON8      = 0xD00;
_PWMCON8bits  = 0xD00;
 IOCON8       = 0xD02;
_IOCON8       = 0xD02;
_IOCON8bits   = 0xD02;
 FCLCON8      = 0xD04;
_FCLCON8      = 0xD04;
_FCLCON8bits  = 0xD04;
 PDC8         = 0xD06;
_PDC8         = 0xD06;
 PHASE8       = 0xD08;
_PHASE8       = 0xD08;
 DTR8         = 0xD0A;
_DTR8         = 0xD0A;
 ALTDTR8      = 0xD0C;
_ALTDTR8      = 0xD0C;
 SDC8         = 0xD0E;
_SDC8         = 0xD0E;
 SPHASE8      = 0xD10;
_SPHASE8      = 0xD10;
 TRIG8        = 0xD12;
_TRIG8        = 0xD12;
_TRIG8bits    = 0xD12;
 TRGCON8      = 0xD14;
_TRGCON8      = 0xD14;
_TRGCON8bits  = 0xD14;
 STRIG8       = 0xD16;
_STRIG8       = 0xD16;
_STRIG8bits   = 0xD16;
 PWMCAP8      = 0xD18;
_PWMCAP8      = 0xD18;
_PWMCAP8bits  = 0xD18;
 LEBCON8      = 0xD1A;
_LEBCON8      = 0xD1A;
_LEBCON8bits  = 0xD1A;
 LEBDLY8      = 0xD1C;
_LEBDLY8      = 0xD1C;
_LEBDLY8bits  = 0xD1C;
 AUXCON8      = 0xD1E;
_AUXCON8      = 0xD1E;
_AUXCON8bits  = 0xD1E;
 TRISA        = 0xE00;
_TRISA        = 0xE00;
_TRISAbits    = 0xE00;
 PORTA        = 0xE02;
_PORTA        = 0xE02;
_PORTAbits    = 0xE02;
 LATA         = 0xE04;
_LATA         = 0xE04;
_LATAbits     = 0xE04;
 ODCA         = 0xE06;
_ODCA         = 0xE06;
_ODCAbits     = 0xE06;
 CNENA        = 0xE08;
_CNENA        = 0xE08;
_CNENAbits    = 0xE08;
 CNPUA        = 0xE0A;
_CNPUA        = 0xE0A;
_CNPUAbits    = 0xE0A;
 CNPDA        = 0xE0C;
_CNPDA        = 0xE0C;
_CNPDAbits    = 0xE0C;
 ANSELA       = 0xE0E;
_ANSELA       = 0xE0E;
_ANSELAbits   = 0xE0E;
 TRISB        = 0xE10;
_TRISB        = 0xE10;
_TRISBbits    = 0xE10;
 PORTB        = 0xE12;
_PORTB        = 0xE12;
_PORTBbits    = 0xE12;
 LATB         = 0xE14;
_LATB         = 0xE14;
_LATBbits     = 0xE14;
 ODCB         = 0xE16;
_ODCB         = 0xE16;
_ODCBbits     = 0xE16;
 CNENB        = 0xE18;
_CNENB        = 0xE18;
_CNENBbits    = 0xE18;
 CNPUB        = 0xE1A;
_CNPUB        = 0xE1A;
_CNPUBbits    = 0xE1A;
 CNPDB        = 0xE1C;
_CNPDB        = 0xE1C;
_CNPDBbits    = 0xE1C;
 ANSELB       = 0xE1E;
_ANSELB       = 0xE1E;
_ANSELBbits   = 0xE1E;
 TRISC        = 0xE20;
_TRISC        = 0xE20;
_TRISCbits    = 0xE20;
 PORTC        = 0xE22;
_PORTC        = 0xE22;
_PORTCbits    = 0xE22;
 LATC         = 0xE24;
_LATC         = 0xE24;
_LATCbits     = 0xE24;
 ODCC         = 0xE26;
_ODCC         = 0xE26;
_ODCCbits     = 0xE26;
 CNENC        = 0xE28;
_CNENC        = 0xE28;
_CNENCbits    = 0xE28;
 CNPUC        = 0xE2A;
_CNPUC        = 0xE2A;
_CNPUCbits    = 0xE2A;
 CNPDC        = 0xE2C;
_CNPDC        = 0xE2C;
_CNPDCbits    = 0xE2C;
 ANSELC       = 0xE2E;
_ANSELC       = 0xE2E;
_ANSELCbits   = 0xE2E;
 TRISD        = 0xE30;
_TRISD        = 0xE30;
_TRISDbits    = 0xE30;
 PORTD        = 0xE32;
_PORTD        = 0xE32;
_PORTDbits    = 0xE32;
 LATD         = 0xE34;
_LATD         = 0xE34;
_LATDbits     = 0xE34;
 ODCD         = 0xE36;
_ODCD         = 0xE36;
_ODCDbits     = 0xE36;
 CNEND        = 0xE38;
_CNEND        = 0xE38;
_CNENDbits    = 0xE38;
 CNPUD        = 0xE3A;
_CNPUD        = 0xE3A;
_CNPUDbits    = 0xE3A;
 CNPDD        = 0xE3C;
_CNPDD        = 0xE3C;
_CNPDDbits    = 0xE3C;
 ANSELD       = 0xE3E;
_ANSELD       = 0xE3E;
 _APPO        = 0xFA0;
__APPO        = 0xFA0;
 _APPIN       = 0xFA2;
__APPIN       = 0xFA2;
 APPS         = 0xFA4;
_APPS         = 0xFA4;
_APPSbits     = 0xFA4;
 STROUTL      = 0xFA6;
_STROUTL      = 0xFA6;
 STROUTH      = 0xFA8;
_STROUTH      = 0xFA8;
 STROVCNT     = 0xFAA;
_STROVCNT     = 0xFAA;
 JDATAH       = 0xFF0;
_JDATAH       = 0xFF0;
 JDATAL       = 0xFF2;
_JDATAL       = 0xFF2;
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 ACCA         = 0x22;
_ACCA         = 0x22;
 ACCB         = 0x28;
_ACCB         = 0x28;
 IC1          = 0x144;
_IC1          = 0x144;
 IC2          = 0x14C;
_IC2          = 0x14C;
 IC3          = 0x154;
_IC3          = 0x154;
 IC4          = 0x15C;
_IC4          = 0x15C;
 OC1          = 0x904;
_OC1          = 0x904;
 OC2          = 0x90E;
_OC2          = 0x90E;
 OC3          = 0x918;
_OC3          = 0x918;
 OC4          = 0x922;
_OC4          = 0x922;
 SPI1         = 0x24A;
_SPI1         = 0x24A;
 SPI2         = 0x26A;
_SPI2         = 0x26A;
 SPI3         = 0x60A;
_SPI3         = 0x60A;
 UART1        = 0x220;
_UART1        = 0x220;
 UART2        = 0x230;
_UART2        = 0x230;
