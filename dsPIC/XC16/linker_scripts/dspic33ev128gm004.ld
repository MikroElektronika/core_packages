/*
 * Linker script for PIC33EV128GM004
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


OUTPUT_ARCH("33EV128GM004")
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

OPTIONAL(-lp33EV128GM004)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x1000,        LENGTH = 0x2000
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0x1FC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0x15580
  FSEC           : ORIGIN = 0x15780,       LENGTH = 0x2
  FBSLIM         : ORIGIN = 0x15790,       LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0x15798,       LENGTH = 0x2
  FOSC           : ORIGIN = 0x1579C,       LENGTH = 0x2
  FWDT           : ORIGIN = 0x157A0,       LENGTH = 0x2
  FPOR           : ORIGIN = 0x157A4,       LENGTH = 0x2
  FICD           : ORIGIN = 0x157A8,       LENGTH = 0x2
  FDMTINTVL      : ORIGIN = 0x157AC,       LENGTH = 0x2
  FDMTINTVH      : ORIGIN = 0x157B0,       LENGTH = 0x2
  FDMTCNTL       : ORIGIN = 0x157B4,       LENGTH = 0x2
  FDMTCNTH       : ORIGIN = 0x157B8,       LENGTH = 0x2
  FDMT           : ORIGIN = 0x157BC,       LENGTH = 0x2
  FDEVOPT        : ORIGIN = 0x157C0,       LENGTH = 0x2
  FALTREG        : ORIGIN = 0x157C4,       LENGTH = 0x2
}

__FSEC = 0x15780;
__FBSLIM = 0x15790;
__FOSCSEL = 0x15798;
__FOSC = 0x1579C;
__FWDT = 0x157A0;
__FPOR = 0x157A4;
__FICD = 0x157A8;
__FDMTINTVL = 0x157AC;
__FDMTINTVH = 0x157B0;
__FDMTCNTL = 0x157B4;
__FDMTCNTH = 0x157B8;
__FDMT = 0x157BC;
__FDEVOPT = 0x157C0;
__FALTREG = 0x157C4;

__CODE_BASE = 0x200;
__CODE_LENGTH = 0x15580;
__IVT_BASE  = 0x4;
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
  __FSEC :
  { KEEP (*(__FSEC.sec*))    } >FSEC
  __FBSLIM :
  { KEEP (*(__FBSLIM.sec*))    } >FBSLIM
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
  __FDMTINTVL :
  { KEEP (*(__FDMTINTVL.sec*))    } >FDMTINTVL
  __FDMTINTVH :
  { KEEP (*(__FDMTINTVH.sec*))    } >FDMTINTVH
  __FDMTCNTL :
  { KEEP (*(__FDMTCNTL.sec*))    } >FDMTCNTL
  __FDMTCNTH :
  { KEEP (*(__FDMTCNTH.sec*))    } >FDMTCNTH
  __FDMT :
  { KEEP (*(__FDMT.sec*))    } >FDMT
  __FDEVOPT :
  { KEEP (*(__FDEVOPT.sec*))    } >FDEVOPT
  __FALTREG :
  { KEEP (*(__FALTREG.sec*))    } >FALTREG






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
    LONG( DEFINED(__SPI1ErrInterrupt)    ? ABSOLUTE(__SPI1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1Interrupt)    ? ABSOLUTE(__SPI1Interrupt)    :
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
    LONG( DEFINED(__SPI2ErrInterrupt)    ? ABSOLUTE(__SPI2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2Interrupt)    ? ABSOLUTE(__SPI2Interrupt)    :
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
    LONG( DEFINED(__C1TXInterrupt)    ? ABSOLUTE(__C1TXInterrupt)    :
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
    LONG( DEFINED(__PWM1Interrupt)    ? ABSOLUTE(__PWM1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM2Interrupt)    ? ABSOLUTE(__PWM2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM3Interrupt)    ? ABSOLUTE(__PWM3Interrupt)    :
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
    LONG( DEFINED(__Interrupt124)    ? ABSOLUTE(__Interrupt124)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt125)    ? ABSOLUTE(__Interrupt125)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt126)    ? ABSOLUTE(__Interrupt126)    :
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
    LONG( DEFINED(__Interrupt138)    ? ABSOLUTE(__Interrupt138)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt139)    ? ABSOLUTE(__Interrupt139)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt140)    ? ABSOLUTE(__Interrupt140)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt141)    ? ABSOLUTE(__Interrupt141)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ICDInterrupt)    ? ABSOLUTE(__ICDInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt143)    ? ABSOLUTE(__Interrupt143)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt144)    ? ABSOLUTE(__Interrupt144)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt145)    ? ABSOLUTE(__Interrupt145)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt146)    ? ABSOLUTE(__Interrupt146)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt147)    ? ABSOLUTE(__Interrupt147)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt148)    ? ABSOLUTE(__Interrupt148)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt149)    ? ABSOLUTE(__Interrupt149)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt150)    ? ABSOLUTE(__Interrupt150)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt151)    ? ABSOLUTE(__Interrupt151)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt152)    ? ABSOLUTE(__Interrupt152)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt153)    ? ABSOLUTE(__Interrupt153)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt154)    ? ABSOLUTE(__Interrupt154)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt155)    ? ABSOLUTE(__Interrupt155)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt156)    ? ABSOLUTE(__Interrupt156)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt157)    ? ABSOLUTE(__Interrupt157)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt158)    ? ABSOLUTE(__Interrupt158)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt159)    ? ABSOLUTE(__Interrupt159)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt160)    ? ABSOLUTE(__Interrupt160)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt161)    ? ABSOLUTE(__Interrupt161)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt162)    ? ABSOLUTE(__Interrupt162)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt163)    ? ABSOLUTE(__Interrupt163)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt164)    ? ABSOLUTE(__Interrupt164)    :
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
    LONG( DEFINED(__I2C1Interrupt)    ? ABSOLUTE(__I2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt174)    ? ABSOLUTE(__Interrupt174)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt175)    ? ABSOLUTE(__Interrupt175)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt176)    ? ABSOLUTE(__Interrupt176)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt177)    ? ABSOLUTE(__Interrupt177)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt178)    ? ABSOLUTE(__Interrupt178)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt179)    ? ABSOLUTE(__Interrupt179)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt180)    ? ABSOLUTE(__Interrupt180)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt181)    ? ABSOLUTE(__Interrupt181)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SENT1ERRInterrupt)    ? ABSOLUTE(__SENT1ERRInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SENT1Interrupt)    ? ABSOLUTE(__SENT1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SENT2ERRInterrupt)    ? ABSOLUTE(__SENT2ERRInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SENT2Interrupt)    ? ABSOLUTE(__SENT2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ECCSBEInterrupt)    ? ABSOLUTE(__ECCSBEInterrupt)    :
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
    LONG( DEFINED(__AltSPI2ErrInterrupt)    ? ABSOLUTE(__AltSPI2ErrInterrupt)    :
         (DEFINED(__SPI2ErrInterrupt)       ? ABSOLUTE(__SPI2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2Interrupt)    ? ABSOLUTE(__AltSPI2Interrupt)    :
         (DEFINED(__SPI2Interrupt)       ? ABSOLUTE(__SPI2Interrupt)       :
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
    LONG( DEFINED(__AltC1TXInterrupt)    ? ABSOLUTE(__AltC1TXInterrupt)    :
         (DEFINED(__C1TXInterrupt)       ? ABSOLUTE(__C1TXInterrupt)       :
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
    LONG( DEFINED(__AltPWM1Interrupt)    ? ABSOLUTE(__AltPWM1Interrupt)    :
         (DEFINED(__PWM1Interrupt)       ? ABSOLUTE(__PWM1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM2Interrupt)    ? ABSOLUTE(__AltPWM2Interrupt)    :
         (DEFINED(__PWM2Interrupt)       ? ABSOLUTE(__PWM2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWM3Interrupt)    ? ABSOLUTE(__AltPWM3Interrupt)    :
         (DEFINED(__PWM3Interrupt)       ? ABSOLUTE(__PWM3Interrupt)       :
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
    LONG( DEFINED(__AltInterrupt124)    ? ABSOLUTE(__AltInterrupt124)    :
         (DEFINED(__Interrupt124)       ? ABSOLUTE(__Interrupt124)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt125)    ? ABSOLUTE(__AltInterrupt125)    :
         (DEFINED(__Interrupt125)       ? ABSOLUTE(__Interrupt125)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt126)    ? ABSOLUTE(__AltInterrupt126)    :
         (DEFINED(__Interrupt126)       ? ABSOLUTE(__Interrupt126)       :
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
    LONG( DEFINED(__AltInterrupt138)    ? ABSOLUTE(__AltInterrupt138)    :
         (DEFINED(__Interrupt138)       ? ABSOLUTE(__Interrupt138)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt139)    ? ABSOLUTE(__AltInterrupt139)    :
         (DEFINED(__Interrupt139)       ? ABSOLUTE(__Interrupt139)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt140)    ? ABSOLUTE(__AltInterrupt140)    :
         (DEFINED(__Interrupt140)       ? ABSOLUTE(__Interrupt140)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt141)    ? ABSOLUTE(__AltInterrupt141)    :
         (DEFINED(__Interrupt141)       ? ABSOLUTE(__Interrupt141)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltICDInterrupt)    ? ABSOLUTE(__AltICDInterrupt)    :
         (DEFINED(__ICDInterrupt)       ? ABSOLUTE(__ICDInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt143)    ? ABSOLUTE(__AltInterrupt143)    :
         (DEFINED(__Interrupt143)       ? ABSOLUTE(__Interrupt143)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt144)    ? ABSOLUTE(__AltInterrupt144)    :
         (DEFINED(__Interrupt144)       ? ABSOLUTE(__Interrupt144)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt145)    ? ABSOLUTE(__AltInterrupt145)    :
         (DEFINED(__Interrupt145)       ? ABSOLUTE(__Interrupt145)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt146)    ? ABSOLUTE(__AltInterrupt146)    :
         (DEFINED(__Interrupt146)       ? ABSOLUTE(__Interrupt146)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt147)    ? ABSOLUTE(__AltInterrupt147)    :
         (DEFINED(__Interrupt147)       ? ABSOLUTE(__Interrupt147)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt148)    ? ABSOLUTE(__AltInterrupt148)    :
         (DEFINED(__Interrupt148)       ? ABSOLUTE(__Interrupt148)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt149)    ? ABSOLUTE(__AltInterrupt149)    :
         (DEFINED(__Interrupt149)       ? ABSOLUTE(__Interrupt149)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt150)    ? ABSOLUTE(__AltInterrupt150)    :
         (DEFINED(__Interrupt150)       ? ABSOLUTE(__Interrupt150)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt151)    ? ABSOLUTE(__AltInterrupt151)    :
         (DEFINED(__Interrupt151)       ? ABSOLUTE(__Interrupt151)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt152)    ? ABSOLUTE(__AltInterrupt152)    :
         (DEFINED(__Interrupt152)       ? ABSOLUTE(__Interrupt152)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt153)    ? ABSOLUTE(__AltInterrupt153)    :
         (DEFINED(__Interrupt153)       ? ABSOLUTE(__Interrupt153)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt154)    ? ABSOLUTE(__AltInterrupt154)    :
         (DEFINED(__Interrupt154)       ? ABSOLUTE(__Interrupt154)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt155)    ? ABSOLUTE(__AltInterrupt155)    :
         (DEFINED(__Interrupt155)       ? ABSOLUTE(__Interrupt155)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt156)    ? ABSOLUTE(__AltInterrupt156)    :
         (DEFINED(__Interrupt156)       ? ABSOLUTE(__Interrupt156)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt157)    ? ABSOLUTE(__AltInterrupt157)    :
         (DEFINED(__Interrupt157)       ? ABSOLUTE(__Interrupt157)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt158)    ? ABSOLUTE(__AltInterrupt158)    :
         (DEFINED(__Interrupt158)       ? ABSOLUTE(__Interrupt158)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt159)    ? ABSOLUTE(__AltInterrupt159)    :
         (DEFINED(__Interrupt159)       ? ABSOLUTE(__Interrupt159)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt160)    ? ABSOLUTE(__AltInterrupt160)    :
         (DEFINED(__Interrupt160)       ? ABSOLUTE(__Interrupt160)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt161)    ? ABSOLUTE(__AltInterrupt161)    :
         (DEFINED(__Interrupt161)       ? ABSOLUTE(__Interrupt161)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt162)    ? ABSOLUTE(__AltInterrupt162)    :
         (DEFINED(__Interrupt162)       ? ABSOLUTE(__Interrupt162)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt163)    ? ABSOLUTE(__AltInterrupt163)    :
         (DEFINED(__Interrupt163)       ? ABSOLUTE(__Interrupt163)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt164)    ? ABSOLUTE(__AltInterrupt164)    :
         (DEFINED(__Interrupt164)       ? ABSOLUTE(__Interrupt164)       :
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
    LONG( DEFINED(__AltI2C1Interrupt)    ? ABSOLUTE(__AltI2C1Interrupt)    :
         (DEFINED(__I2C1Interrupt)       ? ABSOLUTE(__I2C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt174)    ? ABSOLUTE(__AltInterrupt174)    :
         (DEFINED(__Interrupt174)       ? ABSOLUTE(__Interrupt174)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt175)    ? ABSOLUTE(__AltInterrupt175)    :
         (DEFINED(__Interrupt175)       ? ABSOLUTE(__Interrupt175)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt176)    ? ABSOLUTE(__AltInterrupt176)    :
         (DEFINED(__Interrupt176)       ? ABSOLUTE(__Interrupt176)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt177)    ? ABSOLUTE(__AltInterrupt177)    :
         (DEFINED(__Interrupt177)       ? ABSOLUTE(__Interrupt177)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt178)    ? ABSOLUTE(__AltInterrupt178)    :
         (DEFINED(__Interrupt178)       ? ABSOLUTE(__Interrupt178)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt179)    ? ABSOLUTE(__AltInterrupt179)    :
         (DEFINED(__Interrupt179)       ? ABSOLUTE(__Interrupt179)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt180)    ? ABSOLUTE(__AltInterrupt180)    :
         (DEFINED(__Interrupt180)       ? ABSOLUTE(__Interrupt180)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt181)    ? ABSOLUTE(__AltInterrupt181)    :
         (DEFINED(__Interrupt181)       ? ABSOLUTE(__Interrupt181)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSENT1ERRInterrupt)    ? ABSOLUTE(__AltSENT1ERRInterrupt)    :
         (DEFINED(__SENT1ERRInterrupt)       ? ABSOLUTE(__SENT1ERRInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSENT1Interrupt)    ? ABSOLUTE(__AltSENT1Interrupt)    :
         (DEFINED(__SENT1Interrupt)       ? ABSOLUTE(__SENT1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSENT2ERRInterrupt)    ? ABSOLUTE(__AltSENT2ERRInterrupt)    :
         (DEFINED(__SENT2ERRInterrupt)       ? ABSOLUTE(__SENT2ERRInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSENT2Interrupt)    ? ABSOLUTE(__AltSENT2Interrupt)    :
         (DEFINED(__SENT2Interrupt)       ? ABSOLUTE(__SENT2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltECCSBEInterrupt)    ? ABSOLUTE(__AltECCSBEInterrupt)    :
         (DEFINED(__ECCSBEInterrupt)       ? ABSOLUTE(__ECCSBEInterrupt)       :
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
 MSTRPR       = 0x58;
_MSTRPR       = 0x58;
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
 AD1CSSH      = 0x32E;
_AD1CSSH      = 0x32E;
_AD1CSSHbits  = 0x32E;
 AD1CSSL      = 0x330;
_AD1CSSL      = 0x330;
_AD1CSSLbits  = 0x330;
 AD1CON4      = 0x332;
_AD1CON4      = 0x332;
_AD1CON4bits  = 0x332;
 CTMUCON1     = 0x33A;
_CTMUCON1     = 0x33A;
_CTMUCON1bits = 0x33A;
 CTMUCON2     = 0x33C;
_CTMUCON2     = 0x33C;
_CTMUCON2bits = 0x33C;
 CTMUICON     = 0x33E;
_CTMUICON     = 0x33E;
_CTMUICONbits = 0x33E;
 SENT1CON1    = 0x500;
_SENT1CON1    = 0x500;
_SENT1CON1bits = 0x500;
 SENT1CON2    = 0x504;
_SENT1CON2    = 0x504;
 SENT1CON3    = 0x508;
_SENT1CON3    = 0x508;
 SENT1STAT    = 0x50C;
_SENT1STAT    = 0x50C;
_SENT1STATbits = 0x50C;
 SENT1SYNC    = 0x510;
_SENT1SYNC    = 0x510;
 SENT1DATL    = 0x514;
_SENT1DATL    = 0x514;
_SENT1DATLbits = 0x514;
 SENT1DATH    = 0x516;
_SENT1DATH    = 0x516;
_SENT1DATHbits = 0x516;
 SENT2CON1    = 0x520;
_SENT2CON1    = 0x520;
_SENT2CON1bits = 0x520;
 SENT2CON2    = 0x524;
_SENT2CON2    = 0x524;
 SENT2CON3    = 0x528;
_SENT2CON3    = 0x528;
 SENT2STAT    = 0x52C;
_SENT2STAT    = 0x52C;
_SENT2STATbits = 0x52C;
 SENT2SYNC    = 0x530;
_SENT2SYNC    = 0x530;
 SENT2DATL    = 0x534;
_SENT2DATL    = 0x534;
_SENT2DATLbits = 0x534;
 SENT2DATH    = 0x536;
_SENT2DATH    = 0x536;
_SENT2DATHbits = 0x536;
 RPOR0        = 0x670;
_RPOR0        = 0x670;
_RPOR0bits    = 0x670;
 RPOR1        = 0x672;
_RPOR1        = 0x672;
_RPOR1bits    = 0x672;
 RPOR2        = 0x674;
_RPOR2        = 0x674;
_RPOR2bits    = 0x674;
 RPOR3        = 0x676;
_RPOR3        = 0x676;
_RPOR3bits    = 0x676;
 RPOR4        = 0x678;
_RPOR4        = 0x678;
_RPOR4bits    = 0x678;
 RPOR5        = 0x67A;
_RPOR5        = 0x67A;
_RPOR5bits    = 0x67A;
 RPOR6        = 0x67C;
_RPOR6        = 0x67C;
_RPOR6bits    = 0x67C;
 RPOR7        = 0x67E;
_RPOR7        = 0x67E;
_RPOR7bits    = 0x67E;
 RPOR10       = 0x684;
_RPOR10       = 0x684;
_RPOR10bits   = 0x684;
 RPOR11       = 0x686;
_RPOR11       = 0x686;
_RPOR11bits   = 0x686;
 RPOR12       = 0x688;
_RPOR12       = 0x688;
_RPOR12bits   = 0x688;
 RPOR13       = 0x68A;
_RPOR13       = 0x68A;
_RPOR13bits   = 0x68A;
 RPINR0       = 0x6A0;
_RPINR0       = 0x6A0;
_RPINR0bits   = 0x6A0;
 RPINR1       = 0x6A2;
_RPINR1       = 0x6A2;
_RPINR1bits   = 0x6A2;
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
 RPINR18      = 0x6C4;
_RPINR18      = 0x6C4;
_RPINR18bits  = 0x6C4;
 RPINR19      = 0x6C6;
_RPINR19      = 0x6C6;
_RPINR19bits  = 0x6C6;
 RPINR22      = 0x6CC;
_RPINR22      = 0x6CC;
_RPINR22bits  = 0x6CC;
 RPINR23      = 0x6CE;
_RPINR23      = 0x6CE;
_RPINR23bits  = 0x6CE;
 RPINR37      = 0x6EA;
_RPINR37      = 0x6EA;
_RPINR37bits  = 0x6EA;
 RPINR38      = 0x6EC;
_RPINR38      = 0x6EC;
_RPINR38bits  = 0x6EC;
 RPINR39      = 0x6EE;
_RPINR39      = 0x6EE;
_RPINR39bits  = 0x6EE;
 RPINR44      = 0x6F8;
_RPINR44      = 0x6F8;
_RPINR44bits  = 0x6F8;
 RPINR45      = 0x6FA;
_RPINR45      = 0x6FA;
_RPINR45bits  = 0x6FA;
 DMTCON       = 0x700;
_DMTCON       = 0x700;
_DMTCONbits   = 0x700;
 DMTPRECLR    = 0x704;
_DMTPRECLR    = 0x704;
_DMTPRECLRbits = 0x704;
 DMTCLR       = 0x708;
_DMTCLR       = 0x708;
_DMTCLRbits   = 0x708;
 DMTSTAT      = 0x70C;
_DMTSTAT      = 0x70C;
_DMTSTATbits  = 0x70C;
 DMTCNTL      = 0x710;
_DMTCNTL      = 0x710;
 DMTCNTH      = 0x712;
_DMTCNTH      = 0x712;
 DMTHOLDREG   = 0x714;
_DMTHOLDREG   = 0x714;
 DMTPSCNTL    = 0x718;
_DMTPSCNTL    = 0x718;
 DMTPSCNTH    = 0x71A;
_DMTPSCNTH    = 0x71A;
 DMTPSINTVL   = 0x71C;
_DMTPSINTVL   = 0x71C;
 DMTPSINTVH   = 0x71E;
_DMTPSINTVH   = 0x71E;
 NVMCON       = 0x728;
_NVMCON       = 0x728;
_NVMCONbits   = 0x728;
 NVMADR       = 0x72A;
_NVMADR       = 0x72A;
 NVMADRU      = 0x72C;
_NVMADRU      = 0x72C;
_NVMADRUbits  = 0x72C;
 NVMKEY       = 0x72E;
_NVMKEY       = 0x72E;
 NVMSRCADRL   = 0x730;
_NVMSRCADRL   = 0x730;
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
 REFOCON      = 0x74E;
_REFOCON      = 0x74E;
_REFOCONbits  = 0x74E;
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
 IFS8         = 0x810;
_IFS8         = 0x810;
_IFS8bits     = 0x810;
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
 IEC8         = 0x830;
_IEC8         = 0x830;
_IEC8bits     = 0x830;
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
 IPC14        = 0x85C;
_IPC14        = 0x85C;
_IPC14bits    = 0x85C;
 IPC16        = 0x860;
_IPC16        = 0x860;
_IPC16bits    = 0x860;
 IPC19        = 0x866;
_IPC19        = 0x866;
_IPC19bits    = 0x866;
 IPC23        = 0x86E;
_IPC23        = 0x86E;
_IPC23bits    = 0x86E;
 IPC24        = 0x870;
_IPC24        = 0x870;
_IPC24bits    = 0x870;
 IPC35        = 0x886;
_IPC35        = 0x886;
_IPC35bits    = 0x886;
 IPC43        = 0x896;
_IPC43        = 0x896;
_IPC43bits    = 0x896;
 IPC45        = 0x89A;
_IPC45        = 0x89A;
_IPC45bits    = 0x89A;
 IPC46        = 0x89C;
_IPC46        = 0x89C;
_IPC46bits    = 0x89C;
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
 CMSTAT       = 0xA80;
_CMSTAT       = 0xA80;
_CMSTATbits   = 0xA80;
 CVR1CON      = 0xA82;
_CVR1CON      = 0xA82;
_CVR1CONbits  = 0xA82;
 CM1CON       = 0xA84;
_CM1CON       = 0xA84;
_CM1CONbits   = 0xA84;
 CM1MSKSRC    = 0xA86;
_CM1MSKSRC    = 0xA86;
_CM1MSKSRCbits = 0xA86;
 CM1MSKCON    = 0xA88;
_CM1MSKCON    = 0xA88;
_CM1MSKCONbits = 0xA88;
 CM1FLTR      = 0xA8A;
_CM1FLTR      = 0xA8A;
_CM1FLTRbits  = 0xA8A;
 CM2CON       = 0xA8C;
_CM2CON       = 0xA8C;
_CM2CONbits   = 0xA8C;
 CM2MSKSRC    = 0xA8E;
_CM2MSKSRC    = 0xA8E;
_CM2MSKSRCbits = 0xA8E;
 CM2MSKCON    = 0xA90;
_CM2MSKCON    = 0xA90;
_CM2MSKCONbits = 0xA90;
 CM2FLTR      = 0xA92;
_CM2FLTR      = 0xA92;
_CM2FLTRbits  = 0xA92;
 CM3CON       = 0xA94;
_CM3CON       = 0xA94;
_CM3CONbits   = 0xA94;
 CM3MSKSRC    = 0xA96;
_CM3MSKSRC    = 0xA96;
_CM3MSKSRCbits = 0xA96;
 CM3MSKCON    = 0xA98;
_CM3MSKCON    = 0xA98;
_CM3MSKCONbits = 0xA98;
 CM3FLTR      = 0xA9A;
_CM3FLTR      = 0xA9A;
_CM3FLTRbits  = 0xA9A;
 CM4CON       = 0xA9C;
_CM4CON       = 0xA9C;
_CM4CONbits   = 0xA9C;
 CM4MSKSRC    = 0xA9E;
_CM4MSKSRC    = 0xA9E;
_CM4MSKSRCbits = 0xA9E;
 CM4MSKCON    = 0xAA0;
_CM4MSKCON    = 0xAA0;
_CM4MSKCONbits = 0xAA0;
 CM4FLTR      = 0xAA2;
_CM4FLTR      = 0xAA2;
_CM4FLTRbits  = 0xAA2;
 CM5CON       = 0xAA4;
_CM5CON       = 0xAA4;
_CM5CONbits   = 0xAA4;
 CM5MSKSRC    = 0xAA6;
_CM5MSKSRC    = 0xAA6;
_CM5MSKSRCbits = 0xAA6;
 CM5MSKCON    = 0xAA8;
_CM5MSKCON    = 0xAA8;
_CM5MSKCONbits = 0xAA8;
 CM5FLTR      = 0xAAA;
_CM5FLTR      = 0xAAA;
_CM5FLTRbits  = 0xAAA;
 CVR2CON      = 0xAB4;
_CVR2CON      = 0xAB4;
_CVR2CONbits  = 0xAB4;
 DMA0CON      = 0xB00;
_DMA0CON      = 0xB00;
_DMA0CONbits  = 0xB00;
 DMA0REQ      = 0xB02;
_DMA0REQ      = 0xB02;
_DMA0REQbits  = 0xB02;
 DMA0STAL     = 0xB04;
_DMA0STAL     = 0xB04;
 DMA0STAH     = 0xB06;
_DMA0STAH     = 0xB06;
_DMA0STAHbits = 0xB06;
 DMA0STBL     = 0xB08;
_DMA0STBL     = 0xB08;
 DMA0STBH     = 0xB0A;
_DMA0STBH     = 0xB0A;
_DMA0STBHbits = 0xB0A;
 DMA0PAD      = 0xB0C;
_DMA0PAD      = 0xB0C;
 DMA0CNT      = 0xB0E;
_DMA0CNT      = 0xB0E;
_DMA0CNTbits  = 0xB0E;
 DMA1CON      = 0xB10;
_DMA1CON      = 0xB10;
_DMA1CONbits  = 0xB10;
 DMA1REQ      = 0xB12;
_DMA1REQ      = 0xB12;
_DMA1REQbits  = 0xB12;
 DMA1STAL     = 0xB14;
_DMA1STAL     = 0xB14;
 DMA1STAH     = 0xB16;
_DMA1STAH     = 0xB16;
_DMA1STAHbits = 0xB16;
 DMA1STBL     = 0xB18;
_DMA1STBL     = 0xB18;
 DMA1STBH     = 0xB1A;
_DMA1STBH     = 0xB1A;
_DMA1STBHbits = 0xB1A;
 DMA1PAD      = 0xB1C;
_DMA1PAD      = 0xB1C;
 DMA1CNT      = 0xB1E;
_DMA1CNT      = 0xB1E;
_DMA1CNTbits  = 0xB1E;
 DMA2CON      = 0xB20;
_DMA2CON      = 0xB20;
_DMA2CONbits  = 0xB20;
 DMA2REQ      = 0xB22;
_DMA2REQ      = 0xB22;
_DMA2REQbits  = 0xB22;
 DMA2STAL     = 0xB24;
_DMA2STAL     = 0xB24;
 DMA2STAH     = 0xB26;
_DMA2STAH     = 0xB26;
_DMA2STAHbits = 0xB26;
 DMA2STBL     = 0xB28;
_DMA2STBL     = 0xB28;
 DMA2STBH     = 0xB2A;
_DMA2STBH     = 0xB2A;
_DMA2STBHbits = 0xB2A;
 DMA2PAD      = 0xB2C;
_DMA2PAD      = 0xB2C;
 DMA2CNT      = 0xB2E;
_DMA2CNT      = 0xB2E;
_DMA2CNTbits  = 0xB2E;
 DMA3CON      = 0xB30;
_DMA3CON      = 0xB30;
_DMA3CONbits  = 0xB30;
 DMA3REQ      = 0xB32;
_DMA3REQ      = 0xB32;
_DMA3REQbits  = 0xB32;
 DMA3STAL     = 0xB34;
_DMA3STAL     = 0xB34;
 DMA3STAH     = 0xB36;
_DMA3STAH     = 0xB36;
_DMA3STAHbits = 0xB36;
 DMA3STBL     = 0xB38;
_DMA3STBL     = 0xB38;
 DMA3STBH     = 0xB3A;
_DMA3STBH     = 0xB3A;
_DMA3STBHbits = 0xB3A;
 DMA3PAD      = 0xB3C;
_DMA3PAD      = 0xB3C;
 DMA3CNT      = 0xB3E;
_DMA3CNT      = 0xB3E;
_DMA3CNTbits  = 0xB3E;
 DMAPWC       = 0xBF0;
_DMAPWC       = 0xBF0;
_DMAPWCbits   = 0xBF0;
 DMARQC       = 0xBF2;
_DMARQC       = 0xBF2;
_DMARQCbits   = 0xBF2;
 DMAPPS       = 0xBF4;
_DMAPPS       = 0xBF4;
_DMAPPSbits   = 0xBF4;
 DMALCA       = 0xBF6;
_DMALCA       = 0xBF6;
_DMALCAbits   = 0xBF6;
 DSADRL       = 0xBF8;
_DSADRL       = 0xBF8;
 DSADRH       = 0xBFA;
_DSADRH       = 0xBFA;
_DSADRHbits   = 0xBFA;
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
 MDC          = 0xC0A;
_MDC          = 0xC0A;
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
 TRIG1        = 0xC32;
_TRIG1        = 0xC32;
_TRIG1bits    = 0xC32;
 TRGCON1      = 0xC34;
_TRGCON1      = 0xC34;
_TRGCON1bits  = 0xC34;
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
 TRIG2        = 0xC52;
_TRIG2        = 0xC52;
_TRIG2bits    = 0xC52;
 TRGCON2      = 0xC54;
_TRGCON2      = 0xC54;
_TRGCON2bits  = 0xC54;
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
 TRIG3        = 0xC72;
_TRIG3        = 0xC72;
_TRIG3bits    = 0xC72;
 TRGCON3      = 0xC74;
_TRGCON3      = 0xC74;
_TRGCON3bits  = 0xC74;
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
 SR1A         = 0xE10;
_SR1A         = 0xE10;
_SR1Abits     = 0xE10;
 SR0A         = 0xE12;
_SR0A         = 0xE12;
_SR0Abits     = 0xE12;
 TRISB        = 0xE14;
_TRISB        = 0xE14;
_TRISBbits    = 0xE14;
 PORTB        = 0xE16;
_PORTB        = 0xE16;
_PORTBbits    = 0xE16;
 LATB         = 0xE18;
_LATB         = 0xE18;
_LATBbits     = 0xE18;
 ODCB         = 0xE1A;
_ODCB         = 0xE1A;
_ODCBbits     = 0xE1A;
 CNENB        = 0xE1C;
_CNENB        = 0xE1C;
_CNENBbits    = 0xE1C;
 CNPUB        = 0xE1E;
_CNPUB        = 0xE1E;
_CNPUBbits    = 0xE1E;
 CNPDB        = 0xE20;
_CNPDB        = 0xE20;
_CNPDBbits    = 0xE20;
 ANSELB       = 0xE22;
_ANSELB       = 0xE22;
_ANSELBbits   = 0xE22;
 SR1B         = 0xE24;
_SR1B         = 0xE24;
_SR1Bbits     = 0xE24;
 SR0B         = 0xE26;
_SR0B         = 0xE26;
_SR0Bbits     = 0xE26;
 TRISC        = 0xE28;
_TRISC        = 0xE28;
_TRISCbits    = 0xE28;
 PORTC        = 0xE2A;
_PORTC        = 0xE2A;
_PORTCbits    = 0xE2A;
 LATC         = 0xE2C;
_LATC         = 0xE2C;
_LATCbits     = 0xE2C;
 ODCC         = 0xE2E;
_ODCC         = 0xE2E;
_ODCCbits     = 0xE2E;
 CNENC        = 0xE30;
_CNENC        = 0xE30;
_CNENCbits    = 0xE30;
 CNPUC        = 0xE32;
_CNPUC        = 0xE32;
_CNPUCbits    = 0xE32;
 CNPDC        = 0xE34;
_CNPDC        = 0xE34;
_CNPDCbits    = 0xE34;
 ANSELC       = 0xE36;
_ANSELC       = 0xE36;
_ANSELCbits   = 0xE36;
 SR1C         = 0xE38;
_SR1C         = 0xE38;
_SR1Cbits     = 0xE38;
 SR0C         = 0xE3A;
_SR0C         = 0xE3A;
_SR0Cbits     = 0xE3A;
 FEXL         = 0xF80;
_FEXL         = 0xF80;
 FEXU         = 0xF82;
_FEXU         = 0xF82;
_FEXUbits     = 0xF82;
 FEX2L        = 0xF84;
_FEX2L        = 0xF84;
 FEX2U        = 0xF86;
_FEX2U        = 0xF86;
_FEX2Ubits    = 0xF86;
 VISI         = 0xF88;
_VISI         = 0xF88;
 DPCL         = 0xF8A;
_DPCL         = 0xF8A;
 DPCH         = 0xF8C;
_DPCH         = 0xF8C;
_DPCHbits     = 0xF8C;
 APPO         = 0xFA0;
_APPO         = 0xFA0;
 APPI         = 0xFA2;
_APPI         = 0xFA2;
 APPS         = 0xFA4;
_APPS         = 0xFA4;
_APPSbits     = 0xFA4;
 STROUTL      = 0xFA6;
_STROUTL      = 0xFA6;
 STROUTH      = 0xFA8;
_STROUTH      = 0xFA8;
 STROVCNT     = 0xFAA;
_STROVCNT     = 0xFAA;
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
 SPI1         = 0x240;
_SPI1         = 0x240;
 SPI2         = 0x260;
_SPI2         = 0x260;
 UART1        = 0x220;
_UART1        = 0x220;
 UART2        = 0x230;
_UART2        = 0x230;
