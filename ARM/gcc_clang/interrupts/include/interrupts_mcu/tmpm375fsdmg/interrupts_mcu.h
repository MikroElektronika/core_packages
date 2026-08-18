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
* @brief TMPM375FSDMG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INTRX0 = 16;
static const int INTERRUPTS_INTTX0 = 17;
static const int INTERRUPTS_INTRX1 = 18;
static const int INTERRUPTS_INTTX1 = 19;
static const int INTERRUPTS_INTVCNB = 20;
static const int INTERRUPTS_INTEMG1 = 21;
static const int INTERRUPTS_INTOVV1 = 22;
static const int INTERRUPTS_INTADBPDB = 23;
static const int INTERRUPTS_INTTB00 = 24;
static const int INTERRUPTS_INTTB01 = 25;
static const int INTERRUPTS_INTTB40 = 26;
static const int INTERRUPTS_INTTB41 = 27;
static const int INTERRUPTS_INTTB50 = 28;
static const int INTERRUPTS_INTTB51 = 29;
static const int INTERRUPTS_INTPMD1 = 30;
static const int INTERRUPTS_INTCAP00 = 31;
static const int INTERRUPTS_INTCAP01 = 32;
static const int INTERRUPTS_INTCAP50 = 33;
static const int INTERRUPTS_INTCAP51 = 34;
static const int INTERRUPTS_INT6 = 35;
static const int INTERRUPTS_INT7 = 36;
static const int INTERRUPTS_INTADBCPA = 37;
static const int INTERRUPTS_INTADBCPB = 38;
static const int INTERRUPTS_INTADBSFT = 39;
static const int INTERRUPTS_INTADBTMR = 40;
static const int INTERRUPTS_INTENC0 = 41;
static const int INTERRUPTS_INTTB70 = 42;
static const int INTERRUPTS_INTTB71 = 43;
static const int INTERRUPTS_INTCAP70 = 44;
static const int INTERRUPTS_INTCAP71 = 45;
static const int INTERRUPTS_INTC = 46;
static const int INTERRUPTS_INTSBI0 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for TMPM375FSDMG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for TMPM375FSDMG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
