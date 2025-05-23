/*
 * Instance header file for ATSAMR21G18A
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2020-11-26T16:56:39Z */
#ifndef _SAMR21_SYSCTRL_INSTANCE_
#define _SAMR21_SYSCTRL_INSTANCE_


/* ========== Instance Parameter definitions for SYSCTRL peripheral ========== */
#define SYSCTRL_BGAP_CALIB_MSB                   (11)       
#define SYSCTRL_BOD12_VERSION                    (0x111)    
#define SYSCTRL_BOD33_CALIB_MSB                  (5)        
#define SYSCTRL_BOD33_VERSION                    (0x111)    
#define SYSCTRL_DFLL48M_COARSE_MSB               (5)        
#define SYSCTRL_DFLL48M_FINE_MSB                 (9)        
#define SYSCTRL_DFLL48M_VERSION                  (0x301)    
#define SYSCTRL_FDPLL_VERSION                    (0x111)    
#define SYSCTRL_GCLK_ID_DFLL48                   (0)        /* Index of Generic Clock for DFLL48 */
#define SYSCTRL_GCLK_ID_FDPLL                    (1)        /* Index of Generic Clock for DPLL */
#define SYSCTRL_GCLK_ID_FDPLL32K                 (2)        /* Index of Generic Clock for DPLL 32K */
#define SYSCTRL_INSTANCE_ID                      (2)        
#define SYSCTRL_OSC32K_COARSE_CALIB_MSB          (6)        
#define SYSCTRL_OSC32K_VERSION                   (0x1101)   
#define SYSCTRL_OSC8M_VERSION                    (0x120)    
#define SYSCTRL_OSCULP32K_VERSION                (0x111)    
#define SYSCTRL_POR33_ENTEST_MSB                 (1)        
#define SYSCTRL_SYSTEM_CLOCK                     (1000000)  /* Initial system clock frequency */
#define SYSCTRL_ULPVREF_DIVLEV_MSB               (3)        
#define SYSCTRL_ULPVREG_FORCEGAIN_MSB            (1)        
#define SYSCTRL_ULPVREG_RAMREFSEL_MSB            (2)        
#define SYSCTRL_VREF_CONTROL_MSB                 (48)       
#define SYSCTRL_VREF_STATUS_MSB                  (7)        
#define SYSCTRL_VREF_VERSION                     (0x200)    
#define SYSCTRL_VREG_LEVEL_MSB                   (2)        
#define SYSCTRL_VREG_VERSION                     (0x201)    
#define SYSCTRL_XOSC32K_VERSION                  (0x1111)   
#define SYSCTRL_XOSC_VERSION                     (0x1111)   

#endif /* _SAMR21_SYSCTRL_INSTANCE_ */
