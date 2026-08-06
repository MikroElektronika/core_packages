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
* @brief CMS32F737GH44FP MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVD = 16;
static const int INTERRUPTS_INTP0 = 17;
static const int INTERRUPTS_INTP1 = 18;
static const int INTERRUPTS_INTP2 = 19;
static const int INTERRUPTS_INTP3 = 20;
static const int INTERRUPTS_INTP4 = 21;
static const int INTERRUPTS_INTP5 = 22;
static const int INTERRUPTS_ST0 = 23;
static const int INTERRUPTS_SPI00 = 23;
static const int INTERRUPTS_IIC00 = 23;
static const int INTERRUPTS_SR0 = 24;
static const int INTERRUPTS_SPI01 = 24;
static const int INTERRUPTS_IIC01 = 24;
static const int INTERRUPTS_SRE0 = 25;
static const int INTERRUPTS_ST2 = 26;
static const int INTERRUPTS_SPI20 = 26;
static const int INTERRUPTS_IIC20 = 26;
static const int INTERRUPTS_SR2 = 27;
static const int INTERRUPTS_SPI21 = 27;
static const int INTERRUPTS_IIC21 = 27;
static const int INTERRUPTS_SRE2 = 28;
static const int INTERRUPTS_ST4 = 29;
static const int INTERRUPTS_SR4 = 30;
static const int INTERRUPTS_SRE4 = 31;
static const int INTERRUPTS_TM00 = 32;
static const int INTERRUPTS_TM01 = 33;
static const int INTERRUPTS_TM02 = 34;
static const int INTERRUPTS_TM03 = 35;
static const int INTERRUPTS_TM01H = 36;
static const int INTERRUPTS_TM03H = 37;
static const int INTERRUPTS_RTC = 38;
static const int INTERRUPTS_ACMP0 = 39;
static const int INTERRUPTS_ACMP1 = 40;
static const int INTERRUPTS_ADC = 41;
static const int INTERRUPTS_LED = 42;
static const int INTERRUPTS_LCD = 43;
static const int INTERRUPTS_TOUCH = 44;
static const int INTERRUPTS_DIV = 45;
static const int INTERRUPTS_IICA = 46;
static const int INTERRUPTS_FMC = 47;
static const int INTERRUPTS_WWDT = 48;
static const int INTERRUPTS_INTP6 = 49;
static const int INTERRUPTS_INTP7 = 50;
static const int INTERRUPTS_INTP8 = 51;
static const int INTERRUPTS_INTP9 = 52;
static const int INTERRUPTS_INTP10 = 53;
static const int INTERRUPTS_INTP11 = 54;
static const int INTERRUPTS_ST1 = 55;
static const int INTERRUPTS_SPI10 = 55;
static const int INTERRUPTS_IIC10 = 55;
static const int INTERRUPTS_SR1 = 56;
static const int INTERRUPTS_SPI11 = 56;
static const int INTERRUPTS_IIC11 = 56;
static const int INTERRUPTS_SRE1 = 57;
static const int INTERRUPTS_ST3 = 58;
static const int INTERRUPTS_SR3 = 59;
static const int INTERRUPTS_SRE3 = 60;
static const int INTERRUPTS_ST5 = 61;
static const int INTERRUPTS_SR5 = 62;
static const int INTERRUPTS_SRE5 = 63;
static const int INTERRUPTS_TM10 = 64;
static const int INTERRUPTS_TM11 = 65;
static const int INTERRUPTS_TM12 = 66;
static const int INTERRUPTS_TM13 = 67;
static const int INTERRUPTS_TM10H = 68;
static const int INTERRUPTS_TM13H = 69;
static const int INTERRUPTS_IT = 70;
static const int INTERRUPTS_OSDC = 71;
static const int INTERRUPTS_DMAC0 = 72;
static const int INTERRUPTS_DMAC1 = 73;
static const int INTERRUPTS_DMAC2 = 74;
static const int INTERRUPTS_DMAC3 = 75;
static const int INTERRUPTS_DMAC4 = 76;
static const int INTERRUPTS_DMAC5 = 77;
static const int INTERRUPTS_DMAC6 = 78;
static const int INTERRUPTS_DMAC7 = 79;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CMS32F737GH44FP.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CMS32F737GH44FP.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
