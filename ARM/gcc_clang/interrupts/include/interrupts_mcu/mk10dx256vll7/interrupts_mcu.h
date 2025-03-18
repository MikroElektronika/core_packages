/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief MK10DX256VLL7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INITIAL_STACK_POINTER = 0;
static const int INTERRUPTS_INITIAL_PROGRAM_COUNTER = 1;
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED = 7;
static const int INTERRUPTS_RESERVED_1 = 8;
static const int INTERRUPTS_RESERVED_2 = 9;
static const int INTERRUPTS_RESERVED_3 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUG_MONITOR = 12;
static const int INTERRUPTS_RESERVED_4 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA4 = 20;
static const int INTERRUPTS_DMA5 = 21;
static const int INTERRUPTS_DMA6 = 22;
static const int INTERRUPTS_DMA7 = 23;
static const int INTERRUPTS_DMA8 = 24;
static const int INTERRUPTS_DMA9 = 25;
static const int INTERRUPTS_DMA10 = 26;
static const int INTERRUPTS_DMA11 = 27;
static const int INTERRUPTS_DMA12 = 28;
static const int INTERRUPTS_DMA13 = 29;
static const int INTERRUPTS_DMA14 = 30;
static const int INTERRUPTS_DMA15 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_RESERVED_5 = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RESERVED_6 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_I2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_RESERVED_7 = 44;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 45;
static const int INTERRUPTS_CAN0_BUS_OFF = 46;
static const int INTERRUPTS_CAN0_ERROR = 47;
static const int INTERRUPTS_CAN0_TX_WARNING = 48;
static const int INTERRUPTS_CAN0_RX_WARNING = 49;
static const int INTERRUPTS_CAN0_WAKE_UP = 50;
static const int INTERRUPTS_TRANSMIT = 51;
static const int INTERRUPTS_RECEIVE = 52;
static const int INTERRUPTS_RESERVED_8 = 53;
static const int INTERRUPTS_RESERVED_9 = 54;
static const int INTERRUPTS_RESERVED_10 = 55;
static const int INTERRUPTS_RESERVED_11 = 56;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_UART_LON_SOURCES = 57;
static const int INTERRUPTS_UART0_RX_TX = 58;
static const int INTERRUPTS_UART0_ERR = 59;
static const int INTERRUPTS_UART1_RX_TX = 60;
static const int INTERRUPTS_UART1_ERR = 61;
static const int INTERRUPTS_UART2_RX_TX = 62;
static const int INTERRUPTS_UART2_ERR = 63;
static const int INTERRUPTS_UART3_RX_TX = 64;
static const int INTERRUPTS_UART3_ERR = 65;
static const int INTERRUPTS_UART4_RX_TX = 66;
static const int INTERRUPTS_UART4_ERR = 67;
static const int INTERRUPTS_RESERVED_12 = 68;
static const int INTERRUPTS_RESERVED_13 = 69;
static const int INTERRUPTS_RESERVED_14 = 70;
static const int INTERRUPTS_RESERVED_15 = 71;
static const int INTERRUPTS_RESERVED_16 = 72;
static const int INTERRUPTS_RESERVED_17 = 73;
static const int INTERRUPTS_RESERVED_18 = 74;
static const int INTERRUPTS_RESERVED_19 = 75;
static const int INTERRUPTS_RESERVED_20 = 76;
static const int INTERRUPTS_RESERVED_21 = 77;
static const int INTERRUPTS_RESERVED_22 = 78;
static const int INTERRUPTS_RESERVED_23 = 79;
static const int INTERRUPTS_RESERVED_24 = 80;
static const int INTERRUPTS_RESERVED_25 = 81;
static const int INTERRUPTS_RESERVED_26 = 82;
static const int INTERRUPTS_RESERVED_27 = 83;
static const int INTERRUPTS_PIT0 = 84;
static const int INTERRUPTS_PIT1 = 85;
static const int INTERRUPTS_PIT2 = 86;
static const int INTERRUPTS_PIT3 = 87;
static const int INTERRUPTS_PDB = 88;
static const int INTERRUPTS_RESERVED_28 = 89;
static const int INTERRUPTS_RESERVED_29 = 90;
static const int INTERRUPTS_RESERVED_30 = 91;
static const int INTERRUPTS_RESERVED_31 = 92;
static const int INTERRUPTS_RESERVED_32 = 93;
static const int INTERRUPTS_RESERVED_33 = 94;
static const int INTERRUPTS_RESERVED_34 = 95;
static const int INTERRUPTS_RESERVED_35 = 96;
static const int INTERRUPTS_DAC0 = 97;
static const int INTERRUPTS_RESERVED_36 = 98;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_ALL_SOURCES = 99;
static const int INTERRUPTS_MCG = 100;
static const int INTERRUPTS_LPTMR0 = 101;
static const int INTERRUPTS_RESERVED_37 = 102;
static const int INTERRUPTS_PORTA = 103;
static const int INTERRUPTS_PORTB = 104;
static const int INTERRUPTS_PORTC = 105;
static const int INTERRUPTS_PORTD = 106;
static const int INTERRUPTS_PORTE = 107;
static const int INTERRUPTS_RESERVED_38 = 108;
static const int INTERRUPTS_RESERVED_39 = 109;
static const int INTERRUPTS_SOFTWARE_INTERRUPT = 110;
static const int INTERRUPTS_RESERVED_40 = 111;
static const int INTERRUPTS_RESERVED_41 = 112;
static const int INTERRUPTS_RESERVED_42 = 113;
static const int INTERRUPTS_RESERVED_43 = 114;
static const int INTERRUPTS_RESERVED_44 = 115;
static const int INTERRUPTS_RESERVED_45 = 116;
static const int INTERRUPTS_RESERVED_46 = 117;
static const int INTERRUPTS_RESERVED_47 = 118;
static const int INTERRUPTS_RESERVED_48 = 119;
static const int INTERRUPTS_RESERVED_49 = 120;
static const int INTERRUPTS_RESERVED_50 = 121;
static const int INTERRUPTS_RESERVED_51 = 122;
static const int INTERRUPTS_RESERVED_52 = 123;
static const int INTERRUPTS_RESERVED_53 = 124;
static const int INTERRUPTS_RESERVED_54 = 125;
static const int INTERRUPTS_RESERVED_55 = 126;
static const int INTERRUPTS_RESERVED_56 = 127;
static const int INTERRUPTS_RESERVED_57 = 128;
static const int INTERRUPTS_RESERVED_58 = 129;
static const int INTERRUPTS_RESERVED_59 = 130;
static const int INTERRUPTS_RESERVED_60 = 131;
static const int INTERRUPTS_RESERVED_61 = 132;
static const int INTERRUPTS_RESERVED_62 = 133;
static const int INTERRUPTS_RESERVED_63 = 134;
static const int INTERRUPTS_RESERVED_64 = 135;
static const int INTERRUPTS_RESERVED_65 = 136;
static const int INTERRUPTS_RESERVED_66 = 137;
static const int INTERRUPTS_RESERVED_67 = 138;
static const int INTERRUPTS_RESERVED_68 = 139;
static const int INTERRUPTS_RESERVED_69 = 140;
static const int INTERRUPTS_RESERVED_70 = 141;
static const int INTERRUPTS_RESERVED_71 = 142;
static const int INTERRUPTS_RESERVED_72 = 143;
static const int INTERRUPTS_RESERVED_73 = 144;
static const int INTERRUPTS_RESERVED_74 = 145;
static const int INTERRUPTS_RESERVED_75 = 146;
static const int INTERRUPTS_RESERVED_76 = 147;
static const int INTERRUPTS_RESERVED_77 = 148;
static const int INTERRUPTS_RESERVED_78 = 149;
static const int INTERRUPTS_RESERVED_79 = 150;
static const int INTERRUPTS_RESERVED_80 = 151;
static const int INTERRUPTS_RESERVED_81 = 152;
static const int INTERRUPTS_RESERVED_82 = 153;
static const int INTERRUPTS_RESERVED_83 = 154;
static const int INTERRUPTS_RESERVED_84 = 155;
static const int INTERRUPTS_RESERVED_85 = 156;
static const int INTERRUPTS_RESERVED_86 = 157;
static const int INTERRUPTS_RESERVED_87 = 158;
static const int INTERRUPTS_RESERVED_88 = 159;
static const int INTERRUPTS_RESERVED_89 = 160;
static const int INTERRUPTS_RESERVED_90 = 161;
static const int INTERRUPTS_RESERVED_91 = 162;
static const int INTERRUPTS_RESERVED_92 = 163;
static const int INTERRUPTS_RESERVED_93 = 164;
static const int INTERRUPTS_RESERVED_94 = 165;
static const int INTERRUPTS_RESERVED_95 = 166;
static const int INTERRUPTS_RESERVED_96 = 167;
static const int INTERRUPTS_RESERVED_97 = 168;
static const int INTERRUPTS_RESERVED_98 = 169;
static const int INTERRUPTS_RESERVED_99 = 170;
static const int INTERRUPTS_RESERVED_100 = 171;
static const int INTERRUPTS_RESERVED_101 = 172;
static const int INTERRUPTS_RESERVED_102 = 173;
static const int INTERRUPTS_RESERVED_103 = 174;
static const int INTERRUPTS_RESERVED_104 = 175;
static const int INTERRUPTS_RESERVED_105 = 176;
static const int INTERRUPTS_RESERVED_106 = 177;
static const int INTERRUPTS_RESERVED_107 = 178;
static const int INTERRUPTS_RESERVED_108 = 179;
static const int INTERRUPTS_RESERVED_109 = 180;
static const int INTERRUPTS_RESERVED_110 = 181;
static const int INTERRUPTS_RESERVED_111 = 182;
static const int INTERRUPTS_RESERVED_112 = 183;
static const int INTERRUPTS_RESERVED_113 = 184;
static const int INTERRUPTS_RESERVED_114 = 185;
static const int INTERRUPTS_RESERVED_115 = 186;
static const int INTERRUPTS_RESERVED_116 = 187;
static const int INTERRUPTS_RESERVED_117 = 188;
static const int INTERRUPTS_RESERVED_118 = 189;
static const int INTERRUPTS_RESERVED_119 = 190;
static const int INTERRUPTS_RESERVED_120 = 191;
static const int INTERRUPTS_RESERVED_121 = 192;
static const int INTERRUPTS_RESERVED_122 = 193;
static const int INTERRUPTS_RESERVED_123 = 194;
static const int INTERRUPTS_RESERVED_124 = 195;
static const int INTERRUPTS_RESERVED_125 = 196;
static const int INTERRUPTS_RESERVED_126 = 197;
static const int INTERRUPTS_RESERVED_127 = 198;
static const int INTERRUPTS_RESERVED_128 = 199;
static const int INTERRUPTS_RESERVED_129 = 200;
static const int INTERRUPTS_RESERVED_130 = 201;
static const int INTERRUPTS_RESERVED_131 = 202;
static const int INTERRUPTS_RESERVED_132 = 203;
static const int INTERRUPTS_RESERVED_133 = 204;
static const int INTERRUPTS_RESERVED_134 = 205;
static const int INTERRUPTS_RESERVED_135 = 206;
static const int INTERRUPTS_RESERVED_136 = 207;
static const int INTERRUPTS_RESERVED_137 = 208;
static const int INTERRUPTS_RESERVED_138 = 209;
static const int INTERRUPTS_RESERVED_139 = 210;
static const int INTERRUPTS_RESERVED_140 = 211;
static const int INTERRUPTS_RESERVED_141 = 212;
static const int INTERRUPTS_RESERVED_142 = 213;
static const int INTERRUPTS_RESERVED_143 = 214;
static const int INTERRUPTS_RESERVED_144 = 215;
static const int INTERRUPTS_RESERVED_145 = 216;
static const int INTERRUPTS_RESERVED_146 = 217;
static const int INTERRUPTS_RESERVED_147 = 218;
static const int INTERRUPTS_RESERVED_148 = 219;
static const int INTERRUPTS_RESERVED_149 = 220;
static const int INTERRUPTS_RESERVED_150 = 221;
static const int INTERRUPTS_RESERVED_151 = 222;
static const int INTERRUPTS_RESERVED_152 = 223;
static const int INTERRUPTS_RESERVED_153 = 224;
static const int INTERRUPTS_RESERVED_154 = 225;
static const int INTERRUPTS_RESERVED_155 = 226;
static const int INTERRUPTS_RESERVED_156 = 227;
static const int INTERRUPTS_RESERVED_157 = 228;
static const int INTERRUPTS_RESERVED_158 = 229;
static const int INTERRUPTS_RESERVED_159 = 230;
static const int INTERRUPTS_RESERVED_160 = 231;
static const int INTERRUPTS_RESERVED_161 = 232;
static const int INTERRUPTS_RESERVED_162 = 233;
static const int INTERRUPTS_RESERVED_163 = 234;
static const int INTERRUPTS_RESERVED_164 = 235;
static const int INTERRUPTS_RESERVED_165 = 236;
static const int INTERRUPTS_RESERVED_166 = 237;
static const int INTERRUPTS_RESERVED_167 = 238;
static const int INTERRUPTS_RESERVED_168 = 239;
static const int INTERRUPTS_RESERVED_169 = 240;
static const int INTERRUPTS_RESERVED_170 = 241;
static const int INTERRUPTS_RESERVED_171 = 242;
static const int INTERRUPTS_RESERVED_172 = 243;
static const int INTERRUPTS_RESERVED_173 = 244;
static const int INTERRUPTS_RESERVED_174 = 245;
static const int INTERRUPTS_RESERVED_175 = 246;
static const int INTERRUPTS_RESERVED_176 = 247;
static const int INTERRUPTS_RESERVED_177 = 248;
static const int INTERRUPTS_RESERVED_178 = 249;
static const int INTERRUPTS_RESERVED_179 = 250;
static const int INTERRUPTS_RESERVED_180 = 251;
static const int INTERRUPTS_RESERVED_181 = 252;
static const int INTERRUPTS_RESERVED_182 = 253;
static const int INTERRUPTS_RESERVED_183 = 254;
static const int INTERRUPTS_RESERVED_184 = 255;
static const int INTERRUPTS_RESERVED_185 = 256;
static const int INTERRUPTS_RESERVED_186 = 257;
static const int INTERRUPTS_RESERVED_187 = 258;
static const int INTERRUPTS_RESERVED_188 = 259;
static const int INTERRUPTS_RESERVED_189 = 260;
static const int INTERRUPTS_RESERVED_190 = 261;
static const int INTERRUPTS_RESERVED_191 = 262;
static const int INTERRUPTS_RESERVED_192 = 263;
static const int INTERRUPTS_RESERVED_193 = 264;
static const int INTERRUPTS_RESERVED_194 = 265;
static const int INTERRUPTS_RESERVED_195 = 266;
static const int INTERRUPTS_RESERVED_196 = 267;
static const int INTERRUPTS_RESERVED_197 = 268;
static const int INTERRUPTS_RESERVED_198 = 269;
static const int INTERRUPTS_RESERVED_199 = 270;
static const int INTERRUPTS_RESERVED_200 = 271;
static const int INTERRUPTS_RESERVED_201 = 272;
static const int INTERRUPTS_RESERVED_202 = 273;
static const int INTERRUPTS_RESERVED_203 = 274;
static const int INTERRUPTS_RESERVED_204 = 275;
static const int INTERRUPTS_RESERVED_205 = 276;
static const int INTERRUPTS_RESERVED_206 = 277;
static const int INTERRUPTS_RESERVED_207 = 278;
static const int INTERRUPTS_RESERVED_208 = 279;
static const int INTERRUPTS_RESERVED_209 = 280;
static const int INTERRUPTS_RESERVED_210 = 281;
static const int INTERRUPTS_RESERVED_211 = 282;
static const int INTERRUPTS_RESERVED_212 = 283;
static const int INTERRUPTS_RESERVED_213 = 284;
static const int INTERRUPTS_RESERVED_214 = 285;
static const int INTERRUPTS_RESERVED_215 = 286;
static const int INTERRUPTS_RESERVED_216 = 287;
static const int INTERRUPTS_RESERVED_217 = 288;
static const int INTERRUPTS_RESERVED_218 = 289;
static const int INTERRUPTS_RESERVED_219 = 290;
static const int INTERRUPTS_RESERVED_220 = 291;
static const int INTERRUPTS_RESERVED_221 = 292;
static const int INTERRUPTS_RESERVED_222 = 293;
static const int INTERRUPTS_RESERVED_223 = 294;
static const int INTERRUPTS_RESERVED_224 = 295;
static const int INTERRUPTS_RESERVED_225 = 296;
static const int INTERRUPTS_RESERVED_226 = 297;
static const int INTERRUPTS_RESERVED_227 = 298;
static const int INTERRUPTS_RESERVED_228 = 299;
static const int INTERRUPTS_RESERVED_229 = 300;
static const int INTERRUPTS_RESERVED_230 = 301;
static const int INTERRUPTS_RESERVED_231 = 302;
static const int INTERRUPTS_RESERVED_232 = 303;
static const int INTERRUPTS_RESERVED_233 = 304;
static const int INTERRUPTS_RESERVED_234 = 305;
static const int INTERRUPTS_RESERVED_235 = 306;
static const int INTERRUPTS_RESERVED_236 = 307;
static const int INTERRUPTS_RESERVED_237 = 308;
static const int INTERRUPTS_RESERVED_238 = 309;
static const int INTERRUPTS_RESERVED_239 = 310;
static const int INTERRUPTS_RESERVED_240 = 311;
static const int INTERRUPTS_RESERVED_241 = 312;
static const int INTERRUPTS_RESERVED_242 = 313;
static const int INTERRUPTS_RESERVED_243 = 314;
static const int INTERRUPTS_RESERVED_244 = 315;
static const int INTERRUPTS_RESERVED_245 = 316;
static const int INTERRUPTS_RESERVED_246 = 317;
static const int INTERRUPTS_RESERVED_247 = 318;
static const int INTERRUPTS_RESERVED_248 = 319;
static const int INTERRUPTS_RESERVED_249 = 320;
static const int INTERRUPTS_RESERVED_250 = 321;
static const int INTERRUPTS_RESERVED_251 = 322;
static const int INTERRUPTS_RESERVED_252 = 323;
static const int INTERRUPTS_RESERVED_253 = 324;
static const int INTERRUPTS_RESERVED_254 = 325;
static const int INTERRUPTS_RESERVED_255 = 326;
static const int INTERRUPTS_RESERVED_256 = 327;
static const int INTERRUPTS_RESERVED_257 = 328;
static const int INTERRUPTS_RESERVED_258 = 329;
static const int INTERRUPTS_RESERVED_259 = 330;
static const int INTERRUPTS_RESERVED_260 = 331;
static const int INTERRUPTS_RESERVED_261 = 332;
static const int INTERRUPTS_RESERVED_262 = 333;
static const int INTERRUPTS_RESERVED_263 = 334;
static const int INTERRUPTS_RESERVED_264 = 335;
static const int INTERRUPTS_RESERVED_265 = 336;
static const int INTERRUPTS_RESERVED_266 = 337;
static const int INTERRUPTS_RESERVED_267 = 338;
static const int INTERRUPTS_RESERVED_268 = 339;
static const int INTERRUPTS_RESERVED_269 = 340;
static const int INTERRUPTS_RESERVED_270 = 341;
static const int INTERRUPTS_RESERVED_271 = 342;
static const int INTERRUPTS_RESERVED_272 = 343;
static const int INTERRUPTS_RESERVED_273 = 344;
static const int INTERRUPTS_RESERVED_274 = 345;
static const int INTERRUPTS_RESERVED_275 = 346;
static const int INTERRUPTS_RESERVED_276 = 347;
static const int INTERRUPTS_RESERVED_277 = 348;
static const int INTERRUPTS_RESERVED_278 = 349;
static const int INTERRUPTS_RESERVED_279 = 350;
static const int INTERRUPTS_RESERVED_280 = 351;
static const int INTERRUPTS_RESERVED_281 = 352;
static const int INTERRUPTS_RESERVED_282 = 353;
static const int INTERRUPTS_RESERVED_283 = 354;
static const int INTERRUPTS_RESERVED_284 = 355;
static const int INTERRUPTS_RESERVED_285 = 356;
static const int INTERRUPTS_RESERVED_286 = 357;
static const int INTERRUPTS_RESERVED_287 = 358;
static const int INTERRUPTS_RESERVED_288 = 359;
static const int INTERRUPTS_RESERVED_289 = 360;
static const int INTERRUPTS_RESERVED_290 = 361;
static const int INTERRUPTS_RESERVED_291 = 362;
static const int INTERRUPTS_RESERVED_292 = 363;
static const int INTERRUPTS_RESERVED_293 = 364;
static const int INTERRUPTS_RESERVED_294 = 365;
static const int INTERRUPTS_RESERVED_295 = 366;
static const int INTERRUPTS_RESERVED_296 = 367;
static const int INTERRUPTS_RESERVED_297 = 368;
static const int INTERRUPTS_RESERVED_298 = 369;
static const int INTERRUPTS_RESERVED_299 = 370;
static const int INTERRUPTS_RESERVED_300 = 371;
static const int INTERRUPTS_RESERVED_301 = 372;
static const int INTERRUPTS_RESERVED_302 = 373;
static const int INTERRUPTS_RESERVED_303 = 374;
static const int INTERRUPTS_RESERVED_304 = 375;
static const int INTERRUPTS_RESERVED_305 = 376;
static const int INTERRUPTS_RESERVED_306 = 377;
static const int INTERRUPTS_RESERVED_307 = 378;
static const int INTERRUPTS_RESERVED_308 = 379;
static const int INTERRUPTS_RESERVED_309 = 380;
static const int INTERRUPTS_RESERVED_310 = 381;
static const int INTERRUPTS_RESERVED_311 = 382;
static const int INTERRUPTS_RESERVED_312 = 383;
static const int INTERRUPTS_RESERVED_313 = 384;
static const int INTERRUPTS_RESERVED_314 = 385;
static const int INTERRUPTS_RESERVED_315 = 386;
static const int INTERRUPTS_RESERVED_316 = 387;
static const int INTERRUPTS_RESERVED_317 = 388;
static const int INTERRUPTS_RESERVED_318 = 389;
static const int INTERRUPTS_RESERVED_319 = 390;
static const int INTERRUPTS_RESERVED_320 = 391;
static const int INTERRUPTS_RESERVED_321 = 392;
static const int INTERRUPTS_RESERVED_322 = 393;
static const int INTERRUPTS_RESERVED_323 = 394;
static const int INTERRUPTS_RESERVED_324 = 395;
static const int INTERRUPTS_RESERVED_325 = 396;
static const int INTERRUPTS_RESERVED_326 = 397;
static const int INTERRUPTS_RESERVED_327 = 398;
static const int INTERRUPTS_RESERVED_328 = 399;
static const int INTERRUPTS_RESERVED_329 = 400;
static const int INTERRUPTS_RESERVED_330 = 401;
static const int INTERRUPTS_RESERVED_331 = 402;
static const int INTERRUPTS_RESERVED_332 = 403;
static const int INTERRUPTS_RESERVED_333 = 404;
static const int INTERRUPTS_RESERVED_334 = 405;
static const int INTERRUPTS_RESERVED_335 = 406;
static const int INTERRUPTS_RESERVED_336 = 407;
static const int INTERRUPTS_RESERVED_337 = 408;
static const int INTERRUPTS_RESERVED_338 = 409;
static const int INTERRUPTS_RESERVED_339 = 410;
static const int INTERRUPTS_RESERVED_340 = 411;
static const int INTERRUPTS_RESERVED_341 = 412;
static const int INTERRUPTS_RESERVED_342 = 413;
static const int INTERRUPTS_RESERVED_343 = 414;
static const int INTERRUPTS_RESERVED_344 = 415;
static const int INTERRUPTS_RESERVED_345 = 416;
static const int INTERRUPTS_RESERVED_346 = 417;
static const int INTERRUPTS_RESERVED_347 = 418;
static const int INTERRUPTS_RESERVED_348 = 419;
static const int INTERRUPTS_RESERVED_349 = 420;
static const int INTERRUPTS_RESERVED_350 = 421;
static const int INTERRUPTS_RESERVED_351 = 422;
static const int INTERRUPTS_RESERVED_352 = 423;
static const int INTERRUPTS_RESERVED_353 = 424;
static const int INTERRUPTS_RESERVED_354 = 425;
static const int INTERRUPTS_RESERVED_355 = 426;
static const int INTERRUPTS_RESERVED_356 = 427;
static const int INTERRUPTS_RESERVED_357 = 428;
static const int INTERRUPTS_RESERVED_358 = 429;
static const int INTERRUPTS_RESERVED_359 = 430;
static const int INTERRUPTS_RESERVED_360 = 431;
static const int INTERRUPTS_RESERVED_361 = 432;
static const int INTERRUPTS_RESERVED_362 = 433;
static const int INTERRUPTS_RESERVED_363 = 434;
static const int INTERRUPTS_RESERVED_364 = 435;
static const int INTERRUPTS_RESERVED_365 = 436;
static const int INTERRUPTS_RESERVED_366 = 437;
static const int INTERRUPTS_RESERVED_367 = 438;
static const int INTERRUPTS_RESERVED_368 = 439;
static const int INTERRUPTS_RESERVED_369 = 440;
static const int INTERRUPTS_RESERVED_370 = 441;
static const int INTERRUPTS_RESERVED_371 = 442;
static const int INTERRUPTS_RESERVED_372 = 443;
static const int INTERRUPTS_RESERVED_373 = 444;
static const int INTERRUPTS_RESERVED_374 = 445;
static const int INTERRUPTS_RESERVED_375 = 446;
static const int INTERRUPTS_RESERVED_376 = 447;
static const int INTERRUPTS_RESERVED_377 = 448;
static const int INTERRUPTS_RESERVED_378 = 449;
static const int INTERRUPTS_RESERVED_379 = 450;
static const int INTERRUPTS_RESERVED_380 = 451;
static const int INTERRUPTS_RESERVED_381 = 452;
static const int INTERRUPTS_RESERVED_382 = 453;
static const int INTERRUPTS_RESERVED_383 = 454;
static const int INTERRUPTS_RESERVED_384 = 455;
static const int INTERRUPTS_RESERVED_385 = 456;
static const int INTERRUPTS_RESERVED_386 = 457;
static const int INTERRUPTS_RESERVED_387 = 458;
static const int INTERRUPTS_RESERVED_388 = 459;
static const int INTERRUPTS_RESERVED_389 = 460;
static const int INTERRUPTS_RESERVED_390 = 461;
static const int INTERRUPTS_RESERVED_391 = 462;
static const int INTERRUPTS_RESERVED_392 = 463;
static const int INTERRUPTS_RESERVED_393 = 464;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK10DX256VLL7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

