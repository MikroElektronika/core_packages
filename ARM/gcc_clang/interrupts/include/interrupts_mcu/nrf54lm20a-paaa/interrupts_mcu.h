/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
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
 * @brief NRF54LM20A-PAAA MCU specific interrupt per module definitions.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SWI00 = 44;
static const int INTERRUPTS_SWI01 = 45;
static const int INTERRUPTS_SWI02 = 46;
static const int INTERRUPTS_SWI03 = 47;
static const int INTERRUPTS_SPU00 = 80;
static const int INTERRUPTS_MPC00 = 81;
static const int INTERRUPTS_AAR00_CCM00 = 90;
static const int INTERRUPTS_ECB00 = 91;
static const int INTERRUPTS_VPR00 = 92;
static const int INTERRUPTS_SERIAL00 = 93;
static const int INTERRUPTS_RRAMC = 94;
static const int INTERRUPTS_CTRLAP = 98;
static const int INTERRUPTS_CM33SS = 100;
static const int INTERRUPTS_TIMER00 = 101;
static const int INTERRUPTS_EGU00 = 104;
static const int INTERRUPTS_CRACEN = 105;
static const int INTERRUPTS_USBHS = 106;
static const int INTERRUPTS_SPU10 = 144;
static const int INTERRUPTS_TIMER10 = 149;
static const int INTERRUPTS_EGU10 = 151;
static const int INTERRUPTS_RADIO_0 = 154;
static const int INTERRUPTS_RADIO_1 = 155;
static const int INTERRUPTS_SPU20 = 208;
static const int INTERRUPTS_SERIAL20 = 214;
static const int INTERRUPTS_SERIAL21 = 215;
static const int INTERRUPTS_SERIAL22 = 216;
static const int INTERRUPTS_EGU20 = 217;
static const int INTERRUPTS_TIMER20 = 218;
static const int INTERRUPTS_TIMER21 = 219;
static const int INTERRUPTS_TIMER22 = 220;
static const int INTERRUPTS_TIMER23 = 221;
static const int INTERRUPTS_TIMER24 = 222;
static const int INTERRUPTS_PDM20 = 224;
static const int INTERRUPTS_PDM21 = 225;
static const int INTERRUPTS_PWM20 = 226;
static const int INTERRUPTS_PWM21 = 227;
static const int INTERRUPTS_PWM22 = 228;
static const int INTERRUPTS_SAADC = 229;
static const int INTERRUPTS_NFCT = 230;
static const int INTERRUPTS_TEMP = 231;
static const int INTERRUPTS_GPIOTE20_0 = 234;
static const int INTERRUPTS_GPIOTE20_1 = 235;
static const int INTERRUPTS_QDEC20 = 240;
static const int INTERRUPTS_QDEC21 = 241;
static const int INTERRUPTS_GRTC_0 = 242;
static const int INTERRUPTS_GRTC_1 = 243;
static const int INTERRUPTS_GRTC_2 = 244;
static const int INTERRUPTS_GRTC_3 = 245;
static const int INTERRUPTS_TDM = 248;
static const int INTERRUPTS_SERIAL23 = 253;
static const int INTERRUPTS_SERIAL24 = 254;
static const int INTERRUPTS_TAMPC = 255;
static const int INTERRUPTS_SPU30 = 272;
static const int INTERRUPTS_SERIAL30 = 276;
static const int INTERRUPTS_COMP_LPCOMP = 278;
static const int INTERRUPTS_WDT30 = 280;
static const int INTERRUPTS_WDT31 = 281;
static const int INTERRUPTS_GPIOTE30_0 = 284;
static const int INTERRUPTS_GPIOTE30_1 = 285;
static const int INTERRUPTS_CLOCK_POWER = 286;
static const int INTERRUPTS_VREGUSB = 305;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NRF54LM20A-PAAA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NRF54LM20A-PAAA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
