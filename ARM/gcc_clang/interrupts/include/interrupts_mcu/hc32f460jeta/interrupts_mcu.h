/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
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
* @file  interrupts_mcu.h
* @brief HC32F460JETA MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT000 = 16;
static const int INTERRUPTS_INT001 = 17;
static const int INTERRUPTS_INT002 = 18;
static const int INTERRUPTS_INT003 = 19;
static const int INTERRUPTS_INT004 = 20;
static const int INTERRUPTS_INT005 = 21;
static const int INTERRUPTS_INT006 = 22;
static const int INTERRUPTS_INT007 = 23;
static const int INTERRUPTS_INT008 = 24;
static const int INTERRUPTS_INT009 = 25;
static const int INTERRUPTS_INT010 = 26;
static const int INTERRUPTS_INT011 = 27;
static const int INTERRUPTS_INT012 = 28;
static const int INTERRUPTS_INT013 = 29;
static const int INTERRUPTS_INT014 = 30;
static const int INTERRUPTS_INT015 = 31;
static const int INTERRUPTS_INT016 = 32;
static const int INTERRUPTS_INT017 = 33;
static const int INTERRUPTS_INT018 = 34;
static const int INTERRUPTS_INT019 = 35;
static const int INTERRUPTS_INT020 = 36;
static const int INTERRUPTS_INT021 = 37;
static const int INTERRUPTS_INT022 = 38;
static const int INTERRUPTS_INT023 = 39;
static const int INTERRUPTS_INT024 = 40;
static const int INTERRUPTS_INT025 = 41;
static const int INTERRUPTS_INT026 = 42;
static const int INTERRUPTS_INT027 = 43;
static const int INTERRUPTS_INT028 = 44;
static const int INTERRUPTS_INT029 = 45;
static const int INTERRUPTS_INT030 = 46;
static const int INTERRUPTS_INT031 = 47;
static const int INTERRUPTS_INT032 = 48;
static const int INTERRUPTS_INT033 = 49;
static const int INTERRUPTS_INT034 = 50;
static const int INTERRUPTS_INT035 = 51;
static const int INTERRUPTS_INT036 = 52;
static const int INTERRUPTS_INT037 = 53;
static const int INTERRUPTS_INT038 = 54;
static const int INTERRUPTS_INT039 = 55;
static const int INTERRUPTS_INT040 = 56;
static const int INTERRUPTS_INT041 = 57;
static const int INTERRUPTS_INT042 = 58;
static const int INTERRUPTS_INT043 = 59;
static const int INTERRUPTS_INT044 = 60;
static const int INTERRUPTS_INT045 = 61;
static const int INTERRUPTS_INT046 = 62;
static const int INTERRUPTS_INT047 = 63;
static const int INTERRUPTS_INT048 = 64;
static const int INTERRUPTS_INT049 = 65;
static const int INTERRUPTS_INT050 = 66;
static const int INTERRUPTS_INT051 = 67;
static const int INTERRUPTS_INT052 = 68;
static const int INTERRUPTS_INT053 = 69;
static const int INTERRUPTS_INT054 = 70;
static const int INTERRUPTS_INT055 = 71;
static const int INTERRUPTS_INT056 = 72;
static const int INTERRUPTS_INT057 = 73;
static const int INTERRUPTS_INT058 = 74;
static const int INTERRUPTS_INT059 = 75;
static const int INTERRUPTS_INT060 = 76;
static const int INTERRUPTS_INT061 = 77;
static const int INTERRUPTS_INT062 = 78;
static const int INTERRUPTS_INT063 = 79;
static const int INTERRUPTS_INT064 = 80;
static const int INTERRUPTS_INT065 = 81;
static const int INTERRUPTS_INT066 = 82;
static const int INTERRUPTS_INT067 = 83;
static const int INTERRUPTS_INT068 = 84;
static const int INTERRUPTS_INT069 = 85;
static const int INTERRUPTS_INT070 = 86;
static const int INTERRUPTS_INT071 = 87;
static const int INTERRUPTS_INT072 = 88;
static const int INTERRUPTS_INT073 = 89;
static const int INTERRUPTS_INT074 = 90;
static const int INTERRUPTS_INT075 = 91;
static const int INTERRUPTS_INT076 = 92;
static const int INTERRUPTS_INT077 = 93;
static const int INTERRUPTS_INT078 = 94;
static const int INTERRUPTS_INT079 = 95;
static const int INTERRUPTS_INT080 = 96;
static const int INTERRUPTS_INT081 = 97;
static const int INTERRUPTS_INT082 = 98;
static const int INTERRUPTS_INT083 = 99;
static const int INTERRUPTS_INT084 = 100;
static const int INTERRUPTS_INT085 = 101;
static const int INTERRUPTS_INT086 = 102;
static const int INTERRUPTS_INT087 = 103;
static const int INTERRUPTS_INT088 = 104;
static const int INTERRUPTS_INT089 = 105;
static const int INTERRUPTS_INT090 = 106;
static const int INTERRUPTS_INT091 = 107;
static const int INTERRUPTS_INT092 = 108;
static const int INTERRUPTS_INT093 = 109;
static const int INTERRUPTS_INT094 = 110;
static const int INTERRUPTS_INT095 = 111;
static const int INTERRUPTS_INT096 = 112;
static const int INTERRUPTS_INT097 = 113;
static const int INTERRUPTS_INT098 = 114;
static const int INTERRUPTS_INT099 = 115;
static const int INTERRUPTS_INT100 = 116;
static const int INTERRUPTS_INT101 = 117;
static const int INTERRUPTS_INT102 = 118;
static const int INTERRUPTS_INT103 = 119;
static const int INTERRUPTS_INT104 = 120;
static const int INTERRUPTS_INT105 = 121;
static const int INTERRUPTS_INT106 = 122;
static const int INTERRUPTS_INT107 = 123;
static const int INTERRUPTS_INT108 = 124;
static const int INTERRUPTS_INT109 = 125;
static const int INTERRUPTS_INT110 = 126;
static const int INTERRUPTS_INT111 = 127;
static const int INTERRUPTS_INT112 = 128;
static const int INTERRUPTS_INT113 = 129;
static const int INTERRUPTS_INT114 = 130;
static const int INTERRUPTS_INT115 = 131;
static const int INTERRUPTS_INT116 = 132;
static const int INTERRUPTS_INT117 = 133;
static const int INTERRUPTS_INT118 = 134;
static const int INTERRUPTS_INT119 = 135;
static const int INTERRUPTS_INT120 = 136;
static const int INTERRUPTS_INT121 = 137;
static const int INTERRUPTS_INT122 = 138;
static const int INTERRUPTS_INT123 = 139;
static const int INTERRUPTS_INT124 = 140;
static const int INTERRUPTS_INT125 = 141;
static const int INTERRUPTS_INT126 = 142;
static const int INTERRUPTS_INT127 = 143;
static const int INTERRUPTS_INT128 = 144;
static const int INTERRUPTS_INT129 = 145;
static const int INTERRUPTS_INT130 = 146;
static const int INTERRUPTS_INT131 = 147;
static const int INTERRUPTS_INT132 = 148;
static const int INTERRUPTS_INT133 = 149;
static const int INTERRUPTS_INT134 = 150;
static const int INTERRUPTS_INT135 = 151;
static const int INTERRUPTS_INT136 = 152;
static const int INTERRUPTS_INT137 = 153;
static const int INTERRUPTS_INT138 = 154;
static const int INTERRUPTS_INT139 = 155;
static const int INTERRUPTS_INT140 = 156;
static const int INTERRUPTS_INT141 = 157;
static const int INTERRUPTS_INT142 = 158;
static const int INTERRUPTS_INT143 = 159;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HC32F460JETA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HC32F460JETA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
