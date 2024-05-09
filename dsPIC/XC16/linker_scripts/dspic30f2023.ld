/*
 * Linker script for PIC30F2023
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


OUTPUT_ARCH("30F2023")
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

OPTIONAL(-lp30F2023)
OPTIONAL(-lfx)

/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr)   : ORIGIN = 0x800,         LENGTH = 0x200
  reset          : ORIGIN = 0x0,           LENGTH = 0x4
  ivt            : ORIGIN = 0x4,           LENGTH = 0x7C
  _reserved      : ORIGIN = 0x80,          LENGTH = 0x4
  aivt           : ORIGIN = 0x84,          LENGTH = 0x7C
  program (xr)   : ORIGIN = 0x100,         LENGTH = 0x1F00
  FBS            : ORIGIN = 0xF80000,      LENGTH = 0x2
  FGS            : ORIGIN = 0xF80004,      LENGTH = 0x2
  FOSCSEL        : ORIGIN = 0xF80006,      LENGTH = 0x2
  FOSC           : ORIGIN = 0xF80008,      LENGTH = 0x2
  FWDT           : ORIGIN = 0xF8000A,      LENGTH = 0x2
  FPOR           : ORIGIN = 0xF8000C,      LENGTH = 0x2
  FICD           : ORIGIN = 0xF8000E,      LENGTH = 0x2
}

__FBS = 0xF80000;
__FGS = 0xF80004;
__FOSCSEL = 0xF80006;
__FOSC = 0xF80008;
__FWDT = 0xF8000A;
__FPOR = 0xF8000C;
__FICD = 0xF8000E;

__NO_HANDLES = 1;          /* Suppress handles on this device  */
__CODE_BASE = 0x100;
__CODE_LENGTH = 0x1F00;
__IVT_BASE  = 0x4;
__AIVT_BASE = 0x84;
__DATA_BASE = 0x800;
__DATA_LENGTH = 0x200;
__YDATA_BASE = 0x900;
__YDATA_END = 0xA00;


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
  ** User-Defined Section in Data Memory
  **
  ** note: can specify an address using
  **       the following syntax:
  **
  **       userdata 0x1234 :
  **         {
  **           *(userdata);
  **         } >data
  */
  userdata :
  {
        *(userdata);
  } >data


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
    LONG( DEFINED(__OC2Interrupt)    ? ABSOLUTE(__OC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T2Interrupt)    ? ABSOLUTE(__T2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T3Interrupt)    ? ABSOLUTE(__T3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1Interrupt)    ? ABSOLUTE(__SPI1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1RXInterrupt)    ? ABSOLUTE(__U1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1TXInterrupt)    ? ABSOLUTE(__U1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADCInterrupt)    ? ABSOLUTE(__ADCInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__NVMInterrupt)    ? ABSOLUTE(__NVMInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2CInterrupt)    ? ABSOLUTE(__SI2CInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2CInterrupt)    ? ABSOLUTE(__MI2CInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt15)    ? ABSOLUTE(__Interrupt15)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT1Interrupt)    ? ABSOLUTE(__INT1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT2Interrupt)    ? ABSOLUTE(__INT2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWMSpEventMatchInterrupt)    ? ABSOLUTE(__PWMSpEventMatchInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM1Interrupt)    ? ABSOLUTE(__PWM1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM2Interrupt)    ? ABSOLUTE(__PWM2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM3Interrupt)    ? ABSOLUTE(__PWM3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__PWM4Interrupt)    ? ABSOLUTE(__PWM4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt23)    ? ABSOLUTE(__Interrupt23)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt24)    ? ABSOLUTE(__Interrupt24)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt25)    ? ABSOLUTE(__Interrupt25)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt26)    ? ABSOLUTE(__Interrupt26)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CNInterrupt)    ? ABSOLUTE(__CNInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt28)    ? ABSOLUTE(__Interrupt28)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP1Interrupt)    ? ABSOLUTE(__CMP1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP2Interrupt)    ? ABSOLUTE(__CMP2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP3Interrupt)    ? ABSOLUTE(__CMP3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CMP4Interrupt)    ? ABSOLUTE(__CMP4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt33)    ? ABSOLUTE(__Interrupt33)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt34)    ? ABSOLUTE(__Interrupt34)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt35)    ? ABSOLUTE(__Interrupt35)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt36)    ? ABSOLUTE(__Interrupt36)    :
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
    LONG( DEFINED(__AltU1RXInterrupt)    ? ABSOLUTE(__AltU1RXInterrupt)    :
         (DEFINED(__U1RXInterrupt)       ? ABSOLUTE(__U1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1TXInterrupt)    ? ABSOLUTE(__AltU1TXInterrupt)    :
         (DEFINED(__U1TXInterrupt)       ? ABSOLUTE(__U1TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADCInterrupt)    ? ABSOLUTE(__AltADCInterrupt)    :
         (DEFINED(__ADCInterrupt)       ? ABSOLUTE(__ADCInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltNVMInterrupt)    ? ABSOLUTE(__AltNVMInterrupt)    :
         (DEFINED(__NVMInterrupt)       ? ABSOLUTE(__NVMInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2CInterrupt)    ? ABSOLUTE(__AltSI2CInterrupt)    :
         (DEFINED(__SI2CInterrupt)       ? ABSOLUTE(__SI2CInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2CInterrupt)    ? ABSOLUTE(__AltMI2CInterrupt)    :
         (DEFINED(__MI2CInterrupt)       ? ABSOLUTE(__MI2CInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt15)    ? ABSOLUTE(__AltInterrupt15)    :
         (DEFINED(__Interrupt15)       ? ABSOLUTE(__Interrupt15)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT1Interrupt)    ? ABSOLUTE(__AltINT1Interrupt)    :
         (DEFINED(__INT1Interrupt)       ? ABSOLUTE(__INT1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT2Interrupt)    ? ABSOLUTE(__AltINT2Interrupt)    :
         (DEFINED(__INT2Interrupt)       ? ABSOLUTE(__INT2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltPWMSpEventMatchInterrupt)    ? ABSOLUTE(__AltPWMSpEventMatchInterrupt)    :
         (DEFINED(__PWMSpEventMatchInterrupt)       ? ABSOLUTE(__PWMSpEventMatchInterrupt)       :
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
    LONG( DEFINED(__AltCNInterrupt)    ? ABSOLUTE(__AltCNInterrupt)    :
         (DEFINED(__CNInterrupt)       ? ABSOLUTE(__CNInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt28)    ? ABSOLUTE(__AltInterrupt28)    :
         (DEFINED(__Interrupt28)       ? ABSOLUTE(__Interrupt28)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCMP1Interrupt)    ? ABSOLUTE(__AltCMP1Interrupt)    :
         (DEFINED(__CMP1Interrupt)       ? ABSOLUTE(__CMP1Interrupt)       :
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
_DISICNTbits  = 0x52;
 CNEN1        = 0x60;
_CNEN1        = 0x60;
_CNEN1bits    = 0x60;
 CNPU1        = 0x68;
_CNPU1        = 0x68;
_CNPU1bits    = 0x68;
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
 IEC0         = 0x94;
_IEC0         = 0x94;
_IEC0bits     = 0x94;
 IEC1         = 0x96;
_IEC1         = 0x96;
_IEC1bits     = 0x96;
 IEC2         = 0x98;
_IEC2         = 0x98;
_IEC2bits     = 0x98;
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
 I2CRCV       = 0x200;
_I2CRCV       = 0x200;
_I2CRCVbits   = 0x200;
 I2CTRN       = 0x202;
_I2CTRN       = 0x202;
_I2CTRNbits   = 0x202;
 I2CBRG       = 0x204;
_I2CBRG       = 0x204;
_I2CBRGbits   = 0x204;
 I2CCON       = 0x206;
_I2CCON       = 0x206;
_I2CCONbits   = 0x206;
 I2CSTAT      = 0x208;
_I2CSTAT      = 0x208;
_I2CSTATbits  = 0x208;
 I2CADD       = 0x20A;
_I2CADD       = 0x20A;
_I2CADDbits   = 0x20A;
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
 SPI1STAT     = 0x240;
_SPI1STAT     = 0x240;
_SPI1STATbits = 0x240;
 SPI1CON1     = 0x242;
_SPI1CON1     = 0x242;
_SPI1CON1bits = 0x242;
 SPI1CON2     = 0x244;
_SPI1CON2     = 0x244;
_SPI1CON2bits = 0x244;
 SPI1BUF      = 0x246;
_SPI1BUF      = 0x246;
 TRISA        = 0x2C0;
_TRISA        = 0x2C0;
_TRISAbits    = 0x2C0;
 PORTA        = 0x2C2;
_PORTA        = 0x2C2;
_PORTAbits    = 0x2C2;
 LATA         = 0x2C4;
_LATA         = 0x2C4;
_LATAbits     = 0x2C4;
 TRISB        = 0x2C6;
_TRISB        = 0x2C6;
_TRISBbits    = 0x2C6;
 PORTB        = 0x2C8;
_PORTB        = 0x2C8;
_PORTBbits    = 0x2C8;
 LATB         = 0x2CA;
_LATB         = 0x2CA;
_LATBbits     = 0x2CA;
 TRISD        = 0x2D2;
_TRISD        = 0x2D2;
_TRISDbits    = 0x2D2;
 PORTD        = 0x2D4;
_PORTD        = 0x2D4;
_PORTDbits    = 0x2D4;
 LATD         = 0x2D6;
_LATD         = 0x2D6;
_LATDbits     = 0x2D6;
 TRISE        = 0x2D8;
_TRISE        = 0x2D8;
_TRISEbits    = 0x2D8;
 PORTE        = 0x2DA;
_PORTE        = 0x2DA;
_PORTEbits    = 0x2DA;
 LATE         = 0x2DC;
_LATE         = 0x2DC;
_LATEbits     = 0x2DC;
 TRISF        = 0x2DE;
_TRISF        = 0x2DE;
_TRISFbits    = 0x2DE;
 PORTF        = 0x2E0;
_PORTF        = 0x2E0;
_PORTFbits    = 0x2E0;
 LATF         = 0x2E2;
_LATF         = 0x2E2;
_LATFbits     = 0x2E2;
 TRISG        = 0x2E4;
_TRISG        = 0x2E4;
_TRISGbits    = 0x2E4;
 PORTG        = 0x2E6;
_PORTG        = 0x2E6;
_PORTGbits    = 0x2E6;
 LATG         = 0x2E8;
_LATG         = 0x2E8;
_LATGbits     = 0x2E8;
 ADCON        = 0x300;
_ADCON        = 0x300;
_ADCONbits    = 0x300;
 ADPCFG       = 0x302;
_ADPCFG       = 0x302;
_ADPCFGbits   = 0x302;
 ADSTAT       = 0x306;
_ADSTAT       = 0x306;
_ADSTATbits   = 0x306;
 ADBASE       = 0x308;
_ADBASE       = 0x308;
_ADBASEbits   = 0x308;
 ADCPC0       = 0x30A;
_ADCPC0       = 0x30A;
_ADCPC0bits   = 0x30A;
 ADCPC1       = 0x30C;
_ADCPC1       = 0x30C;
_ADCPC1bits   = 0x30C;
 ADCPC2       = 0x30E;
_ADCPC2       = 0x30E;
_ADCPC2bits   = 0x30E;
 ADCBUF0      = 0x320;
_ADCBUF0      = 0x320;
 ADCBUF1      = 0x322;
_ADCBUF1      = 0x322;
 ADCBUF2      = 0x324;
_ADCBUF2      = 0x324;
 ADCBUF3      = 0x326;
_ADCBUF3      = 0x326;
 ADCBUF4      = 0x328;
_ADCBUF4      = 0x328;
 ADCBUF5      = 0x32A;
_ADCBUF5      = 0x32A;
 ADCBUF6      = 0x32C;
_ADCBUF6      = 0x32C;
 ADCBUF7      = 0x32E;
_ADCBUF7      = 0x32E;
 ADCBUF8      = 0x330;
_ADCBUF8      = 0x330;
 ADCBUF9      = 0x332;
_ADCBUF9      = 0x332;
 ADCBUF10     = 0x334;
_ADCBUF10     = 0x334;
 ADCBUFA      = 0x334;
_ADCBUFA      = 0x334;
 ADCBUF11     = 0x336;
_ADCBUF11     = 0x336;
 ADCBUFB      = 0x336;
_ADCBUFB      = 0x336;
 PTCON        = 0x400;
_PTCON        = 0x400;
_PTCONbits    = 0x400;
 PTPER        = 0x402;
_PTPER        = 0x402;
_PTPERbits    = 0x402;
 MDC          = 0x404;
_MDC          = 0x404;
 SEVTCMP      = 0x406;
_SEVTCMP      = 0x406;
_SEVTCMPbits  = 0x406;
 PWMCON1      = 0x408;
_PWMCON1      = 0x408;
_PWMCON1bits  = 0x408;
 IOCON1       = 0x40A;
_IOCON1       = 0x40A;
_IOCON1bits   = 0x40A;
 FCLCON1      = 0x40C;
_FCLCON1      = 0x40C;
_FCLCON1bits  = 0x40C;
 PDC1         = 0x40E;
_PDC1         = 0x40E;
 PHASE1       = 0x410;
_PHASE1       = 0x410;
 DTR1         = 0x412;
_DTR1         = 0x412;
 ALTDTR1      = 0x414;
_ALTDTR1      = 0x414;
 TRIG1        = 0x416;
_TRIG1        = 0x416;
_TRIG1bits    = 0x416;
 TRGCON1      = 0x418;
_TRGCON1      = 0x418;
_TRGCON1bits  = 0x418;
 LEBCON1      = 0x41A;
_LEBCON1      = 0x41A;
_LEBCON1bits  = 0x41A;
 PWMCON2      = 0x41C;
_PWMCON2      = 0x41C;
_PWMCON2bits  = 0x41C;
 IOCON2       = 0x41E;
_IOCON2       = 0x41E;
_IOCON2bits   = 0x41E;
 FCLCON2      = 0x420;
_FCLCON2      = 0x420;
_FCLCON2bits  = 0x420;
 PDC2         = 0x422;
_PDC2         = 0x422;
 PHASE2       = 0x424;
_PHASE2       = 0x424;
 DTR2         = 0x426;
_DTR2         = 0x426;
 ALTDTR2      = 0x428;
_ALTDTR2      = 0x428;
 TRIG2        = 0x42A;
_TRIG2        = 0x42A;
_TRIG2bits    = 0x42A;
 TRGCON2      = 0x42C;
_TRGCON2      = 0x42C;
_TRGCON2bits  = 0x42C;
 LEBCON2      = 0x42E;
_LEBCON2      = 0x42E;
_LEBCON2bits  = 0x42E;
 PWMCON3      = 0x430;
_PWMCON3      = 0x430;
_PWMCON3bits  = 0x430;
 IOCON3       = 0x432;
_IOCON3       = 0x432;
_IOCON3bits   = 0x432;
 FCLCON3      = 0x434;
_FCLCON3      = 0x434;
_FCLCON3bits  = 0x434;
 PDC3         = 0x436;
_PDC3         = 0x436;
 PHASE3       = 0x438;
_PHASE3       = 0x438;
 DTR3         = 0x43A;
_DTR3         = 0x43A;
 ALTDTR3      = 0x43C;
_ALTDTR3      = 0x43C;
 TRIG3        = 0x43E;
_TRIG3        = 0x43E;
_TRIG3bits    = 0x43E;
 TRGCON3      = 0x440;
_TRGCON3      = 0x440;
_TRGCON3bits  = 0x440;
 LEBCON3      = 0x442;
_LEBCON3      = 0x442;
_LEBCON3bits  = 0x442;
 PWMCON4      = 0x444;
_PWMCON4      = 0x444;
_PWMCON4bits  = 0x444;
 IOCON4       = 0x446;
_IOCON4       = 0x446;
_IOCON4bits   = 0x446;
 FCLCON4      = 0x448;
_FCLCON4      = 0x448;
_FCLCON4bits  = 0x448;
 PDC4         = 0x44A;
_PDC4         = 0x44A;
 PHASE4       = 0x44C;
_PHASE4       = 0x44C;
 DTR4         = 0x44E;
_DTR4         = 0x44E;
 ALTDTR4      = 0x450;
_ALTDTR4      = 0x450;
 TRIG4        = 0x452;
_TRIG4        = 0x452;
_TRIG4bits    = 0x452;
 TRGCON4      = 0x454;
_TRGCON4      = 0x454;
_TRGCON4bits  = 0x454;
 LEBCON4      = 0x456;
_LEBCON4      = 0x456;
_LEBCON4bits  = 0x456;
 CMPCON1      = 0x4C0;
_CMPCON1      = 0x4C0;
_CMPCON1bits  = 0x4C0;
 CMPDAC1      = 0x4C2;
_CMPDAC1      = 0x4C2;
_CMPDAC1bits  = 0x4C2;
 CMPCON2      = 0x4C4;
_CMPCON2      = 0x4C4;
_CMPCON2bits  = 0x4C4;
 CMPDAC2      = 0x4C6;
_CMPDAC2      = 0x4C6;
_CMPDAC2bits  = 0x4C6;
 CMPCON3      = 0x4C8;
_CMPCON3      = 0x4C8;
_CMPCON3bits  = 0x4C8;
 CMPDAC3      = 0x4CA;
_CMPDAC3      = 0x4CA;
_CMPDAC3bits  = 0x4CA;
 CMPCON4      = 0x4CC;
_CMPCON4      = 0x4CC;
_CMPCON4bits  = 0x4CC;
 CMPDAC4      = 0x4CE;
_CMPDAC4      = 0x4CE;
_CMPDAC4bits  = 0x4CE;
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
 OSCTUN       = 0x748;
_OSCTUN       = 0x748;
_OSCTUNbits   = 0x748;
 OSCTUN2      = 0x74A;
_OSCTUN2      = 0x74A;
_OSCTUN2bits  = 0x74A;
 LFSR         = 0x74C;
_LFSR         = 0x74C;
 BSRAM        = 0x750;
_BSRAM        = 0x750;
_BSRAMbits    = 0x750;
 NVMCON       = 0x760;
_NVMCON       = 0x760;
_NVMCONbits   = 0x760;
 NVMADR       = 0x762;
_NVMADR       = 0x762;
 NVMADRU      = 0x764;
_NVMADRU      = 0x764;
_NVMADRUbits  = 0x764;
 NVMKEY       = 0x766;
_NVMKEY       = 0x766;
_NVMKEYbits   = 0x766;
 PMD1         = 0x770;
_PMD1         = 0x770;
_PMD1bits     = 0x770;
 PMD2         = 0x772;
_PMD2         = 0x772;
_PMD2bits     = 0x772;
 PMD3         = 0x774;
_PMD3         = 0x774;
_PMD3bits     = 0x774;
/*
** ======= Base Addresses for Various Peripherals and ACC ======
*/

 ACCA         = 0x22;
_ACCA         = 0x22;
 ACCB         = 0x28;
_ACCB         = 0x28;
 IC1          = 0x140;
_IC1          = 0x140;
 OC1          = 0x180;
_OC1          = 0x180;
 OC2          = 0x186;
_OC2          = 0x186;
 SPI1         = 0x240;
_SPI1         = 0x240;
 UART1        = 0x220;
_UART1        = 0x220;
