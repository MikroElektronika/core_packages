/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
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
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "core_header.h"
#include "mcu.h"

void systemEnableFPU()
{
    asm(
       "MOVW R0, #0xED88 \n\t \
        MOVT R0, #0xE000 \n\t \
        LDR R1, [R0] \n\t \
        ORR R1, R1, #0xF00000 \n\t \
        STR R1, [R0] \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        vmrs R0, FPSCR \n\t \
        MOV R1, #0 \n\t \
        MOVT R1, #0xC0 \n\t \
        ORR R0, R0, R1 \n\t \
        vmsr FPSCR, R0"
    );
}

void SystemInit(void)
{
    // Enable FPU
    systemEnableFPU();
}