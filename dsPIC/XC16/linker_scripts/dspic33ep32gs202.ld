/*
 * Linker script for PIC33EP32GS202
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


OUTPUT_ARCH("33EP32GS202")
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

OPTIONAL(-lp33EP32GS202)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x1000,        LENGTH = 0x800
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0x1FC
  program (xr)   : ORIGIN = 0x200,         LENGTH = 0x5580
  FSEC           : ORIGIN = 0x5780,        LENGTH = 0x2
  FBSLIM         : ORIGIN = 0x5790,        LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0x5798,        LENGTH = 0x2
  FOSC           : ORIGIN = 0x579C,        LENGTH = 0x2
  FWDT           : ORIGIN = 0x57A0,        LENGTH = 0x2
  FPOR           : ORIGIN = 0x57A4,        LENGTH = 0x2
  FICD           : ORIGIN = 0x57A8,        LENGTH = 0x2
  FDEVOPT        : ORIGIN = 0x57AC,        LENGTH = 0x2
  FALTREG        : ORIGIN = 0x57B0,        LENGTH = 0x2
  pga1cal        : ORIGIN = 0x800E48,      LENGTH = 0x2
  pga2cal        : ORIGIN = 0x800E4C,      LENGTH = 0x2
}

__FSEC = 0x5780;
__FBSLIM = 0x5790;
__FOSCSEL = 0x5798;
__FOSC = 0x579C;
__FWDT = 0x57A0;
__FPOR = 0x57A4;
__FICD = 0x57A8;
__FDEVOPT = 0x57AC;
__FALTREG = 0x57B0;

__NO_HANDLES = 1;          /* Suppress handles on this device  */
__CODE_BASE = 0x200;
__CODE_LENGTH = 0x5580;
__IVT_BASE  = 0x4;
__DATA_BASE = 0x1000;
__DATA_LENGTH = 0x800;
__YDATA_BASE = 0x1400;
__YDATA_END = 0x1800;


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
    LONG( DEFINED(__Interrupt4)    ? ABSOLUTE(__Interrupt4)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt5)    ? ABSOLUTE(__Interrupt5)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt6)    ? ABSOLUTE(__Interrupt6)    :
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
    LONG( DEFINED(__Interrupt14)    ? ABSOLUTE(__Interrupt14)    :
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
    LONG( DEFINED(__Interrupt37)    ? ABSOLUTE(__Interrupt37)    :
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
    LONG( DEFINED(__CMP2Interrupt)    ? ABSOLUTE(__CMP2Interrupt)    :
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
    LONG( DEFINED(__JTAGInterrupt)    ? ABSOLUTE(__JTAGInterrupt)    :
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
    LONG( DEFINED(__I2C1BCInterrupt)    ? ABSOLUTE(__I2C1BCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt174)    ? ABSOLUTE(__Interrupt174)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt175)    ? ABSOLUTE(__Interrupt175)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt176)    ? ABSOLUTE(__Interrupt176)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCMP0Interrupt)    ? ABSOLUTE(__ADCMP0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCMP1Interrupt)    ? ABSOLUTE(__ADCMP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADFL0Interrupt)    ? ABSOLUTE(__ADFL0Interrupt)    :
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
    LONG( DEFINED(__AltInterrupt4)    ? ABSOLUTE(__AltInterrupt4)    :
         (DEFINED(__Interrupt4)       ? ABSOLUTE(__Interrupt4)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt5)    ? ABSOLUTE(__AltInterrupt5)    :
         (DEFINED(__Interrupt5)       ? ABSOLUTE(__Interrupt5)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt6)    ? ABSOLUTE(__AltInterrupt6)    :
         (DEFINED(__Interrupt6)       ? ABSOLUTE(__Interrupt6)       :
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
    LONG( DEFINED(__AltInterrupt14)    ? ABSOLUTE(__AltInterrupt14)    :
         (DEFINED(__Interrupt14)       ? ABSOLUTE(__Interrupt14)       :
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
    LONG( DEFINED(__AltInterrupt37)    ? ABSOLUTE(__AltInterrupt37)    :
         (DEFINED(__Interrupt37)       ? ABSOLUTE(__Interrupt37)       :
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
    LONG( DEFINED(__AltCMP2Interrupt)    ? ABSOLUTE(__AltCMP2Interrupt)    :
         (DEFINED(__CMP2Interrupt)       ? ABSOLUTE(__CMP2Interrupt)       :
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
    LONG( DEFINED(__AltJTAGInterrupt)    ? ABSOLUTE(__AltJTAGInterrupt)    :
         (DEFINED(__JTAGInterrupt)       ? ABSOLUTE(__JTAGInterrupt)       :
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
    LONG( DEFINED(__AltI2C1BCInterrupt)    ? ABSOLUTE(__AltI2C1BCInterrupt)    :
         (DEFINED(__I2C1BCInterrupt)       ? ABSOLUTE(__I2C1BCInterrupt)       :
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
    LONG( DEFINED(__AltADCMP0Interrupt)    ? ABSOLUTE(__AltADCMP0Interrupt)    :
         (DEFINED(__ADCMP0Interrupt)       ? ABSOLUTE(__ADCMP0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCMP1Interrupt)    ? ABSOLUTE(__AltADCMP1Interrupt)    :
         (DEFINED(__ADCMP1Interrupt)       ? ABSOLUTE(__ADCMP1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADFL0Interrupt)    ? ABSOLUTE(__AltADFL0Interrupt)    :
         (DEFINED(__ADFL0Interrupt)       ? ABSOLUTE(__ADFL0Interrupt)       :
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
 ADIEL        = 0x320;
_ADIEL        = 0x320;
_ADIELbits    = 0x320;
 ADSTATL      = 0x330;
_ADSTATL      = 0x330;
_ADSTATLbits  = 0x330;
 ADCMP0ENL    = 0x338;
_ADCMP0ENL    = 0x338;
_ADCMP0ENLbits = 0x338;
 ADCMP0LO     = 0x33C;
_ADCMP0LO     = 0x33C;
 ADCMP0HI     = 0x33E;
_ADCMP0HI     = 0x33E;
 ADCMP1ENL    = 0x340;
_ADCMP1ENL    = 0x340;
_ADCMP1ENLbits = 0x340;
 ADCMP1LO     = 0x344;
_ADCMP1LO     = 0x344;
 ADCMP1HI     = 0x346;
_ADCMP1HI     = 0x346;
 ADFL0DAT     = 0x368;
_ADFL0DAT     = 0x368;
 ADFL0CON     = 0x36A;
_ADFL0CON     = 0x36A;
_ADFL0CONbits = 0x36A;
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
_ADTRIG3Lbits = 0x38C;
 ADTRIG3H     = 0x38E;
_ADTRIG3H     = 0x38E;
_ADTRIG3Hbits = 0x38E;
 ADCMP0CON    = 0x3A0;
_ADCMP0CON    = 0x3A0;
_ADCMP0CONbits = 0x3A0;
 ADCMP1CON    = 0x3A4;
_ADCMP1CON    = 0x3A4;
_ADCMP1CONbits = 0x3A4;
 ADLVLTRGL    = 0x3D0;
_ADLVLTRGL    = 0x3D0;
_ADLVLTRGLbits = 0x3D0;
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
 ADEIEL       = 0x3F0;
_ADEIEL       = 0x3F0;
_ADEIELbits   = 0x3F0;
 ADEISTATL    = 0x3F8;
_ADEISTATL    = 0x3F8;
_ADEISTATLbits = 0x3F8;
 ADCON5L      = 0x400;
_ADCON5L      = 0x400;
_ADCON5Lbits  = 0x400;
 ADCON5H      = 0x402;
_ADCON5H      = 0x402;
_ADCON5Hbits  = 0x402;
 ADCAL0L      = 0x404;
_ADCAL0L      = 0x404;
_ADCAL0Lbits  = 0x404;
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
 ADCBUF5      = 0x416;
_ADCBUF5      = 0x416;
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
 ADCBUF12     = 0x424;
_ADCBUF12     = 0x424;
 ADCBUF13     = 0x426;
_ADCBUF13     = 0x426;
 ADCBUF14     = 0x428;
_ADCBUF14     = 0x428;
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
 RPOR8        = 0x680;
_RPOR8        = 0x680;
_RPOR8bits    = 0x680;
 RPOR9        = 0x682;
_RPOR9        = 0x682;
_RPOR9bits    = 0x682;
 RPOR10       = 0x684;
_RPOR10       = 0x684;
_RPOR10bits   = 0x684;
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
 RPINR20      = 0x6C8;
_RPINR20      = 0x6C8;
_RPINR20bits  = 0x6C8;
 RPINR21      = 0x6CA;
_RPINR21      = 0x6CA;
_RPINR21bits  = 0x6CA;
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
 IPC7         = 0x84E;
_IPC7         = 0x84E;
_IPC7bits     = 0x84E;
 IPC14        = 0x85C;
_IPC14        = 0x85C;
_IPC14bits    = 0x85C;
 IPC16        = 0x860;
_IPC16        = 0x860;
_IPC16bits    = 0x860;
 IPC18        = 0x864;
_IPC18        = 0x864;
_IPC18bits    = 0x864;
 IPC23        = 0x86E;
_IPC23        = 0x86E;
_IPC23bits    = 0x86E;
 IPC24        = 0x870;
_IPC24        = 0x870;
_IPC24bits    = 0x870;
 IPC25        = 0x872;
_IPC25        = 0x872;
_IPC25bits    = 0x872;
 IPC27        = 0x876;
_IPC27        = 0x876;
_IPC27bits    = 0x876;
 IPC28        = 0x878;
_IPC28        = 0x878;
_IPC28bits    = 0x878;
 IPC29        = 0x87A;
_IPC29        = 0x87A;
_IPC29bits    = 0x87A;
 IPC37        = 0x88A;
_IPC37        = 0x88A;
_IPC37bits    = 0x88A;
 IPC38        = 0x88C;
_IPC38        = 0x88C;
_IPC38bits    = 0x88C;
 IPC39        = 0x88E;
_IPC39        = 0x88E;
_IPC39bits    = 0x88E;
 IPC43        = 0x896;
_IPC43        = 0x896;
_IPC43bits    = 0x896;
 IPC44        = 0x898;
_IPC44        = 0x898;
_IPC44bits    = 0x898;
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
 OC1          = 0x904;
_OC1          = 0x904;
 SPI1         = 0x240;
_SPI1         = 0x240;
 UART1        = 0x220;
_UART1        = 0x220;
