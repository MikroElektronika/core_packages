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
* @brief BAT32G137GH32FP MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVI = 16;
static const int INTERRUPTS_INTP0 = 17;
static const int INTERRUPTS_INTP1 = 18;
static const int INTERRUPTS_INTP2 = 19;
static const int INTERRUPTS_INTP3 = 20;
static const int INTERRUPTS_INTP4 = 21;
static const int INTERRUPTS_INTP5 = 22;
static const int INTERRUPTS_ST2 = 23;
static const int INTERRUPTS_SPI20 = 23;
static const int INTERRUPTS_IIC20 = 23;
static const int INTERRUPTS_SR2 = 24;
static const int INTERRUPTS_SPI21 = 24;
static const int INTERRUPTS_IIC21 = 24;
static const int INTERRUPTS_SRE2 = 25;
static const int INTERRUPTS_ST0 = 26;
static const int INTERRUPTS_SPI00 = 26;
static const int INTERRUPTS_IIC00 = 26;
static const int INTERRUPTS_SR0 = 27;
static const int INTERRUPTS_SPI01 = 27;
static const int INTERRUPTS_IIC01 = 27;
static const int INTERRUPTS_SRE0 = 28;
static const int INTERRUPTS_ST1 = 29;
static const int INTERRUPTS_SPI10 = 29;
static const int INTERRUPTS_IIC10 = 29;
static const int INTERRUPTS_SR1 = 30;
static const int INTERRUPTS_SPI11 = 30;
static const int INTERRUPTS_IIC11 = 30;
static const int INTERRUPTS_SRE1 = 31;
static const int INTERRUPTS_IICA = 32;
static const int INTERRUPTS_TM00 = 33;
static const int INTERRUPTS_TM01 = 34;
static const int INTERRUPTS_TM02 = 35;
static const int INTERRUPTS_TM03 = 36;
static const int INTERRUPTS_ADC = 37;
static const int INTERRUPTS_RTC = 38;
static const int INTERRUPTS_KEY = 39;
static const int INTERRUPTS_CMP0 = 40;
static const int INTERRUPTS_CMP1 = 41;
static const int INTERRUPTS_TMA = 42;
static const int INTERRUPTS_TMM0 = 43;
static const int INTERRUPTS_TMM1 = 44;
static const int INTERRUPTS_TMB = 45;
static const int INTERRUPTS_TMC = 46;
static const int INTERRUPTS_FMC = 47;
static const int INTERRUPTS_INTP6 = 49;
static const int INTERRUPTS_INTP7 = 50;
static const int INTERRUPTS_INTP8 = 51;
static const int INTERRUPTS_INTP9 = 52;
static const int INTERRUPTS_INTP10 = 53;
static const int INTERRUPTS_INTP11 = 54;
static const int INTERRUPTS_CAN0ERR = 57;
static const int INTERRUPTS_TM01H = 60;
static const int INTERRUPTS_TM03H = 63;
static const int INTERRUPTS_DIV = 64;
static const int INTERRUPTS_IT = 70;
static const int INTERRUPTS_CAN0REC = 71;
static const int INTERRUPTS_CAN0WUP = 72;
static const int INTERRUPTS_CAN0TRX = 73;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for BAT32G137GH32FP.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for BAT32G137GH32FP.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
