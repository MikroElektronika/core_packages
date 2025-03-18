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
* @brief MK10DX256VLH7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
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
static const int INTERRUPTS_RESERVED = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RESERVED_1 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_I2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_RESERVED_2 = 44;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 45;
static const int INTERRUPTS_CAN0_BUS_OFF = 46;
static const int INTERRUPTS_CAN0_ERROR = 47;
static const int INTERRUPTS_CAN0_TX_WARNING = 48;
static const int INTERRUPTS_CAN0_RX_WARNING = 49;
static const int INTERRUPTS_CAN0_WAKE_UP = 50;
static const int INTERRUPTS_TRANSMIT = 51;
static const int INTERRUPTS_RECEIVE = 52;
static const int INTERRUPTS_RESERVED_3 = 53;
static const int INTERRUPTS_RESERVED_4 = 54;
static const int INTERRUPTS_RESERVED_5 = 55;
static const int INTERRUPTS_RESERVED_6 = 56;
static const int INTERRUPTS_RESERVED_7 = 57;
static const int INTERRUPTS_RESERVED_8 = 58;
static const int INTERRUPTS_RESERVED_9 = 59;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_UART_LON_SOURCES = 60;
static const int INTERRUPTS_UART0_RX_TX = 61;
static const int INTERRUPTS_UART0_ERR = 62;
static const int INTERRUPTS_UART1_RX_TX = 63;
static const int INTERRUPTS_UART1_ERR = 64;
static const int INTERRUPTS_UART2_RX_TX = 65;
static const int INTERRUPTS_UART2_ERR = 66;
static const int INTERRUPTS_RESERVED_10 = 67;
static const int INTERRUPTS_RESERVED_11 = 68;
static const int INTERRUPTS_RESERVED_12 = 69;
static const int INTERRUPTS_RESERVED_13 = 70;
static const int INTERRUPTS_RESERVED_14 = 71;
static const int INTERRUPTS_RESERVED_15 = 72;
static const int INTERRUPTS_ADC0 = 73;
static const int INTERRUPTS_ADC1 = 74;
static const int INTERRUPTS_CMP0 = 75;
static const int INTERRUPTS_CMP1 = 76;
static const int INTERRUPTS_CMP2 = 77;
static const int INTERRUPTS_FTM0 = 78;
static const int INTERRUPTS_FTM1 = 79;
static const int INTERRUPTS_FTM2 = 80;
static const int INTERRUPTS_CMT = 81;
static const int INTERRUPTS_ALARM_INTERRUPT = 82;
static const int INTERRUPTS_SECONDS_INTERRUPT = 83;
static const int INTERRUPTS_PIT0 = 84;
static const int INTERRUPTS_PIT1 = 85;
static const int INTERRUPTS_PIT2 = 86;
static const int INTERRUPTS_PIT3 = 87;
static const int INTERRUPTS_PDB = 88;
static const int INTERRUPTS_RESERVED_16 = 89;
static const int INTERRUPTS_RESERVED_17 = 90;
static const int INTERRUPTS_RESERVED_18 = 91;
static const int INTERRUPTS_RESERVED_19 = 92;
static const int INTERRUPTS_RESERVED_20 = 93;
static const int INTERRUPTS_RESERVED_21 = 94;
static const int INTERRUPTS_RESERVED_22 = 95;
static const int INTERRUPTS_RESERVED_23 = 96;
static const int INTERRUPTS_DAC0 = 97;
static const int INTERRUPTS_RESERVED_24 = 98;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_ALL_SOURCES = 99;
static const int INTERRUPTS_MCG = 100;
static const int INTERRUPTS_LPTMR0 = 101;
static const int INTERRUPTS_RESERVED_25 = 102;
static const int INTERRUPTS_PORTA = 103;
static const int INTERRUPTS_PORTB = 104;
static const int INTERRUPTS_PORTC = 105;
static const int INTERRUPTS_PORTD = 106;
static const int INTERRUPTS_PORTE = 107;
static const int INTERRUPTS_RESERVED_26 = 108;
static const int INTERRUPTS_RESERVED_27 = 109;
static const int INTERRUPTS_SOFTWARE_INTERRUPT = 110;
static const int INTERRUPTS_RESERVED_28 = 111;
static const int INTERRUPTS_RESERVED_29 = 112;
static const int INTERRUPTS_RESERVED_30 = 113;
static const int INTERRUPTS_RESERVED_31 = 114;
static const int INTERRUPTS_RESERVED_32 = 115;
static const int INTERRUPTS_RESERVED_33 = 116;
static const int INTERRUPTS_RESERVED_34 = 117;
static const int INTERRUPTS_RESERVED_35 = 118;
static const int INTERRUPTS_RESERVED_36 = 119;
static const int INTERRUPTS_RESERVED_37 = 120;
static const int INTERRUPTS_RESERVED_38 = 121;
static const int INTERRUPTS_RESERVED_39 = 122;
static const int INTERRUPTS_RESERVED_40 = 123;
static const int INTERRUPTS_RESERVED_41 = 124;
static const int INTERRUPTS_RESERVED_42 = 125;
static const int INTERRUPTS_RESERVED_43 = 126;
static const int INTERRUPTS_RESERVED_44 = 127;
static const int INTERRUPTS_RESERVED_45 = 128;
static const int INTERRUPTS_RESERVED_46 = 129;
static const int INTERRUPTS_RESERVED_47 = 130;
static const int INTERRUPTS_RESERVED_48 = 131;
static const int INTERRUPTS_RESERVED_49 = 132;
static const int INTERRUPTS_RESERVED_50 = 133;
static const int INTERRUPTS_RESERVED_51 = 134;
static const int INTERRUPTS_RESERVED_52 = 135;
static const int INTERRUPTS_RESERVED_53 = 136;
static const int INTERRUPTS_RESERVED_54 = 137;
static const int INTERRUPTS_RESERVED_55 = 138;
static const int INTERRUPTS_RESERVED_56 = 139;
static const int INTERRUPTS_RESERVED_57 = 140;
static const int INTERRUPTS_RESERVED_58 = 141;
static const int INTERRUPTS_RESERVED_59 = 142;
static const int INTERRUPTS_RESERVED_60 = 143;
static const int INTERRUPTS_RESERVED_61 = 144;
static const int INTERRUPTS_RESERVED_62 = 145;
static const int INTERRUPTS_RESERVED_63 = 146;
static const int INTERRUPTS_RESERVED_64 = 147;
static const int INTERRUPTS_RESERVED_65 = 148;
static const int INTERRUPTS_RESERVED_66 = 149;
static const int INTERRUPTS_RESERVED_67 = 150;
static const int INTERRUPTS_RESERVED_68 = 151;
static const int INTERRUPTS_RESERVED_69 = 152;
static const int INTERRUPTS_RESERVED_70 = 153;
static const int INTERRUPTS_RESERVED_71 = 154;
static const int INTERRUPTS_RESERVED_72 = 155;
static const int INTERRUPTS_RESERVED_73 = 156;
static const int INTERRUPTS_RESERVED_74 = 157;
static const int INTERRUPTS_RESERVED_75 = 158;
static const int INTERRUPTS_RESERVED_76 = 159;
static const int INTERRUPTS_RESERVED_77 = 160;
static const int INTERRUPTS_RESERVED_78 = 161;
static const int INTERRUPTS_RESERVED_79 = 162;
static const int INTERRUPTS_RESERVED_80 = 163;
static const int INTERRUPTS_RESERVED_81 = 164;
static const int INTERRUPTS_RESERVED_82 = 165;
static const int INTERRUPTS_RESERVED_83 = 166;
static const int INTERRUPTS_RESERVED_84 = 167;
static const int INTERRUPTS_RESERVED_85 = 168;
static const int INTERRUPTS_RESERVED_86 = 169;
static const int INTERRUPTS_RESERVED_87 = 170;
static const int INTERRUPTS_RESERVED_88 = 171;
static const int INTERRUPTS_RESERVED_89 = 172;
static const int INTERRUPTS_RESERVED_90 = 173;
static const int INTERRUPTS_RESERVED_91 = 174;
static const int INTERRUPTS_RESERVED_92 = 175;
static const int INTERRUPTS_RESERVED_93 = 176;
static const int INTERRUPTS_RESERVED_94 = 177;
static const int INTERRUPTS_RESERVED_95 = 178;
static const int INTERRUPTS_RESERVED_96 = 179;
static const int INTERRUPTS_RESERVED_97 = 180;
static const int INTERRUPTS_RESERVED_98 = 181;
static const int INTERRUPTS_RESERVED_99 = 182;
static const int INTERRUPTS_RESERVED_100 = 183;
static const int INTERRUPTS_RESERVED_101 = 184;
static const int INTERRUPTS_RESERVED_102 = 185;
static const int INTERRUPTS_RESERVED_103 = 186;
static const int INTERRUPTS_RESERVED_104 = 187;
static const int INTERRUPTS_RESERVED_105 = 188;
static const int INTERRUPTS_RESERVED_106 = 189;
static const int INTERRUPTS_RESERVED_107 = 190;
static const int INTERRUPTS_RESERVED_108 = 191;
static const int INTERRUPTS_RESERVED_109 = 192;
static const int INTERRUPTS_RESERVED_110 = 193;
static const int INTERRUPTS_RESERVED_111 = 194;
static const int INTERRUPTS_RESERVED_112 = 195;
static const int INTERRUPTS_RESERVED_113 = 196;
static const int INTERRUPTS_RESERVED_114 = 197;
static const int INTERRUPTS_RESERVED_115 = 198;
static const int INTERRUPTS_RESERVED_116 = 199;
static const int INTERRUPTS_RESERVED_117 = 200;
static const int INTERRUPTS_RESERVED_118 = 201;
static const int INTERRUPTS_RESERVED_119 = 202;
static const int INTERRUPTS_RESERVED_120 = 203;
static const int INTERRUPTS_RESERVED_121 = 204;
static const int INTERRUPTS_RESERVED_122 = 205;
static const int INTERRUPTS_RESERVED_123 = 206;
static const int INTERRUPTS_RESERVED_124 = 207;
static const int INTERRUPTS_RESERVED_125 = 208;
static const int INTERRUPTS_RESERVED_126 = 209;
static const int INTERRUPTS_RESERVED_127 = 210;
static const int INTERRUPTS_RESERVED_128 = 211;
static const int INTERRUPTS_RESERVED_129 = 212;
static const int INTERRUPTS_RESERVED_130 = 213;
static const int INTERRUPTS_RESERVED_131 = 214;
static const int INTERRUPTS_RESERVED_132 = 215;
static const int INTERRUPTS_RESERVED_133 = 216;
static const int INTERRUPTS_RESERVED_134 = 217;
static const int INTERRUPTS_RESERVED_135 = 218;
static const int INTERRUPTS_RESERVED_136 = 219;
static const int INTERRUPTS_RESERVED_137 = 220;
static const int INTERRUPTS_RESERVED_138 = 221;
static const int INTERRUPTS_RESERVED_139 = 222;
static const int INTERRUPTS_RESERVED_140 = 223;
static const int INTERRUPTS_RESERVED_141 = 224;
static const int INTERRUPTS_RESERVED_142 = 225;
static const int INTERRUPTS_RESERVED_143 = 226;
static const int INTERRUPTS_RESERVED_144 = 227;
static const int INTERRUPTS_RESERVED_145 = 228;
static const int INTERRUPTS_RESERVED_146 = 229;
static const int INTERRUPTS_RESERVED_147 = 230;
static const int INTERRUPTS_RESERVED_148 = 231;
static const int INTERRUPTS_RESERVED_149 = 232;
static const int INTERRUPTS_RESERVED_150 = 233;
static const int INTERRUPTS_RESERVED_151 = 234;
static const int INTERRUPTS_RESERVED_152 = 235;
static const int INTERRUPTS_RESERVED_153 = 236;
static const int INTERRUPTS_RESERVED_154 = 237;
static const int INTERRUPTS_RESERVED_155 = 238;
static const int INTERRUPTS_RESERVED_156 = 239;
static const int INTERRUPTS_RESERVED_157 = 240;
static const int INTERRUPTS_RESERVED_158 = 241;
static const int INTERRUPTS_RESERVED_159 = 242;
static const int INTERRUPTS_RESERVED_160 = 243;
static const int INTERRUPTS_RESERVED_161 = 244;
static const int INTERRUPTS_RESERVED_162 = 245;
static const int INTERRUPTS_RESERVED_163 = 246;
static const int INTERRUPTS_RESERVED_164 = 247;
static const int INTERRUPTS_RESERVED_165 = 248;
static const int INTERRUPTS_RESERVED_166 = 249;
static const int INTERRUPTS_RESERVED_167 = 250;
static const int INTERRUPTS_RESERVED_168 = 251;
static const int INTERRUPTS_RESERVED_169 = 252;
static const int INTERRUPTS_RESERVED_170 = 253;
static const int INTERRUPTS_RESERVED_171 = 254;
static const int INTERRUPTS_RESERVED_172 = 255;
static const int INTERRUPTS_RESERVED_173 = 256;
static const int INTERRUPTS_RESERVED_174 = 257;
static const int INTERRUPTS_RESERVED_175 = 258;
static const int INTERRUPTS_RESERVED_176 = 259;
static const int INTERRUPTS_RESERVED_177 = 260;
static const int INTERRUPTS_RESERVED_178 = 261;
static const int INTERRUPTS_RESERVED_179 = 262;
static const int INTERRUPTS_RESERVED_180 = 263;
static const int INTERRUPTS_RESERVED_181 = 264;
static const int INTERRUPTS_RESERVED_182 = 265;
static const int INTERRUPTS_RESERVED_183 = 266;
static const int INTERRUPTS_RESERVED_184 = 267;
static const int INTERRUPTS_RESERVED_185 = 268;
static const int INTERRUPTS_RESERVED_186 = 269;
static const int INTERRUPTS_RESERVED_187 = 270;
static const int INTERRUPTS_RESERVED_188 = 271;
static const int INTERRUPTS_RESERVED_189 = 272;
static const int INTERRUPTS_RESERVED_190 = 273;
static const int INTERRUPTS_RESERVED_191 = 274;
static const int INTERRUPTS_RESERVED_192 = 275;
static const int INTERRUPTS_RESERVED_193 = 276;
static const int INTERRUPTS_RESERVED_194 = 277;
static const int INTERRUPTS_RESERVED_195 = 278;
static const int INTERRUPTS_RESERVED_196 = 279;
static const int INTERRUPTS_RESERVED_197 = 280;
static const int INTERRUPTS_RESERVED_198 = 281;
static const int INTERRUPTS_RESERVED_199 = 282;
static const int INTERRUPTS_RESERVED_200 = 283;
static const int INTERRUPTS_RESERVED_201 = 284;
static const int INTERRUPTS_RESERVED_202 = 285;
static const int INTERRUPTS_RESERVED_203 = 286;
static const int INTERRUPTS_RESERVED_204 = 287;
static const int INTERRUPTS_RESERVED_205 = 288;
static const int INTERRUPTS_RESERVED_206 = 289;
static const int INTERRUPTS_RESERVED_207 = 290;
static const int INTERRUPTS_RESERVED_208 = 291;
static const int INTERRUPTS_RESERVED_209 = 292;
static const int INTERRUPTS_RESERVED_210 = 293;
static const int INTERRUPTS_RESERVED_211 = 294;
static const int INTERRUPTS_RESERVED_212 = 295;
static const int INTERRUPTS_RESERVED_213 = 296;
static const int INTERRUPTS_RESERVED_214 = 297;
static const int INTERRUPTS_RESERVED_215 = 298;
static const int INTERRUPTS_RESERVED_216 = 299;
static const int INTERRUPTS_RESERVED_217 = 300;
static const int INTERRUPTS_RESERVED_218 = 301;
static const int INTERRUPTS_RESERVED_219 = 302;
static const int INTERRUPTS_RESERVED_220 = 303;
static const int INTERRUPTS_RESERVED_221 = 304;
static const int INTERRUPTS_RESERVED_222 = 305;
static const int INTERRUPTS_RESERVED_223 = 306;
static const int INTERRUPTS_RESERVED_224 = 307;
static const int INTERRUPTS_RESERVED_225 = 308;
static const int INTERRUPTS_RESERVED_226 = 309;
static const int INTERRUPTS_RESERVED_227 = 310;
static const int INTERRUPTS_RESERVED_228 = 311;
static const int INTERRUPTS_RESERVED_229 = 312;
static const int INTERRUPTS_RESERVED_230 = 313;
static const int INTERRUPTS_RESERVED_231 = 314;
static const int INTERRUPTS_RESERVED_232 = 315;
static const int INTERRUPTS_RESERVED_233 = 316;
static const int INTERRUPTS_RESERVED_234 = 317;
static const int INTERRUPTS_RESERVED_235 = 318;
static const int INTERRUPTS_RESERVED_236 = 319;
static const int INTERRUPTS_RESERVED_237 = 320;
static const int INTERRUPTS_RESERVED_238 = 321;
static const int INTERRUPTS_RESERVED_239 = 322;
static const int INTERRUPTS_RESERVED_240 = 323;
static const int INTERRUPTS_RESERVED_241 = 324;
static const int INTERRUPTS_RESERVED_242 = 325;
static const int INTERRUPTS_RESERVED_243 = 326;
static const int INTERRUPTS_RESERVED_244 = 327;
static const int INTERRUPTS_RESERVED_245 = 328;
static const int INTERRUPTS_RESERVED_246 = 329;
static const int INTERRUPTS_RESERVED_247 = 330;
static const int INTERRUPTS_RESERVED_248 = 331;
static const int INTERRUPTS_RESERVED_249 = 332;
static const int INTERRUPTS_RESERVED_250 = 333;
static const int INTERRUPTS_RESERVED_251 = 334;
static const int INTERRUPTS_RESERVED_252 = 335;
static const int INTERRUPTS_RESERVED_253 = 336;
static const int INTERRUPTS_RESERVED_254 = 337;
static const int INTERRUPTS_RESERVED_255 = 338;
static const int INTERRUPTS_RESERVED_256 = 339;
static const int INTERRUPTS_RESERVED_257 = 340;
static const int INTERRUPTS_RESERVED_258 = 341;
static const int INTERRUPTS_RESERVED_259 = 342;
static const int INTERRUPTS_RESERVED_260 = 343;
static const int INTERRUPTS_RESERVED_261 = 344;
static const int INTERRUPTS_RESERVED_262 = 345;
static const int INTERRUPTS_RESERVED_263 = 346;
static const int INTERRUPTS_RESERVED_264 = 347;
static const int INTERRUPTS_RESERVED_265 = 348;
static const int INTERRUPTS_RESERVED_266 = 349;
static const int INTERRUPTS_RESERVED_267 = 350;
static const int INTERRUPTS_RESERVED_268 = 351;
static const int INTERRUPTS_RESERVED_269 = 352;
static const int INTERRUPTS_RESERVED_270 = 353;
static const int INTERRUPTS_RESERVED_271 = 354;
static const int INTERRUPTS_RESERVED_272 = 355;
static const int INTERRUPTS_RESERVED_273 = 356;
static const int INTERRUPTS_RESERVED_274 = 357;
static const int INTERRUPTS_RESERVED_275 = 358;
static const int INTERRUPTS_RESERVED_276 = 359;
static const int INTERRUPTS_RESERVED_277 = 360;
static const int INTERRUPTS_RESERVED_278 = 361;
static const int INTERRUPTS_RESERVED_279 = 362;
static const int INTERRUPTS_RESERVED_280 = 363;
static const int INTERRUPTS_RESERVED_281 = 364;
static const int INTERRUPTS_RESERVED_282 = 365;
static const int INTERRUPTS_RESERVED_283 = 366;
static const int INTERRUPTS_RESERVED_284 = 367;
static const int INTERRUPTS_RESERVED_285 = 368;
static const int INTERRUPTS_RESERVED_286 = 369;
static const int INTERRUPTS_RESERVED_287 = 370;
static const int INTERRUPTS_RESERVED_288 = 371;
static const int INTERRUPTS_RESERVED_289 = 372;
static const int INTERRUPTS_RESERVED_290 = 373;
static const int INTERRUPTS_RESERVED_291 = 374;
static const int INTERRUPTS_RESERVED_292 = 375;
static const int INTERRUPTS_RESERVED_293 = 376;
static const int INTERRUPTS_RESERVED_294 = 377;
static const int INTERRUPTS_RESERVED_295 = 378;
static const int INTERRUPTS_RESERVED_296 = 379;
static const int INTERRUPTS_RESERVED_297 = 380;
static const int INTERRUPTS_RESERVED_298 = 381;
static const int INTERRUPTS_RESERVED_299 = 382;
static const int INTERRUPTS_RESERVED_300 = 383;
static const int INTERRUPTS_RESERVED_301 = 384;
static const int INTERRUPTS_RESERVED_302 = 385;
static const int INTERRUPTS_RESERVED_303 = 386;
static const int INTERRUPTS_RESERVED_304 = 387;
static const int INTERRUPTS_RESERVED_305 = 388;
static const int INTERRUPTS_RESERVED_306 = 389;
static const int INTERRUPTS_RESERVED_307 = 390;
static const int INTERRUPTS_RESERVED_308 = 391;
static const int INTERRUPTS_RESERVED_309 = 392;
static const int INTERRUPTS_RESERVED_310 = 393;
static const int INTERRUPTS_RESERVED_311 = 394;
static const int INTERRUPTS_RESERVED_312 = 395;
static const int INTERRUPTS_RESERVED_313 = 396;
static const int INTERRUPTS_RESERVED_314 = 397;
static const int INTERRUPTS_RESERVED_315 = 398;
static const int INTERRUPTS_RESERVED_316 = 399;
static const int INTERRUPTS_RESERVED_317 = 400;
static const int INTERRUPTS_RESERVED_318 = 401;
static const int INTERRUPTS_RESERVED_319 = 402;
static const int INTERRUPTS_RESERVED_320 = 403;
static const int INTERRUPTS_RESERVED_321 = 404;
static const int INTERRUPTS_RESERVED_322 = 405;
static const int INTERRUPTS_RESERVED_323 = 406;
static const int INTERRUPTS_RESERVED_324 = 407;
static const int INTERRUPTS_RESERVED_325 = 408;
static const int INTERRUPTS_RESERVED_326 = 409;
static const int INTERRUPTS_RESERVED_327 = 410;
static const int INTERRUPTS_RESERVED_328 = 411;
static const int INTERRUPTS_RESERVED_329 = 412;
static const int INTERRUPTS_RESERVED_330 = 413;
static const int INTERRUPTS_RESERVED_331 = 414;
static const int INTERRUPTS_RESERVED_332 = 415;
static const int INTERRUPTS_RESERVED_333 = 416;
static const int INTERRUPTS_RESERVED_334 = 417;
static const int INTERRUPTS_RESERVED_335 = 418;
static const int INTERRUPTS_RESERVED_336 = 419;
static const int INTERRUPTS_RESERVED_337 = 420;
static const int INTERRUPTS_RESERVED_338 = 421;
static const int INTERRUPTS_RESERVED_339 = 422;
static const int INTERRUPTS_RESERVED_340 = 423;
static const int INTERRUPTS_RESERVED_341 = 424;
static const int INTERRUPTS_RESERVED_342 = 425;
static const int INTERRUPTS_RESERVED_343 = 426;
static const int INTERRUPTS_RESERVED_344 = 427;
static const int INTERRUPTS_RESERVED_345 = 428;
static const int INTERRUPTS_RESERVED_346 = 429;
static const int INTERRUPTS_RESERVED_347 = 430;
static const int INTERRUPTS_RESERVED_348 = 431;
static const int INTERRUPTS_RESERVED_349 = 432;
static const int INTERRUPTS_RESERVED_350 = 433;
static const int INTERRUPTS_RESERVED_351 = 434;
static const int INTERRUPTS_RESERVED_352 = 435;
static const int INTERRUPTS_RESERVED_353 = 436;
static const int INTERRUPTS_RESERVED_354 = 437;
static const int INTERRUPTS_RESERVED_355 = 438;
static const int INTERRUPTS_RESERVED_356 = 439;
static const int INTERRUPTS_RESERVED_357 = 440;
static const int INTERRUPTS_RESERVED_358 = 441;
static const int INTERRUPTS_RESERVED_359 = 442;
static const int INTERRUPTS_RESERVED_360 = 443;
static const int INTERRUPTS_RESERVED_361 = 444;
static const int INTERRUPTS_RESERVED_362 = 445;
static const int INTERRUPTS_RESERVED_363 = 446;
static const int INTERRUPTS_RESERVED_364 = 447;
static const int INTERRUPTS_RESERVED_365 = 448;
static const int INTERRUPTS_RESERVED_366 = 449;
static const int INTERRUPTS_RESERVED_367 = 450;
static const int INTERRUPTS_RESERVED_368 = 451;
static const int INTERRUPTS_RESERVED_369 = 452;
static const int INTERRUPTS_RESERVED_370 = 453;
static const int INTERRUPTS_RESERVED_371 = 454;
static const int INTERRUPTS_RESERVED_372 = 455;
static const int INTERRUPTS_RESERVED_373 = 456;
static const int INTERRUPTS_RESERVED_374 = 457;
static const int INTERRUPTS_RESERVED_375 = 458;
static const int INTERRUPTS_RESERVED_376 = 459;
static const int INTERRUPTS_RESERVED_377 = 460;
static const int INTERRUPTS_RESERVED_378 = 461;
static const int INTERRUPTS_RESERVED_379 = 462;
static const int INTERRUPTS_RESERVED_380 = 463;
static const int INTERRUPTS_RESERVED_381 = 464;
static const int INTERRUPTS_RESERVED_382 = 465;
static const int INTERRUPTS_RESERVED_383 = 466;
static const int INTERRUPTS_RESERVED_384 = 467;
static const int INTERRUPTS_RESERVED_385 = 468;
static const int INTERRUPTS_RESERVED_386 = 469;
static const int INTERRUPTS_RESERVED_387 = 470;
static const int INTERRUPTS_RESERVED_388 = 471;
static const int INTERRUPTS_RESERVED_389 = 472;
static const int INTERRUPTS_RESERVED_390 = 473;
static const int INTERRUPTS_RESERVED_391 = 474;
static const int INTERRUPTS_RESERVED_392 = 475;
static const int INTERRUPTS_RESERVED_393 = 476;
static const int INTERRUPTS_RESERVED_394 = 477;
static const int INTERRUPTS_RESERVED_395 = 478;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK10DX256VLH7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

